import { readFile, readdir, lstat } from 'node:fs/promises';
import { join, resolve, relative, isAbsolute } from 'node:path';
import { fileURLToPath } from 'node:url';
import { hashFile } from './managed-artifacts.mjs';

export const applicationRuntimeCatalog = JSON.parse(await readFile(new URL('./application-runtimes.json', import.meta.url), 'utf8'));
const packageRoot = fileURLToPath(new URL('../', import.meta.url));

/** The catalog authenticates the manifest; the manifest authenticates every byte. */
export async function verifyApplicationRuntime(directory, expected) {
  directory = resolve(directory);
  if (!(await lstat(directory)).isDirectory()) throw new Error('Application runtime must be an ordinary directory');
  const manifestFile = join(directory, 'target.json');
  if (!(await lstat(manifestFile)).isFile() || await hashFile(manifestFile) !== expected.manifestSha256)
    throw new Error('Application runtime manifest does not match its release catalog');
  const manifest = JSON.parse(await readFile(manifestFile, 'utf8'));
  if (manifest.schema !== 1 || manifest.name !== expected.name || manifest.memoryLayout !== 'wasm64'
      || manifest.threading !== 'pthreads' || manifest.allocator !== 'mimalloc'
      || manifest.applicationSymbolHook !== 'lasm_lookup_application_symbol')
    throw new Error('Unsupported application runtime manifest');
  const remaining = new Set(Object.keys(manifest.files));
  for (const name of remaining) {
    if (isAbsolute(name) || name.includes('\\') || name.split('/').some(part => !part || part === '.' || part === '..'))
      throw new Error('Invalid application runtime file path');
  }
  async function walk(base) {
    for (const entry of await readdir(base, { withFileTypes: true })) {
      const path = join(base, entry.name), name = relative(directory, path).replaceAll('\\', '/');
      if (entry.isDirectory()) { await walk(path); continue; }
      if (!entry.isFile()) throw new Error(`Application runtime links and special files are not allowed: ${name}`);
      if (name === 'target.json') continue;
      const record = manifest.files[name];
      if (!remaining.delete(name) || (await lstat(path)).size !== record.bytes || await hashFile(path) !== record.sha256)
        throw new Error(`Application runtime integrity check failed: ${name}`);
    }
  }
  await walk(directory);
  if (remaining.size) throw new Error(`Application runtime files missing: ${[...remaining].join(', ')}`);
  for (const name of [...manifest.libraries, 'exports.json', 'include/lean/lean.h', 'THIRD_PARTY_NOTICES.txt'])
    if (!Object.hasOwn(manifest.files, name)) throw new Error(`Unverified application runtime input: ${name}`);
  return { directory, manifest, identity: expected.manifestSha256 };
}

export async function applicationRuntime(lean, options = {}) {
  const expected = (options.catalog ?? applicationRuntimeCatalog).lean[lean.version];
  if (!expected) throw new Error(`No application runtime is implemented for Lean ${lean.version}`);
  const directory = options.directory ?? process.env.LASM_APPLICATION_RUNTIME ?? join(packageRoot, 'targets', expected.name);
  let runtime;
  try { runtime = await verifyApplicationRuntime(directory, expected); }
  catch (error) {
    if (error.code === 'ENOENT') throw new Error(`The Lean ${lean.version} application runtime bundle is missing. Install the complete Lasm package. Maintainers can supply LASM_APPLICATION_RUNTIME.`, { cause: error });
    throw error;
  }
  if (runtime.manifest.lean !== lean.version || runtime.manifest.leanCommit !== lean.commit)
    throw new Error('Native Lean and the application runtime do not match');
  return runtime;
}
