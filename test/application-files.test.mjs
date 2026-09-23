import assert from 'node:assert/strict';
import test from 'node:test';
import { mkdtemp, mkdir, writeFile, readFile, rm, readdir, symlink } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join, dirname } from 'node:path';
import { deliverOutput, fileInventory, outputReceipt, reusableOutput } from '../src/application-files.mjs';

async function fixture(t) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-application-files-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  const dist = join(base, 'dist');
  async function build(name, files) {
    const directory = join(base, name);
    await mkdir(directory);
    for (const [name, contents] of Object.entries(files)) {
      await mkdir(dirname(join(directory, name)), { recursive: true });
      await writeFile(join(directory, name), contents);
    }
    await writeFile(join(directory, outputReceipt), JSON.stringify({ schema: 1, signature: name, files: await fileInventory(directory) }));
    return directory;
  }
  return { base, dist, build };
}

test('rebuilds replace generated output, remove obsolete files, and preserve added assets and empty directories', async t => {
  const { base, dist, build } = await fixture(t);
  const old = await build('old', { 'main.mjs': 'first', 'host/obsolete.mjs': 'old support' });
  await deliverOutput(old, dist, 'old');
  assert.equal(await reusableOutput(dist, 'old'), true);
  await mkdir(join(dist, 'assets/empty'), { recursive: true });
  await writeFile(join(dist, 'assets/data.txt'), 'user data');
  await writeFile(join(dist, '__proto__'), 'ordinary filename');
  const next = await build('next', { 'main.mjs': 'second', 'host/needed.mjs': 'new support' });
  await deliverOutput(next, dist, 'next');
  assert.equal(await readFile(join(dist, 'main.mjs'), 'utf8'), 'second');
  assert.equal(await readFile(join(dist, 'assets/data.txt'), 'utf8'), 'user data');
  assert.equal(await readFile(join(dist, '__proto__'), 'utf8'), 'ordinary filename');
  assert.deepEqual(await readdir(join(dist, 'assets/empty')), []);
  assert.deepEqual(await readdir(join(dist, 'host')), ['needed.mjs']);
  assert.equal(Object.hasOwn(JSON.parse(await readFile(join(dist, outputReceipt))).files, 'assets/data.txt'), false);
  await deliverOutput(next, dist, 'next');
  assert.equal(await readFile(join(dist, 'assets/data.txt'), 'utf8'), 'user data');
  assert.deepEqual((await readdir(base)).sort(), ['dist', 'next', 'old']);
});

test('modified generated files and malformed receipts cannot authorize deletion', async t => {
  const { dist, build } = await fixture(t);
  const old = await build('old', { 'main.mjs': 'first' });
  const next = await build('next', { 'main.mjs': 'second' });
  await deliverOutput(old, dist, 'old');
  await writeFile(join(dist, 'main.mjs'), 'edited by developer');
  await assert.rejects(deliverOutput(next, dist, 'next'), /was modified/);
  assert.equal(await readFile(join(dist, 'main.mjs'), 'utf8'), 'edited by developer');
  await writeFile(join(dist, outputReceipt), '{}');
  await assert.rejects(deliverOutput(next, dist, 'next'), /Invalid application output receipt/);
  assert.equal(await readFile(join(dist, 'main.mjs'), 'utf8'), 'edited by developer');
});

test('new generated files cannot replace added files, their parents or an empty asset directory', async t => {
  const { dist, build } = await fixture(t);
  const old = await build('old', { 'main.mjs': 'first' });
  await deliverOutput(old, dist, 'old');
  await writeFile(join(dist, 'asset'), 'mine');
  await mkdir(join(dist, 'empty'));
  for (const [index, files] of [
    { 'asset': 'generated' }, { 'asset/child': 'generated' }, { 'empty': 'generated' },
  ].entries()) {
    const next = await build('next-' + index, files);
    await assert.rejects(deliverOutput(next, dist, 'next-' + index), /conflicts with an added asset/);
    assert.equal(await readFile(join(dist, 'asset'), 'utf8'), 'mine');
    assert.deepEqual(await readdir(join(dist, 'empty')), []);
  }
});

test('removed generated files are restored without consuming extra assets as owned files', async t => {
  const { dist, build } = await fixture(t);
  const cached = await build('cached', { 'main.mjs': 'entry' });
  await deliverOutput(cached, dist, 'cached');
  await rm(join(dist, 'main.mjs'));
  await writeFile(join(dist, 'asset'), 'mine');
  await deliverOutput(cached, dist, 'cached');
  assert.equal(await readFile(join(dist, 'main.mjs'), 'utf8'), 'entry');
  assert.equal(await readFile(join(dist, 'asset'), 'utf8'), 'mine');
});

test('nonempty unowned output and symbolic links are refused without changing their targets', async t => {
  const { base, dist, build } = await fixture(t);
  const cached = await build('cached', { 'main.mjs': 'entry' });
  await mkdir(dist);
  await writeFile(join(dist, 'asset'), 'mine');
  await assert.rejects(deliverOutput(cached, dist, 'cached'), /not a Lasm application build/);
  await rm(dist, { recursive: true });
  await symlink(cached, dist, process.platform === 'win32' ? 'junction' : 'dir');
  await assert.rejects(deliverOutput(cached, dist, 'cached'), /ordinary directory/);
  assert.equal(await readFile(join(cached, 'main.mjs'), 'utf8'), 'entry');
  await rm(dist);
  await deliverOutput(cached, dist, 'cached');
  await symlink(cached, join(dist, 'asset-link'), process.platform === 'win32' ? 'junction' : 'dir');
  await assert.rejects(deliverOutput(cached, dist, 'cached'), /Unexpected link/);
  assert.equal(await readFile(join(base, 'cached/main.mjs'), 'utf8'), 'entry');
});
