import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, readFileSync, rmSync, renameSync, symlinkSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { readWasmtimeArtifact, hashWasmtimeFile, wasmtimeHostFiles, wasmtimeCpuTarget } from '../src/wasmtime-artifact.mjs';
import { applicationHostFiles } from '../src/application-output.mjs';
import { isolatedImportFailures } from './helpers/isolated-import.mjs';

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

// Behavioural (docs/TESTING.md#test-quality-audit): a standalone deployment's
// host files alone, outside the checkout, loaded by Node's module loader.
test('standalone deployment carries every local JavaScript dependency', () => {
  const names = [...new Set([...applicationHostFiles, ...wasmtimeHostFiles])];
  assert.deepEqual(isolatedImportFailures(names), []);
});

// Each check of the application's native files on its own (docs/TESTING.md#mutation-testing).
test('artifact checks: Lean version form, schema, backend, sizes and links', async t => {
  const { root, manifest, save } = await fixture(t);
  for (const leanVersion of ['4.34', 'v4.34.1', '4.34.1-rc1', '4.34.1 ', '14.34.1x', 'a4.34.1']) {
    manifest.leanVersion = leanVersion; save();
    await assert.rejects(readWasmtimeArtifact(root, 'linux', 'x64'), { message: 'This Wasmtime application does not match the current native platform' }, leanVersion);
  }
  for (const leanVersion of ['10.234.15', '4.34.1']) { manifest.leanVersion = leanVersion; save(); assert.equal((await readWasmtimeArtifact(root, 'linux', 'x64')).leanVersion, leanVersion); }
  for (const [key, value] of [['backend', 'wasmtime-48.0.0'], ['schema', 3]]) {
    const previous = manifest[key]; manifest[key] = value; save();
    await assert.rejects(readWasmtimeArtifact(root, 'linux', 'x64'), /native platform/);
    manifest[key] = previous;
  }
  save();
  assert.deepEqual(await readWasmtimeArtifact(root), manifest, 'this process\'s platform by default');
  const original = manifest.files['program.cwasm'];
  for (const value of [{ ...original, bytes: 0 }, { ...original, sha256: original.sha256 + 'a' }, { ...original, sha256: 'a' + original.sha256 }, {}]) {
    manifest.files['program.cwasm'] = value; save();
    await assert.rejects(readWasmtimeArtifact(root, 'linux', 'x64'), { message: 'Invalid Wasmtime application file identity' });
  }
  // A size that differs, a directory or a link in place of a file.
  manifest.files['program.cwasm'] = { ...original, bytes: original.bytes + 1 }; save();
  await assert.rejects(readWasmtimeArtifact(root, 'linux', 'x64'), { message: 'Wasmtime application file changed: program.cwasm' });
  manifest.files['program.cwasm'] = original; save();
  const file = join(root, 'host/instance.so'), bytes = readFileSync(file);
  rmSync(file); mkdirSync(file);
  await assert.rejects(readWasmtimeArtifact(root, 'linux', 'x64'), { message: 'Wasmtime application file changed: host/instance.so' });
  rmSync(file, { recursive: true }); writeFileSync(join(root, 'elsewhere.so'), bytes); symlinkSync(join(root, 'elsewhere.so'), file);
  await assert.rejects(readWasmtimeArtifact(root, 'linux', 'x64'), { message: 'Wasmtime application file changed: host/instance.so' });
  delete manifest.files; save();
  await assert.rejects(readWasmtimeArtifact(root, 'linux', 'x64'), { message: 'Invalid Wasmtime application file manifest' });
});

test('artifact constants: the CPU target and the host files a standalone output ships', () => {
  assert.equal(wasmtimeCpuTarget, 'x86_64-unknown-linux-gnu');
  assert.deepEqual(wasmtimeHostFiles, ['wasmtime-runtime.mjs', 'wasmtime-worker.mjs', 'wasmtime-standalone.mjs', 'application-metadata-runtime.mjs',
    'wasmtime-artifact.mjs', 'wasmtime-native-stdio.mjs', 'wasmtime-guest-memory.mjs', 'wasmtime-wasi-stdio.mjs', 'wasmtime-console.mjs',
    'wasmtime-process-host.mjs', 'wasmtime-file-host.mjs', 'wasmtime-file-imports.mjs']);
});
