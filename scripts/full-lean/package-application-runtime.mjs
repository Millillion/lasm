// Assemble reusable application inputs, including a precompiled full symbol
// registry. This avoids shipping generated standard-library C to every user.
import assert from 'node:assert/strict';
import { cpSync, copyFileSync, existsSync, mkdirSync, readFileSync, readdirSync, writeFileSync, statSync } from 'node:fs';
import { resolve, join, relative } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { ensureResourceGuard } from './resource-guard.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { maintainerSdk } from './maintainer-sdk.mjs';

await ensureResourceGuard();
const root = fileURLToPath(new URL('../..', import.meta.url));
const [runtimeArg, outputArg] = process.argv.slice(2);
if (!runtimeArg || !outputArg) throw new Error('Supply COMPLETED_APPLICATION_RUNTIME NEW_OUTPUT');
const runtime = resolve(runtimeArg), output = resolve(outputArg);
if (existsSync(output)) throw new Error('Use a new output directory');
const input = JSON.parse(readFileSync(join(runtime, 'build-inputs.json')));
const audit = JSON.parse(readFileSync(join(runtime, 'standard-library-audit.json')));
assert.equal(input.leanCommit, audit.leanCommit);
const progress = JSON.parse(readFileSync(join(runtime, 'progress.json')));
assert.equal(progress.status, 'complete');
assert.deepEqual([...progress.groups].sort(), ['Init', 'Lake', 'Lean', 'Std'], 'Package only a complete standard-library build');
const { build, nativePrefix } = input;
const sdk = await maintainerSdk({ managed: input.sdkMode === 'managed', directory: input.sdk, cache: input.sdkToolCache });
if (input.sdkMode === 'managed') {
  assert.equal(sdk.identity, input.sdkIdentity); assert.equal(sdk.driverIdentity, input.sdkDriverIdentity);
}
const run = (program, args, settings = {}) => execFileSync(program, args, { cwd: root, stdio: 'inherit',
  env: { ...sdk.env, BINARYEN_CORES: '1', EMCC_CORES: '1', LEAN_NUM_THREADS: '2' }, ...settings });
const name = `lean-${input.lean}-wasm64`, target = join(output, name), work = join(output, 'build');
mkdirSync(join(target, 'lib'), { recursive: true }); mkdirSync(work);
cpSync(join(build, 'include/lean'), join(target, 'include/lean'), { recursive: true, verbatimSymlinks: true });
const libraries = ['Init', 'Std', 'Lean', 'Lake', 'leancpp', 'leanrt', 'lasmhost', 'gmp'];
for (const library of libraries) copyFileSync(join(build, `lib/lean/lib${library}.a`), join(target, `lib/lib${library}.a`));
copyFileSync(join(build, 'libuv/src/libuv/libuv.a'), join(target, 'lib/libuv.a'));
const exportsFile = join(target, 'exports.json'), registry = join(work, 'lean-symbols.c');
// A fresh managed SDK has no generated system archives. Link a tiny C++ input
// with the application's ABI before inventorying those real archives.
const abiInput = join(work, 'runtime-abi.cpp');
writeFileSync(abiInput, '#include <string>\nint main() { return std::string("abi").size() == 3 ? 0 : 1; }\n');
run(sdk.tool('em++'), [abiInput, '-O1', '-pthread', '-fwasm-exceptions', '-fPIC', '-sMEMORY64=1',
  '-sMAIN_MODULE=2', '-sMALLOC=mimalloc', '-sALLOW_MEMORY_GROWTH=1', '-o', join(work, 'runtime-abi.cjs')]);
run(process.execPath, [join(root, 'scripts/full-lean/generate-exports.mjs'), build, exportsFile,
  '--native-lean', join(nativePrefix, 'bin/lean'), '--lake', '--registry', registry,
  '--application-hook', 'lasm_lookup_application_symbol'], { env: { ...sdk.env, LASM_EMSDK: sdk.directory,
    LASM_LLVM_NM: join(sdk.llvm, 'llvm-nm'), LASM_EMSCRIPTEN_CACHE: sdk.cacheDirectory, LEAN_NUM_THREADS: '2' } });
const object = join(work, 'lean-symbols.o');
run(sdk.tool('emcc'), ['-O1', '-DNDEBUG', '-pthread', '-fwasm-exceptions', '-fPIC',
  '-DLEAN_EMSCRIPTEN', '-sMEMORY64=1', '-I', join(target, 'include'), '-c', registry, '-o', object]);
run(sdk.tool('emar'), ['rcs', join(target, 'lib/liblasmsymbols.a'), object]);
// The archive audit has development paths; keep it with maintainer evidence.
copyFileSync(exportsFile + '.audit.json', join(work, 'exports-audit.json'));
const { unlinkSync } = await import('node:fs'); unlinkSync(exportsFile + '.audit.json');
const notices = [
  ['Lean', join(input.source, 'LICENSE')], ['Lean bundled dependencies', join(input.source, 'LICENSES')],
  ['Emscripten', join(sdk.driver, 'LICENSE')],
  ['LLVM libc++', join(sdk.driver, 'system/lib/libcxx/LICENSE.TXT')],
  ['LLVM libc++abi', join(sdk.driver, 'system/lib/libcxxabi/LICENSE.TXT')],
  ['musl', join(sdk.driver, 'system/lib/libc/musl/COPYRIGHT')],
  ['mimalloc', join(sdk.driver, 'system/lib/mimalloc/LICENSE')],
  ['libuv', join(build, 'libuv/src/libuv/LICENSE')],
  ['GMP LGPLv3', join(root, '.cache/gmp-6.3.0/COPYING.LESSERv3')],
  ['GMP GPLv3', join(root, '.cache/gmp-6.3.0/COPYINGv3')],
];
writeFileSync(join(target, 'THIRD_PARTY_NOTICES.txt'), notices.map(([label, path]) =>
  `=== ${label} ===\n${readFileSync(path, 'utf8')}\n`).join('\n'));
const files = {};
async function inventory(directory) {
  for (const entry of readdirSync(directory, { withFileTypes: true }).sort((a, b) => a.name.localeCompare(b.name))) {
    const file = join(directory, entry.name);
    if (entry.isDirectory()) await inventory(file);
    else {
      assert.ok(entry.isFile(), `Bundle inputs must be ordinary files: ${file}`);
      files[relative(target, file).replaceAll('\\', '/')] = { bytes: statSync(file).size, sha256: await hashFile(file) };
    }
  }
}
await inventory(target);
const manifest = { schema: 1, name, lean: input.lean, leanCommit: input.leanCommit,
  emscripten: input.emscripten, memoryLayout: 'wasm64', threading: 'pthreads', allocator: 'mimalloc',
  sourceArchiveSha256: input.sourceArchiveSha256, patches: input.patches,
  standardModules: audit.modules.length, standardLibraryAuditSha256: await hashFile(join(runtime, 'standard-library-audit.json')),
  applicationSymbolHook: 'lasm_lookup_application_symbol',
  libraries: [...libraries, 'uv', 'lasmsymbols'].map(name => `lib/lib${name}.a`), files };
writeFileSync(join(target, 'target.json'), JSON.stringify(manifest, null, 2) + '\n');
const result = { scope: 'Versioned application build inputs; managed CLI and installed-package validation remain pending',
  target, manifestSha256: await hashFile(join(target, 'target.json')), files: Object.keys(files).length,
  installedBytes: Object.values(files).reduce((sum, file) => sum + file.bytes, 0),
  resourceReport: process.env.LASM_RESOURCE_REPORT };
writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result, null, 2));
