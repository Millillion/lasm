import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, readFile, realpath, unlink, symlink, rm } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { windowsToolPrefix } from '../src/windows-tool-paths.mjs';

test('short tool junctions reuse the same verified directory without copying and reject retargeting', async t => {
  const base = await mkdtemp(join(tmpdir(), 'lasm-junction-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  const tools = join(base, 'cache with spaces 日本語', 'nested'.repeat(15)), temporaryDirectory = join(base, 'tmp');
  await mkdir(tools, { recursive: true });
  await writeFile(join(tools, 'library'), 'original verified bytes');
  const [a, b] = await Promise.all([
    windowsToolPrefix(tools, { temporaryDirectory }), windowsToolPrefix(tools, { temporaryDirectory }),
  ]);
  assert.equal(a, b);
  assert.ok(a.length < tools.length);
  assert.equal(await realpath(a), await realpath(tools));
  assert.equal(await readFile(join(a, 'library'), 'utf8'), 'original verified bytes');
  const other = join(base, 'unrelated'); await mkdir(other);
  await unlink(a); await symlink(other, a, 'junction');
  await assert.rejects(windowsToolPrefix(tools, { temporaryDirectory }), /junction changed/);
  assert.equal(await realpath(a), await realpath(other), 'A conflicting junction is not silently replaced');
  await unlink(a); await mkdir(a);
  await assert.rejects(windowsToolPrefix(tools, { temporaryDirectory }), /junction changed/);
  assert.equal(await readFile(join(tools, 'library'), 'utf8'), 'original verified bytes');
});
