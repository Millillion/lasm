import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync, statSync, statfsSync,
  createReadStream, createWriteStream, copyFileSync, linkSync } from 'node:fs';
import { createGunzip } from 'node:zlib';
import { pipeline } from 'node:stream/promises';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { provisionLean } from '../../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../../src/application-sources.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [outputArg, toolchainCacheArg, restoredCacheArg, profile = 'startup', ...extra] = process.argv.slice(2);
assert.ok(outputArg && toolchainCacheArg && !extra.length,
  'Supply NEW_OUTPUT EXISTING_TOOLCHAIN_CACHE [VERIFIED_RESTORED_CACHE] [startup|high-allocation]');
assert.ok(['startup', 'high-allocation'].includes(profile));
assert.equal(process.platform + '-' + process.arch, 'linux-x64');
const root = fileURLToPath(new URL('../..', import.meta.url)), output = resolve(outputArg);
const toolchainCache = resolve(toolchainCacheArg);
assert.ok(existsSync(join(toolchainCache, 'artifacts',
  '02c08f3cdf73ec241ce9ad49e942b2dbea128646b23cb2872983d452437a9ba1', '.lasm-artifact.json')),
  'Use the existing verified native toolchain; this probe must not start a second installation');
assert.ok(!existsSync(output), 'Preserve earlier experiments');
const space = statfsSync(root);
assert.ok(space.bavail * space.bsize >= 5 * 1024 ** 3, 'Keep four GiB free plus cache restoration headroom');
const evidence = JSON.parse(readFileSync(join(root, 'docs/evidence/wasmtime-real-lean-compilation-2026-09-24.json')));
const previous = evidence.compilationAttempts.at(-1).result;
assert.ok(previous.passed && previous.inputUnchanged && previous.harnessUnchanged);
const cacheIdentity = previous.cache;
assert.equal(cacheIdentity.sha256, 'ce4a5bf674a239ae6346deb5fd8a7f89cf7e916b236bb8d429e3242bc604eed4');
const archiveReceipt = JSON.parse(readFileSync(join(root, '.work/product-acceptance/completed-wasmtime-archive-r1.json')));
const archive = archiveReceipt.files.find(row => row.originalSha256 === cacheIdentity.sha256);
assert.ok(archive?.verifiedDecompression);
assert.equal(await hashFile(archive.archive), archive.archiveSha256);
mkdirSync(output, { recursive: true });
const inputs = ['scripts/full-lean/probes/wasmtime-instantiate-lean.c',
  'scripts/full-lean/probes/wasmtime-instantiate-lean.mjs',
  'scripts/full-lean/probe-wasmtime-lean-instantiation.mjs', 'integration/fixtures/LeanPureExports.lean'];
const hashes = Object.fromEntries(await Promise.all(inputs.map(async path => [path, await hashFile(join(root, path))])));
const report = { scope: 'Instantiate the actual compiled const_fold module and compare pure runtime exports; actual startup/clock/memory metadata, other function imports reject, no application-main/API acceptance',
  inputs: hashes, build: previous.build, trustedCache: cacheIdentity, archive, toolchainCache, profile,
  resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], results: [], failures: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, program, args, environment = process.env, timeout = 90_000) {
  const result = spawnSync(program, args, { cwd: output, encoding: 'utf8', timeout,
    killSignal: 'SIGKILL', maxBuffer: 128 * 1024, env: { ...environment, RAYON_NUM_THREADS: '1' } });
  report.commands.push({ label, program, args, code: result.status, signal: result.signal,
    error: result.error?.message, stdout: result.stdout, stderr: result.stderr }); save();
  assert.ifError(result.error); assert.equal(result.status, 0, result.stderr);
  return result.stdout;
}
save();
try {
  run('verify Wasmtime SDK', 'python3', ['-I', '-B', join(root, 'scripts/full-lean/prepare-wasmtime-probe.py')]);
  const cache = join(output, 'trusted.cwasm');
  if (restoredCacheArg) {
    const restored = resolve(restoredCacheArg);
    assert.equal(statSync(restored).size, cacheIdentity.bytes);
    assert.equal(await hashFile(restored), cacheIdentity.sha256);
    linkSync(restored, cache); // Share immutable, byte-verified input; no old output changes.
    report.reusedCache = restored;
  } else {
    await pipeline(createReadStream(archive.archive), createGunzip(), createWriteStream(cache, { flags: 'wx' }));
  }
  assert.equal(await hashFile(cache), cacheIdentity.sha256); assert.equal(statSync(cache).size, cacheIdentity.bytes);
  report.restoredCache = { path: cache, sha256: cacheIdentity.sha256, bytes: statSync(cache).size }; save();
  writeFileSync(join(output, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
  const lean = await provisionLean(output, { cache: toolchainCache });
  const env = { ...nativeLeanEnvironment(lean), LEAN_NUM_THREADS: '1' };
  report.nativeLean = { version: lean.version, commit: lean.commit, identity: lean.identity };
  assert.equal(lean.version, previous.build.lean); assert.equal(lean.commit, previous.build.leanCommit);
  const source = join(output, 'LeanPureExports.lean');
  copyFileSync(join(root, inputs[3]), source);
  assert.equal(await hashFile(source), hashes[inputs[3]]);
  const oracle = run('native interpreted oracle', lean.lean, ['-Dlinter.all=false', '--run', source], env);
  const generated = join(output, 'oracle.c'), native = join(output, 'oracle-native');
  run('generate native oracle', lean.lean, ['-j1', '-Dlinter.all=false', '-Dcompiler.postponeCompile=false', '-c', generated, source], env);
  run('compile native oracle', join(lean.prefix, 'bin/leanc'), ['-O2', '-DNDEBUG', '-o', native, generated], env);
  assert.equal(run('native compiled oracle', native, [], env), oracle);
  assert.equal(oracle.trim().split('\n').length, 23);
  const oraclePath = join(output, 'oracle.txt'); writeFileSync(oraclePath, oracle);
  report.oracle = { cases: 23, stdout: oracle, nativeCompiledMatches: true };
  const sdk = join(root, '.cache/wasmtime-49.0.0'), helper = join(output, 'instance.so');
  report.helperInput = JSON.parse(readFileSync(join(sdk, 'download.json')));
  run('compile instantiation bridge', 'cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-shared', '-fPIC',
    '-I' + join(sdk, 'include'), join(root, inputs[0]), '-L' + join(sdk, 'lib'), '-lwasmtime',
    '-Wl,-rpath,' + join(sdk, 'lib'), '-o', helper]);
  report.helperSha256 = await hashFile(helper);
  for (const [engine, args] of [
    [join(root, '.cache/js-runtimes/node-26.10.0/bin/node'), ['--max-old-space-size=128']],
    [join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A', '--v8-flags=--max-old-space-size=128']],
    [join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
  ]) {
    try { report.results.push(JSON.parse(run('pure runtime exports', engine,
      [...args, join(root, inputs[1]), helper, cache, cacheIdentity.sha256, oraclePath, profile]))); }
    catch (error) { report.failures.push({ engine, message: error.message }); }
    save();
  }
  assert.equal(report.failures.length, 0);
  assert.deepEqual(report.results.map(row => [row.engine, row.version]),
    [['node', '26.10.0'], ['deno', '2.9.7'], ['bun', '1.4.2']]);
  report.cacheUnchanged = await hashFile(cache) === cacheIdentity.sha256; assert.ok(report.cacheUnchanged);
  report.passed = true;
} catch (error) { report.error = { message: error.message, stack: error.stack }; throw error; }
finally {
  report.inputsUnchanged = true;
  for (const [path, digest] of Object.entries(hashes))
    if (await hashFile(join(root, path)) !== digest) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
