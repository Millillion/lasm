import { readFile, mkdir, writeFile } from 'node:fs/promises';
import { join, resolve, dirname, delimiter } from 'node:path';
import { execFileSync } from 'node:child_process';
import { provisionArtifact, managedCacheDirectory } from './managed-artifacts.mjs';
import { provisionPython } from './managed-python.mjs';
import { executableName } from './platform.mjs';
import { verifyNativeProgram } from './native-program.mjs';

export const sdkCatalog = JSON.parse(await readFile(new URL('./sdk-tools.json', import.meta.url), 'utf8'));

/** Immutable SDK downloads; generated sysroot/cache/configuration stays separate. */
export async function provisionSdk(options = {}) {
  const platform = options.platform ?? process.platform, arch = options.arch ?? process.arch;
  const host = `${platform}-${arch}`, release = options.catalog ?? sdkCatalog;
  const artifact = release.artifacts[host];
  if (!artifact) throw new Error(`Managed compiler SDK ${release.version} is not implemented for ${host}. ${release.unavailable?.[host] ?? ''}`);
  const cache = options.cache ?? managedCacheDirectory();
  const python = await provisionPython({ cache, log: options.log });
  const installed = await provisionArtifact(artifact, { ...options, cache, python: python.executable });
  const prefix = installed.directory;
  const nativePrograms = {};
  for (const name of ['clang', 'wasm-ld', 'wasm-opt'])
    nativePrograms[name] = await verifyNativeProgram(join(prefix, 'bin', executableName(name, platform)), platform, arch);
  const version = (await readFile(join(prefix, 'emscripten/emscripten-version.txt'), 'utf8')).trim().replaceAll('"', '');
  if (version !== release.version) throw new Error(`Managed compiler SDK version mismatch: ${version}`);
  const state = resolve(cache, 'sdk-state', installed.identity);
  await mkdir(state, { recursive: true });
  const config = join(state, 'config.py');
  // JSON string literals are also valid Python literals for these paths.
  await writeFile(config, [
    ['LLVM_ROOT', join(prefix, 'bin')], ['BINARYEN_ROOT', prefix], ['NODE_JS', process.execPath],
    ['CACHE', join(state, 'cache')], ['PORTS', join(state, 'ports')],
  ].map(([key, value]) => `${key} = ${JSON.stringify(value)}`).join('\n') + '\n');
  const env = { ...process.env };
  for (const key of Object.keys(env)) if (/^(?:EM_|EMCC_|EMSDK|PYTHON|LLVM_|BINARYEN_)/.test(key)) delete env[key];
  Object.assign(env, { EM_CONFIG: config, EMSDK_PYTHON: python.executable, PYTHONDONTWRITEBYTECODE: '1',
    BINARYEN_CORES: '1', EMCC_CORES: '1',
    PATH: [join(prefix, 'bin'), dirname(python.executable), dirname(process.execPath)].join(delimiter) });
  const execute = (tool, args, settings = {}) => {
    if (!['emcc', 'em++', 'emar', 'emranlib'].includes(tool)) throw new Error('Unsupported managed compiler tool');
    // Emscripten imports sibling Python modules, so -s -E preserves its script
    // directory while ignoring user packages/configuration. -I would remove it.
    return execFileSync(python.executable, ['-B', '-E', '-s', join(prefix, 'emscripten', tool + '.py'), ...args],
      { env, windowsHide: true, ...settings });
  };
  return { ...installed, prefix, python, state, env, execute, nativePrograms, version, platform: host,
    runtimePatchesApplied: false };
}
