import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createNodeJs as createHost, describe, firstJsHandle } from '../src/node-js.mjs';

// Lean's C glue prefixes every request with the handles it released ([u32 count][ids]).
const released = (ids = []) => Buffer.concat([u32(ids.length), ...ids.map(u32)]);
function createNodeJs(options) {
  const js = createHost(options);
  const dispatch = js.dispatch;
  return { ...js, dispatch: (op, id, arg, bytes, ids) => dispatch(op, id, arg, Buffer.concat([released(ids), bytes])) };
}

// Lean's side of the wire format (library/Lasm/JS/Core.lean Wire), for tests.
function u32(n) { const b = Buffer.alloc(4); b.writeUInt32LE(n); return b; }
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

function project() {
  const root = mkdtempSync(join(tmpdir(), 'lasm-js-'));
  writeFileSync(join(root, 'package.json'), '{}');
  mkdirSync(join(root, 'node_modules/lib'), { recursive: true });
  writeFileSync(join(root, 'node_modules/lib/package.json'), JSON.stringify({ name: 'lib', main: 'index.js' }));
  writeFileSync(join(root, 'node_modules/lib/index.js'), `
    class Box { constructor(v) { this.v = v; } get() { return this.v; } }
    module.exports = { add: (a, b) => a + b, Box, later: v => Promise.resolve(v), nested: { f: () => 'deep' },
      fail: () => { throw new RangeError('nope'); }, bytes: () => new Uint8Array([1, 2]), big: () => 2n ** 70n };`);
  return createNodeJs({ appPath: join(root, 'main.mjs') });
}

test('values round-trip through the wire format', () => {
  const js = createNodeJs();
  const value = { a: 1, b: 'two', c: [true, null, undefined], d: { e: new Uint8Array([7]) }, f: 12n };
  assert.deepEqual(js.decode(js.encode(value, 'data')), value);
  // Non-plain values become references in data mode; references decode to the same object.
  const date = new Date(0);
  const decoded = js.decode(js.encode({ date }, 'data'));
  assert.equal(decoded.date, date);
  assert.equal(js.values.size, 1);
});

test('descriptions name what a JavaScript value is', () => {
  assert.equal(describe(function express(a, b) {}), 'function express (2 parameters)');
  assert.equal(describe(Promise.resolve()), 'promise');
  assert.equal(describe({ a: 1, b: 2 }), 'object {a, b}');
  assert.equal(describe(new Map()), 'Map object');
  assert.equal(describe('x'), 'string "x"');
});

test('require, typed bindings, construction, methods and errors', async () => {
  const js = project();
  const call = (args, flags) => js.decode(js.dispatch(214, 0, BigInt(flags), wire(args)));
  assert.equal(call(['add', 'lib', 'add', [2, 3]], 0), 5);
  assert.equal(call(['f', 'lib', 'nested.f', []], 0), 'deep');
  assert.deepEqual(call(['bytes', 'lib', 'bytes', []], 0), new Uint8Array([1, 2]));
  assert.equal(call(['big', 'lib', 'big', []], 0), 2n ** 70n);
  const box = call(['Box', 'lib', 'Box', [41]], 4);
  assert.equal(box.v, 41);
  assert.equal(await js.dispatch(214, 0, 2n, wire(['later', 'lib', 'later', ['soon']])).then(js.decode), 'soon');
  assert.throws(() => call(['fail', 'lib', 'fail', []], 0), { message: 'RangeError: nope' });
  assert.throws(() => call(['x', 'lib', 'missing', []], 0), /export "missing" of module "lib" is undefined, not a function/);
  assert.throws(() => js.dispatch(201, 0, 0n, Buffer.from('not-installed')), /Cannot find JavaScript module "not-installed"/);
  // Reference results are handles that Lean releases.
  const encoded = js.dispatch(201, 0, 1n, Buffer.from('lib'));
  assert.equal(encoded[0], 10);
  const id = encoded.readUInt32LE(1);
  assert.ok(id >= firstJsHandle);
  assert.equal(js.decode(js.dispatch(205, 0, 8n, wire([{ ref: id }, 'add', [1, 1]]))), 2);
  // Released handles arrive ahead of the next request.
  js.dispatch(200, 0, 0n, Buffer.alloc(0), [id]);
  assert.throws(() => js.dispatch(206, id, 0n, Buffer.alloc(0)), /released Lasm.JS value handle/);
  assert.equal(js.decode(js.dispatch(214, 0, 0n, wire(['clone', 'globalThis', 'structuredClone', [{ a: [1] }]]))).a[0], 1);
});

test('asynchronous Lean functions are queued to the interop thread', async () => {
  const js = createNodeJs();
  const f = js.decode(js.dispatch(210, 7, 1n, Buffer.alloc(0)));
  const result = f('hi', 2);
  const events = await js.dispatch(209, 0, 0n, Buffer.alloc(0));
  assert.equal(events[0], 2);
  const call = events.readBigUInt64LE(1), fn = events.readUInt32LE(9);
  assert.equal(fn, 7);
  assert.deepEqual(js.decode(events.subarray(17)), ['hi', 2]);
  const reply = Buffer.concat([Buffer.alloc(8), Buffer.from([0]), u32(wire('ok').length), wire('ok')]);
  reply.writeBigUInt64LE(call);
  js.dispatch(208, 0, 0n, reply);
  assert.equal(await result, 'ok');
  // A failed Lean call rejects the promise with its message.
  const failed = f();
  const second = await js.dispatch(209, 0, 0n, Buffer.alloc(0));
  const message = Buffer.from('from Lean');
  const rejection = Buffer.concat([Buffer.alloc(8), Buffer.from([1]), u32(message.length), message]);
  rejection.writeBigUInt64LE(second.readBigUInt64LE(1));
  js.dispatch(208, 0, 0n, rejection);
  await assert.rejects(failed, { message: 'from Lean' });
});

test('promise completions carry the Lean promise pointer', async () => {
  const js = createNodeJs();
  js.dispatch(207, 0, 0x1234n, wire(5));
  const events = await js.dispatch(209, 0, 0n, Buffer.alloc(0));
  assert.equal(events[0], 1);
  assert.equal(events.readBigUInt64LE(1), 0x1234n);
  assert.equal(events[9], 0);
  assert.equal(js.decode(events.subarray(14)), 5);
});

test('a Lean reply can be a method call the host makes (Reply.callMethod)', async () => {
  const js = createNodeJs();
  const f = js.decode(js.dispatch(210, 9, 1n, Buffer.alloc(0)));
  class Response { json(body) { this.sent = body; return 'sent'; } }
  const target = new Response();
  const result = f(target);
  const events = await js.dispatch(209, 0, 0n, Buffer.alloc(0));
  const call = events.readBigUInt64LE(1);
  const [ref] = js.decode(events.subarray(17));   // the argument arrives as a reference
  const id = [...js.values.entries()].find(([, v]) => v === ref)[0];
  const payload = wire([{ ref: id }, 'json', [{ ok: true }]]);
  const reply = Buffer.concat([Buffer.alloc(8), Buffer.from([2]), u32(payload.length), payload]);
  reply.writeBigUInt64LE(call);
  js.dispatch(208, 0, 0n, reply);
  assert.equal(await result, 'sent');
  assert.deepEqual(target.sent, { ok: true });
  // A method that throws rejects the JavaScript promise.
  class Closed { json() { throw new RangeError('closed'); } }
  const failing = f(new Closed());
  const second = await js.dispatch(209, 0, 0n, Buffer.alloc(0));
  const [ref2] = js.decode(second.subarray(17));
  const id2 = [...js.values.entries()].find(([, v]) => v === ref2)[0];
  const payload2 = wire([{ ref: id2 }, 'json', [1]]);
  const reply2 = Buffer.concat([Buffer.alloc(8), Buffer.from([2]), u32(payload2.length), payload2]);
  reply2.writeBigUInt64LE(second.readBigUInt64LE(1));
  js.dispatch(208, 0, 0n, reply2);
  await assert.rejects(failing, { message: 'closed' });
});
