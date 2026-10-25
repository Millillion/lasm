// The default compiler toolchain (docs/TOOLCHAIN_SLIMMING.md, Phase 2 milestone D):
// the per-platform native programs the Node link driver runs (clang, wasm-ld,
// llvm-objcopy, llvm-nm, wasm-opt, wasm-emscripten-finalize, wasm-metadce) and
// the shared Emscripten JavaScript subset plus prebuilt wasm64 sysroot, both
// repackaged deterministically from the pinned emsdk release. No Python and no
// emcc. The full SDK (src/managed-sdk.mjs) remains for the maintainer emcc driver.
import { readFile } from 'node:fs/promises';
import { join } from 'node:path';
import { availableParallelism, freemem } from 'node:os';
import { readFileSync } from 'node:fs';
import { execFileSync } from 'node:child_process';
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

/** Parallel jobs of a build: C compilations, Binaryen (wasm-opt) threads and
 * the overlapped planning probe link. LASM_BUILD_JOBS overrides; otherwise the
 * machine's CPUs (at most 8), capped by available memory: a build peaks at
 * about 1.1-1.7 GiB with one job (one wasm-ld probe link, or Lean loading its
 * libraries), and each further job can add up to about one more link. Outputs
 * do not depend on the job count (test/build-jobs.test.mjs); the maintainer
 * resource guards set LASM_BUILD_JOBS=1. */
export const buildMemory = Object.freeze({ base: 2 * 1024 ** 3, perJob: 1024 ** 3 });
export function buildJobs(env = process.env, parallelism = availableParallelism(), memory = availableBuildMemory()) {
  const value = env.LASM_BUILD_JOBS;
  if (value !== undefined && value !== '') {
    if (!/^[1-9]\d{0,2}$/.test(value)) throw new Error(`LASM_BUILD_JOBS must be a positive integer, not ${JSON.stringify(value)}`);
    return Number(value);
  }
  const byMemory = Number.isFinite(memory) ? 1 + Math.floor(Math.max(0, memory - buildMemory.base) / buildMemory.perJob) : Infinity;
  return Math.max(1, Math.min(8, parallelism, byMemory));
}

/** Memory a build can still use, in bytes. Linux: MemAvailable, lowered to the
 * headroom of every enclosing cgroup with a limit (v2 memory.max - memory.current,
 * v1 limit - usage), so containers are respected. macOS: free, inactive,
 * speculative and purgeable pages (vm_stat), which the system hands out on
 * demand. Elsewhere: the OS's available physical memory. */
let measuredMemory;
export function availableBuildMemory({ platform = process.platform, read = path => readFileSync(path, 'utf8'),
  run = (command, args) => execFileSync(command, args, { encoding: 'utf8', timeout: 5000, stdio: ['ignore', 'pipe', 'ignore'] }),
  free = freemem, cache = true } = {}) {
  if (cache && measuredMemory !== undefined) return measuredMemory;
  let memory;
  try {
    if (platform === 'linux') memory = linuxAvailableMemory(read);
    else if (platform === 'darwin') memory = darwinAvailableMemory(run(`/usr/bin/vm_stat`, []));
  } catch { memory = undefined; }
  if (!(memory > 0)) memory = free();
  if (cache) measuredMemory = memory;
  return memory;
}

export function linuxAvailableMemory(read) {
  const meminfo = /^MemAvailable:\s+(\d+) kB$/m.exec(read('/proc/meminfo'));
  let memory = meminfo ? Number(meminfo[1]) * 1024 : Infinity;
  const number = text => { const value = text.trim(); return /^\d+$/.test(value) ? Number(value) : undefined; };
  const attempt = (fn) => { try { return fn(); } catch { return undefined; } };
  for (const line of attempt(() => read('/proc/self/cgroup'))?.trim().split('\n') ?? []) {
    const [, controllers, path] = line.split(':');
    if (controllers === '' && path) {
      // cgroup v2: this group and each ancestor may set memory.max.
      for (let group = path; ; group = group.slice(0, group.lastIndexOf('/')) || '/') {
        const base = '/sys/fs/cgroup' + (group === '/' ? '' : group);
        const max = attempt(() => number(read(base + '/memory.max'))), current = attempt(() => number(read(base + '/memory.current')));
        if (max !== undefined && current !== undefined) memory = Math.min(memory, Math.max(0, max - current));
        if (group === '/') break;
      }
    } else if (controllers?.split(',').includes('memory') && path) {
      const base = '/sys/fs/cgroup/memory' + (path === '/' ? '' : path);
      const limit = attempt(() => number(read(base + '/memory.limit_in_bytes'))), usage = attempt(() => number(read(base + '/memory.usage_in_bytes')));
      // v1 reports "no limit" as a huge number.
      if (limit !== undefined && usage !== undefined && limit < 2 ** 60) memory = Math.min(memory, Math.max(0, limit - usage));
    }
  }
  return memory;
}

export function darwinAvailableMemory(vmStat) {
  const page = Number(/page size of (\d+) bytes/.exec(vmStat)?.[1] ?? 4096);
  const pages = name => Number(new RegExp(`^${name}:\\s+(\\d+)\\.`, 'm').exec(vmStat)?.[1] ?? 0);
  const total = ['Pages free', 'Pages inactive', 'Pages speculative', 'Pages purgeable'].reduce((sum, name) => sum + pages(name), 0);
  return total > 0 ? total * page : undefined;
}

/** Environment for the native tools and Emscripten's JavaScript compiler. Only
 * SOURCE_DATE_EPOCH (also set by the recipe) and BINARYEN_CORES (buildJobs) are
 * set; inherited Emscripten/Python/LLVM/Binaryen variables are removed. */
export function linkToolchainEnvironment(env = process.env) {
  const result = { ...env };
  for (const key of Object.keys(result)) if (/^(?:EM_|EMCC_|EMSDK|PYTHON|LLVM_|BINARYEN_)/.test(key)) delete result[key];
  return Object.assign(result, { BINARYEN_CORES: String(buildJobs(env)), SOURCE_DATE_EPOCH: '315532800' });
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
    const owners = new Map(), known = new Map();
    // Independent archives download and extract concurrently; linking keeps their order.
    const installed = await Promise.all(components.map(({ artifact, label }) => provisionArtifact(artifact, { ...options, cache, label })));
    for (let index = 0; index < components.length; index++) {
      options.progress?.({ stage: 'Assembling compiler tools' });
      await linkArtifactTree(installed[index].directory, installed[index].receipt, tree, owners, components[index].artifact.name, 'Compiler tool archive', known);
    }
    return known;
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
