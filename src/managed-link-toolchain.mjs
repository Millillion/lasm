// The default compiler toolchain (docs/TOOLCHAIN_SLIMMING.md, Phase 2 milestone D):
// the per-platform native programs the Node link driver runs (clang, wasm-ld,
// llvm-objcopy, llvm-nm, wasm-opt, wasm-emscripten-finalize, wasm-metadce) and
// the shared Emscripten JavaScript subset plus prebuilt wasm64 sysroot, both
// repackaged deterministically from the pinned emsdk release. No Python and no
// emcc. The full SDK (src/managed-sdk.mjs) remains for the maintainer emcc driver.
import { readFile } from 'node:fs/promises';
import { join } from 'node:path';
import { provisionArtifact, deriveArtifact, validateArtifact, managedCacheDirectory, linkArtifactTree } from './managed-artifacts.mjs';
import { assertSupportedHost, executableName } from './platform.mjs';
import { verifyNativeProgram } from './native-program.mjs';

export const linkToolchainCatalog = JSON.parse(await readFile(new URL('./link-toolchain.json', import.meta.url), 'utf8'));
export const linkToolchainPrograms = Object.freeze(['clang', 'wasm-ld', 'llvm-objcopy', 'llvm-nm',
  'wasm-opt', 'wasm-emscripten-finalize', 'wasm-metadce']);

/** The catalog's two archives for one host, validated. */
export function linkToolchainArtifacts(release, host) {
  if (release?.schema !== 1 || !/^\d+\.\d+\.\d+$/.test(release.version ?? '')) throw new Error('Invalid link toolchain catalog');
  const native = release.native?.[host];
  if (!native) throw new Error(`The managed compiler tools (Emscripten ${release.version}) are not available for ${host}`);
  validateArtifact(native); validateArtifact(release.shared);
  return { native, shared: release.shared };
}

/** Environment for the native tools and Emscripten's JavaScript compiler. Only
 * SOURCE_DATE_EPOCH (also set by the recipe) and BINARYEN_CORES are fixed, as
 * recorded; inherited Emscripten/Python/LLVM/Binaryen variables are removed. */
export function linkToolchainEnvironment(env = process.env) {
  const result = { ...env };
  for (const key of Object.keys(result)) if (/^(?:EM_|EMCC_|EMSDK|PYTHON|LLVM_|BINARYEN_)/.test(key)) delete result[key];
  return Object.assign(result, { BINARYEN_CORES: '1', SOURCE_DATE_EPOCH: '315532800' });
}

/** Download (or reuse) both archives and hard-link them into one verified prefix
 * under derived/, keyed by both archive identities:
 *   bin/, lib/clang/<major>/include   native programs and clang resource headers
 *   emscripten/                      Emscripten's JavaScript compiler subset
 *   cache/                           prebuilt Emscripten cache (wasm64 PIC sysroot)
 * On a cache hit only the assembled prefix is verified. */
export async function provisionLinkToolchain(options = {}) {
  const platform = options.platform ?? process.platform, arch = options.arch ?? process.arch;
  assertSupportedHost(platform, arch);
  const host = `${platform}-${arch}`, release = options.catalog ?? linkToolchainCatalog;
  const { native, shared } = linkToolchainArtifacts(release, host);
  const cache = options.cache ?? managedCacheDirectory();
  const components = [{ artifact: native, label: `compiler tools (Emscripten ${release.version})` },
    { artifact: shared, label: `compiler libraries (Emscripten ${release.version})` }];
  const provenance = { kind: 'link-toolchain', schema: 1, version: release.version,
    components: components.map(({ artifact }) => validateArtifact(artifact)) };
  options.progress?.({ stage: 'Checking compiler tools' });
  const installed = await deriveArtifact(provenance, async tree => {
    const owners = new Map();
    for (const { artifact, label } of components) {
      const component = await provisionArtifact(artifact, { ...options, cache, label });
      options.progress?.({ stage: 'Assembling compiler tools' });
      await linkArtifactTree(component.directory, component.receipt, tree, owners, artifact.name, 'Compiler tool archive');
    }
  }, { cache, log: options.log, signal: options.signal, progress: options.progress });
  const prefix = installed.directory;
  const nativePrograms = {};
  for (const name of linkToolchainPrograms)
    nativePrograms[name] = await verifyNativeProgram(join(prefix, 'bin', executableName(name, platform)), platform, arch);
  const version = JSON.parse(await readFile(join(prefix, 'emscripten/emscripten-version.txt'), 'utf8'));
  if (version !== release.version) throw new Error(`Managed compiler tools version mismatch: ${version}`);
  return { ...installed, prefix, driver: join(prefix, 'emscripten'), cache: join(prefix, 'cache'),
    env: linkToolchainEnvironment(options.env), version: release.version, platform: host, nativePrograms,
    // The identities the link recipe was bound to (src/link-driver/compile.mjs checkToolchainIdentity).
    toolchain: { native: native.sha256, shared: shared.sha256 },
    execute(tool) { throw new Error(`The managed compiler tools have no ${tool}; the Node link driver runs them directly`); } };
}
