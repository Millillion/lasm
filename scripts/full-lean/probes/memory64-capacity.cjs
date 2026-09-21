// Inspect declared/exposed capacity without allocating or touching large memory.
// Each case initially commits only one 64 KiB page. No memory growth is requested.
const assert = require('node:assert/strict');
const results = [];
for (const shared of [false, true]) {
  const memory = new WebAssembly.Memory({ initial: 1n, maximum: 131072n, address: 'i64', shared });
  assert.equal(memory.grow(0n), 1n);
  assert.equal(memory.buffer.byteLength, 65536);
  const supportsResizableBuffer = typeof memory.toResizableBuffer === 'function';
  const buffer = supportsResizableBuffer ? memory.toResizableBuffer() : memory.buffer;
  assert.equal(buffer.byteLength, 65536);
  results.push({ shared, initialBytes: buffer.byteLength, requestedMaximumBytes: 8589934592,
    supportsResizableBuffer, exposedMaximumBytes: supportsResizableBuffer ? buffer.maxByteLength : null,
    scope: supportsResizableBuffer ? 'Reported growable capacity; no growth attempt.' : 'Capacity query unavailable; no conclusion about maximum.' });
}
console.log(JSON.stringify(results, null, 2));
