import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, readFile, realpath, unlink, rm, readdir, lstat, symlink } from 'node:fs/promises';
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
  assert.deepEqual((await readdir(join(temporaryDirectory, 'lasm-tools'))).filter(name => name.startsWith('.prepare-')), [], 'No incomplete staging path survives');
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
  assert.equal(await windowsToolPrefix(tools, { ...options, repair: true }), a);
  assert.equal(await readFile(join(a, 'bin/lean.exe'), 'utf8'), 'verified compiler');
  const staging = join(temporaryDirectory, 'lasm-tools', '.prepare-' + a.split(/[/\\]/).at(-1));
  await mkdir(staging); await writeFile(join(staging, 'interrupted'), 'stale');
  assert.equal(await windowsToolPrefix(tools, options), a);
  await assert.rejects(lstat(staging), { code: 'ENOENT' });
});

// Each check of an existing prefix, the progress it reports, and what repair may replace.
async function tools(t, extra = {}) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-tool-prefix-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  const directory = join(base, 'tools'), temporaryDirectory = join(base, 'tmp');
  await mkdir(join(directory, 'bin', 'sub'), { recursive: true }); await mkdir(join(directory, 'lib'));
  await writeFile(join(directory, 'bin/lean.exe'), 'compiler'); await writeFile(join(directory, 'bin/sub/helper.dll'), 'helper');
  await writeFile(join(directory, 'lib/data'), 'library'); await writeFile(join(directory, 'LICENSE'), 'notice');
  const receipt = { identity: 'e'.repeat(64), files: { bin: { type: 'directory' }, 'bin/sub': { type: 'directory' }, lib: { type: 'directory' } } };
  for (const name of ['bin/lean.exe', 'bin/sub/helper.dll', 'lib/data', 'LICENSE'])
    receipt.files[name] = { type: 'file', bytes: (await lstat(join(directory, name))).size, sha256: await hashFile(join(directory, name)) };
  Object.assign(receipt.files, extra);
  const stages = [];
  const options = { temporaryDirectory, receipt, log() {}, progress: event => stages.push(event.stage) };
  const { createHash } = await import('node:crypto');
  const provenance = { schema: 2, target: await realpath(directory), artifact: receipt.identity };
  const expected = join(temporaryDirectory, 'lasm-tools', createHash('sha256').update(JSON.stringify(provenance)).digest('hex').slice(0, 24));
  return { base, directory, temporaryDirectory, receipt, options, stages, expected, provenance };
}

test('the prefix is named by its target and receipt, reports its stages and mirrors nested bin directories', async t => {
  const f = await tools(t);
  const prefix = await windowsToolPrefix(f.directory, f.options);
  assert.equal(prefix, f.expected);
  assert.deepEqual(f.stages, ['Preparing Windows compiler execution files', 'Verifying Windows compiler execution files', 'Finishing Windows compiler execution files']);
  assert.equal(await readFile(join(prefix, 'bin/sub/helper.dll'), 'utf8'), 'helper');
  assert.deepEqual(JSON.parse(await readFile(join(prefix, '.lasm-tool-prefix.json'), 'utf8')), f.provenance);
  assert.equal(await readFile(join(prefix, '.lasm-tool-prefix.json'), 'utf8'), JSON.stringify(f.provenance) + '\n');
  assert.deepEqual((await readdir(prefix)).sort(), ['.lasm-tool-prefix.json', 'LICENSE', 'bin', 'lib']);
  assert.ok((await lstat(join(prefix, 'lib'))).isSymbolicLink());
  assert.deepEqual(await readdir(join(f.temporaryDirectory, 'lasm-tools', '.locks')), [basenameOf(prefix) + '.lock']);
  // A second call reuses the verified prefix without preparing anything.
  f.stages.length = 0;
  assert.equal(await windowsToolPrefix(f.directory, f.options), prefix);
  assert.deepEqual(f.stages, []);
  // Another receipt identity is another prefix.
  assert.notEqual(await windowsToolPrefix(f.directory, { ...f.options, receipt: { ...f.receipt, identity: 'd'.repeat(64) } }), prefix);
});
const basenameOf = path => path.split(/[/\\]/).at(-1);

test('receipts without an identity, files or an ordinary bin directory are refused', async t => {
  const f = await tools(t);
  for (const receipt of [undefined, {}, { identity: 'x' }, { files: f.receipt.files }])
    await assert.rejects(windowsToolPrefix(f.directory, { ...f.options, receipt }), { message: 'A verified Lean artifact receipt is required' });
  const noBin = { ...f.receipt, files: Object.fromEntries(Object.entries(f.receipt.files).filter(([name]) => name !== 'bin')) };
  await assert.rejects(windowsToolPrefix(f.directory, { ...f.options, receipt: noBin }), { message: 'Managed Lean has no ordinary bin directory' });
  const binFile = { ...f.receipt, files: { ...f.receipt.files, bin: { type: 'file', bytes: 1, sha256: 'x' } } };
  await assert.rejects(windowsToolPrefix(f.directory, { ...f.options, receipt: binFile }), { message: 'Managed Lean has no ordinary bin directory' });
  const otherDirectory = { ...f.receipt, files: { ...noBin.files, other: { type: 'directory' } } };
  await assert.rejects(windowsToolPrefix(f.directory, { ...f.options, receipt: otherDirectory }), { message: 'Managed Lean has no ordinary bin directory' });
});

test('a symbolic link in bin is not mirrored', { skip: process.platform === 'win32' }, async t => {
  const f = await tools(t, { 'bin/link': { type: 'symlink', target: 'lean.exe' } });
  await assert.rejects(windowsToolPrefix(f.directory, f.options), { message: 'Unsupported managed Lean bin entry: bin/link' });
  assert.deepEqual((await readdir(join(f.temporaryDirectory, 'lasm-tools'))).filter(name => !name.startsWith('.locks')), [], 'no staging is left');
});

for (const [name, damage] of [
  ['an oversized marker', async p => writeFile(join(p, '.lasm-tool-prefix.json'), ' '.repeat(8193))],
  ['a marker for another target', async (p, f) => writeFile(join(p, '.lasm-tool-prefix.json'), JSON.stringify({ ...f.provenance, target: '/elsewhere' }))],
  ['a marker that is a directory', async p => { await rm(join(p, '.lasm-tool-prefix.json')); await mkdir(join(p, '.lasm-tool-prefix.json')); }],
  ['an extra root entry', async p => writeFile(join(p, 'extra'), '')],
  ['a missing root file', async p => rm(join(p, 'LICENSE'))],
  ['a root file with other bytes of the same size', async p => { await rm(join(p, 'LICENSE')); await writeFile(join(p, 'LICENSE'), 'NOTICE'); }],
  ['a root file of another size', async p => { await rm(join(p, 'LICENSE')); await writeFile(join(p, 'LICENSE'), 'longer notice'); }],
  ['a root file replaced by a directory', async p => { await rm(join(p, 'LICENSE')); await mkdir(join(p, 'LICENSE')); }],
  ['a library link to another directory', async (p, f) => { await rm(join(p, 'lib')); await mkdir(join(f.base, 'other')); await symlink(join(f.base, 'other'), join(p, 'lib')); }],
  ['a library directory instead of a link', async p => { await rm(join(p, 'lib')); await mkdir(join(p, 'lib')); await writeFile(join(p, 'lib/data'), 'library'); }],
  ['bin replaced by a link', async (p, f) => { await rm(join(p, 'bin'), { recursive: true }); await symlink(join(f.directory, 'bin'), join(p, 'bin')); }],
  ['a missing bin file', async p => rm(join(p, 'bin/sub/helper.dll'))],
  ['an extra nested bin file', async p => writeFile(join(p, 'bin/sub/extra.dll'), '')],
  ['a nested bin directory replaced by a file', async p => { await rm(join(p, 'bin/sub'), { recursive: true }); await writeFile(join(p, 'bin/sub'), ''); }],
  ['a bin file of the same size with other bytes', async p => { await rm(join(p, 'bin/lean.exe')); await writeFile(join(p, 'bin/lean.exe'), 'COMPILER'); }],
  ['a bin file replaced by a directory', async p => { await rm(join(p, 'bin/lean.exe')); await mkdir(join(p, 'bin/lean.exe')); }],
]) test(`a prepared prefix with ${name} is refused, and repaired on request`, { skip: process.platform === 'win32' }, async t => {
  const f = await tools(t);
  const prefix = await windowsToolPrefix(f.directory, f.options);
  await damage(prefix, f);
  const error = await windowsToolPrefix(f.directory, f.options).then(() => null, e => e);
  assert.equal(error?.message, `Managed compiler execution files changed: ${prefix}. Remove this temporary directory and retry.`);
  assert.ok(error.cause, 'the failed check is the cause');
  assert.equal(await windowsToolPrefix(f.directory, { ...f.options, repair: true }), prefix);
  assert.equal(await readFile(join(prefix, 'bin/lean.exe'), 'utf8'), 'compiler');
  assert.equal(await readFile(join(prefix, 'LICENSE'), 'utf8'), 'notice');
  assert.equal(await windowsToolPrefix(f.directory, f.options), prefix, 'the repaired prefix verifies');
});

test('a prefix path that is a file is never removed, even by repair', async t => {
  const f = await tools(t);
  await mkdir(join(f.temporaryDirectory, 'lasm-tools'), { recursive: true });
  await writeFile(f.expected, 'not a directory');
  for (const repair of [false, true])
    await assert.rejects(windowsToolPrefix(f.directory, { ...f.options, repair }), { message: `Managed compiler execution files changed: ${f.expected}. Remove this temporary directory and retry.` });
  assert.equal(await readFile(f.expected, 'utf8'), 'not a directory');
});

test('a source tree that does not exist is an error, not a prefix', async t => {
  const f = await tools(t);
  await assert.rejects(windowsToolPrefix(join(f.base, 'missing'), f.options), { code: 'ENOENT' });
});
