import { mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import assert from 'node:assert/strict';
import { root } from '../../src/toolchain.mjs';

const output = resolve(process.argv[2] ?? '.work/full-engine-probe/host-memory');
mkdirSync(output);
const sdk = resolve(process.env.LASM_EMSDK ?? '.cache/emsdk-6.0.9-dev');
const source = join(root, 'scripts/full-lean/probes/host-highmemory.cpp');
const auditPrelude = join(output, 'audit-pre.js');
writeFileSync(auditPrelude, `
if (!ENVIRONMENT_IS_PTHREAD) {
  const original = Module.lasmFullHostRequest;
  Module.lasmFullHostRequest = function (request) {
    if (request.signalPointer < Number(process.env.LASM_PROBE_HIGH_BASE)) {
      console.error('Probe did not allocate its wait signal above the requested boundary');
      process.exit(10);
    }
    return original(request);
  };
}
`);
const engines = [
  ['node', process.execPath, []],
  ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
  ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
];
const results = [];
for (const [label, memoryMode, boundary, maximum] of [
  ['above2gb', 2, 0x80000000, 0x100000000],
  ['above4gb', 1, 0x100000000, 0x200000000],
]) {
  const program = join(output, `${label}.cjs`);
  const flags = ['-O1', '-pthread', '-fwasm-exceptions', `-sMEMORY64=${memoryMode}`,
    '-sALLOW_MEMORY_GROWTH=1', '-sGROWABLE_ARRAYBUFFERS=1', `-sMAXIMUM_MEMORY=${maximum}`,
    '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=5', '-sEXIT_RUNTIME=1',
    `-DLASM_HIGH_MEMORY_BASE=${boundary}ULL`,
    '--pre-js', join(root, 'scripts/full-lean/emscripten-pre.js'),
    '--pre-js', join(root, 'scripts/full-lean/host-pre.js'),
    '--pre-js', auditPrelude, '--js-library', join(root, 'scripts/full-lean/host-library.js')];
  const built = spawnSync(join(sdk, 'upstream/emscripten/em++'), [source, ...flags, '-o', program],
    { encoding: 'utf8', timeout: 120_000 });
  writeFileSync(join(output, `${label}-build.log`), built.stdout + built.stderr);
  assert.equal(built.status, 0, built.error?.message ?? built.stderr);
  // Bun's pinned release cannot clone a shared memory64 Memory to a Worker.
  // That separate engine reproduction is recorded by probe-memory64.mjs.
  for (const [name, executable, prefix] of engines.filter(([name]) => memoryMode !== 1 || name !== 'bun')) {
    const run = spawnSync(executable, [...prefix, program], { encoding: 'utf8', timeout: 60_000,
      env: { ...process.env, LASM_PROBE_HIGH_BASE: String(boundary), LASM_PROBE_HIGH_VALUE: 'host above heap',
        LASM_FULL_HOST_MODULE: new URL('../../src/node-host.mjs', import.meta.url).href } });
    const result = { name, label, flags, executable, prefix, status: run.status, signal: run.signal,
      stdout: run.stdout, stderr: run.stderr, error: run.error?.message,
      wasmSha256: createHash('sha256').update(readFileSync(program.replace(/\.cjs$/, '.wasm'))).digest('hex') };
    results.push(result);
    writeFileSync(join(output, 'results.json'), JSON.stringify({ testedAt: new Date().toISOString(),
      scope: 'Host RPC regression only; not an upstream Lean suite pass.', results }, null, 2) + '\n');
    console.log(`${name} ${label}: exit ${run.status}`);
  }
}
for (const result of results) {
  assert.equal(result.status, 0, `${result.name} ${result.label}: ${result.error ?? result.stderr}`);
  assert.equal(result.stdout, 'high-memory synchronous and asynchronous host calls passed\n', result.name);
  assert.equal(result.stderr, '', result.name);
}
