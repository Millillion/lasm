import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, rmSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createNodeRuntimeHost, encodeError } from '../src/node-host.mjs';
import { nativeFiles } from '../src/native-files.mjs';

const fields = result => ({ kind: Number(result.bytes.readBigUInt64LE()),
  code: Number(BigInt.asUintN(32, result.bytes.readBigUInt64LE(8))),
  message: result.bytes.subarray(16).toString() });

test('unknown Lean releases cannot silently use an unverified error ABI', () => {
  assert.throws(() => createNodeRuntimeHost({ leanVersion: '4.35.0' }), /No verified IO error policy/);
});

test('explicit Lean errors retain their messages and constructors under either ABI', () => {
  for (const version of ['4.32.0', '4.34.0', '4.34.1']) {
    assert.deepEqual(fields(encodeError({ code: 'EINVAL', errno: 22, nativeMessage: true,
      message: 'string contains NUL bytes' }, version)), { kind: 4, code: 22, message: 'string contains NUL bytes' });
    assert.deepEqual(fields(encodeError({ code: 'ENOENT', errno: 2, nativeMessage: true,
      message: '' }, version)), { kind: 1, code: 2, message: '' });
    assert.deepEqual(fields(encodeError({ leanUserError: true, message: 'custom error' }, version)),
      { kind: 18, code: 0, message: 'custom error' });
  }
});

test('libuv errno signs follow the selected Lean release, including node:os errors', () => {
  const error = { info: { code: 'EINVAL', errno: -22, message: 'system failure' } };
  assert.equal(fields(encodeError(error, '4.32.0')).code, 4294967274);
  for (const version of ['4.34.0', '4.34.1'])
    assert.deepEqual(fields(encodeError(error, version)),
      { kind: 4, code: 22, message: 'invalid argument' });
});

test('Windows CRT aliases and default cases match the observed native Lean decoder',
  { skip: process.platform !== 'win32' }, () => {
    // Independent expected results from the native Lean 4.34 Windows x64 oracle.
    // These errno values are not aliases on Windows, unlike their Unix names.
    for (const [code, errno] of [['EALREADY', 103], ['ECANCELED', 105],
      ['ENOTSUP', 129], ['EOVERFLOW', 132], ['EWOULDBLOCK', 140]])
      assert.deepEqual(fields(encodeError({ code, errno, errorOrigin: 'crt' }, '4.34.0')),
        { kind: 0, code: errno, message: `Unknown system error ${-errno}` });
    for (const [errno, origin] of [[8, 'crt'], [-4022, 'uv']])
      assert.deepEqual(fields(encodeError({ code: 'ENOEXEC', errno, errorOrigin: origin }, '4.34.0')),
        { kind: 4, code: Math.abs(errno), message: 'exec format error' });
  });

test('CRT provenance survives the native file worker, with instance-local Lean versions', async () => {
  const cwd = mkdtempSync(join(tmpdir(), 'lasm-io-error-'));
  const legacy = createNodeRuntimeHost({ cwd, leanVersion: '4.32.0' });
  const current = createNodeRuntimeHost({ cwd, leanVersion: '4.34.1' });
  try {
    const path = Buffer.from('missing');
    const old = fields(await legacy.request(1, 0, 0n, path));
    const actual = fields(await current.request(1, 0, 0n, path));
    const errno = nativeFiles().errno('ENOENT');
    assert.deepEqual(old, { kind: 1, code: errno, message: nativeFiles().error(errno).message });
    assert.deepEqual(actual, { kind: 1, code: errno, message: 'no such file or directory' });
    assert.deepEqual(fields(await current.request(12, 0, 0n, path)), { kind: 1, code: 2, message: '' });
    assert.deepEqual(fields(await current.request(1, 0, 0n, Buffer.from('bad\0path'))),
      { kind: 4, code: 22, message: 'string contains NUL bytes' });
  } finally { legacy.close(); current.close(); rmSync(cwd, { recursive: true }); }
});
