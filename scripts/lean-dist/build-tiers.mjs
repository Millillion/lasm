#!/usr/bin/env node
// Maintainer repackager: pinned upstream Lean archive -> deterministic tiers.
//
//   node scripts/lean-dist/build-tiers.mjs --platform linux-x64 --archive lean.tar.zst \
//     --out .work/lean-tiers/out --work .work/lean-tiers/work [--version 4.34.1]
//     [--data write|hash|none] [--twice] [--catalog toolchains.json]
//
// Emits lean-<version>-<platform>-bin.tar.zst and, with --data write, the shared
// lean-<version>-<piece>.tar.zst module-data archives. --data hash only reports
// the shared archives' digests, for cross-platform equality checks. --twice packs
// every archive again into a digest sink and requires identical bytes.
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
  packArchive, zstdParameters, platformFamily, coreModuleRoots } from './tiers.mjs';

const here = dirname(fileURLToPath(import.meta.url));
const { values: options } = parseArgs({ options: {
  catalog: { type: 'string', default: join(here, '../../src/toolchains.json') },
  version: { type: 'string', default: '4.34.1' }, platform: { type: 'string' }, archive: { type: 'string' },
  out: { type: 'string' }, work: { type: 'string' }, data: { type: 'string', default: 'write' },
  twice: { type: 'boolean', default: false }, keep: { type: 'boolean', default: false },
} });
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
    const wanted = (options.data !== 'none' && piece && piece !== 'excluded') || binaryCandidate(path, options.platform);
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
const binary = new Map(), external = new Map(), queue = [...binaryRoots(options.platform)];
while (queue.length) {
  const path = queue.shift();
  if (binary.has(path)) continue;
  const member = members.get(path);
  if (!member) throw new Error(`Required Lean binary is missing from the upstream archive: ${path}`);
  binary.set(path, member);
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

// 5. Pack. Archives are written beside a private temporary name, then renamed.
const open = member => member.content ? Readable.from([member.content]) : createReadStream(member.source);
const report = { schema: 1, version: options.version, platform: options.platform, commit: release.commit,
  upstream: { name: upstream.name, url: upstream.url, sha256: upstream.sha256, bytes: upstream.bytes },
  zstd: { level: 19, windowLog: 27, longDistanceMatching: true, checksum: true, node: process.versions.node, zstd: process.versions.zstd }, libuv, coreModuleRoots, externalImports: Object.fromEntries([...external].sort()),
  archives: [] };
const plan = [{ name: binName, piece: 'bin', members: binMembers, mode: 'write' },
  ...(options.data === 'none' ? [] : dataPieces.map(piece => ({ ...dataArchive(piece), mode: options.data })))];
for (const archive of plan) {
  const started = Date.now();
  let result;
  if (archive.mode === 'write') {
    const file = join(out, archive.name + '.tar.zst'), partial = file + '.partial';
    await rm(partial, { force: true });
    result = await packArchive(archive.name, archive.members, { open, sink: createWriteStream(partial) });
    await rename(partial, file);
  } else result = await packArchive(archive.name, archive.members, { open });
  const entry = { name: archive.name + '.tar.zst', piece: archive.piece, root: archive.name, ...(archive.modules ? { modules: archive.modules } : {}), ...result,
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
