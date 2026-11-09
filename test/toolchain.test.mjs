import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, writeFileSync, rmSync, mkdirSync, chmodSync, realpathSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { readTargetManifest, targetName, leanCommit, sha256, assertLeanCommit } from '../src/toolchain.mjs';

test('target archives reject modified, missing, incompatible, and escaping inputs', t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-target-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const library = join(directory, 'lib/runtime.a');
  mkdirSync(join(directory, 'lib'));
  const original = Buffer.from('fixture archive contents');
  writeFileSync(library, original);
  const manifest = { schema: 1, name: targetName, leanCommit,
    files: { 'lib/runtime.a': sha256(original) }, linkLibraries: ['lib/runtime.a'] };
  const save = value => writeFileSync(join(directory, 'target.json'), JSON.stringify(value));
  save(manifest);
  assert.equal(readTargetManifest(directory).manifest.leanCommit, leanCommit);
  writeFileSync(library, 'changed');
  assert.throws(() => readTargetManifest(directory), /checksum mismatch: lib\/runtime.a/);
  rmSync(library);
  assert.throws(() => readTargetManifest(directory), /checksum mismatch/);
  writeFileSync(library, original);
  for (const change of [{ schema: 2 }, { leanCommit: 'different' }, { name: 'different' }, { linkLibraries: ['unchecked.a'] }]) {
    save({ ...manifest, ...change });
    assert.throws(() => readTargetManifest(directory), /Incompatible Lasm target archive/);
  }
  save({ ...manifest, files: { '../outside.a': sha256(original) }, linkLibraries: ['../outside.a'] });
  assert.throws(() => readTargetManifest(directory), /checksum mismatch/);
  for (const unsafe of ['C:/outside.a', '\\\\server\\share\\outside.a', 'lib/../../outside.a']) {
    save({ ...manifest, files: { [unsafe]: sha256(original) }, linkLibraries: [unsafe] });
    assert.throws(() => readTargetManifest(directory), /checksum mismatch/);
  }
});

test('an unsupported Lean compiler identity reports the required version', () => {
  // Inject a mismatching compiler identity; this checks the guard, not a second
  // Lean release's runtime compatibility.
  assert.doesNotThrow(() => assertLeanCommit(leanCommit));
  assert.throws(() => assertLeanCommit('different-compiler-commit'), /Project Lean toolchain must match Lean 4.32.0/);
});

test('a target manifest must name its files as a non-empty object and link only listed files', t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-target-shape-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  mkdirSync(join(directory, 'lib'));
  const original = Buffer.from('library bytes');
  writeFileSync(join(directory, 'lib/a.a'), original);
  const manifest = { schema: 1, name: targetName, leanCommit, files: { 'lib/a.a': sha256(original) }, linkLibraries: ['lib/a.a'] };
  const save = value => { const text = JSON.stringify(value); writeFileSync(join(directory, 'target.json'), text); return text; };
  const text = save(manifest);
  const read = readTargetManifest(directory);
  assert.deepEqual(read.manifest, manifest);
  assert.equal(read.identity, sha256(Buffer.from(text)), 'the identity is the hash of the manifest bytes');
  for (const change of [{ files: undefined }, { files: null }, { files: 'lib/a.a' }, { files: ['lib/a.a'] }, { files: {} },
    { linkLibraries: undefined }, { linkLibraries: 'lib/a.a' }, { linkLibraries: [] }, { linkLibraries: ['lib/a.a', 'lib/b.a'] }, { linkLibraries: ['toString'] }]) {
    save({ ...manifest, ...change });
    assert.throws(() => readTargetManifest(directory), { message: 'Incompatible Lasm target archive' }, JSON.stringify(change));
  }
  // Unclean names are refused even when they resolve inside the target.
  for (const unsafe of ['lib//a.a', './lib/a.a', 'lib/./a.a', 'lib/a.a/', 'lib\\a.a', 'C:lib/a.a']) {
    save({ ...manifest, files: { [unsafe]: sha256(original) }, linkLibraries: [unsafe] });
    assert.throws(() => readTargetManifest(directory), { message: `Lasm target checksum mismatch: ${unsafe}` }, unsafe);
  }
  // A listed directory is not a file.
  save({ ...manifest, files: { ...manifest.files, lib: sha256(original) } });
  assert.throws(() => readTargetManifest(directory), { message: 'Lasm target checksum mismatch: lib' });
});

test('run captures trimmed output and runs in the repository by default', { skip: process.platform === 'win32' }, async () => {
  const { run, root } = await import('../src/toolchain.mjs');
  assert.equal(run('/bin/sh', ['-c', 'printf "  %s\\n\\n" "$PWD"']), root);
  assert.equal(run('/bin/sh', ['-c', 'pwd'], { cwd: tmpdir() }), realpathSync(tmpdir()));
  assert.throws(() => run('/bin/sh', ['-c', 'echo problem >&2; exit 3']), error => error.status === 3 && /problem/.test(error.stderr));
});

// resolveLean with stand-in `lean` executables: LEAN, PATH and an Elan toolchain directory.
test('resolveLean uses LEAN, or the exact installed Elan toolchain when no default is configured', { skip: process.platform === 'win32' }, async t => {
  const base = mkdtempSync(join(tmpdir(), 'lasm-resolve-lean-'));
  const saved = { LEAN: process.env.LEAN, PATH: process.env.PATH, ELAN_HOME: process.env.ELAN_HOME };
  t.after(() => { for (const [key, value] of Object.entries(saved)) if (value === undefined) delete process.env[key]; else process.env[key] = value;
    rmSync(base, { recursive: true, force: true }); });
  const standIn = (file, { commit = leanCommit, fail } = {}) => {
    mkdirSync(join(file, '..'), { recursive: true });
    writeFileSync(file, fail ? `#!/bin/sh\necho "${fail}" >&2\nexit 1\n`
      : `#!/bin/sh\ncase "$1" in --githash) echo ${commit};; --print-prefix) echo "$PWD/prefix";; esac\n`);
    chmodSync(file, 0o755);
    return file;
  };
  let fresh = 0;
  const load = () => import(`../src/toolchain.mjs?resolve-${fresh++}`);
  const cwd = realpathSync(base);
  // LEAN names the compiler.
  process.env.LEAN = standIn(join(base, 'explicit/lean'));
  const explicit = await load();
  assert.deepEqual(explicit.resolveLean(cwd), { prefix: join(cwd, 'prefix'), hostCommit: leanCommit, lean: join(cwd, 'prefix', 'bin', 'lean') });
  process.env.LEAN = standIn(join(base, 'other/lean'), { commit: 'f'.repeat(40) });
  await assert.rejects(async () => (await load()).resolveLean(cwd), /Project Lean toolchain must match Lean 4\.32\.0/);
  // No LEAN: `lean` from PATH; Elan's "no default toolchain" falls back to the installed exact toolchain.
  delete process.env.LEAN;
  const elan = join(base, 'elan');
  process.env.ELAN_HOME = elan;
  standIn(join(base, 'path/lean'), { fail: 'error: no default toolchain configured' });
  process.env.PATH = join(base, 'path') + ':' + saved.PATH;
  const viaPath = await load();
  assert.throws(() => viaPath.resolveLean(cwd), /no default toolchain configured/, 'without the exact toolchain the error stands');
  const installed = standIn(join(elan, 'toolchains', 'leanprover--lean4---v4.32.0', 'bin', 'lean'));
  assert.equal(viaPath.resolveLean(cwd).hostCommit, leanCommit);
  assert.equal(viaPath.resolveLean(cwd).prefix, join(cwd, 'prefix'));
  // Any other failure is reported, not papered over.
  standIn(join(base, 'path/lean'), { fail: 'error: toolchain is corrupt' });
  assert.throws(() => viaPath.resolveLean(cwd), /toolchain is corrupt/);
  // An explicit LEAN that fails is never replaced by the Elan toolchain.
  process.env.LEAN = standIn(join(base, 'broken/lean'), { fail: 'error: no default toolchain configured' });
  const broken = await load();
  assert.throws(() => broken.resolveLean(cwd), /no default toolchain configured/);
  assert.ok(installed);
});
