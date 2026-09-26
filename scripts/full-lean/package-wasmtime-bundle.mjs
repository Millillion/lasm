// Maintainer-only construction of native support for the managed compiler.
// Installed developers consume the completed bundle without invoking C tools.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, copyFileSync, readFileSync, writeFileSync, statSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { ensureResourceGuard } from './resource-guard.mjs';
import { hashWasmtimeFile as hashFile, wasmtimeCpuTarget } from '../../src/wasmtime-artifact.mjs';
import { wasmtimeBundleFiles, verifyWasmtimeBundle } from '../../src/wasmtime-bundle.mjs';

await ensureResourceGuard();
const [outputArg, ...extra] = process.argv.slice(2);
assert.ok(outputArg && !extra.length, 'Supply NEW_OUTPUT');
assert.equal(process.platform + '-' + process.arch, 'linux-x64');
const root = fileURLToPath(new URL('../..', import.meta.url)), output = resolve(outputArg);
assert.ok(!existsSync(output), 'Keep previous native bundles'); mkdirSync(output, { recursive: true });
const bundle = join(output, 'linux-x64'); mkdirSync(bundle);
const names = ['wasmtime-compile-lean.c', 'wasmtime-instantiate-lean.c', 'wasmtime-native-api.c',
  'wasmtime-process-setup.c', 'wasmtime-engine-config.h', 'wasmtime-main-symbols.h', 'wasmtime-canonical-imports.h'];
const inputs = [fileURLToPath(import.meta.url), join(root, 'src/wasmtime-bundle.mjs'),
  join(root, 'src/wasmtime-artifact.mjs'), join(root, 'src/application-files.mjs'),
  ...names.map(name => join(root, 'scripts/full-lean/probes', name))];
const identities = Object.fromEntries(await Promise.all(inputs.map(async name => [name, await hashFile(name)])));
const report = { scope: 'Verified Linux x64 maintainer native bundle; installation, managed CLI and other platforms require separate acceptance',
  inputs: identities, commands: [], resourceReport: process.env.LASM_RESOURCE_REPORT, passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(program, args) {
  const result = spawnSync(program, args, { cwd: root, encoding: 'utf8', timeout: 180_000,
    killSignal: 'SIGKILL', maxBuffer: 1024 * 1024 });
  report.commands.push({ program, args, code: result.status, signal: result.signal,
    error: result.error?.message, stdout: result.stdout, stderr: result.stderr }); save();
  assert.ifError(result.error); assert.equal(result.status, 0, result.stderr); return result.stdout;
}
save();
try {
  run('python3', ['-I', '-B', join(root, 'scripts/full-lean/prepare-wasmtime-probe.py')]);
  const sdk = join(root, '.cache/wasmtime-49.0.0');
  const sdkReceipt = JSON.parse(readFileSync(join(sdk, 'download.json')));
  copyFileSync(join(sdk, 'lib/libwasmtime.so'), join(bundle, 'libwasmtime.so'));
  copyFileSync(join(sdk, 'LICENSE'), join(bundle, 'LICENSE.wasmtime'));
  for (const [source, name] of [['wasmtime-compile-lean.c', 'compiler.so'], ['wasmtime-instantiate-lean.c', 'instance.so']]) {
    run('cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-shared', '-fPIC',
      '-I' + join(sdk, 'include'), join(root, 'scripts/full-lean/probes', source),
      '-L' + bundle, '-lwasmtime', '-Wl,-rpath,$ORIGIN', '-o', join(bundle, name)]);
    const linked = run('readelf', ['-d', join(bundle, name)]);
    assert.ok(linked.includes('[$ORIGIN]') && !linked.includes(root));
  }
  const headers = join(root, '.cache/js-runtimes/node-26.10.0/include/node');
  for (const name of ['node_api.h', 'node_api_types.h', 'js_native_api.h', 'js_native_api_types.h'])
    identities[join(headers, name)] = await hashFile(join(headers, name));
  run('cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-shared', '-fPIC',
    '-I' + headers, join(root, 'scripts/full-lean/probes/wasmtime-native-api.c'), '-ldl', '-o', join(bundle, 'native-api.node')]);
  const control = join(output, 'process-setup-control');
  run('cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror',
    join(root, 'scripts/full-lean/probes/wasmtime-process-setup.c'), join(bundle, 'instance.so'),
    '-Wl,-rpath,' + bundle, '-o', control]);
  assert.match(run(control, []), /base pages prepared without inherited setup; resource limits preserved/);
  const files = {};
  for (const name of wasmtimeBundleFiles)
    files[name] = { bytes: statSync(join(bundle, name)).size, sha256: await hashFile(join(bundle, name)) };
  const manifest = { schema: 1, backend: 'wasmtime-49.0.0', platform: process.platform, arch: process.arch,
    cpuTarget: wasmtimeCpuTarget, cpuFeatures: 'baseline', files,
    sources: Object.fromEntries(names.map(name => [name, identities[join(root, 'scripts/full-lean/probes', name)]])),
    sdk: { archiveSha256: sdkReceipt.archiveSha256, url: sdkReceipt.url } };
  writeFileSync(join(bundle, 'manifest.json'), JSON.stringify(manifest, null, 2) + '\n');
  const expected = { manifestSha256: await hashFile(join(bundle, 'manifest.json')) };
  await verifyWasmtimeBundle(bundle, expected);
  report.bundle = bundle; report.manifest = manifest; report.catalogEntry = expected; report.passed = true;
} finally {
  report.inputsUnchanged = true;
  for (const [name, sha256] of Object.entries(identities))
    if (await hashFile(name) !== sha256) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
