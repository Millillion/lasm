// Local maintainer packaging only: creates archives, never uploads or publishes.
import { readFileSync, writeFileSync, mkdirSync, cpSync, copyFileSync, readdirSync, rmSync, statSync, openSync, closeSync } from 'node:fs';
import { join, dirname, relative } from 'node:path';
import { build } from '../src/build.mjs';
import { buildMain } from '../src/main.mjs';
import { targetName, leanCommit, sha256 } from '../src/toolchain.mjs';
import { buildPlatforms } from '../src/platform.mjs';
import { referenceNotices } from '../src/notices.mjs';
import { copyNativeBundle } from '../src/native-bundle.mjs';
import * as reference from './build-runtime.mjs';

const { root, runtimeDir, zig, run } = reference;
const started = performance.now();
// Prime supported workloads; other standard modules compile on demand.
const primedModules = new Set();
for (const name of ['basic', 'io', 'express/lean']) {
  const result = await build(join(root, 'examples', name, 'lasm.json'), join(root, '.work/release-builds', name));
  for (const module of result.modules) primedModules.add(module);
}
const main = await buildMain(join(root, 'examples/lean-server/Main.lean'), { output: join(root, '.work/release-builds/lean-server') });
for (const module of JSON.parse(readFileSync(join(main.output, 'build-report.json'))).modules) primedModules.add(module);
const directory = join(root, '.work/release');
const staging = join(directory, 'compiler');
rmSync(staging, { recursive: true, force: true });
mkdirSync(staging, { recursive: true });
const target = join(staging, 'targets', targetName);
for (const path of ['lib', 'include', 'sysroot/include', 'sysroot/clang', 'stdlib']) mkdirSync(join(target, path), { recursive: true });
const zigRoot = dirname(zig);
cpSync(join(runtimeDir, 'include/lean'), join(target, 'include/lean'), { recursive: true });
cpSync(join(zigRoot, 'lib/libc/include/generic-musl'), join(target, 'sysroot/include'), { recursive: true });
cpSync(join(zigRoot, 'lib/libc/include/wasm-wasi-musl'), join(target, 'sysroot/include'), { recursive: true });
cpSync(join(zigRoot, 'lib/include'), join(target, 'sysroot/clang'), { recursive: true });
copyFileSync(join(runtimeDir, 'libleanrt.a'), join(target, 'lib/libleanrt.a'));
const objects = [];
function collect(path) {
  for (const entry of readdirSync(path, { withFileTypes: true }).sort((a, b) => a.name.localeCompare(b.name))) {
    const file = join(path, entry.name);
    if (entry.isDirectory()) collect(file);
    // A compatibility sweep may compile thousands of additional modules into
    // this cache. Package exactly the primed workloads, not incidental cache state.
    else if (!primedModules.has(relative(join(runtimeDir, 'stdlib'), file).replaceAll('\\', '/').replace(/\.(?:o|c|source)$/, '').replaceAll('/', '.'))) continue;
    else if (entry.name.endsWith('.o')) objects.push(file);
    else if (entry.name.endsWith('.c') || entry.name.endsWith('.source')) {
      const output = join(target, 'stdlib', relative(join(runtimeDir, 'stdlib'), file));
      mkdirSync(dirname(output), { recursive: true }); copyFileSync(file, output);
    }
  }
}
collect(join(runtimeDir, 'stdlib'));
run(zig, ['ar', 'rcs', join(target, 'lib/libleanstd.a'), ...objects]);

// Discover the actual version-pinned startup/libc/C++/compiler-runtime inputs.
const anchor = join(directory, 'anchor.c');
writeFileSync(anchor, 'void lasm_target_anchor(void) {}\n');
const trace = join(directory, 'link.log');
const fd = openSync(trace, 'w');
try {
  run(zig, ['c++', '-target', 'wasm32-wasi', '-O2', '-fno-exceptions', '-mexec-model=reactor', anchor,
    join(runtimeDir, 'libleanrt.a'), '-Wl,--export=lasm_runtime_initialize', '-Wl,-z,stack-size=1048576', '-v', '-o', join(directory, 'anchor.wasm')],
  { stdio: ['ignore', 'pipe', fd] });
} finally { closeSync(fd); }
const linkInputs = [...readFileSync(trace, 'utf8').matchAll(/(?:^|\s)(\S*\/zig-global\/\S+\/(?:crt1-reactor\.o|libc\.a|libzigc\.a|libc\+\+\.a|libc\+\+abi\.a|libcompiler_rt\.a))(?=\s|$)/g)].map(match => join(root, match[1]));
if (linkInputs.length !== 6) throw new Error('Unexpected Zig link input inventory');
const linkLibraries = [];
for (const file of linkInputs) {
  const name = file.split('/').at(-1);
  copyFileSync(file, join(target, 'lib', name)); linkLibraries.push(`lib/${name}`);
}
writeFileSync(join(target, 'THIRD_PARTY_NOTICES.txt'), referenceNotices(reference));
const files = {};
let targetInstalledBytes = 0;
function fingerprint(path) {
  for (const entry of readdirSync(path, { withFileTypes: true }).sort((a, b) => a.name.localeCompare(b.name))) {
    const file = join(path, entry.name);
    if (entry.isDirectory()) fingerprint(file);
    else { const bytes = readFileSync(file); files[relative(target, file)] = sha256(bytes); targetInstalledBytes += bytes.length; }
  }
}
fingerprint(target);
writeFileSync(join(target, 'target.json'), JSON.stringify({ schema: 1, name: targetName, leanCommit,
  buildPlatforms, validatedNativePlatforms: ['linux-x64'], zig: '0.16.0', runtimeUnits: 19, standardModules: objects.length, linkLibraries, files }, null, 2) + '\n');
targetInstalledBytes += statSync(join(target, 'target.json')).size;
const targetArchive = join(directory, `${targetName}.tar.gz`);
run('tar', ['--sort=name', '--mtime=@0', '--owner=0', '--group=0', '--numeric-owner', '-czf', targetArchive, '-C', join(staging, 'targets'), targetName]);

for (const path of ['bin', 'src', 'lean', 'docs']) cpSync(join(root, path), join(staging, path), {
  // Acceptance reports stay in the repository, outside the archive they hash.
  recursive: true, filter: source => !source.split('/').includes('.lake') && source !== join(root, 'docs/evidence'),
});
const sourcePackage = JSON.parse(readFileSync(join(root, 'package.json'), 'utf8'));
copyNativeBundle(root, join(staging, 'src'));
copyFileSync(join(root, 'node-shim.js'), join(staging, 'node-shim.js'));
copyFileSync(join(root, 'IO_LIMITATIONS.md'), join(staging, 'IO_LIMITATIONS.md'));
cpSync(join(root, 'examples/lean-server'), join(staging, 'examples/lean-server'), {
  recursive: true, filter: source => !relative(join(root, 'examples/lean-server'), source).split('/').some(part => ['.lake', 'dist', 'data', 'test'].includes(part)),
});
writeFileSync(join(staging, 'README.md'), `# Lasm compiler

Experimental Lean-to-WebAssembly compiler for Node.js, browsers, and Cloudflare
Workers. Building requires Node 24+ and the full Lean 4.32.0 distribution. The
compiler includes Linux, macOS, and Windows adapters for x64 and ARM64. Native
macOS/Windows validation is still pending; see the release guide. This local package
includes its versioned Wasm runtime/sysroot and standalone Binaryen optimizer;
Zig and a separate C SDK are not required.

Run an ordinary Lean application with \`npx lasm run Main.lean\`, or build it with
\`npx lasm build Main.lean dist\` and run \`node dist/main.mjs\`. The included
\`examples/lean-server\` project uses ordinary \`Std.Http.Server\`, \`IO.FS\`, and
console APIs, with no Lasm imports. The first run builds; unchanged runs are cached.
For callable libraries use \`lasm build lean/lasm.json dist\`.
Lasm uses your normal Lake project for dependencies and compiler configuration.
The generated output includes typed ESM factories and the Wasm artifact. Running
that output requires only the application host. Standard Lean console, filesystem,
and HTTP server support currently targets Node with Asyncify. Node applications
have the current process's filesystem and network access.

- [Developer workflow](docs/DEVELOPER_WORKFLOW.md)
- [Supported release and installation modes](docs/RELEASE.md)
- [Browser and Workers adapters](docs/HOSTS.md)
- [Lean IO and async behavior](docs/IO.md)
- [Runtime scope and limitations](docs/RUNTIME.md)

This package is private and experimental. Original Lasm source is UNLICENSED.
Third-party licenses are in THIRD_PARTY_NOTICES.txt and the target archive.
`);
// The standalone Node optimizer embeds its Wasm payload. Ship only this tool,
// rather than requiring users to download every Binaryen utility and JS API.
mkdirSync(join(staging, 'tools'), { recursive: true });
const optimizer = readFileSync(join(root, 'node_modules/binaryen/bin/wasm-opt'));
writeFileSync(join(staging, 'tools/wasm-opt.cjs'), optimizer);
writeFileSync(join(staging, 'tools/tooling.json'), JSON.stringify({ binaryen: sourcePackage.dependencies.binaryen,
  sha256: sha256(optimizer) }, null, 2) + '\n');
writeFileSync(join(staging, 'THIRD_PARTY_NOTICES.txt'), referenceNotices(reference) +
  '\n=== Binaryen 132.0.0 standalone Node wasm-opt ===\n' + readFileSync(join(root, 'node_modules/binaryen/LICENSE'), 'utf8') +
  '\n=== Koffi 3.3.0 Node-API host adapters ===\n' + readFileSync(join(root, '.cache/native-host/node_modules/koffi/LICENSE.txt'), 'utf8'));
const packageSpec = { name: sourcePackage.name, version: sourcePackage.version, private: true, license: 'UNLICENSED',
  type: 'module', description: sourcePackage.description, bin: sourcePackage.bin,
  files: ['bin', 'src', 'lean', 'targets', 'tools', 'docs', 'examples', 'node-shim.js', 'README.md', 'IO_LIMITATIONS.md', 'THIRD_PARTY_NOTICES.txt'], os: ['linux', 'darwin', 'win32'], cpu: ['x64', 'arm64'],
  engines: sourcePackage.engines };
writeFileSync(join(staging, 'package.json'), JSON.stringify(packageSpec, null, 2) + '\n');
const packed = JSON.parse(run('npm', ['pack', '--json', '--ignore-scripts', '--pack-destination', directory, '--cache', join(root, '.cache/npm')], { cwd: staging }))[0];
const evidence = { node: process.version, platform: `${process.platform}-${process.arch}`, compiler: packed.filename,
  compilerSha256: sha256(readFileSync(join(directory, packed.filename))), compressedBytes: packed.size, installedBytes: packed.unpackedSize,
  targetArchive, targetSha256: sha256(readFileSync(targetArchive)), targetCompressedBytes: statSync(targetArchive).size,
  targetInstalledBytes, standardModules: objects.length, elapsedMs: performance.now() - started };
writeFileSync(join(directory, 'release.json'), JSON.stringify(evidence, null, 2) + '\n');
console.log(JSON.stringify(evidence, null, 2));
