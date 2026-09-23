// Maintainer bootstrap for versioned application libraries. This deliberately
// does not build or execute a Wasm Lean compiler. End-user provisioning will use
// the resulting verified bundles, not this CMake/SDK recipe.
import { readFileSync, writeFileSync, existsSync, mkdirSync, copyFileSync, readdirSync, renameSync } from 'node:fs';
import { resolve, join, relative, dirname } from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { fileURLToPath } from 'node:url';
import { ensureResourceGuard } from './resource-guard.mjs';
import { patchSdk } from './patch-sdk.mjs';
import { provisionLean } from '../../src/managed-lean.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';

await ensureResourceGuard();
const root = fileURLToPath(new URL('../..', import.meta.url));
const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const output = resolve(option('--output', '.work/application-runtime-4.34.0'));
const sdk = resolve(option('--sdk', '.cache/emsdk-6.0.9-dev'));
const cache = resolve(option('--tool-cache', '.cache/product-baseline/managed-lean-linux-x64/cache'));
const archive = resolve(option('--source-archive', '.cache/downloads/lean4-v4.34.0.tar.gz'));
const groups = option('--libraries', 'Init,Std,Lean,Lake').split(',');
if (!groups.length || groups.some(group => !['Init', 'Std', 'Lean', 'Lake'].includes(group))) throw new Error('Invalid library selection');
const sourceHash = '09ae33c3327dd90fe934a79f5c9399b720dc340afee5a5c9b08cfe4a6a32226b';
const expectedCommit = '293d5d0c0c3f3dded4688b3ccd6a33939ac5102b';
if (await hashFile(archive) !== sourceHash) throw new Error('Lean 4.34 source archive checksum mismatch');
mkdirSync(output, { recursive: true });
const selection = join(output, 'selection'); mkdirSync(selection, { recursive: true });
writeFileSync(join(selection, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const native = await provisionLean(selection, { cache });
if (native.commit !== expectedCommit) throw new Error('Wrong native bootstrap version');
const source = join(output, 'source'), build = join(output, 'build');
const run = (command, argv, options = {}) => execFileSync(command, argv, { cwd: root, stdio: 'inherit',
  env: { ...process.env, BINARYEN_CORES: '1', EMCC_CORES: '1', LEAN_NUM_THREADS: '2', LEAN_STACK_SIZE_KB: '8192' }, ...options });
if (!existsSync(source)) {
  mkdirSync(source); run('tar', ['-xzf', archive, '-C', source, '--strip-components=1']);
}
const hash = bytes => createHash('sha256').update(bytes).digest('hex');
const patches = {};
for (const name of ['wasm-build', 'compact-alignment', 'thread-runtime', 'sdk-mimalloc', 'c-inputs', 'region-allocation', 'host-platform']) {
  // These reviewed runtime changes still apply to 4.34. Record the actual patch
  // bytes and source commit; never treat old 4.32 tests as validation of 4.34.
  let patch = readFileSync(join(root, 'scripts/full-lean/patches', `lean-4.32.0-${name}.patch`), 'utf8');
  if (name === 'wasm-build') patch = patch.replace('8c9756b28d64dab099da31a4c09229a9e6a2ef35', expectedCommit);
  patches[name] = hash(patch);
  const check = reverse => spawnSync('patch', ['--force', '--dry-run', reverse ? '--reverse' : '--forward', '-p1'], { cwd: source, input: patch });
  if (check(true).status === 0) continue;
  const checked = check(false);
  if (checked.status !== 0) throw new Error(`Runtime patch drift (${name}): ${checked.stdout}\n${checked.stderr}`);
  run('patch', ['--batch', '--forward', '-p1'], { cwd: source, input: patch, stdio: ['pipe', 'inherit', 'inherit'] });
}
const sdkPatch = patchSdk(sdk);
copyFileSync(join(root, 'scripts/full-lean/emscripten-pre.js'), join(source, 'src/lasm-emscripten-pre.js'));
run(process.execPath, [join(root, 'scripts/full-lean/configure-host.mjs'), join(source, 'src')]);
const gmp = resolve('.cache/gmp-wasm64');
const gmpHash = await hashFile(join(gmp, 'lib/libgmp.a'));
run(join(sdk, 'upstream/emscripten/emcmake'), ['cmake', '-S', join(source, 'src'), '-B', build,
  '-G', 'Unix Makefiles', '-DSTAGE=1', `-DPREV_STAGE=${native.prefix}`, '-DCMAKE_BUILD_TYPE=Release',
  '-DLEAN_PLATFORM_TARGET=wasm64-unknown-emscripten', '-DUSE_LAKE=OFF', '-DMMAP=OFF',
  '-DUSE_GMP=ON', `-DGMP_INSTALL_PREFIX=${gmp}`, '-DUSE_MIMALLOC=ON', '-DLASM_SDK_MIMALLOC=ON',
  `-DLASM_MIMALLOC_INCLUDE=${join(sdk, 'upstream/emscripten/system/lib/mimalloc/include')}`,
  '-DCMAKE_C_FLAGS_RELEASE=-O2 -DNDEBUG', '-DCMAKE_CXX_FLAGS_RELEASE=-O2 -DNDEBUG',
  '-DCMAKE_C_FLAGS=-sMEMORY64=1', '-DLASM_MEMORY64=1', '-DLASM_HOST_BRIDGE=ON',
  '-DLASM_LINK_LAKE=OFF', '-DLASM_LINK_TOOLS=OFF', '-DLEAN_EXTRA_OPTS=-j2 -s8192',
]);
const provenance = { schema: 1, lean: '4.34.0', leanCommit: expectedCommit, sourceArchiveSha256: sourceHash,
  nativeArtifactIdentity: native.identity, patches, sdkPatchSha256: sdkPatch, emscripten: '6.0.9',
  gmpSha256: gmpHash, memoryLayout: 'wasm64', threading: 'pthreads', allocator: 'mimalloc',
  purpose: 'AOT application libraries; no Wasm compiler executable', sdk, nativePrefix: native.prefix,
  source, build, resourceReport: process.env.LASM_RESOURCE_REPORT };
writeFileSync(join(output, 'build-inputs.json'), JSON.stringify(provenance, null, 2) + '\n');
run('cmake', ['--build', build, '--target', 'leanrt', 'leancpp', 'lasmhost', '-j1']);
copyFileSync(join(gmp, 'lib/libgmp.a'), join(build, 'lib/lean/libgmp.a'));

const headers = readdirSync(join(build, 'include/lean')).filter(name => name.endsWith('.h')).sort()
  .map(name => [name, hash(readFileSync(join(build, 'include/lean', name)))]);
const compileFlags = ['-O2', '-DNDEBUG', '-DLEAN_EXPORTING', '-DLEAN_EMSCRIPTEN', '-pthread', '-fwasm-exceptions',
  '-sMEMORY64=1', '-ffp-contract=off', '-fPIC', '-ffunction-sections', '-fdata-sections', '-I', join(build, 'include')];
const compiler = join(sdk, 'upstream/emscripten/emcc');
const compileIdentity = hash(JSON.stringify({ ...provenance, resourceReport: undefined, headers, compileFlags,
  compilerVersion: execFileSync(compiler, ['--version'], { encoding: 'utf8' }) }));
const generated = join(build, 'generated-c');
const files = directory => readdirSync(directory, { withFileTypes: true }).flatMap(entry => entry.isDirectory()
  ? files(join(directory, entry.name)) : [join(directory, entry.name)]);
const audit = [];
for (const group of groups) {
  const moduleRoot = join(native.prefix, 'src/lean', ...(group === 'Lake' ? ['lake'] : []));
  const sources = [...files(join(moduleRoot, group)).filter(file => file.endsWith('.lean')), join(moduleRoot, group + '.lean')].sort();
  const objects = [];
  for (const file of sources) {
    const name = relative(moduleRoot, file).slice(0, -5), base = join(generated, name);
    mkdirSync(dirname(base), { recursive: true });
    const sourceSha256 = hash(readFileSync(file));
    const stamp = hash(sourceSha256 + native.commit + compileIdentity);
    writeFileSync(join(output, 'progress.json'), JSON.stringify({ group, module: name, completed: audit.length, status: 'building' }) + '\n');
    if (!existsSync(base + '.o') || !existsSync(base + '.stamp') || readFileSync(base + '.stamp', 'utf8') !== stamp) {
      console.log(`Generating and compiling ${name}`);
      run(native.lean, ['-j2', '-s8192', '-R', moduleRoot, '-Dcompiler.postponeCompile=false', '-c', base + '.c.partial', file]);
      renameSync(base + '.c.partial', base + '.c');
      run(compiler, [...compileFlags, '-c', base + '.c', '-o', base + '.o.partial']);
      renameSync(base + '.o.partial', base + '.o');
      writeFileSync(base + '.stamp', stamp);
    }
    objects.push(base + '.o');
    audit.push({ module: name, sourceSha256, cSha256: await hashFile(base + '.c'), objectSha256: await hashFile(base + '.o') });
  }
  const response = join(build, `${group}.archive.rsp`);
  writeFileSync(response, objects.map(file => JSON.stringify(file)).join('\n') + '\n');
  const library = join(build, `lib/lean/lib${group}.a`);
  run(join(sdk, 'upstream/emscripten/emar'), ['rcs', library + '.partial', '@' + response]);
  renameSync(library + '.partial', library);
}
writeFileSync(join(output, 'standard-library-audit.json'), JSON.stringify({ ...provenance, compileIdentity, modules: audit }, null, 2) + '\n');
writeFileSync(join(output, 'progress.json'), JSON.stringify({ status: 'complete', completed: audit.length, groups }) + '\n');
console.log(JSON.stringify({ output, libraries: groups, modules: audit.length }));
