import test from 'node:test';
import assert from 'node:assert/strict';
import { runInNewContext } from 'node:vm';
import { connectLeanSymbolLoader } from '../scripts/full-lean/lean-symbol-loader.mjs';

const original = `var stringToNewUTF8 = allocateName;
var resolveGlobalSymbol = (symName, direct = false) => {
  var sym;
  if (isSymbolDefined(symName)) {
    sym = wasmImports[symName];
  }
  return {
    sym,
    name: symName
  };
};`;

function fixture(memory64, registry, options) {
  const imports = {}, exports = {}, outstanding = new Map(), queried = [], table = new Map();
  let next = 16;
  exports.lasm_lookup_lean_symbol = pointer => {
    assert.equal(typeof pointer, memory64 ? 'bigint' : 'number');
    const name = outstanding.get(Number(pointer)); queried.push(name);
    return registry(name);
  };
  const resolve = runInNewContext(connectLeanSymbolLoader(original, memory64, options) + '\nresolveGlobalSymbol;', {
    wasmImports: imports, wasmExports: exports,
    isSymbolDefined: name => Boolean(imports[name] && !imports[name].stub),
    allocateName: name => { outstanding.set(next, name); return next++; },
    _free: pointer => assert.ok(outstanding.delete(pointer)),
    getWasmTableEntry: address => { assert.ok(table.has(address)); return table.get(address); },
  });
  return { imports, exports, outstanding, queried, table, resolve: name => resolve(name).sym };
}

test('Lean 4.34 Lake package functions and data use the same checked registry', () => {
  const fn = () => 43;
  const state = fixture(true, name => name === 'lp_example_answer' ? 10n : 0n, { packageSymbols: true });
  state.table.set(10, fn);
  state.exports.lp_example_data = new WebAssembly.Global({ value: 'i64' }, 5678n);
  assert.equal(state.resolve('lp_example_answer'), fn);
  assert.equal(state.resolve('lp_example_data'), state.exports.lp_example_data);
  assert.equal(state.resolve('lp_example_absent'), undefined);
  assert.equal(state.resolve('unrelated'), undefined);
  assert.deepEqual(state.queried, ['lp_example_answer', 'lp_example_absent']);
  assert.equal(state.outstanding.size, 0);
});

for (const memory64 of [false, true]) {
  test(`plugin registry lookup preserves function identity, exports and precedence (${memory64 ? 64 : 32}-bit)`, () => {
    const fn = () => 42, preferred = () => 17;
    const state = fixture(memory64, name => name === 'l_internal' ? 9n : 0n);
    state.table.set(9, fn);
    state.exports.l_data = new WebAssembly.Global({ value: 'i64' }, 1234n);
    state.exports.l_explicit = fn;
    state.imports.l_override = preferred;
    state.imports.l_internal = Object.assign(() => {}, { stub: true });
    assert.equal(state.resolve('l_internal'), fn);
    assert.equal(state.resolve('l_data'), state.exports.l_data);
    assert.equal(state.resolve('l_explicit'), fn);
    assert.equal(state.resolve('l_override'), preferred);
    assert.equal(state.resolve('l_absent'), undefined);
    assert.equal(state.resolve('unrelated'), undefined);
    assert.deepEqual(state.queried, ['l_internal', 'l_absent']);
    assert.equal(state.outstanding.size, 0);
  });
}

test('failed symbol lookup releases temporary names, and unsupported compilers retain misses', () => {
  const state = fixture(true, () => { throw new Error('lookup failed'); });
  assert.throws(() => state.resolve('l_bad'), /lookup failed/);
  assert.equal(state.outstanding.size, 0);
  delete state.exports.lasm_lookup_lean_symbol;
  assert.equal(state.resolve('l_bad'), undefined);
  assert.equal(state.outstanding.size, 0);
});

test('loader transformation rejects unsupported or already modified glue', () => {
  assert.throws(() => connectLeanSymbolLoader(original), /pointer ABI/);
  assert.throws(() => connectLeanSymbolLoader('', true), /runtime helper/);
  assert.throws(() => connectLeanSymbolLoader(original.replace('var sym;', 'var sym = null;'), true), /resolver drift/);
  assert.throws(() => connectLeanSymbolLoader(connectLeanSymbolLoader(original, true), true), /already connected/);
  const connected = connectLeanSymbolLoader(original, true);
  assert.equal(connectLeanSymbolLoader(connected, true, { allowExisting: true }), connected);
  assert.throws(() => connectLeanSymbolLoader(connected.replace('if (address)', 'if (address > 0)'), true,
    { allowExisting: true }), /resolver drift/);
});
