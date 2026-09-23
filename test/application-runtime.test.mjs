import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, rm, symlink } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { hashFile } from '../src/managed-artifacts.mjs';
import { verifyApplicationRuntime } from '../src/application-runtime.mjs';

async function fixture(t) {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-application-runtime-'));
  t.after(() => rm(directory, { recursive: true, force: true }));
  const files = {};
  for (const name of ['include/lean/lean.h', 'lib/runtime.a', 'exports.json', 'THIRD_PARTY_NOTICES.txt']) {
    const file = join(directory, name);
    await mkdir(join(file, '..'), { recursive: true });
    await writeFile(file, 'verified'); files[name] = { bytes: 8, sha256: await hashFile(file) };
  }
  await writeFile(join(directory, 'target.json'), JSON.stringify({ schema: 1, name: 'fixture', memoryLayout: 'wasm64',
    threading: 'pthreads', allocator: 'mimalloc', applicationSymbolHook: 'lasm_lookup_application_symbol',
    libraries: ['lib/runtime.a'], files }));
  return { directory, expected: { name: 'fixture', manifestSha256: await hashFile(join(directory, 'target.json')) } };
}

test('application bundle verifies every file on each use', async t => {
  const { directory, expected } = await fixture(t);
  assert.equal((await verifyApplicationRuntime(directory, expected)).identity, expected.manifestSha256);
  await writeFile(join(directory, 'lib/runtime.a'), 'modified');
  await assert.rejects(verifyApplicationRuntime(directory, expected), /integrity/);
});

test('application bundle cannot replace its manifest with a self-consistent forgery', async t => {
  const { directory, expected } = await fixture(t);
  await writeFile(join(directory, 'target.json'), '{}');
  await assert.rejects(verifyApplicationRuntime(directory, expected), /release catalog/);
});

test('missing and extra application bundle inputs are rejected', async t => {
  const { directory, expected } = await fixture(t);
  await writeFile(join(directory, 'unexpected'), 'extra');
  await assert.rejects(verifyApplicationRuntime(directory, expected), /integrity/);
  await rm(join(directory, 'unexpected')); await rm(join(directory, 'lib/runtime.a'));
  await assert.rejects(verifyApplicationRuntime(directory, expected), /missing/);
});

test('bundle symlinks cannot redirect a verified input', async t => {
  const { directory, expected } = await fixture(t);
  await symlink(join(directory, 'lib'), join(directory, 'alias'), process.platform === 'win32' ? 'junction' : 'dir');
  await assert.rejects(verifyApplicationRuntime(directory, expected), /links and special files/);
});
