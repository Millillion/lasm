// Pure-JavaScript host of Lean's runtime primitives for the edge profile
// (Phase 7, docs/EDGE.md): the operations a server-style program needs, with
// web-standard APIs only (no Node built-ins, koffi, files or threads). The
// same request(op, handle, argument, bytes) contract as src/node-host.mjs:
// returns { error, bytes } or a promise of it.
import { createEdgeJs } from './edge-js.mjs';

const encoder = new TextEncoder();
const empty = new Uint8Array(0);
export function numbers(...values) {
  const result = new Uint8Array(values.length * 8), view = new DataView(result.buffer);
  values.forEach((value, i) => view.setBigUint64(i * 8, BigInt.asUintN(64, BigInt(value)), true));
  return result;
}
// Lean IO error kinds as in src/node-host.mjs encodeError (subset).
const kinds = { ENOENT: 1, EACCES: 2, EINVAL: 4, ENOSYS: 8, ECANCELED: 10, ENOMEM: 11 };
function encodeError(err) {
  const kind = err?.leanUserError ? 18 : kinds[err?.code] ?? 0;
  return { error: true, bytes: concat([numbers(kind, err?.errno ?? 0), encoder.encode(String(err?.message ?? err))]) };
}
function concat(parts) { let n = 0; for (const p of parts) n += p.length; const r = new Uint8Array(n); let o = 0; for (const p of parts) { r.set(p, o); o += p.length; } return r; }
const error = (code, message) => Object.assign(new Error(message), { code });
const unavailable = (op, what) => error('ENOSYS', `${what} is not available in the Lasm edge profile (host operation ${op})`);

/**
 * env: string variables (Workers bindings that are strings, Deno.env, …);
 * stdout/stderr: line sinks (default console.log / console.error);
 * modules: the JavaScript module map for Lasm.JS; notify(): called when events are queued.
 */
export function createEdgeRuntimeHost({ env = {}, args = [], stdout = line => console.log(line), stderr = line => console.error(line),
  modules = {}, notify = () => {}, syncCall } = {}) {
  const resources = new Map(); let nextResource = 10;
  let initializing = true;
  const add = r => { const id = nextResource++; resources.set(id, r); return id; };
  const get = (id, type) => { const r = resources.get(id); if (!r || type && r.type !== type) throw error('EINVAL', 'Invalid or closed resource'); return r; };
  // Standard streams: complete lines go to the sinks; flush emits a partial line.
  const streams = { 1: { sink: stdout, text: '' }, 2: { sink: stderr, text: '' } };
  const decoder = new TextDecoder();
  function write(id, bytes) {
    const s = streams[id];
    if (!s) throw unavailable(3, 'Writing files');
    s.text += decoder.decode(bytes, { stream: true });
    let newline;
    while ((newline = s.text.indexOf('\n')) >= 0) { s.sink(s.text.slice(0, newline)); s.text = s.text.slice(newline + 1); }
    return empty;
  }
  function flush(id) { const s = streams[id]; if (s?.text) { s.sink(s.text); s.text = ''; } return empty; }
  // Asynchronous operations (op 94) complete into this queue, taken by op 95.
  const completions = [];
  const complete = packet => { completions.push(packet); notify(); };
  const js = createEdgeJs({ modules, notify, syncCall });
  const now = () => performance.now();
  function timer(timeout, repeating) {
    timeout = BigInt(timeout);
    const t = { type: 'timer', timeout, repeating, phase: 'initial', generation: 0 };
    t.fresh = () => {
      t.generation++; t.done = false;
      t.promise = new Promise((resolve, reject) => { t.resolve = resolve; t.reject = reject; });
      t.promise.catch(() => {});
    };
    t.arm = delay => {
      clearTimeout(t.handle);
      t.handle = setTimeout(() => {
        if (t.promise && !t.done) { t.done = true; t.resolve(empty); }
        if (repeating && timeout > 0n) t.arm(timeout); else t.phase = 'finished';
      }, Number(delay > 2_147_483_647n ? 2_147_483_647n : BigInt(delay)));
    };
    t.start = () => { t.fresh(); t.phase = 'running'; t.arm(repeating ? 0n : timeout); };
    t.drop = () => { if (t.promise && !t.done) t.reject(error('ECANCELED', 'Timer cancelled')); t.promise = undefined; t.generation++; };
    t.close = () => { clearTimeout(t.handle); t.drop(); t.phase = 'finished'; };
    return t;
  }
  function dispatch(op, id, arg, bytes) {
    if (op >= 200 && op <= 219) return js.dispatch(op, id, arg, bytes);
    const n = Number(arg);
    switch (op) {
    case 1: throw unavailable(op, 'The file system');
    case 3: return write(id, bytes);
    case 4: return flush(id);
    case 9: return numbers(0);
    case 22: {
      const name = decoder.decode(bytes), value = env[name];
      return typeof value === 'string' ? concat([Uint8Array.of(1), encoder.encode(value)]) : empty;
    }
    case 23: return encoder.encode('/');
    case 24: return encoder.encode('/lasm-edge-app');
    case 25: return numbers(Math.floor(now()));
    case 26: return numbers(BigInt(Math.floor(now() * 1e6)));
    case 27: { const ms = Date.now(); return numbers(Math.floor(ms / 1000), (ms % 1000) * 1e6); }
    case 28: case 143: {
      const out = new Uint8Array(n);
      try { for (let i = 0; i < n; i += 65536) crypto.getRandomValues(out.subarray(i, Math.min(n, i + 65536))); }
      catch (failure) {
        // Cloudflare Workers forbid random values in the global scope, where
        // the program starts. Lean's own initializers need some (IO.stdGenRef's
        // seed): while module initializers run, they get Math.random bytes, which
        // are not cryptographic; afterwards the call fails clearly.
        if (!initializing) throw Object.assign(error('EINVAL', `IO.getRandomBytes is not available here: ${failure.message}`), {});
        for (let i = 0; i < n; i++) out[i] = Math.floor(Math.random() * 256);
      }
      return out;
    }
    case 30: throw Object.assign(error('EINVAL', `Lean called IO.Process.exit ${n}; an edge isolate cannot exit`), { exit: n });
    case 31: return encoder.encode(args.map(value => value + '\0').join(''));
    case 35: return new Promise(resolve => setTimeout(() => resolve(empty), Math.min(n, 2_147_483_647)));
    case 36: throw error('ENOMEM', 'out of memory');
    case 37: return numbers(1);
    case 70: return numbers(add(timer(arg, id !== 0)));
    case 71: {
      const t = get(id, 'timer');
      if (t.phase === 'initial') t.start();
      else if (t.repeating && t.phase === 'running' && (t.done || !t.promise)) t.fresh();
      return numbers(t.generation);
    }
    case 72: { const t = get(id, 'timer'); return t.promise ?? new Promise(() => {}); }
    case 73: { const t = get(id, 'timer'); if (t.phase === 'running') t.arm(t.timeout); return empty; }
    case 74: get(id, 'timer').close(); return numbers(1);
    case 75: {
      const t = get(id, 'timer');
      if (t.phase !== 'running' || !t.promise) return numbers(0);
      t.drop();
      if (!t.repeating) { clearTimeout(t.handle); t.phase = 'initial'; }
      return numbers(1);
    }
    case 120: return encoder.encode('lasm-edge');
    case 123: case 124: return numbers(1);
    default:
      if (op >= 10 && op <= 21) throw unavailable(op, 'The file system');
      if (op >= 50 && op <= 65 || op >= 100 && op <= 116) throw unavailable(op, 'Sockets and DNS (use fetch through Lasm.JS)');
      if (op >= 80 && op <= 89) throw unavailable(op, 'Processes');
      throw unavailable(op, 'This runtime operation');
    }
  }
  function request(op, id, arg, bytes) {
    if (op === 94) {
      // Start an asynchronous operation; its result completes into the queue.
      // Header: promise, resource, kind, check, operation, argument (u64 each).
      const view = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
      const header = bytes.slice(0, 24), check = view.getBigUint64(24, true) !== 0n;
      const started = request(Number(view.getBigUint64(32, true)), id, view.getBigUint64(40, true), bytes.subarray(48));
      if (check && !started.then && started.error) return started;
      Promise.resolve(started).then(done => complete(concat([header, Uint8Array.of(done.error ? 1 : 0, 0, 0, 0, 0, 0, 0, 0), done.bytes])),
        failure => complete(concat([header, Uint8Array.of(1, 0, 0, 0, 0, 0, 0, 0), encodeError(failure).bytes])));
      return { error: false, bytes: empty };
    }
    if (op === 95) {
      // Every queued completion as (u64 size, packet) records; empty when none.
      const parts = [];
      while (completions.length) { const p = completions.shift(); parts.push(numbers(p.length), p); }
      return { error: false, bytes: concat(parts) };
    }
    try {
      const result = dispatch(op, id, arg, bytes);
      if (result?.then) return result.then(bytes => ({ error: false, bytes }), encodeError);
      return { error: false, bytes: result };
    } catch (err) { return encodeError(err); }
  }
  return { request, release(id) { if (js.owns(id)) js.release(id); else { resources.get(id)?.close?.(); resources.delete(id); } },
    flush() { flush(1); flush(2); }, js, initialized() { initializing = false; }, pending: () => completions.length + js.pendingEvents() };
}
