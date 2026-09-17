// Maintainer experiment: compile the real runtime and library slice with Lean's
// bundled Clang/LLD. Zig still supplies libc/C++ headers and prebuilt libraries.
import assert from 'node:assert/strict';
import { readFileSync, writeFileSync, mkdirSync, readdirSync, cpSync, openSync, closeSync, rmSync } from 'node:fs';
import { join, dirname, resolve } from 'node:path';
import { pathToFileURL } from 'node:url';
import { root, prefix, zig, runtimeDir, leanSource, run } from '../../scripts/build-runtime.mjs';
import { allowedWasiImports } from '../../src/build.mjs';

const work = join(root, '.work/bundled-runtime');
mkdirSync(work, { recursive: true });
const zigRoot = dirname(zig);
const clang = join(prefix, 'bin/clang');
const lld = join(prefix, 'bin/ld.lld');
const flags = ['--target=wasm32-wasip1', '-O2', '-DNDEBUG', '-ffunction-sections', '-fdata-sections',
  '-I', join(runtimeDir, 'include'), '-I', join(prefix, 'include'), '-I', join(leanSource, 'src')];
const cIncludes = ['-isystem', join(zigRoot, 'lib/include'),
  '-isystem', join(zigRoot, 'lib/libc/include/wasm-wasi-musl'), '-isystem', join(zigRoot, 'lib/libc/include/generic-musl')];
const defines = ['_LIBCPP_ABI_VERSION=1', '_LIBCPP_ABI_NAMESPACE=__1', '_LIBCPP_HAS_THREADS=0',
  '_LIBCPP_HAS_MONOTONIC_CLOCK', '_LIBCPP_HAS_TERMINAL', '_LIBCPP_HAS_MUSL_LIBC=1',
  '_LIBCXXABI_DISABLE_VISIBILITY_ANNOTATIONS', '_LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS',
  '_LIBCPP_HAS_VENDOR_AVAILABILITY_ANNOTATIONS=0', '_LIBCPP_HAS_FILESYSTEM=0', '_LIBCPP_HAS_RANDOM_DEVICE',
  '_LIBCPP_HAS_LOCALIZATION', '_LIBCPP_HAS_UNICODE', '_LIBCPP_HAS_WIDE_CHARACTERS', '_LIBCPP_HAS_NO_STD_MODULES',
  '_LIBCPP_PSTL_BACKEND_SERIAL', '_LIBCPP_HARDENING_MODE=_LIBCPP_HARDENING_MODE_NONE'];
const report = JSON.parse(readFileSync(join(root, '.work/evidence/runtime.json'), 'utf8'));
const output = join(work, 'artifact');
cpSync(report.output, output, { recursive: true });
const manifest = JSON.parse(readFileSync(join(output, 'manifest.json'), 'utf8'));
const runtimeObjects = [];
const members = run(zig, ['ar', 't', join(runtimeDir, 'libleanrt.a')]).split('\n');
for (const filename of readdirSync(join(runtimeDir, 'objects')).filter(n => n.endsWith('.o.source'))) {
  const unit = filename.slice(0, -9);
  // Use exactly the current archive's source inventory, not stale cache members.
  if (!members.includes(`${unit}.o`)) continue;
  const record = JSON.parse(readFileSync(join(runtimeDir, 'objects', filename), 'utf8'));
  const source = join(work, `${unit}.cpp`);
  writeFileSync(source, record.content);
  const object = join(work, `${unit}.o`);
  console.log(`Bundled Clang: ${unit}`);
  run(clang, [...flags, '-std=c++20', '-fno-exceptions', '-nostdinc++',
    '-isystem', join(zigRoot, 'lib/libcxx/include'), '-isystem', join(zigRoot, 'lib/libcxxabi/include'),
    ...cIncludes, ...defines.map(d => `-D${d}`), '-c', source, '-o', object]);
  runtimeObjects.push(object);
}
const archive = join(work, 'runtime.a');
rmSync(archive, { force: true });
run(join(prefix, 'bin/llvm-ar'), ['rcs', archive, ...runtimeObjects]);
const objects = [];
const referenceObjects = [];
for (const name of report.modules) {
  const base = ['LasmGeneratedEntry', 'Example', 'Support'].includes(name)
    ? join(report.buildDir, name) : join(runtimeDir, 'stdlib', ...name.split('.'));
  const object = join(work, `${name}.o`);
  run(clang, [...flags, ...cIncludes, '-c', base + '.c', '-o', object]);
  objects.push(object);
  referenceObjects.push(base + '.o');
}
const exports = WebAssembly.Module.exports(await WebAssembly.compile(readFileSync(join(output, 'module.wasm'))))
  .filter(e => e.kind === 'function').map(e => e.name);
// Obtain Zig's actual libc/C++ link inputs; cache hashes are not a public API.
const traceFile = join(work, 'reference-link.log');
const traceFd = openSync(traceFile, 'w');
try {
  run(zig, ['c++', '-target', 'wasm32-wasi', '-O2', '-fno-exceptions', '-mexec-model=reactor',
    ...referenceObjects, join(runtimeDir, 'libleanrt.a'), ...exports.map(e => `-Wl,--export=${e}`),
    '-Wl,-z,stack-size=1048576', '-v', '-o', join(work, 'reference.wasm')], { stdio: ['ignore', 'pipe', traceFd] });
} finally { closeSync(traceFd); }
const trace = readFileSync(traceFile, 'utf8');
const libraries = [...trace.matchAll(/(?:^|\s)(\S*\/zig-global\/\S+\/(?:crt1-reactor\.o|libc\.a|libzigc\.a|libc\+\+\.a|libc\+\+abi\.a|libcompiler_rt\.a))(?=\s|$)/g)].map(m => resolve(root, m[1]));
assert.equal(libraries.length, 6, 'Expected reactor, libc, zigc, libc++, libc++abi, compiler_rt');
run(lld, ['-flavor', 'wasm', '--entry=_initialize', '--export-memory', '--stack-first', '--strip-all',
  '-z', 'stack-size=1048576', '--max-memory=268435456', ...exports.map(e => `--export=${e}`),
  ...objects, archive, ...libraries, '-o', join(output, 'module.wasm')]);
const bytes = readFileSync(join(output, 'module.wasm'));
const imports = WebAssembly.Module.imports(await WebAssembly.compile(bytes));
assert.ok(imports.every(i => i.module === 'wasi_snapshot_preview1' && allowedWasiImports.includes(i.name)));
manifest.imports = imports;
writeFileSync(join(output, 'manifest.json'), JSON.stringify(manifest, null, 2) + '\n');
writeFileSync(join(output, 'index.mjs'), `import {readFile} from 'node:fs/promises';\nimport {instantiate} from './runtime.mjs';\nexport default async function createModule() { return instantiate(await readFile(new URL('./module.wasm', import.meta.url)), ${JSON.stringify(manifest)}); }\n`);
const { default: createModule } = await import(pathToFileURL(join(output, 'index.mjs')));
const api = await createModule();
const controls = await (await import(pathToFileURL(join(report.output, 'index.mjs')))).default();
let comparisons = 0;
for (const value of [0n, 1n, (1n << 31n) + 1n, (1n << 128n) + 51n, (1n << 512n) - 1n]) {
  for (const name of ['square', 'array', 'closure', 'tree']) { assert.equal(api[name](value), controls[name](value)); comparisons++; }
  assert.equal(api.signed(-value), controls.signed(-value)); comparisons++;
}
assert.equal(api.unicode('🙂\0漢字'), '🙂\0漢字λ'); comparisons++;
const payload = new Uint8Array([0, 255, 37]);
assert.deepEqual(api.bytes(payload), payload); comparisons++;
api.dispose(); controls.dispose();
const evidence = { clang: run(clang, ['--version']).split('\n')[0], wasmBytes: bytes.length, comparisons,
  imports, runtimeObjects: runtimeObjects.length, libraryModules: objects.length,
  limitation: 'Uses Zig-provided C/C++ headers and libraries; not a standalone distributable sysroot.' };
writeFileSync(join(root, '.work/evidence/bundled-runtime.json'), JSON.stringify(evidence, null, 2) + '\n');
console.log(JSON.stringify(evidence, null, 2));
