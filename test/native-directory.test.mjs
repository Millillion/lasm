import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, opendirSync, rmSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { nativeFiles } from '../src/native-files.mjs';

for (const synchronous of [true, false]) {
  test(`native directory records match Node/libuv through ${synchronous ? 'direct' : 'worker'} IO`,
    { skip: process.platform === 'win32' }, async t => {
      const root = mkdtempSync(join(tmpdir(), 'lasm directory λ-'));
      t.after(() => rmSync(root, { recursive: true, force: true }));
      const files = nativeFiles({ synchronous });
      assert.deepEqual(await files.readDirectory(root), [], 'Exclude both dot entries');
      mkdirSync(join(root, 'empty'));
      for (const name of ['日本語', 'λ', '.hidden', '..not-parent', 'z-last', 'a-first', 'x'.repeat(240)])
        writeFileSync(join(root, name), '');
      const reference = [], directory = opendirSync(root, { encoding: 'buffer' });
      try { for (let entry; (entry = directory.readSync());) reference.push(entry.name); }
      finally { directory.closeSync(); }
      assert.equal(reference.length, 8);
      for (let i = 0; i < 3; i++) assert.deepEqual(await files.readDirectory(root), reference,
        'Preserve native order and filename bytes across repeated calls');
      await assert.rejects(files.readDirectory(join(root, 'absent')), { code: 'ENOENT' });
    });
}
