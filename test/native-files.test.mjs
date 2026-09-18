import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, rmSync, readFileSync, statSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { createNodeRuntimeHost } from '../src/node-host.mjs';

function setup(t) {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-native-files-'));
  const host = createNodeRuntimeHost({ cwd: directory });
  t.after(() => { host.close(); rmSync(directory, { recursive: true, force: true }); });
  const call = async (op, id = 0, arg = 0, bytes = '') => host.request(op, id, BigInt(arg), Buffer.from(bytes));
  const ok = async (...args) => { const r = await call(...args); assert.equal(r.error, false, r.bytes.subarray(16).toString()); return r.bytes; };
  const open = async (name, mode = 3) => Number((await ok(1, 0, mode, name)).readBigUInt64LE());
  return { directory, host, call, ok, open };
}

test('Lean handles use buffered writes, flush, rewind, and the actual stream position for truncate', async t => {
  const { directory, host, ok, open } = setup(t);
  const file = join(directory, 'data');
  writeFileSync(file, '');
  const h = await open('data');
  await ok(3, h, 0, 'first\nsecond\n');
  assert.equal(statSync(file).size, 0);
  await ok(4, h);
  assert.equal(readFileSync(file, 'utf8'), 'first\nsecond\n');
  await ok(5, h);
  assert.equal((await ok(7, h)).toString(), 'first\n');
  await ok(6, h);
  assert.equal(readFileSync(file, 'utf8'), 'first\n');
  host.release(h);
  assert.equal(host.stats().resources, 0);
});

test('file reads exceed the former 16 MiB ceiling and return EOF correctly', async t => {
  const { directory, ok, open } = setup(t);
  const bytes = Buffer.alloc(17 * 1024 * 1024 + 3, 0x5a);
  writeFileSync(join(directory, 'large'), bytes);
  const h = await open('large', 0);
  assert.deepEqual(await ok(2, h, bytes.length), bytes);
  assert.equal((await ok(2, h, 100)).length, 0);
  await ok(5, h);
  assert.equal((await ok(2, h, 1))[0], 0x5a);
});

test('line reading preserves embedded NUL and invalid UTF-8 for Lean string decoding', async t => {
  const { directory, ok, open } = setup(t);
  const bytes = Buffer.from([0x61,0,0xff,0x0a,0x62]);
  writeFileSync(join(directory, 'bytes'), bytes);
  const h = await open('bytes', 0);
  assert.deepEqual(await ok(7, h), bytes.subarray(0, 4));
  assert.deepEqual(await ok(7, h), bytes.subarray(4));
  assert.equal((await ok(7, h)).length, 0);
});

test('shared and exclusive OS locks contend, block asynchronously, and release on finalization', async t => {
  const { directory, host, ok, open } = setup(t);
  writeFileSync(join(directory, 'lock'), '');
  const a = await open('lock'), b = await open('lock');
  const attempt = async (id, exclusive) => Number((await ok(33, id, exclusive)).readBigUInt64LE());
  assert.equal(await attempt(a, 1), 1);
  assert.equal(await attempt(b, 1), 0);
  assert.equal(await attempt(b, 0), 0);
  let acquired = false;
  const waiting = ok(32, b, 1).then(() => { acquired = true; });
  await new Promise(resolve => setTimeout(resolve, 25));
  assert.equal(acquired, false);
  host.release(a);
  await waiting;
  await ok(34, b);
  const c = await open('lock');
  assert.equal(await attempt(b, 0), 1);
  assert.equal(await attempt(c, 0), 1);
  await ok(34, b); await ok(34, c);
  assert.equal(await attempt(c, 1), 1);
});

test('exclusive create and invalid descriptors retain native error categories', async t => {
  const { directory, call, ok, open } = setup(t);
  writeFileSync(join(directory, 'exists'), '');
  const result = await call(1, 0, 2, 'exists');
  assert.equal(result.error, true);
  assert.equal(result.bytes.readBigUInt64LE(), 3n);
  const h = await open('exists', 0);
  const writeError = await call(3, h, 0, 'x');
  assert.equal(writeError.error, true);
  assert.equal(writeError.bytes.readBigUInt64LE(), 4n);
  await ok(5, h);
});

test('more lock waiters than FFI workers cannot deadlock the lock holder', { timeout: 5000 }, async t => {
  const { directory, ok, open } = setup(t);
  writeFileSync(join(directory, 'contended'), '');
  const holder = await open('contended');
  const waiters = await Promise.all(Array.from({ length: 12 }, () => open('contended')));
  await ok(32, holder, 1);
  let completed = 0;
  const pending = waiters.map(async id => { await ok(32, id, 1); completed++; await ok(34, id); });
  await new Promise(resolve => setTimeout(resolve, 20));
  assert.equal(completed, 0);
  await ok(3, holder, 0, 'holder can still write');
  await ok(4, holder);
  await ok(34, holder);
  await Promise.all(pending);
  assert.equal(completed, 12);
});
