// A build prerequisite probe, not a replacement for any upstream Lean test.
import { mkdirSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';
import assert from 'node:assert/strict';
import { root } from '../../src/toolchain.mjs';
import { patchSdk } from './patch-sdk.mjs';
import { runtimeAbiExports } from './runtime-abi.mjs';

const output = resolve(process.argv[2] ?? join(root, '.work/full-engine-probe'));
mkdirSync(output, { recursive: true });
const sdk = process.env.LASM_EMSDK ?? join(root, '.cache/emsdk-6.0.9');
patchSdk(sdk);
const engines = [
  ['node', process.execPath, []],
  ['deno', process.env.LASM_DENO ?? join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
  ['bun', process.env.LASM_BUN ?? join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
];
const results = [];
const plugin = join(output, 'shared.so');
const exceptionPlugin = join(output, 'shared-exception.so');
for (const [source, library] of [['shared', plugin], ['shared-exception', exceptionPlugin]]) {
const pluginBuild = spawnSync(join(sdk, 'upstream/emscripten/em++'), [
  join(root, `scripts/full-lean/probes/${source}.cpp`), '-O1', '-pthread', '-fwasm-exceptions',
  '-sMEMORY64=2', '-sSIDE_MODULE=1', '-o', library,
], { encoding: 'utf8', timeout: 120_000 });
writeFileSync(join(output, source + '-build.log'), pluginBuild.stdout + pluginBuild.stderr);
assert.equal(pluginBuild.status, 0, pluginBuild.error?.message ?? pluginBuild.stderr);
}
const abiFile = join(output, 'runtime-abi-exports.json');
writeFileSync(abiFile, JSON.stringify(runtimeAbiExports(sdk, true), null, 2) + '\n');
const variants = [
  { name: 'threads32', source: 'threads', memory: 0, expected: 'caught exception\npthread joined\n' },
  { name: 'threads64', source: 'threads', memory: 2, expected: 'caught exception\npthread joined\n' },
  { name: 'host64', source: 'host', memory: 2, expected: 'asynchronous host bridge joined four threads\n' },
  { name: 'highmemory64', source: 'highmemory', memory: 2, expected: 'pthread and host access above 2 GiB passed\n' },
  { name: 'shutdown64', source: 'shutdown', memory: 2, repeats: 10, expected: 'thread shutdown passed\n' },
  { name: 'dylink64', source: 'dylink', memory: 2, expected: 'shared module data and function pointers passed\n' },
  { name: 'dylinkhost64', source: 'dylink-host', memory: 2, expected: 'dynamic loading progresses while a worker waits on host IO\n' },
  { name: 'dylinkexception64', source: 'dylink-exception', memory: 2, expected: 'C++ exceptions cross dynamically loaded module boundaries\n' },
  { name: 'sharedgrowth64', source: 'sharedgrowth', memory: 2, expected: 'blocked worker observes shared memory growth\n' },
];
for (const variant of variants) {
  const compiled = join(output, variant.name + '.cjs');
  const build = spawnSync(join(sdk, 'upstream/emscripten/em++'), [
    join(root, `scripts/full-lean/probes/${variant.source}.cpp`), '-O1', '-pthread', '-fwasm-exceptions',
    `-sMEMORY64=${variant.memory}`, `-DLASM_EXPECT_POINTER_BITS=${variant.memory ? 64 : 32}`,
    ...(variant.source === 'dylink' ? [plugin] : []),
    ...(variant.source === 'dylink-exception' ? [`-sEXPORTED_FUNCTIONS=@${abiFile}`, '-Wl,--export=__cpp_exception'] : []),
    '-sPTHREAD_POOL_SIZE=4', '-sALLOW_MEMORY_GROWTH=1', '-sGROWABLE_ARRAYBUFFERS=1', '-sEXIT_RUNTIME=1',
    '-sNODERAWFS=1', '-sPROXY_TO_PTHREAD=1', '-sMAIN_MODULE=2',
    '-sMAXIMUM_MEMORY=4294967296',
    '--pre-js', join(root, 'scripts/full-lean/emscripten-pre.js'),
    ...(['host', 'dylink-host'].includes(variant.source) ? ['--pre-js', join(root, 'scripts/full-lean/host-pre.js'),
      '--js-library', join(root, 'scripts/full-lean/host-library.js')] : []), '-o', compiled,
  ], { encoding: 'utf8', timeout: 120_000 });
  writeFileSync(join(output, variant.name + '-build.log'), build.stdout + build.stderr);
  assert.equal(build.status, 0, build.error?.message ?? build.stderr);
for (const [name, executable, prefix] of engines) {
  const version = spawnSync(executable, ['--version'], { encoding: 'utf8' }).stdout.trim();
for (let repetition = 1; repetition <= (variant.repeats ?? 1); repetition++) {
  const argument = variant.source === 'dylink-exception' ? exceptionPlugin
    : ['dylink', 'dylink-host'].includes(variant.source) ? plugin : join(output, `${variant.name}-${name}-λ.bin`);
  const execution = spawnSync(executable, [...prefix, compiled, argument],
    { encoding: 'utf8', timeout: 60_000, env: { ...process.env, LASM_PROBE_EMPTY: '',
      LASM_FULL_HOST_MODULE: new URL('../../src/node-host.mjs', import.meta.url).href } });
  results.push({ name, variant: variant.name, repetition, expected: variant.expected, executable, version, status: execution.status, signal: execution.signal,
    stdout: execution.stdout, stderr: execution.stderr, error: execution.error?.message });
}
}
}
writeFileSync(join(output, 'results.json'), JSON.stringify({ testedAt: new Date().toISOString(), results }, null, 2) + '\n');
for (const result of results) {
  assert.equal(result.status, 0, `${result.name}: ${result.error ?? result.stderr}`);
  assert.equal(result.stdout, result.expected, result.name);
  assert.equal(result.stderr, '', `${result.name}: unexpected runtime diagnostics`);
  console.log(`${result.name}: ${result.variant} passed`);
}
