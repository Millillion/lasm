import test from 'node:test';
import assert from 'node:assert/strict';
import { createPortableWasi } from '../src/wasi.mjs';
import { assertPlatform } from '../src/toolchain.mjs';
import { buildPlatforms } from '../src/platform.mjs';

test('the build platform policy accepts the intended 64-bit desktop matrix', () => {
  for (const platform of buildPlatforms) assert.doesNotThrow(() => assertPlatform(...platform.split('-')));
  for (const pair of [['freebsd', 'x64'], ['win32', 'ia32'], ['linux', 'riscv64']]) {
    assert.throws(() => assertPlatform(...pair), /64-bit Linux, macOS, or Windows/);
  }
});

test('portable WASI implements empty environment, console writes, EOF, clocks and error codes', () => {
  const chunks = [];
  const wasi = createPortableWasi({ stdout: bytes => chunks.push([...bytes]) });
  const memory = new WebAssembly.Memory({ initial: 1 });
  let initialized = false;
  wasi.initialize({ exports: { memory, _initialize() { initialized = true; } } });
  assert.equal(initialized, true);
  const api = wasi.getImportObject().wasi_snapshot_preview1;
  const data = new DataView(memory.buffer);
  assert.equal(api.environ_sizes_get(0, 4), 0);
  assert.equal(data.getUint32(0, true), 0); assert.equal(data.getUint32(4, true), 0);
  assert.equal(api.environ_get(0, 0), 0);
  assert.equal(api.fd_read(0, 16, 1, 8), 0); assert.equal(data.getUint32(8, true), 0);
  new Uint8Array(memory.buffer, 32, 3).set([0, 255, 37]);
  data.setUint32(16, 32, true); data.setUint32(20, 3, true);
  assert.equal(api.fd_write(1, 16, 1, 8), 0);
  assert.deepEqual(chunks, [[0, 255, 37]]); assert.equal(data.getUint32(8, true), 3);
  assert.equal(api.fd_fdstat_get(1, 40), 0); assert.equal(data.getBigUint64(48, true), 64n);
  assert.equal(api.fd_seek(1, 0n, 0, 0), 70);
  assert.equal(api.fd_close(1), 0); assert.equal(api.fd_write(1, 16, 1, 8), 8);
  assert.equal(api.fd_fdstat_get(99, 40), 8);
  assert.equal(api.environ_sizes_get(65_536, 4), 21);
  assert.equal(api.fd_read(0, 16, 0x80000000, 8), 21);
  assert.equal(api.clock_time_get(0, 0n, 64), 0);
  assert.ok(data.getBigUint64(64, true) > 0n);
  assert.equal(api.clock_time_get(2, 0n, 64), 28);
  assert.throws(() => api.proc_exit(7), /status 7/);
});
