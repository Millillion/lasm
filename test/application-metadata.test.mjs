import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, readFile, rm, rename, symlink, lstat } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join, dirname, delimiter } from 'node:path';
import { pathToFileURL } from 'node:url';
import { createHash } from 'node:crypto';
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
  await put(join(lean.prefix, 'lib/lean/Lean/Environment.ir.sig'), 'interpreter signatures');
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
  assert.equal(metadata.files.length, 7);
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
  assert.equal(await readFile(join(paths[2], 'Lean/Environment.ir.sig'), 'utf8'), 'interpreter signatures');
});

test('metadata content changes invalidate the recipe and copies reject concurrent changes', async t => {
  const { directory, lean, generated } = await fixture(t);
  const before = await applicationMetadata(generated, lean);
  await writeFile(join(generated.metadataRoots[1], 'Same.olean'), 'changed dependency');
  const after = await applicationMetadata(generated, lean);
  assert.notEqual(after.identity, before.identity);
  await assert.rejects(copyApplicationMetadata(before, join(directory, 'output')), /changed during the build/);
});

test('IR signatures are build inputs for standard and project module data', async t => {
  const { directory, lean, generated, put } = await fixture(t);
  await put(join(generated.metadataRoots[0], 'Same.ir.sig'), 'project signatures');
  const before = await applicationMetadata(generated, lean);
  await put(join(lean.prefix, 'lib/lean/Lean/Environment.ir.sig'), 'changed signatures');
  const after = await applicationMetadata(generated, lean);
  assert.notEqual(after.identity, before.identity);
  await assert.rejects(copyApplicationMetadata(before, join(directory, 'stale output')), /changed during the build/);
  const output = join(directory, 'fresh output');
  await copyApplicationMetadata(after, output);
  assert.equal(await readFile(join(output, 'lean/packages/0/Same.ir.sig'), 'utf8'), 'project signatures');
  assert.equal(await readFile(join(output, 'lean/lib/lean/Lean/Environment.ir.sig'), 'utf8'), 'changed signatures');
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

test('an explicit sysroot also selects the standard data in the default search path', async t => {
  const { directory, lean, generated } = await fixture(t);
  const output = join(directory, 'output');
  await copyApplicationMetadata(await applicationMetadata(generated, lean), output);
  for (const value of ['', join(directory, 'caller standard data')]) {
    const env = { LEAN_SYSROOT: value };
    prepareApplicationMetadata(pathToFileURL(join(output, 'main.mjs')), env);
    assert.equal(env.LEAN_SYSROOT, value);
    assert.deepEqual(env.LEAN_PATH.split(delimiter), [
      join(output, 'lean/packages/0'), join(output, 'lean/packages/1'), join(value, 'lib/lean'),
    ]);
  }
});

test('module data is needed only by programs that initialize Lean or Lake modules', async t => {
  const { lean, generated, put } = await fixture(t);
  for (const [text, needed] of [['initialize_Lean(builtin);', true], ['initialize_Lake_Load(builtin)', true], ['initialize_Lean (builtin)', true],
    ['initialize_LeanX(builtin)', false], ['xinitialize_Lean_A(builtin)', false], ['initialize_Lakefile(builtin)', false], ['initialize_Std(builtin)', false]]) {
    await writeFile(generated.sources[0], text);
    assert.equal((await applicationMetadata(generated, lean)) !== null, needed, text);
  }
  // Any of the program's sources.
  generated.sources.push(join(dirname(generated.sources[0]), 'Second.c'));
  await writeFile(generated.sources[0], 'nothing');
  await put(generated.sources[1], 'initialize_Lean_Elab(builtin);');
  assert.notEqual(await applicationMetadata(generated, lean), null);
});

test('the manifest lists every data file with its size and digest; other files are left out', async t => {
  const { lean, generated, put } = await fixture(t);
  await put(join(lean.prefix, 'lib/lean/Lean/Environment.ilean'), 'language server index');
  await put(join(generated.metadataRoots[0], 'Same.olean.private'), 'private');
  const data = await applicationMetadata(generated, lean);
  const { manifest } = data;
  assert.equal(manifest.schema, 1);
  assert.equal(manifest.lean, 'test');
  assert.equal(manifest.leanCommit, 'test');
  assert.deepEqual(manifest.roots, ['packages/0', 'packages/1']);
  assert.deepEqual(manifest.files.map(file => file.path), ['lib/lean/Init.olean', 'lib/lean/Lean/Environment.ir', 'lib/lean/Lean/Environment.ir.sig',
    'lib/lean/Lean/Environment.olean.private', 'lib/lean/Lean/Environment.olean.server', 'packages/0/Same.olean', 'packages/0/Same.olean.private', 'packages/1/Same.olean']);
  const init = manifest.files[0];
  assert.deepEqual(init, { path: 'lib/lean/Init.olean', bytes: 13, sha256: createHash('sha256').update('standard data').digest('hex') });
  assert.equal(manifest.bytes, manifest.files.reduce((total, file) => total + file.bytes, 0));
  assert.equal(data.identity, createHash('sha256').update(JSON.stringify(manifest)).digest('hex'));
  assert.equal(data.files[0].source, join(lean.prefix, 'lib/lean/Init.olean'));
  const output = join(dirname(lean.prefix), 'out');
  await copyApplicationMetadata(data, output);
  assert.deepEqual(JSON.parse(await readFile(join(output, 'lean/metadata.json'), 'utf8')), manifest);
  assert.ok((await readFile(join(output, 'lean/metadata.json'), 'utf8')).endsWith('}\n'));
  await copyApplicationMetadata(null, join(dirname(lean.prefix), 'nothing'));
  await assert.rejects(readFile(join(dirname(lean.prefix), 'nothing/lean/metadata.json')), { code: 'ENOENT' });
});

test('a toolchain without its standard module data, or a missing standard directory, is an error', async t => {
  const { lean, generated } = await fixture(t);
  await rm(join(lean.prefix, 'lib/lean/Init.olean'));
  await assert.rejects(applicationMetadata(generated, lean), { message: 'The managed Lean toolchain is missing its standard module data' });
  await rm(join(lean.prefix, 'lib/lean'), { recursive: true });
  await assert.rejects(applicationMetadata(generated, lean), { code: 'ENOENT' });
});

test('an empty project library is still a search-path entry; the deployed manifest is validated', async t => {
  const { directory, lean, generated } = await fixture(t);
  await rm(generated.metadataRoots[1], { recursive: true });
  await mkdir(generated.metadataRoots[1]);
  const data = await applicationMetadata(generated, lean);
  assert.deepEqual(data.manifest.roots, ['packages/0', 'packages/1']);
  const output = join(directory, 'output');
  await copyApplicationMetadata(data, output);
  assert.ok((await lstat(join(output, 'lean/packages/1'))).isDirectory());
  const main = pathToFileURL(join(output, 'main.mjs'));
  for (const manifest of [{ schema: 2, roots: [] }, { schema: 1 }, { schema: 1, roots: 'packages/0' }, { schema: 1, roots: [0] }, { schema: 1, roots: ['packages/x'] },
    { schema: 1, roots: ['packages/0/'] }, { schema: 1, roots: ['xpackages/0'] }]) {
    await writeFile(join(output, 'lean/metadata.json'), JSON.stringify(manifest));
    assert.throws(() => prepareApplicationMetadata(main, {}), { message: 'Invalid deployed Lean module-data manifest' }, JSON.stringify(manifest));
  }
  await writeFile(join(output, 'lean/metadata.json'), JSON.stringify({ schema: 1, roots: [] }));
  const env = {};
  prepareApplicationMetadata(main, env);
  assert.deepEqual(env, { LEAN_SYSROOT: join(output, 'lean'), LEAN_PATH: join(output, 'lean', 'lib/lean') });
  await rm(join(output, 'lean/metadata.json'));
  await mkdir(join(output, 'lean/metadata.json'));
  assert.throws(() => prepareApplicationMetadata(main, {}), { code: 'EISDIR' });
  // The process environment by default.
  const saved = { LEAN_SYSROOT: process.env.LEAN_SYSROOT, LEAN_PATH: process.env.LEAN_PATH };
  try {
    await rm(join(output, 'lean/metadata.json'), { recursive: true });
    await writeFile(join(output, 'lean/metadata.json'), JSON.stringify({ schema: 1, roots: [] }));
    delete process.env.LEAN_SYSROOT; delete process.env.LEAN_PATH;
    prepareApplicationMetadata(main);
    assert.equal(process.env.LEAN_SYSROOT, join(output, 'lean'));
  } finally { for (const [key, value] of Object.entries(saved)) if (value === undefined) delete process.env[key]; else process.env[key] = value; }
});
