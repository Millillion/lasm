import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdirSync, mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { autoSetupEditor, editorLean, editorToolchainName, findElan, setupEditor } from '../src/editor.mjs';
import { lakeConfigurationKey } from '../src/application-sources.mjs';

const scratch = () => mkdtempSync(join(tmpdir(), 'lasm-editor-'));

test('the Lasm prefix is linked as an elan toolchain and set as the project override, once', () => {
  const root = scratch();
  try {
    const elanHome = join(root, 'elan'), project = join(root, 'app'), prefix = join(root, 'derived', 'c4a12e5df32ae42b45dcc34ef2401529');
    mkdirSync(join(elanHome, 'bin'), { recursive: true }); mkdirSync(project);
    writeFileSync(join(elanHome, 'bin', process.platform === 'win32' ? 'elan.exe' : 'elan'), '');
    const env = { ELAN_HOME: elanHome, PATH: '' }, calls = [], lines = [];
    const run = (file, args, options) => {
      calls.push(args);
      if (args[0] === 'toolchain') mkdirSync(join(elanHome, 'toolchains', args[2]), { recursive: true });
      assert.equal(options.cwd, project);
    };
    const toolchain = editorToolchainName('4.35.0', prefix);
    assert.equal(toolchain, 'lasm-4.35.0-c4a12e5df32a');
    assert.equal(setupEditor({ project, prefix, version: '4.35.0', env, run, log: line => lines.push(line) }).status, 'linked');
    assert.deepEqual(calls, [['toolchain', 'link', toolchain, prefix], ['override', 'set', toolchain]]);
    assert.equal(lines.length, 1);
    assert.match(lines[0], /elan toolchain lasm-4\.35\.0-c4a12e5df32a/);
    assert.match(lines[0], /Undo: elan override unset; LASM_EDITOR=0/);
    // Only Lasm's own toolchain link and this directory's override are touched.
    assert.ok(calls.every(args => (args[0] === 'toolchain' && args[1] === 'link' && args[2].startsWith('lasm-')) || (args[0] === 'override' && args[1] === 'set')));
    // Later builds (and lasm init after a build) find it current: silent, no elan calls.
    for (let i = 0; i < 3; i++)
      assert.equal(setupEditor({ project, prefix, version: '4.35.0', env, run, log: line => lines.push(line) }).status, 'current');
    assert.equal(calls.length, 2); assert.equal(lines.length, 1);
    // A new Lasm library (another prefix): relinked.
    assert.equal(setupEditor({ project, prefix: join(root, 'derived', '0123456789abcdef'), version: '4.35.0', env, run, log: () => {} }).status, 'linked');
    assert.equal(calls.length, 4);
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('without elan, one hint per project; elan failures never fail the build', () => {
  const root = scratch();
  try {
    const project = join(root, 'app'); mkdirSync(project);
    const env = { ELAN_HOME: join(root, 'none'), PATH: '' }, lines = [];
    assert.equal(findElan(env), undefined);
    assert.equal(setupEditor({ project, prefix: '/p', version: '4.35.0', env, log: line => lines.push(line) }).status, 'no-elan');
    setupEditor({ project, prefix: '/p', version: '4.35.0', env, log: line => lines.push(line) });
    assert.equal(lines.length, 1);
    assert.match(lines[0], /npx lasm editor/);
    const elanHome = join(root, 'elan'); mkdirSync(join(elanHome, 'bin'), { recursive: true });
    writeFileSync(join(elanHome, 'bin', process.platform === 'win32' ? 'elan.exe' : 'elan'), '');
    const failing = () => { throw Object.assign(new Error('x'), { stderr: 'error: invalid toolchain' }); };
    const result = setupEditor({ project, prefix: '/p', version: '4.35.0', env: { ELAN_HOME: elanHome, PATH: '' }, run: failing, log: () => {} });
    assert.equal(result.status, 'failed');
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('automatic setup is off on CI and with LASM_EDITOR=0', async () => {
  assert.equal(await autoSetupEditor('/nowhere/Main.lean', { env: { CI: 'true' } }), undefined);
  assert.equal(await autoSetupEditor('/nowhere/Main.lean', { env: { LASM_EDITOR: '0' } }), undefined);
});

test('the cached-only mode (lasm init) never downloads or assembles tools', async () => {
  const { deriveArtifact } = await import('../src/managed-artifacts.mjs');
  const cache = scratch();
  try {
    let produced = false;
    await assert.rejects(deriveArtifact({ kind: 'editor-test', n: 1 }, async () => { produced = true; }, { cache, cachedOnly: true, log: () => {} }),
      error => error.code === 'ERR_LASM_NOT_CACHED');
    assert.equal(produced, false);
  } finally { rmSync(cache, { recursive: true, force: true }); }
});

// Issue #72: a project whose Lake packages have C code (UnicodeBasic's
// precompileModules) needs the C tier in the editor, as `lasm build` uses.
test('lasm editor picks the C tier exactly when the Lake packages have C code', async () => {
  const plain = { distribution: 'tiers', tier: 'extended', executionPrefix: '/derived/plain', version: '4.35.0' };
  const withC = { distribution: 'tiers', tier: 'native', cCompiler: { multiarch: null }, executionPrefix: '/derived/c', version: '4.35.0' };
  const calls = [];
  const provision = async (project, options) => { calls.push(options.native === true); return options.native ? withC : plain; };
  const unicode = [{ package: 'UnicodeBasic', reasons: ['precompileModules'] }];
  assert.deepEqual(await editorLean('/app', { provision, detect: () => unicode, note: () => {} }), { lean: withC, native: unicode });
  assert.deepEqual(calls, [false, true]);
  calls.length = 0;
  assert.deepEqual(await editorLean('/app', { provision, detect: () => [], note: () => {} }), { lean: plain, native: [] });
  assert.deepEqual(calls, [false]);
  // A Lake failure keeps the previous behaviour (the plain toolchain), with a note.
  const notes = [];
  const failing = () => { throw new Error('could not load the Lake workspace\ndetails'); };
  assert.deepEqual(await editorLean('/app', { provision, detect: failing, note: line => notes.push(line) }), { lean: plain, native: [] });
  assert.match(notes[0], /could not check this project's Lake packages for C code \(could not load the Lake workspace\)/);
  // A full Lean distribution already has its compiler and headers: no check.
  const full = { distribution: 'full', executionPrefix: '/derived/full', version: '4.35.0' };
  assert.deepEqual(await editorLean('/app', { provision: async () => full, detect: () => assert.fail('no check'), note: () => {} }), { lean: full, native: [] });
});

test('the C-tier toolchain has its own elan name, and reruns switch tiers both ways', () => {
  const root = scratch();
  try {
    const elanHome = join(root, 'elan'), project = join(root, 'app');
    const plain = join(root, 'derived', 'd891a3a74b5d0000'), withC = join(root, 'derived', 'f020ec8178870000');
    mkdirSync(join(elanHome, 'bin'), { recursive: true }); mkdirSync(project);
    writeFileSync(join(elanHome, 'bin', process.platform === 'win32' ? 'elan.exe' : 'elan'), '');
    const env = { ELAN_HOME: elanHome, PATH: '' }, overrides = [], lines = [];
    const run = (file, args) => {
      if (args[0] === 'toolchain') mkdirSync(join(elanHome, 'toolchains', args[2]), { recursive: true });
      else overrides.push(args[2]);
    };
    const native = [{ package: 'UnicodeBasic', reasons: ['precompileModules'] }, { package: 'leancurl', reasons: ['extern_lib'] }];
    const setup = (prefix, packages) => setupEditor({ project, prefix, version: '4.35.0', native: packages, env, run, log: line => lines.push(line) });
    assert.equal(setup(plain, []).status, 'linked');
    assert.doesNotMatch(lines.at(-1), /C compiler/);
    // The project gains C code: the C tier, under a distinct toolchain name.
    assert.equal(setup(withC, native).status, 'linked');
    assert.notEqual(overrides[1], overrides[0]);
    assert.equal(overrides[1], editorToolchainName('4.35.0', withC));
    assert.match(lines.at(-1), /Lean 4\.35\.0 with its C compiler and headers \(for the packages with C code: UnicodeBasic, leancurl\) as the elan toolchain lasm-4\.35\.0-f020ec817887 /);
    assert.equal(setup(withC, native).status, 'current');
    // It loses its C code: back to the plain toolchain.
    assert.equal(setup(plain, []).status, 'linked');
    assert.deepEqual(overrides, [editorToolchainName('4.35.0', plain), editorToolchainName('4.35.0', withC), editorToolchainName('4.35.0', plain)]);
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('the workspace-wide Lake key (no source) follows the packages\' configuration', () => {
  const root = scratch();
  try {
    const lean = { identity: 'lean' };
    mkdirSync(join(root, 'dep'));
    writeFileSync(join(root, 'lakefile.toml'), 'name = "app"\n[[require]]\nname = "dep"\npath = "dep"\n');
    writeFileSync(join(root, 'lake-manifest.json'), JSON.stringify({ packages: [{ type: 'path', name: 'dep', dir: 'dep' }] }));
    writeFileSync(join(root, 'dep', 'lakefile.toml'), 'name = "dep"\n');
    writeFileSync(join(root, 'Main.lean'), 'import Dep\n');
    const before = lakeConfigurationKey(root, undefined, lean);
    assert.equal(typeof before, 'string');
    assert.notEqual(before, lakeConfigurationKey(root, join(root, 'Main.lean'), lean));
    writeFileSync(join(root, 'dep', 'lakefile.toml'), 'name = "dep"\nprecompileModules = true\n');
    assert.notEqual(lakeConfigurationKey(root, undefined, lean), before);
  } finally { rmSync(root, { recursive: true, force: true }); }
});
