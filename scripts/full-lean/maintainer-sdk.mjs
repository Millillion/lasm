// Maintainer builds may use either the historical emsdk tree or the same
// immutable, checksum-verified SDK and separate mutable cache as the product.
import { readFileSync, mkdirSync, writeFileSync, renameSync } from 'node:fs';
import { join, resolve, delimiter } from 'node:path';
import { randomUUID } from 'node:crypto';
import { provisionSdk } from '../../src/managed-sdk.mjs';
import { managedCacheDirectory } from '../../src/managed-artifacts.mjs';
import { patchSdk } from './patch-sdk.mjs';

export function maintainerPython(executable, state) {
  if (process.platform === 'win32') throw new Error('The shell-based maintainer recipe requires a POSIX host');
  const quoted = "'" + executable.replaceAll("'", "'\\''") + "'";
  const script = `#!/bin/sh\nexec ${quoted} -B -s "$@"\n`;
  mkdirSync(state, { recursive: true });
  const file = join(state, 'maintainer-python'), partial = file + '.' + randomUUID();
  writeFileSync(partial, script, { flag: 'wx', mode: 0o755 });
  renameSync(partial, file);
  return file;
}

export async function maintainerSdk({ managed = false, directory, cache } = {}) {
  if (!managed) {
    directory = resolve(directory ?? '.cache/emsdk-6.0.9-dev');
    const driver = join(directory, 'upstream/emscripten');
    return { directory, driver, mode: 'emsdk', env: { ...process.env },
      tool: name => join(driver, name), llvm: join(directory, 'upstream/bin'),
      cacheDirectory: join(driver, 'cache'), patchSha256: patchSdk(directory) };
  }
  cache = resolve(cache ?? managedCacheDirectory());
  const sdk = await provisionSdk({ cache });
  const repairs = JSON.parse(readFileSync(new URL('../../src/sdk-repairs.json', import.meta.url)));
  if (!sdk.runtimePatchesApplied || sdk.version !== repairs.version)
    throw new Error('Maintainer SDK requires the reviewed managed driver repairs');
  // This is a maintainer recipe, which additionally needs CMake/make/patch.
  // End-user builds retain the product's restricted compiler PATH.
  const env = { ...sdk.env, PATH: [sdk.env.PATH, process.env.PATH].filter(Boolean).join(delimiter) };
  // Emscripten's shell entrypoints pass -E, which ignores the environment's
  // PYTHONDONTWRITEBYTECODE. Pass -B in argv so Python cannot add bytecode to
  // either the immutable Python tree or the verified derived SDK driver.
  env.EMSDK_PYTHON = maintainerPython(sdk.python.executable, sdk.state);
  return { directory: sdk.prefix, driver: sdk.driver, mode: 'managed', env,
    tool: name => join(sdk.driver, name), llvm: join(sdk.prefix, 'bin'),
    cacheDirectory: join(sdk.state, 'cache'), patchSha256: repairs.patchSha256,
    identity: sdk.identity, driverIdentity: sdk.driverIdentity, toolCache: resolve(cache) };
}
