// Editor setup (src/editor.mjs) in-process, with stand-ins for Lasm's Lean
// provisioning and the Lake project lookup: what lasm build, lasm init and
// lasm editor do and print for each state of elan and the project.
import assert from 'node:assert/strict';
import { beforeEach, test } from 'node:test';
import { registerHooks } from 'node:module';
import { chmodSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { homedir, tmpdir } from 'node:os';
import { delimiter, join } from 'node:path';

const stubs = {
  './managed-lean.mjs': 'export const provisionLean = (...a) => globalThis.editorStandIns.provisionLean(...a);',
  './application-sources.mjs': 'export const findApplicationProject = (...a) => globalThis.editorStandIns.findApplicationProject(...a);\nexport const lakeNativePackages = (...a) => globalThis.editorStandIns.lakeNativePackages(...a);',
};
registerHooks({
  resolve(specifier, context, next) {
    if (context.parentURL?.endsWith('/src/editor.mjs') && Object.hasOwn(stubs, specifier))
      return { url: 'data:text/javascript,' + encodeURIComponent(stubs[specifier]), shortCircuit: true };
    return next(specifier, context);
  },
});
const { autoSetupEditor, editorLean, editorToolchainName, findElan, runEditor, setupEditor } = await import('../src/editor.mjs');

const root = mkdtempSync(join(tmpdir(), 'lasm-editor-setup-'));
test.after(() => rmSync(root, { recursive: true, force: true }));
let n = 0;
const elanName = process.platform === 'win32' ? 'elan.exe' : 'elan';
function fixture({ elan = true } = {}) {
  const base = join(root, String(++n)), elanHome = join(base, 'elan'), project = join(base, 'app');
  mkdirSync(project, { recursive: true });
  if (elan) { mkdirSync(join(elanHome, 'bin'), { recursive: true }); writeFileSync(join(elanHome, 'bin', elanName), ''); }
  return { base, elanHome, project, env: { ELAN_HOME: elanHome, PATH: '' } };
}
const marker = project => JSON.parse(readFileSync(join(project, '.lake', 'lasm', 'editor.json'), 'utf8'));
const lean = { distribution: 'full', executionPrefix: '/derived/0123456789abcdef', version: '4.35.0' };

beforeEach(() => {
  globalThis.editorStandIns = {
    provisionLean: async () => lean,
    findApplicationProject: () => undefined,
    lakeNativePackages: () => [],
  };
});

test('findElan: PATH (or Path) first, then ELAN_HOME/bin, then ~/.elan', () => {
  const { base, elanHome } = fixture();
  const onPath = join(base, 'path-bin');
  mkdirSync(onPath); writeFileSync(join(onPath, elanName), '');
  assert.deepEqual(findElan({ ELAN_HOME: elanHome, PATH: ['', join(base, 'none'), onPath].join(delimiter) }), { home: elanHome, executable: join(onPath, elanName) });
  assert.deepEqual(findElan({ ELAN_HOME: elanHome, Path: onPath }), { home: elanHome, executable: join(onPath, elanName) });
  assert.deepEqual(findElan({ ELAN_HOME: elanHome, PATH: '' }), { home: elanHome, executable: join(elanHome, 'bin', elanName) });
  assert.deepEqual(findElan({ ELAN_HOME: elanHome }), { home: elanHome, executable: join(elanHome, 'bin', elanName) });
  assert.equal(findElan({ ELAN_HOME: join(base, 'none'), PATH: '' }), undefined);
  // Windows looks for elan.exe; other systems for elan.
  const windows = join(base, 'win'); mkdirSync(join(windows, 'bin'), { recursive: true }); writeFileSync(join(windows, 'bin', 'elan.exe'), '');
  assert.equal(findElan({ ELAN_HOME: windows, PATH: '' }, 'win32').executable, join(windows, 'bin', 'elan.exe'));
  assert.equal(findElan({ ELAN_HOME: windows, PATH: '' }, 'linux'), undefined);
  // No ELAN_HOME: ~/.elan.
  const found = findElan({ PATH: '' });
  if (found) assert.equal(found.home, join(homedir(), '.elan'));
  assert.equal(editorToolchainName('4.36.0', '/x/abcdefghijklmnop'), 'lasm-4.36.0-abcdefghijkl');
});

test('setupEditor runs elan with the project directory, elan home, piped output and a timeout, and records what it linked', () => {
  const { elanHome, project, env } = fixture();
  const calls = [], lines = [];
  const run = (file, args, options) => {
    calls.push({ file, args, options });
    if (args[0] === 'toolchain') mkdirSync(join(elanHome, 'toolchains', args[2]), { recursive: true });
  };
  const prefix = '/derived/c4a12e5df32ae42b45dc';
  const toolchain = editorToolchainName('4.35.0', prefix);
  assert.deepEqual(setupEditor({ project, prefix, version: '4.35.0', env: { ...env, OTHER: '1' }, run, log: line => lines.push(line) }), { status: 'linked', toolchain });
  assert.deepEqual(calls.map(call => [call.file, call.args]), [[join(elanHome, 'bin', elanName), ['toolchain', 'link', toolchain, prefix]],
    [join(elanHome, 'bin', elanName), ['override', 'set', toolchain]]]);
  for (const { options } of calls)
    assert.deepEqual(options, { cwd: project, env: { ELAN_HOME: elanHome, PATH: '', OTHER: '1' }, stdio: ['ignore', 'pipe', 'pipe'], timeout: 60_000, windowsHide: true });
  assert.deepEqual(marker(project), { toolchain, prefix, elanHome });
  assert.deepEqual(lines, [`[lasm] Editor: linked Lasm's Lean 4.35.0 as the elan toolchain ${toolchain} and set it as this directory's elan override, so the Lean editor resolves \`import Lasm.*\` (restart its Lean server if it is open). Nothing else in elan changes. Undo: elan override unset; LASM_EDITOR=0 stops lasm doing this.`]);
  // The same toolchain linked by another elan home, or a marker for another prefix: set up again.
  calls.length = 0;
  writeFileSync(join(project, '.lake', 'lasm', 'editor.json'), JSON.stringify({ toolchain, prefix, elanHome: '/elsewhere' }));
  assert.equal(setupEditor({ project, prefix, version: '4.35.0', env, run, log: () => {} }).status, 'linked');
  assert.deepEqual(calls.map(call => call.args[0]), ['override'], 'an existing toolchain is not linked again');
  writeFileSync(join(project, '.lake', 'lasm', 'editor.json'), JSON.stringify({ toolchain: 'other', prefix, elanHome }));
  assert.equal(setupEditor({ project, prefix, version: '4.35.0', env, run, log: () => {} }).status, 'linked');
  writeFileSync(join(project, '.lake', 'lasm', 'editor.json'), JSON.stringify({ toolchain, prefix: '/other', elanHome }));
  assert.equal(setupEditor({ project, prefix, version: '4.35.0', env, run, log: () => {} }).status, 'linked');
  assert.equal(setupEditor({ project, prefix, version: '4.35.0', env, run, log: () => {} }).status, 'current');
  // An explicit lasm editor always sets the override again, and says how to undo it without the LASM_EDITOR note.
  lines.length = 0; calls.length = 0;
  assert.equal(setupEditor({ project, prefix, version: '4.35.0', env, run, log: line => lines.push(line), explicit: true }).status, 'linked');
  assert.deepEqual(calls.map(call => call.args[0]), ['override']);
  assert.ok(lines[0].endsWith('Nothing else in elan changes. Undo: elan override unset.'), lines[0]);
});

test('setupEditor without elan: the hint once per project, always when explicit', () => {
  const { project } = fixture({ elan: false });
  const env = { ELAN_HOME: join(project, 'no-elan'), PATH: '' }, lines = [];
  const hint = '[lasm] Editor: to make the Lean editor resolve `import Lasm.*`, install the Lean 4 extension for VS Code (it installs elan), then run `npx lasm editor` in this project.';
  for (let i = 0; i < 3; i++) assert.deepEqual(setupEditor({ project, prefix: '/p', version: '4', env, log: line => lines.push(line) }), { status: 'no-elan' });
  assert.deepEqual(lines, [hint]);
  assert.deepEqual(marker(project), { hinted: true });
  for (let i = 0; i < 2; i++) setupEditor({ project, prefix: '/p', version: '4', env, log: line => lines.push(line), explicit: true });
  assert.deepEqual(lines, [hint, hint, hint]);
  // An unwritable project still gets its answer.
  const file = join(project, 'file');
  writeFileSync(file, '');
  assert.deepEqual(setupEditor({ project: file, prefix: '/p', version: '4', env, log: () => {} }), { status: 'no-elan' });
});

test('setupEditor reports elan failures by their first line, from stderr or the message', () => {
  const { project, env } = fixture();
  const lines = [];
  const toolchain = editorToolchainName('4.35.0', '/p/q');
  const fail = error => () => { throw error; };
  assert.deepEqual(setupEditor({ project, prefix: '/p/q', version: '4.35.0', env, run: fail(Object.assign(new Error('Command failed'), { stderr: Buffer.from('  error: invalid toolchain\nmore\n') })), log: line => lines.push(line) }),
    { status: 'failed', toolchain, message: 'error: invalid toolchain' });
  assert.equal(lines.at(-1), `[lasm] Editor: could not set up elan toolchain ${toolchain}: error: invalid toolchain`);
  assert.deepEqual(setupEditor({ project, prefix: '/p/q', version: '4.35.0', env, run: fail(new Error('spawn elan ETIMEDOUT\nstack')), log: line => lines.push(line) }).message, 'spawn elan ETIMEDOUT');
  // A failure records nothing: the next build tries again.
  assert.throws(() => marker(project));
});

test('editorLean: the C tier only for tiered Lean without a compiler and with Lake packages that have C code', async () => {
  const progress = [];
  const tiers = { distribution: 'tiers', executionPrefix: '/t', version: '4' };
  const calls = [];
  globalThis.editorStandIns.provisionLean = async (project, options) => { calls.push([project, options]); return options.native ? { ...tiers, cCompiler: {} } : tiers; };
  globalThis.editorStandIns.lakeNativePackages = (project, found) => { assert.equal(found, tiers); return [{ package: 'P' }]; };
  const result = await editorLean('/app', { progress: event => progress.push(event), cachedOnly: true });
  assert.deepEqual(result, { lean: { ...tiers, cCompiler: {} }, native: [{ package: 'P' }] });
  assert.deepEqual(progress, [{ stage: 'Checking the Lake packages for C code' }]);
  assert.deepEqual(calls.map(([project, options]) => [project, options.native, options.cachedOnly]), [['/app', undefined, true], ['/app', true, true]]);
  // A tiered Lean that already has its compiler: no check.
  globalThis.editorStandIns.provisionLean = async () => ({ ...tiers, cCompiler: {} });
  globalThis.editorStandIns.lakeNativePackages = () => assert.fail('no check');
  assert.deepEqual((await editorLean('/app')).native, []);
  // The note for a failed check goes to console.error by default.
  globalThis.editorStandIns.provisionLean = async () => tiers;
  globalThis.editorStandIns.lakeNativePackages = () => { throw new Error('bad lakefile\nline 2'); };
  const error = console.error, printed = [];
  console.error = line => printed.push(line);
  try { assert.deepEqual(await editorLean('/app'), { lean: tiers, native: [] }); } finally { console.error = error; }
  assert.deepEqual(printed, ["[lasm] Editor: could not check this project's Lake packages for C code (bad lakefile); linking Lasm's Lean without its C compiler and headers."]);
});

test('autoSetupEditor: off with LASM_EDITOR=0 and on CI unless LASM_EDITOR=1; never fails the build', async () => {
  const { project, env } = fixture();
  globalThis.editorStandIns.findApplicationProject = source => { assert.equal(source, join(project, 'Main.lean')); return project; };
  const run = async extra => { const lines = []; const result = await autoSetupEditor(join(project, 'Main.lean'), { log: line => lines.push(line), env: { ...env, ...extra } }); return { result, lines }; };
  for (const extra of [{ LASM_EDITOR: '0' }, { CI: 'true' }, { CI: '1' }, { CI: 'true', LASM_EDITOR: '0' }]) {
    globalThis.editorStandIns.provisionLean = () => assert.fail('no provisioning: ' + JSON.stringify(extra));
    assert.equal((await run(extra)).result, undefined, JSON.stringify(extra));
  }
  // Linked without elan output, on CI when asked for, and with CI=false.
  for (const extra of [{}, { CI: 'false' }, { CI: 'true', LASM_EDITOR: '1' }, { CI: '' }]) {
    rmSync(join(project, '.lake'), { recursive: true, force: true });
    rmSync(join(project, '..', 'elan', 'toolchains'), { recursive: true, force: true });
    let options;
    globalThis.editorStandIns.provisionLean = async (p, o) => { options = o; return lean; };
    const { result, lines } = await run(extra);
    assert.equal(result.status, 'failed', JSON.stringify(extra)); // the stand-in elan is an empty file
    assert.equal(result.toolchain, editorToolchainName(lean.version, lean.executionPrefix));
    assert.match(lines.at(-1), /^\[lasm\] Editor: could not set up elan toolchain /);
    assert.equal(options.cachedOnly, false);
    assert.equal(typeof options.log, 'function');
  }
  // No Lake project: nothing.
  globalThis.editorStandIns.findApplicationProject = () => undefined;
  assert.equal((await run({})).result, undefined);
  globalThis.editorStandIns.findApplicationProject = () => project;
  // lasm init on a machine without Lasm's Lean yet.
  globalThis.editorStandIns.provisionLean = async (p, o) => { assert.equal(o.cachedOnly, true); throw Object.assign(new Error('not cached'), { code: 'ERR_LASM_NOT_CACHED' }); };
  const lines = [];
  assert.deepEqual(await autoSetupEditor(join(project, 'Main.lean'), { log: line => lines.push(line), env, cachedOnly: true }), { status: 'not-cached' });
  assert.deepEqual(lines, ["[lasm] Editor: the first npm run dev (or npx lasm editor) links Lasm's Lean for the Lean editor; Lasm installs it then."]);
  // Any other failure: one line, and the build goes on.
  globalThis.editorStandIns.provisionLean = async () => { throw new Error('download failed\nretry later'); };
  const failed = await run({});
  assert.deepEqual(failed, { result: { status: 'failed' }, lines: ['[lasm] Editor setup skipped: download failed'] });
});

test('lasm editor: the directory with a lakefile, or the project around it; its exit code', async () => {
  const { project, elanHome } = fixture();
  const saved = { ELAN_HOME: process.env.ELAN_HOME, PATH: process.env.PATH, error: console.error };
  const printed = [];
  console.error = line => printed.push(line);
  process.env.ELAN_HOME = elanHome; process.env.PATH = '';
  try {
    await assert.rejects(runEditor({ input: project }), { message: `lasm editor works in a Lake project (a directory with lakefile.toml); ${project} is not in one.` });
    let looked;
    globalThis.editorStandIns.findApplicationProject = source => { looked = source; return undefined; };
    await assert.rejects(runEditor({ input: join(project, 'sub') }), /is not in one/);
    assert.equal(looked, join(project, 'sub', 'Main.lean'));
    for (const lakefile of ['lakefile.toml', 'lakefile.lean']) {
      rmSync(join(project, 'lakefile.toml'), { force: true }); rmSync(join(project, 'lakefile.lean'), { force: true });
      writeFileSync(join(project, lakefile), '');
      // elan here is an empty file: the link fails, and lasm editor exits 1.
      globalThis.editorStandIns.provisionLean = async (p, options) => { assert.equal(p, project); options.progress({ stage: 'Provisioning Lean' }); return { ...lean, distribution: 'tiers' }; };
      globalThis.editorStandIns.lakeNativePackages = () => { throw new Error('no workspace'); };
      printed.length = 0;
      assert.equal(await runEditor({ input: project }), 1);
      assert.deepEqual(printed.slice(0, 3), ['[lasm] Provisioning Lean', '[lasm] Checking the Lake packages for C code',
        "[lasm] Editor: could not check this project's Lake packages for C code (no workspace); linking Lasm's Lean without its C compiler and headers."],
        'notes are printed after the progress lines');
      assert.match(printed.at(-1), /could not set up elan toolchain/);
    }
    // A project found from a subdirectory; a toolchain already linked: lasm editor exits 0.
    globalThis.editorStandIns.provisionLean = async () => lean;
    globalThis.editorStandIns.findApplicationProject = () => project;
    mkdirSync(join(elanHome, 'toolchains', editorToolchainName(lean.version, lean.executionPrefix)), { recursive: true });
    if (process.platform !== 'win32') {
      writeFileSync(join(elanHome, 'bin', elanName), '#!/bin/sh\nexit 0\n');
      chmodSync(join(elanHome, 'bin', elanName), 0o755);
      assert.equal(await runEditor({ input: join(project, 'deeper') }), 0);
      assert.match(printed.at(-1), /^\[lasm\] Editor: linked Lasm's Lean 4\.35\.0 as the elan toolchain .*Undo: elan override unset\.$/);
    }
    const cwd = process.cwd();
    process.chdir(project);
    try { assert.equal(typeof await runEditor(), 'number'); } finally { process.chdir(cwd); }
  } finally {
    console.error = saved.error;
    for (const name of ['ELAN_HOME', 'PATH']) if (saved[name] === undefined) delete process.env[name]; else process.env[name] = saved[name];
  }
});
