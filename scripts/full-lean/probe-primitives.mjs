// Differential runtime checks; these supplement, never replace, upstream tests.
import { mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';
import assert from 'node:assert/strict';
import { root, resolveLean } from '../../src/toolchain.mjs';

const revision = process.argv[2];
if (!revision || !/^v[0-9]+$/.test(revision)) throw new Error('Supply a frozen toolchain revision, such as v15');
const output = join(root, '.work/full-engine-probe', revision);
mkdirSync(output, { recursive: true });
const native = resolveLean(root).prefix;
const results = [];
function run(name, executable, args, cwd = root) {
  const started = performance.now();
  const result = spawnSync(executable, args, { cwd, encoding: 'utf8', timeout: 300_000,
    env: { ...process.env, LEAN_STACK_SIZE_KB: '8192', LEAN_NUM_THREADS: '2' } });
  const record = { name, executable, args, cwd, status: result.status, signal: result.signal,
    seconds: (performance.now() - started) / 1000, stdout: result.stdout, stderr: result.stderr, error: result.error?.message };
  results.push(record);
  writeFileSync(join(output, 'primitives.json'), JSON.stringify({ testedAt: new Date().toISOString(), results }, null, 2) + '\n');
  assert.equal(result.status, 0, `${name}: ${result.stdout}\n${result.stderr}`);
  assert.equal(result.stderr, '', name);
  return result.stdout;
}
const interfaces = resolve(root, 'scripts/full-lean/probes/Interfaces.lean');
const compact = resolve(root, 'scripts/full-lean/probes/CompactLayout.lean');
const expectedInterfaces = run('native interfaces', join(native, 'bin/lean'), ['--run', interfaces]);
const expectedCompact = run('native compact values', join(native, 'bin/lean'), ['--run', compact]);
for (const engine of ['node', 'deno', 'bun']) {
  const lean = join(root, `.work/full-toolchains/${engine}-${revision}/bin/lean`);
  assert.equal(run(`${engine} interfaces`, lean, ['--run', interfaces]), expectedInterfaces, `${engine}: native interface records/order`);
  const directory = join(output, engine);
  mkdirSync(directory, { recursive: true });
  writeFileSync(join(directory, 'CompactLayout.lean'), readFileSync(compact));
  assert.equal(run(`${engine} compact values`, lean,
    ['-o', 'CompactLayout.olean', '--run', 'CompactLayout.lean'], directory), expectedCompact);
  writeFileSync(join(directory, 'CompactLayout.trace'), '1'); // leantar's legacy numeric trace format
  run(`${engine} leantar encode`, join(native, 'bin/leantar'),
    ['CompactLayout.ltar', 'CompactLayout.trace', 'CompactLayout.olean'], directory);
  const extracted = join(directory, 'extracted');
  mkdirSync(extracted, { recursive: true });
  run(`${engine} leantar decode`, join(native, 'bin/leantar'), ['-x', join(directory, 'CompactLayout.ltar')], extracted);
  assert.deepEqual(readFileSync(join(extracted, 'CompactLayout.olean')), readFileSync(join(directory, 'CompactLayout.olean')),
    `${engine}: archive round trip must preserve serialized bytes`);
  writeFileSync(join(extracted, 'Check.lean'), 'import CompactLayout\n#eval main\n');
  // Import a Wasm-generated, archived module back into the native compiler too.
  const oldPath = process.env.LEAN_PATH;
  process.env.LEAN_PATH = extracted;
  try { assert.equal(run(`${engine} native module import`, join(native, 'bin/lean'), ['Check.lean'], extracted), expectedCompact); }
  finally { if (oldPath === undefined) delete process.env.LEAN_PATH; else process.env.LEAN_PATH = oldPath; }
  console.log(`${engine}: interfaces and compact/archive/native-import parity passed`);
}
