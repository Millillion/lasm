import assert from 'node:assert/strict';
import test from 'node:test';
import { mkdtempSync, mkdirSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { readFunctionTableIndex, transformFunctionTable } from '../scripts/full-lean/function-table-index.mjs';

mkdirSync(resolve('.work'), { recursive: true });
const directory = mkdtempSync(resolve('.work/function-table-tests-'));
const uleb = value => {
  const result = [];
  do { const next = value & 127; value >>>= 7; result.push(next | (value ? 128 : 0)); } while (value);
  return result;
};
const string = value => { const bytes = [...Buffer.from(value)]; return [...uleb(bytes.length), ...bytes]; };
const section = (id, bytes) => [id, ...uleb(bytes.length), ...bytes];

function fixture(memory64 = false, unusualNames = false) {
  // first and alias share function 1 at slots 1 and 3. Function 2 is hidden at
  // slot 4. spare is exported but has no initial slot. The JS import is slot 2.
  const exports = [['first', 0, 1], ['alias$&λ', 0, 1], ['imported', 0, 0],
    ['spare', 0, 3], ['__indirect_function_table', 1, 0]];
  if (unusualNames) exports.push(['12', 0, 1], ['2', 0, 2], ['__proto__', 0, 1], ['', 0, 3]);
  const bytes = Buffer.from([0, 97, 115, 109, 1, 0, 0, 0,
    ...section(1, [1, 0x60, 0, 1, 0x7f]),
    ...section(2, [1, ...string('env'), ...string('fn'), 0, 0]),
    ...section(3, [3, 0, 0, 0]),
    ...section(4, [1, 0x70, memory64 ? 4 : 0, 5]),
    ...section(7, [exports.length, ...exports.flatMap(([name, kind, index]) => [...string(name), kind, index])]),
    ...section(9, [1, 0, memory64 ? 0x42 : 0x41, 1, 0x0b, 4, 1, 0, 1, 2]),
    ...section(10, [3, ...[11, 22, 33].flatMap(value => [4, 0, 0x41, value, 0x0b])]),
  ]);
  // Validate independently of the metadata reader, using the real Wasm engine.
  const module = new WebAssembly.Module(bytes);
  const path = join(directory, memory64 ? 'table64.wasm' : 'table32.wasm');
  writeFileSync(path, bytes);
  return { path, module };
}

const originalLookup = `var getFunctionAddress = func => {
  // First, create the map if this is the first use.
  if (!functionsInTableMap) {
    functionsInTableMap = new WeakMap;
    updateTableMap(0, Number(wasmTable.length));
  }
  return functionsInTableMap.get(func) || 0;
};`;

function runtime(instance, host, metadata) {
  const original = `
var wasmTable = instance.exports.__indirect_function_table;
var wasmImports = { fn: host, ...instance.exports };
var wasmExports, functionsInTableMap;
var scans = [];
var getWasmTableEntry = index => wasmTable.get(typeof wasmTable.length === 'bigint' ? BigInt(index) : Number(index));
var updateTableMap = (offset, count) => {
  scans.push({ offset, count });
  for (var i = offset; i < offset + count; i++) {
    var value = getWasmTableEntry(i);
    if (value) functionsInTableMap.set(value, i);
  }
};
${originalLookup}
function receiveInstance(instance) {
    wasmExports = instance.exports;
    var origExports = wasmExports;
}
receiveInstance(instance);
return { address: getFunctionAddress, scans };`;
  const transformed = transformFunctionTable(original, metadata);
  assert.throws(() => transformFunctionTable(transformed, metadata), /already indexed/);
  return new Function('instance', 'host', transformed)(instance, host);
}

for (const memory64 of [false, true]) test(`function table ${memory64 ? 64 : 32}: aliases, imports, unknown functions and fallback`, async () => {
  const { path, module } = fixture(memory64), metadata = await readFunctionTableIndex(path);
  assert.deepEqual(metadata.exportSeeds, [['first', 3, 0], ['alias$&λ', 3, 1], ['imported', 2, 2]]);
  assert.equal(metadata.exportCount, 5);
  assert.deepEqual(metadata.importSeeds, [['env', 'fn', 2]]);
  assert.equal(metadata.segments[0].offsetBits, memory64 ? 64 : 32);
  const host = () => 7, instance = new WebAssembly.Instance(module, { env: { fn: host } });
  const state = runtime(instance, host, metadata);
  assert.equal(instance.exports.first(), 11);
  assert.equal(instance.exports.imported(), 7);
  assert.equal(state.address(instance.exports.first), 3);
  assert.equal(state.address(instance.exports['alias$&λ']), 3);
  assert.equal(state.address(instance.exports.imported), 2);
  assert.equal(state.address(instance.exports.spare), 0);
  assert.equal(state.address(host), 0); // A JS function differs from its Wasm import wrapper.
  assert.deepEqual(state.scans, [{ offset: 5, count: 0 }]);
  const hidden = instance.exports.__indirect_function_table.get(memory64 ? 4n : 4);
  assert.equal(hidden(), 22);
  assert.equal(state.address(hidden), 4); // Unknown FFI values use the original scan.
  assert.equal(state.address(() => 99), 0);
  assert.deepEqual(state.scans, [{ offset: 5, count: 0 }, { offset: 0, count: 5 }]);
});

test('a Wasm function imported from another instance retains its existing address', async () => {
  const { path, module } = fixture(), metadata = await readFunctionTableIndex(path);
  const first = new WebAssembly.Instance(module, { env: { fn: () => 7 } });
  const imported = first.exports.first;
  const second = new WebAssembly.Instance(module, { env: { fn: imported } });
  assert.equal(second.exports.__indirect_function_table.get(2), imported);
  const state = runtime(second, imported, metadata);
  assert.equal(state.address(imported), 2);
  assert.deepEqual(state.scans, [{ offset: 5, count: 0 }]);
});

test('table extensions before the first lookup preserve canonical addresses', async () => {
  const { path, module } = fixture(), metadata = await readFunctionTableIndex(path);
  const host = () => 7, instance = new WebAssembly.Instance(module, { env: { fn: host } });
  const table = instance.exports.__indirect_function_table;
  table.grow(2);
  table.set(5, instance.exports.spare);
  table.set(6, instance.exports.first);
  const state = runtime(instance, host, metadata);
  assert.equal(state.address(instance.exports.first), 6);
  assert.equal(state.address(instance.exports.spare), 5);
  assert.deepEqual(state.scans, [{ offset: 5, count: 2 }]);
});

test('mismatched metadata and changed loader semantics fail closed', async () => {
  const { path, module } = fixture(), metadata = await readFunctionTableIndex(path);
  const host = () => 7, instance = new WebAssembly.Instance(module, { env: { fn: host } });
  const corrupt = { ...metadata, exportSeeds: [['first', 2, 0]] };
  assert.throws(() => runtime(instance, host, corrupt).address(instance.exports.first), /metadata mismatch/);
  assert.throws(() => runtime(instance, host, { ...metadata, exportCount: 100 }).address(instance.exports.first), /export count/);
  assert.throws(() => runtime(instance, host, { ...metadata, exportSeeds: [['first', 3, 100]] }), /metadata mismatch/);
  assert.throws(() => runtime(instance, host, { ...metadata, version: 1 }), /metadata mismatch/);
  assert.throws(() => transformFunctionTable(originalLookup.replace('|| 0', '|| 9'), metadata), /semantics/);
  const truncated = join(directory, 'truncated.wasm');
  writeFileSync(truncated, Buffer.from([0, 97, 115, 109, 1, 0, 0, 0, 9, 100]));
  await assert.rejects(readFunctionTableIndex(truncated), /Truncated/);
});

test('compact ordinals respect integer keys, empty names and prototype-like symbols', async () => {
  const { path, module } = fixture(false, true), metadata = await readFunctionTableIndex(path);
  const host = () => 7, instance = new WebAssembly.Instance(module, { env: { fn: host } });
  const names = Object.keys(instance.exports);
  for (const [name, , ordinal] of metadata.exportSeeds) assert.equal(names[ordinal], name);
  const state = runtime(instance, host, metadata);
  assert.equal(state.address(instance.exports['12']), 3);
  assert.equal(state.address(instance.exports['2']), 4);
  assert.equal(state.address(instance.exports.__proto__), 3);
  assert.equal(state.address(instance.exports['']), 0);
  assert.deepEqual(state.scans, [{ offset: 5, count: 0 }]);
});
