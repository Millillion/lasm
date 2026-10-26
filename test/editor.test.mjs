import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdirSync, mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { autoSetupEditor, editorToolchainName, findElan, setupEditor } from '../src/editor.mjs';

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
