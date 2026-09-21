// Supplementary full-runtime differential probe; upstream tests are untouched.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync, createReadStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { root, leanCommit, resolveLean } from '../../src/toolchain.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [outputArg, ...prefixArgs] = process.argv.slice(2);
if (!outputArg || !prefixArgs.length) throw new Error('Supply NEW_OUTPUT and full-toolchain prefixes sharing one frozen build');
const output = resolve(outputArg), prefixes = prefixArgs.map(p => resolve(p));
assert.ok(!existsSync(output), 'Preserve earlier evidence by using a new output');
mkdirSync(output, { recursive: true });
const configs = prefixes.map(p => JSON.parse(readFileSync(join(p, 'toolchain.json'))));
const config = configs[0];
for (const candidate of configs) {
  assert.equal(candidate.build, config.build);
  assert.equal(candidate.memoryMode, 1);
  assert.equal(candidate.leanCommit, leanCommit);
}
async function hash(path) {
  const digest = createHash('sha256');
  for await (const bytes of createReadStream(path)) digest.update(bytes);
  return digest.digest('hex');
}
const snapshot = JSON.parse(readFileSync(join(config.build, 'snapshot.json')));
for (const [name, expected] of Object.entries(snapshot.files))
  assert.equal(await hash(join(config.build, name)), expected, `Frozen input changed: ${name}`);
const fixture = join(root, 'scripts/full-lean/probes/HostPlatform.lean');
const patch = join(root, 'scripts/full-lean/patches/lean-4.32.0-host-platform.patch');
const original = join(root, '.cache/lean4-4.32.0/src/runtime/platform.cpp');
const evidence = {
  leanCommit, startedAt: new Date().toISOString(), resourceReport: process.env.LASM_RESOURCE_REPORT,
  scope: 'Actual Lean path operations under controlled host platform values. Linux execution does not validate native Windows or macOS filesystem behavior.',
  fixture, fixtureSha256: await hash(fixture), original, originalSha256: await hash(original),
  patchSha256: await hash(patch), hostLibrarySha256: await hash(join(root, 'scripts/full-lean/host-library.js')),
  configs, commands: [], results: [],
};
const save = () => writeFileSync(join(output, 'comparison.json'), JSON.stringify(evidence, null, 2) + '\n');
function run(label, command, options = {}) {
  const started = performance.now();
  const result = spawnSync(command[0], command.slice(1), { encoding: 'utf8', maxBuffer: 256 * 1024,
    timeout: 300_000, killSignal: 'SIGKILL',
    env: { ...process.env, BINARYEN_CORES: '1', EMCC_CORES: '1', CMAKE_BUILD_PARALLEL_LEVEL: '1' }, ...options });
  const record = { label, command, seconds: (performance.now() - started) / 1000,
    code: result.status, signal: result.signal, error: result.error?.message,
    stdout: result.stdout, stderr: result.stderr };
  evidence.commands.push(record); save();
  console.log(`${label}: exit ${record.code} (${record.seconds.toFixed(2)} s)`);
  assert.equal(record.error, undefined, label);
  assert.equal(record.code, 0, `${label}: ${record.stderr}`);
  return record;
}
const targetFrom = prefix => readFileSync(join(prefix, 'include/lean/version.h'), 'utf8')
  .match(/^#define LEAN_PLATFORM_TARGET "([^"]*)"$/m)?.[1];
const frozenTarget = targetFrom(config.build), nativeTarget = targetFrom(resolveLean(root).prefix);
assert.equal(typeof frozenTarget, 'string');
assert.equal(typeof nativeTarget, 'string');
const expected = (platform, target = frozenTarget, emscripten = true) => [
  `windows=${platform === 'win32'};mac=${platform === 'darwin'};bits=64`,
  platform === 'win32' ? 'data\\todos.json' : 'data/todos.json',
  String(platform === 'win32'), platform === 'win32' ? 'C:\\data' : 'none',
  `target=${target};emscripten=${emscripten}`, '',
].join('\n');
try {
  const native = run('native control', [resolveLean(root).lean, '--run', fixture]);
  assert.equal(native.stdout, expected(process.platform, nativeTarget, false));
  evidence.compilerTargets = {};
  for (const mode of [0, 1, 2]) {
    const result = run(`SDK memory${mode} target`, [join(config.sdk, 'upstream/emscripten/emcc'),
      `-sMEMORY64=${mode}`, '--print-target-triple']);
    evidence.compilerTargets[mode] = result.stdout.trim();
  }
  run('generate C with full Wasm compiler', [join(prefixes[0], 'bin/lean'), '-c', join(output, 'main.c'), fixture]);
  const flagsText = run('upstream link flags', [join(prefixes[0], 'bin/leanc'), '--print-ldflags']).stdout.trim();
  assert.ok(flagsText && !/["'`\n\r]/.test(flagsText), 'Unexpected link flag format');
  const flags = flagsText.split(/\s+/);
  const mainObject = join(output, 'main.o');
  run('compile generated C', [join(prefixes[0], 'bin/clang'), '-c', join(output, 'main.c'),
    '-o', mainObject, '-O2', '-I' + join(config.build, 'include')]);
  const patchedDir = join(output, 'patched-source');
  mkdirSync(join(patchedDir, 'src/runtime'), { recursive: true });
  writeFileSync(join(output, 'githash.h'), `#define LEAN_GITHASH "${leanCommit}"\n`);
  writeFileSync(join(patchedDir, 'src/runtime/platform.cpp'), readFileSync(original));
  run('apply recorded runtime patch to private copy', ['patch', '--batch', '--forward', '-p1'],
    { cwd: patchedDir, input: readFileSync(patch, 'utf8') });
  const library = readFileSync(join(root, 'scripts/full-lean/host-library.js'), 'utf8');
  const mapping = library.match(/lasm_host_platform:\s*(function \(\) \{[\s\S]*?\n  \}),/)?.[1];
  assert.ok(mapping, 'Cannot isolate the production host mapping');
  // The mapping body is the production implementation. Only its process input
  // is controlled here, locally inside this private test import.
  const testLibrary = join(output, 'controlled-platform.js');
  writeFileSync(testLibrary, `addToLibrary({ lasm_host_platform__sig: 'i', lasm_host_platform: function () {
    var process = { platform: require('node:process').env.LASM_PROBE_PLATFORM };
    return (${mapping})();
  }});\n`);
  for (const [variant, source] of [['original', original], ['patched', join(patchedDir, 'src/runtime/platform.cpp')]]) {
    const object = join(output, variant + '-platform.o'), executable = join(output, variant);
    run(`${variant} platform object`, [join(prefixes[0], 'bin/clang++'), '-c', source, '-o', object,
      '-O2', '-std=c++20', '-fPIC', '-DNDEBUG', '-DLEAN_EMSCRIPTEN', '-DLEAN_MULTI_THREAD',
      '-DLEAN_USE_GMP', '-DLEAN_BUILD_TYPE="Release"', '-DLEAN_EXPORTING',
      '-I' + config.source, '-I' + output, '-I' + join(config.build, 'include'),
      '-I' + join(root, '.cache/gmp-wasm64/include')]);
    // Explicit definitions precede the static runtime archive, replacing its
    // platform object while leaving every other runtime object unchanged.
    run(`${variant} full runtime link`, [join(prefixes[0], 'bin/clang'), '-o', executable,
      mainObject, object, ...flags, '--js-library', testLibrary, '-Wno-unused-command-line-argument']);
    for (const candidate of configs) {
      for (const platform of ['linux', 'win32', 'darwin']) {
        const result = run(`${variant}/${candidate.engine}/${platform}`,
          [candidate.executable, ...candidate.engineArgs, executable + '.cjs'], {
            env: { ...process.env, ...candidate.engineEnvironment, LASM_PROBE_PLATFORM: platform,
              LASM_FULL_HOST_MODULE: pathToFileURL(join(config.build, 'host/node-host.mjs')).href,
              LASM_FULL_APP_PATH: executable, LEAN_STACK_SIZE_KB: '65536', LEAN_NUM_THREADS: '4' },
          });
        assert.equal(result.stderr, '');
        const matchesHost = result.stdout === expected(platform);
        evidence.results.push({ variant, engine: candidate.engine, platform, matchesHost,
          stdout: result.stdout, expected: expected(platform), seconds: result.seconds });
        save();
        assert.equal(result.stdout, expected(variant === 'patched' ? platform : 'linux'));
      }
    }
  }
  evidence.passed = true;
} finally {
  evidence.fixtureUnchanged = await hash(fixture) === evidence.fixtureSha256;
  evidence.originalSourceUnchanged = await hash(original) === evidence.originalSha256;
  evidence.finishedAt = new Date().toISOString(); save();
}
assert.ok(evidence.fixtureUnchanged && evidence.originalSourceUnchanged);
