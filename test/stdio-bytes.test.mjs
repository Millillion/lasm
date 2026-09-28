import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { mkdtempSync, writeFileSync, readFileSync, openSync, closeSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { nativeFiles } from '../src/native-files.mjs';

const bytes = Buffer.concat([Buffer.from('first\r\nLF\nCRLF\r\nCR\r'), Buffer.from([0x1a, 0, 0xff, 0xfe]), Buffer.from('λ\n')]);
const expected = Buffer.concat([bytes, Buffer.from('host still open\n')]);
for (const redirected of [false, true]) test(`standard IO preserves exact bytes through ${redirected ? 'redirected files' : 'pipes'}`, t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-stdio-bytes-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const input = join(directory, 'input'), stdout = join(directory, 'stdout'), stderr = join(directory, 'stderr');
  writeFileSync(input, bytes);
  const fds = redirected ? [openSync(input, 'r'), openSync(stdout, 'w'), openSync(stderr, 'w')] : [];
  let result;
  try {
    result = spawnSync(process.execPath, ['test/fixtures/stdio-bytes-host.mjs'], {
      ...(redirected ? { stdio: fds } : { input: bytes }), timeout: 15000, maxBuffer: 1024 ** 2,
    });
  } finally { for (const fd of fds) closeSync(fd); }
  const out = redirected ? readFileSync(stdout) : result.stdout;
  const err = redirected ? readFileSync(stderr) : result.stderr;
  assert.ifError(result.error); assert.equal(result.signal, null);
  assert.equal(result.status, 0, err.toString());
  assert.deepEqual(out, expected); assert.deepEqual(err, expected);
});

for (const synchronous of [false, true]) test(`file IO preserves the same bytes with ${synchronous ? 'direct' : 'worker'} calls`, async t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-file-bytes-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const files = nativeFiles({ synchronous }), path = join(directory, 'bytes');
  const writer = await files.open(path, 1);
  try { await files.write(writer, bytes); } finally { await files.closeAsync(writer); }
  assert.deepEqual(readFileSync(path), bytes);
  const reader = await files.open(path, 0);
  try { assert.deepEqual(await files.read(reader, 4096), bytes); }
  finally { await files.closeAsync(reader); }
});
