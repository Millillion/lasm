// The Asyncify edge link's tail-call lowering (src/wasi/lower-atomics.mjs
// lowerTailCalls, issue #90): Binaryen's Asyncify does not support tail calls.
import test from 'node:test';
import assert from 'node:assert/strict';
import { lowerTailCalls } from '../src/wasi/lower-atomics.mjs';

// (func $f (param i32) (result i32) (call $sleep) (if (result i32) (i32.eqz (local.get 0)) (then (i32.const 7))
//   (else (return_call $g (i32.sub (local.get 0) (i32.const 1))))))
// (func $g (param i32) (result i32) (return_call_indirect (type $t) (local.get 0) (i32.const 0)))  ; table: $f $g
const tailCalling = Buffer.from('0061736d0100000001090260017f017f600000020d0103656e7605736c65657000010303020000040401700002070501016600010908010041000b0201020a200214001000200045047f410705200041016b12020b0b0900200041001300000b', 'hex');
const run = (bytes, n) => new WebAssembly.Instance(new WebAssembly.Module(bytes), { env: { sleep() {} } }).exports.f(n);
const opcodes = bytes => [...bytes];

test('return_call and return_call_indirect become call and call_indirect followed by return', () => {
  const lowered = lowerTailCalls(tailCalling);
  assert.ok(WebAssembly.validate(lowered));
  assert.equal(lowered.length, tailCalling.length + 2);
  assert.ok(opcodes(tailCalling).includes(0x12) && opcodes(tailCalling).includes(0x13));
  // The same results; the lowered module is a fixed point.
  for (const n of [0, 1, 5, 100]) assert.equal(run(lowered, n), run(tailCalling, n));
  assert.deepEqual(lowerTailCalls(lowered), lowered);
  // The original runs in constant stack, as the tail-call build of a Lean program does.
  assert.equal(run(tailCalling, 1_000_000), 7);
});

test('a module without tail calls is returned unchanged', () => {
  const lowered = lowerTailCalls(tailCalling);
  assert.equal(lowerTailCalls(lowered), lowered);
  assert.throws(() => lowerTailCalls(Buffer.from('not wasm')), /Not a WebAssembly module/);
});
