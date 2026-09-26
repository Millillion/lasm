import { readFile, lstat } from 'node:fs/promises';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { fileInventory } from './application-files.mjs';
import { hashWasmtimeFile, wasmtimeCpuTarget } from './wasmtime-artifact.mjs';

export const wasmtimeBundleFiles = ['compiler.so', 'instance.so', 'native-api.node',
  'libwasmtime.so', 'LICENSE.wasmtime'];

/** Verify a maintainer-built bundle before loading any of its native code. */
export async function verifyWasmtimeBundle(directory, expected,
  { platform = process.platform, arch = process.arch } = {}) {
  if (platform !== 'linux' || arch !== 'x64')
    throw new Error(`A Wasmtime native bundle is not implemented for ${platform}-${arch}`);
  directory = resolve(directory);
  const manifestFile = join(directory, 'manifest.json');
  if (!expected || !/^[a-f0-9]{64}$/.test(expected.manifestSha256)
    || !(await lstat(manifestFile)).isFile()
    || await hashWasmtimeFile(manifestFile) !== expected.manifestSha256)
    throw new Error('Wasmtime native bundle manifest differs from its release catalog');
  const manifest = JSON.parse(await readFile(manifestFile, 'utf8'));
  if (manifest.schema !== 1 || manifest.backend !== 'wasmtime-49.0.0'
    || manifest.platform !== platform || manifest.arch !== arch
    || manifest.cpuTarget !== wasmtimeCpuTarget || manifest.cpuFeatures !== 'baseline')
    throw new Error('Wasmtime native bundle configuration does not match the current platform');
  const inventory = await fileInventory(directory);
  const expectedNames = [...wasmtimeBundleFiles, 'manifest.json'].sort();
  if (JSON.stringify(Object.keys(inventory).sort()) !== JSON.stringify(expectedNames)
    || !manifest.files || JSON.stringify(Object.keys(manifest.files).sort()) !== JSON.stringify(wasmtimeBundleFiles.toSorted()))
    throw new Error('Wasmtime native bundle contains missing or unrecorded files');
  for (const name of wasmtimeBundleFiles) {
    const item = manifest.files[name];
    if (!item || !Number.isSafeInteger(item.bytes) || item.bytes < 1
      || !/^[a-f0-9]{64}$/.test(item.sha256) || inventory[name] !== item.sha256
      || (await lstat(join(directory, name))).size !== item.bytes)
      throw new Error(`Wasmtime native bundle file changed: ${name}`);
  }
  return { directory, manifest, identity: expected.manifestSha256 };
}

/** Bundles travel inside the npm package; developers need no native C SDK. */
export async function packagedWasmtimeBundle(options = {}) {
  const platform = options.platform ?? process.platform, arch = options.arch ?? process.arch;
  const catalog = options.catalog ?? JSON.parse(await readFile(new URL('./wasmtime-bundles.json', import.meta.url), 'utf8'));
  if (catalog.schema !== 1 || !catalog.platforms || typeof catalog.platforms !== 'object' || Array.isArray(catalog.platforms))
    throw new Error('Invalid Wasmtime native bundle catalog');
  const expected = catalog.platforms?.[`${platform}-${arch}`];
  if (!expected) return null;
  const directory = options.directory ?? fileURLToPath(new URL(`./wasmtime-native/${platform}-${arch}/`, import.meta.url));
  return verifyWasmtimeBundle(directory, expected, { platform, arch });
}
