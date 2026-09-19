import { mkdirSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';
import assert from 'node:assert/strict';
import { root } from '../../src/toolchain.mjs';

const output = resolve(process.argv[2] ?? '.work/full-engine-probe/stack-diagnostics');
mkdirSync(output);
const sdk = resolve(process.env.LASM_EMSDK ?? '.cache/emsdk-6.0.9-dev');
const program = join(output, 'overflow.cjs');
const built = spawnSync(join(sdk, 'upstream/emscripten/em++'), [
  join(root, 'scripts/full-lean/probes/stack-overflow.cpp'), '-O1', '-fno-optimize-sibling-calls',
  '-sMEMORY64=2', '-pthread', '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=1',
  '-sALLOW_MEMORY_GROWTH=1', '-sMAXIMUM_MEMORY=536870912',
  '-sSTACK_SIZE=67108864', '-sINITIAL_MEMORY=134217728', '-sEXIT_RUNTIME=1',
  '--pre-js', join(root, 'scripts/full-lean/emscripten-pre.js'), '-o', program,
], { encoding: 'utf8', timeout: 120_000 });
writeFileSync(join(output, 'build.log'), built.stdout + built.stderr);
assert.equal(built.status, 0, built.error?.message ?? built.stderr);
const results = [];
for (const [name, executable, prefix] of [
  ['node', process.execPath, []],
  ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A', '--v8-flags=--stack-size=61440']],
  ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
]) {
  const execution = spawnSync(executable, [...prefix, program], { encoding: 'utf8', timeout: 30_000 });
  results.push({ name, executable, prefix, status: execution.status, signal: execution.signal,
    stdout: execution.stdout, stderr: execution.stderr, error: execution.error?.message });
}
writeFileSync(join(output, 'results.json'), JSON.stringify({ testedAt: new Date().toISOString(),
  scope: 'Engine value-stack diagnostics, not an upstream suite pass.', results }, null, 2) + '\n');
for (const result of results) {
  assert.equal(result.status, 134, `${result.name}: ${result.error ?? result.stderr}`);
  assert.equal(result.stdout, '', result.name);
  assert.equal(result.stderr, '\nStack overflow detected. Aborting.\n', result.name);
  console.log(`${result.name}: stack diagnostic passed`);
}
