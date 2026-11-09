// Stand-ins for the native side of the standalone Wasmtime host, so that its
// JavaScript (src/wasmtime-*.mjs) runs in-process in unit tests:
//   - the FFI library (koffi), for the Wasmtime host files only (koffi.cjs),
//     with a Lean instance played by `Guest`: linear memory, exports, the
//     runtime callbacks the instance calls, and guest threads' entry points;
//   - node:worker_threads, per module instance: a host file imported with
//     `?lasm-thread=<id>` sees `threads[id]` (a worker's parentPort and
//     workerData, a Worker class that records the workers it starts).
// Everything else (Node's host, native-files' own FFI) is real.
import assert from 'node:assert/strict';
import { registerHooks } from 'node:module';
import { EventEmitter } from 'node:events';
import { MessageChannel, receiveMessageOnPort } from 'node:worker_threads';
import { createRequire } from 'node:module';

const realKoffi = createRequire(import.meta.url)('koffi');

const koffi = new URL('./koffi.cjs', import.meta.url).href;
globalThis.__lasmThreads ??= {};
let installed = false;
export function installStandIns() {
  if (installed) return;
  installed = true;
  registerHooks({
    resolve(specifier, context, next) {
      const parent = context.parentURL ?? '';
      if (/[/\\]src[/\\]/.test(parent) && (specifier === 'koffi' || /[/\\]koffi[/\\]index\.cjs$/.test(specifier)))
        return { url: koffi, format: 'commonjs', shortCircuit: true };
      const thread = /[?&]lasm-thread=(\w+)/.exec(parent)?.[1];
      if (thread && specifier === 'node:worker_threads') return { url: `lasm-stand-in:worker-threads?${thread}`, shortCircuit: true };
      return next(specifier, context);
    },
    load(url, context, next) {
      if (!url.startsWith('lasm-stand-in:worker-threads?')) return next(url, context);
      const id = JSON.stringify(url.slice(url.indexOf('?') + 1));
      return { format: 'module', shortCircuit: true, source: `const t = globalThis.__lasmThreads[${id}];
export const Worker = t.Worker, MessageChannel = t.MessageChannel, receiveMessageOnPort = t.receiveMessageOnPort,
  isMainThread = t.isMainThread, parentPort = t.parentPort, workerData = t.workerData;` };
    },
  });
}

let modules = 0;
/** A fresh instance of src/<file> whose node:worker_threads is `thread`. */
export async function importWithThread(file, thread) {
  const id = 't' + ++modules;
  globalThis.__lasmThreads[id] = { MessageChannel, receiveMessageOnPort, isMainThread: false, parentPort: null, workerData: undefined, Worker: FakeWorker, ...thread };
  return import(new URL(`../../../src/${file}?lasm-thread=${id}`, import.meta.url).href);
}

/** A parent port: messages the module posts, and messages to it. */
export class FakePort extends EventEmitter {
  constructor(onPost = () => {}) { super(); this.posted = []; this.onPost = onPost; this.closed = false; }
  postMessage(message) { this.posted.push(message); this.onPost(message, this); }
  close() { this.closed = true; }
}
/** A Worker: records how it was started; the test plays its messages and exit. */
export class FakeWorker extends EventEmitter {
  static started = [];
  constructor(url, options) {
    super();
    this.url = String(url); this.options = options; this.sent = []; this.refs = 0; this.terminated = false;
    const stream = () => ({ [Symbol('kIncrementsPortRef')]: true, [Symbol('kStartedReading')]: false, pipe() {}, on() {} });
    this.stdout = stream(); this.stderr = stream();
    FakeWorker.started.push(this);
  }
  postMessage(message) { this.sent.push(message); }
  ref() { this.refs++; }
  async terminate() { this.terminated = true; this.emit('exit', 1); return 1; }
}

/** A Lean instance: memory, exports and the callbacks it was given. */
export class Guest {
  constructor({ bytes = 1 << 20, exports = {}, self = 0x2000n, globals = 6, thread } = {}) {
    this.memory = new Uint8Array(bytes); this.views = []; this.calls = []; this.heap = 0x10000; this.self = self;
    this.globalCount = globals; this.thread = thread; this.address = BigInt(0x7f0000 + Math.floor(Math.random() * 0xffff) * 16);
    this.exports = {
      malloc: ([n]) => { const p = this.heap; this.heap += Math.ceil(Number(n) / 16) * 16 + 16; return BigInt(p); },
      calloc: ([n, size]) => { const p = this.heap; this.heap += Math.ceil(Number(n * size) / 16) * 16 + 16; this.memory.fill(0, p, p + Number(n * size)); return BigInt(p); },
      pthread_self: () => this.self, emscripten_stack_get_base: () => 0x80000n, emscripten_stack_get_end: () => 0x40000n, _emscripten_dlsync_self: () => 1n,
      ...exports };
  }
  /** Writes JavaScript's pending view changes into memory (views are copies here). */
  flush() {
    for (const { offset, copy, original } of this.views) for (let i = 0; i < copy.length; i++) if (copy[i] !== original[i]) this.memory[offset + i] = copy[i];
    this.views = [];
  }
  viewAt(offset, size) {
    this.flush();
    const buffer = this.memory.buffer.slice(offset, offset + size);
    this.views.push({ offset, copy: new Uint8Array(buffer), original: this.memory.slice(offset, offset + size) });
    return buffer;
  }
  invoke(name, args) {
    this.flush();
    this.calls.push([name, ...args.map(BigInt)]);
    const fn = this.exports[name];
    const result = fn ? fn(args.map(BigInt), this) : 0n;
    this.flush();
    return BigInt(result ?? 0n);
  }
  u64(offset) { this.flush(); return new DataView(this.memory.buffer).getBigUint64(Number(offset), true); }
  setU64(offset, value) { this.flush(); new DataView(this.memory.buffer).setBigUint64(Number(offset), BigInt(value), true); }
  u32(offset) { this.flush(); return new DataView(this.memory.buffer).getUint32(Number(offset), true); }
  setU32(offset, value) { this.flush(); new DataView(this.memory.buffer).setUint32(Number(offset), value, true); }
  bytesAt(offset, length) { this.flush(); return Buffer.from(this.memory.subarray(Number(offset), Number(offset) + Number(length))); }
  write(offset, bytes) { this.flush(); this.memory.set(bytes, Number(offset)); }
  string(offset) { this.flush(); const at = Number(offset); return Buffer.from(this.memory.subarray(at, this.memory.indexOf(0, at))).toString(); }
  /** Calls the instance's runtime callback as the C runtime does: { status, value }. */
  runtimeCall(kind, a = 0n, b = 0n, c = 0n, d = 0n, e = 0n) {
    this.flush();
    const output = {};
    const status = this.runtime(kind, BigInt(a), BigInt(b), BigInt(c), BigInt(d), BigInt(e), output);
    this.flush();
    return { status, value: output.value };
  }
}

/** The FFI stand-in for `guestFor(createArguments) → Guest | null` (null: creation fails with `failure`). */
export function standInKoffi({ guestFor, failure = 'stand-in creation failure', errno = () => 0, libc = {}, helper = {} } = {}) {
  const state = { loaded: [], registered: [], unregistered: [], config: {}, guests: [], destroyed: [], exits: [], signatures: [] };
  const fail = (error, capacity, message) => { error.fill(0); error.write(message.slice(0, capacity - 1)); };
  const library = {
    lasm_lean_instance_new: (cache, clock, mailbox, environment, size, count, name, parent, spawn, events, error, capacity) => {
      const guest = guestFor({ cache, clock, mailbox, environment: Buffer.from(environment), size, count, name, parent, spawn, events });
      if (!guest) { fail(error, capacity, failure); return null; }
      Object.assign(guest, { clock, mailbox, spawn, events });
      state.guests.push(guest);
      return guest;
    },
    lasm_lean_instance_delete: probe => { state.destroyed.push(probe); },
    lasm_lean_instance_call: (probe, name, args, nargs, resultCount, result, error, capacity) => {
      assert.equal(nargs, args.length);
      try { result[0] = probe.invoke(name, args); return 0; }
      catch (failure) { fail(error, capacity, failure.message); return 1; }
    },
    lasm_lean_instance_details: (probe, values) => { values[3] = probe.memory.length; },
    lasm_lean_instance_memory_window: (probe, offset, length) => Number(offset) + length <= probe.memory.length ? { guest: probe, offset: Number(offset) } : null,
    lasm_lean_instance_mailbox_register: (probe, pthread, error, capacity) => { probe.mailboxRegistered = pthread; return probe.mailboxStatus ?? 0; },
    lasm_lean_instance_call_pointer: (probe, pointer, argument, result, error, capacity) => {
      const outcome = probe.thread(BigInt(pointer), BigInt(argument), probe);
      if (outcome.status) fail(error, capacity, outcome.message ?? 'trap');
      result[0] = outcome.value ?? 0n;
      return outcome.status ?? 0;
    },
    lasm_lean_native_stack_bytes: () => state.nativeStack ?? 96 * 1024 ** 2,
    lasm_lean_instance_set_runtime: (probe, callback) => { probe.runtime = callback.fn; },
    lasm_lean_instance_function_global_count: probe => probe.globalCount,
    lasm_lean_instance_function_global: (probe, name, pointer, error, capacity) => {
      if (probe.missingGlobal === name) { fail(error, capacity, `no global ${name}`); return 1; }
      pointer[0] = probe.globalPointers?.[name] ?? 0x100 + name.length; return 0;
    },
    lasm_lean_signal_load: (probe, offset) => probe.u32(offset),
    lasm_lean_signal_store: (probe, offset, value) => { probe.setU32(offset, value); return probe.storeStatus ?? 0; },
    lasm_lean_signal_wait: (probe, offset, expected, timeout, error, capacity) => { probe.waits = (probe.waits ?? 0) + 1; probe.onWait?.(offset, expected, timeout); return 0; },
    lasm_posix_openat: helper.openat, lasm_posix_fstat: helper.fstat,
  };
  library.lasm_lean_instance_new_large = library.lasm_lean_instance_new;
  const ffi = {
    config(value) { if (value) Object.assign(state.config, value); return { ...state.config }; },
    // The C library stays real except for the prototypes `libc` replaces
    // (native-files binds by name, with separate result and argument types).
    load(path) {
      if (path === null) {
        const real = realKoffi.load(null);
        return { func(signature, ...rest) {
          const name = !rest.length && /([A-Za-z_]\w*)\s*\(/.exec(signature)?.[1];
          if (name && libc[name]) { state.signatures.push(signature); return libc[name]; }
          return real.func(signature, ...rest);
        } };
      }
      state.loaded.push(path);
      return { func(signature) {
        state.signatures.push(signature);
        const name = /([A-Za-z_]\w*)\s*\(/.exec(signature)[1];
        const fn = library[name];
        if (!fn) throw new Error(`stand-in has no ${name}`);
        return fn;
      } };
    },
    proto: signature => signature, pointer: type => ({ pointerTo: type }),
    register(fn, type) { const pointer = { fn, type }; state.registered.push(pointer); return pointer; },
    unregister(pointer) { state.unregistered.push(pointer); },
    address: probe => probe.address,
    view: (pointer, size) => pointer.guest.viewAt(pointer.offset, size),
    encode(output, type, value) { assert.equal(type, 'uint64_t'); output.value = value; },
    errno, os: { errno: { EBADF: 9, ENOENT: 2, EACCES: 13, EINVAL: 22, EISDIR: 21, ENOTDIR: 20 } },
  };
  globalThis.__lasmKoffi = ffi;
  return state;
}
