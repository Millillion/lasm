import assert from 'node:assert/strict';
import { execFileSync, spawnSync } from 'node:child_process';
import { mkdirSync, readFileSync, writeFileSync, statSync, existsSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = resolve(dirname(fileURLToPath(import.meta.url)), '../..');
const here = join(root, 'experiments/feasibility');
const work = join(root, '.work/feasibility');
mkdirSync(work, { recursive: true });
const zig = process.env.ZIG ?? join(root, '.cache/zig-x86_64-linux-0.16.0/zig');
const lean = process.env.LEAN ?? 'lean';
const wasmOpt = process.env.WASM_OPT ?? 'wasm-opt';
const env = { ...process.env, ZIG_GLOBAL_CACHE_DIR: join(root, '.cache/zig-global') };
const commands = [];
const options = {
  cwd: root, env, encoding: 'utf8', timeout: 180_000, maxBuffer: 8 * 1024 * 1024,
  stdio: ['ignore', 'pipe', 'pipe'],
};
function command(executable, args) {
  commands.push([executable, ...args]);
  return execFileSync(executable, args, { ...options, stdio: ['ignore', 'pipe', 'pipe'] }).trim();
}
const leanVersion = command(lean, ['--version']);
assert.match(leanVersion, /version 4\.32\.0[,)]/, 'Experiments pin Lean 4.32.0');
const prefix = command(lean, ['--print-prefix']);
const report = {
  node: process.version,
  v8: process.versions.v8,
  lean: leanVersion,
  zig: command(zig, ['version']),
  wasmOpt: command(wasmOpt, ['--version']),
  jspiByDefault: typeof WebAssembly.Suspending === 'function',
  probes: {},
};
assert.equal(report.zig, '0.16.0', 'Experiments pin Zig 0.16.0');
const common = ['cc', '-target', 'wasm32-wasi', '-mexec-model=reactor', '-O2', '-DNDEBUG', '-Wl,--strip-all'];
function build(source, name, extra = []) {
  const output = join(work, `${name}.wasm`);
  command(zig, [...common, source, ...extra, '-o', output]);
  return output;
}
function inspect(path) {
  const module = new WebAssembly.Module(readFileSync(path));
  return { module, bytes: statSync(path).size, imports: WebAssembly.Module.imports(module) };
}

console.log('Checking Lean-generated scalar code against native Lean evaluation...');
const pureC = join(work, 'Pure.c');
command(lean, ['-c', pureC, join(here, 'Pure.lean')]);
const pure = inspect(build(pureC, 'pure', [
  '-I', join(prefix, 'include'), '-Wl,--export=lasm_add_u32', '-Wl,--export=lasm_mix_u32',
]));
assert.deepEqual(pure.imports, []);
const pureApi = new WebAssembly.Instance(pure.module, {}).exports;
pureApi._initialize();
const oracle = command(lean, ['--run', join(here, 'Pure.lean')]);
const rows = oracle.split('\n').map((row) => row.split(',').map(Number));
assert.equal(rows.length, 49);
for (const [a, b, sum, mixed] of rows) {
  assert.equal(pureApi.lasm_add_u32(a, b) >>> 0, sum);
  assert.equal(pureApi.lasm_mix_u32(a) >>> 0, mixed);
}
report.probes.scalar = { bytes: pure.bytes, imports: pure.imports, nativeComparisons: rows.length * 2 };

console.log('Checking whether Lean already bundles usable Wasm compiler tools...');
const bundledClang = join(prefix, 'bin/clang');
const bundledLld = join(prefix, 'bin/ld.lld');
if (existsSync(bundledClang) && existsSync(bundledLld)) {
  const targetInclude = join(work, 'target-include');
  mkdirSync(join(targetInclude, 'lean'), { recursive: true });
  writeFileSync(join(targetInclude, 'lean/config.h'),
    '#pragma once\n#include <lean/version.h>\n#define LEAN_IS_STAGE0 0\n');
  const bundledObject = join(work, 'bundled-tools.o');
  const bundledWasm = join(work, 'bundled-tools.wasm');
  // This still borrows headers from Zig; it is not a complete SDK-free build.
  const libcInclude = join(dirname(zig), 'lib/libc/include');
  command(bundledClang, ['--target=wasm32-wasip1', '-O2', '-DNDEBUG',
    '-I', targetInclude, '-I', join(prefix, 'include'),
    '-isystem', join(prefix, 'include/clang'),
    '-isystem', join(libcInclude, 'wasm-wasi-musl'),
    '-isystem', join(libcInclude, 'generic-musl'), '-c', pureC, '-o', bundledObject]);
  command(bundledLld, ['-flavor', 'wasm', '--no-entry', '--strip-all',
    '--export=lasm_add_u32', '--export=lasm_mix_u32', bundledObject, '-o', bundledWasm]);
  const bundled = inspect(bundledWasm);
  assert.deepEqual(bundled.imports, []);
  const api = new WebAssembly.Instance(bundled.module, {}).exports;
  for (const [a, b, sum, mixed] of rows) {
    assert.equal(api.lasm_add_u32(a, b) >>> 0, sum);
    assert.equal(api.lasm_mix_u32(a) >>> 0, mixed);
  }
  report.probes.bundledTools = {
    clang: command(bundledClang, ['--version']).split('\n')[0],
    bytes: bundled.bytes, imports: bundled.imports, nativeComparisons: rows.length * 2,
    usesZigHeaders: true, usesZigExecutable: false,
  };
} else {
  report.probes.bundledTools = { skipped: 'This Lean distribution does not expose bin/clang and bin/ld.lld' };
}

console.log('Checking that Nat arithmetic still requires the real Lean runtime...');
const bigNatC = join(work, 'BigNat.c');
command(lean, ['-c', bigNatC, join(here, 'BigNat.lean')]);
const negativeArgs = [...common, bigNatC, '-I', join(prefix, 'include'),
  '-Wl,--export=lasm_square_nat', '-o', join(work, 'nat-without-runtime.wasm')];
commands.push([zig, ...negativeArgs]);
const negative = spawnSync(zig, negativeArgs, options);
assert.ifError(negative.error);
assert.notEqual(negative.status, 0);
assert.match(negative.stderr, /undefined symbol: lean_nat_big_mul/);
writeFileSync(join(work, 'nat-link-failure.txt'), negative.stderr);
report.probes.natWithoutRuntime = { expectedFailure: true, missing: 'lean_nat_big_mul' };

console.log('Checking custom imports, allocation, and implicit WASI dependencies...');
const custom = inspect(build(join(here, 'custom.c'), 'custom'));
assert.deepEqual(custom.imports, [{ module: 'lasm', name: 'double', kind: 'function' }]);
const customApi = new WebAssembly.Instance(custom.module, { lasm: { double: (x) => 2 * x } }).exports;
customApi._initialize();
assert.equal(customApi.call_host(20), 41);
const ptr = customApi.allocate(4096);
assert.notEqual(ptr, 0);
new Uint8Array(customApi.memory.buffer, ptr, 4096).fill(123);
customApi.release(ptr);
report.probes.custom = { bytes: custom.bytes, imports: custom.imports, allocationBytes: 4096 };
const wasi = inspect(build(join(here, 'wasi.c'), 'wasi'));
assert.ok(wasi.imports.some((i) => i.module === 'wasi_snapshot_preview1' && i.name === 'fd_write'));
assert.throws(() => new WebAssembly.Instance(wasi.module, {}), { name: 'TypeError' });
report.probes.stdio = { bytes: wasi.bytes, imports: wasi.imports, emptyImportsRejected: true };

console.log('Checking real async file reads through JSPI and standalone Asyncify...');
const asyncWasm = build(join(here, 'async.c'), 'async');
const fixture = join(work, 'multiplier.txt');
writeFileSync(fixture, '2\n');
const asyncRunner = join(here, 'async-run.mjs');
report.probes.jspi = JSON.parse(command(process.execPath, [
  '--experimental-wasm-jspi', asyncRunner, 'jspi', asyncWasm, fixture,
]));
const transformed = join(work, 'async-asyncify.wasm');
command(wasmOpt, [asyncWasm, '--asyncify', '--pass-arg=asyncify-imports@lasm.read_number',
  '-O2', '-o', transformed]);
report.probes.asyncify = JSON.parse(command(process.execPath, [
  asyncRunner, 'asyncify', transformed, fixture,
]));
report.probes.asyncify.originalBytes = statSync(asyncWasm).size;
report.probes.asyncify.transformedBytes = statSync(transformed).size;

writeFileSync(join(work, 'report.json'), `${JSON.stringify(report, null, 2)}\n`);
writeFileSync(join(work, 'commands.json'), `${JSON.stringify(commands, null, 2)}\n`);
console.log(JSON.stringify(report, null, 2));
console.log(`All feasibility assertions passed. Evidence: ${work}`);
