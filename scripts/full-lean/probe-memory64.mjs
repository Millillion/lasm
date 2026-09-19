// Test an alternative to lowered memory64's 4 GiB limit before calling it
// fundamental. Only sparse pages are touched; this is not a full Lean build.
import { mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import assert from 'node:assert/strict';
import { root } from '../../src/toolchain.mjs';

const output = resolve(process.argv[2] ?? '.work/full-engine-probe/native-memory64');
mkdirSync(output);
const sdk = resolve(process.env.LASM_EMSDK ?? '.cache/emsdk-6.0.9-dev');
const program = join(output, 'above4gb.cjs');
const source = join(root, 'scripts/full-lean/probes/highmemory.cpp');
const flags = ['-O1', '-pthread', '-fwasm-exceptions', '-sMEMORY64=1', '-sMAIN_MODULE=2',
  '-sALLOW_MEMORY_GROWTH=1', '-sGROWABLE_ARRAYBUFFERS=1', '-sMAXIMUM_MEMORY=8589934592',
  '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=2', '-sEXIT_RUNTIME=1',
  '--pre-js', join(root, 'scripts/full-lean/emscripten-pre.js'),
  '-DLASM_HIGH_MEMORY_BASE=0x100000000ULL', '-DLASM_HIGH_MEMORY_LABEL="4 GiB"'];
const build = spawnSync(join(sdk, 'upstream/emscripten/em++'), [source, ...flags, '-o', program], { encoding: 'utf8', timeout: 120_000 });
writeFileSync(join(output, 'build.log'), build.stdout + build.stderr);
assert.equal(build.status, 0, build.error?.message ?? build.stderr);
const engines = [
  ['node', process.execPath, [], {}],
  ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A'], {}],
  ['bun-stock', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), [], {}],
  ['bun-memory64', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), [], { BUN_JSC_useWasmMemory64: 'true' }],
];
const results = engines.map(([name, executable, prefix, environment]) => {
  const started = performance.now();
  const run = spawnSync(executable, [...prefix, program], { encoding: 'utf8', timeout: 60_000, env: { ...process.env, ...environment } });
  writeFileSync(join(output, name + '.out'), run.stdout ?? '');
  writeFileSync(join(output, name + '.err'), run.stderr ?? '');
  const result = { name, executable, prefix, environment, status: run.status, signal: run.signal,
    seconds: (performance.now() - started) / 1000, stdout: run.stdout, stderr: run.stderr, error: run.error?.message };
  console.log(`${name}: exit ${run.status}; ${run.stdout?.trim() ?? ''}`);
  return result;
});
const digest = path => createHash('sha256').update(readFileSync(path)).digest('hex');
writeFileSync(join(output, 'results.json'), JSON.stringify({ testedAt: new Date().toISOString(),
  scope: 'Sparse memory64 and pthread experiment, not complete Lean compatibility.', sdk, flags,
  files: Object.fromEntries([source, program, program.replace(/\.cjs$/, '.wasm')].map(path => [path, digest(path)])), results,
}, null, 2) + '\n');
