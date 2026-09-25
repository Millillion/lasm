// Maintainer bootstrap for versioned application libraries. This deliberately
// does not build or execute a Wasm Lean compiler. End-user provisioning will use
// the resulting verified bundles, not this CMake/SDK recipe.
import { readFileSync, writeFileSync, existsSync, mkdirSync, copyFileSync, readdirSync, renameSync,
  createReadStream, createWriteStream, unlinkSync, statfsSync } from 'node:fs';
import { resolve, join, relative, dirname } from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { fileURLToPath } from 'node:url';
import { createGzip, createGunzip } from 'node:zlib';
import { pipeline } from 'node:stream/promises';
import { ensureResourceGuard } from './resource-guard.mjs';
import { maintainerSdk } from './maintainer-sdk.mjs';
import { provisionLean, toolchainCatalog } from '../../src/managed-lean.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';

await ensureResourceGuard();
const root = fileURLToPath(new URL('../..', import.meta.url));
const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const version = option('--lean-version', toolchainCatalog.defaultLean);
const sources = JSON.parse(readFileSync(new URL('./lean-sources.json', import.meta.url)));
const release = sources[version];
if (!release || toolchainCatalog.lean[version]?.commit !== release.commit)
  throw new Error(`No matching source and native runtime-build inputs for Lean ${version}`);
const output = resolve(option('--output', `.work/application-runtime-${version}`));
const archiveGeneratedC = args.includes('--archive-generated-c');
const cache = resolve(option('--tool-cache', '.cache/product-baseline/managed-lean-linux-x64/cache'));
if (args.includes('--managed-sdk') && args.includes('--sdk')) throw new Error('Choose managed SDK or an explicit emsdk tree');
const sdk = await maintainerSdk({ managed: args.includes('--managed-sdk'), directory: option('--sdk'), cache });
const archive = resolve(option('--source-archive', `.cache/downloads/lean4-v${version}.tar.gz`));
const groups = option('--libraries', 'Init,Std,Lean,Lake').split(',');
if (!groups.length || groups.some(group => !['Init', 'Std', 'Lean', 'Lake'].includes(group))) throw new Error('Invalid library selection');
const sourceHash = release.sha256;
const expectedCommit = release.commit;
if (await hashFile(archive) !== sourceHash) throw new Error(`Lean ${version} source archive checksum mismatch`);
mkdirSync(output, { recursive: true });
const sourceIdentity = { lean: version, leanCommit: expectedCommit, sourceArchiveSha256: sourceHash };
const sourceReceipt = join(output, 'source-input.json');
const priorBuild = join(output, 'build-inputs.json');
for (const file of [sourceReceipt, priorBuild]) {
  if (!existsSync(file)) continue;
  const previous = JSON.parse(readFileSync(file));
  if (Object.entries(sourceIdentity).some(([key, value]) => previous[key] !== value))
    throw new Error('Runtime output belongs to another Lean source release; use a new output directory');
}
const selection = join(output, 'selection'); mkdirSync(selection, { recursive: true });
writeFileSync(join(selection, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
const native = await provisionLean(selection, { cache });
if (native.commit !== expectedCommit) throw new Error('Wrong native bootstrap version');
const source = join(output, 'source'), build = join(output, 'build');
const run = (command, argv, options = {}) => execFileSync(command, argv, { cwd: root, stdio: 'inherit',
  env: { ...sdk.env, BINARYEN_CORES: '1', EMCC_CORES: '1', LEAN_NUM_THREADS: '2', LEAN_STACK_SIZE_KB: '8192' }, ...options });
if (!existsSync(source)) {
  mkdirSync(source); run('tar', ['-xzf', archive, '-C', source, '--strip-components=1']);
  writeFileSync(sourceReceipt, JSON.stringify(sourceIdentity, null, 2) + '\n');
} else if (!existsSync(sourceReceipt)) {
  // Preserve resumability of recorded older builds, but do not mistake an
  // interrupted, unrecorded extraction for a complete source checkout.
  if (!existsSync(priorBuild)) throw new Error('Source extraction has no completed receipt; use a new output directory');
  writeFileSync(sourceReceipt, JSON.stringify(sourceIdentity, null, 2) + '\n');
}
const hash = bytes => createHash('sha256').update(bytes).digest('hex');
const patches = {};
const patchInputs = ['wasm-build', 'compact-alignment', 'thread-runtime', 'sdk-mimalloc', 'c-inputs', 'region-allocation', 'host-platform']
  .map(name => ({ name, file: `lean-4.32.0-${name}.patch` }));
// getIsLinux was added after the original host-platform patch. Keep the older
// version's patch applicable to its own sources.
patchInputs.push({ name: 'host-linux', file: 'lean-4.34.0-host-linux.patch' });
patchInputs.push({ name: 'host-backtrace', file: 'lean-4.34.0-host-backtrace.patch' });
patchInputs.push({ name: 'libuv-source', file: 'lean-4.34.0-libuv-source.patch' });
for (const { name, file } of patchInputs) {
  // These reviewed runtime changes still apply to 4.34. Record the actual patch
  // bytes and source commit; never treat old 4.32 tests as validation of 4.34.
  let patch = readFileSync(join(root, 'scripts/full-lean/patches', file), 'utf8');
  if (name === 'wasm-build') patch = patch.replace('8c9756b28d64dab099da31a4c09229a9e6a2ef35', expectedCommit);
  patches[name] = hash(patch);
  const check = reverse => spawnSync('patch', ['--force', '--dry-run', reverse ? '--reverse' : '--forward', '-p1'], { cwd: source, input: patch });
  if (check(true).status === 0) continue;
  const checked = check(false);
  if (checked.status !== 0) throw new Error(`Runtime patch drift (${name}): ${checked.stdout}\n${checked.stderr}`);
  run('patch', ['--batch', '--forward', '-p1'], { cwd: source, input: patch, stdio: ['pipe', 'inherit', 'inherit'] });
}
const sdkPatch = sdk.patchSha256;
copyFileSync(join(root, 'scripts/full-lean/emscripten-pre.js'), join(source, 'src/lasm-emscripten-pre.js'));
run(process.execPath, [join(root, 'scripts/full-lean/configure-host.mjs'), join(source, 'src')]);
const gmp = resolve('.cache/gmp-wasm64');
const gmpHash = await hashFile(join(gmp, 'lib/libgmp.a'));
run(sdk.tool('emcmake'), ['cmake', '-S', join(source, 'src'), '-B', build,
  '-G', 'Unix Makefiles', '-DSTAGE=1', `-DPREV_STAGE=${native.prefix}`, '-DCMAKE_BUILD_TYPE=Release',
  '-DLEAN_PLATFORM_TARGET=wasm64-unknown-emscripten', '-DUSE_LAKE=OFF', '-DMMAP=OFF',
  '-DUSE_GMP=ON', `-DGMP_INSTALL_PREFIX=${gmp}`, '-DUSE_MIMALLOC=ON', '-DLASM_SDK_MIMALLOC=ON',
  `-DLASM_MIMALLOC_INCLUDE=${join(sdk.driver, 'system/lib/mimalloc/include')}`,
  '-DCMAKE_C_FLAGS_RELEASE=-O2 -DNDEBUG', '-DCMAKE_CXX_FLAGS_RELEASE=-O2 -DNDEBUG',
  '-DCMAKE_C_FLAGS=-sMEMORY64=1', '-DLASM_MEMORY64=1', '-DLASM_HOST_BRIDGE=ON',
  '-DLASM_LINK_LAKE=OFF', '-DLASM_LINK_TOOLS=OFF', '-DLEAN_EXTRA_OPTS=-j2 -s8192',
]);
const provenance = { schema: 1, lean: version, leanCommit: expectedCommit, sourceArchiveSha256: sourceHash,
  nativeArtifactIdentity: native.identity, patches, sdkPatchSha256: sdkPatch, emscripten: '6.0.9',
  gmpSha256: gmpHash, memoryLayout: 'wasm64', threading: 'pthreads', allocator: 'mimalloc',
  purpose: 'AOT application libraries; no Wasm compiler executable', sdk: sdk.directory,
  ...(sdk.mode === 'managed' ? { sdkMode: sdk.mode, sdkIdentity: sdk.identity,
    sdkDriverIdentity: sdk.driverIdentity, sdkToolCache: sdk.toolCache } : {}), nativePrefix: native.prefix,
  source, build, resourceReport: process.env.LASM_RESOURCE_REPORT };
writeFileSync(join(output, 'build-inputs.json'), JSON.stringify(provenance, null, 2) + '\n');
run('cmake', ['--build', build, '--target', 'leanrt', 'leancpp', 'lasmhost', '-j1']);
copyFileSync(join(gmp, 'lib/libgmp.a'), join(build, 'lib/lean/libgmp.a'));

const headers = readdirSync(join(build, 'include/lean')).filter(name => name.endsWith('.h')).sort()
  .map(name => [name, hash(readFileSync(join(build, 'include/lean', name)))]);
const compileFlags = ['-O2', '-DNDEBUG', '-DLEAN_EXPORTING', '-DLEAN_EMSCRIPTEN', '-pthread', '-fwasm-exceptions',
  '-sMEMORY64=1', '-ffp-contract=off', '-fPIC', '-ffunction-sections', '-fdata-sections', '-I', join(build, 'include')];
const compiler = sdk.tool('emcc');
const compileIdentity = hash(JSON.stringify({ ...provenance, resourceReport: undefined, headers, compileFlags,
  compilerVersion: execFileSync(compiler, ['--version'], { encoding: 'utf8', env: sdk.env }) }));
const generated = join(build, 'generated-c');
async function generatedSourceHash(base) {
  if (existsSync(base + '.c')) return hashFile(base + '.c');
  const digest = createHash('sha256');
  const stream = createReadStream(base + '.c.gz').pipe(createGunzip());
  for await (const bytes of stream) digest.update(bytes);
  return digest.digest('hex');
}
function keepDiskReserve() {
  const space = statfsSync(output), available = space.bavail * space.bsize;
  if (available < 4 * 1024 ** 3 + 128 * 1024 ** 2) {
    writeFileSync(join(output, 'progress.json'), JSON.stringify({ status: 'resource-aborted',
      reason: 'disk-reserve', availableBytes: available, requiredBytes: 4 * 1024 ** 3 + 128 * 1024 ** 2 }) + '\n');
    throw new Error('Disk reserve reached; generated inputs are preserved. This is a resource abort, not a compatibility failure.');
  }
}
const files = directory => readdirSync(directory, { withFileTypes: true }).flatMap(entry => entry.isDirectory()
  ? files(join(directory, entry.name)) : [join(directory, entry.name)]);
const audit = [];
for (const group of groups) {
  const moduleRoot = join(native.prefix, 'src/lean', ...(group === 'Lake' ? ['lake'] : []));
  const sources = [...files(join(moduleRoot, group)).filter(file => file.endsWith('.lean')), join(moduleRoot, group + '.lean')].sort();
  const objects = [];
  for (const file of sources) {
    keepDiskReserve();
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
    const cSha256 = await generatedSourceHash(base);
    if (archiveGeneratedC && existsSync(base + '.c')) {
      const archive = base + '.c.gz', temporary = archive + '.partial';
      // A failed prior compression is disposable; the original C remains
      // until streaming decompression has reproduced its exact hash.
      if (existsSync(temporary)) unlinkSync(temporary);
      await pipeline(createReadStream(base + '.c'), createGzip({ level: 1 }),
        createWriteStream(temporary, { flags: 'wx' }));
      const verified = createHash('sha256');
      for await (const bytes of createReadStream(temporary).pipe(createGunzip())) verified.update(bytes);
      if (verified.digest('hex') !== cSha256) throw new Error('Generated C archive verification failed');
      renameSync(temporary, archive); unlinkSync(base + '.c');
    }
    objects.push(base + '.o');
    audit.push({ module: name, sourceSha256, cSha256, objectSha256: await hashFile(base + '.o'),
      ...(archiveGeneratedC ? { cArchiveSha256: await hashFile(base + '.c.gz') } : {}) });
  }
  const response = join(build, `${group}.archive.rsp`);
  writeFileSync(response, objects.map(file => JSON.stringify(file)).join('\n') + '\n');
  const library = join(build, `lib/lean/lib${group}.a`);
  run(sdk.tool('emar'), ['rcs', library + '.partial', '@' + response]);
  renameSync(library + '.partial', library);
}
writeFileSync(join(output, 'standard-library-audit.json'), JSON.stringify({ ...provenance, compileIdentity, modules: audit }, null, 2) + '\n');
writeFileSync(join(output, 'progress.json'), JSON.stringify({ status: 'complete', completed: audit.length, groups }) + '\n');
console.log(JSON.stringify({ output, libraries: groups, modules: audit.length }));
