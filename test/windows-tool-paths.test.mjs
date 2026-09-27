import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, readFile, realpath, unlink, rm, readdir, lstat } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { windowsToolPrefix } from '../src/windows-tool-paths.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';

test('short physical compiler directories share libraries, verify bin files and publish atomically', async t => {
  const base = await mkdtemp(join(tmpdir(), 'lasm-junction-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  const tools = join(base, 'cache with spaces 日本語', 'nested'.repeat(15)), temporaryDirectory = join(base, 'tmp');
  await mkdir(join(tools, 'bin'), { recursive: true }); await mkdir(join(tools, 'lib'));
  await writeFile(join(tools, 'lib/library'), 'original verified library');
  await writeFile(join(tools, 'bin/lean.exe'), 'verified compiler');
  await writeFile(join(tools, 'LICENSE'), 'unchanged notice');
  const receipt = { identity: 'f'.repeat(64), files: { bin: { type: 'directory' }, lib: { type: 'directory' } } };
  for (const name of ['bin/lean.exe', 'lib/library', 'LICENSE']) receipt.files[name] = {
    type: 'file', bytes: (await lstat(join(tools, name))).size, sha256: await hashFile(join(tools, name)),
  };
  const options = { temporaryDirectory, receipt };
  const [a, b] = await Promise.all([
    windowsToolPrefix(tools, options), windowsToolPrefix(tools, options),
  ]);
  assert.equal(a, b);
  assert.ok(a.length < tools.length);
  assert.notEqual(await realpath(join(a, 'bin')), await realpath(join(tools, 'bin')));
  assert.equal(await realpath(join(a, 'lib')), await realpath(join(tools, 'lib')));
  assert.equal(await readFile(join(a, 'lib/library'), 'utf8'), 'original verified library');
  assert.equal(await readFile(join(a, 'bin/lean.exe'), 'utf8'), 'verified compiler');
  assert.equal(await readFile(join(a, 'LICENSE'), 'utf8'), 'unchanged notice');
  assert.equal(await windowsToolPrefix(tools, options), a);
  assert.equal((await readdir(join(temporaryDirectory, 'lasm-tools'))).length, 1, 'No incomplete staging path survives');
  // Replace the mirror file rather than editing a hard link to the source.
  await unlink(join(a, 'bin/lean.exe')); await writeFile(join(a, 'bin/lean.exe'), 'different program');
  await assert.rejects(windowsToolPrefix(tools, options), /execution files changed/);
  assert.equal(await readFile(join(tools, 'bin/lean.exe'), 'utf8'), 'verified compiler');
  await writeFile(join(a, 'bin/lean.exe'), 'verified compiler');
  await writeFile(join(a, 'bin/unexpected.dll'), 'extra dependency');
  await assert.rejects(windowsToolPrefix(tools, options), /execution files changed/);
  await rm(join(a, 'bin/unexpected.dll'));
  await unlink(join(a, '.lasm-tool-prefix.json'));
  await assert.rejects(windowsToolPrefix(tools, options), /execution files changed/);
});
