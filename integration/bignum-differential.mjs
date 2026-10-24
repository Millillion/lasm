// Big-number differential test (docs/PLAN.md decision 5): Lasm's Wasm runtime
// uses Lean's own big-number code (USE_GMP=OFF), native Lean uses GMP. Build
// integration/fixtures/bignum/Main.lean for Node and compare its output with
// native Lean's `lean --run`, byte for byte.
//
//   node integration/bignum-differential.mjs OUTPUT [--runtime DIR] [--pairs N] [--cache DIR]
//
// --runtime selects a runtime bundle that is not (yet) the committed one, as the
// runtime rebuild's smoke test does: in memory only, never in the catalog file.
import assert from 'node:assert/strict';
import { cpSync, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
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
const pairs = Number(option('--pairs', '600'));
const cache = option('--cache') && resolve(option('--cache'));
const fixture = fileURLToPath(new URL('./fixtures/bignum', import.meta.url));
const project = join(output, 'project'), dist = join(output, 'dist');
mkdirSync(output, { recursive: true });
cpSync(fixture, project, { recursive: true });
const version = readFileSync(join(project, 'lean-toolchain'), 'utf8').trim().replace(/^leanprover\/lean4:v/, '');
const result = { scope: 'Wasm (Lasm runtime) versus native Lean big-number results', pairs, passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
let runtimeDirectory;
if (option('--runtime')) {
  runtimeDirectory = resolve(option('--runtime'));
  const expected = { name: `lean-${version}-wasm64`, manifestSha256: await hashFile(join(runtimeDirectory, 'target.json')) };
  const runtime = await verifyApplicationRuntime(runtimeDirectory, expected);
  applicationRuntimeCatalog.lean[version] = expected;
  result.runtime = { identity: runtime.identity, bignum: runtime.manifest.bignum ?? 'gmp',
    libraries: runtime.manifest.libraries };
}
result.runtime ??= { identity: applicationRuntimeCatalog.lean[version].manifestSha256, committed: true };
save();
const file = join(project, 'Main.lean');
const started = performance.now();
const built = await buildApplication(file, { target: 'node', output: dist, cache, runtimeDirectory, log: () => {} });
result.build = { seconds: (performance.now() - started) / 1000, signature: built.signature };
const lean = await provisionLean(project, { cache });
const timed = (command, argv, options) => {
  const start = performance.now();
  const value = spawnSync(command, argv, { encoding: 'utf8', timeout: 1800_000, maxBuffer: 1024 ** 3, ...options });
  assert.ifError(value.error);
  return { code: value.status, signal: value.signal, stdout: value.stdout, stderr: value.stderr, seconds: (performance.now() - start) / 1000 };
};
const native = timed(lean.lean, ['--run', file, String(pairs)], { cwd: project });
const wasm = timed(process.execPath, [join(dist, 'main.mjs'), String(pairs)], { cwd: dist });
const lines = text => text.split('\n');
const nativeLines = lines(native.stdout), wasmLines = lines(wasm.stdout);
const differences = [];
for (let i = 0; i < Math.max(nativeLines.length, wasmLines.length) && differences.length < 20; i++)
  if (nativeLines[i] !== wasmLines[i]) differences.push({ line: i + 1, native: nativeLines[i], wasm: wasmLines[i] });
writeFileSync(join(output, 'native.out'), native.stdout); writeFileSync(join(output, 'wasm.out'), wasm.stdout);
const summary = value => ({ code: value.code, signal: value.signal, stderr: value.stderr, seconds: value.seconds,
  lines: lines(value.stdout).length, bytes: Buffer.byteLength(value.stdout) });
Object.assign(result, { native: summary(native), wasm: summary(wasm), differences,
  checks: nativeLines.filter(line => /^[NIFDH] /.test(line)).length });
result.passed = native.code === 0 && wasm.code === 0 && native.stderr === '' && wasm.stderr === ''
  && native.stdout === wasm.stdout && nativeLines.at(-2) === 'done';
save();
console.log(JSON.stringify({ ...result, runtime: { ...result.runtime, libraries: undefined } }, null, 2));
if (!result.passed) process.exitCode = 1;
