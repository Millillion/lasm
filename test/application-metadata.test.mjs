import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, readFile, rm, rename, symlink, lstat } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join, dirname, delimiter } from 'node:path';
import { pathToFileURL } from 'node:url';
import { applicationMetadata, copyApplicationMetadata } from '../src/application-metadata.mjs';
import { prepareApplicationMetadata } from '../src/application-metadata-runtime.mjs';

async function fixture(t) {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-module-data-'));
  t.after(() => rm(directory, { recursive: true, force: true }));
  const lean = { prefix: join(directory, 'toolchain'), version: 'test', commit: 'test' };
  const generated = { sources: [join(directory, 'Main.c')], metadataRoots: [join(directory, 'project'), join(directory, 'dependency')] };
  const put = async (path, value) => { await mkdir(dirname(path), { recursive: true }); await writeFile(path, value); };
  await put(generated.sources[0], 'lean_object * initialize_Lean_Environment(uint8_t builtin);');
  await put(join(lean.prefix, 'lib/lean/Init.olean'), 'standard data');
  await put(join(lean.prefix, 'lib/lean/Lean/Environment.ir'), 'interpreter data');
  await put(join(lean.prefix, 'lib/lean/Lean/Environment.olean.private'), 'private data');
  await put(join(lean.prefix, 'lib/lean/Lean/Environment.olean.server'), 'server data');
  await put(join(lean.prefix, 'lib/lean/libleanshared.so'), 'native code excluded');
  await put(join(generated.metadataRoots[0], 'Same.olean'), 'project definition');
  await put(join(generated.metadataRoots[1], 'Same.olean'), 'dependency definition');
  return { directory, lean, generated, put };
}

test('runtime module data preserves search precedence and relocates without original files', async t => {
  const { directory, lean, generated } = await fixture(t);
  const metadata = await applicationMetadata(generated, lean);
  assert.deepEqual(metadata.manifest.roots, ['packages/0', 'packages/1']);
  assert.equal(metadata.files.length, 6);
  assert.equal(metadata.manifest.files.some(file => file.path.endsWith('.so')), false);
  assert.equal(JSON.stringify(metadata.manifest).includes(directory), false);
  const dist = join(directory, 'output'); await copyApplicationMetadata(metadata, dist);
  const relocated = join(directory, 'deployment with spaces'); await rename(dist, relocated);
  await rm(lean.prefix, { recursive: true });
  for (const path of generated.metadataRoots) await rm(path, { recursive: true });
  const env = {};
  prepareApplicationMetadata(pathToFileURL(join(relocated, 'main.mjs')), env);
  assert.equal(env.LEAN_SYSROOT, join(relocated, 'lean'));
  const paths = env.LEAN_PATH.split(delimiter);
  assert.deepEqual(paths, ['packages/0', 'packages/1', 'lib/lean'].map(name => join(relocated, 'lean', name)));
  assert.equal(await readFile(join(paths[0], 'Same.olean'), 'utf8'), 'project definition');
  assert.equal(await readFile(join(paths[1], 'Same.olean'), 'utf8'), 'dependency definition');
  assert.equal(await readFile(join(paths[2], 'Init.olean'), 'utf8'), 'standard data');
});

test('metadata content changes invalidate the recipe and copies reject concurrent changes', async t => {
  const { directory, lean, generated } = await fixture(t);
  const before = await applicationMetadata(generated, lean);
  await writeFile(join(generated.metadataRoots[1], 'Same.olean'), 'changed dependency');
  const after = await applicationMetadata(generated, lean);
  assert.notEqual(after.identity, before.identity);
  await assert.rejects(copyApplicationMetadata(before, join(directory, 'output')), /changed during the build/);
});

test('linked module data is materialized, duplicate roots removed and cycles rejected', async t => {
  const { directory, lean, generated, put } = await fixture(t);
  const outside = join(directory, 'shared build data');
  await put(join(outside, 'Module.olean'), 'shared module');
  await symlink(outside, join(generated.metadataRoots[0], 'Shared'), process.platform === 'win32' ? 'junction' : 'dir');
  const alias = join(directory, 'alias');
  await symlink(generated.metadataRoots[0], alias, process.platform === 'win32' ? 'junction' : 'dir');
  generated.metadataRoots.push(alias, join(directory, 'unbuilt library'));
  const data = await applicationMetadata(generated, lean);
  assert.deepEqual(data.manifest.roots, ['packages/0', 'packages/1']);
  const dist = join(directory, 'output'); await copyApplicationMetadata(data, dist);
  assert.equal((await lstat(join(dist, 'lean/packages/0/Shared'))).isSymbolicLink(), false);
  assert.equal(await readFile(join(dist, 'lean/packages/0/Shared/Module.olean'), 'utf8'), 'shared module');
  await symlink(generated.metadataRoots[0], join(outside, 'cycle'), process.platform === 'win32' ? 'junction' : 'dir');
  await assert.rejects(applicationMetadata(generated, lean), /Cyclic runtime module-data directory/);
});

test('ordinary Init/Std-only applications do not acquire unused metaprogramming assets', async t => {
  const { directory, lean, generated } = await fixture(t);
  await writeFile(generated.sources[0], 'lean_object * initialize_Std_Http_Server(uint8_t builtin);');
  assert.equal(await applicationMetadata(generated, lean), null);
  const env = { SENTINEL: 'preserved' };
  prepareApplicationMetadata(pathToFileURL(join(directory, 'main.mjs')), env);
  assert.deepEqual(env, { SENTINEL: 'preserved' });
});

test('explicit Lean paths, including empty overrides, are preserved', async t => {
  const { directory, lean, generated } = await fixture(t);
  const output = join(directory, 'output');
  await copyApplicationMetadata(await applicationMetadata(generated, lean), output);
  for (const value of ['', '/caller data']) {
    const env = { LEAN_SYSROOT: value, LEAN_PATH: value };
    prepareApplicationMetadata(pathToFileURL(join(output, 'main.mjs')), env);
    assert.deepEqual(env, { LEAN_SYSROOT: value, LEAN_PATH: value });
  }
  await writeFile(join(output, 'lean/metadata.json'), JSON.stringify({ schema: 1, roots: ['../../outside'] }));
  assert.throws(() => prepareApplicationMetadata(pathToFileURL(join(output, 'main.mjs')), {}), /Invalid deployed/);
});
