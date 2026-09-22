import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, writeFileSync, symlinkSync, unlinkSync, rmSync, readFileSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { originalSourceLinks, verifySourceLinks } from '../scripts/full-lean/source-links.mjs';

test('source verification detects retargeted, replaced and missing links even when bytes match', () => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-source-links-'));
  try {
    writeFileSync(join(root, 'first'), 'same test bytes');
    writeFileSync(join(root, 'second'), 'same test bytes');
    const path = join(root, 'alias'), expected = { alias: 'first' };
    symlinkSync('first', path);
    assert.deepEqual(verifySourceLinks(root, expected), { checked: 1, modified: [] });
    unlinkSync(path); symlinkSync('second', path);
    assert.deepEqual(verifySourceLinks(root, expected), { checked: 1, modified: ['alias'] });
    unlinkSync(path); writeFileSync(path, 'same test bytes');
    assert.deepEqual(verifySourceLinks(root, expected), { checked: 1, modified: ['alias'] });
    unlinkSync(path);
    assert.deepEqual(verifySourceLinks(root, expected), { checked: 1, modified: ['alias'] });
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('link expectations are tied to the exact verified upstream archive', () => {
  const inventory = JSON.parse(readFileSync(new URL('../scripts/full-lean/upstream-source-links.json', import.meta.url)));
  assert.equal(Object.keys(originalSourceLinks(inventory)).length, 6);
  assert.deepEqual(originalSourceLinks({}), {});
  assert.throws(() => originalSourceLinks({ ...inventory, archiveSha256: 'changed' }), /Unsupported/);
  assert.throws(() => originalSourceLinks({ ...inventory, leanCommit: 'changed' }), /Unsupported/);
});
