// Experimental full compiler build. Downloaded SDKs and native bootstrap
// dependencies are maintainer prerequisites, kept outside the published runtime.
import { readFileSync, writeFileSync, mkdirSync, existsSync, copyFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { root, leanCommit } from '../../src/toolchain.mjs';

const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const output = resolve(option('--output', '.work/lean-full'));
const stage = option('--stage', 'wasm');
const jobs = Number(option('--jobs', '8'));
if (!['prepare', 'native32', 'wasm'].includes(stage)) throw new Error('Use --stage prepare, native32, or wasm');
if (!Number.isInteger(jobs) || jobs < 1) throw new Error('Invalid job count');
if (process.platform !== 'linux' || process.arch !== 'x64') throw new Error('This experimental bootstrap recipe currently targets a Linux x64 maintainer host');
const sdk = resolve(process.env.LASM_EMSDK ?? join(root, '.cache/emsdk-6.0.9'));
const deps = resolve(process.env.LASM_LEAN32_DEPS ?? join(root, '.cache/lean32-deps/root'));
const source = join(output, 'lean4-4.32.0');
const native = join(output, 'native32');
const wasm = join(output, 'wasm');
const digest = bytes => createHash('sha256').update(bytes).digest('hex');
const archive = join(root, '.cache/downloads/lean4-v4.32.0.tar.gz');
const archiveHash = JSON.parse(readFileSync(join(root, 'experiments/feasibility/toolchains.json'))).lean.observedSourceArchiveSha256;
if (digest(readFileSync(archive)) !== archiveHash) throw new Error('Lean source archive checksum mismatch');
mkdirSync(output, { recursive: true });
if (!existsSync(source)) execFileSync('tar', ['-xf', archive, '-C', output]);
const patch = readFileSync(join(root, 'scripts/full-lean/patches/lean-4.32.0-wasm-build.patch'));
const check = reverse => spawnSync('patch', ['--batch', '--dry-run', ...(reverse ? ['--reverse'] : ['--forward']), '-p1'], { cwd: source, input: patch });
if (check(true).status !== 0) {
  const forward = check(false);
  if (forward.status !== 0) throw new Error(`Build source is neither pristine nor the recorded patch revision:\n${forward.stdout}\n${forward.stderr}`);
  execFileSync('patch', ['--batch', '--forward', '-p1'], { cwd: source, input: patch });
}
copyFileSync(join(root, 'scripts/full-lean/emscripten-pre.js'), join(source, 'src/lasm-emscripten-pre.js'));
writeFileSync(join(output, 'build-provenance.json'), JSON.stringify({ leanCommit, archiveHash,
  patchSha256: digest(patch), emscripten: '6.0.9', source, native, wasm,
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
if (stage === 'wasm') {
  if (!existsSync(join(native, 'bin/lean'))) throw new Error('Build --stage native32 first');
  run(join(sdk, 'upstream/emscripten/emcmake'), ['cmake', '-S', join(source, 'src'), '-B', wasm, ...common,
    '-DSTAGE=1', `-DPREV_STAGE=${native}`, '-DCMAKE_CXX_FLAGS_RELEASE=-O2 -DNDEBUG',
    '-DCMAKE_C_FLAGS_RELEASE=-O2 -DNDEBUG', '-DCHECK_OLEAN_VERSION=ON', '-DLEAN_EXTRA_OPTS=-j2 -s8192',
  ]);
  run('cmake', ['--build', wasm, '--target', 'make_stdlib', 'leancpp', 'leanrt', 'leanmain', '-j', String(jobs)],
    { ...process.env, LEAN_STACK_SIZE_KB: '8192' });
  run(process.execPath, [join(root, 'scripts/full-lean/generate-exports.mjs'), wasm, join(source, 'src/lasm-wasm-exports.json')]);
  run('cmake', ['--build', wasm, '--target', 'lean', '-j', String(jobs)], { ...process.env, LEAN_STACK_SIZE_KB: '8192' });
}
