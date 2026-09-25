import test from 'node:test';
import assert from 'node:assert/strict';
import * as os from 'node:os';
import { execFileSync } from 'node:child_process';
import { createNodeRuntimeHost, numbers } from '../src/node-host.mjs';
import { nativeFiles } from '../src/native-files.mjs';

test('Linux system file reader preserves its bounded-read contract', { skip: process.platform !== 'linux' }, () => {
  const native = nativeFiles(), path = Buffer.from('/proc/self/cgroup');
  assert.equal(native.readSystemFile(path, 1).length, 0);
  assert.ok(native.readSystemFile(path, 4).length <= 3);
  assert.equal(native.readSystemFile(Buffer.from('/proc/self/lasm-missing-system-file'), 32), undefined);
  for (const size of [0, -1, 1.5, NaN, Infinity, 4097])
    assert.throws(() => native.readSystemFile(path, size), /Invalid system-file buffer capacity/);
  assert.ok(native.pageSize() > 0n);
  const info = native.systemMemoryInfo();
  assert.equal(info.total, BigInt(os.totalmem()));
  assert.ok(info.free >= 0n && info.free <= info.total);
});

test('Linux system information preserves all four native uname fields', { skip: process.platform !== 'linux' }, async t => {
  const host = createNodeRuntimeHost(); t.after(() => host.close());
  const result = await host.request(137, 0, 0n, Buffer.alloc(0));
  assert.equal(result.error, false);
  let offset = 0;
  for (const option of ['-s', '-r', '-v', '-m']) {
    const output = execFileSync('uname', [option]);
    assert.equal(output.at(-1), 10);
    const expected = output.subarray(0, -1);
    const length = Number(result.bytes.readBigUInt64LE(offset)); offset += 8;
    assert.equal(length, expected.length);
    assert.deepEqual(result.bytes.subarray(offset, offset + length), expected, option);
    offset += length;
  }
  assert.equal(offset, result.bytes.length);
});

test('system operations expose host identities, group lookup, and consistent environment updates', async t => {
  const host = createNodeRuntimeHost(); t.after(() => host.close());
  async function call(op, argument = 0n, bytes = Buffer.alloc(0)) {
    const result = await host.request(op, 0, argument, bytes);
    assert.equal(result.error, false, result.bytes.subarray(16).toString()); return result.bytes;
  }
  assert.equal((await call(123)).readBigUInt64LE(), BigInt(process.pid));
  assert.equal((await call(124)).readBigUInt64LE(), BigInt(process.ppid));
  assert.equal((await call(134)).toString(), os.hostname());
  assert.equal((await call(126)).toString(), os.homedir());
  assert.equal((await call(140)).readBigUInt64LE(), BigInt(os.totalmem()));
  assert.ok((await call(138)).readBigUInt64LE(16) > 0n);
  if (process.platform !== 'win32') assert.equal((await call(129, BigInt(process.getgid()))).readBigUInt64LE(), 1n);
  const key = `LASM_SYSTEM_TEST_${process.pid}`;
  t.after(() => { delete process.env[key]; });
  await call(132, 0n, Buffer.from(key + '\0λ=value'));
  assert.equal(process.env[key], 'λ=value');
  assert.equal((await call(22, 0n, Buffer.from(key))).toString(), '\x01λ=value');
  await call(132, 0n, Buffer.from(key + '\0'));
  assert.deepEqual(await call(22, 0n, Buffer.from(key)), Buffer.from([1]));
  await call(133, 0n, Buffer.from(key));
  assert.equal((await call(22, 0n, Buffer.from(key))).length, 0);
});

test('system errors retain libuv constructors/codes and random requests support concurrent completion', async t => {
  const host = createNodeRuntimeHost(); t.after(() => host.close());
  const invalid = await host.request(132, 0, 0n, Buffer.from('bad=name\0value'));
  assert.equal(invalid.error, true);
  assert.equal(invalid.bytes.readBigUInt64LE(), 4n);
  assert.equal(invalid.bytes.readBigInt64LE(8), -22n);
  if (process.platform !== 'win32') {
    const missing = await host.request(135, 0, 2147483647n, Buffer.alloc(0));
    assert.equal(missing.error, true);
    assert.equal(missing.bytes.readBigUInt64LE(), 12n);
    assert.equal(missing.bytes.readBigInt64LE(8), -3n);
  }
  const ids = [0, 1, 4096].map(size => host.start(143, 0, BigInt(size), Buffer.alloc(0)));
  for (const [index, id] of ids.entries()) {
    await host.whenReady(id);
    const value = await host.request(90, id);
    assert.equal(value.error, false);
    assert.equal(value.bytes.length, [0, 1, 4096][index]);
  }
});
