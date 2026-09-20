// Experimental full compiler build. Downloaded SDKs and native bootstrap
// dependencies are maintainer prerequisites, kept outside the published runtime.
import { readFileSync, writeFileSync, mkdirSync, existsSync, copyFileSync, readdirSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { root, leanCommit, resolveLean } from '../../src/toolchain.mjs';
import { patchSdk } from './patch-sdk.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();

const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const output = resolve(option('--output', '.work/lean-full'));
const stage = option('--stage', 'wasm');
const jobs = Number(option('--jobs', '2'));
const linkOptimization = option('--link-opt', '-O1');
const stackMb = Number(option('--stack-mb', '64'));
const leanAllocator = option('--lean-allocator', 'generic');
if (!['generic', 'mimalloc'].includes(leanAllocator)) throw new Error('Use --lean-allocator generic or mimalloc');
const systemAllocator = option('--malloc', leanAllocator === 'mimalloc' ? 'mimalloc' : 'dlmalloc');
if (!['dlmalloc', 'mimalloc'].includes(systemAllocator)) throw new Error('Use --malloc dlmalloc or mimalloc');
if (leanAllocator === 'mimalloc' && systemAllocator !== 'mimalloc') throw new Error('Lean mimalloc requires the matching SDK allocator');
const memoryMode = Number(option('--memory64', '2'));
const maximumMemoryGb = Number(option('--max-memory-gb', '4'));
const pthreadPoolSize = Number(option('--pthread-pool', '8'));
if (![1, 2].includes(memoryMode)) throw new Error('Use --memory64 1 (native) or 2 (lowered)');
if (!Number.isInteger(maximumMemoryGb) || maximumMemoryGb < 1 || maximumMemoryGb > 32
    || (memoryMode === 2 && maximumMemoryGb > 4)) throw new Error('Invalid memory limit for the selected memory mode');
if (!Number.isInteger(pthreadPoolSize) || pthreadPoolSize < 1 || pthreadPoolSize > 64) throw new Error('Invalid --pthread-pool (1..64)');
if (!Number.isInteger(stackMb) || stackMb < 1 || stackMb > 1024) throw new Error('Invalid --stack-mb (1..1024)');
if (!['-O0', '-O1', '-O2', '-O3', '-Os', '-Oz'].includes(linkOptimization)) throw new Error('Invalid --link-opt');
if (!['prepare', 'native32', 'wasm', 'wasm64'].includes(stage)) throw new Error('Use --stage prepare, native32, wasm, or wasm64');
if (!Number.isInteger(jobs) || jobs < 1 || jobs > 2) throw new Error('This host permits one or two build jobs');
if (process.platform !== 'linux' || process.arch !== 'x64') throw new Error('This experimental bootstrap recipe currently targets a Linux x64 maintainer host');
const sdk = resolve(process.env.LASM_EMSDK ?? join(root, '.cache/emsdk-6.0.9'));
const sdkPatchSha256 = patchSdk(sdk);
const deps = resolve(process.env.LASM_LEAN32_DEPS ?? join(root, '.cache/lean32-deps/root'));
const source = join(output, 'lean4-4.32.0');
const native = join(output, 'native32');
const wasm = join(output, stage === 'wasm64' ? 'wasm64' : 'wasm');
const digest = bytes => createHash('sha256').update(bytes).digest('hex');
const archive = join(root, '.cache/downloads/lean4-v4.32.0.tar.gz');
const archiveHash = JSON.parse(readFileSync(join(root, 'experiments/feasibility/toolchains.json'))).lean.observedSourceArchiveSha256;
if (digest(readFileSync(archive)) !== archiveHash) throw new Error('Lean source archive checksum mismatch');
mkdirSync(output, { recursive: true });
if (!existsSync(source)) execFileSync('tar', ['-xf', archive, '-C', output]);
const patch = readFileSync(join(root, 'scripts/full-lean/patches/lean-4.32.0-wasm-build.patch'));
const check = reverse => spawnSync('patch', ['--force', '--dry-run', ...(reverse ? ['--reverse'] : ['--forward']), '-p1'], { cwd: source, input: patch });
if (check(true).status !== 0) {
  const forward = check(false);
  if (forward.status !== 0) throw new Error(`Build source is neither pristine nor the recorded patch revision:\n${forward.stdout}\n${forward.stderr}`);
  execFileSync('patch', ['--batch', '--forward', '-p1'], { cwd: source, input: patch });
}
const alignmentPatch = readFileSync(join(root, 'scripts/full-lean/patches/lean-4.32.0-compact-alignment.patch'));
const threadRuntimePatch = readFileSync(join(root, 'scripts/full-lean/patches/lean-4.32.0-thread-runtime.patch'));
const sdkMimallocPatch = readFileSync(join(root, 'scripts/full-lean/patches/lean-4.32.0-sdk-mimalloc.patch'));
const cInputsPatch = readFileSync(join(root, 'scripts/full-lean/patches/lean-4.32.0-c-inputs.patch'));
const regionAllocationPatch = readFileSync(join(root, 'scripts/full-lean/patches/lean-4.32.0-region-allocation.patch'));
for (const [name, input] of [['compact alignment', alignmentPatch], ['thread runtime', threadRuntimePatch],
  ['SDK mimalloc', sdkMimallocPatch], ['generated C dependencies', cInputsPatch], ['region allocation', regionAllocationPatch]]) {
  const checkExtra = reverse => spawnSync('patch', ['--force', '--dry-run', reverse ? '--reverse' : '--forward', '-p1'],
    { cwd: source, input });
  if (checkExtra(true).status !== 0) {
    const forward = checkExtra(false);
    if (forward.status !== 0) throw new Error(`${name} source drift:\n${forward.stdout}\n${forward.stderr}`);
    execFileSync('patch', ['--batch', '--forward', '-p1'], { cwd: source, input });
  }
}
copyFileSync(join(root, 'scripts/full-lean/emscripten-pre.js'), join(source, 'src/lasm-emscripten-pre.js'));
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ leanCommit, archiveHash,
  patchSha256: digest(patch), compactAlignmentPatchSha256: digest(alignmentPatch), threadRuntimePatchSha256: digest(threadRuntimePatch), sdkPatchSha256, emscripten: '6.0.9', sdk, source, native, wasm,
  mainCStackBytes: stackMb * 1024 * 1024,
  systemAllocator, leanAllocator, sdkMimallocPatchSha256: digest(sdkMimallocPatch),
  cInputsPatchSha256: digest(cInputsPatch),
  regionAllocationPatchSha256: digest(regionAllocationPatch),
  memoryMode, maximumMemoryBytes: maximumMemoryGb * 1024 ** 3, pthreadPoolSize,
  bootstrapOptions: '-j2 -s8192', bootstrapEnvironment: { LEAN_STACK_SIZE_KB: '8192' }, generatedAt: new Date().toISOString(),
}, null, 2) + '\n');
const run = (command, argv, env = process.env) => execFileSync(command, argv, { cwd: root, env, stdio: 'inherit' });
const common = ['-G', 'Unix Makefiles', '-DUSE_GMP=OFF', '-DUSE_MIMALLOC=OFF', '-DMMAP=OFF', '-DUSE_LAKE=OFF', '-DCMAKE_BUILD_TYPE=Release'];
if (stage === 'native32') {
  for (const file of ['usr/lib/i386-linux-gnu/libuv.so', 'usr/lib/i386-linux-gnu/libssl.so', 'usr/include/x86_64-linux-gnu/c++/13/32/bits/c++config.h'])
    if (!existsSync(join(deps, file))) throw new Error(`Missing local bootstrap dependency: ${join(deps, file)}`);
  run('cmake', ['-S', join(source, 'stage0/src'), '-B', native, ...common,
    '-DSTAGE=0', '-DCMAKE_C_COMPILER=gcc', '-DCMAKE_CXX_COMPILER=g++',
    `-DLEAN_EXTRA_CXX_FLAGS=-m32 -msse2 -mfpmath=sse -isystem ${deps}/usr/include/x86_64-linux-gnu/c++/13/32 -isystem ${deps}/usr/include/i386-linux-gnu`,
    `-DLEANC_OPTS=-m32 -msse2 -mfpmath=sse -isystem ${deps}/usr/include/i386-linux-gnu`,
    `-DLEAN_EXTRA_LINKER_FLAGS=-m32 -L${deps}/usr/lib/gcc/x86_64-linux-gnu/13/32 -L${deps}/usr/lib/i386-linux-gnu -Wl,-rpath,${deps}/usr/lib/i386-linux-gnu`,
    `-DCMAKE_LIBRARY_PATH=${deps}/usr/lib/i386-linux-gnu`, `-DOPENSSL_INCLUDE_DIR=${deps}/usr/include`,
    `-DOPENSSL_CRYPTO_LIBRARY=${deps}/usr/lib/i386-linux-gnu/libcrypto.so`,
    `-DOPENSSL_SSL_LIBRARY=${deps}/usr/lib/i386-linux-gnu/libssl.so`,
  ], { ...process.env, PKG_CONFIG_SYSROOT_DIR: deps, PKG_CONFIG_LIBDIR: join(deps, 'usr/lib/i386-linux-gnu/pkgconfig') });
  run('cmake', ['--build', native, '--target', 'lean', '-j', String(jobs)]);
  run(join(native, 'bin/lean'), ['--version']);
}
if (stage === 'wasm' || stage === 'wasm64') {
  mkdirSync(wasm, { recursive: true });
  // Make cannot otherwise see SDK JavaScript library changes. Include the
  // reviewed patch identity in the executable's actual link dependencies.
  const linkInputs = join(wasm, 'lasm-link-inputs.json');
  const cInputs = join(wasm, 'lasm-c-inputs.json');
  const linkContents = JSON.stringify({ emscripten: '6.0.9', sdkPatchSha256 }) + '\n';
  if (!existsSync(linkInputs) || readFileSync(linkInputs, 'utf8') !== linkContents) writeFileSync(linkInputs, linkContents);
  const is64 = stage === 'wasm64';
  const previous = is64 ? resolveLean(root).prefix : native;
  if (!existsSync(join(previous, 'bin/lean'))) throw new Error('Build --stage native32 first');
  const gmp = resolve(process.env.LASM_GMP_WASM64 ?? join(root, '.cache/gmp-wasm64'));
  if (is64 && !existsSync(join(gmp, 'lib/libgmp.a'))) throw new Error('Missing 64-bit Emscripten GMP build; see README');
  run(process.execPath, [join(root, 'scripts/full-lean/configure-host.mjs'), join(source, 'src')]);
  const previousDriver = join(wasm, 'leanc.sh');
  const changedSdk = existsSync(previousDriver) && !readFileSync(previousDriver, 'utf8').includes(join(sdk, 'upstream/emscripten/emcc'));
  // CMake otherwise retains the old compiler paths even after its toolchain
  // file changes. Clear only generated CMake configuration on an SDK switch.
  run(join(sdk, 'upstream/emscripten/emcmake'), ['cmake', ...(changedSdk ? ['--fresh'] : []), '-S', join(source, 'src'), '-B', wasm, ...common,
    '-DSTAGE=1', `-DPREV_STAGE=${previous}`, '-DCMAKE_CXX_FLAGS_RELEASE=-O2 -DNDEBUG',
    `-DUSE_MIMALLOC=${leanAllocator === 'mimalloc' ? 'ON' : 'OFF'}`,
    `-DLASM_SDK_MIMALLOC=${leanAllocator === 'mimalloc' ? 'ON' : 'OFF'}`,
    `-DLASM_MIMALLOC_INCLUDE=${join(sdk, 'upstream/emscripten/system/lib/mimalloc/include')}`,
    '-DCMAKE_C_FLAGS_RELEASE=-O2 -DNDEBUG', '-DCHECK_OLEAN_VERSION=ON', '-DLEAN_EXTRA_OPTS=-j2 -s8192',
    `-DLEAN_EXTRA_LINKER_FLAGS=-sMALLOC=${systemAllocator} -sMAXIMUM_MEMORY=${maximumMemoryGb * 1024 ** 3} -sPTHREAD_POOL_SIZE=${pthreadPoolSize} -sGROWABLE_ARRAYBUFFERS=1 -sSTACK_OVERFLOW_CHECK=2 -sSTACK_SIZE=${stackMb * 1024 * 1024} -Wl,--export=__cpp_exception`,
    '-DLASM_HOST_BRIDGE=ON', `-DLASM_WASM_LINK_OPTIMIZATION=${linkOptimization}`,
    ...(is64 ? ['-DUSE_GMP=ON', `-DGMP_INSTALL_PREFIX=${gmp}`, `-DCMAKE_C_FLAGS=-sMEMORY64=${memoryMode}`, `-DLASM_MEMORY64=${memoryMode}`, '-DLASM_LINK_LAKE=ON', '-DLASM_LINK_TOOLS=ON',
      `-DEXTRA_LEANMAKE_OPTS=C_ONLY=1 C_OUT=${join(wasm, 'generated-c')} OBJS= LEANC_DEPS=${cInputs}`]
      : ['-DLASM_MEMORY64=0', `-DEXTRA_LEANMAKE_OPTS=LEANC_DEPS=${cInputs}`]),
  ]);
  // Upstream leanmake tracks generated .c timestamps, but not their included
  // runtime headers. In particular USE_MIMALLOC changes inline object layout.
  // A stable make prerequisite rebuilds every generated C object on an ABI or
  // compiler-input change, including after an interrupted build. Link-only
  // tuning does not needlessly invalidate the standard library.
  const include = join(wasm, 'include/lean');
  const cContents = JSON.stringify({ sdk,
    compilerVersion: execFileSync(join(sdk, 'upstream/emscripten/emcc'), ['--version'], { encoding: 'utf8' }),
    driver: readFileSync(join(wasm, 'leanc.sh'), 'utf8').replace(/^ldflags=\([^\n]*\)$/m, 'ldflags=()'),
    flags: '-O3 -DNDEBUG -DLEAN_EXPORTING',
    headers: Object.fromEntries(readdirSync(include).filter(name => name.endsWith('.h')).sort()
      .map(name => [name, digest(readFileSync(join(include, name)))])),
  }, null, 2) + '\n';
  if (!existsSync(cInputs) || readFileSync(cInputs, 'utf8') !== cContents) writeFileSync(cInputs, cContents);
  if (is64) {
    run(process.execPath, [join(root, 'scripts/full-lean/prepare-native64.mjs'), wasm, source]);
    // C embedding clients need the same arithmetic runtime without relying on
    // an absolute path into the maintainer's downloaded GMP build.
    copyFileSync(join(gmp, 'lib/libgmp.a'), join(wasm, 'lib/lean/libgmp.a'));
  }
  run('cmake', ['--build', wasm, '--target', 'make_stdlib', 'leancpp', 'leanrt', 'leanmain', 'leanshell', 'leaninitialize', 'lasmhost', '-j', String(jobs)],
    { ...process.env, LEAN_STACK_SIZE_KB: '8192' });
  run(process.execPath, [join(root, 'scripts/full-lean/generate-exports.mjs'), wasm]);
  run('cmake', ['--build', wasm, '--target', 'lasmnative', '-j', String(jobs)]);
  if (is64) run('cmake', ['--build', wasm, '--target', 'lasmtools', '-j', String(jobs)]);
  run('cmake', ['--build', wasm, '--target', 'lean', '-j', String(jobs)], { ...process.env, LEAN_STACK_SIZE_KB: '8192' });
}
