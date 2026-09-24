// Produce a local installable candidate. This script never uploads or publishes.
import { mkdirSync, cpSync, copyFileSync, readFileSync, writeFileSync, existsSync } from 'node:fs';
import { join, resolve, basename, relative } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { applicationRuntime } from '../src/application-runtime.mjs';
import { toolchainCatalog } from '../src/managed-lean.mjs';
import { readTargetManifest, targetName } from '../src/toolchain.mjs';
import { copyNativeBundle } from '../src/native-bundle.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { ensureResourceGuard } from './full-lean/resource-guard.mjs';

await ensureResourceGuard();
const root = fileURLToPath(new URL('../', import.meta.url));
const [outputArg, runtimeArg, previousArg] = process.argv.slice(2);
if (!outputArg || !runtimeArg || !previousArg) throw new Error('Usage: package-application-release.mjs NEW_OUTPUT APPLICATION_RUNTIME PREVIOUS_PACKAGE');
const output = resolve(outputArg), staging = join(output, 'compiler'), previous = resolve(previousArg);
if (existsSync(output)) throw new Error('Use a new output directory to preserve previous candidates');
const lean = toolchainCatalog.defaultLean;
const runtime = await applicationRuntime({ version: lean, commit: toolchainCatalog.lean[lean].commit }, { directory: resolve(runtimeArg) });
const legacy = readTargetManifest(join(previous, 'targets', targetName));
mkdirSync(staging, { recursive: true });
for (const path of ['bin', 'src', 'lean', 'docs']) cpSync(join(root, path), join(staging, path), {
  recursive: true, filter: path => !['.lake', 'node_modules', 'evidence'].includes(basename(path)),
});
copyNativeBundle(root, join(staging, 'src'));
mkdirSync(join(staging, 'scripts/full-lean'), { recursive: true });
for (const name of ['emscripten-pre.js', 'host-pre.js', 'host-library.js', 'lean-symbol-loader.mjs',
  'function-table-index.mjs', 'table-growth.mjs', 'preserve-web-worker.mjs'])
  copyFileSync(join(root, 'scripts/full-lean', name), join(staging, 'scripts/full-lean', name));
cpSync(runtime.directory, join(staging, 'targets', runtime.manifest.name), { recursive: true });
// Keep the existing callable-library implementation available with its original
// Lean 4.32 scope. It is not a latest-Lean binding compatibility claim.
cpSync(join(previous, 'targets', targetName), join(staging, 'targets', targetName), { recursive: true });
cpSync(join(previous, 'tools'), join(staging, 'tools'), { recursive: true });
for (const engine of ['node', 'deno', 'bun']) copyFileSync(join(root, `lasm-${engine}.js`), join(staging, `lasm-${engine}.js`));
for (const name of ['IO_LIMITATIONS.md', 'NEXT_STEPS.md']) copyFileSync(join(root, name), join(staging, name));
cpSync(join(root, 'examples/lean-server-latest'), join(staging, 'examples/lean-server'), {
  recursive: true, filter: path => !['.lake', 'node_modules', 'dist', 'test'].includes(basename(path)),
});
const sourcePackage = JSON.parse(readFileSync(join(root, 'package.json'), 'utf8'));
writeFileSync(join(staging, 'package.json'), JSON.stringify({
  name: sourcePackage.name, version: '0.1.0-experimental.10', private: true, license: 'UNLICENSED',
  type: 'module', description: 'Experimental managed Lean application compiler for Node, Deno, and Bun',
  bin: sourcePackage.bin, engines: sourcePackage.engines, os: ['linux', 'darwin', 'win32'], cpu: ['x64', 'arm64'],
  files: ['bin', 'src', 'lean', 'scripts', 'targets', 'tools', 'docs', 'examples',
    'lasm-node.js', 'lasm-deno.js', 'lasm-bun.js', 'README.md', 'IO_LIMITATIONS.md', 'NEXT_STEPS.md', 'THIRD_PARTY_NOTICES.txt'],
  dependencies: { tar: sourcePackage.dependencies.tar },
}, null, 2) + '\n');
writeFileSync(join(staging, 'README.md'), `# Lasm application compiler\n\nThis is a local experimental release candidate, not a published npm release or\na claim of complete Lean compatibility. See docs/APPLICATION_PIPELINE.md and\nIO_LIMITATIONS.md for the measured scope and remaining acceptance gates.\n\nThe primary CLI builds ordinary Lean 4.34 programs with automatically managed\nnative tools. Select a version with an ordinary lean-toolchain file.\n\n    lasm Main.lean -- hello\n    lasm build Main.lean --target node\n    node dist/main.mjs\n\nUse --target deno or --target bun to generate output for those environments.\nBuilding requires Node/npm; running a deployment requires its selected engine.\nThe complete dist directory carries its runtime support. No npm publication is\nimplied by this candidate. Native Windows ARM64 build tools remain missing.\n\nThe existing JSON-configured callable library builder is retained with its\nLean 4.32 requirements; latest-Lean callable bindings are still pending.\n`);
writeFileSync(join(staging, 'THIRD_PARTY_NOTICES.txt'), readFileSync(join(runtime.directory, 'THIRD_PARTY_NOTICES.txt'), 'utf8')
  + '\n=== Retained callable-library tools ===\n' + readFileSync(join(previous, 'THIRD_PARTY_NOTICES.txt'), 'utf8'));
const packed = JSON.parse(execFileSync('npm', ['pack', '--json', '--ignore-scripts', '--pack-destination', output,
  '--cache', join(root, '.cache/npm')], { cwd: staging, encoding: 'utf8', maxBuffer: 8 * 1024 * 1024 }))[0];
const files = new Set(packed.files.map(file => file.path));
for (const file of ['bin/lasm.mjs', 'scripts/full-lean/host-library.js', 'src/native/node_modules/koffi/index.cjs',
  'src/native/process/manifest.json', `targets/${runtime.manifest.name}/target.json`])
  if (!files.has(file)) throw new Error(`npm pack omitted required application support: ${file}`);
const report = { scope: 'Local candidate assembly; installation and runtime checks are separate',
  tarball: join(output, packed.filename), sha256: await hashFile(join(output, packed.filename)),
  compressedBytes: packed.size, installedBytes: packed.unpackedSize, files: packed.entryCount,
  runtime: { name: runtime.manifest.name, identity: runtime.identity }, retainedCallableRuntimeIdentity: legacy.identity,
  resourceReport: process.env.LASM_RESOURCE_REPORT, recordedAt: new Date().toISOString() };
writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
writeFileSync(join(output, 'package-files.json'), JSON.stringify([...files].sort(), null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
