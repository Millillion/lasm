// Editor setup (src/editor.mjs) in-process, with stand-ins for Lasm's Lean
// provisioning, elan and the Lake project lookup: what lasm editor does and
// prints for each state of elan and the project.
import assert from 'node:assert/strict';
import { beforeEach, test } from 'node:test';
import { registerHooks } from 'node:module';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { homedir, tmpdir } from 'node:os';
import { delimiter, join } from 'node:path';

const stubs = {
  // Lasm's Lake package (0.3-7): recorded, so these tests never write to the tool cache.
  './lake-library.mjs': 'export const addLakeRequire = (...a) => globalThis.editorStandIns.addLakeRequire(...a);\nexport const lakefileOf = () => "lakefile.toml";\n'
    + 'export const ensureLakeLibrary = (...a) => globalThis.editorStandIns.ensureLakeLibrary(...a);\n'
    + 'export const requiresLakePackage = (...a) => globalThis.editorStandIns.requiresLakePackage(...a);',
  './application-sources.mjs': 'export const findApplicationProject = (...a) => globalThis.editorStandIns.findApplicationProject(...a);',
};
registerHooks({
  resolve(specifier, context, next) {
    if (context.parentURL?.endsWith('/src/editor.mjs') && Object.hasOwn(stubs, specifier))
      return { url: 'data:text/javascript,' + encodeURIComponent(stubs[specifier]), shortCircuit: true };
    return next(specifier, context);
  },
});
const { findElan, runEditor } = await import('../src/editor.mjs');

const root = mkdtempSync(join(tmpdir(), 'lasm-editor-setup-'));
test.after(() => rmSync(root, { recursive: true, force: true }));
let n = 0;
const elanName = process.platform === 'win32' ? 'elan.exe' : 'elan';
function fixture({ elan = true, override } = {}) {
  const base = join(root, String(++n)), elanHome = join(base, 'elan'), project = join(base, 'app');
  mkdirSync(project, { recursive: true });
  if (elan) { mkdirSync(join(elanHome, 'bin'), { recursive: true }); writeFileSync(join(elanHome, 'bin', elanName), ''); }
  if (override) writeFileSync(join(elanHome, 'settings.toml'), `[overrides]\n${JSON.stringify(project)} = "${override}"\n`);
  return { base, elanHome, project, env: { ELAN_HOME: elanHome, PATH: '' } };
}
const lean = { distribution: 'tiers', prefix: '/derived/0123456789abcdef', executionPrefix: '/derived/0123456789abcdef', version: '4.35.0' };

beforeEach(() => {
  globalThis.editorStandIns = {
    findApplicationProject: () => undefined,
    lakeCalls: [],
    requiresLakePackage: () => true,
    addLakeRequire: project => { globalThis.editorStandIns.lakeCalls.push(['addLakeRequire', project]); return true; },
    ensureLakeLibrary: (project, prefix) => { globalThis.editorStandIns.lakeCalls.push(['ensureLakeLibrary', project, prefix]); return { required: true }; },
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
});

test('lasm editor: the directory with a lakefile, or the project around it; its exit code', async () => {
  const { project, env } = fixture();
  const printed = [], calls = [];
  const options = { env, log: line => printed.push(line), run: (file, args) => calls.push(args), provision: async (p, o) => { assert.equal(p, project); o.progress({ stage: 'Provisioning Lean' }); return lean; } };
  await assert.rejects(runEditor({ input: project }, options), { message: `lasm editor works in a Lake project (a directory with lakefile.toml); ${project} is not in one.` });
  let looked;
  globalThis.editorStandIns.findApplicationProject = source => { looked = source; return undefined; };
  await assert.rejects(runEditor({ input: join(project, 'sub') }, options), /is not in one/);
  assert.equal(looked, join(project, 'sub', 'Main.lean'));
  for (const lakefile of ['lakefile.toml', 'lakefile.lean']) {
    rmSync(join(project, 'lakefile.toml'), { force: true }); rmSync(join(project, 'lakefile.lean'), { force: true });
    rmSync(join(project, 'lean-toolchain'), { force: true });
    writeFileSync(join(project, lakefile), '');
    printed.length = 0;
    assert.equal(await runEditor({ input: project }, options), 0);
    assert.deepEqual(printed, ['[lasm] Provisioning Lean',
      `[lasm] Editor: added Lasm's library to lakefile.toml ([[require]] "lasm", path .lake/lasm-library), so Lake builds its modules on first import, in the editor too.`,
      "[lasm] Editor: wrote lean-toolchain (leanprover/lean4:v4.35.0), the Lean that Lasm's library is compiled with.",
      "[lasm] Editor: the Lean editor resolves `import Lasm.*` in app with the project's own Lean (lean-toolchain, through elan) and Lasm's Lake package (.lake/lasm-library); restart its Lean server if it is open. Lasm changes nothing in elan."]);
    assert.equal(readFileSync(join(project, 'lean-toolchain'), 'utf8'), 'leanprover/lean4:v4.35.0\n');
    // Lasm's Lake package: required in the lakefile, linked, and left to Lake.
    assert.deepEqual(globalThis.editorStandIns.lakeCalls.slice(-2), [['addLakeRequire', project], ['ensureLakeLibrary', project, lean.prefix]]);
  }
  // A project's own lean-toolchain stays; a require already there is not added again; elan is never called.
  writeFileSync(join(project, 'lean-toolchain'), 'leanprover/lean4:v4.35.0 # mine\n');
  globalThis.editorStandIns.addLakeRequire = () => false;
  globalThis.editorStandIns.findApplicationProject = () => project;
  printed.length = 0;
  assert.equal(await runEditor({ input: join(project, 'deeper') }, options), 0);
  assert.equal(readFileSync(join(project, 'lean-toolchain'), 'utf8'), 'leanprover/lean4:v4.35.0 # mine\n');
  assert.equal(printed.length, 2);
  assert.deepEqual(calls, []);
  const cwd = process.cwd();
  process.chdir(project);
  try { assert.equal(await runEditor(undefined, options), 0); } finally { process.chdir(cwd); }
});

test('lasm editor removes an older Lasm\'s elan override, and exits 1 when elan fails or is missing', async () => {
  const { project, env, elanHome } = fixture({ override: 'lasm-4.35.0-a88ecf8bf14e' });
  writeFileSync(join(project, 'lakefile.toml'), '');
  writeFileSync(join(project, 'lean-toolchain'), 'leanprover/lean4:v4.35.0\n');
  const printed = [], calls = [];
  const options = { env, log: line => printed.push(line), provision: async () => lean };
  assert.equal(await runEditor({ input: project }, { ...options, run: (file, args, o) => { calls.push([file, args, o.cwd]); } }), 0);
  assert.deepEqual(calls, [[join(elanHome, 'bin', elanName), ['override', 'unset', '--path', project], project]]);
  assert.ok(printed.some(line => /^\[lasm\] Editor: removed this directory's elan override to Lasm's toolchain lasm-4\.35\.0-a88ecf8bf14e/.test(line)), printed.join('\n'));
  assert.match(printed.at(-1), /Lasm changes nothing in elan\.$/);
  printed.length = 0;
  assert.equal(await runEditor({ input: project }, { ...options, run: () => { throw Object.assign(new Error('x'), { stderr: 'error: denied' }); } }), 1);
  assert.match(printed.at(-1), /could not remove this directory's elan override .*\(error: denied\)/);
  // Without elan: how to get the editor, exit 1.
  const bare = fixture({ elan: false });
  writeFileSync(join(bare.project, 'lakefile.toml'), '');
  printed.length = 0;
  assert.equal(await runEditor({ input: bare.project }, { ...options, env: { ELAN_HOME: join(bare.base, 'none'), PATH: '' } }), 1);
  assert.match(printed.at(-1), /install the Lean 4 extension for VS Code \(it installs elan\), then run `npx lasm editor`/);
  assert.ok(existsSync(join(bare.project, 'lean-toolchain')));
});
