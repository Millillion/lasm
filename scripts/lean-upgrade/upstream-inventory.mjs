// The upstream application inventory of a Lean release (docs/LEAN_UPGRADE.md
// step 8.2) without building the runtime: patch the release's sources as the
// runtime build does, configure (not build) them with Emscripten's CMake so
// CTest knows every registration, then run scripts/inventory-upstream-applications.py.
// Writes docs/evidence/lean-<VERSION>-upstream-application-inventory.json and
// -upstream-source-files.json. Linux or macOS, with the maintainer SDK.
//   node scripts/lean-upgrade/upstream-inventory.mjs VERSION WORK_DIR
// WORK_DIR holds check-patches.mjs's patched tree (src-node) and the source archive.
import assert from 'node:assert/strict';
import { execFileSync } from 'node:child_process';
import { copyFileSync, existsSync, mkdirSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { maintainerSdk } from '../full-lean/maintainer-sdk.mjs';
import { provisionLean } from '../../src/managed-lean.mjs';

const [version, workArg] = process.argv.slice(2);
assert.ok(version && workArg, 'Usage: node scripts/lean-upgrade/upstream-inventory.mjs VERSION WORK_DIR');
const root = fileURLToPath(new URL('../../', import.meta.url));
const work = resolve(workArg), tree = join(work, 'src-node'), archive = join(work, `lean4-${version}.tar.gz`);
assert.ok(existsSync(tree) && existsSync(archive), 'Run check-patches.mjs VERSION WORK_DIR first');
const source = JSON.parse(readFileSync(join(root, 'scripts/full-lean/lean-sources.json'), 'utf8'))[version];
const selection = join(work, 'selection'); mkdirSync(selection, { recursive: true });
writeFileSync(join(selection, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
const native = await provisionLean(selection, { distribution: 'full' });
const sdk = await maintainerSdk({ managed: true });
execFileSync(process.execPath, [join(root, 'scripts/full-lean/configure-host.mjs'), join(tree, 'src')], { stdio: 'inherit' });
copyFileSync(join(root, 'scripts/full-lean/emscripten-pre.js'), join(tree, 'src/lasm-emscripten-pre.js'));
const build = join(work, 'configure');
rmSync(build, { recursive: true, force: true });
// The runtime build's configuration (scripts/full-lean/build-application-runtime.mjs).
execFileSync(sdk.tool('emcmake'), ['cmake', '-S', join(tree, 'src'), '-B', build, '-G', 'Unix Makefiles', '-DSTAGE=1', `-DPREV_STAGE=${native.prefix}`,
  '-DCMAKE_BUILD_TYPE=Release', '-DLEAN_PLATFORM_TARGET=wasm64-unknown-emscripten', '-DUSE_LAKE=OFF', '-DMMAP=OFF', '-DUSE_GMP=OFF',
  '-DUSE_MIMALLOC=ON', '-DLASM_SDK_MIMALLOC=ON', `-DLASM_MIMALLOC_INCLUDE=${join(sdk.driver, 'system/lib/mimalloc/include')}`,
  '-DCMAKE_C_FLAGS_RELEASE=-O2 -DNDEBUG', '-DCMAKE_CXX_FLAGS_RELEASE=-O2 -DNDEBUG', '-DCMAKE_C_FLAGS=-sMEMORY64=1', '-DLASM_MEMORY64=1',
  '-DLASM_HOST_BRIDGE=ON', '-DLASM_LINK_LAKE=OFF', '-DLASM_LINK_TOOLS=OFF', '-DLEAN_EXTRA_OPTS=-j2 -s8192'], { stdio: 'inherit', env: sdk.env });
const runtime = join(work, 'inventory-input'); mkdirSync(runtime, { recursive: true });
writeFileSync(join(runtime, 'build-inputs.json'), JSON.stringify({ lean: version, leanCommit: source.commit,
  sourceArchiveSha256: source.sha256, source: tree, build }, null, 2) + '\n');
const output = join(work, 'inventory');
rmSync(output, { recursive: true, force: true });
execFileSync('python3', ['-I', join(root, 'scripts/inventory-upstream-applications.py'), '--runtime', runtime, '--archive', archive, '--output', output], { stdio: 'inherit' });
copyFileSync(join(output, 'inventory.json'), join(root, `docs/evidence/lean-${version}-upstream-application-inventory.json`));
copyFileSync(join(output, 'source-files.json'), join(root, `docs/evidence/lean-${version}-upstream-source-files.json`));
console.log(`Wrote docs/evidence/lean-${version}-upstream-application-inventory.json and -upstream-source-files.json`);
