// JavaScript interop for Lasm programs (`import Lasm.JS`): the host side of
// host operations 200-219, reached through the Lean runtime's host call ABI
// (lasm_node_call / lasm_node_copy / lasm_node_release) from the C glue in
// library/c/lasm_js.c. Design and measurements: docs/JS_INTEROP.md.
//
// Values cross in one wire format (little endian), written and read by Lean
// (library/Lasm/JS/Wire.lean) and here:
//   0 undefined  1 null  2 false  3 true  4 number (f64)  5 string (u32 n, UTF-8)
//   6 bigint (u32 n, decimal)  7 bytes (u32 n, Uint8Array)  8 array (u32 n, n values)
//   9 object (u32 n, n × (u32 key length, key UTF-8, value))
//  10 reference (u32 handle, u32 n, description UTF-8): a JavaScript value held
//     in this module's handle table on Lean's behalf, released by Lean's finalizer.
// "Data" conversion turns primitives, arrays, plain objects, Uint8Array and
// bigint into wire values and every other value (functions, class instances,
// promises, Map, Date, …) into a reference. "Reference" conversion returns a
// reference for any value, primitives included.
//
// Operations (arg bit 0 = reference conversion of the result):
//   200 protocol version   201 require(specifier)   202 globalThis
//   203 get(handle, key, or an array of keys: an object of them)   204 set(handle, [key, value])
//   206 describe(handle)
//   205 call [target, receiver or method name, arguments]; arg flags 2 await a
//       promise result, 4 construct, 8 method call
//   214 typed binding [Lean name, module, export path, arguments]; flags as 205
//   207 resolve the Lean promise at arg when a value settles (interop thread event)
//   208 replies of Lean callbacks   209 interop thread long poll (events)
//   210 a JavaScript function calling Lean function `handle` (arg 1 async, 2 sync)
//   211 register the synchronous-callback channel   213 statistics
import { createRequire } from 'node:module';
import { dirname, join } from 'node:path';
import { HandleTable } from './handle-table.mjs';

export const jsProtocolVersion = 1;
export const firstJsHandle = 0x40000000;
const decoder = new TextDecoder();
const maximumDepth = 64;

/** A JavaScript failure reported to Lean as an IO user error with this text. */
export function jsFailure(error) {
  let text;
  if (error instanceof Error) text = `${error.name}: ${error.message}`;
  else { try { text = `Uncaught JavaScript value: ${typeof error === 'string' ? error : JSON.stringify(error) ?? String(error)}`; } catch { text = 'Uncaught JavaScript value'; } }
  return Object.assign(new Error(text), { leanUserError: true, code: 'EJS' });
}
const failure = message => jsFailure(new TypeError(message));

/** A short description of a JavaScript value for Lean's error messages. */
export function describe(value) {
  if (value === null) return 'null';
  switch (typeof value) {
  case 'undefined': return 'undefined';
  case 'string': return `string ${JSON.stringify(value.length > 60 ? value.slice(0, 57) + '...' : value)}`;
  case 'number': case 'boolean': return `${typeof value} ${String(value)}`;
  case 'bigint': return `bigint ${value}n`;
  case 'symbol': return `symbol ${String(value.description ?? '')}`;
  case 'function': return `function ${value.name || '(anonymous)'}${value.length ? ` (${value.length} parameter${value.length === 1 ? '' : 's'})` : ''}`;
  default: {
    if (Array.isArray(value)) return `array of length ${value.length}`;
    if (typeof value.then === 'function') return 'promise';
    const name = Object.getPrototypeOf(value)?.constructor?.name;
    if (value instanceof Uint8Array) return `${name ?? 'Uint8Array'} of length ${value.length}`;
    let keys = '';
    try { keys = Object.keys(value).slice(0, 6).join(', '); } catch { /* exotic object */ }
    return `${name && name !== 'Object' ? `${name} object` : 'object'}${keys ? ` {${keys}${Object.keys(value).length > 6 ? ', …' : ''}}` : ''}`;
  }
  }
}

class Writer {
  constructor() { this.buffer = Buffer.allocUnsafe(256); this.length = 0; }
  reserve(n) {
    if (this.length + n <= this.buffer.length) return;
    const next = Buffer.allocUnsafe(Math.max(this.buffer.length * 2, this.length + n));
    this.buffer.copy(next, 0, 0, this.length); this.buffer = next;
  }
  u8(v) { this.reserve(1); this.buffer[this.length++] = v; }
  u32(v) { this.reserve(4); this.buffer.writeUInt32LE(v, this.length); this.length += 4; }
  f64(v) { this.reserve(8); this.buffer.writeDoubleLE(v, this.length); this.length += 8; }
  u64(v) { this.reserve(8); this.buffer.writeBigUInt64LE(BigInt.asUintN(64, BigInt(v)), this.length); this.length += 8; }
  bytes(b) { this.u32(b.length); this.reserve(b.length); this.buffer.set(b, this.length); this.length += b.length; }
  string(s) {
    const n = Buffer.byteLength(s);
    this.u32(n); this.reserve(n); this.buffer.write(s, this.length, 'utf8'); this.length += n;
  }
  result() { return this.buffer.subarray(0, this.length); }
}
class Reader {
  constructor(bytes) { this.bytes = Buffer.from(bytes.buffer, bytes.byteOffset, bytes.byteLength); this.offset = 0; }
  need(n) { if (this.offset + n > this.bytes.length) throw failure('Malformed Lasm.JS value (truncated)'); }
  u8() { this.need(1); return this.bytes[this.offset++]; }
  u32() { this.need(4); const v = this.bytes.readUInt32LE(this.offset); this.offset += 4; return v; }
  u64() { this.need(8); const v = this.bytes.readBigUInt64LE(this.offset); this.offset += 8; return v; }
  f64() { this.need(8); const v = this.bytes.readDoubleLE(this.offset); this.offset += 8; return v; }
  raw() { const n = this.u32(); this.need(n); const v = this.bytes.subarray(this.offset, this.offset + n); this.offset += n; return v; }
  string() { return decoder.decode(this.raw()); }
  done() { return this.offset === this.bytes.length; }
}

export function createNodeJs({ appPath, wasmMemory, serveSync } = {}) {
  const values = new HandleTable({ first: firstJsHandle });
  const moduleRequire = createRequire(appPath ? join(dirname(appPath), 'package.json') : join(process.cwd(), 'package.json'));
  const stats = { released: 0, callbacks: 0, syncCallbacks: 0 };
  const bindings = new Map();

  function reference(value) { return values.allocate(value); }
  function lookup(id) {
    if (!values.has(id)) throw failure(`Invalid or released Lasm.JS value handle ${id}`);
    return values.get(id);
  }
  function plain(value) {
    const prototype = Object.getPrototypeOf(value);
    return prototype === Object.prototype || prototype === null;
  }
  function write(w, value, mode, depth = 0) {
    if (depth > maximumDepth) throw failure('JavaScript value nests too deeply to convert to Lean data (more than 64 levels)');
    // References carry no description: Lean asks for one (op 206) only for an error message.
    if (mode === 'reference') { w.u8(10); w.u32(reference(value)); w.u32(0); return; }
    if (value === undefined) return w.u8(0);
    if (value === null) return w.u8(1);
    switch (typeof value) {
    case 'boolean': return w.u8(value ? 3 : 2);
    case 'number': w.u8(4); return w.f64(value);
    case 'string': w.u8(5); return w.string(value);
    case 'bigint': w.u8(6); return w.string(value.toString());
    case 'object':
      if (value instanceof Uint8Array) { w.u8(7); return w.bytes(value); }
      if (Array.isArray(value)) { w.u8(8); w.u32(value.length); for (const item of value) write(w, item, mode, depth + 1); return; }
      if (plain(value) && typeof value.then !== 'function') {
        const keys = Object.keys(value);
        w.u8(9); w.u32(keys.length);
        for (const key of keys) { w.string(key); write(w, value[key], mode, depth + 1); }
        return;
      }
    }
    w.u8(10); w.u32(reference(value)); w.u32(0);
  }
  function encode(value, mode) { const w = new Writer(); write(w, value, mode); return w.result(); }
  function read(r) {
    const tag = r.u8();
    switch (tag) {
    case 0: return undefined;
    case 1: return null;
    case 2: return false;
    case 3: return true;
    case 4: return r.f64();
    case 5: return r.string();
    case 6: return BigInt(r.string());
    case 7: return new Uint8Array(r.raw());
    case 8: { const n = r.u32(), items = new Array(n); for (let i = 0; i < n; i++) items[i] = read(r); return items; }
    case 9: { const n = r.u32(), object = {}; for (let i = 0; i < n; i++) { const key = r.string(); object[key] = read(r); } return object; }
    case 10: { const id = r.u32(); r.raw(); return lookup(id); }
    default: throw failure(`Malformed Lasm.JS value (tag ${tag})`);
    }
  }
  function decode(bytes) { const r = new Reader(bytes); const value = read(r); if (!r.done()) throw failure('Malformed Lasm.JS value (trailing bytes)'); return value; }
  const modeOf = arg => (Number(arg) & 1) ? 'reference' : 'data';

  // ---- events delivered to Lean's interop thread (op 209 long poll) ----
  const events = [];
  let waiter;
  const push = event => {
    events.push(event);
    if (waiter) { const w = waiter; waiter = undefined; w(); }
  };
  function takeEvents() {
    const w = new Writer();
    for (let i = 0; i < 1024 && events.length; i++) {
      const event = events.shift();
      w.u8(event.kind);
      if (event.kind === 1) { w.u64(event.promise); w.u8(event.failed ? 1 : 0); w.bytes(event.bytes); }
      else if (event.kind === 2) { w.u64(event.call); w.u32(event.fn); w.bytes(event.bytes); }
      else w.u32(event.fn);
    }
    return w.result();
  }
  // Lean functions exposed as JavaScript functions (op 210).
  const pendingCalls = new Map();
  let nextCall = 1n;
  const leanFunctions = new FinalizationRegistry(fn => push({ kind: 3, fn }));
  function asyncFunction(fn) {
    const f = function (...args) {
      return new Promise((resolve, reject) => {
        const call = nextCall++;
        pendingCalls.set(call, { resolve, reject });
        stats.callbacks++;
        let bytes;
        try { bytes = encode(args, 'data'); } catch (error) { pendingCalls.delete(call); return reject(error); }
        push({ kind: 2, call, fn, bytes });
      });
    };
    leanFunctions.register(f, fn);
    return f;
  }
  // Synchronous Lean functions: the main thread hands the call to Lean's
  // synchronous-callback thread through a shared-memory channel and waits for
  // it, serving that thread's nested synchronous host calls meanwhile.
  // Channel (malloc'ed by the C glue, 8-byte aligned):
  //   0 i32 state (0 idle, 1 call posted, 2 result ready, 3 failure ready)
  //   4 i32 doorbell (incremented by the Lean thread on every host call and result)
  //   8 u32 function id   12 u32 reserved
  //  16 u64 buffer pointer  24 u64 buffer capacity  32 u64 payload length
  let syncChannel, syncBusy = false;
  function syncFunction(fn) {
    const f = function (...args) {
      if (!syncChannel) throw failure('Lasm.JS synchronous callbacks are not started (internal error)');
      if (syncBusy) throw failure('A synchronous Lean callback cannot call another synchronous Lean callback');
      const memory = wasmMemory?.();
      if (!memory) throw failure('Lasm.JS synchronous callbacks need the Wasm memory hook (internal error)');
      const payload = encode(args, 'data');
      const { channel, slot } = syncChannel;
      let buffer = memory.buffer, i32 = new Int32Array(buffer), view = new DataView(buffer);
      const capacity = Number(view.getBigUint64(channel + 24, true));
      if (payload.length > capacity) throw failure(`Arguments of a synchronous Lean callback exceed ${capacity} bytes`);
      new Uint8Array(buffer).set(payload, Number(view.getBigUint64(channel + 16, true)));
      view.setBigUint64(channel + 32, BigInt(payload.length), true);
      view.setUint32(channel + 8, fn, true);
      syncBusy = true; stats.syncCallbacks++;
      try {
        Atomics.store(i32, channel / 4, 1);
        Atomics.notify(i32, channel / 4);
        let bell = Atomics.load(i32, channel / 4 + 1), sequence = Atomics.load(i32, slot / 4);
        for (;;) {
          if (memory.buffer !== buffer) { buffer = memory.buffer; i32 = new Int32Array(buffer); view = new DataView(buffer); }
          const state = Atomics.load(i32, channel / 4);
          if (state === 2 || state === 3) {
            const length = Number(view.getBigUint64(channel + 32, true));
            const start = Number(view.getBigUint64(channel + 16, true));
            const result = new Uint8Array(buffer).slice(start, start + length);
            Atomics.store(i32, channel / 4, 0);
            if (state === 3) throw jsFailure(new Error(decoder.decode(result)));
            return decode(result);
          }
          const current = Atomics.load(i32, slot / 4);
          if (current !== sequence) { sequence = current; serveSync(slot); continue; }
          Atomics.wait(i32, channel / 4 + 1, bell, 1000);
          bell = Atomics.load(i32, channel / 4 + 1);
        }
      } finally { syncBusy = false; }
    };
    leanFunctions.register(f, fn);
    return f;
  }
  function settle(promise, value) {
    Promise.resolve(value).then(result => {
      let bytes, failed = false;
      try { bytes = encode(result, 'data'); } catch (error) { failed = true; bytes = Buffer.from(jsFailure(error).message); }
      push({ kind: 1, promise, failed, bytes });
    }, error => push({ kind: 1, promise, failed: true, bytes: Buffer.from(jsFailure(error).message) }));
  }
  function invoke(target, receiver, args, flags) {
    if (flags & 4) {
      if (typeof target !== 'function') throw failure(`Cannot construct ${describe(target)}: not a constructor`);
      return Reflect.construct(target, args);
    }
    if (flags & 8) {
      const method = target?.[receiver];
      if (typeof method !== 'function') throw failure(`${describe(target)} has no method ${JSON.stringify(String(receiver))} (found ${describe(method)})`);
      return Reflect.apply(method, target, args);
    }
    if (typeof target !== 'function') throw failure(`Cannot call ${describe(target)}: not a function`);
    return Reflect.apply(target, receiver, args);
  }
  function resolvePath(base, path) {
    let value = base;
    for (const key of path ? path.split('.') : []) {
      if (value === null || value === undefined) throw failure(`Cannot read ${JSON.stringify(key)} of ${describe(value)}`);
      value = value[key];
    }
    return value;
  }
  function load(specifier) {
    // Global functions (fetch, setTimeout, structuredClone, …) bind to module "globalThis".
    if (specifier === 'globalThis') return globalThis;
    try { return moduleRequire(specifier); }
    catch (error) {
      if (error?.code === 'MODULE_NOT_FOUND' || error?.code === 'ERR_MODULE_NOT_FOUND')
        throw failure(`Cannot find JavaScript module ${JSON.stringify(specifier)}. Add it to package.json next to your Lean project and run npm install; the build copies node_modules into the deployment.`);
      throw jsFailure(error);
    }
  }
  function dispatch(op, id, arg, request) {
    try {
      // Every request starts with handles Lean freed since its previous call
      // ([u32 count][count × u32]), released first.
      const head = Buffer.from(request.buffer, request.byteOffset, request.byteLength);
      if (head.length < 4) throw failure('Malformed Lasm.JS request');
      const count = head.readUInt32LE(0);
      if (head.length < 4 + 4 * count) throw failure('Malformed Lasm.JS request');
      for (let i = 0; i < count; i++) if (values.delete(head.readUInt32LE(4 + 4 * i))) stats.released++;
      const bytes = head.subarray(4 + 4 * count);
      switch (op) {
      case 200: return Buffer.from(Uint32Array.of(jsProtocolVersion).buffer);
      case 201: { const value = load(decoder.decode(bytes)); return encode(value, modeOf(arg)); }
      case 202: return encode(globalThis, modeOf(arg));
      case 203: {
        // One key, or an array of keys: an object of those properties (one call).
        const key = decode(bytes), object = lookup(id);
        if (Array.isArray(key)) return encode(Object.fromEntries(key.map(k => [k, object?.[k]])), 'data');
        return encode(object[key], modeOf(arg));
      }
      case 204: {
        const [key, value] = decode(bytes);
        const object = lookup(id);
        if (object === null || typeof object !== 'object' && typeof object !== 'function') throw failure(`Cannot set ${JSON.stringify(key)} on ${describe(object)}`);
        object[key] = value;
        return Buffer.alloc(0);
      }
      case 205: {
        // [target, receiver or method name, arguments]; flags: 1 reference result,
        // 2 await a promise result, 4 construct, 8 method call.
        const [target, receiver, args] = decode(bytes);
        const flags = Number(arg);
        const result = invoke(target, receiver, args, flags);
        const mode = modeOf(flags);
        if (flags & 2 && result && typeof result.then === 'function')
          return Promise.resolve(result).then(value => encode(value, mode), error => { throw jsFailure(error); });
        return encode(result, mode);
      }
      case 206: return Buffer.from(describe(lookup(id)));
      case 207: {
        // Resolve the Lean promise at `arg` (an IO.Promise pointer owned by the
        // interop thread) when this value settles; a non-promise settles now.
        settle(arg, decode(bytes));
        return Buffer.alloc(0);
      }
      case 208: {
        // Replies of Lean callbacks: (u64 call, u8 failed, wire or message)*.
        const r = new Reader(bytes);
        while (!r.done()) {
          const call = r.u64(), failed = r.u8(), payload = r.raw();
          const pending = pendingCalls.get(call);
          if (!pending) continue;
          pendingCalls.delete(call);
          if (failed) pending.reject(new Error(decoder.decode(payload)));
          else { try { pending.resolve(decode(payload)); } catch (error) { pending.reject(error); } }
        }
        return Buffer.alloc(0);
      }
      case 209:
        if (events.length) return takeEvents();
        return new Promise(resolve => { waiter = () => resolve(takeEvents()); });
      case 210: {
        // A JavaScript function calling Lean function `id`; arg 1 asynchronous, 2 synchronous.
        const f = Number(arg) === 2 ? syncFunction(id) : asyncFunction(id);
        return encode(f, 'reference');
      }
      case 211: {
        const r = new Reader(bytes);
        syncChannel = { channel: Number(r.u64()), slot: Number(r.u64()) };
        return Buffer.alloc(0);
      }
      case 213: return Buffer.from(JSON.stringify({ values: values.size, pendingCalls: pendingCalls.size, ...stats }));
      case 214: {
        // A typed binding: [Lean name, module, export path, arguments]; flags as op 205.
        const [, module, path, args] = decode(bytes);
        const flags = Number(arg);
        const key = module + '\0' + path;
        let target = bindings.get(key);
        if (target === undefined) {
          target = resolvePath(load(module), path);
          if (typeof target !== 'function')
            throw failure(`${path ? 'export ' + JSON.stringify(path) + ' of ' : ''}module ${JSON.stringify(module)} is ${describe(target)}, not a function`);
          bindings.set(key, target);
        }
        const result = invoke(target, undefined, args, flags & 4);
        const mode = modeOf(flags);
        if (flags & 2 && result && typeof result.then === 'function')
          return Promise.resolve(result).then(value => encode(value, mode), error => { throw jsFailure(error); });
        return encode(result, mode);
      }
      default: throw failure(`Unsupported Lasm.JS operation ${op}`);
      }
    } catch (error) {
      throw error?.leanUserError ? error : jsFailure(error);
    }
  }
  return {
    dispatch,
    owns: id => id >= firstJsHandle,
    release(id) { if (values.delete(id)) stats.released++; },
    close() { values.clear(); pendingCalls.clear(); events.length = 0; },
    // Tests and diagnostics.
    encode, decode, values,
  };
}
