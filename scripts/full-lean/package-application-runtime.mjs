// Assemble reusable application inputs, including a precompiled full symbol
// registry. This avoids shipping generated standard-library C to every user.
import assert from 'node:assert/strict';
import { cpSync, copyFileSync, existsSync, mkdirSync, readFileSync, readdirSync, writeFileSync, statSync } from 'node:fs';
import { resolve, join, relative } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { ensureResourceGuard } from './resource-guard.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';

await ensureResourceGuard();
const root = fileURLToPath(new URL('../..', import.meta.url));
const [runtimeArg, outputArg] = process.argv.slice(2);
if (!runtimeArg || !outputArg) throw new Error('Supply COMPLETED_APPLICATION_RUNTIME NEW_OUTPUT');
const runtime = resolve(runtimeArg), output = resolve(outputArg);
if (existsSync(output)) throw new Error('Use a new output directory');
const input = JSON.parse(readFileSync(join(runtime, 'build-inputs.json')));
const audit = JSON.parse(readFileSync(join(runtime, 'standard-library-audit.json')));
assert.equal(input.leanCommit, audit.leanCommit);
assert.equal(JSON.parse(readFileSync(join(runtime, 'progress.json'))).status, 'complete');
const { build, sdk, nativePrefix } = input;
const run = (program, args, settings = {}) => execFileSync(program, args, { cwd: root, stdio: 'inherit',
  env: { ...process.env, BINARYEN_CORES: '1', EMCC_CORES: '1', LEAN_NUM_THREADS: '2' }, ...settings });
const name = `lean-${input.lean}-wasm64`, target = join(output, name), work = join(output, 'build');
mkdirSync(join(target, 'lib'), { recursive: true }); mkdirSync(work);
cpSync(join(build, 'include/lean'), join(target, 'include/lean'), { recursive: true, verbatimSymlinks: true });
const libraries = ['Init', 'Std', 'Lean', 'Lake', 'leancpp', 'leanrt', 'lasmhost', 'gmp'];
for (const library of libraries) copyFileSync(join(build, `lib/lean/lib${library}.a`), join(target, `lib/lib${library}.a`));
copyFileSync(join(build, 'libuv/src/libuv/libuv.a'), join(target, 'lib/libuv.a'));
const exportsFile = join(target, 'exports.json'), registry = join(work, 'lean-symbols.c');
run(process.execPath, [join(root, 'scripts/full-lean/generate-exports.mjs'), build, exportsFile,
  '--native-lean', join(nativePrefix, 'bin/lean'), '--lake', '--registry', registry,
  '--application-hook', 'lasm_lookup_application_symbol'], { env: { ...process.env, LASM_EMSDK: sdk, LEAN_NUM_THREADS: '2' } });
const object = join(work, 'lean-symbols.o');
run(join(sdk, 'upstream/emscripten/emcc'), ['-O1', '-DNDEBUG', '-pthread', '-fwasm-exceptions', '-fPIC',
  '-DLEAN_EMSCRIPTEN', '-sMEMORY64=1', '-I', join(target, 'include'), '-c', registry, '-o', object]);
run(join(sdk, 'upstream/emscripten/emar'), ['rcs', join(target, 'lib/liblasmsymbols.a'), object]);
// The archive audit has development paths; keep it with maintainer evidence.
copyFileSync(exportsFile + '.audit.json', join(work, 'exports-audit.json'));
const { unlinkSync } = await import('node:fs'); unlinkSync(exportsFile + '.audit.json');
const notices = [
  ['Lean', join(input.source, 'LICENSE')], ['Lean bundled dependencies', join(input.source, 'LICENSES')],
  ['Emscripten', join(sdk, 'upstream/emscripten/LICENSE')],
  ['LLVM libc++', join(sdk, 'upstream/emscripten/system/lib/libcxx/LICENSE.TXT')],
  ['LLVM libc++abi', join(sdk, 'upstream/emscripten/system/lib/libcxxabi/LICENSE.TXT')],
  ['musl', join(sdk, 'upstream/emscripten/system/lib/libc/musl/COPYRIGHT')],
  ['mimalloc', join(sdk, 'upstream/emscripten/system/lib/mimalloc/LICENSE')],
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
