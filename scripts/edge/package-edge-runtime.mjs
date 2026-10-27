// Packages the edge runtime (Phase 7, docs/EDGE.md) as a tool archive for the
// catalog (src/edge-runtimes.json) and the on-demand npm package
// @lasm/lean-edge-runtime: lean-<version>-wasm64-edge.tar.zst with root
// lean-<version>-wasm64-edge/ holding lib/{libleanrt,libleancpp,liblasmhost}.a,
// libraries.json and THIRD_PARTY_NOTICES.txt. Deterministic on any host with
// the same Node (its zstd): Lasm's tar writer with sorted names, fixed metadata.
//   node scripts/edge/package-edge-runtime.mjs EDGE_RUNTIME_DIR NODE_RUNTIME_BUNDLE OUT_DIR
// EDGE_RUNTIME_DIR: lib/*.a and libraries.json (edge-runtime.yml's assembly).
import { cpSync, mkdirSync, readFileSync, writeFileSync, existsSync, statSync, readdirSync, createWriteStream } from 'node:fs';
import { join, resolve, relative, sep } from 'node:path';
import { packArchive } from '../lean-dist/tiers.mjs';
import { createHash } from 'node:crypto';
import { edgeArchives, edgeExtras } from '../../src/edge/edge-runtime.mjs';
import { edgeLeanPatches, leanRuntimeChanges, noticeText } from '../../src/notices.mjs';

const [edgeArg, nodeArg, outArg] = process.argv.slice(2);
const edge = resolve(edgeArg), node = resolve(nodeArg), out = resolve(outArg);
const manifest = JSON.parse(readFileSync(join(edge, 'libraries.json'), 'utf8'));
const nodeManifest = JSON.parse(readFileSync(join(node, 'target.json'), 'utf8'));
const root = `${nodeManifest.name}-edge`;
if (existsSync(join(out, root))) throw new Error('Use a new output directory');
mkdirSync(join(out, root, 'lib'), { recursive: true });
const sha256 = file => createHash('sha256').update(readFileSync(file)).digest('hex');
for (const archive of [...edgeArchives, ...edgeExtras]) {
  if (!manifest.files[archive]) throw new Error(`libraries.json lists no ${archive} (run scripts/edge/build-edge-extras.mjs)`);
  if (sha256(join(edge, 'lib', archive)) !== manifest.files[archive]) throw new Error(`${archive} does not match libraries.json`);
  cpSync(join(edge, 'lib', archive), join(out, root, 'lib', archive));
}
if (!manifest.sysroot) throw new Error('libraries.json lists no system libraries (run scripts/edge/build-edge-extras.mjs)');
mkdirSync(join(out, root, 'sysroot/lib', manifest.sysroot.directory), { recursive: true });
for (const [name, digest] of Object.entries(manifest.sysroot.files)) {
  const file = join(edge, 'sysroot/lib', manifest.sysroot.directory, name);
  if (sha256(file) !== digest) throw new Error(`System library ${name} does not match libraries.json`);
  cpSync(file, join(out, root, 'sysroot/lib', manifest.sysroot.directory, name));
}
// Only what users need to verify the archives; no build paths or timestamps.
writeFileSync(join(out, root, 'libraries.json'), JSON.stringify({ schema: 1, profile: 'edge', lean: nodeManifest.lean,
  leanCommit: nodeManifest.leanCommit, emscripten: nodeManifest.emscripten, baseRuntimeManifestSha256: manifest.baseRuntimeManifestSha256,
  files: manifest.files, sysroot: manifest.sysroot }, null, 2) + '\n');
// The edge build's own patch list when the assembly recorded it, else the Node
// runtime's shared patches plus 'edge' (how build-application-runtime.mjs builds it).
const recorded = existsSync(join(edge, 'build-inputs.json')) ? JSON.parse(readFileSync(join(edge, 'build-inputs.json'), 'utf8')).patches : null;
const edgePatches = recorded ? Object.keys(recorded) : edgeLeanPatches(Object.keys(nodeManifest.patches));
for (const name of edgePatches) if (!leanRuntimeChanges[name]) throw new Error(`No notice text for Lean patch ${name} (src/notices.mjs leanRuntimeChanges)`);
// The same components as the Node runtime's archives (Lean's C++ runtime,
// Apache-2.0; Lasm's host bridge, MIT), so its notices apply unchanged.
writeFileSync(join(out, root, 'THIRD_PARTY_NOTICES.txt'), `Lasm edge runtime for Lean ${nodeManifest.lean}: Lean's C++ runtime (libleanrt, libleancpp),
Lasm's host bridge (liblasmhost) and Lasm.JS edge glue (liblasmjsedge), built single-threaded from the
sources and patches recorded in scripts/full-lean/ and src/edge/ of https://github.com/Millillion/lasm;
and Emscripten ${nodeManifest.emscripten}'s single-threaded system libraries (sysroot/: musl libc, LLVM libc++,
libc++abi, libunwind, compiler-rt, mimalloc and Emscripten's own libraries), built by its embuilder.
Lasm's host bridge and glue are under the MIT License ("Lasm" below). The notices of the runtime and
of Emscripten's libraries (the same components as the Node runtime's) follow.

=== Lasm ===
${noticeText('LASM-LICENSE.txt')}
=== Changes to Lean (Apache-2.0 section 4(b)) ===
Lasm changed these files of Lean ${nodeManifest.lean} (https://github.com/leanprover/lean4/tree/${nodeManifest.leanCommit})
before compiling this runtime; the patches are in
https://github.com/Millillion/lasm/tree/main/scripts/full-lean/patches:
${edgePatches.map(name => `  - ${name}: ${leanRuntimeChanges[name].slice(0, -1).join('; ')} (${leanRuntimeChanges[name].at(-1)})`).join('\n')}

` + readFileSync(join(node, 'THIRD_PARTY_NOTICES.txt'), 'utf8'));
const name = `${root}.tar.zst`, file = join(out, name);
// Lasm's deterministic tar writer and Node's zstd (scripts/lean-dist/tiers.mjs):
// system tar and zstd builds differ between hosts.
const members = [];
(function walk(directory) {
  for (const entry of readdirSync(directory, { withFileTypes: true }).sort((a, b) => a.name < b.name ? -1 : 1)) {
    const source = join(directory, entry.name), path = relative(join(out, root), source).split(sep).join('/');
    if (entry.isDirectory()) { walk(source); continue; }
    members.push({ path, type: 'file', size: statSync(source).size, source, executable: false });
  }
})(join(out, root));
await packArchive(root, members, { sink: createWriteStream(file), zstd: { level: 19, windowLog: 27, long: true } });
const extracted = [...edgeArchives, ...edgeExtras].reduce((n, a) => n + statSync(join(out, root, 'lib', a)).size, 0)
  + Object.keys(manifest.sysroot.files).reduce((n, name) => n + statSync(join(out, root, 'sysroot/lib', manifest.sysroot.directory, name)).size, 0) + (1 << 20);
const artifact = { name, root, sha256: sha256(file), bytes: statSync(file).size, format: 'tar.zst',
  maximumExtractedBytes: Math.ceil(extracted * 2), baseRuntimeManifestSha256: manifest.baseRuntimeManifestSha256 };
writeFileSync(join(out, 'artifact.json'), JSON.stringify(artifact, null, 2) + '\n');
console.log(JSON.stringify(artifact, null, 2));
