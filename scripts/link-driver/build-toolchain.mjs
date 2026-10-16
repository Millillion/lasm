#!/usr/bin/env node
// Maintainer repackager (Phase 2 milestone D, docs/TOOLCHAIN_SLIMMING.md): pinned
// upstream emsdk archive -> deterministic Node link-driver toolchain archives.
//
//   node scripts/link-driver/build-toolchain.mjs --platform linux-x64 --archive wasm-binaries.tar.xz \
//     --out .work/link-toolchain/out --work .work/link-toolchain/work \
//     [--sysroot emscripten-6.0.9-cache-wasm64-pic.tar.zst --shared write|hash] [--twice] [--keep]
//
// Always writes emscripten-<version>-<platform>-tools.tar.zst: the seven native
// programs src/link-driver runs, the in-archive shared libraries their own
// ELF/Mach-O/PE load commands name, clang's resource headers, licence texts and a
// NOTICE. With --sysroot (scripts/link-driver/build-sysroot.mjs output) it also
// packs the shared emscripten-<version>-lasm-shared.tar.zst (the repaired Emscripten
// JavaScript subset plus the prebuilt sysroot): --shared write writes it, --shared
// hash only reports its digest so platforms can be compared without storage.
// The report always records the digest of the repaired JavaScript subset alone.
// --twice packs every archive again into a digest sink and requires identical bytes.
//
// tar.xz and zip archives are decoded by src/archive-stream.py with the host's
// python3 (-I -B); this is maintainer tooling, never part of the product path.
import { createReadStream, createWriteStream, mkdirSync } from 'node:fs';
import { mkdir, readFile, rm, rename, writeFile, copyFile, stat } from 'node:fs/promises';
import { dirname, join, resolve, posix } from 'node:path';
import { createHash } from 'node:crypto';
import { spawn } from 'node:child_process';
import { pipeline } from 'node:stream/promises';
import { Readable } from 'node:stream';
import { createZstdDecompress } from 'node:zlib';
import { parseArgs } from 'node:util';
import { fileURLToPath } from 'node:url';
import { Parser } from 'tar';
import { nativeImports, packArchive, platformFamily } from '../lean-dist/tiers.mjs';
import { nativeRoots, nativeCandidate, resourceHeader, resolveNativeImport, sharedJsCandidate, checkRepairCoverage,
  treeDigestInput, nativeArchiveName, sharedArchiveName, sharedLayout, nativeNotice, sharedNotice } from './toolchain.mjs';

const here = dirname(fileURLToPath(import.meta.url));
const root = resolve(here, '../..');
const { values: options } = parseArgs({ options: {
  catalog: { type: 'string', default: join(root, 'src/sdk-tools.json') },
  repairs: { type: 'string', default: join(root, 'src/sdk-repairs.json') },
  recipe: { type: 'string', default: join(root, 'src/link-driver/recipe-emscripten-6.0.9.json') },
  platform: { type: 'string' }, archive: { type: 'string' }, out: { type: 'string' }, work: { type: 'string' },
  sysroot: { type: 'string' }, shared: { type: 'string' }, python: { type: 'string', default: 'python3' },
  twice: { type: 'boolean', default: false }, keep: { type: 'boolean', default: false },
} });
for (const name of ['platform', 'archive', 'out', 'work']) if (!options[name]) throw new Error(`--${name} is required`);
const sharedMode = options.shared ?? (options.sysroot ? 'write' : 'none');
if (!['write', 'hash', 'none'].includes(sharedMode)) throw new Error('--shared must be write, hash or none');
if (sharedMode !== 'none' && !options.sysroot) throw new Error('--shared needs --sysroot');
const family = platformFamily(options.platform);
const catalog = JSON.parse(await readFile(options.catalog, 'utf8'));
const upstream = catalog.artifacts[options.platform];
if (!upstream) throw new Error(`No pinned Emscripten ${catalog.version} archive for ${options.platform}`);
const sources = JSON.parse(await readFile(join(here, 'notices/sources.json'), 'utf8'));
const repairs = JSON.parse(await readFile(options.repairs, 'utf8'));
const { repairSdkFile } = await import('../../src/sdk-repairs.mjs');
const recipe = JSON.parse(await readFile(options.recipe, 'utf8'));
if (recipe.emscripten !== catalog.version || repairs.version !== catalog.version) throw new Error('Recipe, repairs and SDK catalog versions differ');
const version = catalog.version;
const out = resolve(options.out), work = resolve(options.work, options.platform);
await mkdir(out, { recursive: true });
await rm(work, { recursive: true, force: true });
const tree = join(work, 'tree');
await mkdir(tree, { recursive: true });
const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');
async function hashFile(file) {
  const hash = createHash('sha256');
  for await (const chunk of createReadStream(file)) hash.update(chunk);
  return hash.digest('hex');
}
const started = Date.now();
const log = message => console.error(`[link-toolchain ${options.platform} ${((Date.now() - started) / 1000).toFixed(0)}s] ${message}`);

// 1. The archive must be exactly the catalog's pinned upstream bytes.
{
  const hash = createHash('sha256'); let bytes = 0;
  for await (const chunk of createReadStream(options.archive)) { hash.update(chunk); bytes += chunk.length; }
  if (bytes !== upstream.bytes || hash.digest('hex') !== upstream.sha256)
    throw new Error(`${options.archive} does not match the pinned ${upstream.name} (${upstream.sha256}, ${upstream.bytes} bytes)`);
}
log('upstream archive verified');

// 2. Stage only members that can appear in an archive.
const clean = path => path && !/[\\\0]/.test(path) && !path.startsWith('/') && path.split('/').every(part => part && part !== '.' && part !== '..');
const members = new Map(), hardlinks = [], writes = [];
let failure;
function stageTar(prefix, wanted, destination) {
  const parser = new Parser({ strict: true });
  parser.on('entry', entry => {
    try {
      const raw = entry.path.replace(/^\.\//, '').replace(/\/$/, '');
      if (raw === prefix) { entry.resume(); return; }
      if (!raw.startsWith(prefix + '/')) throw new Error(`Archive member outside ${prefix}: ${entry.path}`);
      const path = raw.slice(prefix.length + 1);
      if (!clean(path)) throw new Error(`Unsafe archive member ${entry.path}`);
      if (entry.type === 'Directory' || !wanted(path)) { entry.resume(); return; }
      if (destination.has(path)) throw new Error(`Duplicate archive member ${path}`);
      const executable = family === 'win32' && destination === members ? /\.(?:exe|dll)$/i.test(path) : !!(entry.mode & 0o111);
      if (entry.type === 'SymbolicLink') { destination.set(path, { path, type: 'symlink', target: entry.linkpath }); entry.resume(); return; }
      if (entry.type === 'Link') {
        const target = entry.linkpath.replace(/^\.\//, '');
        if (!target.startsWith(prefix + '/')) throw new Error(`Hardlink outside the archive: ${path}`);
        hardlinks.push({ destination, path, target: target.slice(prefix.length + 1), executable });
        entry.resume(); return;
      }
      if (!['File', 'OldFile', 'ContiguousFile'].includes(entry.type)) throw new Error(`Unsupported member type ${entry.type}: ${path}`);
      const file = join(tree, prefix === upstream.root ? 'sdk' : 'sysroot', ...path.split('/'));
      destination.set(path, { path, type: 'file', source: file, size: entry.size, executable });
      mkdirSync(dirname(file), { recursive: true });
      writes.push(pipeline(entry, createWriteStream(file, { flags: 'wx' })));
    } catch (error) { failure ??= error; entry.resume(); }
  });
  return parser;
}
// The JavaScript subset is always staged: every platform reports its digest.
const wantedSdk = path => nativeCandidate(path)
  || path.startsWith('emscripten/') && sharedJsCandidate(path.slice('emscripten/'.length));
const sdkParser = stageTar(upstream.root, wantedSdk, members);
if (['tar.xz', 'zip'].includes(upstream.format)) {
  const child = spawn(options.python, ['-I', '-B', join(root, 'src/archive-stream.py'), upstream.format, resolve(options.archive)],
    { stdio: ['ignore', 'pipe', 'inherit'], windowsHide: true });
  const finished = new Promise((resolveExit, reject) => { child.once('error', reject); child.once('close', code => resolveExit(code)); });
  await pipeline(child.stdout, sdkParser);
  const code = await finished;
  if (code !== 0) throw new Error(`The archive decoder exited with ${code}`);
} else if (upstream.format === 'tar.zst') await pipeline(createReadStream(options.archive), createZstdDecompress(), sdkParser);
else throw new Error(`Unsupported SDK archive format ${upstream.format}`);
await Promise.all(writes.splice(0));
if (failure) throw failure;
for (const link of hardlinks.splice(0)) {
  const target = link.destination.get(link.target);
  if (!target || target.type !== 'file') throw new Error(`Unresolvable hardlink ${link.path}`);
  const file = join(dirname(target.source), '.hardlink-' + sha256(link.path).slice(0, 16));
  await copyFile(target.source, file);
  link.destination.set(link.path, { path: link.path, type: 'file', source: file, size: target.size, executable: link.executable });
}
for (const member of members.values()) if (member.type === 'file' && (await stat(member.source)).size !== member.size)
  throw new Error(`Staged member size mismatch: ${member.path}`);
log(`staged ${members.size} members`);

// 3. Native programs and their in-archive shared-library closure.
const has = [...members.keys()];
const native = new Map(), external = new Map(), libraries = new Set(), queue = [...nativeRoots(options.platform)];
const roots = new Set(queue);
while (queue.length) {
  const path = queue.shift();
  if (native.has(path)) continue;
  const member = members.get(path);
  if (!member) throw new Error(`Required program is missing from the upstream archive: ${path}`);
  native.set(path, member);
  if (member.type === 'symlink') {
    const target = posix.normalize(posix.join(posix.dirname(path), member.target));
    if (!clean(target)) throw new Error(`Symlink escapes the archive: ${path}`);
    queue.push(target); continue;
  }
  const imports = nativeImports(await readFile(member.source), options.platform);
  for (const name of imports.needed) {
    const resolved = resolveNativeImport(name, options.platform, has);
    if (resolved) { queue.push(resolved); if (!roots.has(resolved)) libraries.add(resolved); }
    else external.set(name, [...(external.get(name) ?? []), path].sort());
  }
}
const headers = [...members.values()].filter(member => resourceHeader(member.path));
const majors = new Set(headers.map(member => member.path.split('/')[2]));
if (majors.size !== 1 || !headers.some(member => member.path.endsWith('/stddef.h')))
  throw new Error(`Expected one clang resource header directory, found ${[...majors].join(', ') || 'none'}`);
for (const member of headers) if (member.type !== 'file') throw new Error(`Resource headers must be ordinary files: ${member.path}`);

// 4. Notices.
const generated = (path, text) => ({ path, type: 'file', content: Buffer.from(text), size: Buffer.byteLength(text) });
const noticeFile = (name, file) => ({ path: `lasm-notices/${name}/${file}`, type: 'file', source: join(here, 'notices', file) });
const nativeName = nativeArchiveName(version, options.platform);
const nativeMembers = [...native.values(), ...headers.map(member => ({ ...member, executable: false })),
  generated(`lasm-notices/${nativeName}/NOTICE`, nativeNotice({ name: nativeName, version, platform: options.platform,
    upstream, releasesCommit: catalog.releasesCommit, sources,
    tools: [...native.keys()].filter(path => roots.has(path) || !libraries.has(path)).sort(),
    libraries: [...libraries].sort(), external: [...external.keys()].sort() })),
  ...Object.keys(sources.licenses).map(file => noticeFile(nativeName, file))];
for (const member of nativeMembers) if (member.type === 'file' && member.size === undefined) member.size = (await stat(member.source)).size;

// 5. The shared subset: repaired Emscripten JavaScript and the prebuilt sysroot.
const js = [...members.values()].filter(member => member.path.startsWith('emscripten/'))
  .map(member => ({ ...member, path: member.path.slice('emscripten/'.length) }));
const selected = new Set(js.map(member => member.path));
for (const required of ['tools/compiler.mjs', 'tools/acorn-optimizer.mjs', 'src/settings.js', 'src/lib/libpthread.js',
  'node_modules/acorn/package.json', 'node_modules/acorn-import-phases/package.json', 'third_party/terser/terser.js', 'LICENSE'])
  if (!selected.has(required)) throw new Error(`The Emscripten subset lacks ${required}`);
const coverage = checkRepairCoverage(repairs, selected);
const jsMembers = [];
for (const member of js) {
  if (member.type === 'symlink') throw new Error(`Unexpected symbolic link in the Emscripten subset: ${member.path}`);
  if (coverage.applied.includes(member.path)) {
    const text = repairSdkFile(member.path, await readFile(member.source, 'utf8'), repairs);
    jsMembers.push({ ...generated(`${sharedLayout.emscripten}/${member.path}`, text), executable: false });
  } else jsMembers.push({ ...member, path: `${sharedLayout.emscripten}/${member.path}`, executable: false });
}
const describe = async member => ({ ...member, sha256: member.content ? sha256(member.content) : await hashFile(member.source) });
const jsInventory = await Promise.all(jsMembers.map(describe));
const jsDigest = sha256(treeDigestInput(jsInventory));
const jsBytes = jsMembers.reduce((total, member) => total + member.size, 0);
log(`Emscripten subset: ${jsMembers.length} files, ${jsBytes} bytes, digest ${jsDigest}`);

let sharedPlan;
if (sharedMode !== 'none') {
  const sysrootArchive = resolve(options.sysroot);
  const sysrootSha256 = await hashFile(sysrootArchive);
  const sysrootRoot = `emscripten-${version}-cache-wasm64-pic`;
  const sysroot = new Map();
  await pipeline(createReadStream(sysrootArchive), createZstdDecompress(), stageTar(sysrootRoot, () => true, sysroot));
  await Promise.all(writes.splice(0));
  if (failure) throw failure;
  if (hardlinks.length) throw new Error('The sysroot archive must not contain hardlinks');
  const pic = 'sysroot/lib/wasm64-emscripten/pic/';
  const missing = recipe.sysroot.libraries.filter(name => sysroot.get(pic + name)?.type !== 'file');
  if (missing.length || !sysroot.has('sysroot_install.stamp')) throw new Error(`The sysroot archive lacks ${missing.join(', ') || 'sysroot_install.stamp'}`);
  const sharedName = sharedArchiveName(version);
  const upstreams = Object.entries(catalog.artifacts).map(([platform, artifact]) => ({ platform, url: artifact.url, sha256: artifact.sha256 }));
  sharedPlan = { name: sharedName, piece: 'shared', mode: sharedMode, sysroot: { sha256: sysrootSha256, files: sysroot.size },
    members: [...jsMembers, ...[...sysroot.values()].map(member => ({ ...member, path: `${sharedLayout.cache}/${member.path}` })),
      generated(`lasm-notices/${sharedName}/NOTICE`, sharedNotice({ name: sharedName, version, releasesCommit: catalog.releasesCommit, sources, upstreams,
        repairs: { applied: coverage.applied, sysroot: coverage.sysroot, manifestSha256: sha256(JSON.stringify(repairs)) },
        sysroot: { sha256: sysrootSha256, libraries: recipe.sysroot.libraries.length, sourceDateEpoch: recipe.compile.env.SOURCE_DATE_EPOCH } }))] };
}

// 6. Pack.
const open = member => member.content ? Readable.from([member.content]) : createReadStream(member.source);
const report = { schema: 1, kind: 'lasm-link-toolchain', emscripten: version, platform: options.platform,
  releasesCommit: catalog.releasesCommit, sources,
  upstream: { name: upstream.name, url: upstream.url, sha256: upstream.sha256, bytes: upstream.bytes },
  zstd: { level: 19, windowLog: 27, longDistanceMatching: true, checksum: true, node: process.versions.node, zstd: process.versions.zstd },
  externalImports: Object.fromEntries([...external].sort()), libraries: [...libraries].sort(),
  resourceHeaders: { major: [...majors][0], files: headers.length },
  emscriptenSubset: { files: jsMembers.length, bytes: jsBytes, digest: jsDigest, repaired: coverage.applied, sysrootRepairs: coverage.sysroot, omittedRepairs: coverage.omitted },
  nativeFiles: Object.fromEntries(await Promise.all([...native.values()].map(async member => [member.path,
    member.type === 'symlink' ? { type: 'symlink', target: member.target } : { bytes: member.size, sha256: await hashFile(member.source) }]))),
  archives: [] };
const plan = [{ name: nativeName, piece: 'native', mode: 'write', members: nativeMembers }, ...(sharedPlan ? [sharedPlan] : [])];
for (const archive of plan) {
  const begin = Date.now();
  let result;
  if (archive.mode === 'write') {
    const file = join(out, archive.name + '.tar.zst'), partial = file + '.partial';
    await rm(partial, { force: true });
    result = await packArchive(archive.name, archive.members, { open, sink: createWriteStream(partial) });
    await rename(partial, file);
  } else result = await packArchive(archive.name, archive.members, { open });
  const entry = { name: archive.name + '.tar.zst', piece: archive.piece, root: archive.name, ...result,
    files: archive.members.length, fileBytes: archive.members.reduce((total, member) => total + (member.size ?? 0), 0),
    written: archive.mode === 'write', seconds: Math.round((Date.now() - begin) / 1000),
    ...(archive.sysroot ? { sysroot: archive.sysroot, emscriptenDigest: jsDigest } : {}) };
  if (options.twice) {
    const again = await packArchive(archive.name, archive.members, { open });
    if (again.sha256 !== result.sha256 || again.bytes !== result.bytes) throw new Error(`Packing ${archive.name} twice produced different bytes`);
    entry.repacked = true;
  }
  report.archives.push(entry);
  log(`${entry.name}: ${entry.bytes} bytes (${entry.fileBytes} uncompressed, ${entry.files} files) sha256 ${entry.sha256}${entry.written ? '' : ' (digest only)'}`);
}
await writeFile(join(out, `report-${options.platform}.json`), JSON.stringify(report, null, 2) + '\n');
if (!options.keep) await rm(work, { recursive: true, force: true });
console.log(JSON.stringify({ platform: report.platform, externalImports: Object.keys(report.externalImports), libraries: report.libraries,
  emscriptenSubset: report.emscriptenSubset.digest, archives: report.archives.map(({ name, bytes, sha256, written }) => ({ name, bytes, sha256, written })) }, null, 2));
