// Pure helpers for the Phase 2 milestone D link toolchain (docs/TOOLCHAIN_SLIMMING.md):
// which upstream emsdk members the Node link driver needs, and the notices that
// accompany them. scripts/link-driver/build-toolchain.mjs uses these to repackage
// each pinned emsdk archive into
//   emscripten-<version>-<platform>-tools   native clang, wasm-ld, llvm-objcopy,
//                                           llvm-nm and Binaryen, per platform;
//   emscripten-<version>-lasm-shared         Emscripten's JavaScript compiler subset
//                                           (with Lasm's reviewed repairs) and the
//                                           prebuilt wasm64 PIC sysroot, shared.
// The product never imports this file; it consumes the published archives.
import { platformFamily } from '../lean-dist/tiers.mjs';

/** Programs src/link-driver runs (compile.mjs and the recipe's link pipeline). */
export const nativeTools = Object.freeze(['clang', 'wasm-ld', 'llvm-objcopy', 'llvm-nm',
  'wasm-opt', 'wasm-emscripten-finalize', 'wasm-metadce']);

export const nativeArchiveName = (version, platform) => `emscripten-${version}-${platform}-tools`;
export const sharedArchiveName = version => `emscripten-${version}-lasm-shared`;
/** Directories inside the shared archive root. */
export const sharedLayout = Object.freeze({ emscripten: 'emscripten', cache: 'cache' });

export function nativeRoots(platform) {
  const suffix = platformFamily(platform) === 'win32' ? '.exe' : '';
  return nativeTools.map(name => `bin/${name}${suffix}`);
}

/** SDK members (relative to the archive's install/ root) worth staging for the native archive. */
export function nativeCandidate(path) {
  return /^bin\/[^/]+$/.test(path) || /^lib\/[^/]+\.(?:so(?:\.[0-9.]+)?|dylib|dll)$/.test(path)
    || /^lib\/clang\/[0-9]+\/include\/.+/.test(path);
}

/** clang's resource headers: lib/clang/<major>/include. */
export const resourceHeader = path => /^lib\/clang\/[0-9]+\/include\/.+/.test(path);

/** Shared-library names from load commands, resolved to SDK members (or null for OS libraries). */
export function resolveNativeImport(name, platform, members) {
  const family = platformFamily(platform);
  if (family === 'darwin') {
    if (!/^@(?:rpath|loader_path|executable_path)\//.test(name)) return null;
    name = name.slice(name.lastIndexOf('/') + 1);
  }
  if (name.includes('/') || name.includes('\\')) return null;
  const candidates = ['bin/' + name, 'lib/' + name];
  if (family === 'win32') {
    const lower = candidates.map(candidate => candidate.toLowerCase());
    return members.find(member => lower.includes(member.toLowerCase())) ?? null;
  }
  return members.find(member => candidates.includes(member)) ?? null;
}

/** Emscripten tree members (relative to install/emscripten/) the Node driver uses:
 * the JavaScript compiler (tools/compiler.mjs, src/), the acorn optimizer
 * (tools/acorn-optimizer.mjs, acorn, acorn-import-phases, terser), version files,
 * and the licence texts of the system libraries the sysroot is built from. */
export function sharedJsCandidate(path) {
  if (path.split('/').some(part => part === '__pycache__')) return false;
  if (['LICENSE', 'AUTHORS', 'emscripten-version.txt', 'emscripten-revision.txt', 'package.json'].includes(path)) return true;
  if (path.startsWith('src/')) return true;
  if (/^tools\/[^/]+\.mjs$/.test(path)) return true;
  if (path.startsWith('third_party/terser/')) return true;
  if (path.startsWith('node_modules/acorn/') || path.startsWith('node_modules/acorn-import-phases/')) return true;
  return /^system\/(?:.+\/)?(?:LICENSE|COPYRIGHT|COPYING|NOTICE)[^/]*$/i.test(path);
}

/** Every reviewed repair must land in the subset, be a system-library source
 * compiled into the prebuilt sysroot (build-sysroot.mjs builds from the repaired
 * tree), or patch only the Python driver the subset omits. */
export function checkRepairCoverage(repairs, selected) {
  const applied = [], sysroot = [], omitted = [];
  for (const file of repairs.files) {
    if (selected.has(file.path)) applied.push(file.path);
    else if (/^system\/lib\/.+\.(?:c|h|cpp)$/.test(file.path)) sysroot.push(file.path);
    else if (file.path.endsWith('.py')) omitted.push(file.path);
    else throw new Error(`The shared subset omits the repaired file ${file.path}`);
  }
  return { applied, sysroot, omitted };
}

/** Stable digest input for a tree: sorted path, type, size, hash, mode. */
export function treeDigestInput(entries) {
  return entries.map(entry => [entry.path, entry.type, entry.type === 'file' ? `${entry.size}:${entry.sha256}:${entry.executable ? 'x' : '-'}`
    : entry.target ?? ''].join('\t')).sort().join('\n');
}

export function nativeNotice({ name, version, platform, upstream, releasesCommit, sources, tools, libraries, external }) {
  return `${name}

This archive is an unmodified subset of the official Emscripten ${version} SDK
binaries (emsdk "wasm-binaries", emscripten-releases ${releasesCommit}) for
${platform}, repackaged by Lasm so that ordinary builds download only the native
programs Lasm's Node link driver runs. Lasm did not modify, rebuild or relink any
file. It selected:

${tools.map(tool => `  ${tool}`).join('\n')}
${libraries.length ? `\nshared libraries named by those programs' own load commands:\n${libraries.map(file => `  ${file}`).join('\n')}\n` : ''}
and clang's resource headers (lib/clang/*/include). Operating-system libraries
remain external: ${external.length ? external.join(', ') : 'none'}.

Complete original archive: ${upstream.url}
SHA-256 ${upstream.sha256}, ${upstream.bytes} bytes.

Sources (emscripten-releases DEPS, ${sources.deps}):
  LLVM (clang, lld, llvm-objcopy, llvm-nm): ${sources.llvm.repository} commit ${sources.llvm.revision}
    (their --version output names ${sources.llvm.reportedRevision}, an ancestor of that commit)
  Binaryen (wasm-opt, wasm-emscripten-finalize, wasm-metadce): ${sources.binaryen.repository} commit ${sources.binaryen.revision}

The emsdk archive carries no licence texts for LLVM or Binaryen. The files
llvm-LICENSE.TXT, clang-LICENSE.TXT and lld-LICENSE.TXT (Apache License 2.0 with
LLVM Exceptions) and binaryen-LICENSE.txt (Apache License 2.0) beside this
NOTICE are verbatim copies from those source commits.
`;
}

export function sharedNotice({ name, version, releasesCommit, sources, upstreams, repairs, sysroot }) {
  return `${name}

Platform-independent part of Lasm's Emscripten ${version} link toolchain.

emscripten/ is an unmodified subset of the emscripten/ directory of the official
Emscripten ${version} SDK binaries (emscripten-releases ${releasesCommit}; Emscripten
${sources.emscripten.repository} commit ${sources.emscripten.revision}):
the JavaScript compiler (src/, tools/*.mjs), acorn, acorn-import-phases and terser,
version files, LICENSE and AUTHORS, and the licence texts under system/ of the
libraries the sysroot is built from, except for these reviewed repairs, recorded
with their original and repaired SHA-256 in Lasm's src/sdk-repairs.json
(manifest SHA-256 ${repairs.manifestSha256}):
${repairs.applied.map(path => `  emscripten/${path}`).join('\n')}
The repaired system-library sources ${repairs.sysroot.join(', ')}
are compiled into the prebuilt libraries under cache/.

These files are byte-identical in the emsdk archives below:
${upstreams.map(upstream => `  ${upstream.platform}: ${upstream.url}\n    SHA-256 ${upstream.sha256}`).join('\n')}

cache/ is a prebuilt Emscripten cache: the wasm64 sysroot headers that emcc
installs, plus ${sysroot.libraries} wasm64 PIC system libraries that Lasm's
scripts/link-driver/build-sysroot.mjs built from the same Emscripten tree with
embuilder (SOURCE_DATE_EPOCH ${sysroot.sourceDateEpoch}, debug sections removed with
llvm-objcopy --strip-debug). Sysroot archive SHA-256 ${sysroot.sha256}.
Their licences are under emscripten/LICENSE and emscripten/system/**/LICENSE*,
COPYRIGHT and COPYING (musl, LLVM libc++/libc++abi/libunwind/compiler-rt,
mimalloc, ...).
`;
}

/** Maintainer use of published or freshly built archives (CI fixtures, smoke
 * tests): extract into a new directory and describe the result in the shape
 * src/application-link.mjs expects of a compiler toolchain. */
export async function extractToolchain(archives, directory) {
  const { mkdirSync, readdirSync, createReadStream } = await import('node:fs');
  const { pipeline: pipe } = await import('node:stream/promises');
  const { createZstdDecompress: zstd } = await import('node:zlib');
  const { extract } = await import('tar');
  mkdirSync(directory, { recursive: true });
  if (readdirSync(directory).length) throw new Error('Extract the toolchain into a new, empty directory');
  for (const archive of archives)
    await pipe(createReadStream(archive), zstd(), extract({ cwd: directory, strict: true, preservePaths: false, preserveOwner: false }));
  return directory;
}

export async function toolchainSdk(directory, { version = '6.0.9', platform = `${process.platform}-${process.arch}`, env = process.env } = {}) {
  const { join } = await import('node:path');
  const { existsSync } = await import('node:fs');
  const prefix = join(directory, nativeArchiveName(version, platform)), shared = join(directory, sharedArchiveName(version));
  for (const path of [join(prefix, 'bin'), join(shared, sharedLayout.emscripten), join(shared, sharedLayout.cache, 'sysroot_install.stamp')])
    if (!existsSync(path)) throw new Error(`Incomplete link toolchain: ${path}`);
  const clean = { ...env };
  for (const key of Object.keys(clean)) if (/^(?:EM_|EMCC_|EMSDK|PYTHON|LLVM_|BINARYEN_)/.test(key)) delete clean[key];
  const cache = join(shared, sharedLayout.cache);
  return { prefix, driver: join(shared, sharedLayout.emscripten), cache, version, platform,
    env: { ...clean, EM_CACHE: cache, BINARYEN_CORES: '1', SOURCE_DATE_EPOCH: '315532800' },
    execute(tool) { throw new Error(`The Node link toolchain has no ${tool}`); } };
}
