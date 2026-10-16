#!/usr/bin/env node
// Maintainer builder for the Phase 2 prebuilt Emscripten sysroot
// (docs/TOOLCHAIN_SLIMMING.md). From the pinned, repaired managed SDK it builds,
// in a fresh private Emscripten cache, exactly the system libraries emcc selects
// for Lasm's links (src/link-driver/recipe-emscripten-<version>.json
// sysroot.libraries) plus the installed sysroot headers, then packs them as one
// deterministic, platform-independent tar.zst whose root is a ready-to-use
// Emscripten cache directory (EM_CACHE=<root>, EM_FROZEN_CACHE=1).
//
//   node scripts/full-lean/run-bounded.mjs --report .work/<id>.json -- \
//     /usr/bin/env LASM_TOOLCHAIN_CACHE=$PWD/.cache/link-driver/tools \
//     python3 scripts/full-lean/base-pages.py node scripts/link-driver/build-sysroot.mjs \
//       --output .work/link-driver/<new>
//   node scripts/link-driver/build-sysroot.mjs --extract ARCHIVE DIR   (prints EM_CACHE)
//
// Determinism: libraries are built with the product SOURCE_DATE_EPOCH
// (src/managed-sdk.mjs; mimalloc embeds __DATE__/__TIME__). Their DWARF names the
// private cache's absolute include directory, so every library is stored with
// debug sections removed (llvm-objcopy --strip-debug). Lasm links always pass
// wasm-ld --strip-debug, so no output depends on that DWARF; byte equality of
// complete builds against emcc's own cache is the acceptance gate. Members are
// sorted with fixed owner, mode and mtime (scripts/lean-dist/tiers.mjs).
import { chmodSync, createReadStream, createWriteStream, existsSync, lstatSync, mkdirSync,
  readFileSync, readdirSync, statSync, writeFileSync } from 'node:fs';
import { pipeline } from 'node:stream/promises';
import { createZstdDecompress } from 'node:zlib';
import { basename, join, relative, resolve } from 'node:path';
import { createHash } from 'node:crypto';
import { execFileSync } from 'node:child_process';
import { parseArgs } from 'node:util';
import { fileURLToPath } from 'node:url';
import { packArchive } from '../lean-dist/tiers.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');
const zstd = { level: 19, windowLog: 27, long: true };

/** Directory names inside the archive root, relative to the Emscripten cache. */
export const libraryDirectory = 'sysroot/lib/wasm64-emscripten/pic';
export const archiveRoot = version => `emscripten-${version}-cache-wasm64-pic`;

/** Which installed cache files belong in the archive (paths use '/'). */
export function selectCacheFile(path, libraries) {
  if (path === 'sysroot_install.stamp') return true;
  if (!path.startsWith('sysroot/')) return false; // sanity.txt, build/, symbol_lists/, locks
  if (path.startsWith(libraryDirectory + '/')) return libraries.includes(path.slice(libraryDirectory.length + 1));
  return true;
}

export async function extractSysroot(archive, directory, { readOnly = false } = {}) {
  const { extract } = await import('tar');
  mkdirSync(directory, { recursive: true });
  if (readdirSync(directory).length) throw new Error('Extract into a new, empty directory');
  await pipeline(createReadStream(archive), createZstdDecompress(),
    extract({ cwd: directory, strict: true, preservePaths: false, preserveOwner: false }));
  const [name] = readdirSync(directory);
  const cache = join(directory, name);
  if (readOnly) (function walk(path) {
    for (const entry of readdirSync(path, { withFileTypes: true })) {
      const child = join(path, entry.name);
      if (entry.isDirectory()) walk(child);
      chmodSync(child, statSync(child).mode & ~0o222);
    }
    chmodSync(path, statSync(path).mode & ~0o222);
  })(cache);
  return cache;
}

if (resolve(process.argv[1] ?? '') === fileURLToPath(import.meta.url)) {
  const { values: options, positionals } = parseArgs({ allowPositionals: true, options: {
    output: { type: 'string' }, recipe: { type: 'string', default: join(root, 'src/link-driver/recipe-emscripten-6.0.9.json') },
    extract: { type: 'boolean', default: false }, 'read-only': { type: 'boolean', default: false },
  } });
  if (options.extract) {
    const [archive, directory] = positionals;
    if (!archive || !directory) throw new Error('Usage: build-sysroot.mjs --extract ARCHIVE DIR [--read-only]');
    console.log(await extractSysroot(resolve(archive), resolve(directory), { readOnly: options['read-only'] }));
    process.exit(0);
  }
  const { ensureResourceGuard } = await import('../full-lean/resource-guard.mjs');
  await ensureResourceGuard();
  const { parseRecipe } = await import('../../src/link-driver/compile.mjs');
  const { provisionSdk } = await import('../../src/managed-sdk.mjs');
  const { executableName } = await import('../../src/platform.mjs');
  if (!process.env.LASM_TOOLCHAIN_CACHE) throw new Error('Set LASM_TOOLCHAIN_CACHE to a dedicated cache under .cache/ or .work/');
  const output = resolve(options.output ?? '');
  if (!options.output || !['.cache', '.work'].some(base => !relative(join(root, base), output).startsWith('..')))
    throw new Error('Supply a new --output directory under the ignored .cache/ or .work/ directories');
  if (existsSync(output)) throw new Error('Use a new --output directory');
  mkdirSync(output, { recursive: true });
  const recipe = parseRecipe(readFileSync(options.recipe, 'utf8'));
  const started = Date.now();
  const log = message => console.error(`[sysroot ${((Date.now() - started) / 1000).toFixed(0)}s] ${message}`);

  const sdk = await provisionSdk({ cache: resolve(process.env.LASM_TOOLCHAIN_CACHE), log });
  // The repaired-driver identity is per platform (it names that platform's SDK
  // archive); the recipe records the linux-x64 one. Any platform's repaired SDK
  // of the recorded version builds the sysroot, and link-toolchain.yml requires
  // identical archives from more than one host.
  if (sdk.version !== recipe.emscripten || !sdk.runtimePatchesApplied
      || (sdk.platform === recipe.recordedFrom?.platform && sdk.driverIdentity !== recipe.sdk.driverIdentity))
    throw new Error(`The managed SDK (${sdk.version}, ${sdk.driverIdentity}) is not the recorded one`);
  const emcache = join(output, 'build', 'cache');
  // A private cache; EM_* overrides the managed config's CACHE and PORTS.
  const env = { ...sdk.env, EM_CACHE: emcache, EM_PORTS: join(output, 'build', 'ports') };
  // Headers first without --pic, as emcc's first compile installs them: the
  // install also writes libc++.modules.json into the (non-PIC) library directory.
  const builds = [['--wasm64', 'sysroot'],
    ['--pic', '--wasm64', ...recipe.sysroot.libraries.map(name => name.replace(/\.(?:a|o)$/, ''))]];
  for (const args of builds) {
    log(`embuilder build ${args.join(' ')}`);
    execFileSync(sdk.python.executable, ['-B', '-E', '-s', join(sdk.driver, 'embuilder.py'), 'build', ...args],
      { env, stdio: ['ignore', 'inherit', 'inherit'], windowsHide: true });
  }
  writeFileSync(join(output, 'embuilder.log'), builds.map(args => `embuilder build ${args.join(' ')}`).join('\n') + '\n');

  const objcopy = join(sdk.prefix, 'bin', executableName('llvm-objcopy'));
  const stripped = join(output, 'stripped');
  mkdirSync(stripped);
  const members = [], files = {}, libraries = {};
  (function walk(directory) {
    for (const entry of readdirSync(directory, { withFileTypes: true })) {
      const source = join(directory, entry.name), path = relative(emcache, source).split(/[\\/]/).join('/');
      if (entry.isDirectory()) { walk(source); continue; }
      if (!entry.isFile()) throw new Error(`Unexpected non-file in the Emscripten cache: ${path}`);
      if (!selectCacheFile(path, recipe.sysroot.libraries)) continue;
      let file = source;
      if (path.startsWith(libraryDirectory + '/')) {
        file = join(stripped, entry.name);
        execFileSync(objcopy, ['--strip-debug', source, file], { stdio: ['ignore', 'inherit', 'inherit'] });
        const original = readFileSync(source), result = readFileSync(file);
        libraries[entry.name] = { bytes: result.length, sha256: sha256(result),
          emccBuilt: { bytes: original.length, sha256: sha256(original) } };
      }
      const bytes = readFileSync(file);
      members.push({ path, type: 'file', size: bytes.length, source: file, executable: !!(lstatSync(source).mode & 0o100) });
      files[path] = { bytes: bytes.length, sha256: sha256(bytes) };
    }
  })(emcache);
  const missing = recipe.sysroot.libraries.filter(name => !libraries[name]);
  if (missing.length) throw new Error(`embuilder did not produce ${missing.join(', ')}`);

  const name = archiveRoot(recipe.emscripten);
  const archive = join(output, `${name}.tar.zst`);
  log(`packing ${members.length} files`);
  const packed = await packArchive(name, members, { sink: createWriteStream(archive), zstd });
  const manifest = {
    schema: 1, kind: 'lasm-emscripten-sysroot', emscripten: sdk.version, sdkIdentity: sdk.identity,
    driverIdentity: sdk.driverIdentity, platform: `${process.platform}-${process.arch}`, node: process.version,
    zstdLibrary: process.versions.zstd, sourceDateEpoch: env.SOURCE_DATE_EPOCH, root: name,
    usage: { EM_CACHE: `<extracted>/${name}`, EM_FROZEN_CACHE: '1' },
    debugInfo: 'removed from system libraries with llvm-objcopy --strip-debug',
    archive: { name: basename(archive), ...packed }, zstd, fileCount: members.length,
    libraries, files,
  };
  writeFileSync(join(output, 'sysroot.json'), JSON.stringify(manifest, null, 2) + '\n');
  log(`archive ${packed.bytes} bytes (tar ${packed.tarBytes}), sha256 ${packed.sha256}`);
}
