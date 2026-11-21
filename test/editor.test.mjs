import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, symlinkSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { autoSetupEditor, compileProjectLibrary, directoryOverride, lasmToolchainPattern, linkProjectLibrary, removeLasmOverride, setupEditor } from '../src/editor.mjs';
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

// Issue #343: Lasm no longer sets an elan override (decision 0.7-25); it removes the one Lasm 0.3.0 to 0.10.0 set.
const elanFixture = (root, overrides = {}) => {
  const home = join(root, 'elan'), project = join(root, 'app');
  mkdirSync(join(home, 'bin'), { recursive: true }); mkdirSync(project, { recursive: true });
  writeFileSync(join(home, 'bin', process.platform === 'win32' ? 'elan.exe' : 'elan'), '');
  const lines = Object.entries(overrides).map(([path, toolchain]) => `${JSON.stringify(path === '.' ? project : path)} = "${toolchain}"`);
  writeFileSync(join(home, 'settings.toml'), `default_toolchain = "leanprover/lean4:stable"\ntelemetry = false\nversion = "12"\n\n[overrides]\n${lines.join('\n')}\n`);
  return { home, project, executable: join(home, 'bin', process.platform === 'win32' ? 'elan.exe' : 'elan'), env: { ELAN_HOME: home, PATH: '' } };
};

test('Lasm\'s own toolchain names, as older versions linked them', () => {
  for (const name of ['lasm-4.35.0-a88ecf8bf14e', 'lasm-4.35.0-c4a12e5df32a', 'lasm-4.36.0-rc2-0123456789ab'])
    assert.match(name, lasmToolchainPattern);
  for (const name of ['lasm-14.35.0-a88ecf8bf14e', 'lasm-4.35.10-a88ecf8bf14e', 'lasm-10.0.0-a88ecf8bf14e']) assert.match(name, lasmToolchainPattern);
  for (const name of ['leanprover/lean4:v4.35.0', 'lasm', 'lasm-4.35.0', 'my-lasm-4.35.0-a88ecf8bf14e', 'lasm-4.35.0-A88ECF8BF14E', 'lasm-4.35.0-a88ecf8bf14', 'lasm-x-a88ecf8bf14e',
    'lasm-4.35.0-a88ecf8bf14e0', 'lasm-4.35.0-a88ecf8bf14e-x'])
    assert.doesNotMatch(name, lasmToolchainPattern);
});

test('directoryOverride reads elan\'s override for exactly this directory', () => {
  const root = scratch();
  try {
    const { home, project } = elanFixture(root, { [join(root, 'other')]: 'lasm-4.35.0-111111111111', '.': 'lasm-4.35.0-a88ecf8bf14e', [join(root, 'app', 'sub')]: 'x' });
    assert.equal(directoryOverride(home, project), 'lasm-4.35.0-a88ecf8bf14e');
    assert.equal(directoryOverride(home, join(project, 'sub')), 'x');
    assert.equal(directoryOverride(home, root), undefined);
    assert.equal(directoryOverride(join(root, 'no-elan'), project), undefined);
    // Only the [overrides] table counts; TOML escapes (Windows paths) are read; Windows compares without case.
    writeFileSync(join(home, 'settings.toml'), `[other]\n${JSON.stringify(project)} = "a"\n[overrides]\n"C:\\\\Users\\\\Me\\\\app" = "b"\n  ${JSON.stringify(project)}  =  "c"  \n[later]\n"/x" = "d"\n"bad\\q" = "e"\n`);
    assert.equal(directoryOverride(home, project), 'c');
    assert.equal(directoryOverride(home, '/x'), undefined);
    assert.equal(directoryOverride(home, 'C:\\Users\\me\\APP', 'win32'), 'b');
    assert.equal(directoryOverride(home, 'C:\\Users\\me\\APP', 'linux'), undefined);
    assert.equal(directoryOverride(home, 'C:\\Users\\me\\other', 'win32'), undefined);
    // Entries before any table, other keys, comments, spacing, a bad escape: as TOML reads them.
    writeFileSync(join(home, 'settings.toml'), [`${JSON.stringify(project)} = "top"`, '[ overrides ]  # elan\'s', 'junk=[1]', 'more = [2]',
      `#${JSON.stringify(project)} = "commented"`, '"bad\\q" = "x"', `x ${JSON.stringify(project)} = "prefixed"`, `${JSON.stringify(project)} = "mine"  # set by me`].join('\n'));
    assert.equal(directoryOverride(home, project), 'mine');
    assert.equal(directoryOverride(home, join(root, 'none')), undefined);
    // elan records the real path: a symbolic link to the project, or a path that does not exist, compares as resolved.
    if (process.platform !== 'win32') {
      symlinkSync(project, join(root, 'link'));
      assert.equal(directoryOverride(home, join(root, 'link')), 'mine');
      writeFileSync(join(home, 'settings.toml'), `[overrides]\n${JSON.stringify(join(root, 'gone'))} = "g"\n`);
      assert.equal(directoryOverride(home, join(root, 'gone', '..', 'gone')), 'g');
    }
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('removeLasmOverride unsets only an override to Lasm\'s own toolchain, with elan, and says so', () => {
  const root = scratch();
  try {
    const { home, project, executable, env } = elanFixture(root, { '.': 'lasm-4.35.0-a88ecf8bf14e' });
    const calls = [], lines = [];
    const run = (file, args, options) => calls.push({ file, args, options });
    assert.deepEqual(removeLasmOverride({ project, elan: { home, executable }, run, log: line => lines.push(line), env: { ...env, OTHER: '1' } }),
      { status: 'removed', toolchain: 'lasm-4.35.0-a88ecf8bf14e' });
    assert.deepEqual(calls, [{ file: executable, args: ['override', 'unset', '--path', project],
      options: { cwd: project, env: { ELAN_HOME: home, PATH: '', OTHER: '1' }, stdio: ['ignore', 'pipe', 'pipe'], timeout: 60_000, windowsHide: true } }]);
    assert.deepEqual(lines, ['[lasm] Editor: removed this directory\'s elan override to Lasm\'s toolchain lasm-4.35.0-a88ecf8bf14e, which an older Lasm set: '
      + '`lake` and the Lean editor now use the project\'s lean-toolchain, with Lean\'s own C compiler, and Lasm\'s library comes from its Lake package (restart the Lean server if it is open).']);
    // elan fails: one line with the command to run, from stderr or the message.
    lines.length = 0;
    const failing = error => () => { throw error; };
    assert.deepEqual(removeLasmOverride({ project, elan: { home, executable }, run: failing(Object.assign(new Error('Command failed'), { stderr: Buffer.from('  error: locked\nmore') })), log: line => lines.push(line) }),
      { status: 'failed', toolchain: 'lasm-4.35.0-a88ecf8bf14e', message: 'error: locked' });
    assert.match(lines[0], /^\[lasm\] Editor: could not remove this directory's elan override to Lasm's toolchain lasm-4\.35\.0-a88ecf8bf14e \(error: locked\); run `elan override unset` here/);
    assert.equal(removeLasmOverride({ project, elan: { home, executable }, run: failing(Object.assign(new Error('spawn elan ETIMEDOUT\nstack'), { stderr: '' })), log: () => {} }).message, 'spawn elan ETIMEDOUT');
    // The user's own override, or none: untouched, nothing printed.
    for (const overrides of [{ '.': 'leanprover/lean4:v4.35.0' }, { '.': 'my-toolchain' }, {}]) {
      const other = elanFixture(join(root, String(calls.length + lines.length + Object.keys(overrides).length) + JSON.stringify(overrides).length), overrides);
      assert.equal(removeLasmOverride({ project: other.project, elan: other, run: () => assert.fail('no elan call'), log: () => assert.fail('no line') }), undefined);
    }
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('the editor setup never sets an elan override or links a toolchain (#343)', async () => {
  const root = scratch();
  try {
    const { project, env } = elanFixture(root, { '.': 'lasm-4.35.0-a88ecf8bf14e' });
    writeFileSync(join(project, 'lakefile.toml'), 'name = "app"\n\n[[require]]\nname = "lasm"\npath = ".lake/lasm-library"\n');
    const calls = [];
    const run = (file, args) => calls.push(args);
    const find = source => { assert.equal(source, join(project, 'Main.lean')); return project; };
    assert.equal((await autoSetupEditor(join(project, 'Main.lean'), { env, run, find, log: () => {} })).status, 'removed');
    assert.deepEqual(calls, [['override', 'unset', '--path', project]]);
    // Once removed (elan rewrote its settings), later builds find nothing to do.
    writeFileSync(join(env.ELAN_HOME, 'settings.toml'), 'version = "12"\n\n[overrides]\n');
    for (let i = 0; i < 3; i++) assert.deepEqual(await autoSetupEditor(join(project, 'Main.lean'), { env, run, find, log: line => assert.fail(line) }), { status: 'ready' });
    assert.equal(calls.length, 1);
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('setupEditor: without the require of Lasm\'s package, one hint, only for a project that imports Lasm\'s library', () => {
  const root = scratch();
  try {
    const { project, env } = elanFixture(root);
    const lines = [];
    const setup = (options = {}) => setupEditor({ project, env, run: () => assert.fail('no elan call'), log: line => lines.push(line), ...options });
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
