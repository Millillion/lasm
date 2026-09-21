import assert from 'node:assert/strict';
import { createRequire } from 'node:module';
import { createNodeRuntimeHost } from '../../src/node-host.mjs';
import { nativeFiles } from '../../src/native-files.mjs';

const ffi = createRequire(import.meta.url)('koffi');
const libc = ffi.load(null);
const dup = libc.func('int dup(int descriptor)');
const dup2 = libc.func('int dup2(int source, int destination)');
const fcntl = libc.func('int fcntl(int descriptor, int command, int argument)');
const write = libc.func('intptr_t write(int descriptor, const void *bytes, size_t size)');
const files = nativeFiles();
const original = dup(1);
assert.ok(original >= 0);
const [readerFd, writerFd] = files.pipe();
const reader = files.openDescriptor(readerFd, 'r');
const capacity = fcntl(readerFd, 1032 /* F_GETPIPE_SZ */, 0);
assert.ok(capacity > 0 && capacity <= 1024 * 1024);
assert.equal(dup2(writerFd, 1), 1);
files.closeDescriptor(writerFd);
const host = createNodeRuntimeHost();
let restored = false, timer, drained, readStarted = false;
try {
  const fill = Buffer.alloc(capacity, 0x61), tail = Buffer.from('buffered tail');
  assert.equal(write(1, fill, fill.length), fill.length);
  const result = await host.request(3, 1, 0n, tail);
  assert.equal(result.error, false);
  // The pipe is full. Its reader cannot start until this JS timer runs.
  // A synchronous fflush/fclose on the host thread would deadlock here.
  drained = new Promise((resolve, reject) => {
    timer = setTimeout(() => {
      readStarted = true;
      files.read(reader, fill.length + tail.length).then(resolve, reject);
    }, 30);
  });
  if (process.argv[2] === 'flush') await host.flushStdIO();
  else if (process.argv[2] === 'close') host.close();
  else throw new Error('Expected flush or close');
  assert.deepEqual(await drained, Buffer.concat([fill, tail]));
  assert.equal(dup2(original, 1), 1);
  restored = true;
  console.log(`${process.argv[2]} drained a full stdout pipe without blocking its JS reader`);
} finally {
  clearTimeout(timer);
  if (!restored) dup2(original, 1);
  files.closeDescriptor(original);
  host.close();
  // Closing the host's writer lets an already-started read reach EOF even if
  // the tested flush failed. Never free its FILE while that read is active.
  if (readStarted) await drained.catch(() => {});
  await files.closeAsync(reader);
}
