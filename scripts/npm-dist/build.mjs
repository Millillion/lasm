// Maintainer packaging for npm distribution (docs/TOOLCHAIN_SLIMMING.md, Phase 3).
// Produces, deterministically, one npm tarball per tool package (each carrying a
// catalog archive byte for byte; C tier packages also carry its licence files),
// the main package, which pins every tool package to an exact version and carries
// src/npm-tools.json, and create-lasm (packages/create-lasm), which pins the main
// package. Never publishes.
//
//   node scripts/npm-dist/build.mjs --base CANDIDATE.tgz --out DIR --step plan [--overlay-source]
//     [--scope @lasm] [--version V] [--license MIT]
//   node scripts/npm-dist/build.mjs --out DIR --step package --only @lasm/lean-linux-x64 [--assets DIR] [--seed DIR]...
//   node scripts/npm-dist/build.mjs --out DIR --step main
// scripts/npm-dist/build-all.mjs runs every step, each in its own resource guard:
// the guard counts page cache, so one process per package keeps each step small.
//
// --base is a packed Lasm candidate (scripts/package-node-release.mjs output, or a
// retained one): it supplies the runtime, native helpers and bundled installer
// dependencies. --overlay-source replaces its bin/, src/ (except src/native; the
// runtime catalogs stay the candidate's) and runtime glue with this checkout's, for
// validating unpacked source changes against an accepted runtime; the result is a
// maintainer test package, not a release candidate.
import assert from 'node:assert/strict';
import { parseArgs } from 'node:util';
import { mkdir, readFile, writeFile, rm, cp, link, copyFile, rename, stat, readdir, chmod } from 'node:fs/promises';
import { existsSync } from 'node:fs';
import { join, resolve, basename } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { x as extractTar } from 'tar';
import { pipeline } from 'node:stream/promises';
import { createReadStream } from 'node:fs';
import { createZstdDecompress } from 'node:zlib';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { downloadArtifact } from '../../src/managed-download.mjs';
import { findNpm, archiveFileName } from '../../src/npm-artifacts.mjs';
import { toolPackages, toolPackageJson, toolPackageReadme, npmToolManifest, mainPackageJson, defaultScope, maximumPackageBytes, noticeDirectory,
  createPackageJson, createPackageLicense, cTierExtraNotices, cTierFamilyNotices, noticeSections, cliLicense, slug } from './packages.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const { values: args } = parseArgs({ options: {
  step: { type: 'string' }, only: { type: 'string' },
  base: { type: 'string' }, out: { type: 'string' }, scope: { type: 'string', default: defaultScope },
  version: { type: 'string' }, license: { type: 'string' }, assets: { type: 'string', default: join(root, '.cache/npm-dist/assets') },
  seed: { type: 'string', multiple: true, default: [] }, 'overlay-source': { type: 'boolean', default: false },
} });
assert.ok(['plan', 'package', 'main'].includes(args.step) && args.out, 'Usage: build.mjs --out DIR --step plan|package|main (see header)');
const out = resolve(args.out), planFile = join(out, 'plan.json');
const json = async path => JSON.parse(await readFile(path, 'utf8'));
const npmCache = join(root, '.cache/npm'), npm = findNpm();
assert.ok(npm, 'npm was not found');
const runNpm = (npmArgs, options) => execFileSync(npm.command, [...npm.args, ...npmArgs],
  { encoding: 'utf8', maxBuffer: 64 * 1024 * 1024, windowsHide: true, ...options });

if (args.step === 'plan') {
  assert.ok(args.base, 'The plan step needs --base CANDIDATE.tgz');
  assert.ok(!existsSync(out), 'Use a new output directory');
  await mkdir(join(out, 'packages'), { recursive: true });
  await mkdir(join(out, 'packed'));
  const probe = join(out, 'base-metadata');
  await mkdir(probe);
  await extractTar({ file: resolve(args.base), cwd: probe, strict: true, preservePaths: false, preserveOwner: false,
    filter: name => ['package/package.json', 'package/application-support.json'].includes(name) });
  const basePackage = await json(join(probe, 'package/package.json')), support = await json(join(probe, 'package/application-support.json'));
  await rm(probe, { recursive: true });
  const catalogs = {
    toolchains: await json(join(root, 'src/toolchains.json')), linkToolchain: await json(join(root, 'src/link-toolchain.json')),
  };
  const packages = toolPackages({ lean: support.lean, ...catalogs, scope: args.scope,
    platforms: support.platforms });
  const plan = { schema: 1, base: { file: resolve(args.base), sha256: await hashFile(resolve(args.base)), version: basePackage.version },
    lean: support.lean, platforms: support.platforms, scope: args.scope, overlaySource: args['overlay-source'],
    main: { name: `${args.scope}/cli`, version: args.version ?? `${basePackage.version}.npm.1`, ...(args.license ? { license: args.license } : {}) },
    // The catalog this source pins, kept with the plan so later steps cannot drift.
    catalog: { toolchains: { ...catalogs.toolchains, defaultLean: support.lean, lean: { [support.lean]: catalogs.toolchains.lean[support.lean] } } },
    packages };
  await writeFile(planFile, JSON.stringify(plan, null, 2) + '\n');
  console.log(packages.map(p => p.name).join('\n'));
  process.exit(0);
}

const plan = await json(planFile);
function pack(directory, destination) {
  const [result] = JSON.parse(runNpm(['pack', '--json', '--ignore-scripts', '--pack-destination', destination, '--cache', npmCache], { cwd: directory }));
  return result;
}
/** npm pack twice into separate directories; the bytes must be identical. */
async function packTwice(directory, name) {
  const tarballs = join(out, 'packages'), repack = join(out, 'repack-' + name.replace('/', '__'));
  await mkdir(repack, { recursive: true });
  const first = pack(directory, tarballs), file = join(tarballs, first.filename), sha256 = await hashFile(file);
  const second = pack(directory, repack);
  assert.equal(second.filename, first.filename);
  assert.equal(await hashFile(join(repack, second.filename)), sha256, `Two npm pack runs differ for ${name}`);
  await rm(repack, { recursive: true });
  return { filename: first.filename, integrity: first.integrity, sha256, size: first.size, unpackedSize: first.unpackedSize,
    entryCount: first.entryCount };
}

/** A release asset in the assets directory, verified exactly as Lasm verifies it. */
async function releaseAsset(artifact) {
  const name = archiveFileName(artifact), assets = resolve(args.assets);
  await mkdir(assets, { recursive: true });
  const file = join(assets, name);
  const valid = async path => existsSync(path) && (await stat(path)).size === artifact.bytes && await hashFile(path) === artifact.sha256;
  if (!await valid(file)) {
    let seeded = false;
    for (const directory of args.seed) {
      const candidate = join(resolve(directory), name);
      if (await valid(candidate)) { await copyFile(candidate, file + '.partial'); seeded = true; break; }
    }
    if (!seeded) { console.error(`Downloading ${artifact.url}`); await downloadArtifact(artifact, file + '.partial'); }
    await rename(file + '.partial', file);
    assert.ok(await valid(file), `${name} does not match the catalog`);
  }
  // npm pack records the file mode (0600 from a download, 0644 from a copy), so fix it.
  await chmod(file, 0o644);
  return file;
}

/** Copy regular files under `prefix` of a verified tar.zst archive into `destination`, verbatim. */
async function copyArchiveFiles(file, root, members, destination) {
  const wanted = new Map(members.map(([from, to]) => [`${root}/${from}`, to]));
  const found = new Set(), staging = destination + '.extract';
  await rm(staging, { recursive: true, force: true }); await mkdir(staging, { recursive: true });
  const select = name => [...wanted.keys()].some(key => key.endsWith('/') ? name.startsWith(key) : name === key);
  await pipeline(createReadStream(file), createZstdDecompress(), extractTar({ cwd: staging, strict: true, preservePaths: false, preserveOwner: false,
    filter: (name, header) => { const keep = header.type === 'File' && select(name); if (keep) found.add(name); return keep; } }));
  for (const [from, to] of wanted) {
    const hits = [...found].filter(name => from.endsWith('/') ? name.startsWith(from) : name === from);
    assert.ok(hits.length, `${basename(file)} lacks ${from}`);
    for (const hit of hits) {
      const target = join(destination, to, from.endsWith('/') ? hit.slice(from.length) : '');
      await mkdir(join(target, '..'), { recursive: true });
      await rename(join(staging, hit), target);
      await chmod(target, 0o644);
    }
  }
  await rm(staging, { recursive: true });
}

/** Copy every licence-type member (LICENSE*, LICENSES, COPYING*, COPYRIGHT*, NOTICE*, and
 * all of lasm-notices/) of a verified tar.zst archive into `destination`, keeping paths. */
async function copyLicenseMembers(file, root, destination) {
  const wanted = name => {
    const path = name.split('/').slice(1).join('/'), base = path.split('/').pop();
    return path.startsWith('lasm-notices/') || /^(?:licen[cs]es?|copying|copyright|notice)(?:[-._].*)?$/i.test(base);
  };
  let count = 0;
  await pipeline(createReadStream(file), createZstdDecompress(), extractTar({ cwd: destination, strip: 1, strict: true, preservePaths: false, preserveOwner: false,
    filter: (name, header) => { const keep = header.type === 'File' && name.startsWith(root + '/') && wanted(name); if (keep) count++; return keep; } }));
  assert.ok(count, `${basename(file)} has no licence files`);
  for (const entry of await readdir(destination, { recursive: true, withFileTypes: true })) if (entry.isFile()) await chmod(join(entry.parentPath, entry.name), 0o644);
}

if (args.step === 'package') {
  const pkg = plan.packages.find(p => p.name === args.only);
  assert.ok(pkg, `No planned package ${args.only}`);
  const artifact = pkg.artifact, name = archiveFileName(artifact), file = await releaseAsset(artifact);
  const directory = join(out, 'staging', pkg.name.replace('/', '__'));
  await rm(directory, { recursive: true, force: true });
  await mkdir(directory, { recursive: true });
  try { await link(file, join(directory, name)); } catch { await copyFile(file, join(directory, name)); }
  // Every package shows its archive's licence files in licenses/, without extracting anything.
  if (!pkg.notices) {
    await mkdir(join(directory, noticeDirectory), { recursive: true });
    await copyLicenseMembers(file, artifact.root, join(directory, noticeDirectory));
  }
  if (pkg.notices) {
    // The C tier's own notices, and the licences of the Lean release its files come from.
    const notices = join(directory, noticeDirectory), bin = pkg.notices.bin;
    await copyArchiveFiles(file, artifact.root, [[`lasm-notices/${artifact.root}/`, artifact.root]], notices);
    await copyArchiveFiles(await releaseAsset(bin), bin.root, [['LICENSE', 'lean/LICENSE'], ['LICENSES', 'lean/LICENSES'],
      [`lasm-notices/${bin.root}/libuv-LICENSE`, 'libuv/LICENSE'], [`lasm-notices/${bin.root}/libuv-LICENSE-extra`, 'libuv/LICENSE-extra']], notices);
    // Texts that neither archive of release c-v1 carries (docs/LICENSE_AUDIT.md).
    for (const [from, to] of [...cTierExtraNotices, ...cTierFamilyNotices[pkg.platform.split('-')[0]]]) {
      await mkdir(join(notices, to, '..'), { recursive: true });
      await copyFile(join(root, 'scripts/lean-dist/notices', from), join(notices, to));
    }
  }
  await writeFile(join(directory, 'package.json'), JSON.stringify(toolPackageJson(pkg), null, 2) + '\n');
  await writeFile(join(directory, 'README.md'), toolPackageReadme(pkg));
  const packed = await packTwice(directory, pkg.name);
  assert.ok(packed.size <= maximumPackageBytes, `${pkg.name} exceeds the package ceiling`);
  await rm(directory, { recursive: true });
  await writeFile(join(out, 'packed', pkg.name.replace('/', '__') + '.json'), JSON.stringify(packed, null, 2) + '\n');
  console.log(`packed ${pkg.name}@${pkg.version} ${packed.size} bytes ${packed.integrity}`);
}

/** README.md for npm: newlines normalized, relative links to github.com at tag v<version>. */
function publishedReadme(text, version) {
  return text.replaceAll('\r\n', '\n').replace(/\]\(((?!https?:|#|mailto:)[^)]+)\)/g,
    (_, path) => `](https://github.com/Millillion/lasm/blob/v${version}/${path})`);
}

if (args.step === 'main') {
  const packed = {};
  for (const pkg of plan.packages) packed[pkg.name] = await json(join(out, 'packed', pkg.name.replace('/', '__') + '.json'));
  const directory = join(out, 'staging', 'main');
  await rm(directory, { recursive: true, force: true });
  await mkdir(directory, { recursive: true });
  assert.equal(await hashFile(plan.base.file), plan.base.sha256, 'The base candidate changed since the plan step');
  await extractTar({ file: plan.base.file, cwd: directory, strict: true, preservePaths: false, preserveOwner: false });
  const main = join(directory, 'package'), basePackage = await json(join(main, 'package.json'));
  let overlay;
  if (plan.overlaySource) {
    for (const path of ['bin', 'src']) {
      for (const name of await readdir(join(main, path))) if (!(path === 'src' && name === 'native')) await rm(join(main, path, name), { recursive: true });
      await cp(join(root, path), join(main, path), { recursive: true, filter: file => file !== join(root, 'src', 'native') });
    }
    for (const name of ['emscripten-pre.js', 'host-pre.js', 'host-library.js', 'lean-symbol-loader.mjs', 'function-table-index.mjs', 'table-growth.mjs'])
      await copyFile(join(root, 'scripts/full-lean', name), join(main, 'scripts/full-lean', name));
    // As scripts/package-node-release.mjs: only the packaged Lean version and its accepted runtime.
    await writeFile(join(main, 'src/toolchains.json'), JSON.stringify(plan.catalog.toolchains, null, 2) + '\n');
    const provenance = await json(join(main, 'provenance.json'));
    await writeFile(join(main, 'src/application-runtimes.json'), JSON.stringify({ schema: 1,
      lean: { [plan.lean]: { name: `lean-${plan.lean}-wasm64`, manifestSha256: provenance.runtimeManifestSha256 } } }, null, 2) + '\n');
    let sourceRevision = 'unknown', uncommittedChanges = 'unknown';
    try {
      sourceRevision = execFileSync('git', ['rev-parse', 'HEAD'], { cwd: root, encoding: 'utf8' }).trim();
      uncommittedChanges = execFileSync('git', ['status', '--porcelain', '--', 'bin', 'src', 'scripts/full-lean'], { cwd: root, encoding: 'utf8' }).trim() !== '';
    } catch {}
    overlay = { sourceRevision, uncommittedChanges };
    await writeFile(join(main, 'provenance.json'), JSON.stringify({ ...provenance, npmDistributionOverlay: overlay }, null, 2) + '\n');
  }
  // A publication licence (for example --license MIT) is Lasm's own: LICENSE is this
  // checkout's text. The `license` field is an SPDX expression of Lasm's licence and
  // every bundled component, whose texts go to licenses/ (docs/LICENSE_AUDIT.md).
  let mainMeta = plan.main;
  if (plan.main.license) {
    await copyFile(join(root, 'LICENSE'), join(main, 'LICENSE'));
    // The published README is this checkout's (npm shows it), not the candidate's
    // "install this tarball" text; repository links point at the release tag.
    await writeFile(join(main, 'README.md'), publishedReadme(await readFile(join(root, 'README.md'), 'utf8'), plan.main.version));
    const licenses = join(main, 'licenses'), headings = [];
    const sections = async (file, prefix) => {
      for (const [heading, text] of noticeSections(await readFile(file, 'utf8'))) {
        headings.push(heading);
        await mkdir(join(licenses, ...prefix), { recursive: true });
        await writeFile(join(licenses, ...prefix, slug(heading) + '.txt'), text);
      }
    };
    await sections(join(main, 'THIRD_PARTY_NOTICES.txt'), []);
    for (const helper of ['process', 'signals']) {
      const file = join(main, 'src/native', helper, 'THIRD_PARTY_NOTICES.txt');
      if (existsSync(file)) await sections(file, ['native-' + helper]);
    }
    const bundled = [];
    for (const name of await readdir(join(main, 'node_modules'))) {
      const names = name.startsWith('@') ? (await readdir(join(main, 'node_modules', name))).map(child => name + '/' + child) : [name];
      for (const pkgName of names) {
        const directory = join(main, 'node_modules', pkgName), meta = await json(join(directory, 'package.json'));
        bundled.push(meta.license);
        for (const file of (await readdir(directory)).filter(file => /^(?:licen[cs]e|copying|notice)/i.test(file))) {
          await mkdir(join(licenses, 'npm', pkgName), { recursive: true });
          await copyFile(join(directory, file), join(licenses, 'npm', pkgName, file));
        }
      }
    }
    mainMeta = { ...plan.main, license: cliLicense(plan.main.license, headings, bundled), licenseFiles: true };
  }
  await writeFile(join(main, 'src/npm-tools.json'), JSON.stringify(npmToolManifest(plan.packages, packed), null, 2) + '\n');
  await writeFile(join(main, 'package.json'), JSON.stringify(mainPackageJson(basePackage, plan.packages, mainMeta), null, 2) + '\n');
  const mainPacked = await packTwice(main, plan.main.name);
  // create-lasm, in lockstep with the CLI (packages/create-lasm).
  const create = join(out, 'staging', 'create');
  await rm(create, { recursive: true, force: true });
  await mkdir(create, { recursive: true });
  for (const name of ['bin.mjs', 'create.mjs', 'README.md']) await copyFile(join(root, 'packages/create-lasm', name), join(create, name));
  await chmod(join(create, 'bin.mjs'), 0o755);
  await writeFile(join(create, 'LICENSE'), createPackageLicense(2026));
  const createMeta = createPackageJson(plan.main, { engines: basePackage.engines });
  await writeFile(join(create, 'package.json'), JSON.stringify(createMeta, null, 2) + '\n');
  const createPacked = await packTwice(create, createMeta.name);
  await rm(directory, { recursive: true });
  await rm(join(out, 'staging'), { recursive: true, force: true });
  const record = {
    schema: 1, scope: plan.scope, lean: plan.lean, platforms: plan.platforms, recordedAt: new Date().toISOString(),
    host: `${process.platform}-${process.arch}`, node: process.versions.node, npm: runNpm(['--version']).trim(), reproduciblePacking: true,
    base: { file: basename(plan.base.file), sha256: plan.base.sha256, version: plan.base.version }, overlay,
    main: { ...plan.main, license: mainMeta.license, ...mainPacked },
    create: { name: createMeta.name, version: createMeta.version, license: createMeta.license, ...createPacked },
    packages: plan.packages.map(pkg => ({ name: pkg.name, version: pkg.version, install: pkg.install, platform: pkg.platform,
      artifact: { name: pkg.artifact.name, sha256: pkg.artifact.sha256, bytes: pkg.artifact.bytes }, ...packed[pkg.name] })),
  };
  await writeFile(join(out, 'npm-dist.json'), JSON.stringify(record, null, 2) + '\n');
  console.log(JSON.stringify({ main: record.main, create: record.create, packages: record.packages.map(p => [p.name, p.version, p.install, p.size]) }, null, 2));
}
