import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, writeFile, rm } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { nativeFiles } from '../src/native-files.mjs';

async function fixture(t, bytes) {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-file-worker-'));
  t.after(() => rm(directory, { recursive: true, force: true }));
  const path = join(directory, 'input.bin');
  await writeFile(path, bytes);
  return path;
}

test('short reads and EOF retain only the returned bytes across the file worker', async t => {
  const files = nativeFiles(), expected = Buffer.from([90, 91, 92]);
  const path = await fixture(t, expected);
  for (const capacity of [3, 256, 1024 * 1024]) {
    const file = await files.open(path, 0);
    try {
      const bytes = await files.read(file, capacity);
      assert.deepEqual(bytes, expected);
      assert.equal(bytes.buffer.byteLength, bytes.length);
      const eof = await files.read(file, capacity);
      assert.equal(eof.length, 0);
      assert.equal(eof.buffer.byteLength, 0);
      const zero = await files.read(file, 0);
      assert.equal(zero.length, 0);
      assert.equal(zero.buffer.byteLength, 0);
    } finally { await files.closeAsync(file); }
  }
});

test('full reads preserve every byte and later reads keep earlier results live', async t => {
  const files = nativeFiles();
  const expected = Buffer.alloc(16384);
  for (let i = 0; i < expected.length; i++) expected[i] = i % 251;
  const file = await files.open(await fixture(t, expected), 0);
  try {
    const first = await files.read(file, 8192), second = await files.read(file, 8192);
    assert.deepEqual(first, expected.subarray(0, 8192));
    assert.deepEqual(second, expected.subarray(8192));
    assert.equal(first.buffer.byteLength, first.length);
    assert.equal(second.buffer.byteLength, second.length);
  } finally { await files.closeAsync(file); }
});

test('line reads preserve short UTF-8 results and EOF through the worker', async t => {
  const files = nativeFiles(), file = await files.open(await fixture(t, 'a\nβ\nlast'), 0);
  try {
    const retained = [];
    for (const expected of ['a\n', 'β\n', 'last', '']) {
      const bytes = await files.getLine(file);
      assert.equal(bytes.toString(), expected);
      assert.equal(bytes.buffer.byteLength, bytes.length);
      retained.push(bytes);
    }
    assert.equal(Buffer.concat(retained).toString(), 'a\nβ\nlast');
  } finally { await files.closeAsync(file); }
});

test('a failed worker read preserves the error and allows subsequent operations', async t => {
  const files = nativeFiles(), path = await fixture(t, '');
  const writer = await files.open(path, 1);
  try {
    await assert.rejects(files.read(writer, 1024), error => error.code === 'EBADF' && error.nativeMessage === true);
    await files.write(writer, Buffer.from('ok'));
  } finally { await files.closeAsync(writer); }
  const reader = await files.open(path, 0);
  try { assert.equal((await files.read(reader, 1024)).toString(), 'ok'); }
  finally { await files.closeAsync(reader); }
});
