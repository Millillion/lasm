#!/usr/bin/env node
// Maintainer repackager: pinned upstream Lean archive -> deterministic tiers.
//
//   node scripts/lean-dist/build-tiers.mjs --platform linux-x64 --archive lean.tar.zst \
//     --out .work/lean-tiers/out --work .work/lean-tiers/work [--version 4.34.1]
//     [--data write|hash|none] [--twice] [--catalog toolchains.json] [--c --c-download <dir>]
//
// Emits lean-<version>-<platform>-bin.tar.zst and, with --data write, the shared
// lean-<version>-<piece>.tar.zst module-data archives. --data hash only reports
// the shared archives' digests, for cross-platform equality checks. --twice packs
// every archive again into a digest sink and requires identical bytes. --c also
// writes lean-<version>-<platform>-c.tar.zst (Lean's clang as `cc`, its linker,
// headers and link libraries, plus the pinned inputs of c-tier-sources.json,
// which must already be in --c-download under their pinned names).
import { createReadStream, createWriteStream, mkdirSync } from 'node:fs';
import { mkdir, readFile, rm, rename, writeFile, copyFile, stat } from 'node:fs/promises';
import { dirname, join, resolve, posix } from 'node:path';
import { createHash } from 'node:crypto';
import { pipeline } from 'node:stream/promises';
import { Readable } from 'node:stream';
import { createZstdDecompress, createGunzip } from 'node:zlib';
import { parseArgs } from 'node:util';
import { fileURLToPath } from 'node:url';
import { Parser } from 'tar';
import { dataLayout, dataPieces, dataPieceOf, moduleOf, binaryRoots, binaryCandidate, nativeImports, resolveImport,
  packArchive, zstdParameters, platformFamily, coreModuleRoots, cCandidate, cToolRoots, cDataMember, cMultiarch, cLibraryInclude } from './tiers.mjs';
import { stageCInputs } from './c-inputs.mjs';

const here = dirname(fileURLToPath(import.meta.url));
const { values: options } = parseArgs({ options: {
  catalog: { type: 'string', default: join(here, '../../src/toolchains.json') },
  version: { type: 'string', default: '4.34.1' }, platform: { type: 'string' }, archive: { type: 'string' },
  out: { type: 'string' }, work: { type: 'string' }, data: { type: 'string', default: 'write' },
  twice: { type: 'boolean', default: false }, keep: { type: 'boolean', default: false },
  c: { type: 'boolean', default: false }, 'c-download': { type: 'string' },
  'c-sources': { type: 'string', default: join(here, 'c-tier-sources.json') },
} });
if (options.c && !options['c-download']) throw new Error('--c needs --c-download');
for (const name of ['platform', 'archive', 'out', 'work']) if (!options[name]) throw new Error(`--${name} is required`);
if (!['write', 'hash', 'none'].includes(options.data)) throw new Error('--data must be write, hash or none');
const catalog = JSON.parse(await readFile(options.catalog, 'utf8'));
const release = catalog.lean[options.version];
const upstream = release?.artifacts?.[options.platform];
if (!upstream) throw new Error(`No pinned Lean ${options.version} archive for ${options.platform}`);
platformFamily(options.platform);
const out = resolve(options.out), work = resolve(options.work, options.platform);
await mkdir(out, { recursive: true });
await rm(work, { recursive: true, force: true });
const tree = join(work, 'tree');
await mkdir(tree, { recursive: true });

// 1. The archive must be exactly the catalog's pinned upstream bytes.
const archiveHash = createHash('sha256');
let archiveBytes = 0;
for await (const chunk of createReadStream(options.archive)) { archiveHash.update(chunk); archiveBytes += chunk.length; }
if (archiveBytes !== upstream.bytes || archiveHash.digest('hex') !== upstream.sha256)
  throw new Error(`${options.archive} does not match the pinned ${upstream.name} (${upstream.sha256}, ${upstream.bytes} bytes)`);

// 2. Stage only members that can appear in some tier.
const members = new Map(), hardlinks = [];
const clean = path => path && !/[\\\0]/.test(path) && !path.startsWith('/') && path.split('/').every(part => part && part !== '.' && part !== '..');
const parser = new Parser({ strict: true });
const writes = [];
let failure;
parser.on('entry', entry => {
  try {
    const raw = entry.path.replace(/^\.\//, '').replace(/\/$/, '');
    if (raw === upstream.root) { entry.resume(); return; }
    if (!raw.startsWith(upstream.root + '/')) throw new Error(`Archive member outside ${upstream.root}: ${entry.path}`);
    const path = raw.slice(upstream.root.length + 1);
    if (!clean(path)) throw new Error(`Unsafe archive member ${entry.path}`);
    const piece = dataPieceOf(path);
    const wanted = (options.data !== 'none' && piece && piece !== 'excluded')
      || (options.c ? cCandidate(path, options.platform) : binaryCandidate(path, options.platform));
    if (!wanted || entry.type === 'Directory') { entry.resume(); return; }
    if (members.has(path)) throw new Error(`Duplicate archive member ${path}`);
    if (entry.type === 'SymbolicLink') {
      members.set(path, { path, type: 'symlink', target: entry.linkpath }); entry.resume(); return;
    }
    if (entry.type === 'Link') {
      const target = entry.linkpath.replace(/^\.\//, '');
      if (!target.startsWith(upstream.root + '/')) throw new Error(`Hardlink outside the archive: ${path}`);
      hardlinks.push({ path, target: target.slice(upstream.root.length + 1), executable: !!(entry.mode & 0o111) });
      entry.resume(); return;
    }
    if (!['File', 'OldFile', 'ContiguousFile'].includes(entry.type)) throw new Error(`Unsupported member type ${entry.type}: ${path}`);
    const source = join(tree, ...path.split('/'));
    members.set(path, { path, type: 'file', source, size: entry.size, executable: !!(entry.mode & 0o111) });
    mkdirSync(dirname(source), { recursive: true });
    writes.push(pipeline(entry, createWriteStream(source, { flags: 'wx' })));
  } catch (error) { failure ??= error; entry.resume(); }
});
await pipeline(createReadStream(options.archive), upstream.format === 'tar.gz' ? createGunzip() : createZstdDecompress(), parser);
await Promise.all(writes);
if (failure) throw failure;
for (const link of hardlinks) {
  const target = members.get(link.target);
  if (!target || target.type !== 'file') throw new Error(`Unresolvable hardlink ${link.path}`);
  const source = join(tree, ...link.path.split('/'));
  await mkdir(dirname(source), { recursive: true });
  await copyFile(target.source, source);
  members.set(link.path, { path: link.path, type: 'file', source, size: target.size, executable: link.executable });
}
for (const member of members.values()) if (member.type === 'file' && (await stat(member.source)).size !== member.size)
  throw new Error(`Staged member size mismatch: ${member.path}`);

// 3. Platform binaries: the executables Lasm runs plus their in-archive
// shared-library closure, read from each file's own load commands.
const has = [...members.keys()];
async function programClosure(roots, external) {
  const found = new Map(), queue = [...roots];
  while (queue.length) {
    const path = queue.shift();
    if (found.has(path)) continue;
    const member = members.get(path);
    if (!member) throw new Error(`Required Lean binary is missing from the upstream archive: ${path}`);
    found.set(path, member);
    if (member.type === 'symlink') {
      const target = posix.normalize(posix.join(posix.dirname(path), member.target));
      if (!clean(target)) throw new Error(`Symlink escapes the archive: ${path}`);
      queue.push(target); continue;
    }
    const imports = nativeImports(await readFile(member.source), options.platform);
    for (const name of imports.needed) {
      const resolved = resolveImport(name, options.platform, has);
      if (resolved) queue.push(resolved);
      else external.set(name, [...(external.get(name) ?? []), path].sort());
    }
  }
  return found;
}
const external = new Map();
const binary = await programClosure(binaryRoots(options.platform), external);
let libuv = null;
if (members.has('lib/libuv.a')) {
  const versions = new Set([...(await readFile(members.get('lib/libuv.a').source)).toString('latin1')
    .matchAll(/(?<![0-9A-Za-z.])(1\.\d{1,3}\.\d{1,3})\0/g)].map(match => match[1]));
  if (versions.size === 1) [libuv] = versions;
}
if (!members.has('LICENSE')) throw new Error('Upstream LICENSE is missing');

// 4. Notices. The text depends only on pinned catalog values and the archive.
const generated = (path, text) => ({ path, type: 'file', content: Buffer.from(text), size: Buffer.byteLength(text) });
const upstreamRelease = new URL(upstream.url).hostname === 'github.com' && upstream.url.startsWith('https://github.com/leanprover/lean4/');
const sourceLine = `Sources: ${release.release ?? 'https://github.com/leanprover/lean4'} (commit ${release.commit}),\nhttps://github.com/leanprover/lean4/tree/${release.commit}`;
const binName = `lean-${options.version}-${options.platform}-bin`;
const binNotice = `${binName}

This archive is an unmodified subset of ${upstreamRelease ? 'the upstream Lean' : 'the Lasm-maintained native Lean'} ${options.version}
distribution for ${options.platform}, repackaged by Lasm so that ordinary builds
download less. Lasm did not modify, rebuild or relink any file; it selected
${[...binary.keys()].filter(name => name.startsWith('bin/') || name.startsWith('lib/')).length} executables and shared libraries (the programs Lasm runs and the
shared libraries their own load commands name) together with LICENSE and LICENSES.

Complete original archive: ${upstream.url}
SHA-256 ${upstream.sha256}, ${upstream.bytes} bytes.
${release.notices?.[options.platform] ? `Corresponding sources and third-party notices for this native build:\n${release.notices[options.platform].url}\nSHA-256 ${release.notices[options.platform].sha256}\n` : ''}${sourceLine}

LICENSE and LICENSES are copied verbatim from that archive. Lean's runtime
statically links libuv${libuv ? ` ${libuv} (version recorded in the archive's lib/libuv.a)` : ''}, whose
MIT license is not included in LICENSES; libuv-LICENSE and libuv-LICENSE-extra
are verbatim copies of libuv's LICENSE and LICENSE-extra files.
Module data and Lean sources are distributed separately in the shared
lean-${options.version}-core-* and lean-${options.version}-ext-* archives.
`;
const notices = join(here, 'notices');
const binMembers = [...binary.values(), members.get('LICENSE'), ...(members.has('LICENSES') ? [members.get('LICENSES')] : []),
  generated(`lasm-notices/${binName}/NOTICE`, binNotice),
  { path: `lasm-notices/${binName}/libuv-LICENSE`, type: 'file', source: join(notices, 'libuv-LICENSE.txt'),
    size: (await stat(join(notices, 'libuv-LICENSE.txt'))).size },
  { path: `lasm-notices/${binName}/libuv-LICENSE-extra`, type: 'file', source: join(notices, 'libuv-LICENSE-extra.txt'),
    size: (await stat(join(notices, 'libuv-LICENSE-extra.txt'))).size }];

// The Windows upstream LICENSE uses CRLF line endings. Shared data archives
// carry the LF text published in the Linux and macOS archives.
const license = (await readFile(members.get('LICENSE').source, 'latin1')).replaceAll('\r\n', '\n');
const pinnedArchives = Object.entries(release.artifacts).filter(([, artifact]) => artifact.url.startsWith('https://github.com/leanprover/lean4/'))
  .map(([platform, artifact]) => `  ${platform}: ${artifact.url}\n    SHA-256 ${artifact.sha256}`).join('\n');
const dataMembers = Object.fromEntries(dataPieces.map(piece => [piece, []]));
for (const member of members.values()) {
  const piece = dataPieceOf(member.path);
  if (!piece || piece === 'excluded') continue;
  if (member.type !== 'file') throw new Error(`Module data must be ordinary files: ${member.path}`);
  dataMembers[piece].push({ ...member, executable: false });
}
if (options.data !== 'none') for (const [piece, path] of [['core-init', 'lib/lean/Init.olean'], ['core-std', 'lib/lean/Std.olean'],
  ['ext-rest', 'lib/lean/Lean.olean'], ['ext-rest', 'lib/lean/Lake.olean'], ['ext-meta', 'lib/lean/Lean/Meta.olean'],
  ['ext-elab', 'lib/lean/Lean/Elab.olean'], ['core-init', 'src/lean/Init.lean'], ['ext-rest', 'src/lean/lake/Lake.lean']])
  if (!dataMembers[piece].some(member => member.path === path)) throw new Error(`${piece} lacks ${path}`);
const dataArchive = piece => {
  const name = `lean-${options.version}-${piece}`;
  const entry = [...dataLayout.core, ...dataLayout.extended].find(item => item.piece === piece);
  const scope = entry.prefixes.length ? entry.prefixes.join(', ') + ' modules'
    : `all other modules except ${[...dataLayout.core, ...dataLayout.extended].flatMap(item => item.prefixes).join(', ')} and ${dataLayout.excludedRoots.join(', ')}`;
  const notice = `${name}

This archive is an unmodified subset of the upstream Lean ${options.version} release
(commit ${release.commit}): the module data (.olean, .olean.private, .olean.server,
.ir, .ir.sig) and Lean sources of ${scope}, repackaged by Lasm.
These files are byte-identical in every upstream platform archive below; Lasm
did not modify or rebuild them. lasm-notices/${name}/LICENSE is Lean's LICENSE as published in the
Linux and macOS archives.

${pinnedArchives}

${sourceLine}
`;
  const modules = [...new Set(dataMembers[piece].map(member => moduleOf(member.path).split('.')[0]))].sort();
  return { name, piece, modules, members: [...dataMembers[piece], generated(`lasm-notices/${name}/LICENSE`, license),
    generated(`lasm-notices/${name}/NOTICE`, notice)] };
};

// 4b. The C tier: what a native Lake build of a package's C code reads from the
// release (clang, linker, archiver and their libraries; headers; compiler
// runtime and link libraries), minus the binaries archive, plus `cc` and the
// pinned header inputs. Lasm puts bin/ first on PATH, so Lake's default `cc`
// is Lean's clang.
let cTier = null;
if (options.c) {
  const name = `lean-${options.version}-${options.platform}-c`;
  const family = platformFamily(options.platform);
  const tools = await programClosure(cToolRoots(options.platform), new Map());
  const selected = new Map([...tools]);
  for (const member of members.values()) if (cDataMember(member.path)) selected.set(member.path, member);
  for (const path of binary.keys()) selected.delete(path);
  // Each archive is extracted and validated on its own: a symlink whose target
  // lives in the binaries archive becomes a copy of the file it resolves to.
  for (const [path, member] of [...selected]) {
    if (member.type !== 'symlink') continue;
    let target = path, current = member;
    for (let depth = 0; current.type === 'symlink'; depth++) {
      if (depth > 16) throw new Error(`Symlink loop at ${path}`);
      target = posix.normalize(posix.join(posix.dirname(target), current.target));
      current = members.get(target) ?? (() => { throw new Error(`Dangling symlink ${path}`); })();
    }
    let inside = path, step = member;
    while (step.type === 'symlink') { inside = posix.normalize(posix.join(posix.dirname(inside), step.target)); if (!selected.has(inside)) break; step = selected.get(inside); }
    if (!selected.has(inside)) selected.set(path, { ...current, path });
  }
  const resourceDirectory = [...selected.keys()].map(path => /^lib\/clang\/([^/]+)\//.exec(path)?.[1]).find(Boolean);
  if (!resourceDirectory) throw new Error('The release has no clang resource directory');
  const sources = JSON.parse(await readFile(options['c-sources'], 'utf8'));
  const pinned = sources[options.version];
  if (!pinned || pinned.clangVersion.split('.')[0] !== resourceDirectory) throw new Error(`C tier inputs do not match clang ${resourceDirectory}`);
  const staged = await stageCInputs({ sources, version: options.version, platform: options.platform, download: resolve(options['c-download']),
    stage: join(work, 'c-inputs'), resourceDirectory: `lib/clang/${resourceDirectory}`, notices: `lasm-notices/${name}` });
  for (const member of staged.members) {
    if (selected.has(member.path) || binary.has(member.path)) throw new Error(`C tier input overlaps the release at ${member.path}`);
    selected.set(member.path, member);
  }
  const clang = members.get(cToolRoots(options.platform)[0]);
  const cc = family === 'win32' ? { ...clang, path: 'bin/cc.exe' } : { path: 'bin/cc', type: 'symlink', target: 'clang' };
  if (members.has(cc.path)) throw new Error(`The release already has ${cc.path}`);
  selected.set(cc.path, cc);
  const multiarch = cMultiarch(options.platform);
  if (multiarch !== staged.multiarch) throw new Error('C library multiarch mismatch');
  const notice = `${name}

Lasm's C tier for Lean ${options.version} on ${options.platform}: what a native Lake build of a
package's C code needs, so that no system C compiler is required.

From ${upstreamRelease ? 'the upstream Lean' : 'the Lasm-maintained native Lean'} ${options.version} archive (unmodified files):
Lean's clang, its linker and archiver and the shared libraries they load,
include/, lib/clang/${resourceDirectory}/lib, ${family === 'linux' ? 'lib/glibc, ' : family === 'darwin' ? 'lib/libc, ' : ''}and the link-time libraries in lib/.
Complete original archive: ${upstream.url}
SHA-256 ${upstream.sha256}, ${upstream.bytes} bytes.
${sourceLine}

Added by Lasm:
- ${cc.path}: ${family === 'win32' ? 'a byte-identical copy of bin/clang.exe' : 'a symbolic link to clang'}, so that Lake's default C
  compiler is Lean's clang.
- lib/clang/${resourceDirectory}/include: clang's resource headers, unmodified, from
${staged.provenance.filter(item => item.use.includes('resource')).map(item => `  ${item.url}\n  SHA-256 ${item.sha256}`).join('\n')}
  License: llvm-clang-LICENSE.txt (Apache-2.0 WITH LLVM-exception).
${staged.provenance.some(item => item.use === 'C library headers') ? `- ${cLibraryInclude}: C library headers, unmodified, from
${staged.provenance.filter(item => item.use === 'C library headers').map(item => `  ${item.url}\n  SHA-256 ${item.sha256}`).join('\n')}
  Their copyright and license files are in the directories named after each package.
` : `- No C library headers: on macOS the SDK of the Xcode Command Line Tools provides them.
`}`;
  selected.set(`lasm-notices/${name}/NOTICE`, generated(`lasm-notices/${name}/NOTICE`, notice));
  const list = [...selected.values()].map(member => member.type === 'file' && !member.content ? { ...member } : member);
  cTier = { name, piece: 'c', members: list, mode: 'write', multiarch, resourceDirectory, provenance: staged.provenance };
}

// 5. Pack. Archives are written beside a private temporary name, then renamed.
const open = member => member.content ? Readable.from([member.content]) : createReadStream(member.source);
const report = { schema: 1, version: options.version, platform: options.platform, commit: release.commit,
  upstream: { name: upstream.name, url: upstream.url, sha256: upstream.sha256, bytes: upstream.bytes },
  zstd: { level: 19, windowLog: 27, longDistanceMatching: true, checksum: true, node: process.versions.node, zstd: process.versions.zstd }, libuv, coreModuleRoots, externalImports: Object.fromEntries([...external].sort()),
  archives: [] };
const plan = [{ name: binName, piece: 'bin', members: binMembers, mode: 'write' },
  ...(options.data === 'none' ? [] : dataPieces.map(piece => ({ ...dataArchive(piece), mode: options.data }))),
  ...(cTier ? [cTier] : [])];
for (const archive of plan) {
  const started = Date.now();
  let result;
  if (archive.mode === 'write') {
    const file = join(out, archive.name + '.tar.zst'), partial = file + '.partial';
    await rm(partial, { force: true });
    result = await packArchive(archive.name, archive.members, { open, sink: createWriteStream(partial) });
    await rename(partial, file);
  } else result = await packArchive(archive.name, archive.members, { open });
  const entry = { name: archive.name + '.tar.zst', piece: archive.piece, root: archive.name, ...(archive.modules ? { modules: archive.modules } : {}),
    ...(archive.piece === 'c' ? { multiarch: archive.multiarch, clangResourceDirectory: archive.resourceDirectory, inputs: archive.provenance } : {}), ...result,
    files: archive.members.length, fileBytes: archive.members.reduce((total, member) => total + (member.size ?? 0), 0),
    written: archive.mode === 'write', seconds: Math.round((Date.now() - started) / 1000) };
  if (options.twice) {
    const again = await packArchive(archive.name, archive.members, { open });
    if (again.sha256 !== result.sha256 || again.bytes !== result.bytes) throw new Error(`Packing ${archive.name} twice produced different bytes`);
    entry.repacked = true;
  }
  report.archives.push(entry);
  console.error(`[lean-tiers] ${entry.name}: ${entry.bytes} bytes (${entry.fileBytes} uncompressed, ${entry.files} files) sha256 ${entry.sha256} in ${entry.seconds}s`);
}
await writeFile(join(out, `report-${options.platform}.json`), JSON.stringify(report, null, 2) + '\n');
if (!options.keep) await rm(work, { recursive: true, force: true });
console.log(JSON.stringify({ ...report, externalImports: Object.keys(report.externalImports) }, null, 2));
