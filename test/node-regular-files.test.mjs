import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, rmSync, writeFileSync, readFileSync, readdirSync, mkdirSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { createNodeRuntimeHost } from '../src/node-host.mjs';
import { nativeFiles } from '../src/native-files.mjs';

const posix = process.platform !== 'win32';
const text = value => Buffer.from(value);
const id = result => Number(result.bytes.readBigUInt64LE(0));
const errorKind = result => Number(result.bytes.readBigUInt64LE(0));
const errno = result => Number(result.bytes.readBigUInt64LE(8));
const openDescriptors = () => posix && process.platform === 'linux' ? readdirSync('/proc/self/fd').length : 0;

function fixture(t) {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-regular-'));
  const host = createNodeRuntimeHost({ cwd: directory });
  t.after(() => { host.close(); rmSync(directory, { recursive: true, force: true }); });
  return { directory, host };
}

test('read-only regular files open, read to EOF and close on the host thread with pooled semantics', { skip: !posix }, async t => {
  const { directory, host } = fixture(t);
  const bytes = Buffer.from(Array.from({ length: 300 }, (_, i) => i & 0xff));
  writeFileSync(join(directory, 'zone'), bytes);
  const before = openDescriptors();
  // Synchronous results (not promises) show that no file worker was involved.
  const opened = host.request(1, 0, 0n, text(join(directory, 'zone')));
  assert.equal(typeof opened.then, 'undefined');
  assert.equal(opened.error, false);
  const handle = id(opened);
  const first = host.request(2, handle, 200n, new Uint8Array());
  assert.equal(typeof first.then, 'undefined');
  assert.deepEqual(first.bytes, bytes.subarray(0, 200));
  assert.deepEqual(host.request(2, handle, 1024n, new Uint8Array()).bytes, bytes.subarray(200));
  assert.equal(host.request(2, handle, 1024n, new Uint8Array()).bytes.length, 0);
  // EOF is cleared, as by Lean's native reader: appended bytes become visible.
  writeFileSync(join(directory, 'zone'), Buffer.concat([bytes, text('tail')]));
  assert.deepEqual(host.request(2, handle, 1024n, new Uint8Array()).bytes, text('tail'));
  if (process.platform === 'linux') {
    const fd = nativeFiles().openRegular(join(directory, 'zone'));
    try {
      const flags = parseInt(readFileSync(`/proc/self/fdinfo/${fd.fd}`, 'utf8').match(/^flags:\s+([0-7]+)/m)[1], 8);
      assert.equal(flags & 0o4000, 0, 'O_NONBLOCK must be cleared before use');
      assert.equal(flags & 0o2000000, 0o2000000, 'O_CLOEXEC as in the pooled open');
    } finally { nativeFiles().close(fd); }
  }
  host.release(handle, true);
  assert.equal(openDescriptors(), before);
});

test('relative names, large reads and mixed pooled operations keep one ordered stream', { skip: !posix }, async t => {
  const { directory, host } = fixture(t);
  const lines = 'first\nsecond\n' + 'x'.repeat(100_000);
  writeFileSync(join(directory, 'data'), lines);
  const handle = id(host.request(1, 0, 0n, text('data')));
  assert.deepEqual(host.request(2, handle, 3n, new Uint8Array()).bytes, text('fir'));
  // getLine and reads above the limit use a file worker on the same FILE.
  const line = host.request(7, handle, 0n, new Uint8Array());
  const next = host.request(2, handle, 7n, new Uint8Array());
  assert.deepEqual((await line).bytes, text('st\n'));
  assert.deepEqual((await next).bytes, text('second\n'));
  const big = host.request(2, handle, 200_000n, new Uint8Array());
  assert.equal(typeof big.then, 'function');
  assert.equal((await big).bytes.length, 100_000);
  await host.releaseAsync(handle);
});

test('non-regular and failing opens keep the pooled path and its errors', { skip: !posix }, async t => {
  const { directory, host } = fixture(t);
  mkdirSync(join(directory, 'dir'));
  const directoryOpen = await host.request(1, 0, 0n, text('dir'));
  assert.equal(directoryOpen.error, false);
  const read = await host.request(2, id(directoryOpen), 10n, new Uint8Array());
  assert.equal(read.error, true);
  assert.equal(errno(read), 21); // EISDIR, from fread on the pooled stream
  await host.releaseAsync(id(directoryOpen));
  const missing = await host.request(1, 0, 0n, text('missing'));
  assert.equal(missing.error, true);
  assert.equal(errorKind(missing), 1);
  assert.equal(errno(missing), 2);
  if (process.platform === 'linux' || process.platform === 'darwin') {
    writeFileSync(join(directory, 'secret'), 'x');
    spawnSync('chmod', ['000', join(directory, 'secret')]);
    if (process.getuid?.() !== 0) {
      const denied = await host.request(1, 0, 0n, text('secret'));
      assert.equal(denied.error, true);
      assert.equal(errno(denied), 13);
    }
  }
  // Writable modes never take the host-thread path.
  writeFileSync(join(directory, 'out'), '');
  const writable = host.request(1, 0, 3n, text('out'));
  assert.equal(typeof writable.then, 'function');
  await host.releaseAsync(id(await writable));
});

test('FIFOs are opened by a file worker, never on the host thread', { skip: !posix }, async t => {
  const { directory, host } = fixture(t);
  const fifo = join(directory, 'pipe');
  assert.equal(spawnSync('mkfifo', [fifo]).status, 0);
  const opened = host.request(1, 0, 0n, text(fifo));
  assert.equal(typeof opened.then, 'function');
  // The pooled open waits for a writer, as native Lean does.
  const writer = host.request(1, 0, 1n, text(fifo));
  const [reader, output] = await Promise.all([opened, writer]);
  assert.equal(reader.error, false);
  assert.equal((await host.request(3, id(output), 0n, text('hi'))).error, false);
  await host.releaseAsync(id(output));
  assert.deepEqual((await host.request(2, id(reader), 10n, new Uint8Array())).bytes, text('hi'));
  await host.releaseAsync(id(reader));
});
