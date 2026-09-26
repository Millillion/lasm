import assert from 'node:assert/strict';
import test from 'node:test';
import { mkdtempSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { cacheControls } from '../integration/node-cache-controls.mjs';

test('the installed acceptance recovery controls exercise failed downloads and repaired caches', async t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-cache-controls-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const results = await cacheControls(fileURLToPath(new URL('../', import.meta.url)), directory);
  assert.equal(results.length, 6);
  assert.ok(results.every(result => result.recovered && result.cachedWithoutDownload));
});
