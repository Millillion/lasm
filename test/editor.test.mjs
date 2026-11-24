import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { autoSetupEditor, compileProjectLibrary, linkProjectLibrary, setupEditor } from '../src/editor.mjs';
import { lakeConfigurationKey } from '../src/application-sources.mjs';

const scratch = () => mkdtempSync(join(tmpdir(), 'lasm-editor-'));

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

test('the editor compiles only the lazily compiled library modules the project imports: the shipped ones need nothing', async () => {
  const dir = scratch();
  try {
    // Lasm.JS.Web.Dom is in libraryModules (shipped compiled), so nothing is compiled and no Lean is needed.
    writeFileSync(join(dir, 'Main.lean'), 'import Lasm.JS.Web.Dom\n');
    mkdirSync(join(dir, 'prefix', 'lib', 'lean'), { recursive: true });
    const logs = [];
    assert.deepEqual((await compileProjectLibrary(dir, { prefix: join(dir, 'prefix') }, line => logs.push(line))).compiled, []);
    assert.deepEqual(logs, []);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});

test('in a Lake project that requires Lasm\'s package, the editor links it and leaves the modules to Lake', async () => {
  const dir = scratch();
  try {
    const project = join(dir, 'app'), prefix = join(dir, 'prefix');
    mkdirSync(project); mkdirSync(join(prefix, 'lib', 'lean'), { recursive: true });
    writeFileSync(join(project, 'lakefile.toml'), 'name = "app"\n\n[[require]]\nname = "lasm"\npath = ".lake/lasm-library"\n');
    // The test's own library: Lasm.JS (prebuilt) and Lasm.JS.Web.IndexedDB (compiled on first import).
    const root = join(dir, 'library'), eager = ['Lasm.JS'];
    mkdirSync(join(root, 'Lasm', 'JS', 'Web'), { recursive: true });
    writeFileSync(join(root, 'Lasm', 'JS.lean'), '');
    writeFileSync(join(root, 'Lasm', 'JS', 'Web', 'IndexedDB.lean'), 'import Lasm.JS\n');
    // A lazily compiled module: Lasm would have to compile it, but Lake does (no Lean here to compile it with).
    writeFileSync(join(project, 'Main.lean'), 'import Lasm.JS.Web.IndexedDB\n');
    const options = { cache: join(dir, 'cache'), eager, root };
    const result = await compileProjectLibrary(project, { prefix }, () => {}, options);
    assert.deepEqual(result, { compiled: [], lake: true });
    assert.match(readFileSync(join(project, '.lake', 'lasm-library', 'lakefile.toml'), 'utf8'), /^roots = \["Lasm\.JS\.Web\.IndexedDB"\]$/m);
    // Without the require (an older project), the link is still made; the cached-only mode compiles nothing.
    writeFileSync(join(project, 'lakefile.toml'), 'name = "app"\n');
    assert.deepEqual(await compileProjectLibrary(project, { prefix }, () => {}, { ...options, compile: false }), { compiled: [], lake: false });
    // By default Lasm compiles them (ensureProgramLibrary's result, with its time), with the given library list;
    // here the program imports only prebuilt modules, so nothing.
    writeFileSync(join(project, 'Main.lean'), 'import Lasm.JS\n');
    assert.deepEqual(await compileProjectLibrary(project, { prefix }, () => {}, options), { compiled: [], ms: 0, lake: false });
    // A module of the given library compiled on first import: Lasm compiles it (with the prefix's Lean, absent here).
    writeFileSync(join(project, 'Main.lean'), 'import Lasm.JS.Web.IndexedDB\n');
    const logs = [];
    await assert.rejects(compileProjectLibrary(project, { prefix }, line => logs.push(line), options));
    assert.match(logs[0], /^\[lasm\] Compiling 1 Lasm library module on first use \(Lasm\.JS\.Web\.IndexedDB\)/);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});

test('lasm init links Lasm\'s Lake package when Lasm\'s Lean is on this machine, and otherwise leaves it to the first build', async () => {
  const lean = { prefix: '/prefix' };
  const calls = [];
  const compileLibrary = async (...args) => { calls.push(args); };
  assert.equal(await linkProjectLibrary('/app', { provision: async (project, options) => { assert.equal(project, '/app'); assert.equal(options.cachedOnly, true); return lean; }, compileLibrary }), true);
  assert.deepEqual(calls.map(([project, l, , options]) => [project, l, options]), [['/app', lean, { compile: false }]]);
  const notCached = async () => { throw Object.assign(new Error('Not in the tool cache yet'), { code: 'ERR_LASM_NOT_CACHED' }); };
  assert.equal(await linkProjectLibrary('/app', { provision: notCached, compileLibrary }), false);
  assert.equal(calls.length, 1);
});

// Decision 0.7-25: Lasm changes nothing in elan; the project's lean-toolchain rules.
const elanFixture = (root, overrides = {}) => {
  const home = join(root, 'elan'), project = join(root, 'app');
  mkdirSync(join(home, 'bin'), { recursive: true }); mkdirSync(project, { recursive: true });
  writeFileSync(join(home, 'bin', process.platform === 'win32' ? 'elan.exe' : 'elan'), '');
  const lines = Object.entries(overrides).map(([path, toolchain]) => `${JSON.stringify(path === '.' ? project : path)} = "${toolchain}"`);
  writeFileSync(join(home, 'settings.toml'), `default_toolchain = "leanprover/lean4:stable"\ntelemetry = false\nversion = "12"\n\n[overrides]\n${lines.join('\n')}\n`);
  return { home, project, executable: join(home, 'bin', process.platform === 'win32' ? 'elan.exe' : 'elan'), env: { ELAN_HOME: home, PATH: '' } };
};

test('the editor setup leaves elan alone, whatever override the directory has (0.7-25)', async () => {
  const root = scratch();
  try {
    const { project, env, home } = elanFixture(root, { '.': 'lasm-4.35.0-a88ecf8bf14e' });
    writeFileSync(join(project, 'lakefile.toml'), 'name = "app"\n\n[[require]]\nname = "lasm"\npath = ".lake/lasm-library"\n');
    const settings = readFileSync(join(home, 'settings.toml'), 'utf8');
    const find = source => { assert.equal(source, join(project, 'Main.lean')); return project; };
    for (let i = 0; i < 3; i++) assert.deepEqual(await autoSetupEditor(join(project, 'Main.lean'), { env, find, log: line => assert.fail(line) }), { status: 'ready' });
    assert.equal(readFileSync(join(home, 'settings.toml'), 'utf8'), settings);
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('setupEditor: without the require of Lasm\'s package, one hint, only for a project that imports Lasm\'s library', () => {
  const root = scratch();
  try {
    const { project, env } = elanFixture(root);
    const lines = [];
    const setup = (options = {}) => setupEditor({ project, env, log: line => lines.push(line), ...options });
    writeFileSync(join(project, 'lakefile.toml'), 'name = "app"\n');
    writeFileSync(join(project, 'Main.lean'), 'def main : IO Unit := pure ()\n');
    assert.deepEqual(setup(), { status: 'no-require' });
    assert.deepEqual(lines, [], 'a project that does not import Lasm.* needs nothing');
    writeFileSync(join(project, 'Main.lean'), 'import Lasm.JS\ndef main : IO Unit := pure ()\n');
    for (let i = 0; i < 3; i++) assert.deepEqual(setup(), { status: 'no-require' });
    assert.deepEqual(lines, ['[lasm] Editor: this project imports Lasm\'s library, which the Lean editor finds through Lasm\'s Lake package: run `npx lasm editor` once to add it to the lakefile.']);
    // lasm editor itself adds the require, so it gives no hint.
    assert.deepEqual(setup({ explicit: true }), { status: 'no-require' });
    assert.equal(lines.length, 1);
    assert.deepEqual(setup({ requires: () => true, imports: () => assert.fail('not read') }), { status: 'ready' });
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('setupEditor without elan: the hint once per project, always when explicit', () => {
  const root = scratch();
  try {
    const project = join(root, 'app'); mkdirSync(project);
    const env = { ELAN_HOME: join(root, 'none'), PATH: '' }, lines = [];
    const hint = '[lasm] Editor: to make the Lean editor resolve `import Lasm.*`, install the Lean 4 extension for VS Code (it installs elan), then run `npx lasm editor` in this project.';
    for (let i = 0; i < 3; i++) assert.deepEqual(setupEditor({ project, env, log: line => lines.push(line) }), { status: 'no-elan' });
    assert.deepEqual(lines, [hint]);
    assert.deepEqual(JSON.parse(readFileSync(join(project, '.lake', 'lasm', 'editor.json'), 'utf8')), { hinted: true });
    for (let i = 0; i < 2; i++) setupEditor({ project, env, log: line => lines.push(line), explicit: true });
    assert.deepEqual(lines, [hint, hint, hint]);
    // An unwritable project still gets its answer.
    const file = join(project, 'file');
    writeFileSync(file, '');
    assert.deepEqual(setupEditor({ project: file, env, log: () => {} }), { status: 'no-elan' });
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('autoSetupEditor: off with LASM_EDITOR=0 and on CI unless LASM_EDITOR=1; nothing outside a Lake project; never fails the build', async () => {
  const root = scratch();
  try {
    const { project, env } = elanFixture(root);
    writeFileSync(join(project, 'lakefile.toml'), 'name = "app"\n');
    const find = () => project;
    for (const extra of [{ LASM_EDITOR: '0' }, { CI: 'true' }, { CI: '1' }, { CI: 'true', LASM_EDITOR: '0' }])
      assert.equal(await autoSetupEditor(join(project, 'Main.lean'), { env: { ...env, ...extra }, find: () => assert.fail('off') }), undefined, JSON.stringify(extra));
    for (const extra of [{}, { CI: 'false' }, { CI: 'true', LASM_EDITOR: '1' }, { CI: '' }])
      assert.deepEqual(await autoSetupEditor(join(project, 'Main.lean'), { env: { ...env, ...extra }, find, log: () => {} }), { status: 'no-require' }, JSON.stringify(extra));
    assert.equal(await autoSetupEditor(join(project, 'Main.lean'), { env, find: () => undefined }), undefined);
    const lines = [];
    assert.deepEqual(await autoSetupEditor(join(project, 'Main.lean'), { env, find: () => { throw new Error('bad lakefile\nline 2'); }, log: line => lines.push(line) }), { status: 'failed' });
    assert.deepEqual(lines, ['[lasm] Editor setup skipped: bad lakefile']);
    // The default project lookup: a source outside any Lake project.
    assert.equal(await autoSetupEditor(join(root, 'nowhere', 'Main.lean'), { env, log: () => {} }), undefined);
  } finally { rmSync(root, { recursive: true, force: true }); }
});
