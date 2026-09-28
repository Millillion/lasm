import assert from 'node:assert/strict';
import { writeSync } from 'node:fs';
import koffi from 'koffi';
import { createNodeRuntimeHost } from '../../src/node-host.mjs';

const setmode = process.platform === 'win32'
  ? koffi.load('ucrtbase.dll').func('int _setmode(int fd, int mode)') : null;
// Exercise the actual regression even if Node changes its startup defaults.
if (setmode) for (const fd of [0, 1, 2]) assert.notEqual(setmode(fd, 0x4000 /* _O_TEXT */), -1);
const host = createNodeRuntimeHost();
const ok = async (op, fd, count = 0, bytes = Buffer.alloc(0)) => {
  const result = await host.request(op, fd, BigInt(count), bytes);
  assert.equal(result.error, false, result.bytes.subarray(16).toString());
  return result.bytes;
};
const first = await ok(7, 0);
assert.deepEqual(first, Buffer.from('first\r\n'));
const remaining = await ok(2, 0, 4096);
assert.equal((await ok(2, 0, 1)).length, 0);
for (const fd of [1, 2]) {
  await ok(3, fd, 0, first);
  await ok(3, fd, 0, remaining);
}
await host.flushStdIO();
host.close();
// Only the owned copies change translation mode; the embedding process keeps
// its descriptors and can continue to write after disposing a Lean runtime.
if (setmode) for (const fd of [0, 1, 2]) assert.equal(setmode(fd, 0x4000), 0x4000);
for (const fd of [1, 2]) writeSync(fd, Buffer.from('host still open\n'));
