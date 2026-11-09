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

test('the pinned Lean target is named for its release and identified by a full commit', async () => {
  const toolchain = await import('../src/toolchain.mjs');
  assert.match(toolchain.leanCommit, /^[0-9a-f]{40}$/);
  assert.equal(toolchain.targetName, `lean-${toolchain.leanVersion}-wasm32-v1`);
  assert.match(toolchain.leanVersion, /^\d+\.\d+\.\d+$/);
  assert.equal(toolchain.sha256('abc'), 'ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad');
  if (process.env.LEAN === undefined) assert.equal(toolchain.lean, process.platform === 'win32' ? 'lean.exe' : 'lean');
  assert.doesNotThrow(() => toolchain.assertPlatform('linux', 'x64'));
  assert.throws(() => toolchain.assertPlatform('win32', 'arm64'), /Windows ARM64 is not supported/);
});

test('a manifest whose files are not an object is refused before any file is read', t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-target-files-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  // A string has indexed "own properties": '0' would otherwise pass as a listed library.
  writeFileSync(join(directory, 'target.json'), JSON.stringify({ schema: 1, name: targetName, leanCommit, files: 'ab', linkLibraries: ['0'] }));
  assert.throws(() => readTargetManifest(directory), { message: 'Incompatible Lasm target archive' });
});

test('Node.js 24 is the oldest supported release', async t => {
  const { assertPlatform } = await import('../src/toolchain.mjs');
  const original = process.versions.node;
  t.after(() => Object.defineProperty(process.versions, 'node', { value: original }));
  for (const [version, ok] of [['23.11.0', false], ['24.0.0', true], ['26.1.0', true]]) {
    Object.defineProperty(process.versions, 'node', { value: version });
    if (ok) assert.doesNotThrow(() => assertPlatform('linux', 'x64'), version);
    else assert.throws(() => assertPlatform('linux', 'x64'), { message: 'Lasm requires Node.js 24 or newer' }, version);
  }
});

test('resolveLean asks the compiler from the project directory (Elan picks the toolchain there)', { skip: process.platform === 'win32' }, async t => {
  const base = mkdtempSync(join(tmpdir(), 'lasm-resolve-cwd-'));
  const saved = { LEAN: process.env.LEAN, PATH: process.env.PATH, ELAN_HOME: process.env.ELAN_HOME, HOME: process.env.HOME };
  t.after(() => { for (const [key, value] of Object.entries(saved)) if (value === undefined) delete process.env[key]; else process.env[key] = value;
    rmSync(base, { recursive: true, force: true }); });
  const cwd = realpathSync(base);
  const script = (file, body) => { mkdirSync(join(file, '..'), { recursive: true }); writeFileSync(file, `#!/bin/sh\n${body}\n`); chmodSync(file, 0o755); return file; };
  process.env.LEAN = script(join(base, 'lean'), `[ "$PWD" = "${cwd}" ] || { echo "run in $PWD" >&2; exit 1; }\ncase "$1" in --githash) echo ${leanCommit};; --print-prefix) echo /p;; esac`);
  const { resolveLean } = await import('../src/toolchain.mjs?cwd-check');
  assert.equal(resolveLean(cwd).prefix, '/p');
  // Without ELAN_HOME, the installed toolchain is looked up under ~/.elan.
  delete process.env.LEAN; delete process.env.ELAN_HOME;
  process.env.HOME = join(base, 'home');
  script(join(base, 'path/lean'), 'echo "error: no default toolchain configured" >&2; exit 1');
  process.env.PATH = join(base, 'path') + ':' + saved.PATH;
  script(join(base, 'home/.elan/toolchains/leanprover--lean4---v4.32.0/bin/lean'),
    `[ "$PWD" = "${cwd}" ] || exit 1\ncase "$1" in --githash) echo ${leanCommit};; --print-prefix) echo /elan;; esac`);
  const { resolveLean: fromHome } = await import('../src/toolchain.mjs?home-elan');
  const { homedir } = await import('node:os');
  if (homedir() === join(base, 'home')) assert.equal(fromHome(cwd).prefix, '/elan');
  else t.diagnostic('homedir() does not follow HOME here');
});
