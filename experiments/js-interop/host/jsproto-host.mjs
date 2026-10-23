// Phase 4 step 1 prototype host (throwaway): Lasm's Node runtime host plus
// operations 200-229 for experiments/js-interop/proto/c/jsproto.c. Copied next
// to a deployment's host/node-host.mjs by experiments/js-interop/run.mjs, which
// points LASM_FULL_HOST_MODULE here.
import http from 'node:http';
import { createNodeRuntimeHost as createBase, numbers } from './node-host.mjs';
import { HandleTable } from './handle-table.mjs';

const empty = Buffer.alloc(0);
const trace = !!process.env.JSPROTO_TRACE;
const failure = error => ({ error: true, bytes: Buffer.concat([numbers(18, 0),
  Buffer.from(`${error?.name ?? 'Error'}: ${error?.message ?? String(error)}`)]) });
const ok = bytes => ({ error: false, bytes });
const decode = bytes => Buffer.from(bytes).toString('utf8');

export function createNodeRuntimeHost(options) {
  const host = createBase(options);
  // JavaScript values referenced from Lean: a separate id range from runtime resources.
  const values = new HandleTable({ first: 0x40000000 });
  const stats = { comparisons: 0, callbacks: 0, releasedValues: 0 };
  // ---- JS -> Lean asynchronous callbacks, configuration A (queued) ----
  let nextCall = 1n;
  const pending = new Map(), queue = [];
  let waiter;
  const callLean = input => new Promise((resolve, reject) => {
    const id = nextCall++;
    pending.set(id, { resolve, reject });
    queue.push({ id, input: Buffer.from(input) });
    stats.callbacks++;
    if (waiter) { const w = waiter; waiter = undefined; w(); }
  });
  const takeBatch = () => {
    const parts = [];
    for (let i = 0; i < 512 && queue.length; i++) {
      const { id, input } = queue.shift();
      const head = Buffer.alloc(16);
      head.writeBigUInt64LE(id, 0); head.writeUInt32LE(0, 8); head.writeUInt32LE(input.length, 12);
      parts.push(head, input);
    }
    return Buffer.concat(parts);
  };
  const applyReplies = bytes => {
    const b = Buffer.from(bytes);
    for (let o = 0; o + 16 <= b.length;) {
      const id = b.readBigUInt64LE(o), status = b.readUInt32LE(o + 8), length = b.readUInt32LE(o + 12);
      const body = b.subarray(o + 16, o + 16 + length).toString('utf8');
      o += 16 + length;
      const call = pending.get(id);
      if (!call) continue;
      pending.delete(id);
      if (status === 0) call.resolve(body); else call.reject(new Error(body));
    }
  };
  // ---- synchronous JS -> Lean callback through a shared-memory slot (A) ----
  let sorted;
  function sortThroughSlot(pointer, input) {
    const memory = globalThis.__jsprotoMemory;
    if (!memory) throw new Error('Wasm memory was not captured by the launcher');
    const xs = Array.from(new Float64Array(input.buffer.slice(input.byteOffset, input.byteOffset + input.byteLength)));
    setImmediate(() => {
      const i32 = new Int32Array(memory.buffer), f64 = new Float64Array(memory.buffer), s = pointer / 4;
      xs.sort((a, b) => {
        f64[(pointer + 8) / 8] = a; f64[(pointer + 16) / 8] = b;
        Atomics.store(i32, s, 1); Atomics.notify(i32, s);
        while (Atomics.load(i32, s) === 1) Atomics.wait(i32, s, 1);
        stats.comparisons++;
        return i32[s + 1];
      });
      sorted = Buffer.from(new Float64Array(xs).buffer);
      Atomics.store(i32, s, 3); Atomics.notify(i32, s);
    });
  }
  function serve(port, mode) {
    const server = http.createServer(async (req, res) => {
      try {
        const input = `${req.method} ${req.url}`;
        const body = mode === 0 || mode === 3 ? await callLean(input) : await globalThis.__jsprotoInvoke(mode === 2 ? 1 : 0, input);
        res.writeHead(200, { 'content-type': 'application/json', 'content-length': Buffer.byteLength(body) });
        res.end(body);
      } catch (error) {
        res.writeHead(500); res.end(String(error?.message ?? error));
      }
    });
    server.keepAliveTimeout = 5000;
    return new Promise((resolve, reject) => {
      server.once('error', reject);
      server.listen(port, '127.0.0.1', () => resolve(numbers(server.address().port)));
    });
  }
  function mine(op, id, arg, bytes) {
    switch (op) {
    case 200: return empty;
    case 201: { const b = Buffer.alloc(8); b.writeDoubleLE(Math.random()); return b; }
    case 202: {
      let thisArg, value = globalThis;
      for (const key of decode(bytes).split('.')) { thisArg = value; value = value[key]; }
      return numbers(values.allocate({ value, thisArg }));
    }
    case 203: {
      const { value, thisArg } = values.get(id) ?? (() => { throw new Error('Invalid JS value handle'); })();
      const result = value.apply(thisArg, JSON.parse(decode(bytes)));
      const encode = r => Buffer.from(JSON.stringify(r) ?? 'undefined');
      return result?.then ? result.then(encode) : encode(result);
    }
    case 204: case 205: return Promise.resolve(Buffer.from(bytes));
    case 206: throw new TypeError(decode(bytes));
    case 207: return numbers(values.allocate({ value: {}, thisArg: undefined }));
    case 208: return Buffer.from(JSON.stringify({ values: values.size, ...stats, pendingCallbacks: pending.size }));
    case 210: return serve(Number(arg), id);
    case 211:
      applyReplies(bytes);
      if (queue.length) return takeBatch();
      return new Promise(resolve => { waiter = () => resolve(takeBatch()); });
    case 209: return new Promise(resolve => setTimeout(() => resolve(Buffer.from(bytes)), Math.random() < 0.5 ? 0 : 1));
    case 212: applyReplies(bytes); return empty;
    case 220: sortThroughSlot(Number(arg), bytes); return empty;
    case 221: { const r = sorted; sorted = undefined; return r; }
    case 222: {
      if (!globalThis.__jsprotoCompare) throw new Error('Direct synchronous callbacks need configuration B (JSPI, Lean on the main thread)');
      const xs = Array.from(new Float64Array(bytes.buffer.slice(bytes.byteOffset, bytes.byteOffset + bytes.byteLength)));
      xs.sort((a, b) => { stats.comparisons++; return globalThis.__jsprotoCompare(a, b); });
      return Buffer.from(new Float64Array(xs).buffer);
    }
    default: throw new Error(`Unknown prototype operation ${op}`);
    }
  }
  const request = host.request, releaseAsync = host.releaseAsync, release = host.release;
  host.request = (op, id, arg, bytes, context) => {
    if (trace) process.stderr.write(`[host] op=${op} id=${id} arg=${arg}\n`);
    if (op < 200 || op >= 230) return request(op, id, arg, bytes, context);
    try {
      const result = mine(op, id, arg, bytes);
      return result?.then ? result.then(ok, failure) : ok(result);
    } catch (error) { return failure(error); }
  };
  const releaseValue = id => { if (values.delete(id)) stats.releasedValues++; };
  host.releaseAsync = id => id >= 0x40000000 ? releaseValue(id) : releaseAsync(id);
  host.release = (id, asynchronous) => id >= 0x40000000 ? releaseValue(id) : release(id, asynchronous);
  globalThis.__jsprotoHost = { mine, stats, values };
  return host;
}
