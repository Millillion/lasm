import assert from 'node:assert/strict';
import { createRequire } from 'node:module';
import { Worker, isMainThread, parentPort, workerData } from 'node:worker_threads';
import { prepareBunStack } from '../../../src/bun-stack.mjs';

assert.ok(process.env.LASM_RESOURCE_UNIT, 'Use the resource guard');
prepareBunStack(import.meta.url);
const [path] = isMainThread ? process.argv.slice(2) : workerData;
const require = createRequire(import.meta.url), addon = require(path), ffi = require('koffi');
const library = ffi.load(path);
const frame = library.func('uint64_t lasm_probe_stack_frame(void)');
const viaFfi = library.func('uint64_t lasm_probe_callback(uint64_t pointer, uint64_t argument)');
const type = ffi.proto('uint64_t lasm_stack_callback(uint64_t argument)');
const [nativeFrame, base, size] = addon.stack();
assert.ok(nativeFrame >= base && nativeFrame < base + size);
const alternateFrame = BigInt(frame());
assert.ok(alternateFrame < base || alternateFrame >= base + size, 'Koffi executes on a separate stack');
const values = [0n, 1n, 4294967295n, 9007199254741009n, 0xffffffffffffffffn];
let calls = 0, nested;
const simple = ffi.register(value => { calls++; return BigInt.asUintN(64, BigInt(value) + 3n); }, ffi.pointer(type));
const simpleAddress = ffi.address(simple);
nested = ffi.register(value => {
  value = BigInt(value); calls++;
  return value === 0n ? 7n : addon.invoke(ffi.address(nested), value - 1n) + 1n;
}, ffi.pointer(type));
let result;
try {
  for (const value of values) {
    const expected = BigInt.asUintN(64, value + 3n);
    assert.equal(addon.invoke(simpleAddress, value), expected);
    assert.equal(BigInt(viaFfi(simpleAddress, value)), expected);
  }
  assert.equal(addon.invoke(ffi.address(nested), 20n), 27n);
  assert.throws(() => addon.invoke(0n, 0n), /Invalid callback pointer/);
  assert.throws(() => addon.invoke(simpleAddress, 1n << 64n), /exceeds uint64/);
  assert.throws(() => addon.invoke(simpleAddress, 1), /Node-API operation failed/);
  let deepResult;
  if (isMainThread) assert.throws(() => addon.deep(), /Insufficient native stack headroom/);
  else {
    assert.ok(size >= 80n * 1024n ** 2n);
    let expected = 0n;
    for (let i = 0; i <= 6144; i++) expected += BigInt((i & 255) + ((i >> 8) & 255));
    deepResult = addon.deep(); assert.equal(deepResult, expected);
    assert.equal(addon.invoke(simpleAddress, 10n), 13n, 'Callbacks still work after deep native execution');
  }
  result = { nativeStackBytes: String(size), ffiStackBytes: ffi.config().sync_stack_size,
    nativeEntryUsesOsStack: true, ffiEntryUsesSeparateStack: true, scalarComparisons: values.length * 2,
    nestedCallbackDepth: 20, callbackCalls: calls, rejectionControls: 3,
    deepNativeStackBytes: isMainThread ? undefined : 6145 * 4096,
    deepResult: deepResult === undefined ? undefined : String(deepResult),
    smallMainStackRejectedBeforeAllocation: isMainThread };
} finally { ffi.unregister(simple); ffi.unregister(nested); }
if (isMainThread) {
  const worker = new Worker(new URL(import.meta.url), { workerData: [path], resourceLimits: { stackSizeMb: 96 } });
  let response;
  await new Promise((resolve, reject) => {
    worker.once('message', value => { response = value; });
    worker.once('error', reject);
    worker.once('exit', code => { try { assert.equal(code, 0); assert.ok(response); resolve(); } catch (error) { reject(error); } });
  });
  console.log(JSON.stringify({ engine: process.versions.bun ? 'bun' : process.versions.deno ? 'deno' : 'node',
    version: process.versions.bun ?? process.versions.deno ?? process.versions.node, main: result, worker: response }));
} else parentPort.postMessage(result);
