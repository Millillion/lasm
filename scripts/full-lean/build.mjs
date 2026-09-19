// Experimental full compiler build. Downloaded SDKs and native bootstrap
// dependencies are maintainer prerequisites, kept outside the published runtime.
import { readFileSync, writeFileSync, mkdirSync, existsSync, copyFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { root, leanCommit, resolveLean } from '../../src/toolchain.mjs';
import { patchSdk } from './patch-sdk.mjs';

const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const output = resolve(option('--output', '.work/lean-full'));
const stage = option('--stage', 'wasm');
const jobs = Number(option('--jobs', '8'));
const linkOptimization = option('--link-opt', '-O1');
if (!['-O0', '-O1', '-O2', '-O3', '-Os', '-Oz'].includes(linkOptimization)) throw new Error('Invalid --link-opt');
if (!['prepare', 'native32', 'wasm', 'wasm64'].includes(stage)) throw new Error('Use --stage prepare, native32, wasm, or wasm64');
if (!Number.isInteger(jobs) || jobs < 1) throw new Error('Invalid job count');
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
copyFileSync(join(root, 'scripts/full-lean/emscripten-pre.js'), join(source, 'src/lasm-emscripten-pre.js'));
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ leanCommit, archiveHash,
  patchSha256: digest(patch), sdkPatchSha256, emscripten: '6.0.9', source, native, wasm,
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
  const linkContents = JSON.stringify({ emscripten: '6.0.9', sdkPatchSha256 }) + '\n';
  if (!existsSync(linkInputs) || readFileSync(linkInputs, 'utf8') !== linkContents) writeFileSync(linkInputs, linkContents);
  const is64 = stage === 'wasm64';
  const previous = is64 ? resolveLean(root).prefix : native;
  if (!existsSync(join(previous, 'bin/lean'))) throw new Error('Build --stage native32 first');
  const gmp = resolve(process.env.LASM_GMP_WASM64 ?? join(root, '.cache/gmp-wasm64'));
  if (is64 && !existsSync(join(gmp, 'lib/libgmp.a'))) throw new Error('Missing 64-bit Emscripten GMP build; see README');
  run(process.execPath, [join(root, 'scripts/full-lean/configure-host.mjs'), join(source, 'src')]);
  run(join(sdk, 'upstream/emscripten/emcmake'), ['cmake', '-S', join(source, 'src'), '-B', wasm, ...common,
    '-DSTAGE=1', `-DPREV_STAGE=${previous}`, '-DCMAKE_CXX_FLAGS_RELEASE=-O2 -DNDEBUG',
    '-DCMAKE_C_FLAGS_RELEASE=-O2 -DNDEBUG', '-DCHECK_OLEAN_VERSION=ON', '-DLEAN_EXTRA_OPTS=-j2 -s8192',
    '-DLASM_HOST_BRIDGE=ON', `-DLASM_WASM_LINK_OPTIMIZATION=${linkOptimization}`,
    ...(is64 ? ['-DUSE_GMP=ON', `-DGMP_INSTALL_PREFIX=${gmp}`, '-DCMAKE_C_FLAGS=-sMEMORY64=2', '-DLASM_MEMORY64=2', '-DLASM_LINK_LAKE=ON', '-DLASM_LINK_TOOLS=ON',
      `-DEXTRA_LEANMAKE_OPTS=C_ONLY=1 C_OUT=${join(wasm, 'generated-c')} OBJS=`] : ['-DLASM_MEMORY64=0']),
  ]);
  if (is64) run(process.execPath, [join(root, 'scripts/full-lean/prepare-native64.mjs'), wasm, source]);
  run('cmake', ['--build', wasm, '--target', 'make_stdlib', 'leancpp', 'leanrt', 'leanmain', 'leanshell', 'leaninitialize', 'lasmhost', '-j', String(jobs)],
    { ...process.env, LEAN_STACK_SIZE_KB: '8192' });
  run(process.execPath, [join(root, 'scripts/full-lean/generate-exports.mjs'), wasm]);
  run('cmake', ['--build', wasm, '--target', 'lasmnative', '-j', String(jobs)]);
  if (is64) run('cmake', ['--build', wasm, '--target', 'lasmtools', '-j', String(jobs)]);
  run('cmake', ['--build', wasm, '--target', 'lean', '-j', String(jobs)], { ...process.env, LEAN_STACK_SIZE_KB: '8192' });
}
