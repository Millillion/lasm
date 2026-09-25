import assert from 'node:assert/strict';
import { createRequire } from 'node:module';
import { writeSync } from 'node:fs';
import { writeNativeWasiStdio } from '../../src/wasmtime-native-stdio.mjs';
import { nativeFiles } from '../../src/native-files.mjs';

const mode = process.argv[2], ffi = createRequire(import.meta.url)('koffi'), libc = ffi.load(null);
const duplicate = libc.func('int dup2(int oldfd, int newfd)'), close = libc.func('int close(int fd)');
const open = libc.func('int open(str path, int flags, ...)');
const pipe = libc.func('int pipe(_Out_ int *fds)'), control = libc.func('int fcntl(int fd, int command, ...)');
const read = libc.func('intptr_t read(int fd, void *bytes, size_t length)');
const write = libc.func('intptr_t write(int fd, const void *bytes, size_t length)');
const signal = libc.func('void *signal(int number, void *handler)');
signal(13, 1); // The control explicitly observes EPIPE instead of a signal exit.
// Start the IO worker before closing/replacing fd 1: worker initialization must
// not reuse that now-free descriptor for unrelated engine bookkeeping.
assert.deepEqual(await writeNativeWasiStdio(1, Buffer.alloc(0)), { errno: 0, written: 0 });
let reader, size = 5;
if (mode === 'closed') assert.equal(close(1), 0);
else if (mode === 'full' || mode === 'readonly') {
  const descriptor = open(mode === 'full' ? '/dev/full' : '/dev/null', mode === 'full' ? 1 : 0);
  assert.ok(descriptor >= 0); assert.equal(duplicate(descriptor, 1), 1); close(descriptor);
} else if (['partial', 'broken', 'blocked'].includes(mode)) {
  const fds = [-1, -1]; assert.equal(pipe(fds), 0);
  assert.equal(control(fds[1], 1031 /* F_SETPIPE_SZ */, 'int', 4096), 4096);
  assert.equal(duplicate(fds[1], 1), 1); close(fds[1]); reader = fds[0];
  if (mode === 'partial') { assert.equal(control(1, 4 /* F_SETFL */, 'int', 2048 /* O_NONBLOCK */), 0); size = 16384; }
  if (mode === 'broken') { close(reader); reader = undefined; }
  if (mode === 'blocked') assert.equal(Number(write(1, Buffer.alloc(4096), 4096)), 4096);
} else assert.ok(['bytes', 'buffered', 'forced'].includes(mode));
const bytes = size === 5 ? Buffer.from([0, 255, 0xce, 0xbb, 10]) : Buffer.alloc(size, 0xa5);
if (mode === 'buffered' || mode === 'forced') {
  const files = nativeFiles(), file = await files.open('buffered.bin', 1);
  await files.write(file, bytes);
  writeSync(2, JSON.stringify({ errno: 0, written: bytes.length }) + '\n');
  if (mode === 'buffered') await files.flushAll();
  await files.exitProcess(0, true);
  throw new Error('Native exit unexpectedly returned');
}
let settled = false;
const pending = writeNativeWasiStdio(1, bytes).then(value => { settled = true; return value; });
let hostTurnWhileBlocked;
if (mode === 'blocked') {
  await new Promise(resolve => setTimeout(resolve, 50));
  hostTurnWhileBlocked = !settled;
  assert.equal(Number(read(reader, Buffer.alloc(4096), 4096)), 4096);
}
const result = await pending;
if (reader !== undefined) {
  const received = Buffer.alloc(Math.max(1, result.written));
  const count = Number(read(reader, received, received.length));
  assert.equal(count, result.written); assert.deepEqual(received.subarray(0, count), bytes.subarray(0, count));
  result.received = count; close(reader);
}
if (mode === 'blocked') { assert.ok(hostTurnWhileBlocked); result.hostTurnWhileBlocked = hostTurnWhileBlocked; }
writeSync(2, JSON.stringify(result) + '\n');
// Match the owned-process entry point: finish CRT output, then leave through
// native _Exit. Falling out of this JS fixture instead runs engine teardown,
// which can add its own closed-stdout diagnostic absent from native Lean.
await nativeFiles().flushAll();
await nativeFiles().exitProcess(0, true);
throw new Error('Native exit unexpectedly returned');
