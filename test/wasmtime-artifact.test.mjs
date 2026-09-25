import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, readFileSync, rmSync, renameSync, symlinkSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { readWasmtimeArtifact, hashWasmtimeFile, wasmtimeHostFiles, wasmtimeCpuTarget } from '../src/wasmtime-artifact.mjs';
import { applicationHostFiles } from '../src/application-output.mjs';

async function fixture(t) {
  const root = mkdtempSync(join(tmpdir(), 'lasm-native-cache-'));
  t.after(() => rmSync(root, { recursive: true, force: true }));
  mkdirSync(join(root, 'host'));
  const files = {};
  for (const name of ['program.cwasm', 'host/instance.so', 'host/native-api.node', 'host/libwasmtime.so']) {
    const bytes = Buffer.from('fixture bytes for ' + name); writeFileSync(join(root, name), bytes);
    files[name] = { bytes: bytes.length, sha256: await hashWasmtimeFile(join(root, name)) };
  }
  const manifest = { schema: 2, backend: 'wasmtime-49.0.0', platform: 'linux', arch: 'x64',
    cpuTarget: wasmtimeCpuTarget, cpuFeatures: 'baseline', leanVersion: '4.34.1', files };
  const save = () => writeFileSync(join(root, 'wasmtime.json'), JSON.stringify(manifest));
  save(); return { root, manifest, save };
}

test('native cache and libraries verify after relocation without build paths', async t => {
  const { root, manifest } = await fixture(t), moved = root + ' moved λ';
  renameSync(root, moved); t.after(() => rmSync(moved, { recursive: true, force: true }));
  assert.deepEqual(await readWasmtimeArtifact(moved, 'linux', 'x64'), manifest);
});

test('cache and native library changes reject before unsafe deserialization', async t => {
  const { root, manifest } = await fixture(t);
  for (const name of Object.keys(manifest.files)) {
    const path = join(root, name), original = readFileSync(path), changed = Buffer.from(original);
    changed[0] ^= 1; writeFileSync(path, changed);
    await assert.rejects(readWasmtimeArtifact(root, 'linux', 'x64'), /file changed/);
    writeFileSync(path, original);
  }
});

test('different native platforms and malformed file identities reject', async t => {
  const { root, manifest, save } = await fixture(t);
  for (const [platform, arch] of [['linux', 'arm64'], ['darwin', 'x64'], ['win32', 'x64']])
    await assert.rejects(readWasmtimeArtifact(root, platform, arch), /native platform/);
  const original = manifest.files['program.cwasm'];
  for (const value of [null, { ...original, bytes: -1 }, { ...original, bytes: 1.5 }, { ...original, sha256: '../file' }]) {
    manifest.files['program.cwasm'] = value; save();
    await assert.rejects(readWasmtimeArtifact(root, 'linux', 'x64'), /file identity/);
  }
  manifest.files['program.cwasm'] = original;
  manifest.files['../external'] = original; save();
  await assert.rejects(readWasmtimeArtifact(root, 'linux', 'x64'), /file manifest/);
});

test('a redirected cache path is not accepted as the owned native file', async t => {
  const { root } = await fixture(t), original = join(root, 'program.cwasm');
  renameSync(original, original + '.other'); symlinkSync('program.cwasm.other', original);
  await assert.rejects(readWasmtimeArtifact(root, 'linux', 'x64'), /file changed/);
});

test('native-inferred and mismatched CPU caches cannot claim baseline deployment', async t => {
  const { root, manifest, save } = await fixture(t);
  for (const cpuTarget of [undefined, 'native', 'aarch64-unknown-linux-gnu']) {
    manifest.cpuTarget = cpuTarget; save();
    await assert.rejects(readWasmtimeArtifact(root, 'linux', 'x64'), /baseline CPU target/);
  }
  manifest.cpuTarget = wasmtimeCpuTarget;
  for (const cpuFeatures of [undefined, 'native', 'avx2']) {
    manifest.cpuFeatures = cpuFeatures; save();
    await assert.rejects(readWasmtimeArtifact(root, 'linux', 'x64'), /baseline CPU target/);
  }
  manifest.cpuFeatures = 'baseline'; manifest.schema = 1; save();
  await assert.rejects(readWasmtimeArtifact(root, 'linux', 'x64'), /native platform/);
});

test('standalone deployment carries every local JavaScript dependency', () => {
  const names = new Set([...applicationHostFiles, ...wasmtimeHostFiles]);
  for (const name of wasmtimeHostFiles) {
    const source = readFileSync(new URL('../src/' + name, import.meta.url), 'utf8');
    assert.doesNotMatch(source, /from ['"]\.\.\//, name + ' must not depend on checkout parents');
    for (const [, dependency] of source.matchAll(/(?:from\s*|import\s*\(|require\s*\(|new URL\s*\()\s*['"]\.\/([^'"]+\.(?:mjs|cjs))['"]/g))
      assert.ok(names.has(dependency) || dependency.startsWith('native/'), `${name} needs ${dependency}`);
  }
});
