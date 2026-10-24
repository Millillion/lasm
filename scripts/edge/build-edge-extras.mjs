// The parts of the edge runtime that do not come from Lean's sources
// (Phase 7, docs/EDGE.md), added beside edge-runtime.yml's three archives:
//   lib/liblasmjsedge.a  Lasm.JS's edge C glue (src/edge/lasm_js_edge.c)
//   sysroot/lib/wasm64-emscripten/*.a  Emscripten's single-threaded system
//     libraries the edge link uses (src/link-driver/recipe-emscripten-*-edge.json
//     sysroot.libraries), built in a fresh private cache with the product
//     SOURCE_DATE_EPOCH and stored with debug sections removed, like the Node
//     link toolchain's sysroot (scripts/link-driver/build-sysroot.mjs).
// With them the Node link driver links edge programs without emcc or Python.
// Updates EDGE_RUNTIME_DIR/libraries.json with every file's SHA-256.
//   node scripts/edge/build-edge-extras.mjs EDGE_RUNTIME_DIR NODE_RUNTIME_BUNDLE [--cache DIR]
import { copyFileSync, mkdirSync, readFileSync, writeFileSync, existsSync, rmSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { fileURLToPath } from 'node:url';
import { parseArgs } from 'node:util';
import { provisionSdk } from '../../src/managed-sdk.mjs';
import { executableName } from '../../src/platform.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const { values: options, positionals } = parseArgs({ allowPositionals: true, options: { cache: { type: 'string' } } });
const [edgeArg, nodeArg] = positionals;
const edge = resolve(edgeArg), node = resolve(nodeArg);
const recipe = JSON.parse(readFileSync(join(root, 'src/link-driver/recipe-emscripten-6.0.9-edge.json'), 'utf8'));
const sdk = await provisionSdk({ ...(options.cache ? { cache: resolve(options.cache) } : {}), log: console.error });
const sha256 = file => createHash('sha256').update(readFileSync(file)).digest('hex');
const work = join(edge, '.extras-build');
rmSync(work, { recursive: true, force: true });
mkdirSync(work, { recursive: true });
const env = { ...sdk.env, EMCC_CORES: '1', EM_CACHE: join(work, 'cache'), EM_PORTS: join(work, 'ports') };

// 1. Lasm.JS's edge glue, with the application compile flags (src/edge/edge-link.mjs).
const glue = join(work, 'lasm_js_edge.o');
sdk.execute('emcc', ['-O2', '-DNDEBUG', '-DLEAN_EXPORTING', '-DLEAN_EMSCRIPTEN', '-fwasm-exceptions', '-sMEMORY64=1', '-ffp-contract=off',
  '-fPIC', '-ffunction-sections', '-fdata-sections', '-I', join(node, 'include'), '-c', join(root, 'src/edge/lasm_js_edge.c'), '-o', glue],
  { env, stdio: 'inherit' });
mkdirSync(join(edge, 'lib'), { recursive: true });
rmSync(join(edge, 'lib/liblasmjsedge.a'), { force: true });
execFileSync(join(sdk.prefix, 'bin', executableName('llvm-ar')), ['rcsD', join(edge, 'lib/liblasmjsedge.a'), glue], { stdio: 'inherit' });

// 2. The system libraries, as emcc builds them for the edge link.
const targets = recipe.sysroot.libraries.map(name => name.replace(/\.a$/, ''));
execFileSync(sdk.python.executable, ['-B', '-E', '-s', join(sdk.driver, 'embuilder.py'), 'build', '--wasm64', ...targets],
  { env, stdio: ['ignore', 'inherit', 'inherit'] });
const built = join(work, 'cache', 'sysroot/lib', recipe.link.systemLibraryDirectory);
const destination = join(edge, 'sysroot/lib', recipe.link.systemLibraryDirectory);
rmSync(join(edge, 'sysroot'), { recursive: true, force: true });
mkdirSync(destination, { recursive: true });
const objcopy = join(sdk.prefix, 'bin', executableName('llvm-objcopy'));
for (const name of recipe.sysroot.libraries) {
  if (!existsSync(join(built, name))) throw new Error(`embuilder did not build ${name}`);
  execFileSync(objcopy, ['--strip-debug', join(built, name), join(destination, name)], { stdio: 'inherit' });
}
rmSync(work, { recursive: true, force: true });

const manifest = JSON.parse(readFileSync(join(edge, 'libraries.json'), 'utf8'));
manifest.files['liblasmjsedge.a'] = sha256(join(edge, 'lib/liblasmjsedge.a'));
manifest.sysroot = { directory: recipe.link.systemLibraryDirectory, sourceDateEpoch: env.SOURCE_DATE_EPOCH,
  debugInfo: 'removed with llvm-objcopy --strip-debug',
  files: Object.fromEntries(recipe.sysroot.libraries.map(name => [name, sha256(join(destination, name))])) };
writeFileSync(join(edge, 'libraries.json'), JSON.stringify(manifest, null, 2) + '\n');
console.log(JSON.stringify({ glue: manifest.files['liblasmjsedge.a'], sysroot: manifest.sysroot.files }, null, 2));
