// Packages the edge runtime (Phase 7, docs/EDGE.md) as a tool archive for the
// catalog (src/edge-runtimes.json) and the on-demand npm package
// @lasm/lean-edge-runtime: lean-<version>-wasm64-edge.tar.zst with root
// lean-<version>-wasm64-edge/ holding lib/{libleanrt,libleancpp,liblasmhost}.a,
// libraries.json and THIRD_PARTY_NOTICES.txt. Deterministic: sorted names, fixed
// owner and time, zstd -19 single-threaded.
//   node scripts/edge/package-edge-runtime.mjs EDGE_RUNTIME_DIR NODE_RUNTIME_BUNDLE OUT_DIR
// EDGE_RUNTIME_DIR: lib/*.a and libraries.json (edge-runtime.yml's assembly).
import { cpSync, mkdirSync, readFileSync, writeFileSync, existsSync, statSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { edgeArchives, edgeExtras } from '../../src/edge/edge-runtime.mjs';

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
// The same components as the Node runtime's archives (Lean's C++ runtime,
// Apache-2.0; Lasm's host bridge, MIT), so its notices apply unchanged.
writeFileSync(join(out, root, 'THIRD_PARTY_NOTICES.txt'), `Lasm edge runtime for Lean ${nodeManifest.lean}: Lean's C++ runtime (libleanrt, libleancpp),
Lasm's host bridge (liblasmhost) and Lasm.JS edge glue (liblasmjsedge), built single-threaded from the
sources and patches recorded in scripts/full-lean/ and src/edge/ of https://github.com/Millillion/lasm;
and Emscripten ${nodeManifest.emscripten}'s single-threaded system libraries (sysroot/: musl libc, LLVM libc++,
libc++abi, libunwind, compiler-rt, mimalloc and Emscripten's own libraries), built by its embuilder.
Lasm's host bridge and glue: MIT License, Copyright (c) 2026 Jordan Last. The notices of the runtime and
of Emscripten's libraries (the same components as the Node runtime's) follow.

` + readFileSync(join(node, 'THIRD_PARTY_NOTICES.txt'), 'utf8'));
const name = `${root}.tar.zst`, file = join(out, name);
execFileSync('tar', ['--sort=name', '--owner=0', '--group=0', '--numeric-owner', '--mtime=@315532800', '--format=gnu',
  '-I', 'zstd -19 -T1 -q', '-cf', file, '-C', out, root]);
const extracted = [...edgeArchives, ...edgeExtras].reduce((n, a) => n + statSync(join(out, root, 'lib', a)).size, 0)
  + Object.keys(manifest.sysroot.files).reduce((n, name) => n + statSync(join(out, root, 'sysroot/lib', manifest.sysroot.directory, name)).size, 0) + (1 << 20);
const artifact = { name, root, sha256: sha256(file), bytes: statSync(file).size, format: 'tar.zst',
  maximumExtractedBytes: Math.ceil(extracted * 2), baseRuntimeManifestSha256: manifest.baseRuntimeManifestSha256 };
writeFileSync(join(out, 'artifact.json'), JSON.stringify(artifact, null, 2) + '\n');
console.log(JSON.stringify(artifact, null, 2));
