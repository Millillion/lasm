// Lasm.JS host operations 200-219 for the edge profile (Phase 7, docs/EDGE.md).
// The same wire format and operations as src/node-js.mjs, without Node APIs:
// no Buffer, no require (JavaScript modules come from a static module map the
// generated entry module imports), no threads. Events for Lean (promise
// settlements, calls of Lean functions, releases) are queued and announced with
// `notify`; the runtime takes them with op 209, which never waits here.
// ignoreBOM: a Lean string that begins with U+FEFF keeps it (TextDecoder drops a leading BOM by default).
const encoder = new TextEncoder(), decoder = new TextDecoder('utf-8', { ignoreBOM: true });
const maximumDepth = 64;
// Lengths travel as u32 (Lean's Wire.maxLength): a longer one is an error, never a
// wrapped length (#154). Only a Uint8Array can be that long: JavaScript arrays hold
// fewer than 2^32 elements, and strings fewer than 2^30 UTF-16 units (under 2^32
// UTF-8 bytes). A long encoded result is refused where it is framed (takeEvents).
const lengthLimit = 2 ** 32;
export const firstJsHandle = 0x40000000;

export function jsFailure(error) {
  let text;
  if (error instanceof Error) text = `${error.name}: ${error.message}`;
  else { try { text = `Uncaught JavaScript value: ${typeof error === 'string' ? error : JSON.stringify(error) ?? String(error)}`; } catch { text = 'Uncaught JavaScript value'; } }
  return Object.assign(new Error(text), { leanUserError: true, code: 'EJS' });
}
const failure = message => jsFailure(new TypeError(message));
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
  constructor() { this.buffer = new Uint8Array(256); this.view = new DataView(this.buffer.buffer); this.length = 0; }
  reserve(n) {
    if (this.length + n <= this.buffer.length) return;
    const next = new Uint8Array(Math.max(this.buffer.length * 2, this.length + n));
    next.set(this.buffer.subarray(0, this.length)); this.buffer = next; this.view = new DataView(next.buffer);
  }
  u8(v) { this.reserve(1); this.buffer[this.length++] = v; }
  u32(v) { this.reserve(4); this.view.setUint32(this.length, v, true); this.length += 4; }
  f64(v) { this.reserve(8); this.view.setFloat64(this.length, v, true); this.length += 8; }
  u64(v) { this.reserve(8); this.view.setBigUint64(this.length, BigInt.asUintN(64, BigInt(v)), true); this.length += 8; }
  bytes(b) {
    if (b.length >= lengthLimit) throw jsFailure(new RangeError(`Lasm.JS: cannot pass ${b.length} bytes to Lean (lengths cross as 32-bit numbers, so at most ${lengthLimit - 1})`));
    this.u32(b.length); this.reserve(b.length); this.buffer.set(b, this.length); this.length += b.length; }
  string(s) {
    const count = s.length;
    this.reserve(count * 3 + 4);
    // Short ASCII strings (most keys and many values) are copied byte for byte.
    // Stryker disable next-line all: the fast path's choice changes speed, not output (test/edge-js.test.mjs checks both paths agree)
    if (count <= shortString) {
      const b = this.buffer, start = this.length + 4;
      let i = 0;
      // Stryker disable next-line all: the fast path's choice changes speed, not output (test/edge-js.test.mjs checks both paths agree)
      while (i < count) { const c = s.charCodeAt(i); if (c > 127) break; b[start + i++] = c; }
      // Stryker disable next-line all: the fast path's choice changes speed, not output (test/edge-js.test.mjs checks both paths agree)
      if (i === count) { this.view.setUint32(this.length, count, true); this.length = start + count; return; }
    }
    const { written } = encoder.encodeInto(s, this.buffer.subarray(this.length + 4));
    this.view.setUint32(this.length, written, true); this.length += 4 + written;
  }
  result() { return this.buffer.subarray(0, this.length); }
}
class Reader {
  constructor(bytes) { this.bytes = bytes; this.view = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength); this.offset = 0; }
  need(n) { if (this.offset + n > this.bytes.length) throw failure('Malformed Lasm.JS value (truncated)'); }
  u8() { this.need(1); return this.bytes[this.offset++]; }
  u32() { this.need(4); const v = this.view.getUint32(this.offset, true); this.offset += 4; return v; }
  u64() { this.need(8); const v = this.view.getBigUint64(this.offset, true); this.offset += 8; return v; }
  f64() { this.need(8); const v = this.view.getFloat64(this.offset, true); this.offset += 8; return v; }
  raw() { const n = this.u32(); this.need(n); const v = this.bytes.subarray(this.offset, this.offset + n); this.offset += n; return v; }
  string() {
    const n = this.u32();
    this.need(n);
    const b = this.bytes, start = this.offset, end = start + n;
    this.offset = end;
    // Short ASCII strings without TextDecoder (the same result, faster).
    // Stryker disable next-line all: the fast path's choice changes speed, not output (test/edge-js.test.mjs checks both paths agree)
    if (n <= shortString) {
      let text = '';
      // Stryker disable next-line all: the fast path's choice changes speed, not output (test/edge-js.test.mjs checks both paths agree)
      for (let i = start; i < end; i++) { const c = b[i]; if (c > 127) return decoder.decode(b.subarray(start, end)); text += String.fromCharCode(c); }
      return text;
    }
    return decoder.decode(b.subarray(start, end));
  }
  // An object key: short ASCII keys come from keyCache, so the same key is the
  // same (internalized) string on every call, which makes building the object
  // about three times faster.
  key() {
    const n = this.u32();
    // Stryker disable next-line all: without it the value after the key fails as truncated instead (the same error)
    this.need(n);
    const b = this.bytes, start = this.offset, end = start + n;
    // Stryker disable next-line all: the fast path's choice changes speed, not output (test/edge-js.test.mjs checks both paths agree)
    if (n > shortKey) { this.offset = end; return decoder.decode(b.subarray(start, end)); }
    let hash = n;
    // Stryker disable next-line all: the fast path's choice changes speed, not output (test/edge-js.test.mjs checks both paths agree)
    for (let i = start; i < end; i++) {
      const c = b[i];
      // Stryker disable next-line all: the fast path's choice changes speed, not output (test/edge-js.test.mjs checks both paths agree)
      if (c > 127) { this.offset = end; return decoder.decode(b.subarray(start, end)); }
      hash = Math.imul(hash ^ c, 16777619);
    }
    this.offset = end;
    // Stryker disable next-line all: the fast path's choice changes speed, not output (test/edge-js.test.mjs checks both paths agree)
    const slot = (hash >>> 0) & (keyCache.length - 1), cached = keyCache[slot];
    // Stryker disable next-line all: the fast path's choice changes speed, not output (test/edge-js.test.mjs checks both paths agree)
    if (cached !== undefined && cached.length === n) {
      let i = 0;
      // Stryker disable next-line all: the fast path's choice changes speed, not output (test/edge-js.test.mjs checks both paths agree)
      while (i < n && cached.charCodeAt(i) === b[start + i]) i++;
      // Stryker disable next-line all: the fast path's choice changes speed, not output (test/edge-js.test.mjs checks both paths agree)
      if (i === n) return cached;
    }
    let text = '';
    for (let i = start; i < end; i++) text += String.fromCharCode(b[i]);
    keyCache[slot] = text;
    return text;
  }
  done() { return this.offset === this.bytes.length; }
}
// Strings of at most this many bytes (UTF-16 units) take the ASCII fast path;
// recently read object keys (Reader.key), by a hash of their bytes.
// Stryker disable next-line all: the fast path's choice changes speed, not output (test/edge-js.test.mjs checks both paths agree)
const shortString = 64, shortKey = 32, keyCache = new Array(1024);
const empty = new Uint8Array(0);
const concat = parts => { let n = 0; for (const p of parts) n += p.length; const r = new Uint8Array(n); let o = 0; for (const p of parts) { r.set(p, o); o += p.length; } return r; };

/** modules: { specifier: module namespace } (from the generated entry's imports). */
export function createEdgeJs({ modules = {}, notify = () => {}, syncCall } = {}) {
  const values = new Map();
  let nextValue = firstJsHandle;
  const stats = { released: 0, callbacks: 0, syncCallbacks: 0, functionsCreated: 0, functionsCollected: 0 };
  const bindings = new Map();
  function reference(value) { const id = nextValue++; values.set(id, value); return id; }
  function lookup(id) {
    if (!values.has(id)) throw failure(`Invalid or released Lasm.JS value handle ${id}`);
    return values.get(id);
  }
  const plain = value => { const p = Object.getPrototypeOf(value); return p === Object.prototype || p === null; };
  function write(w, value, mode, depth = 0) {
    if (depth > maximumDepth) throw failure('JavaScript value nests too deeply to convert to Lean data (more than 64 levels)');
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
    case 9: { const n = r.u32(), object = {}; for (let i = 0; i < n; i++) { const key = r.key(); object[key] = read(r); } return object; }
    case 10: { const id = r.u32(); r.raw(); return lookup(id); }
    default: throw failure(`Malformed Lasm.JS value (tag ${tag})`);
    }
  }
  function decode(bytes) { const r = new Reader(bytes); const value = read(r); if (!r.done()) throw failure('Malformed Lasm.JS value (trailing bytes)'); return value; }
  const modeOf = arg => (Number(arg) & 1) ? 'reference' : 'data';

  const events = [];
  const push = event => { events.push(event); notify(); };
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
  const pendingCalls = new Map();
  let nextCall = 1n, stopped = null;
  // The Lean instance stopped (edge-pre.js): settle every waiting call.
  function stop(error) {
    stopped = error;
    for (const { reject } of pendingCalls.values()) reject(error);
    pendingCalls.clear(); events.length = 0;
  }
  const leanFunctions = new FinalizationRegistry(fn => { stats.functionsCollected++; push({ kind: 3, fn }); });
  function asyncFunction(fn) {
    const f = function (...args) {
      return new Promise((resolve, reject) => {
        if (stopped) return reject(stopped);
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
  // Synchronous Lean functions: a direct export call (edge-pre.js syncCall).
  function syncFunction(fn) {
    const f = function (...args) {
      stats.syncCallbacks++;
      const result = syncCall(fn, encode(args, 'data'));
      if (result[0] !== 0) throw jsFailure(new Error(decoder.decode(result.subarray(1))));
      return decode(result.subarray(1));
    };
    leanFunctions.register(f, fn);
    return f;
  }
  function settle(promise, value, mode = 'data') {
    Promise.resolve(value).then(result => {
      let bytes, failed = false;
      try { bytes = encode(result, mode); } catch (error) { failed = true; bytes = encoder.encode((error?.leanUserError ? error : jsFailure(error)).message); }
      push({ kind: 1, promise, failed, bytes });
    }, error => push({ kind: 1, promise, failed: true, bytes: encoder.encode(jsFailure(error).message) }));
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
    if (specifier === 'globalThis') return globalThis;
    if (Object.hasOwn(modules, specifier)) return modules[specifier];
    // Node's built-in modules (Lasm.JS.Node; `Lasm.JS.require "node:os"`) on runtimes that
    // implement them (Bun, Deno, Workers with nodejs_compat): process.getBuiltinModule.
    if (specifier.startsWith('node:') && typeof globalThis.process?.getBuiltinModule === 'function') {
      const builtin = globalThis.process.getBuiltinModule(specifier);
      if (builtin !== undefined) return builtin;
    }
    throw failure(`JavaScript module ${JSON.stringify(specifier)} is not in this edge build. Edge builds import modules statically: use it in a binding (@[js "${specifier}" …]) or list it in the build's modules.`);
  }
  function dispatch(op, id, arg, request) {
    try {
      const view = new DataView(request.buffer, request.byteOffset, request.byteLength);
      if (request.length < 4) throw failure('Malformed Lasm.JS request');
      const count = view.getUint32(0, true);
      if (request.length < 4 + 4 * count) throw failure('Malformed Lasm.JS request');
      for (let i = 0; i < count; i++) if (values.delete(view.getUint32(4 + 4 * i, true))) stats.released++;
      let bytes = request.subarray(4 + 4 * count);
      let into;
      if ((op === 205 || op === 214) && Number(arg) & 16) {
        if (bytes.length < 8) throw failure('Malformed Lasm.JS request');
        into = new DataView(bytes.buffer, bytes.byteOffset, 8).getBigUint64(0, true); bytes = bytes.subarray(8);
      }
      switch (op) {
      // Protocol 1; the second word (1) tells Lean it runs in an edge build (Lasm.JS.onEdge).
      case 200: return new Uint8Array(Uint32Array.of(1, 1).buffer);
      case 201: return encode(load(decoder.decode(bytes)), modeOf(arg));
      // Always a reference: Bun's globalThis has Object.prototype, so a data
      // conversion would try to copy the whole global object.
      case 202: return encode(globalThis, 'reference');
      case 203: {
        const key = decode(bytes), object = lookup(id);
        if (Number(arg) & 2) return encode(Object.fromEntries(key.map(k => [k, object?.[k]])), 'data');
        return encode(object[key], modeOf(arg));
      }
      case 204: {
        const [key, value] = decode(bytes);
        const object = lookup(id);
        if (object === null || typeof object !== 'object' && typeof object !== 'function') throw failure(`Cannot set ${typeof key === 'string' ? JSON.stringify(key) : describe(key)} on ${describe(object)}`);
        object[key] = value;
        return empty;
      }
      case 205: {
        const [target, receiver, args] = decode(bytes);
        const flags = Number(arg);
        const result = invoke(target, receiver, args, flags);
        const mode = modeOf(flags);
        if (into !== undefined) { settle(into, result, mode); return empty; }
        if (flags & 2 && result && typeof result.then === 'function')
          return Promise.resolve(result).then(value => encode(value, mode), error => { throw error?.leanUserError ? error : jsFailure(error); });
        return encode(result, mode);
      }
      case 206: return encoder.encode(describe(lookup(id)));
      case 207: settle(arg, decode(bytes)); return empty;
      case 208: {
        const r = new Reader(bytes);
        while (!r.done()) {
          const call = r.u64(), failed = r.u8(), payload = r.raw();
          const pending = pendingCalls.get(call);
          if (!pending) continue;
          pendingCalls.delete(call);
          if (failed === 1) pending.reject(new Error(decoder.decode(payload)));
          else if (failed === 2) {
            try { const [target, name, args] = decode(payload); pending.resolve(invoke(target, name, args, 8)); }
            catch (error) { pending.reject(error); }
          } else { try { pending.resolve(decode(payload)); } catch (error) { pending.reject(error); } }
        }
        return empty;
      }
      case 209: return events.length ? takeEvents() : empty;
      case 210: {
        const f = Number(arg) === 2 ? syncFunction(id) : asyncFunction(id);
        stats.functionsCreated++;
        return encode(f, 'reference');
      }
      case 213: return encoder.encode(JSON.stringify(snapshot()));
      case 214: {
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
        if (into !== undefined) { settle(into, result, mode); return empty; }
        if (flags & 2 && result && typeof result.then === 'function')
          return Promise.resolve(result).then(value => encode(value, mode), error => { throw error?.leanUserError ? error : jsFailure(error); });
        return encode(result, mode);
      }
      default: throw failure(`Unsupported Lasm.JS operation ${op} on the edge`);
      }
    } catch (error) {
      throw error?.leanUserError ? error : jsFailure(error);
    }
  }
  const snapshot = () => ({ values: values.size, pendingCalls: pendingCalls.size, queuedEvents: events.length,
    functionsLive: stats.functionsCreated - stats.functionsCollected, ...stats });
  return { dispatch, snapshot, stop, owns: id => id >= firstJsHandle, release(id) { if (values.delete(id)) stats.released++; },
    pendingEvents: () => events.length, concat };
}
