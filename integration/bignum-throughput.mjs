// Big-number throughput, native Lean (GMP) versus a Lasm Wasm runtime (docs/PLAN.md
// decision 5): integration/fixtures/bignum-perf/Main.lean, built for Node.
//
//   node integration/bignum-throughput.mjs OUTPUT [--runtime DIR] [--cache DIR] [--sizes 1000,10000,100000] [--no-native]
import assert from 'node:assert/strict';
import { cpSync, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import os from 'node:os';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { hashFile } from '../src/managed-artifacts.mjs';
import { applicationRuntimeCatalog, verifyApplicationRuntime } from '../src/application-runtime.mjs';
import { buildApplication } from '../src/application-build.mjs';
import { provisionLean } from '../src/managed-lean.mjs';

const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const output = resolve(args[0] ?? '');
assert.ok(args[0] && !existsSync(output), 'Supply a new output directory');
const sizes = option('--sizes', '1000,10000,100000').split(',');
const cache = option('--cache') && resolve(option('--cache'));
const project = join(output, 'project'), dist = join(output, 'dist');
mkdirSync(output, { recursive: true });
cpSync(fileURLToPath(new URL('./fixtures/bignum-perf', import.meta.url)), project, { recursive: true });
const version = readFileSync(join(project, 'lean-toolchain'), 'utf8').trim().replace(/^leanprover\/lean4:v/, '');
let runtimeDirectory, runtime;
if (option('--runtime')) {
  runtimeDirectory = resolve(option('--runtime'));
  const expected = { name: `lean-${version}-wasm64`, manifestSha256: await hashFile(join(runtimeDirectory, 'target.json')) };
  runtime = (await verifyApplicationRuntime(runtimeDirectory, expected)).manifest;
  applicationRuntimeCatalog.lean[version] = expected;
}
const file = join(project, 'Main.lean');
await buildApplication(file, { target: 'node', output: dist, cache, runtimeDirectory, log: () => {} });
const parse = (label, command, argv, cwd) => {
  const value = spawnSync(command, argv, { cwd, encoding: 'utf8', timeout: 3600_000, maxBuffer: 64 * 1024 ** 2 });
  assert.ifError(value.error); assert.equal(value.status, 0, `${label}: ${value.stderr}`);
  return value.stdout.trim().split('\n').map(line => JSON.parse(line));
};
const wasm = parse('wasm', process.execPath, [join(dist, 'main.mjs'), ...sizes], dist);
const native = args.includes('--no-native') ? undefined
  : parse('native', (await provisionLean(project, { cache })).lean, ['--run', file, ...sizes], project);
const rows = wasm.map((row, i) => ({ op: row.op, digits: row.digits, wasmNs: row.medianNs,
  ...(native ? { nativeNs: native[i].medianNs, wasmToNative: row.medianNs / native[i].medianNs, sameResult: native[i].check === row.check } : {}) }));
const result = { runtime: runtimeDirectory ? { bignum: runtime.bignum ?? 'gmp', identity: applicationRuntimeCatalog.lean[version].manifestSha256 } : 'committed',
  host: { platform: `${process.platform}-${process.arch}`, cpu: os.cpus()[0]?.model, node: process.versions.node }, rows };
writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result, null, 2));
