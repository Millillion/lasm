// Lasm.JS on the edge (src/edge/edge-js.mjs): the same wire format and
// operations as the Node bridge, driven through `dispatch` as the Lean runtime
// drives it (a static module map instead of require, no threads, op 209 never
// waits, synchronous Lean functions through a direct export call). Before this
// file the edge bridge ran only inside built outputs (workers.yml, Deno, Bun),
// so no unit test noticed a change to it (docs/TESTING.md#mutation-testing).
import test from 'node:test';
import assert from 'node:assert/strict';
import { createEdgeJs, describe, jsFailure, firstJsHandle } from '../src/edge/edge-js.mjs';

const enc = new TextEncoder(), dec = new TextDecoder('utf-8', { ignoreBOM: true });
const cat = (...parts) => { const out = new Uint8Array(parts.reduce((n, p) => n + p.length, 0)); let o = 0; for (const p of parts) { out.set(p, o); o += p.length; } return out; };
const u32 = n => { const b = new Uint8Array(4); new DataView(b.buffer).setUint32(0, n, true); return b; };
const u64 = n => { const b = new Uint8Array(8); new DataView(b.buffer).setBigUint64(0, BigInt(n), true); return b; };
const str = s => { const b = enc.encode(s); return cat(u32(b.length), b); };
// Lean's side of the wire format.
const wire = value => {
  if (value === undefined) return Uint8Array.of(0);
  if (value === null) return Uint8Array.of(1);
  if (typeof value === 'boolean') return Uint8Array.of(value ? 3 : 2);
  if (typeof value === 'number') { const b = new Uint8Array(9); b[0] = 4; new DataView(b.buffer).setFloat64(1, value, true); return b; }
  if (typeof value === 'string') return cat(Uint8Array.of(5), str(value));
  if (typeof value === 'bigint') return cat(Uint8Array.of(6), str(String(value)));
  if (value instanceof Uint8Array) return cat(Uint8Array.of(7), u32(value.length), value);
  if (Array.isArray(value)) return cat(Uint8Array.of(8), u32(value.length), ...value.map(wire));
  if (value.ref !== undefined) return cat(Uint8Array.of(10), u32(value.ref), u32(0));
  const keys = Object.keys(value);
  return cat(Uint8Array.of(9), u32(keys.length), ...keys.flatMap(k => [str(k), wire(value[k])]));
};
// Lean's reader: references come back as { ref }.
function unwire(bytes) {
  const view = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
  let o = 0;
  const raw = () => { const n = view.getUint32(o, true); o += 4; const v = bytes.subarray(o, o + n); o += n; return v; };
  const read = () => {
    const tag = bytes[o++];
    switch (tag) {
    case 0: return undefined; case 1: return null; case 2: return false; case 3: return true;
    case 4: { const v = view.getFloat64(o, true); o += 8; return v; }
    case 5: return dec.decode(raw());
    case 6: return BigInt(dec.decode(raw()));
    case 7: return Uint8Array.from(raw());
    case 8: { const n = view.getUint32(o, true); o += 4; return Array.from({ length: n }, read); }
    case 9: { const n = view.getUint32(o, true); o += 4; const r = {}; for (let i = 0; i < n; i++) { const k = dec.decode(raw()); r[k] = read(); } return r; }
    case 10: { const ref = view.getUint32(o, true); o += 4; raw(); return { ref }; }
    default: throw new Error(`tag ${tag}`);
    }
  };
  const value = read();
  assert.equal(o, bytes.length, 'one value');
  return value;
}
function events(bytes) {
  const view = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
  const list = [];
  let o = 0;
  while (o < bytes.length) {
    const kind = bytes[o++];
    if (kind === 1) { const n = view.getUint32(o + 9, true); list.push({ kind, promise: view.getBigUint64(o, true), failed: bytes[o + 8], bytes: bytes.subarray(o + 13, o + 13 + n) }); o += 13 + n; }
    else if (kind === 2) { const n = view.getUint32(o + 12, true); list.push({ kind, call: view.getBigUint64(o, true), fn: view.getUint32(o + 8, true), bytes: bytes.subarray(o + 16, o + 16 + n) }); o += 16 + n; }
    else { list.push({ kind, fn: view.getUint32(o, true) }); o += 4; }
  }
  return list;
}
function edge(options = {}) {
  let notified = 0;
  const js = createEdgeJs({ notify: () => notified++, ...options });
  const call = (op, id, arg, bytes = new Uint8Array(0), released = []) => js.dispatch(op, id, BigInt(arg), cat(u32(released.length), ...released.map(u32), bytes));
  const value = (...args) => unwire(call(...args));
  return { js, call, value, notified: () => notified };
}
const settled = () => new Promise(resolve => setTimeout(resolve, 5));

test('protocol: version 1, and the edge flag', () => {
  const { call } = edge();
  assert.deepEqual([...new Uint32Array(call(200, 0, 0).slice().buffer)], [1, 1]);
});

test('jsFailure and describe match the Node bridge', () => {
  assert.equal(jsFailure(new RangeError('x')).message, 'RangeError: x');
  assert.equal(jsFailure('s').message, 'Uncaught JavaScript value: s');
  assert.equal(jsFailure({ a: 1 }).message, 'Uncaught JavaScript value: {"a":1}');
  assert.equal(jsFailure(undefined).message, 'Uncaught JavaScript value: undefined');
  assert.equal(jsFailure(1n).message, 'Uncaught JavaScript value');
  assert.deepEqual([jsFailure('s').leanUserError, jsFailure('s').code], [true, 'EJS']);
  for (const [value, text] of [[null, 'null'], [undefined, 'undefined'], ['x'.repeat(61), `string "${'x'.repeat(57)}..."`], ['x'.repeat(60), `string "${'x'.repeat(60)}"`],
    [2, 'number 2'], [false, 'boolean false'], [3n, 'bigint 3n'], [Symbol('s'), 'symbol s'], [Symbol(), 'symbol '], [function f(a) {}, 'function f (1 parameter)'],
    [function g(a, b) {}, 'function g (2 parameters)'], [() => {}, 'function (anonymous)'], [[1], 'array of length 1'], [Promise.resolve(), 'promise'],
    [new Uint8Array(2), 'Uint8Array of length 2'], [new Map(), 'Map object'], [{ a: 1, b: 2, c: 3, d: 4, e: 5, f: 6, g: 7 }, 'object {a, b, c, d, e, f, …}'],
    [{ a: 1, b: 2, c: 3, d: 4, e: 5, f: 6 }, 'object {a, b, c, d, e, f}'], [Object.create(null), 'object'], [new Proxy({}, { ownKeys() { throw new Error(); } }), 'object']])
    assert.equal(describe(value), text);
});

// Lengths travel as u32: one of 2^32 or more fails with a clear error instead
// of wrapping, as DataView.setUint32 would (#154). The Uint8Array only claims
// the length: nothing is allocated.
class Huge extends Uint8Array { get length() { return 2 ** 32; } }
test('a length that does not fit the wire format fails loudly instead of wrapping', () => {
  const { value } = edge({ modules: { lib: { huge: new Huge(0), nested: [1, { b: new Huge(0) }], small: new Uint8Array(3) } } });
  const lib = value(201, 0, 1, enc.encode('lib'));
  const message = 'RangeError: Lasm.JS: cannot pass 4294967296 bytes to Lean (lengths cross as 32-bit numbers, so at most 4294967295)';
  assert.throws(() => value(203, lib.ref, 0, wire('huge')), { message });
  assert.throws(() => value(203, lib.ref, 0, wire('nested')), { message });
  assert.deepEqual(value(203, lib.ref, 0, wire('small')), new Uint8Array(3));
});

test('modules come from the static map; others fail with how to add them', () => {
  const lib = { add: (a, b) => a + b, nested: { f: () => 'deep' } };
  const { value } = edge({ modules: { lib } });
  assert.deepEqual(value(201, 0, 1, enc.encode('lib')).ref >= firstJsHandle, true);
  assert.equal(value(214, 0, 0, wire(['T.add', 'lib', 'add', [2, 3]])), 5);
  assert.equal(value(214, 0, 0, wire(['T.f', 'lib', 'nested.f', []])), 'deep');
  assert.equal(value(214, 0, 0, wire(['T.c', 'globalThis', 'structuredClone', [[1, 2]]])).length, 2);
  assert.throws(() => value(201, 0, 0, enc.encode('toString')), { message: 'TypeError: JavaScript module "toString" is not in this edge build. Edge builds import modules statically: use it in a binding (@[js "toString" …]) or list it in the build\'s modules.' });
  assert.throws(() => value(201, 0, 0, enc.encode('other')), /JavaScript module "other" is not in this edge build/);
});

// Strings and object keys have ASCII fast paths (Writer.string, Reader.string,
// Reader.key); their bytes and values must be exactly the general path's
// (TextEncoder's UTF-8; TextDecoder), on both sides of every boundary.
const samples = ['', 'a', 'field12', '\x7f', 'caf\u00e9', '\u00e9t\u00e9', 'x\u{1F600}', '\u{1F600}', 'ab\u0080', '\ufeffbom', 'lone \ud800 surrogate',
  ...[31, 32, 33, 63, 64, 65, 200].flatMap(n => ['k'.repeat(n), 'k'.repeat(n - 1) + '\u00e9', '\u00e9' + 'k'.repeat(n - 1)])];
test('strings and keys encode as UTF-8 and decode as TextDecoder does, on every fast-path boundary', () => {
  const seen = [];
  const { call } = edge({ modules: { echo: { id: x => { seen.push(x); return x; } } } });
  const echo = x => call(214, 0, 0, wire(['T.id', 'echo', 'id', [x]]));
  for (const s of samples) {
    const text = dec.decode(enc.encode(s));
    assert.deepEqual(echo(s), wire(text), JSON.stringify(s));
    assert.equal(seen.pop(), text, JSON.stringify(s));
    // Twice: the second read of a key comes from the key cache.
    for (let round = 0; round < 2; round++) {
      assert.deepEqual(echo({ [s]: s, after: 1 }), wire({ [text]: text, after: 1 }), JSON.stringify(s));
      assert.deepEqual(Object.entries(seen.pop()), [[text, text], ['after', 1]], JSON.stringify(s));
    }
  }
  // Bytes that are not valid UTF-8 decode as TextDecoder replaces them, as values and keys.
  for (const raw of [[0x61, 0xff], [0xc3], [0x80, 0x61], [0x7f, 0x80]]) {
    const bytes = cat(u32(raw.length), Uint8Array.from(raw)), text = dec.decode(Uint8Array.from(raw));
    const args = items => cat(Uint8Array.of(8), u32(4), wire('T.id'), wire('echo'), wire('id'), Uint8Array.of(8), u32(1), items);
    call(214, 0, 0, args(cat(Uint8Array.of(5), bytes)));
    assert.equal(seen.pop(), text);
    call(214, 0, 0, args(cat(Uint8Array.of(9), u32(1), bytes, Uint8Array.of(0))));
    assert.deepEqual(Object.keys(seen.pop()), [text]);
  }
  // Many strings in one value: the writer grows its buffer in the middle of the fast path.
  const many = Object.fromEntries(Array.from({ length: 300 }, (_, i) => [`key${i}`, i % 3 ? `value number ${i}` : i]));
  assert.deepEqual(echo(many), wire(many));
  // Keys that share a cache slot or a length still decode as themselves.
  const wide = Object.fromEntries(Array.from({ length: 3000 }, (_, i) => [`k${i}`, i]));
  for (let round = 0; round < 2; round++) { echo(wide); assert.deepEqual(seen.pop(), wide); }
  for (let round = 0; round < 2; round++) for (const k of ['ab', 'ba', 'ac', 'abc', 'ab']) { echo({ [k]: 0 }); assert.deepEqual(Object.keys(seen.pop()), [k]); }
});

test('values: every kind round-trips, including ones larger than the first buffer', () => {
  const { value, js } = edge({ modules: { echo: { id: x => x } } });
  const id = x => value(214, 0, 0, wire(['T.id', 'echo', 'id', [x]]));
  const cases = [undefined, null, true, false, 1.5, -0, '', 'é😀', 12345678901234567890n, new Uint8Array([1, 2]), [1, [2, [3]]], { a: { b: 'c' } },
    'ü'.repeat(500), Array(400).fill(true), Array(100).fill(0.5), Array(60).fill('é'.repeat(9)), new Uint8Array(1000).fill(3),
    Object.fromEntries(Array.from({ length: 70 }, (_, i) => [`k${i}`, i])), Array(30).fill(2n ** 70n)];
  for (const v of cases) assert.deepEqual(id(v), v);
  // Non-plain values become references; reference mode references everything.
  const mapRef = value(214, 0, 5, wire(['T.Map', 'globalThis', 'Map', []])).ref;
  const echoed = value(214, 0, 0, wire(['T.m', 'echo', 'id', [{ ref: mapRef }]]));
  assert.ok(echoed.ref > mapRef, 'a Map is passed back as a new reference');
  assert.ok(value(214, 0, 1, wire(['T.id', 'echo', 'id', [5]])).ref >= firstJsHandle);
  assert.equal(js.snapshot().values, 3);
  // A null-prototype object is data; a thenable is a reference.
  const lib = { bare: () => Object.assign(Object.create(null), { a: 1 }), thenable: () => ({ then() {} }) };
  const e2 = edge({ modules: { lib } });
  assert.deepEqual(e2.value(214, 0, 0, wire(['T', 'lib', 'bare', []])), { a: 1 });
  assert.ok(e2.value(214, 0, 0, wire(['T', 'lib', 'thenable', []])).ref >= firstJsHandle);
});

test('nesting: 64 levels convert, 65 fail', () => {
  const nest = n => { let v = 0; for (let i = 0; i < n; i++) v = [v]; return v; };
  const { value } = edge({ modules: { lib: { make: n => nest(n) } } });
  assert.deepEqual(value(214, 0, 0, wire(['T', 'lib', 'make', [64]])), nest(64));
  assert.throws(() => value(214, 0, 0, wire(['T', 'lib', 'make', [65]])), { message: 'TypeError: JavaScript value nests too deeply to convert to Lean data (more than 64 levels)' });
});

test('malformed requests and values are reported precisely', () => {
  const { js, call } = edge({ modules: { lib: { id: x => x } } });
  for (const head of [new Uint8Array(0), Uint8Array.of(1, 0), cat(u32(2), u32(5))])
    assert.throws(() => js.dispatch(200, 0, 0n, head), { message: 'TypeError: Malformed Lasm.JS request' });
  const binding = bytes => call(214, 0, 0, cat(Uint8Array.of(8), u32(4), wire('T'), wire('lib'), wire('id'), Uint8Array.of(8), u32(1), bytes));
  for (const bytes of [Uint8Array.of(4, 0), Uint8Array.of(5, 9, 0, 0, 0, 65), Uint8Array.of(5, 1), Uint8Array.of(10, 0)])
    assert.throws(() => binding(bytes), { message: 'TypeError: Malformed Lasm.JS value (truncated)' });
  assert.throws(() => binding(Uint8Array.of(12)), { message: 'TypeError: Malformed Lasm.JS value (tag 12)' });
  assert.throws(() => call(214, 0, 0, cat(wire(['T', 'lib', 'id', [1]]), Uint8Array.of(0))), { message: 'TypeError: Malformed Lasm.JS value (trailing bytes)' });
  assert.throws(() => call(206, firstJsHandle + 50, 0), { message: `TypeError: Invalid or released Lasm.JS value handle ${firstJsHandle + 50}` });
  assert.throws(() => call(211, 0, 0), { message: 'TypeError: Unsupported Lasm.JS operation 211 on the edge' });
  assert.throws(() => call(205, 0, 16, new Uint8Array(7)), { message: 'TypeError: Malformed Lasm.JS request' });
  assert.throws(() => call(205, 0, 16, new Uint8Array(8)), { message: 'TypeError: Malformed Lasm.JS value (truncated)' });
});

test('handles: released ahead of a request, by release(), counted', () => {
  const { js, call, value } = edge({ modules: { lib: {} } });
  const a = value(201, 0, 1, enc.encode('lib')).ref, b = value(202, 0, 0).ref, c = value(201, 0, 1, enc.encode('lib')).ref;
  assert.equal(js.owns(a), true);
  assert.equal(js.owns(firstJsHandle - 1), false);
  call(200, 0, 0, new Uint8Array(0), [a, c]);
  assert.equal(js.snapshot().values, 1);
  assert.match(dec.decode(call(206, b, 0)), /^object \{/);
  js.release(b); js.release(b);
  assert.deepEqual([js.snapshot().values, js.snapshot().released], [0, 3]);
});

test('ops 203-206: get, set, calls, methods, construction and their errors', async () => {
  const target = { a: 1, inner: { b: 2 }, n: 4, getN() { return this.n; } };
  class Point { constructor(x) { this.x = x; } }
  const lib = { target, Point, later: v => Promise.resolve(v), fails: () => Promise.reject(new RangeError('no')), zero: () => 0,
    throwsNull: () => { throw null; } };
  const { value, call } = edge({ modules: { lib } });
  const ref = value(201, 0, 1, enc.encode('lib')).ref;
  const t = value(203, ref, 1, wire('target')).ref;
  assert.equal(value(203, t, 0, wire('a')), 1);
  assert.deepEqual(value(203, t, 2, wire(['a', 'n', 'none'])), { a: 1, n: 4, none: undefined });
  assert.ok(value(203, t, 1, wire('inner')).ref >= firstJsHandle);
  assert.equal(call(204, t, 0, wire(['a', 9])).length, 0);
  assert.equal(target.a, 9);
  for (const [primitive, text] of [[5, 'number 5'], [null, 'null']]) {
    const p = value(214, 0, 1, wire(['T', 'globalThis', 'Number', [primitive]]));
    assert.throws(() => call(204, p.ref, 0, wire(['k', 1])), { message: `TypeError: Cannot set "k" on ${primitive === null ? 'number 0' : text}` });
  }
  assert.equal(value(205, 0, 8, wire([{ ref: t }, 'getN', []])), 4);
  assert.throws(() => value(205, 0, 8, wire([{ ref: t }, 'nope', []])), { message: 'TypeError: object {a, inner, n, getN} has no method "nope" (found undefined)' });
  assert.throws(() => value(205, 0, 8, wire([null, 'x', []])), { message: 'TypeError: null has no method "x" (found undefined)' });
  const P = value(203, ref, 1, wire('Point')).ref;
  const point = value(205, 0, 5, wire([{ ref: P }, null, [3]]));
  assert.ok(point.ref >= firstJsHandle);
  assert.throws(() => value(205, 0, 4, wire([1, null, []])), { message: 'TypeError: Cannot construct number 1: not a constructor' });
  assert.throws(() => value(205, 0, 0, wire(['s', null, []])), { message: 'TypeError: Cannot call string "s": not a function' });
  const later = value(203, ref, 1, wire('later')).ref;
  assert.equal(unwire(await call(205, 0, 2, wire([{ ref: later }, null, ['v']]))), 'v');
  assert.equal(value(205, 0, 0, wire([{ ref: later }, null, ['v']])).ref >= firstJsHandle, true, 'a promise without flag 2 is a reference');
  const fails = value(203, ref, 1, wire('fails')).ref;
  await assert.rejects(call(205, 0, 2, wire([{ ref: fails }, null, []])), { message: 'RangeError: no' });
  assert.equal(value(214, 0, 2, wire(['T', 'lib', 'zero', []])), 0);
  assert.throws(() => value(214, 0, 0, wire(['T', 'lib', 'throwsNull', []])), { message: 'Uncaught JavaScript value: null' });
  assert.equal(dec.decode(call(206, P, 0)), 'function Point (1 parameter)');
});

test('op 214: bindings are cached per module and path; their errors', async () => {
  let n = 0;
  const lib = { count: () => ++n, a: { bc: () => 'a/bc' }, nil: null, num: 3, later: v => Promise.resolve(v), reject: () => Promise.reject(new Error('r')) };
  const modules = { lib, 'lib.a': { bc: () => 'other' }, fn: Object.assign(x => `fn ${x}`, {}) };
  const { value, call } = edge({ modules });
  assert.equal(value(214, 0, 0, wire(['T', 'lib', 'count', []])), 1);
  lib.count = () => 'replaced';
  assert.equal(value(214, 0, 0, wire(['T', 'lib', 'count', []])), 2);
  assert.equal(value(214, 0, 0, wire(['T', 'lib', 'a.bc', []])), 'a/bc');
  assert.equal(value(214, 0, 0, wire(['T', 'lib.a', 'bc', []])), 'other');
  assert.equal(value(214, 0, 0, wire(['T', 'fn', '', ['x']])), 'fn x');
  assert.throws(() => value(214, 0, 0, wire(['T', 'lib', 'nil.f', []])), { message: 'TypeError: Cannot read "f" of null' });
  assert.throws(() => value(214, 0, 0, wire(['T', 'lib', 'num', []])), { message: 'TypeError: export "num" of module "lib" is number 3, not a function' });
  assert.throws(() => value(214, 0, 0, wire(['T', 'lib', '', []])), { message: 'TypeError: module "lib" is object {count, a, nil, num, later, reject}, not a function' });
  assert.equal(unwire(await call(214, 0, 2, wire(['T', 'lib', 'later', ['p']]))), 'p');
  await assert.rejects(call(214, 0, 2, wire(['T', 'lib', 'reject', []])), { message: 'Error: r' });
  assert.ok(value(214, 0, 0, wire(['T', 'lib', 'later', ['p']])).ref >= firstJsHandle);
});

test('settled values and flag 16: events announced with notify, op 209 never waits', async () => {
  let deep = 0; for (let i = 0; i < 70; i++) deep = [deep];
  const lib = { later: v => Promise.resolve(v), fails: () => Promise.reject(new RangeError('later no')), deep: () => Promise.resolve(deep) };
  const e = edge({ modules: { lib } });
  assert.equal(e.call(209, 0, 0).length, 0, 'nothing queued: an empty reply, at once');
  assert.equal(e.call(214, 0, 16, cat(u64(0x10), wire(['T', 'lib', 'later', [41]]))).length, 0);
  e.call(214, 0, 16 | 1, cat(u64(0x11), wire(['T', 'lib', 'later', [1]])));
  e.call(207, 0, 0x12, wire(7));
  e.call(214, 0, 16, cat(u64(0x13), wire(['T', 'lib', 'fails', []])));
  e.call(214, 0, 16, cat(u64(0x14), wire(['T', 'lib', 'deep', []])));
  await settled();
  assert.equal(e.notified(), 5);
  assert.equal(e.js.pendingEvents(), 5);
  const list = events(e.call(209, 0, 0));
  const by = Object.fromEntries(list.map(x => [x.promise, x]));
  assert.deepEqual([by[0x10n].failed, unwire(by[0x10n].bytes)], [0, 41]);
  assert.ok(unwire(by[0x11n].bytes).ref >= firstJsHandle, 'flag 1 keeps reference conversion');
  assert.equal(unwire(by[0x12n].bytes), 7);
  assert.deepEqual([by[0x13n].failed, dec.decode(by[0x13n].bytes)], [1, 'RangeError: later no']);
  // Regression (same as the Node bridge): the conversion failure is reported once, not wrapped twice.
  assert.deepEqual([by[0x14n].failed, dec.decode(by[0x14n].bytes)], [1, 'TypeError: JavaScript value nests too deeply to convert to Lean data (more than 64 levels)']);
  assert.equal(e.call(209, 0, 0).length, 0);
  // At most 1,024 events per reply.
  for (let i = 0; i < 1030; i++) e.call(207, 0, i, wire(i));
  await settled();
  assert.equal(events(e.call(209, 0, 0)).length, 1024);
  assert.deepEqual(events(e.call(209, 0, 0)).map(x => x.promise), [1024n, 1025n, 1026n, 1027n, 1028n, 1029n]);
});

test('asynchronous Lean functions: calls queued as events, replies matched by call, stop rejects the rest', async () => {
  const e = edge();
  const fn = unwire(e.call(210, 4, 1)).ref;
  // The function is reachable only through the handle table: call it with op 205.
  const results = [0, 1, 2].map(i => e.call(205, 0, 2, wire([{ ref: fn }, null, [`x${i}`]])));
  const list = events(e.call(209, 0, 0));
  assert.deepEqual(list.map(x => [x.kind, x.fn, unwire(x.bytes)]), [[2, 4, ['x0']], [2, 4, ['x1']], [2, 4, ['x2']]]);
  const reply = (call, failed, payload) => cat(u64(call), Uint8Array.of(failed), u32(payload.length), payload);
  e.call(208, 0, 0, cat(reply(list[2].call, 0, wire('C')), reply(77n, 0, wire('?')), reply(list[1].call, 1, enc.encode('failed in Lean')), reply(list[1].call, 0, wire('late'))));
  assert.equal(unwire(await results[2]), 'C');
  await assert.rejects(results[1], { message: 'Error: failed in Lean' });
  assert.equal(e.js.snapshot().pendingCalls, 1);
  e.js.stop(new Error('instance stopped'));
  await assert.rejects(results[0], { message: 'Error: instance stopped' });
  assert.deepEqual([e.js.snapshot().pendingCalls, e.js.pendingEvents()], [0, 0]);
  await assert.rejects(e.call(205, 0, 2, wire([{ ref: fn }, null, []])), { message: 'Error: instance stopped' });
  assert.deepEqual({ callbacks: e.js.snapshot().callbacks, functionsCreated: e.js.snapshot().functionsCreated }, { callbacks: 3, functionsCreated: 1 });
});

test('a reply can be a method call made here (Reply.callMethod); a bad payload rejects', async () => {
  class Res { json(x) { this.sent = x; return 'sent'; } }
  const res = new Res();
  const lib = { make: () => res };
  const e2 = edge({ modules: { lib } });
  const f2 = unwire(e2.call(210, 9, 1)).ref;
  const r = unwire(e2.call(214, 0, 1, wire(['T', 'lib', 'make', []]))).ref;
  const pending = e2.call(205, 0, 2, wire([{ ref: f2 }, null, [{ ref: r }]]));
  const [call] = events(e2.call(209, 0, 0));
  const arg = unwire(call.bytes)[0];
  const payload = wire([{ ref: arg.ref }, 'json', [{ ok: true }]]);
  e2.call(208, 0, 0, cat(u64(call.call), Uint8Array.of(2), u32(payload.length), payload));
  assert.equal(unwire(await pending), 'sent');
  assert.deepEqual(res.sent, { ok: true });
  const bad = e2.call(205, 0, 2, wire([{ ref: f2 }, null, []]));
  const [call2] = events(e2.call(209, 0, 0));
  e2.call(208, 0, 0, cat(u64(call2.call), Uint8Array.of(0), u32(1), Uint8Array.of(42)));
  // Regression: an awaited promise that rejects with a Lasm.JS failure was reported as "Error: TypeError: …".
  await assert.rejects(bad, { message: 'TypeError: Malformed Lasm.JS value (tag 42)' });
});

test('synchronous Lean functions call the export directly; a failure status throws its message', () => {
  const calls = [];
  const e = edge({ syncCall: (fn, args) => {
    calls.push([fn, unwire(args)]);
    if (fn === 3) return cat(Uint8Array.of(1), enc.encode('Lean said no'));
    return cat(Uint8Array.of(0), wire(['ok', fn]));
  } });
  const f = unwire(e.call(210, 5, 2)).ref, g = unwire(e.call(210, 3, 2)).ref;
  assert.deepEqual(e.value(205, 0, 0, wire([{ ref: f }, null, [1, 'two']])), ['ok', 5]);
  assert.throws(() => e.value(205, 0, 0, wire([{ ref: g }, null, []])), { message: 'Error: Lean said no' });
  assert.deepEqual(calls, [[5, [1, 'two']], [3, []]]);
  assert.equal(e.js.snapshot().syncCallbacks, 2);
  assert.equal(e.js.snapshot().functionsCreated, 2);
});

test('statistics: op 213 and the snapshot', () => {
  const e = edge({ modules: { lib: {} } });
  e.call(201, 0, 1, enc.encode('lib'));
  assert.deepEqual(JSON.parse(dec.decode(e.call(213, 0, 0))), { values: 1, pendingCalls: 0, queuedEvents: 0, functionsLive: 0, released: 0,
    callbacks: 0, syncCallbacks: 0, functionsCreated: 0, functionsCollected: 0 });
});

test('describe: objects whose prototype has no constructor, typed arrays without a name', () => {
  assert.equal(describe(Object.create(Object.create(null))), 'object');
  const bytes = new Uint8Array(2);
  Object.setPrototypeOf(bytes, Object.create(Uint8Array.prototype, { constructor: { value: undefined } }));
  assert.equal(describe(bytes), 'Uint8Array of length 2');
});

test('concat joins byte arrays in order', () => {
  const { js } = edge();
  assert.deepEqual([...js.concat([Uint8Array.of(1, 2), new Uint8Array(0), Uint8Array.of(3)])], [1, 2, 3]);
  assert.equal(js.concat([]).length, 0);
});

test('requests: values after released handles, truncated replies, nested objects, paths through undefined', () => {
  const lib = { nothing: undefined, a: () => 'a/bc' };
  const e = edge({ modules: { lib, a: { bc: () => 'module a' }, ab: { c: () => 'module ab' } } });
  const ref = e.value(201, 0, 1, enc.encode('lib')).ref;
  // A request that releases a handle still carries its value.
  assert.ok(e.value(201, 0, 1, enc.encode('lib'), [ref]).ref >= firstJsHandle);
  assert.equal(e.js.snapshot().released, 1);
  // A reply too short for its call id.
  assert.throws(() => e.call(208, 0, 0, Uint8Array.of(1, 2, 3)), { message: 'TypeError: Malformed Lasm.JS value (truncated)' });
  // Objects count towards the nesting limit like arrays.
  let deep = 0; for (let i = 0; i < 70; i++) deep = { d: deep };
  const later = { deep: () => deep };
  const d = edge({ modules: { later } });
  assert.throws(() => d.value(214, 0, 0, wire(['T', 'later', 'deep', []])), { message: 'TypeError: JavaScript value nests too deeply to convert to Lean data (more than 64 levels)' });
  assert.throws(() => e.value(214, 0, 0, wire(['T', 'lib', 'nothing.x', []])), { message: 'TypeError: Cannot read "x" of undefined' });
  // Bindings are cached per (module, path) pair, not per concatenation.
  assert.equal(e.value(214, 0, 0, wire(['T', 'a', 'bc', []])), 'module a');
  assert.equal(e.value(214, 0, 0, wire(['T', 'ab', 'c', []])), 'module ab');
});

test('get and set: keys of any kind (Symbols, numbers, arrays); getFields only with arg bit 2', () => {
  const tag = Symbol('tag'), target = { [tag]: 'symbol', 2: 'two', 'a,b': 'joined', a: 'one' };
  const lib = { target, tag };
  const e = edge({ modules: { lib } });
  const ref = e.value(201, 0, 1, enc.encode('lib')).ref;
  const t = e.value(203, ref, 1, wire('target')).ref, key = { ref: e.value(203, ref, 1, wire('tag')).ref };
  assert.equal(e.value(203, t, 0, wire(key)), 'symbol');
  assert.equal(e.value(203, t, 0, wire(2)), 'two');
  assert.equal(e.value(203, t, 0, wire(['a', 'b'])), 'joined', 'an array key is its string, as in JavaScript');
  assert.deepEqual(e.value(203, t, 2, wire(['a', 2])), { a: 'one', 2: 'two' });
  assert.ok(e.value(203, t, 1, wire(key)).ref >= firstJsHandle, 'arg bit 0 still asks for a reference');
  assert.equal(e.call(204, t, 0, wire([key, 'set'])).length, 0);
  assert.equal(target[tag], 'set');
  e.call(204, t, 0, wire([3, 'three']));
  assert.equal(target[3], 'three');
  const nil = e.value(214, 0, 1, wire(['T', 'globalThis', 'Number', [null]])).ref;
  assert.throws(() => e.call(204, nil, 0, wire([key, 1])), { message: 'TypeError: Cannot set symbol tag on number 0' });
  assert.throws(() => e.call(204, nil, 0, wire([3, 1])), { message: 'TypeError: Cannot set number 3 on number 0' });
});

test('get and set: fields of null through a key list, properties of functions, null targets', () => {
  const lib = { nil: null, fn: function f() {} };
  const e = edge({ modules: { lib } });
  const ref = e.value(201, 0, 1, enc.encode('lib')).ref;
  const nil = e.value(203, ref, 1, wire('nil')).ref;
  assert.deepEqual(e.value(203, nil, 2, wire(['a'])), { a: undefined });
  assert.throws(() => e.call(204, nil, 0, wire(['k', 1])), { message: 'TypeError: Cannot set "k" on null' });
  const fn = e.value(203, ref, 1, wire('fn')).ref;
  assert.equal(e.call(204, fn, 0, wire(['tag', 7])).length, 0);
  assert.equal(lib.fn.tag, 7);
});

test('op 205: flag 16 settles into a promise; flag 2 returns plain results at once and wraps odd rejections', async () => {
  const lib = { later: v => Promise.resolve(v), plain: () => 42, rejectsUndefined: () => Promise.reject(undefined) };
  const e = edge({ modules: { lib } });
  const ref = e.value(201, 0, 1, enc.encode('lib')).ref;
  const later = e.value(203, ref, 1, wire('later')).ref;
  assert.equal(e.call(205, 0, 16, cat(u64(0x21), wire([{ ref: later }, null, ['v']]))).length, 0);
  await settled();
  const [event] = events(e.call(209, 0, 0));
  assert.deepEqual([event.promise, event.failed, unwire(event.bytes)], [0x21n, 0, 'v']);
  const plain = e.value(203, ref, 1, wire('plain')).ref;
  const direct = e.call(205, 0, 2, wire([{ ref: plain }, null, []]));
  assert.equal(typeof direct.then, 'undefined', 'not a promise');
  assert.equal(unwire(direct), 42);
  const direct214 = e.call(214, 0, 2, wire(['T', 'lib', 'plain', []]));
  assert.equal(typeof direct214.then, 'undefined');
  const odd = e.value(203, ref, 1, wire('rejectsUndefined')).ref;
  await assert.rejects(e.call(205, 0, 2, wire([{ ref: odd }, null, []])), { message: jsFailure(undefined).message });
  await assert.rejects(e.call(214, 0, 2, wire(['T', 'lib', 'rejectsUndefined', []])), { message: jsFailure(undefined).message });
});

test('Lean function calls: unconvertible arguments reject without a pending call; a failing method reply rejects', async () => {
  const e = edge();
  const fn = unwire(e.call(210, 4, 1)).ref;
  let deep = 0; for (let i = 0; i < 70; i++) deep = [deep];
  const lib = { call: f => f(deep) };
  const c = edge({ modules: { lib } });
  const cfn = unwire(c.call(210, 4, 1)).ref;
  await assert.rejects(c.call(214, 0, 2, wire(['T', 'lib', 'call', [{ ref: cfn }]])), /nests too deeply/);
  assert.equal(c.js.snapshot().pendingCalls, 0);
  // A Reply.callMethod whose method does not exist rejects the call.
  const pending = e.call(205, 0, 2, wire([{ ref: fn }, null, []]));
  const [call] = events(e.call(209, 0, 0));
  const payload = wire([{ ref: fn }, 'missing', []]);
  e.call(208, 0, 0, cat(u64(call.call), Uint8Array.of(2), u32(payload.length), payload));
  await assert.rejects(pending, /has no method "missing"/);
});

test('collected Lean functions are announced (event kind 3) and counted', async () => {
  const { setFlagsFromString } = await import('node:v8');
  const { runInNewContext } = await import('node:vm');
  setFlagsFromString('--expose-gc');
  const gc = runInNewContext('gc');
  const e = edge();
  const handles = [unwire(e.call(210, 7, 1)).ref, unwire(e.call(210, 8, 2)).ref];
  for (const handle of handles) e.js.release(handle);
  let list = [];
  for (let attempt = 0; attempt < 50 && list.length < 2; attempt++) {
    gc();
    await new Promise(resolve => setTimeout(resolve, 10));
    if (e.js.pendingEvents()) list.push(...events(e.call(209, 0, 0)));
  }
  assert.deepEqual(list.map(x => [x.kind, x.fn]).sort(), [[3, 7], [3, 8]]);
  const snapshot = e.js.snapshot();
  assert.deepEqual([snapshot.functionsCreated, snapshot.functionsCollected, snapshot.functionsLive], [2, 2, 0]);
});

// Edge profile: a synchronous callback runs on Lean's one stack, which cannot
// suspend inside it. Waiting there never hangs: a Lasm.JS await fails as a Lean
// IO error, and any other wait stops the instance with the reason (the
// embedder starts a fresh one). The real controller (src/edge/edge-pre.js),
// with Lean played by the stubbed exports.
test('edge: waiting inside a synchronous callback fails with the reason, never hangs', async () => {
  const { readFileSync } = await import('node:fs');
  const { runInNewContext } = await import('node:vm');
  const source = readFileSync(new URL('../src/edge/edge-pre.js', import.meta.url), 'utf8');
  const memory = new ArrayBuffer(65536);
  let next = 1024, lean = () => 0n;
  // An engine with JSPI, allowed by the embedder: only the synchronous callback prevents suspending.
  const engine = Object.assign(Object.create(WebAssembly), { Suspending: function Suspending() {}, promising: f => f });
  const context = { Module: { lasmEdgeJspi: true }, globalThis: { WebAssembly: engine },
    HEAPU8: new Uint8Array(memory), HEAPU32: new Uint32Array(memory), BigInt, Number, Error, TextEncoder, DataView, Object,
    queueMicrotask, _malloc: n => { const p = next; next += Math.ceil(n / 8) * 8 + 8; return p; }, _free: () => {},
    stackSave: () => 0, stackRestore: () => {}, _lasm_js_edge_sync: (...args) => lean(...args) };
  runInNewContext(source, context);
  const controller = context.Module.lasmEdge;
  controller.attach({ request: op => (op === 205 || op === 72 ? new Promise(() => {}) : { error: false, bytes: new Uint8Array(0) }), pending: () => false });
  // A Lasm.JS await (op 205 with a promise result) answers with a Lean IO error.
  let answer;
  lean = (_fn, _input, _length, size) => {
    answer = controller.call(205, 0, 2n, 0, 0);
    const bytes = new Uint8Array(-Number(answer) - 1);
    controller.copy(4096, bytes.length);
    context.HEAPU8.set([1], 2048); context.HEAPU32[Number(size) >> 2] = 1;
    lean.message = new TextDecoder().decode(context.HEAPU8.slice(4096 + 16, 4096 + bytes.length));
    return 2048n;
  };
  controller.syncCall(1, new Uint8Array([0]));
  assert.ok(answer < 0n);
  assert.match(lean.message, /completes asynchronously and cannot be waited for here \(inside a synchronous JavaScript callback\)/);
  assert.equal(controller.stopped, null);
  // Another wait (a timer) stops the instance with the reason; later calls fail with it.
  lean = () => { controller.call(72, 0, 0n, 0, 0); return 2048n; };
  assert.throws(() => controller.syncCall(1, new Uint8Array([0])), /Lean host operation 72 must wait, and this Lean code cannot suspend \(inside a synchronous JavaScript callback\)/);
  assert.match(controller.stopped.message, /must wait/);
  assert.throws(() => controller.syncCall(1, new Uint8Array([0])), /must wait/);
});

// A C-stack overflow (docs/TESTING.md#bugs-found) surfaces as whatever trap
// follows it. The real controller keeps where Lean's C stack pointer was when
// the instance stopped, read before it restores the stack, and the stack's top
// (the highest pointer seen entering Lean), for edge-start.mjs to name the overflow.
test('edge: the controller keeps the C stack pointer at the stop, before restoring the stack', async () => {
  const { readFileSync } = await import('node:fs');
  const { runInNewContext } = await import('node:vm');
  const source = readFileSync(new URL('../src/edge/edge-pre.js', import.meta.url), 'utf8');
  let sp = 3 << 20;
  const restored = [];
  const trap = new Error('memory access out of bounds');
  const context = { Module: { lasmEdgeJspi: false }, globalThis: { WebAssembly }, BigInt, Number, Error, TextEncoder, DataView, Object, queueMicrotask,
    stackSave: () => sp, stackRestore: value => { restored.push([value, sp]); sp = value; },
    // Lean recursing past the 1 MiB stack: the pointer is left below its end (as a signed i32 here).
    callMain: () => { sp = -64; throw trap; } };
  runInNewContext(source, context);
  const controller = context.Module.lasmEdge;
  controller.attach({ request: () => ({ error: false, bytes: new Uint8Array(0) }), pending: () => false });
  assert.equal(controller.stoppedStack, null);
  assert.throws(() => controller.main([]), trap);
  assert.deepEqual({ ...controller.stoppedStack }, { top: 3 << 20, pointer: 2 ** 32 - 64 });
  assert.deepEqual(restored, [[3 << 20, -64]]);
  assert.equal(controller.stopped, trap);
});

test('strings keep a leading U+FEFF in both directions (found by the Lasm.JS.Web conformance run)', () => {
  const e = edge();
  const f = e.value(214, 0, 1, wire(['T', 'globalThis', 'Function', ['s', 'return [s.length, s.charCodeAt(0), s]']])).ref;
  assert.deepEqual(e.value(205, 0, 0, wire([{ ref: f }, null, ['﻿test=﻿']])), [7, 0xFEFF, '﻿test=﻿']);
});
