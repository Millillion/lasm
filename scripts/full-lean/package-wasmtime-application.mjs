// Build a relocatable preview from a completed, verified native compilation.
// This maintainer entry point is not yet the managed application CLI backend.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync, copyFileSync, statSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { ensureResourceGuard } from './resource-guard.mjs';
import { copyApplicationHost, applicationHostFiles } from '../../src/application-output.mjs';
import { hashWasmtimeFile as hashFile, readWasmtimeArtifact, wasmtimeHostFiles } from '../../src/wasmtime-artifact.mjs';

await ensureResourceGuard();
const [compilationArg, outputArg, ...extra] = process.argv.slice(2);
assert.ok(compilationArg && outputArg && !extra.length, 'Supply COMPLETED_COMPILATION NEW_OUTPUT');
assert.equal(process.platform + '-' + process.arch, 'linux-x64');
const root = fileURLToPath(new URL('../..', import.meta.url)), output = resolve(outputArg);
assert.ok(!existsSync(output), 'Keep earlier deployments and failed attempts');
const compilationFile = resolve(compilationArg), compilation = JSON.parse(readFileSync(compilationFile));
const guard = JSON.parse(readFileSync(compilation.resourceReport));
assert.ok(compilation.passed && compilation.inputUnchanged && compilation.harnessUnchanged);
assert.ok(guard.unitReleased && !guard.resourceLimited); assert.deepEqual(guard.result, { code: 0, signal: null });
assert.equal(await hashFile(compilation.cache.file), compilation.cache.sha256);
const names = wasmtimeHostFiles;
const sources = [fileURLToPath(import.meta.url), ...[...names, ...applicationHostFiles].map(name => join(root, 'src', name)),
  ...['wasmtime-instantiate-lean.c', 'wasmtime-canonical-imports.h', 'wasmtime-native-api.c', 'wasmtime-process-setup.c']
    .map(name => join(root, 'scripts/full-lean/probes', name))];
const hashes = Object.fromEntries(await Promise.all(sources.map(async path => [path, await hashFile(path)])));
mkdirSync(output, { recursive: true });
const dist = join(output, 'dist'), host = join(dist, 'host');
const report = { scope: 'Relocatable standalone Wasmtime preview on Linux x64; maintainer packaging, not managed CLI or complete API acceptance',
  compilation: compilationFile, compilationSha256: await hashFile(compilationFile), cache: compilation.cache,
  inputs: hashes, resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], passed: false,
  limitations: ['Native compilation still uses maintainer C tools.',
    'Native caches currently infer build-host CPU features; relocation tests do not establish portability to a different CPU.',
    'The experimental C loader still rejects empty environments and environment blocks above one MiB; general environment acceptance remains open.',
    'Complete WASI descriptors, dynamic imports, keepalive/cancellation and reusable disposal remain unimplemented.',
    'This preview packages one native platform and no additional runtime Lean module data.'] };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(program, args, timeout = 180_000) {
  const result = spawnSync(program, args, { cwd: root, encoding: 'utf8', timeout,
    killSignal: 'SIGKILL', maxBuffer: 256 * 1024, env: { ...process.env, RAYON_NUM_THREADS: '1' } });
  report.commands.push({ program, args, code: result.status, signal: result.signal,
    error: result.error?.message, stdout: result.stdout, stderr: result.stderr }); save();
  assert.ifError(result.error); assert.equal(result.status, 0, result.stderr);
}
save();
try {
  run('python3', ['-I', '-B', join(root, 'scripts/full-lean/prepare-wasmtime-probe.py')]);
  copyApplicationHost(dist);
  for (const name of names) copyFileSync(join(root, 'src', name), join(host, name));
  const sdk = join(root, '.cache/wasmtime-49.0.0');
  report.sdk = JSON.parse(readFileSync(join(sdk, 'download.json')));
  copyFileSync(join(sdk, 'lib/libwasmtime.so'), join(host, 'libwasmtime.so'));
  mkdirSync(join(host, 'licenses')); copyFileSync(join(sdk, 'LICENSE'), join(host, 'licenses/wasmtime-LICENSE'));
  run('cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-shared', '-fPIC',
    '-I' + join(sdk, 'include'), join(root, 'scripts/full-lean/probes/wasmtime-instantiate-lean.c'),
    '-L' + join(host), '-lwasmtime', '-Wl,-rpath,$ORIGIN', '-o', join(host, 'instance.so')]);
  const setupControl = join(output, 'process-setup-control');
  run('cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror',
    join(root, 'scripts/full-lean/probes/wasmtime-process-setup.c'),
    join(host, 'instance.so'), '-Wl,-rpath,' + host, '-o', setupControl]);
  run(setupControl, []);
  assert.match(report.commands.at(-1).stdout, /base pages prepared without inherited setup; resource limits preserved/);
  const headers = join(root, '.cache/js-runtimes/node-26.10.0/include/node');
  report.nodeHeaders = Object.fromEntries(await Promise.all(
    ['node_api.h', 'node_api_types.h', 'js_native_api.h', 'js_native_api_types.h']
      .map(async name => [name, await hashFile(join(headers, name))])));
  run('cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-shared', '-fPIC', '-I' + headers,
    join(root, 'scripts/full-lean/probes/wasmtime-native-api.c'), '-ldl', '-o', join(host, 'native-api.node')]);
  copyFileSync(compilation.cache.file, join(dist, 'program.cwasm'));
  const files = {};
  for (const name of ['program.cwasm', 'host/instance.so', 'host/native-api.node', 'host/libwasmtime.so'])
    files[name] = { bytes: statSync(join(dist, name)).size, sha256: await hashFile(join(dist, name)) };
  const manifest = { schema: 1, backend: 'wasmtime-49.0.0', leanVersion: compilation.build.lean,
    platform: process.platform, arch: process.arch, files };
  writeFileSync(join(dist, 'wasmtime.json'), JSON.stringify(manifest, null, 2) + '\n');
  writeFileSync(join(dist, 'package.json'), JSON.stringify({ private: true, type: 'module' }) + '\n');
  writeFileSync(join(dist, 'main.mjs'), `import { runWasmtimeApplication } from './host/wasmtime-standalone.mjs';
if (process.versions.deno && process.env.LASM_DENO_CHILD_ENV !== undefined) {
  const saved = JSON.parse(process.env.LASM_DENO_CHILD_ENV);
  if (!Array.isArray(saved) || saved.length !== 2 || saved.some(value => value !== null && typeof value !== 'string'))
    throw new Error('Invalid private child environment transport');
  for (const [index, key] of ['DENO_DISABLE_NODE_SHIM', 'LASM_DENO_CHILD_ENV'].entries()) {
    if (saved[index] === null) delete process.env[key]; else process.env[key] = saved[index];
  }
}
await runWasmtimeApplication(import.meta.url);
`);
  assert.deepEqual(await readWasmtimeArtifact(dist), manifest);
  run('readelf', ['-d', join(host, 'instance.so')]);
  const dynamic = report.commands.at(-1).stdout;
  assert.ok(dynamic.includes('[$ORIGIN]') && !dynamic.includes(root), 'The loader must resolve its colocated Wasmtime library');
  report.dist = dist; report.manifest = manifest;
  report.manifestSha256 = await hashFile(join(dist, 'wasmtime.json'));
  report.passed = true;
} finally {
  report.inputsUnchanged = await hashFile(compilationFile) === report.compilationSha256
    && await hashFile(compilation.cache.file) === compilation.cache.sha256;
  for (const [path, sha256] of Object.entries(hashes))
    if (await hashFile(path) !== sha256) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
