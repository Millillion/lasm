// Output delivery (src/application-files.mjs) when the file system fails part
// way: the copy into staging, moving the old output aside, moving the new one
// in, removing the old one, or inspecting the output. Faults are injected into
// node:fs/promises (syncBuiltinESMExports updates the module's named imports),
// and only for the paths a test names. The outcome must always be the old
// output or the new one, never a missing or half-written directory, and no
// staging directory may be left (docs/TESTING.md#mutation-testing).
import assert from 'node:assert/strict';
import test from 'node:test';
import fsp, { mkdtemp, mkdir, writeFile, readFile, rm, readdir } from 'node:fs/promises';
import { syncBuiltinESMExports } from 'node:module';
import { tmpdir } from 'node:os';
import { join, dirname, basename } from 'node:path';
import { deliverOutput, fileInventory, outputReceipt, reusableOutput } from '../src/application-files.mjs';

/** Replaces fs/promises[name] while `action` runs; `fault(original, ...args)` decides per call. */
async function withFault(name, fault, action) {
  const original = fsp[name];
  fsp[name] = (...args) => fault(original, ...args);
  syncBuiltinESMExports();
  try { return await action(); } finally { fsp[name] = original; syncBuiltinESMExports(); }
}
const failure = (code, message = `injected ${code}`) => Object.assign(new Error(message), { code });

async function fixture(t) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-application-faults-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  const output = join(base, 'out', 'dist');
  async function build(name, files) {
    const directory = join(base, name);
    await mkdir(directory);
    for (const [file, contents] of Object.entries(files)) {
      await mkdir(dirname(join(directory, file)), { recursive: true });
      await writeFile(join(directory, file), contents);
    }
    await writeFile(join(directory, outputReceipt), JSON.stringify({ schema: 1, signature: name, files: await fileInventory(directory) }));
    return directory;
  }
  // Only the output and its siblings (staging, previous); never the lock or the cache.
  const siblings = async () => (await readdir(dirname(output))).filter(name => !name.endsWith('.lock')).sort();
  return { base, output, build, siblings };
}
const read = file => readFile(file, 'utf8');

test('a failing copy into staging leaves the old output and no staging directory', async t => {
  const { output, build, siblings } = await fixture(t);
  await deliverOutput(await build('old', { 'main.mjs': 'old' }), output, 'old');
  const next = await build('next', { 'main.mjs': 'new' });
  await assert.rejects(withFault('cp', async () => { throw failure('ENOSPC'); }, () => deliverOutput(next, output, 'next')), { code: 'ENOSPC' });
  assert.equal(await read(join(output, 'main.mjs')), 'old');
  assert.deepEqual(await siblings(), ['dist']);
  assert.equal(await reusableOutput(output, 'old'), true);
});

test('a failing move of the old output aside leaves it in place', async t => {
  const { output, build, siblings } = await fixture(t);
  await deliverOutput(await build('old', { 'main.mjs': 'old' }), output, 'old');
  await writeFile(join(output, 'asset.txt'), 'user asset');
  const next = await build('next', { 'main.mjs': 'new' });
  await assert.rejects(withFault('rename', (rename, from, to) => from === output ? Promise.reject(failure('EBUSY')) : rename(from, to),
    () => deliverOutput(next, output, 'next')), { code: 'EBUSY' });
  assert.equal(await read(join(output, 'main.mjs')), 'old');
  assert.equal(await read(join(output, 'asset.txt')), 'user asset');
  assert.deepEqual(await siblings(), ['dist']);
});

test('a failing move of the new output into place restores the old one', async t => {
  const { output, build, siblings } = await fixture(t);
  await deliverOutput(await build('old', { 'main.mjs': 'old' }), output, 'old');
  await writeFile(join(output, 'asset.txt'), 'user asset');
  const next = await build('next', { 'main.mjs': 'new' });
  let moved = 0;
  await assert.rejects(withFault('rename', (rename, from, to) => {
    if (to === output && basename(from).startsWith('dist.lasm-')) { moved++; return Promise.reject(failure('EPERM')); }
    return rename(from, to);
  }, () => deliverOutput(next, output, 'next')), { code: 'EPERM' });
  assert.equal(moved, 1);
  assert.equal(await read(join(output, 'main.mjs')), 'old');
  assert.equal(await read(join(output, 'asset.txt')), 'user asset');
  assert.equal(JSON.parse(await read(join(output, outputReceipt))).signature, 'old');
  assert.deepEqual(await siblings(), ['dist'], 'neither staging nor the moved-aside output is left');
});

test('a failing move into a new output restores nothing, since there was nothing to restore', async t => {
  const { output, build, siblings } = await fixture(t);
  const next = await build('next', { 'main.mjs': 'new' });
  const renames = [];
  await assert.rejects(withFault('rename', (rename, from, to) => { renames.push([basename(from), basename(to)]); return Promise.reject(failure('EXDEV')); },
    () => deliverOutput(next, output, 'next')), { code: 'EXDEV' });
  assert.equal(renames.length, 1, 'no restore was attempted');
  assert.deepEqual(await siblings(), []);
});

test('when the restore finds the output already back, it does not move the old one over it', async t => {
  const { output, build } = await fixture(t);
  await deliverOutput(await build('old', { 'main.mjs': 'old' }), output, 'old');
  const next = await build('next', { 'main.mjs': 'new' });
  const renames = [];
  // The move succeeds on disk but reports a failure: the new output is in place.
  await assert.rejects(withFault('rename', async (rename, from, to) => {
    renames.push([basename(from).replace(/-[0-9a-f-]{36}$/, ''), basename(to).replace(/-[0-9a-f-]{36}$/, '')]);
    await rename(from, to);
    if (to === output) throw failure('EIO');
  }, () => deliverOutput(next, output, 'next')), { code: 'EIO' });
  assert.deepEqual(renames, [['dist', 'dist.previous'], ['dist.lasm', 'dist']]);
  assert.equal(await read(join(output, 'main.mjs')), 'new');
});

test('a failing removal of the old output fails the delivery after the new one is in place', async t => {
  const { output, build } = await fixture(t);
  await deliverOutput(await build('old', { 'main.mjs': 'old' }), output, 'old');
  const next = await build('next', { 'main.mjs': 'new' });
  await assert.rejects(withFault('rm', (rm, path, options) => basename(path).startsWith('dist.previous-') ? Promise.reject(failure('EACCES')) : rm(path, options),
    () => deliverOutput(next, output, 'next')), { code: 'EACCES' });
  assert.equal(await read(join(output, 'main.mjs')), 'new');
  assert.equal(await reusableOutput(output, 'next'), true);
});

test('an output that cannot be inspected is an error, not a missing output', async t => {
  const { output, build, siblings } = await fixture(t);
  await deliverOutput(await build('old', { 'main.mjs': 'old' }), output, 'old');
  const next = await build('next', { 'main.mjs': 'new' });
  const denied = (lstat, path, ...rest) => path === output || path === join(output, outputReceipt) ? Promise.reject(failure('EACCES')) : lstat(path, ...rest);
  await assert.rejects(withFault('lstat', denied, () => deliverOutput(next, output, 'next')), { code: 'EACCES' });
  await assert.rejects(withFault('lstat', denied, () => reusableOutput(output, 'old')), { code: 'EACCES' });
  assert.equal(await read(join(output, 'main.mjs')), 'old');
  assert.deepEqual(await siblings(), ['dist']);
  // A receipt that disappears (ENOENT) or does not parse means "not reusable", not an error.
  await withFault('readFile', (readFile, path, ...rest) => path === join(output, outputReceipt) ? Promise.reject(failure('ENOENT')) : readFile(path, ...rest),
    async () => assert.equal(await reusableOutput(output, 'old'), false));
  await withFault('readFile', (readFile, path, ...rest) => path === join(output, outputReceipt) ? Promise.resolve('{') : readFile(path, ...rest),
    async () => assert.equal(await reusableOutput(output, 'old'), false));
  await withFault('readFile', (readFile, path, ...rest) => path === join(output, outputReceipt) ? Promise.reject(failure('EIO')) : readFile(path, ...rest),
    async () => assert.rejects(reusableOutput(output, 'old'), { code: 'EIO' }));
});

test('a failing copy of a kept asset into staging leaves the old output and its asset', async t => {
  const { output, build, siblings } = await fixture(t);
  await deliverOutput(await build('old', { 'main.mjs': 'old' }), output, 'old');
  await mkdir(join(output, 'assets'), { recursive: true });
  await writeFile(join(output, 'assets', 'logo.svg'), '<svg/>');
  const next = await build('next', { 'main.mjs': 'new' });
  await assert.rejects(withFault('copyFile', async () => { throw failure('ENOSPC'); }, () => deliverOutput(next, output, 'next')), { code: 'ENOSPC' });
  assert.equal(await read(join(output, 'main.mjs')), 'old');
  assert.equal(await read(join(output, 'assets', 'logo.svg')), '<svg/>');
  assert.deepEqual(await siblings(), ['dist']);
  // Without the fault the asset is carried over.
  await deliverOutput(next, output, 'next');
  assert.equal(await read(join(output, 'assets', 'logo.svg')), '<svg/>');
  assert.equal(await read(join(output, 'main.mjs')), 'new');
});
