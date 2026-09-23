// Native-vs-AOT application probe. All compilation runs under the maintainer
// guard; this is not the unfinished managed end-user compiler distribution.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync, renameSync } from 'node:fs';
import { resolve, join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync, execFileSync } from 'node:child_process';
import { ensureResourceGuard } from './resource-guard.mjs';
import { preserveWebWorker } from './preserve-web-worker.mjs';
import { copyApplicationHost, writeApplicationEntrypoint } from '../../src/application-output.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';

await ensureResourceGuard();
const root = fileURLToPath(new URL('../..', import.meta.url));
const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const target = option('--target', 'node');
if (!['node', 'deno', 'bun'].includes(target)) throw new Error('Invalid --target');
const runtime = resolve(option('--runtime', '.work/application-runtime-4.34.0'));
const output = resolve(option('--output', `.work/aot-application-${target}-4.34.0`));
if (existsSync(output)) throw new Error('Use a new output directory to preserve earlier evidence');
const source = resolve(option('--source', 'test/fixtures/application-main/Main.lean'));
const input = JSON.parse(readFileSync(join(runtime, 'build-inputs.json')));
assert.equal(input.lean, '4.34.0');
const { build, sdk, nativePrefix } = input;
const engine = resolve(option('--executable', target === 'node' ? process.execPath : target === 'deno'
  ? '.cache/js-runtimes/deno-2.9.7/deno' : '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'));
const memory = target === 'bun' ? 2 : 1;
const run = (program, argv, options = {}) => execFileSync(program, argv, { cwd: root, stdio: 'inherit',
  env: { ...process.env, LEAN_NUM_THREADS: '2', BINARYEN_CORES: '1', EMCC_CORES: '1' }, ...options });
mkdirSync(output, { recursive: true });
const work = join(output, 'build'), dist = join(work, 'dist');
mkdirSync(dist, { recursive: true });
const c = join(work, 'Main.c'), object = join(work, 'Main.o');
run(join(nativePrefix, 'bin/lean'), ['-j2', '-s8192', '-R', dirname(source), '-Dcompiler.postponeCompile=false', '-c', c, source]);
run(join(nativePrefix, 'bin/leanc'), ['-O2', c, '-o', join(work, 'native-main')]);
const exportsFile = join(work, 'exports.json'); writeFileSync(exportsFile, JSON.stringify(['_main', '_malloc', '_free']));
run(join(sdk, 'upstream/emscripten/emcc'), ['-O2', '-DNDEBUG', '-pthread', '-fwasm-exceptions', '-fPIC',
  '-DLEAN_EMSCRIPTEN', '-sMEMORY64=1', '-I', join(build, 'include'), '-c', c, '-o', object]);
const link = [object, '-O1', '-pthread', '-fwasm-exceptions', `-sMEMORY64=${memory}`, '-sMALLOC=mimalloc',
  '-sMAIN_MODULE=2', `-sEXPORTED_FUNCTIONS=@${exportsFile}`, '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=4',
  '-sEXIT_RUNTIME=1', '-sNODERAWFS=1', '-sALLOW_MEMORY_GROWTH=1', '-sGROWABLE_ARRAYBUFFERS=1',
  '-sSTACK_OVERFLOW_CHECK=2', '-Wl,--export-if-defined=__cpp_exception', '-sINITIAL_MEMORY=134217728',
  `-sMAXIMUM_MEMORY=${memory === 1 ? 8589934592 : 4294967296}`, '-sSTACK_SIZE=67108864',
  '-Wno-experimental', '-Wno-pthreads-mem-growth', '-L', join(build, 'lib/lean'),
  '-Wl,--start-group', '-lInit', '-lStd', '-lLean', '-lLake', '-lleancpp', '-lleanrt', '-llasmhost', '-lgmp',
  join(build, 'libuv/src/libuv/libuv.a'), '-Wl,--end-group',
  '--pre-js', join(root, 'scripts/full-lean/emscripten-pre.js'),
  '--pre-js', join(root, 'scripts/full-lean/host-pre.js'),
  '--js-library', join(root, 'scripts/full-lean/host-library.js'), '-o', join(dist, 'program.cjs')];
writeFileSync(join(output, 'link-command.json'), JSON.stringify(link, null, 2) + '\n');
run(join(sdk, 'upstream/emscripten/em++'), link);
preserveWebWorker(join(dist, 'program.cjs'));
copyApplicationHost(dist); writeApplicationEntrypoint(dist, target);
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
writeFileSync(join(dist, 'THIRD_PARTY_NOTICES.txt'), notices.map(([name, file]) =>
  `=== ${name} ===\n${readFileSync(file, 'utf8')}\n`).join('\n'));
writeFileSync(join(dist, 'build-info.json'), JSON.stringify({ lean: input.lean, leanCommit: input.leanCommit,
  target, memoryMode: memory, emscripten: input.emscripten, sourceSha256: await hashFile(source),
  nativeArtifactIdentity: input.nativeArtifactIdentity }, null, 2) + '\n');
const deploy = join(output, 'deployed'); renameSync(dist, deploy);
// Execute in a different working directory with neither a source copy nor any
// build tool on PATH. The selected engine is the only executable explicitly used.
const nativeCwd = join(output, 'native-cwd'), targetCwd = join(output, 'target-cwd');
mkdirSync(nativeCwd); mkdirSync(targetCwd);
const environment = { ...process.env, PATH: '', LEAN_NUM_THREADS: '2' };
delete environment.LEAN_PATH; delete environment.LEAN_SRC_PATH; delete environment.LEAN_SYSROOT;
delete environment.LASM_FULL_HOST_MODULE; delete environment.LASM_FULL_APP_PATH;
const controls = [];
for (const arguments_ of [['hello λ', '', 'space argument'], ['fail']]) {
  const native = spawnSync(join(work, 'native-main'), arguments_, { cwd: nativeCwd, env: environment, encoding: 'utf8', timeout: 60_000 });
  const actual = spawnSync(engine, [...(target === 'deno' ? ['run', '-A'] : []), join(deploy, 'main.mjs'), ...arguments_],
    { cwd: targetCwd, env: environment, encoding: 'utf8', timeout: 60_000 });
  const record = { arguments: arguments_, native: { code: native.status, stdout: native.stdout, stderr: native.stderr, error: native.error?.message },
    target: { code: actual.status, stdout: actual.stdout, stderr: actual.stderr, error: actual.error?.message } };
  controls.push(record);
  writeFileSync(join(output, 'controls.json'), JSON.stringify(controls, null, 2) + '\n');
  assert.ifError(native.error); assert.ifError(actual.error);
  assert.deepEqual(record.target, record.native);
}
const result = { scope: 'Maintainer AOT application build and relocated deployment; managed build-tool distribution unfinished',
  lean: input.lean, leanCommit: input.leanCommit, target, executable: engine,
  engineVersion: execFileSync(engine, ['--version'], { encoding: 'utf8' }).trim(), sourceSha256: await hashFile(source),
  memoryMode: memory, wasmSha256: await hashFile(join(deploy, 'program.wasm')), controls,
  resourceReport: process.env.LASM_RESOURCE_REPORT, deployed: deploy, recordedAt: new Date().toISOString() };
writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result, null, 2));
