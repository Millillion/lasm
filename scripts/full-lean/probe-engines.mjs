// A build prerequisite probe, not a replacement for any upstream Lean test.
import { mkdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { spawnSync } from 'node:child_process';
import assert from 'node:assert/strict';
import { root } from '../../src/toolchain.mjs';

const output = join(root, '.work/full-engine-probe');
mkdirSync(output, { recursive: true });
const sdk = process.env.LASM_EMSDK ?? join(root, '.cache/emsdk-6.0.9');
const compiled = join(output, 'threads.cjs');
const build = spawnSync(join(sdk, 'upstream/emscripten/em++'), [
  join(root, 'scripts/full-lean/probes/threads.cpp'), '-O1', '-pthread', '-fwasm-exceptions',
  '-sPTHREAD_POOL_SIZE=2', '-sALLOW_MEMORY_GROWTH=1', '-sEXIT_RUNTIME=1',
  '-sNODERAWFS=1', '-sPROXY_TO_PTHREAD=1',
  '--pre-js', join(root, 'scripts/full-lean/emscripten-pre.js'), '-o', compiled,
], { encoding: 'utf8', timeout: 120_000 });
writeFileSync(join(output, 'build.log'), build.stdout + build.stderr);
assert.equal(build.status, 0, build.error?.message ?? build.stderr);
const engines = [
  ['node', process.execPath, []],
  ['deno', process.env.LASM_DENO ?? join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
  ['bun', process.env.LASM_BUN ?? join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
];
const results = [];
for (const [name, executable, prefix] of engines) {
  const version = spawnSync(executable, ['--version'], { encoding: 'utf8' }).stdout.trim();
  const execution = spawnSync(executable, [...prefix, compiled, join(output, `${name}-λ.bin`)],
    { encoding: 'utf8', timeout: 30_000, env: { ...process.env, LASM_PROBE_EMPTY: '' } });
  results.push({ name, executable, version, status: execution.status, signal: execution.signal,
    stdout: execution.stdout, stderr: execution.stderr, error: execution.error?.message });
}
writeFileSync(join(output, 'results.json'), JSON.stringify({ testedAt: new Date().toISOString(), results }, null, 2) + '\n');
for (const result of results) {
  assert.equal(result.status, 0, `${result.name}: ${result.error ?? result.stderr}`);
  assert.equal(result.stdout, 'caught exception\npthread joined\n', result.name);
  console.log(`${result.name}: pthread create/join, Wasm exception, host filesystem and empty environment passed`);
}
