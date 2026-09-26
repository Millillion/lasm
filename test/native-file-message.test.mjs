import test from 'node:test';
import assert from 'node:assert/strict';
import { encodeFileMessage, decodeFileMessage } from '../src/native-file-message.mjs';

function send(value, options) {
  const { message, transfer } = encodeFileMessage(value, options);
  return decodeFileMessage(structuredClone(message, { transfer }));
}

test('file messages preserve nested bytes, pointer integers and protocol-like user keys', () => {
  const value = { type: 'bytes', value: { type: 'record' }, stream: 1234567890123456789n,
    entries: [Buffer.from([0xff, 0, 0xfe]), new Uint8Array(0)], absent: undefined, null: null };
  Object.defineProperty(value, '__proto__', { value: 'ordinary key', enumerable: true });
  const received = send(value);
  assert.deepEqual(received, { ...value, entries: [Uint8Array.of(0xff, 0, 0xfe), new Uint8Array(0)] });
  assert.equal(Object.getPrototypeOf(received), Object.prototype);
});

test('borrowed input slices stay live and only their visible bytes are cloned', () => {
  const backing = Buffer.alloc(65536, 91), input = backing.subarray(5, 9);
  const received = send({ args: [input] });
  assert.deepEqual([...received.args[0]], [91, 91, 91, 91]);
  assert.equal(received.args[0].buffer.byteLength, 4);
  input.fill(17);
  assert.equal(backing.length, 65536);
  assert.deepEqual([...received.args[0]], [91, 91, 91, 91]);
  const full = new Uint8Array(65536).fill(42), copy = send(full);
  full.fill(10);
  assert.equal(copy[123], 42);
  assert.equal(full.byteLength, 65536);
});

test('owned results move full allocations once while pooled peers stay live', () => {
  const full = new Uint8Array(8192).fill(31);
  const pooled = Buffer.from([1, 2, 3, 4]), slice = pooled.subarray(1, 3);
  const received = send([full, full, slice, new Uint8Array(0)], { move: true });
  assert.equal(full.byteLength, 0);
  assert.equal(received[0].buffer, received[1].buffer);
  assert.equal(received[0][8191], 31);
  assert.equal(received[2].buffer.byteLength, 2);
  assert.deepEqual([...received[2]], [2, 3]);
  assert.deepEqual([...pooled], [1, 2, 3, 4]);
  assert.equal(received[3].buffer.byteLength, 0);
});

test('Deno-style message traversal has bounded overhead independent of byte length', () => {
  function properties(value) {
    assert.equal(ArrayBuffer.isView(value), false, 'No indexed views may reach worker message inspection');
    let count = 0;
    if (value && typeof value === 'object')
      for (const key in value) if (Object.hasOwn(value, key)) count += 1 + properties(value[key]);
    return count;
  }
  const small = encodeFileMessage({ args: [new Uint8Array(1)] }).message;
  const large = encodeFileMessage({ args: [new Uint8Array(1024 * 1024)] }).message;
  assert.equal(properties(small), properties(large));
  assert.ok(properties(large) < 32);
});

test('RPC buffer envelopes preserve offsets, shared buffers and independent copies', () => {
  const backing = new ArrayBuffer(32), shared = new SharedArrayBuffer(8);
  new Uint8Array(backing).set([0xff, 0, 0xfe], 7);
  const value = { byteBuffer: backing, byteOffset: 7, byteLength: 3, shared };
  const reply = send(value);
  assert.ok(reply.byteBuffer instanceof ArrayBuffer);
  assert.deepEqual([...new Uint8Array(reply.byteBuffer, reply.byteOffset, reply.byteLength)], [0xff, 0, 0xfe]);
  new Uint8Array(backing).fill(10); assert.equal(new Uint8Array(reply.byteBuffer)[7], 0xff);
  new Uint8Array(reply.shared)[3] = 41; assert.equal(new Uint8Array(shared)[3], 41);
});

test('raw and viewed references transfer one allocation without detaching shared memory', () => {
  const raw = new ArrayBuffer(8192), shared = new SharedArrayBuffer(16);
  new Uint8Array(raw)[8191] = 93;
  const reply = send({ raw, view: new Uint8Array(raw), shared }, { move: true });
  assert.equal(raw.byteLength, 0); assert.equal(shared.byteLength, 16);
  assert.equal(reply.raw, reply.view.buffer); assert.equal(reply.view[8191], 93);
  assert.ok(reply.shared instanceof SharedArrayBuffer);
});
