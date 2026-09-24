import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, symlinkSync, existsSync, lstatSync, rmSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createNodeRuntimeHost } from '../../src/node-host.mjs';
import { nativeFiles } from '../../src/native-files.mjs';

assert.notEqual(process.platform, 'win32', 'This control covers POSIX unlink');
const cwd = mkdtempSync(join(tmpdir(), 'lasm-unlink-'));
const host = createNodeRuntimeHost({ cwd, leanVersion: '4.34.0' });
try {
  mkdirSync(join(cwd, 'empty'));
  mkdirSync(join(cwd, 'nonempty')); writeFileSync(join(cwd, 'nonempty/child'), 'keep');
  writeFileSync(join(cwd, 'file'), 'remove');
  symlinkSync('empty', join(cwd, 'directory-link'));
  symlinkSync('missing', join(cwd, 'broken-link'));
  const remove = name => host.request(15, 0, 0n, Buffer.from(name));
  for (const name of ['empty', 'nonempty', 'empty/', 'directory-link/']) {
    const result = await remove(name);
    assert.equal(result.error, true, name);
    assert.equal(Number(result.bytes.readBigUInt64LE()), 5, name);
    const expected = name === 'directory-link/' ? 'ENOTDIR' : 'EISDIR';
    assert.equal(Number(result.bytes.readBigUInt64LE(8)), nativeFiles().errno(expected), name);
    assert.ok(existsSync(join(cwd, name)), name);
  }
  for (const name of ['file', 'directory-link', 'broken-link']) {
    assert.equal((await remove(name)).error, false, name);
    assert.throws(() => lstatSync(join(cwd, name)), { code: 'ENOENT' });
  }
  assert.ok(existsSync(join(cwd, 'empty')));
  assert.ok(existsSync(join(cwd, 'nonempty/child')));
  console.log('POSIX unlink file, directory, symlink and trailing-separator controls passed');
} finally { host.close(); rmSync(cwd, { recursive: true }); }
