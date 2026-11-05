// The Lasm.JS host bridge on Node (src/node-js.mjs), case by case: the wire
// format's edges (buffer growth, truncation, nesting, tags), every operation's
// errors, the interop poller, Lean functions (asynchronous, synchronous, and their
// collection), and the synchronous-callback channel driven by a real second
// thread playing the Lean side. test/node-js.test.mjs covers the main paths and
// the bridge's regressions; this file was written to kill the surviving mutants
// of docs/TESTING.md#mutation-testing.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { setFlagsFromString } from 'node:v8';
import { runInNewContext } from 'node:vm';
import { Worker } from 'node:worker_threads';
import { createNodeJs as createHost, describe, jsFailure, firstJsHandle, jsProtocolVersion } from '../src/node-js.mjs';

setFlagsFromString('--expose-gc');
const gc = runInNewContext('gc');

const u32 = n => { const b = Buffer.alloc(4); b.writeUInt32LE(n); return b; };
const u64 = n => { const b = Buffer.alloc(8); b.writeBigUInt64LE(BigInt(n)); return b; };
const str = s => Buffer.concat([u32(Buffer.byteLength(s)), Buffer.from(s)]);
const wire = value => {
  if (value === undefined) return Buffer.from([0]);
  if (value === null) return Buffer.from([1]);
  if (value === true || value === false) return Buffer.from([value ? 3 : 2]);
  if (typeof value === 'number') { const b = Buffer.alloc(9); b[0] = 4; b.writeDoubleLE(value, 1); return b; }
  if (typeof value === 'string') return Buffer.concat([Buffer.from([5]), str(value)]);
  if (Array.isArray(value)) return Buffer.concat([Buffer.from([8]), u32(value.length), ...value.map(wire)]);
  if (value.ref !== undefined) return Buffer.concat([Buffer.from([10]), u32(value.ref), u32(0)]);
  const keys = Object.keys(value);
  return Buffer.concat([Buffer.from([9]), u32(keys.length), ...keys.flatMap(k => [str(k), wire(value[k])])]);
};
const released = (ids = []) => Buffer.concat([u32(ids.length), ...ids.map(u32)]);
function host(options) {
  const js = createHost(options);
  const raw = js.dispatch;
  return { ...js, raw, dispatch: (op, id, arg, bytes = Buffer.alloc(0), ids) => raw(op, id, arg, Buffer.concat([released(ids), bytes])) };
}
const hold = (js, value) => js.encode(value, 'reference').readUInt32LE(1);
const poll = js => js.dispatch(209, 0, 0n);
// Events of one long poll: kind 1 (promise), 2 (Lean call), 3 (function collected).
function events(bytes) {
  const list = [];
  let o = 0;
  while (o < bytes.length) {
    const kind = bytes[o++];
    if (kind === 1) { const promise = bytes.readBigUInt64LE(o), failed = bytes[o + 8], n = bytes.readUInt32LE(o + 9); list.push({ kind, promise, failed, bytes: bytes.subarray(o + 13, o + 13 + n) }); o += 13 + n; }
    else if (kind === 2) { const call = bytes.readBigUInt64LE(o), fn = bytes.readUInt32LE(o + 8), n = bytes.readUInt32LE(o + 12); list.push({ kind, call, fn, bytes: bytes.subarray(o + 16, o + 16 + n) }); o += 16 + n; }
    else { list.push({ kind, fn: bytes.readUInt32LE(o) }); o += 4; }
  }
  return list;
}
const reply = (call, failed, payload) => Buffer.concat([u64(call), Buffer.from([failed]), u32(payload.length), payload]);

function project(files) {
  const root = mkdtempSync(join(tmpdir(), 'lasm-js-bridge-'));
  writeFileSync(join(root, 'package.json'), '{}');
  for (const [name, source] of Object.entries(files)) {
    mkdirSync(join(root, 'node_modules', name), { recursive: true });
    writeFileSync(join(root, 'node_modules', name, 'package.json'), JSON.stringify({ name, main: 'index.js' }));
    writeFileSync(join(root, 'node_modules', name, 'index.js'), source);
  }
  return root;
}

test('jsFailure: errors, strings, other values, values JSON cannot show; Lean user errors', () => {
  const cases = [
    [new RangeError('out'), 'RangeError: out'],
    ['plain text', 'Uncaught JavaScript value: plain text'],
    [{ a: 1 }, 'Uncaught JavaScript value: {"a":1}'],
    [42, 'Uncaught JavaScript value: 42'],
    [undefined, 'Uncaught JavaScript value: undefined'],
    [Symbol('s'), 'Uncaught JavaScript value: Symbol(s)'],
  ];
  for (const [value, message] of cases) {
    const error = jsFailure(value);
    assert.equal(error.message, message);
    assert.equal(error.leanUserError, true);
    assert.equal(error.code, 'EJS');
  }
  const circular = {}; circular.self = circular;
  assert.equal(jsFailure(circular).message, 'Uncaught JavaScript value');
  assert.equal(jsFailure(10n).message, 'Uncaught JavaScript value');
});

test('describe: every kind of value', () => {
  const long = 'x'.repeat(61), sixty = 'y'.repeat(60);
  const cases = [
    [null, 'null'], [undefined, 'undefined'],
    ['short', 'string "short"'], [sixty, `string "${sixty}"`], [long, `string "${'x'.repeat(57)}..."`],
    [1.5, 'number 1.5'], [true, 'boolean true'], [12n, 'bigint 12n'],
    [Symbol('tag'), 'symbol tag'], [Symbol(), 'symbol '],
    [function named(a) {}, 'function named (1 parameter)'], [() => {}, 'function (anonymous)'], [function two(a, b) {}, 'function two (2 parameters)'],
    [[1, 2, 3], 'array of length 3'], [Promise.resolve(), 'promise'], [{ then() {} }, 'promise'],
    [new Uint8Array(4), 'Uint8Array of length 4'], [Buffer.alloc(2), 'Buffer of length 2'],
    [Object.create(null), 'object'], [{}, 'object'],
    [{ a: 1, b: 2, c: 3, d: 4, e: 5, f: 6 }, 'object {a, b, c, d, e, f}'],
    [{ a: 1, b: 2, c: 3, d: 4, e: 5, f: 6, g: 7 }, 'object {a, b, c, d, e, f, …}'],
    [new (class Thing { constructor() { this.k = 1; } })(), 'Thing object {k}'],
    [new Proxy({}, { ownKeys() { throw new Error('exotic'); } }), 'object'],
  ];
  for (const [value, text] of cases) assert.equal(describe(value), text);
  assert.equal(describe(Object.create(Object.create(null))), 'object');
  const nullProto = Object.assign(Object.create(null), { k: 1 });
  assert.equal(describe(nullProto), 'object {k}');
});

test('wire: values larger than the writer’s first buffer round-trip, for every kind', () => {
  const js = host();
  const values = [
    Array(400).fill(true), Array(300).fill(false), Array(200).fill(''), Array(100).fill(1.25),
    Array(50).fill('é'.repeat(5)), 'z'.repeat(1000), Array(80).fill(new Uint8Array([1, 2, 3])),
    Array(60).fill(2n ** 64n), Object.fromEntries(Array.from({ length: 80 }, (_, i) => [`key${i}`, i])),
    new Uint8Array(1000).fill(7), [null, undefined, true, false, 0, -0, NaN, Infinity, 'a', [], {}],
  ];
  for (const value of values) assert.deepEqual(js.decode(js.encode(value, 'data')), value);
  // Many events in one poll exceed the first buffer too (u64 promise pointers).
  for (let i = 0; i < 40; i++) js.dispatch(207, 0, BigInt(0x1000 + i), wire(i));
  return new Promise(resolve => setImmediate(resolve)).then(async () => {
    const list = events(await poll(js));
    assert.deepEqual(list.map(e => [e.promise, js.decode(e.bytes)]), Array.from({ length: 40 }, (_, i) => [BigInt(0x1000 + i), i]));
  });
});

test('wire: plain objects (null prototype too) are data; thenables, class instances and functions are references', () => {
  const js = host();
  const bare = Object.assign(Object.create(null), { a: 1 });
  assert.deepEqual({ ...js.decode(js.encode(bare, 'data')) }, { a: 1 });
  assert.equal(js.values.size, 0);
  const thenable = { then() {} };
  assert.equal(js.decode(js.encode(thenable, 'data')), thenable);
  assert.equal(js.values.size, 1);
  const fn = () => 1;
  assert.equal(js.decode(js.encode([fn], 'data'))[0], fn);
  // Reference mode makes primitives references too.
  const bytes = js.encode(5, 'reference');
  assert.equal(bytes[0], 10);
  assert.equal(js.values.get(bytes.readUInt32LE(1)), 5);
  assert.equal(bytes.readUInt32LE(5), 0, 'no description');
});

test('wire: nesting up to 64 levels converts; deeper fails with a clear error', () => {
  const js = host();
  const nest = n => { let v = 0; for (let i = 0; i < n; i++) v = [v]; return v; };
  const nestObject = n => { let v = 0; for (let i = 0; i < n; i++) v = { v }; return v; };
  assert.deepEqual(js.decode(js.encode(nest(64), 'data')), nest(64));
  assert.deepEqual(js.decode(js.encode(nestObject(64), 'data')), nestObject(64));
  for (const deep of [nest(65), nestObject(65)])
    assert.throws(() => js.encode(deep, 'data'), { message: 'TypeError: JavaScript value nests too deeply to convert to Lean data (more than 64 levels)' });
});

test('wire: every tag decodes; malformed input is reported precisely', () => {
  const js = host();
  assert.equal(js.decode(Buffer.from([2])), false);
  assert.equal(js.decode(Buffer.from([3])), true);
  assert.equal(js.decode(Buffer.concat([Buffer.from([6]), str('-12345678901234567890')])), -12345678901234567890n);
  const truncated = [Buffer.alloc(0), Buffer.from([4, 0, 0]), Buffer.from([5, 1, 0]), Buffer.from([5, 5, 0, 0, 0, 65]),
    Buffer.from([8, 2, 0, 0, 0, 1]), Buffer.from([9, 1, 0, 0, 0, 2, 0, 0, 0, 107]), Buffer.from([10, 1, 0])];
  for (const bytes of truncated) assert.throws(() => js.decode(bytes), { message: 'TypeError: Malformed Lasm.JS value (truncated)' }, bytes.toString('hex'));
  assert.throws(() => js.dispatch(208, 0, 0n, Buffer.alloc(5)), { message: 'TypeError: Malformed Lasm.JS value (truncated)' });
  assert.throws(() => js.decode(Buffer.from([11])), { message: 'TypeError: Malformed Lasm.JS value (tag 11)' });
  assert.throws(() => js.decode(Buffer.from([1, 1])), { message: 'TypeError: Malformed Lasm.JS value (trailing bytes)' });
  assert.throws(() => js.decode(wire({ ref: firstJsHandle + 99 })), { message: `TypeError: Invalid or released Lasm.JS value handle ${firstJsHandle + 99}` });
});

test('requests: released handles come first; malformed heads and unknown operations fail', () => {
  const js = host();
  const a = hold(js, 'a'), b = hold(js, 'b'), c = hold(js, 'c');
  assert.equal(js.dispatch(200, 0, 0n, Buffer.alloc(0), [a, c]).readUInt32LE(0), jsProtocolVersion);
  assert.deepEqual([...js.values.values()], ['b']);
  assert.equal(js.snapshot().released, 2);
  assert.equal(js.dispatch(206, b, 0n).toString(), 'string "b"');
  // Released handles ahead of a payload: the payload starts after them.
  const d = hold(js, { k: 'v' }), e = hold(js, 'e');
  assert.equal(js.decode(js.dispatch(203, d, 0n, wire('k'), [e])), 'v');
  assert.equal(js.values.has(e), false);
  for (const head of [Buffer.alloc(0), Buffer.from([1, 0]), Buffer.concat([u32(2), u32(b)])])
    assert.throws(() => js.raw(200, 0, 0n, head), { message: 'TypeError: Malformed Lasm.JS request' });
  assert.equal(js.values.size, 2, 'a malformed head releases nothing');
  assert.throws(() => js.dispatch(212, 0, 0n), { message: 'TypeError: Unsupported Lasm.JS operation 212' });
  // Flag 16 requests start with an 8-byte promise pointer; exactly 8 bytes leave an empty value.
  assert.throws(() => js.dispatch(205, 0, 16n, Buffer.alloc(7)), { message: 'TypeError: Malformed Lasm.JS request' });
  assert.throws(() => js.dispatch(205, 0, 16n, Buffer.alloc(8)), { message: 'TypeError: Malformed Lasm.JS value (truncated)' });
  // Without flag 16, op 205's request is the value itself.
  assert.throws(() => js.dispatch(205, 0, 0n, Buffer.alloc(8)), { message: 'TypeError: Malformed Lasm.JS value (trailing bytes)' });
});

test('ops 202-204: globalThis, get one key or several, set, and their errors', () => {
  const js = host();
  const g = js.dispatch(202, 0, 1n);
  assert.equal(js.values.get(g.readUInt32LE(1)), globalThis);
  assert.equal(js.decode(js.dispatch(202, 0, 0n)), globalThis, 'globalThis is no plain object: a reference');
  const target = { a: 1, b: 'two', inner: { c: 3 }, f() {} };
  const id = hold(js, target);
  assert.equal(js.decode(js.dispatch(203, id, 0n, wire('a'))), 1);
  assert.deepEqual(js.decode(js.dispatch(203, id, 0n, wire(['a', 'b', 'missing']))), { a: 1, b: 'two', missing: undefined });
  const inner = js.dispatch(203, id, 1n, wire('inner'));
  assert.equal(js.values.get(inner.readUInt32LE(1)), target.inner);
  assert.deepEqual(js.decode(js.dispatch(203, hold(js, null), 0n, wire(['x']))), { x: undefined });
  assert.throws(() => js.dispatch(203, hold(js, null), 0n, wire('x')), /TypeError: Cannot read properties of null/);
  assert.equal(js.dispatch(204, id, 0n, wire(['a', 5])).length, 0);
  assert.equal(target.a, 5);
  const fn = function () {};
  js.dispatch(204, hold(js, fn), 0n, wire(['tag', 'set']));
  assert.equal(fn.tag, 'set');
  for (const [value, text] of [[null, 'null'], [7, 'number 7'], ['s', 'string "s"'], [undefined, 'undefined']])
    assert.throws(() => js.dispatch(204, hold(js, value), 0n, wire(['k', 1])), { message: `TypeError: Cannot set "k" on ${text}` });
});

test('op 205: calls, methods and construction; their errors; awaiting', async () => {
  const js = host();
  const add = hold(js, (a, b) => a + b);
  assert.equal(js.decode(js.dispatch(205, 0, 0n, wire([{ ref: add }, null, [2, 3]]))), 5);
  const self = hold(js, { n: 4 });
  const getN = hold(js, function () { return this.n; });
  assert.equal(js.decode(js.dispatch(205, 0, 0n, wire([{ ref: getN }, { ref: self }, []]))), 4);
  class Point { constructor(x) { this.x = x; } }
  const point = js.decode(js.dispatch(205, 0, 4n, wire([{ ref: hold(js, Point) }, null, [9]])));
  assert.ok(point instanceof Point);
  assert.equal(point.x, 9);
  assert.throws(() => js.dispatch(205, 0, 4n, wire([5, null, []])), { message: 'TypeError: Cannot construct number 5: not a constructor' });
  assert.throws(() => js.dispatch(205, 0, 0n, wire(['f', null, []])), { message: 'TypeError: Cannot call string "f": not a function' });
  assert.throws(() => js.dispatch(205, 0, 8n, wire([{ ref: self }, 'nope', []])), { message: 'TypeError: object {n} has no method "nope" (found undefined)' });
  assert.throws(() => js.dispatch(205, 0, 8n, wire([null, 'm', []])), { message: 'TypeError: null has no method "m" (found undefined)' });
  // A thrown non-Error value.
  assert.throws(() => js.dispatch(205, 0, 0n, wire([{ ref: hold(js, () => { throw undefined; }) }, null, []])), { message: 'Uncaught JavaScript value: undefined' });
  assert.throws(() => js.dispatch(205, 0, 0n, wire([{ ref: hold(js, () => { throw null; }) }, null, []])), { message: 'Uncaught JavaScript value: null' });
  // Flag 2 awaits a promise result; without it, the promise is returned (a reference).
  const later = hold(js, v => Promise.resolve(v));
  assert.equal(js.decode(await js.dispatch(205, 0, 2n, wire([{ ref: later }, null, ['v']]))), 'v');
  const promise = js.decode(js.dispatch(205, 0, 0n, wire([{ ref: later }, null, ['v']])));
  assert.equal(typeof promise.then, 'function');
  assert.equal(js.decode(js.dispatch(205, 0, 2n, wire([{ ref: add }, null, [1, 1]]))), 2, 'flag 2 on a plain result');
  assert.equal(js.decode(js.dispatch(205, 0, 2n, wire([{ ref: hold(js, () => 0) }, null, []]))), 0, 'flag 2 on a falsy result');
  const failing = hold(js, () => Promise.reject(new TypeError('async no')));
  await assert.rejects(js.dispatch(205, 0, 2n, wire([{ ref: failing }, null, []])), { message: 'TypeError: async no', leanUserError: true });
  await assert.rejects(js.dispatch(205, 0, 2n, wire([{ ref: hold(js, () => Promise.reject(undefined)) }, null, []])), { message: 'Uncaught JavaScript value: undefined' });
  // A reference result (flag 1) of an awaited promise.
  const refResult = await js.dispatch(205, 0, 3n, wire([{ ref: later }, null, ['r']]));
  assert.equal(refResult[0], 10);
});

test('op 214: typed bindings resolve once per module and path, and their errors', async () => {
  const root = project({
    lib: `let n = 0; module.exports = { count: () => ++n, a: { bc: () => 'a/bc' }, later: v => Promise.resolve(v),
      reject: () => Promise.reject(new RangeError('bad')), notFn: 3, nil: null, zero: () => 0,
      rejectUndefined: () => Promise.reject(undefined) };`,
    'lib.a': `module.exports = { bc: () => 'never' };`,
    fn: `module.exports = function whole(x) { return 'whole ' + x; };`,
    ab: `module.exports = { c: () => 'ab + c' };`,
    a: `module.exports = { bc: () => 'a + bc' };`,
    'esm-broken': `throw Object.assign(new Error("Cannot find module './gone.js'"), { code: 'ERR_MODULE_NOT_FOUND' });`,
    'throws-null': `throw null;`,
    throws: `throw new Error('load failed');`,
  });
  const js = host({ appPath: join(root, 'main.mjs') });
  const call = (module, path, args, flags = 0n) => js.dispatch(214, 0, flags, wire(['T.f', module, path, args]));
  assert.equal(js.decode(call('lib', 'count', [])), 1);
  // The binding is cached: replacing the export afterwards does not change it.
  // (Reference conversion: the module object itself, not a copy.)
  const lib = js.decode(js.dispatch(201, 0, 1n, Buffer.from('lib')));
  lib.count = () => 'replaced';
  assert.equal(js.decode(call('lib', 'count', [])), 2);
  assert.equal(js.decode(call('lib', 'a.bc', [])), 'a/bc');
  // Module "lib" + path "a.bc" and module "lib.a" + path "bc" are different bindings.
  assert.equal(js.decode(call('lib.a', 'bc', [])), 'never');
  assert.equal(js.decode(call('fn', '', ['x'])), 'whole x');
  // Module and path are kept apart in the binding cache.
  assert.equal(js.decode(call('ab', 'c', [])), 'ab + c');
  assert.equal(js.decode(call('a', 'bc', [])), 'a + bc');
  assert.throws(() => call('esm-broken', '', []), { message: /^TypeError: Cannot find JavaScript module "esm-broken"/ });
  assert.throws(() => call('throws-null', '', []), { message: 'Uncaught JavaScript value: null' });
  // Flag 2 on a plain (truthy) result replies at once, not with a promise.
  assert.equal(typeof call('lib', 'count', [], 2n).then, 'undefined');
  assert.throws(() => call('lib', 'nil.f', []), { message: 'TypeError: Cannot read "f" of null' });
  assert.throws(() => call('lib', 'missing.f', []), { message: 'TypeError: Cannot read "f" of undefined' });
  assert.throws(() => call('lib', 'notFn', []), { message: 'TypeError: export "notFn" of module "lib" is number 3, not a function' });
  assert.throws(() => call('lib', 'notFn', [], 4n), /not a function/);
  assert.throws(() => js.dispatch(214, 0, 0n, wire(['T.f', 'globalThis', 'Math', []])), { message: 'TypeError: export "Math" of module "globalThis" is object, not a function' });
  assert.throws(() => call('throws', '', []), { message: 'Error: load failed' });
  assert.throws(() => call('nowhere', '', []), /Cannot find JavaScript module "nowhere"\. Add it to package\.json/);
  // A module object itself is not a function.
  assert.throws(() => call('lib', '', []), { message: 'TypeError: module "lib" is object {count, a, later, reject, notFn, nil, …}, not a function' });
  assert.equal(js.decode(await call('lib', 'later', ['p'], 2n)), 'p');
  assert.equal(js.decode(call('lib', 'zero', [], 2n)), 0);
  assert.equal(typeof js.decode(call('lib', 'later', ['p'])).then, 'function');
  await assert.rejects(call('lib', 'reject', [], 2n), { message: 'RangeError: bad' });
  await assert.rejects(call('lib', 'rejectUndefined', [], 2n), { message: 'Uncaught JavaScript value: undefined' });
});

test('op 201: Lasm builtin modules load from beside the host; bad names fail', () => {
  const js = host();
  const app = js.decode(js.dispatch(201, 0, 0n, Buffer.from('lasm:app')));
  assert.equal(app.target(), 'none');
  assert.equal(js.decode(js.dispatch(201, 0, 0n, Buffer.from('globalThis'))), globalThis);
  for (const name of ['lasm:ui-dom.mjs?', 'lasm:app#x', 'lasm:nope', 'lasm:', 'lasm:Bad', 'lasm:../node-js', 'lasm:9x', 'lasm:a/b', 'lasm:-x'])
    assert.throws(() => js.dispatch(201, 0, 0n, Buffer.from(name)), { message: `TypeError: Unknown Lasm builtin JavaScript module ${JSON.stringify(name)}` }, name);
  // A package called lasm-something is an ordinary npm module.
  assert.throws(() => js.dispatch(201, 0, 0n, Buffer.from('xlasm:app')), /Cannot find JavaScript module "xlasm:app"/);
});

test('modules resolve from the application directory, or the working directory without one', () => {
  const root = project({ only: 'module.exports = { here: true };' });
  const js = host({ appPath: join(root, 'dist', 'main.mjs') });
  mkdirSync(join(root, 'dist', 'node_modules', 'only'), { recursive: true });
  writeFileSync(join(root, 'dist', 'node_modules', 'only', 'package.json'), JSON.stringify({ name: 'only', main: 'index.js' }));
  writeFileSync(join(root, 'dist', 'node_modules', 'only', 'index.js'), 'module.exports = { here: "dist" };');
  assert.deepEqual(js.decode(js.dispatch(201, 0, 0n, Buffer.from('only'))), { here: 'dist' });
  const cwd = process.cwd();
  process.chdir(join(root, 'dist'));
  try { assert.deepEqual(host().decode(host().dispatch(201, 0, 0n, Buffer.from('only'))), { here: 'dist' }); }
  finally { process.chdir(cwd); }
});

test('asynchronous Lean functions: ids, out-of-order replies, unknown and repeated replies, bad payloads', async () => {
  const js = host();
  const f = js.decode(js.dispatch(210, 3, 1n));
  const results = [f('a'), f('b'), f('c')];
  const list = events(await poll(js));
  assert.deepEqual(list.map(e => [e.kind, e.fn, js.decode(e.bytes)]), [[2, 3, ['a']], [2, 3, ['b']], [2, 3, ['c']]]);
  assert.equal(new Set(list.map(e => e.call)).size, 3);
  assert.equal(js.snapshot().pendingCalls, 3);
  // Replies in reverse order, an unknown call, and a repeated reply in one batch.
  js.dispatch(208, 0, 0n, Buffer.concat([reply(list[2].call, 0, wire('C')), reply(999n, 0, wire('?')), reply(list[1].call, 0, wire('B')),
    reply(list[1].call, 0, wire('again')), reply(list[0].call, 0, Buffer.from([42]))]));
  assert.equal(await results[2], 'C');
  assert.equal(await results[1], 'B');
  await assert.rejects(results[0], { message: 'TypeError: Malformed Lasm.JS value (tag 42)' });
  assert.equal(js.snapshot().pendingCalls, 0);
  // A method-call reply whose payload is malformed rejects too.
  const g = f('m');
  const [e] = events(await poll(js));
  js.dispatch(208, 0, 0n, reply(e.call, 2, Buffer.from([42])));
  await assert.rejects(g, { message: 'TypeError: Malformed Lasm.JS value (tag 42)' });
  // Regression: awaited (op 205 flag 2), the same failure reached Lean as "Error: TypeError: …".
  const awaited = js.dispatch(205, 0, 2n, wire([{ ref: hold(js, f) }, null, ['n']]));
  const [e2] = events(await poll(js));
  js.dispatch(208, 0, 0n, reply(e2.call, 0, Buffer.from([42])));
  await assert.rejects(awaited, { message: 'TypeError: Malformed Lasm.JS value (tag 42)' });
  // Arguments that cannot be converted reject at once and leave nothing pending.
  let deep = 0; for (let i = 0; i < 70; i++) deep = [deep];
  await assert.rejects(f(deep), /nests too deeply/);
  assert.equal(js.snapshot().pendingCalls, 0);
  assert.deepEqual({ callbacks: js.snapshot().callbacks, functionsCreated: js.snapshot().functionsCreated }, { callbacks: 6, functionsCreated: 1 });
});

test('a long poll waits for the next event; at most 1,024 events go in one reply', async () => {
  const js = host();
  const waiting = poll(js);
  assert.equal(js.snapshot().poller.waiting, true);
  js.dispatch(207, 0, 7n, wire(1));
  const [e] = events(await waiting);
  assert.deepEqual([e.kind, e.promise, e.failed, js.decode(e.bytes)], [1, 7n, 0, 1]);
  for (let i = 0; i < 1100; i++) js.dispatch(207, 0, BigInt(i), wire(i));
  await new Promise(resolve => setTimeout(resolve, 10));
  assert.equal(js.snapshot().queuedEvents, 1100);
  assert.equal(events(await poll(js)).length, 1024);
  assert.deepEqual(events(await poll(js)).map(e => e.promise), Array.from({ length: 76 }, (_, i) => BigInt(1024 + i)));
});

// Regression: a settled value that could not be converted reported
// "Error: TypeError: …" (its failure wrapped twice).
test('settled values: a rejection and a result that cannot be converted are failed events', async () => {
  const js = host();
  js.dispatch(207, 0, 1n, wire({ ref: hold(js, Promise.reject(new RangeError('nope'))) }));
  let deep = 0; for (let i = 0; i < 70; i++) deep = [deep];
  js.dispatch(207, 0, 2n, wire({ ref: hold(js, Promise.resolve(deep)) }));
  js.dispatch(207, 0, 3n, wire({ ref: hold(js, Promise.resolve(5)) }));
  await new Promise(resolve => setTimeout(resolve, 10));
  const list = events(await poll(js));
  const by = Object.fromEntries(list.map(e => [e.promise, e]));
  assert.deepEqual([by[1n].failed, by[1n].bytes.toString()], [1, 'RangeError: nope']);
  assert.deepEqual([by[2n].failed, by[2n].bytes.toString()], [1, 'TypeError: JavaScript value nests too deeply to convert to Lean data (more than 64 levels)']);
  assert.deepEqual([by[3n].failed, js.decode(by[3n].bytes)], [0, 5]);
});

test('the poller is spawned only when no Lean thread polls, after Lean stops making progress', async () => {
  const wait = ms => new Promise(resolve => setTimeout(resolve, ms));
  // No progress hook: spawned after the grace period.
  let spawned = 0;
  const a = host({ spawnPoller: () => spawned++ });
  a.dispatch(207, 0, 1n, wire(1));
  await wait(5);
  assert.equal(a.snapshot().poller.spawnTimer, true);
  await wait(80);
  assert.equal(spawned, 1);
  a.dispatch(207, 0, 2n, wire(2));
  await wait(80);
  assert.equal(spawned, 2, 'each wait for a poller can spawn one');
  assert.equal(a.snapshot().pollerSpawns, 2);
  // Lean making progress (host calls) postpones it, but not past the patience.
  let progress = 0, spawnedB = 0;
  const b = host({ spawnPoller: () => spawnedB++, progress: () => progress });
  const ticker = setInterval(() => progress++, 5);
  b.dispatch(207, 0, 1n, wire(1));
  await wait(150);
  assert.equal(spawnedB, 0, 'postponed while Lean makes progress');
  await wait(600);
  clearInterval(ticker);
  assert.equal(spawnedB, 1, 'spawned after the patience runs out');
  // A Lean thread that polls cancels the spawn, and none is needed afterwards.
  let spawnedC = 0;
  const c = host({ spawnPoller: () => spawnedC++, progress: () => 0 });
  c.dispatch(207, 0, 1n, wire(1));
  await wait(1);
  assert.equal(c.snapshot().poller.spawnTimer, true);
  await poll(c);
  assert.deepEqual(c.snapshot().poller, { polled: true, waiting: false, spawnTimer: false });
  c.dispatch(207, 0, 2n, wire(2));
  await wait(80);
  assert.equal(spawnedC, 0);
  // Without spawnPoller nothing is scheduled.
  const d = host();
  d.dispatch(207, 0, 1n, wire(1));
  await wait(1);
  assert.equal(d.snapshot().poller.spawnTimer, false);
  // Several events while one spawn is pending: still one poller.
  let spawnedE = 0;
  const e = host({ spawnPoller: () => spawnedE++ });
  for (let i = 0; i < 5; i++) { e.dispatch(207, 0, BigInt(i), wire(i)); await wait(2); }
  await wait(80);
  assert.equal(spawnedE, 1);
  // close() cancels a pending spawn.
  let spawnedF = 0;
  const f = host({ spawnPoller: () => spawnedF++ });
  f.dispatch(207, 0, 1n, wire(1));
  await wait(1);
  f.close();
  await wait(80);
  assert.equal(spawnedF, 0);
  for (const js of [a, b, c, d, e]) js.close();
});

test('collected Lean functions are reported to Lean (event 3)', async () => {
  const js = host();
  let ids = [js.dispatch(210, 11, 1n).readUInt32LE(1), js.dispatch(210, 12, 2n).readUInt32LE(1)];
  assert.equal(js.snapshot().functionsLive, 2);
  js.dispatch(200, 0, 0n, Buffer.alloc(0), ids);
  ids = null;
  const found = [];
  for (let i = 0; i < 50 && found.length < 2; i++) {
    gc();
    await new Promise(resolve => setTimeout(resolve, 10));
    if (js.snapshot().queuedEvents) found.push(...events(await poll(js)));
  }
  assert.deepEqual(found.map(e => [e.kind, e.fn]).sort((x, y) => x[1] - y[1]), [[3, 11], [3, 12]]);
  assert.deepEqual([js.snapshot().functionsCollected, js.snapshot().functionsLive], [2, 0]);
});

test('statistics: op 213, the global hooks, owns, release and close', () => {
  const js = host();
  const id = hold(js, {});
  assert.equal(js.owns(id), true);
  assert.equal(js.owns(firstJsHandle), true);
  assert.equal(js.owns(firstJsHandle - 1), false);
  const stats = JSON.parse(js.dispatch(213, 0, 0n).toString());
  assert.deepEqual(stats, { values: 1, pendingCalls: 0, queuedEvents: 0, functionsLive: 0, released: 0, callbacks: 0, syncCallbacks: 0,
    syncWaitsStopped: 0, syncPromises: 0, functionsCreated: 0, functionsCollected: 0, pollerSpawns: 0, poller: { polled: false, waiting: false, spawnTimer: false } });
  assert.deepEqual(globalThis[Symbol.for('lasm.js.stats')](), stats);
  assert.equal(globalThis[Symbol.for('lasm.js.sync')](), null);
  js.release(id);
  js.release(id);
  assert.equal(js.snapshot().released, 1);
  hold(js, 1);
  js.dispatch(207, 0, 1n, wire(1));
  js.decode(js.dispatch(210, 1, 1n))();
  js.close();
  assert.deepEqual([js.snapshot().values, js.snapshot().pendingCalls, js.snapshot().queuedEvents], [0, 0, 0]);
});

// ---- synchronous callbacks: a second thread plays Lean's synchronous-callback thread ----
// Channel layout (src/node-js.mjs): 0 state, 4 doorbell, 8 function id, 16 buffer
// pointer, 24 capacity, 32 payload length. The slot's first word is its request sequence.
const leanThread = `
import { workerData } from 'node:worker_threads';
const { memory, channel, slot, served } = workerData;
const buffer = memory.buffer;
const i32 = new Int32Array(buffer), view = new DataView(buffer);
const ring = () => { Atomics.add(i32, channel / 4 + 1, 1); Atomics.notify(i32, channel / 4 + 1); };
for (;;) {
  Atomics.wait(i32, channel / 4, 0);
  if (Atomics.load(i32, channel / 4) !== 1) continue;
  const fn = view.getUint32(channel + 8, true), start = Number(view.getBigUint64(channel + 16, true));
  const length = Number(view.getBigUint64(channel + 32, true));
  const args = new Uint8Array(buffer).slice(start, start + length);
  if (fn === 99) break;
  // fn 2: one nested host call first (the slot's sequence), answered by the main thread.
  if (fn === 2) {
    const before = Atomics.load(i32, served / 4);
    Atomics.add(i32, slot / 4, 1); ring();
    while (Atomics.load(i32, served / 4) === before) Atomics.wait(i32, served / 4, before, 1000);
  }
  // fn 3 fails with a message; others echo the arguments' wire bytes with the function id appended.
  let out, state = 2;
  if (fn === 3) { out = new TextEncoder().encode('Lean failure'); state = 3; }
  else { out = new Uint8Array([8, 2, 0, 0, 0, ...args, 4, ...new Uint8Array(new Float64Array([fn]).buffer)]); }
  new Uint8Array(buffer).set(out, start);
  view.setBigUint64(channel + 32, BigInt(out.length), true);
  Atomics.store(i32, channel / 4, state);
  ring();
}
`;
const layout = { channel: 64, slot: 128, served: 192, buffer: 1024 };
// Workers started with eval and type module need a data: URL on some Node versions.
function moduleWorker(source, options) { return new Worker(new URL(`data:text/javascript,${encodeURIComponent(source)}`), options); }

test('synchronous callbacks: arguments and results cross the channel; the doorbell wakes the main thread', async () => {
  const memory = new WebAssembly.Memory({ initial: 1, maximum: 4, shared: true });
  const view = new DataView(memory.buffer);
  view.setBigUint64(layout.channel + 16, BigInt(layout.buffer), true);
  view.setBigUint64(layout.channel + 24, 4096n, true);
  let timeouts = 0;
  const js = host({ wasmMemory: () => memory, serveSync: () => { if (++timeouts > 300) throw new Error('the Lean thread never answered'); } });
  js.dispatch(211, 0, 0n, Buffer.concat([u64(layout.channel), u64(layout.slot)]));
  assert.deepEqual(globalThis[Symbol.for('lasm.js.sync')](), { channel: layout.channel, slot: layout.slot });
  const worker = moduleWorker(leanThread, { workerData: { memory, ...layout } });
  try {
    await new Promise(resolve => setTimeout(resolve, 50));
    const f = js.values.get(js.dispatch(210, 7, 2n).readUInt32LE(1));
    assert.deepEqual(f('hi', 2), [['hi', 2], 7]);
    // 200 round trips: each is woken by the doorbell, not by the 10 ms poll.
    const started = performance.now();
    for (let i = 0; i < 200; i++) assert.deepEqual(f(i), [[i], 7]);
    const elapsed = performance.now() - started;
    assert.ok(elapsed < 1000, `200 synchronous callbacks took ${elapsed.toFixed(0)} ms`);
    assert.equal(js.snapshot().syncCallbacks, 201);
    // A failure reported by Lean throws its message; the channel is idle again and usable.
    const failing = js.values.get(js.dispatch(210, 3, 2n).readUInt32LE(1));
    assert.throws(() => failing(), { message: 'Error: Lean failure', leanUserError: true });
    assert.equal(new Int32Array(memory.buffer)[layout.channel / 4], 0);
    assert.deepEqual(f('again'), [['again'], 7]);
  } finally {
    const i32 = new Int32Array(memory.buffer);
    view.setUint32(layout.channel + 8, 99, true); Atomics.store(i32, layout.channel / 4, 1); Atomics.notify(i32, layout.channel / 4);
    await worker.terminate();
  }
});

test('synchronous callbacks serve the Lean thread’s nested host calls', async () => {
  const memory = new WebAssembly.Memory({ initial: 1, maximum: 4, shared: true });
  const view = new DataView(memory.buffer);
  view.setBigUint64(layout.channel + 16, BigInt(layout.buffer), true);
  view.setBigUint64(layout.channel + 24, 4096n, true);
  const served = [];
  const js = host({ wasmMemory: () => memory, serveSync: slot => {
    if (served.length > 2000) throw new Error('the Lean thread never answered');
    const i32 = new Int32Array(memory.buffer);
    served.push([slot, Atomics.load(i32, slot / 4)]);
    Atomics.add(i32, layout.served / 4, 1); Atomics.notify(i32, layout.served / 4);
  } });
  js.dispatch(211, 0, 0n, Buffer.concat([u64(layout.channel), u64(layout.slot)]));
  const worker = moduleWorker(leanThread, { workerData: { memory, ...layout } });
  try {
    await new Promise(resolve => setTimeout(resolve, 50));
    const f = js.values.get(js.dispatch(210, 2, 2n).readUInt32LE(1));
    const started = performance.now();
    for (let i = 1; i <= 50; i++) assert.deepEqual(f(i), [[i], 2]);
    // Each nested call is served when the doorbell rings, not by the 10 ms poll (50 calls: at least 500 ms).
    const elapsed = performance.now() - started;
    assert.ok(elapsed < 350, `50 nested host calls took ${elapsed.toFixed(0)} ms`);
    // Every request was served, for this slot, in order (a timed-out wait may serve again).
    assert.ok(served.every(([slot]) => slot === layout.slot));
    const sequences = served.map(([, sequence]) => sequence).filter((x, i, all) => x && x !== all[i - 1]);
    assert.deepEqual(sequences, Array.from({ length: 50 }, (_, i) => i + 1));
  } finally {
    const i32 = new Int32Array(memory.buffer);
    view.setUint32(layout.channel + 8, 99, true); Atomics.store(i32, layout.channel / 4, 1); Atomics.notify(i32, layout.channel / 4);
    await worker.terminate();
  }
});

test('synchronous callbacks: preconditions, nesting, capacity, and a memory that grows during the call', () => {
  // Not registered.
  const plain = host({ wasmMemory: () => new WebAssembly.Memory({ initial: 1, maximum: 1, shared: true }) });
  const unregistered = plain.values.get(plain.dispatch(210, 1, 2n).readUInt32LE(1));
  assert.throws(() => unregistered(), { message: 'TypeError: Lasm.JS synchronous callbacks are not started (internal error)' });
  // No memory hook.
  const noMemory = host();
  noMemory.dispatch(211, 0, 0n, Buffer.concat([u64(64), u64(128)]));
  const f0 = noMemory.values.get(noMemory.dispatch(210, 1, 2n).readUInt32LE(1));
  assert.throws(() => f0(), { message: 'TypeError: Lasm.JS synchronous callbacks need the Wasm memory hook (internal error)' });
  const nullMemory = host({ wasmMemory: () => undefined });
  nullMemory.dispatch(211, 0, 0n, Buffer.concat([u64(64), u64(128)]));
  assert.throws(() => nullMemory.values.get(nullMemory.dispatch(210, 1, 2n).readUInt32LE(1))(), /need the Wasm memory hook/);
  // The Lean side, played on this thread by the serve hooks.
  const memory = new WebAssembly.Memory({ initial: 1, maximum: 4, shared: true });
  let view = new DataView(memory.buffer);
  const { channel, slot, buffer } = layout;
  view.setBigUint64(channel + 16, BigInt(buffer), true);
  const capacity = wire(['x'.repeat(10)]).length;
  view.setBigUint64(channel + 24, BigInt(capacity), true);
  let onServe = () => {}, serves = 0;
  const js = host({ wasmMemory: () => memory, serveSync: () => { if (++serves > 100) throw new Error('never answered'); onServe(); } });
  js.dispatch(211, 0, 0n, Buffer.concat([u64(channel), u64(slot)]));
  const f = js.values.get(js.dispatch(210, 5, 2n).readUInt32LE(1));
  const answer = (value, at = buffer) => {
    view = new DataView(memory.buffer);
    const out = wire(value);
    new Uint8Array(memory.buffer).set(out, at);
    view.setBigUint64(channel + 16, BigInt(at), true);
    view.setBigUint64(channel + 32, BigInt(out.length), true);
    Atomics.store(new Int32Array(memory.buffer), channel / 4, 2);
  };
  // What the Lean thread finds: the function id, the arguments at the buffer, their length.
  let seen;
  onServe = () => {
    const v = new DataView(memory.buffer);
    seen = { state: Atomics.load(new Int32Array(memory.buffer), channel / 4), fn: v.getUint32(channel + 8, true),
      length: Number(v.getBigUint64(channel + 32, true)) };
    seen.args = js.decode(new Uint8Array(memory.buffer).slice(buffer, buffer + seen.length));
    answer('done');
  };
  // Exactly the capacity fits; one byte more does not.
  assert.equal(f('x'.repeat(10)), 'done');
  assert.deepEqual(seen, { state: 1, fn: 5, length: capacity, args: ['x'.repeat(10)] });
  assert.throws(() => f('x'.repeat(11)), { message: `TypeError: Arguments of a synchronous Lean callback exceed ${capacity} bytes` });
  // A synchronous callback cannot call another one; the first still completes, and the next call works.
  const inner = js.values.get(js.dispatch(210, 6, 2n).readUInt32LE(1));
  onServe = () => { assert.throws(() => inner(), { message: 'TypeError: A synchronous Lean callback cannot call another synchronous Lean callback' }); answer(1); };
  assert.equal(f(), 1);
  onServe = () => answer(2);
  assert.equal(inner(), 2);
  // A failure inside the wait clears the busy flag.
  onServe = () => { throw new Error('host failed'); };
  assert.throws(() => f(), /host failed/);
  Atomics.store(new Int32Array(memory.buffer), channel / 4, 0);
  onServe = () => answer(3);
  assert.equal(f(), 3);
  // The memory grows while the call runs; the result lies beyond the old end.
  onServe = () => { memory.grow(1); answer('grown', 65536 + 100); };
  assert.equal(f(), 'grown');
  view = new DataView(memory.buffer);
  view.setBigUint64(channel + 16, BigInt(buffer), true);
});

test('synchronous callbacks without a mailbox hook still poll the host', () => {
  const memory = new WebAssembly.Memory({ initial: 1, maximum: 1, shared: true });
  const view = new DataView(memory.buffer);
  view.setBigUint64(layout.channel + 16, BigInt(layout.buffer), true);
  view.setBigUint64(layout.channel + 24, 64n, true);
  let serves = 0;
  const js = host({ wasmMemory: () => memory, serveSync: () => {
    // Answer on the second timeout.
    if (++serves < 2) return;
    const out = wire(true);
    new Uint8Array(memory.buffer).set(out, layout.buffer);
    view.setBigUint64(layout.channel + 32, BigInt(out.length), true);
    Atomics.store(new Int32Array(memory.buffer), layout.channel / 4, 2);
  } });
  js.dispatch(211, 0, 0n, Buffer.concat([u64(layout.channel), u64(layout.slot)]));
  assert.equal(js.values.get(js.dispatch(210, 1, 2n).readUInt32LE(1))(), true);
  assert.equal(serves, 2);
});

// Regression: inside a synchronous callback Node's main thread waits for the
// Lean thread, so a JavaScript promise the callback waits for can never settle
// (before, awaited and Async calls hung there for good). Every request that
// waits for a promise fails at once, with a message that says why; outside a
// callback the same requests work. `Value.toTask` (op 207) only registers the
// promise: it settles after the callback returns (waiting for it is a task
// wait, stopped as in the tests below).
test('synchronous callbacks: requests that wait for a JavaScript promise fail at once', async () => {
  let calls = 0;
  const root = project({ lib: `module.exports = { later: v => { globalThis.__laterCalls = (globalThis.__laterCalls ?? 0) + 1; return Promise.resolve(v); }, now: v => v,
    fails: () => Promise.reject(new RangeError('rejected later')) };` });
  const memory = new WebAssembly.Memory({ initial: 1, maximum: 1, shared: true });
  const view = new DataView(memory.buffer);
  const { channel, slot, buffer } = layout;
  view.setBigUint64(channel + 16, BigInt(buffer), true);
  view.setBigUint64(channel + 24, 4096n, true);
  let onServe = () => {};
  const js = host({ appPath: join(root, 'main.mjs'), wasmMemory: () => memory, serveSync: () => {
    if (++calls > 100) throw new Error('never answered');
    onServe();
    const out = wire(true);
    new Uint8Array(memory.buffer).set(out, buffer);
    view.setBigUint64(channel + 32, BigInt(out.length), true);
    Atomics.store(new Int32Array(memory.buffer), channel / 4, 2);
  } });
  js.dispatch(211, 0, 0n, Buffer.concat([u64(channel), u64(slot)]));
  const f = js.values.get(js.dispatch(210, 1, 2n).readUInt32LE(1));
  const lib = js.decode(js.dispatch(201, 0, 1n, Buffer.from('lib')));
  const id = hold(js, lib);
  const promise = hold(js, Promise.resolve(5));
  const later = hold(js, lib.later);
  const tried = [];
  const attempt = (name, run) => { try { run(); tried.push([name, 'ok']); } catch (error) { tried.push([name, error.message]); } };
  onServe = () => {
    attempt('await', () => js.dispatch(207, 0, 0x40n, wire({ ref: promise })));
    attempt('async call', () => js.dispatch(205, 0, 16n | 8n, Buffer.concat([u64(0x41), wire([{ ref: id }, 'later', [1]])])));
    attempt('async binding', () => js.dispatch(214, 0, 16n, Buffer.concat([u64(0x42), wire(['T.later', 'lib', 'later', [2]])])));
    attempt('awaited call', () => js.dispatch(205, 0, 2n | 8n, wire([{ ref: id }, 'later', [3]])));
    attempt('awaited binding', () => js.dispatch(214, 0, 2n, wire(['T.later', 'lib', 'later', [4]])));
    attempt('awaited function', () => js.dispatch(205, 0, 2n, wire([{ ref: later }, undefined, [9]])));
    // A promise that rejects after the callback is abandoned quietly (no unhandled rejection).
    attempt('awaited rejection', () => js.dispatch(214, 0, 2n, wire(['T.fails', 'lib', 'fails', []])));
    // Calls whose results are not promises, and calls that do not await, still work.
    attempt('plain call', () => js.decode(js.dispatch(205, 0, 2n | 8n, wire([{ ref: id }, 'now', [5]]))));
    attempt('promise result', () => js.dispatch(214, 0, 1n, wire(['T.later', 'lib', 'later', [6]])));
  };
  const unhandled = [];
  const onUnhandled = reason => unhandled.push(reason);
  process.on('unhandledRejection', onUnhandled);
  try {
    assert.equal(f(), true);
    await new Promise(resolve => setTimeout(resolve, 20));
  } finally { process.off('unhandledRejection', onUnhandled); }
  assert.deepEqual(unhandled, []);
  const why = what => `TypeError: Waiting for ${what} inside a synchronous callback can't finish, because the JavaScript thread is waiting for the callback; use Function.ofFn`;
  assert.deepEqual(tried, [
    ['await', 'ok'],
    ['async call', why('a JavaScript call (an Async call, method or binding)')],
    ['async binding', why('a JavaScript call (an Async call, method or binding)')],
    ['awaited call', why('the promise returned by method "later"')],
    ['awaited binding', why('the promise returned by binding "lib later"')],
    ['awaited function', why('the promise returned by a call')],
    ['awaited rejection', why('the promise returned by binding "lib fails"')],
    ['plain call', 'ok'], ['promise result', 'ok']]);
  // The waiting requests that fail before calling JavaScript call nothing (the Async ones); awaited calls ran once each
  // (and the binding's result that is not awaited).
  assert.equal(globalThis.__laterCalls, 4);
  // Outside a callback the same requests work. The promise registered inside settled after the callback returned.
  js.dispatch(207, 0, 0x50n, wire({ ref: promise }));
  await js.dispatch(214, 0, 16n, Buffer.concat([u64(0x51), wire(['T.later', 'lib', 'later', [7]])]));
  assert.equal(js.decode(await js.dispatch(205, 0, 2n | 8n, wire([{ ref: id }, 'later', [8]]))), 8);
  const settled = [];
  while (settled.length < 3) settled.push(...events(await poll(js)).map(e => [e.promise, js.decode(e.bytes)]));
  assert.deepEqual(settled.sort(), [[0x40n, 5], [0x50n, 5], [0x51n, 7]]);
});

// ---- task waits inside synchronous callbacks (library/c/lasm_js.c sync_wait) ----
// Channel words: 40 the wait (generation << 2 | 0 none, 1 waiting, 2 stop asked),
// 44 stopped, 48 the wait list, 56 the Lean thread. Wait list: 0 epoch, 4 size,
// 8 size × u64 waiting threads.
// Regression: before, a callback that waited for a Lean task no thread could
// finish (one making host calls, `Async` run with `.block`, a timer or socket
// started in the callback) never returned.
const waitLayout = { ...layout, table: 4096 };
const SELF = 0x9000n;
function waitingHost({ live = [SELF, 0xa000n], started = () => 0, memory = new WebAssembly.Memory({ initial: 2, maximum: 4, shared: true }), onTick }) {
  const view = new DataView(memory.buffer);
  const { channel, slot, buffer, table } = waitLayout;
  view.setBigUint64(channel + 16, BigInt(buffer), true);
  view.setBigUint64(channel + 24, 4096n, true);
  view.setBigUint64(channel + 48, BigInt(table), true);
  view.setBigUint64(channel + 56, SELF, true);
  view.setInt32(table + 4, 4, true);
  let ticks = 0;
  const lean = {
    memory, get view() { return new DataView(memory.buffer); }, get i32() { return new Int32Array(memory.buffer); },
    get word() { return Atomics.load(this.i32, channel / 4 + 10); },
    wait(generation) { Atomics.store(this.i32, channel / 4 + 10, generation << 2 | 1); },
    list(threads, at = table) { const v = new DataView(memory.buffer); for (let k = 0; k < 4; k++) v.setBigUint64(at + 8 + 8 * k, threads[k] ?? 0n, true); },
    epoch(n) { Atomics.store(this.i32, table / 4, n); },
    post(state, value, stopped = 0) {
      const out = value === undefined ? new Uint8Array(0) : state === 3 ? new TextEncoder().encode(value) : wire(value);
      new Uint8Array(memory.buffer).set(out, buffer);
      const v = new DataView(memory.buffer);
      v.setBigUint64(channel + 32, BigInt(out.length), true);
      Atomics.store(this.i32, channel / 4 + 11, stopped);
      Atomics.store(this.i32, channel / 4, state);
    },
    // The Lean thread's answer to a stop request: what sync_main does after longjmp.
    stopIfAsked() {
      if ((this.word & 3) !== 2) return false;
      Atomics.store(this.i32, channel / 4 + 10, this.word & ~3);
      this.post(3, undefined, 1);
      return true;
    },
  };
  const js = host({ wasmMemory: () => memory, liveThreads: () => live, startedOperations: started,
    serveSync: () => { if (++ticks > 300) throw new Error('never answered'); onTick(lean, ticks); } });
  js.dispatch(211, 0, 0n, Buffer.concat([u64(channel), u64(slot)]));
  const f = js.values.get(js.dispatch(210, 1, 2n).readUInt32LE(1));
  return { js, f, lean, ticks: () => ticks };
}
const stopText = what => `TypeError: Waiting for ${what} inside a synchronous callback can't finish, because the JavaScript thread is waiting for the callback; use Function.ofFn`;

test('a task wait no Lean thread can end is stopped once nothing changed for 50 ms, with the reason', () => {
  // Every other thread (0xa000) waits: once that has lasted 50 ms the wait is asked to stop.
  let asked, since;
  const { js, f, lean } = waitingHost({ onTick: (lean, tick) => {
    if (tick === 1) { lean.wait(1); lean.list([0xa000n]); lean.epoch(7); since = performance.now(); return; }
    if (lean.stopIfAsked()) asked = performance.now() - since;
  } });
  assert.throws(() => f(), { message: stopText('a Lean task'), leanUserError: true });
  assert.ok(asked >= 50 && asked < 1000, `asked after ${asked} ms`);
  assert.equal(js.snapshot().syncWaitsStopped, 1);
  // The stopped flag is cleared: a later Lean failure keeps its own message.
  assert.equal(Atomics.load(lean.i32, waitLayout.channel / 4 + 11), 0);
  const again = waitingHost({ onTick: lean => lean.post(3, 'Lean failure') });
  assert.throws(() => again.f(), { message: 'Error: Lean failure' });
  assert.equal(again.js.snapshot().syncWaitsStopped, 0);
});

test('a task wait is not stopped while another thread runs, or while the waits change', () => {
  // 0xb000 is not waiting for 15 ticks: no stop; then the task finishes and the callback returns.
  const runs = waitingHost({ live: ['36864', '40960', '45056'], onTick: (lean, tick) => {
    if (tick === 1) { lean.wait(1); lean.list([0xa000n]); }
    assert.equal(lean.word & 3, 1, 'no stop asked');
    if (tick === 15) { Atomics.store(lean.i32, waitLayout.channel / 4 + 10, 1 << 2); lean.post(2, 'finished'); }
  } });
  assert.equal(runs.f(), 'finished');
  assert.equal(runs.js.snapshot().syncWaitsStopped, 0);
  // The wait list changes at every look for 150 ms (threads wake and wait again): no stop until it settles.
  let settled;
  const changing = waitingHost({ onTick: (lean, tick) => {
    if (tick === 1) { lean.wait(1); lean.list([0xa000n]); settled = performance.now() + 150; }
    if (performance.now() < settled) { lean.epoch(tick); assert.equal(lean.word & 3, 1); return; }
    if (lean.stopIfAsked()) assert.ok(performance.now() - settled >= 50);
  } });
  assert.throws(() => changing.f(), { message: stopText('a Lean task') });
  // No wait (word 0) or one that ended (state 0): nothing is asked.
  const none = waitingHost({ onTick: (lean, tick) => {
    lean.list([0xa000n]);
    if (tick === 3) Atomics.store(lean.i32, waitLayout.channel / 4 + 10, 2 << 2);
    assert.equal(lean.word & 3, 0);
    if (tick === 12) lean.post(2, 1);
  } });
  assert.equal(none.f(), 1);
  // A new wait began between the look and the request (another generation): that wait is not asked to stop.
  // A clock of 10 ms per look: the sixth look (50 ms after the first) would ask; the new wait begins during it.
  const now = performance.now;
  let clock = 0, looks = 0, raced, checked = false;
  performance.now = () => clock;
  try {
    const live = { *[Symbol.iterator]() {
      yield SELF; yield 0xa000n;
      if (++looks === 6) Atomics.store(raced.lean.i32, waitLayout.channel / 4 + 10, 2 << 2 | 1);
    } };
    raced = waitingHost({ live, onTick: (lean, tick) => {
      clock = tick * 10;
      if (tick === 1) { lean.wait(1); lean.list([0xa000n]); }
      if (tick === 7) { checked = true; assert.equal(lean.word, 2 << 2 | 1, 'the new wait is not asked to stop'); }
      if (lean.stopIfAsked()) assert.equal(tick, 13);
    } });
    assert.throws(() => raced.f(), { message: stopText('a Lean task') });
    assert.ok(checked);
  } finally { performance.now = now; }
});

test('a stopped wait names what the callback started that only the event loop finishes', () => {
  const run = (setup, options = {}) => {
    const { f } = waitingHost({ ...options, onTick: (lean, tick) => {
      if (tick === 1) { lean.wait(1); lean.list([0xa000n]); setup?.(); }
      lean.stopIfAsked();
    } });
    try { f(); } catch (error) { return error.message; }
    return 'returned';
  };
  // An operation started inline during the callback (op 94): a timer, DNS lookup or socket operation.
  let started = 3;
  assert.equal(run(() => started++, { started: () => started }), stopText('a timer, DNS lookup or socket operation'));
  // Started before the callback only: a Lean task.
  assert.equal(run(undefined, { started: () => started }), stopText('a Lean task'));
  // A promise registered during the callback (Value.toTask, op 207): a JavaScript promise.
  let js;
  const promised = waitingHost({ onTick: (lean, tick) => {
    if (tick === 1) { js.dispatch(207, 0, 0x60n, wire(1)); lean.wait(1); lean.list([0xa000n]); }
    lean.stopIfAsked();
  } });
  js = promised.js;
  assert.throws(() => promised.f(), { message: stopText('a JavaScript promise') });
});

test('a task wait is checked on the memory as it is now (grown during the callback)', () => {
  const memory = new WebAssembly.Memory({ initial: 1, maximum: 4, shared: true });
  const table = 65536 + 512;
  const { f } = waitingHost({ memory, onTick: (lean, tick) => {
    if (tick === 1) {
      memory.grow(1);
      lean.view.setBigUint64(waitLayout.channel + 48, BigInt(table), true);
      new DataView(memory.buffer).setInt32(table + 4, 4, true);
      lean.list([0xa000n], table);
      lean.wait(1);
      return;
    }
    lean.stopIfAsked();
  } });
  assert.throws(() => f(), { message: stopText('a Lean task') });
});

test('a stop request wakes the waiting Lean thread', async () => {
  // A second thread plays sync_wait: it blocks on the wait word with no timeout, so only the request's notify ends it.
  const memory = new WebAssembly.Memory({ initial: 2, maximum: 2, shared: true });
  const { channel, slot, buffer, table } = waitLayout;
  const view = new DataView(memory.buffer);
  view.setBigUint64(channel + 16, BigInt(buffer), true);
  view.setBigUint64(channel + 24, 4096n, true);
  view.setBigUint64(channel + 48, BigInt(table), true);
  view.setBigUint64(channel + 56, SELF, true);
  view.setInt32(table + 4, 4, true);
  view.setBigUint64(table + 8, 0xa000n, true);
  const js = host({ wasmMemory: () => memory, liveThreads: () => [SELF, 0xa000n], serveSync: () => {} });
  js.dispatch(211, 0, 0n, Buffer.concat([u64(channel), u64(slot)]));
  const worker = moduleWorker(`
import { workerData } from 'node:worker_threads';
const { memory, channel } = workerData;
const i32 = new Int32Array(memory.buffer);
for (;;) {
  Atomics.wait(i32, channel / 4, 0);
  if (Atomics.load(i32, channel / 4) !== 1) continue;
  const waiting = 1 << 2 | 1;
  Atomics.store(i32, channel / 4 + 10, waiting);
  Atomics.wait(i32, channel / 4 + 10, waiting);
  if (Atomics.load(i32, channel / 4 + 10) !== (1 << 2 | 2)) throw new Error('woken without a stop request');
  Atomics.store(i32, channel / 4 + 10, 1 << 2);
  new DataView(memory.buffer).setBigUint64(channel + 32, 0n, true);
  Atomics.store(i32, channel / 4 + 11, 1);
  Atomics.store(i32, channel / 4, 3);
  Atomics.add(i32, channel / 4 + 1, 1); Atomics.notify(i32, channel / 4 + 1);
  break;
}
`, { workerData: { memory, channel } });
  try {
    await new Promise(resolve => setTimeout(resolve, 50));
    const f = js.values.get(js.dispatch(210, 1, 2n).readUInt32LE(1));
    assert.throws(() => f(), { message: stopText('a Lean task') });
  } finally { await worker.terminate(); }
});

test('task waits: the whole wait list is read; a stopped flag alone, results, and hosts without the thread hook', () => {
  // The other thread is listed in the last entry.
  const last = waitingHost({ onTick: (lean, tick) => { if (tick === 1) { lean.wait(1); lean.list([0n, 0n, 0n, 0xa000n]); } lean.stopIfAsked(); } });
  assert.throws(() => last.f(), { message: stopText('a Lean task') });
  // A failure posted as stopped without a request (no reason recorded): a Lean task.
  const flagged = waitingHost({ onTick: lean => lean.post(3, undefined, 1) });
  assert.throws(() => flagged.f(), { message: stopText('a Lean task') });
  assert.equal(flagged.js.snapshot().syncWaitsStopped, 1);
  // A result is a result, whatever the stopped word says.
  const result = waitingHost({ onTick: lean => lean.post(2, 'ok', 1) });
  assert.equal(result.f(), 'ok');
  // Without the live-threads hook nothing is checked: the callback returns when Lean answers.
  const memory = new WebAssembly.Memory({ initial: 2, maximum: 2, shared: true });
  const view = new DataView(memory.buffer), i32 = new Int32Array(memory.buffer);
  const { channel, slot, buffer } = waitLayout;
  view.setBigUint64(channel + 16, BigInt(buffer), true);
  view.setBigUint64(channel + 24, 4096n, true);
  Atomics.store(i32, channel / 4 + 10, 1 << 2 | 1);
  let ticks = 0;
  const js = host({ wasmMemory: () => memory, serveSync: () => {
    if (++ticks < 8) return;
    const out = wire(5);
    new Uint8Array(memory.buffer).set(out, buffer);
    view.setBigUint64(channel + 32, BigInt(out.length), true);
    Atomics.store(i32, channel / 4, 2);
  } });
  js.dispatch(211, 0, 0n, Buffer.concat([u64(channel), u64(slot)]));
  assert.equal(js.values.get(js.dispatch(210, 1, 2n).readUInt32LE(1))(), 5);
  assert.equal(Atomics.load(i32, channel / 4 + 10) & 3, 1);
  // A promise registered outside a callback is not counted as one the callback started.
  js.dispatch(207, 0, 0x70n, wire(1));
  assert.equal(js.snapshot().syncPromises, 0);
});
