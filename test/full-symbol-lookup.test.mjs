import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { runInNewContext } from 'node:vm';
import { optimizeSymbolLookup } from '../scripts/full-lean/symbol-lookup.mjs';

const original = readFileSync(new URL('./fixtures/dlsym-emscripten.js.txt', import.meta.url), 'utf8');
const optimized = optimizeSymbolLookup(original);
function fixture(source, exports) {
  const heap = new BigUint64Array(4), addresses = new Map(), errors = [], additions = [];
  const call = runInNewContext(source + '\n__dlsym_js;', {
    bigintToI53Checked: Number, UTF8ToString: x => names[x],
    LDSO: { loadedLibsByHandle: { 1: { name: 'test-library', exports } } },
    dlSetError: error => errors.push(error), getFunctionAddress: fn => addresses.get(fn) ?? 0,
    addFunction: fn => { const address = addresses.size + 20; addresses.set(fn, address); additions.push(address); return address; },
    HEAPU64: heap, growMemViews() {},
  });
  const names = [];
  return { addresses, errors, additions, heap, lookup(name) {
    names.push(name); return call(1n, BigInt(names.length - 1), 8n);
  } };
}

test('dlsym preserves missing, stub, inherited, non-enumerable, data and function lookup behavior', () => {
  const fn = () => {}, stub = Object.assign(() => {}, { stub: true });
  const exports = Object.assign(Object.create({ inherited: 55 }), { data: 17, zero: 0, fn, stub });
  Object.defineProperty(exports, 'hidden', { value: 99 });
  Object.defineProperty(exports, '__proto__', { value: 31, enumerable: true });
  const before = fixture(original, exports), after = fixture(optimized, exports);
  before.addresses.set(fn, 7); after.addresses.set(fn, 7);
  for (const name of ['missing', 'inherited', 'hidden', 'constructor', 'stub', 'data', 'zero', 'fn', '__proto__']) {
    assert.equal(after.lookup(name), before.lookup(name), name);
    assert.deepEqual(after.errors, before.errors);
    assert.deepEqual(after.heap, before.heap);
  }
});

test('new functions retain exact worker catch-up indexes and observe export changes', () => {
  const first = () => {}, second = () => {}, exports = { 7: 70, data: 11, first };
  const before = fixture(original, exports), after = fixture(optimized, exports);
  for (const name of ['first', 'first', 'second']) assert.equal(after.lookup(name), before.lookup(name));
  exports.second = second;
  assert.equal(after.lookup('second'), before.lookup('second'));
  assert.equal(after.heap[1], BigInt(Object.keys(exports).indexOf('second')));
  assert.deepEqual(after.heap, before.heap);
  assert.deepEqual(after.additions, before.additions);
  delete exports.first;
  assert.equal(after.lookup('first'), before.lookup('first'));
  assert.deepEqual(after.errors, before.errors);
});

test('ordinary lookups avoid enumeration of a large export dictionary', () => {
  const fn = () => {}, values = Object.fromEntries(Array.from({ length: 100_000 }, (_, i) => ['symbol' + i, i]));
  values.fn = fn;
  const exports = new Proxy(values, { ownKeys() { throw new Error('Unexpected full export scan'); } });
  const before = fixture(original, exports), after = fixture(optimized, exports);
  before.addresses.set(fn, 7); after.addresses.set(fn, 7);
  assert.throws(() => before.lookup('absent'), /Unexpected full export scan/);
  assert.equal(after.lookup('absent'), 0n);
  assert.equal(after.lookup('symbol99999'), 99999n);
  assert.equal(after.lookup('fn'), 7n);
});

test('the derivation refuses unrelated or already changed loader code', () => {
  assert.throws(() => optimizeSymbolLookup(''), /drift/);
  assert.throws(() => optimizeSymbolLookup(optimized), /semantics/);
  assert.throws(() => optimizeSymbolLookup(original.replace('newSymIndex == -1', 'newSymIndex < 0')), /semantics/);
});
