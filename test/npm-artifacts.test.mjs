import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, readFile, writeFile, rm } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { pathToFileURL } from 'node:url';
import { createHash } from 'node:crypto';
import { zstdCompressSync } from 'node:zlib';
import { c as createTar } from 'tar';
import { provisionArtifact } from '../src/managed-artifacts.mjs';
import { artifactSourceMode, validateNpmToolManifest, npmEntryFor, missingPackageMessage, resolveInstalledPackage, findNpm,
  fetchNpmPackage, archiveFileName, checkInstalledToolPackages, bundledNpmToolManifest } from '../src/npm-artifacts.mjs';

const hash = bytes => createHash('sha256').update(bytes).digest('hex');
const integrity = bytes => 'sha512-' + createHash('sha512').update(bytes).digest('base64');

async function fixture(t, { install = 'optional', packageVersion = '1.0.0-lasm.1', installed = true, fileBytes } = {}) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-npm-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  const source = join(base, 'source');
  await mkdir(join(source, 'tool/bin'), { recursive: true });
  await writeFile(join(source, 'tool/bin/lean'), 'compiler fixture');
  await createTar({ cwd: source, file: join(base, 'tool.tar'), portable: true }, ['tool']);
  const bytes = zstdCompressSync(await readFile(join(base, 'tool.tar')));
  const artifact = { name: 'tool-1', root: 'tool', url: 'https://example.invalid/tool-1.tar.zst', sha256: hash(bytes),
    bytes: bytes.length, format: 'tar.zst', maximumExtractedBytes: 1_000_000 };
  // A product layout: <app>/node_modules/@lasm/compiler/src and a sibling tool package.
  const product = join(base, 'app/node_modules/@lasm/compiler/src/index.mjs');
  await mkdir(join(base, 'app/node_modules/@lasm/compiler/src'), { recursive: true });
  await writeFile(product, '');
  const packageDirectory = join(base, 'app/node_modules/@lasm/lean-linux-x64');
  if (installed) {
    await mkdir(packageDirectory, { recursive: true });
    await writeFile(join(packageDirectory, 'package.json'), JSON.stringify({ name: '@lasm/lean-linux-x64', version: packageVersion }));
    await writeFile(join(packageDirectory, 'tool-1.tar.zst'), fileBytes ?? bytes);
  }
  const entry = { package: '@lasm/lean-linux-x64', version: '1.0.0-lasm.1', file: 'tool-1.tar.zst', bytes: bytes.length,
    integrity: integrity(Buffer.from('placeholder')), install, platform: 'linux-x64' };
  const manifest = validateNpmToolManifest({ schema: 1, artifacts: { [artifact.sha256]: entry } });
  const logs = [];
  let requests = 0;
  const options = { cache: join(base, 'cache'), log: line => logs.push(line), env: {},
    fetch: async () => { requests++; return new Response(bytes); }, npm: { manifest, resolveFrom: product } };
  return { base, bytes, artifact, entry, manifest, options, logs, product, packageDirectory, requests: () => requests };
}

test('an installed npm package supplies the exact archive; no network request is made', async t => {
  const f = await fixture(t);
  const installed = await provisionArtifact(f.artifact, f.options);
  assert.equal(f.requests(), 0);
  assert.deepEqual(installed.receipt.source, { kind: 'npm-installed', package: '@lasm/lean-linux-x64', version: '1.0.0-lasm.1' });
  assert.equal(await readFile(join(installed.directory, 'bin/lean'), 'utf8'), 'compiler fixture');
  assert.ok(f.logs.some(line => line.includes('from npm package @lasm/lean-linux-x64@1.0.0-lasm.1')));
});

test('a missing platform package prints the exact fix and falls back to the verified download', async t => {
  const f = await fixture(t, { installed: false });
  const installed = await provisionArtifact(f.artifact, f.options);
  assert.equal(f.requests(), 1);
  assert.equal(installed.receipt.source.kind, 'https');
  const message = f.logs.find(line => line.includes('is not installed'));
  assert.match(message, /Fix: run `npm install @lasm\/lean-linux-x64@1\.0\.0-lasm\.1`/);
  assert.match(message, /--omit=optional/);
  assert.match(message, /npm\/cli#4828/);
  assert.match(message, /Downloading the same verified archive directly instead/);
});

test('LASM_ARTIFACT_SOURCE=npm forbids the fallback download', async t => {
  const f = await fixture(t, { installed: false });
  await assert.rejects(provisionArtifact(f.artifact, { ...f.options, env: { LASM_ARTIFACT_SOURCE: 'npm' } }),
    error => error.code === 'LASM_NPM_ONLY' && /forbids downloading/.test(error.message));
  assert.equal(f.requests(), 0);
  assert.match(f.logs.join('\n'), /LASM_ARTIFACT_SOURCE=npm forbids direct downloads/);
  // Artifacts no npm package carries are refused too.
  await assert.rejects(provisionArtifact(f.artifact, { ...f.options, env: { LASM_ARTIFACT_SOURCE: 'npm' }, npm: { manifest: null } }),
    /no npm package of this Lasm installation carries it/);
});

test('LASM_ARTIFACT_SOURCE=https ignores installed packages; unknown modes are rejected', async t => {
  const f = await fixture(t);
  const installed = await provisionArtifact(f.artifact, { ...f.options, env: { LASM_ARTIFACT_SOURCE: 'https' } });
  assert.equal(installed.receipt.source.kind, 'https');
  assert.equal(f.requests(), 1);
  assert.throws(() => artifactSourceMode({ LASM_ARTIFACT_SOURCE: 'ftp' }), /must be one of auto, npm, https/);
  assert.equal(artifactSourceMode({}), 'auto');
});

test('a different installed version or a damaged archive is not used', async t => {
  const other = await fixture(t, { packageVersion: '1.0.0-lasm.2' });
  assert.match((await resolveInstalledPackage(other.entry, { resolveFrom: other.product })).missing, /installed at version 1\.0\.0-lasm\.2/);
  await provisionArtifact(other.artifact, other.options);
  assert.equal(other.requests(), 1);
  // Same size, different bytes: the SHA-256 check rejects it and the download is used.
  const probe = await fixture(t);
  const damaged = Buffer.from(probe.bytes); damaged[damaged.length - 1] ^= 1;
  const f = await fixture(t, { fileBytes: damaged });
  const installed = await provisionArtifact(f.artifact, f.options);
  assert.equal(installed.receipt.source.kind, 'https');
  assert.match(f.logs.join('\n'), /does not match the pinned SHA-256/);
});

test('on-demand packages are fetched with npm pack and checked against the pinned integrity', async t => {
  const f = await fixture(t, { install: 'demand', installed: false });
  const tarballSource = join(f.base, 'pack-source');
  await mkdir(join(tarballSource, 'package'), { recursive: true });
  await writeFile(join(tarballSource, 'package/package.json'), '{}');
  await writeFile(join(tarballSource, 'package/tool-1.tar.zst'), f.bytes);
  await createTar({ cwd: tarballSource, file: join(f.base, 'pkg.tgz'), gzip: true, portable: true }, ['package']);
  const tgz = await readFile(join(f.base, 'pkg.tgz'));
  const calls = [];
  const run = async (npm, args, options) => {
    calls.push({ npm, args, options });
    await writeFile(join(args[args.indexOf('--pack-destination') + 1], 'lasm-lean-linux-x64-1.0.0-lasm.1.tgz'), tgz);
    return JSON.stringify([{ filename: 'lasm-lean-linux-x64-1.0.0-lasm.1.tgz' }]);
  };
  const entry = { ...f.entry, integrity: integrity(tgz) };
  const manifest = { schema: 1, artifacts: { [f.artifact.sha256]: entry } };
  const npm = { command: '/usr/bin/node', args: ['/npm-cli.js'] };
  const installed = await provisionArtifact(f.artifact, { ...f.options, npm: { manifest, npm, run, cwd: f.base } });
  assert.equal(f.requests(), 0);
  assert.equal(installed.receipt.source.kind, 'npm-fetched');
  assert.equal(calls.length, 1);
  assert.deepEqual(calls[0].args.slice(0, 2), ['pack', '@lasm/lean-linux-x64@1.0.0-lasm.1']);
  assert.ok(calls[0].args.includes('--ignore-scripts'));
  assert.equal(calls[0].options.cwd, f.base);

  // A registry serving other bytes is refused; the verified download is used instead.
  const g = await fixture(t, { install: 'demand', installed: false });
  const wrong = { schema: 1, artifacts: { [g.artifact.sha256]: { ...g.entry, integrity: integrity(Buffer.from('other')) } } };
  const fallback = await provisionArtifact(g.artifact, { ...g.options, npm: { manifest: wrong, npm, run, cwd: g.base } });
  assert.equal(fallback.receipt.source.kind, 'https');
  assert.match(g.logs.join('\n'), /npm could not fetch @lasm\/lean-linux-x64@1\.0\.0-lasm\.1 .*does not match its pinned integrity/);
  // npm failures fall back too, unless downloads are forbidden.
  const h = await fixture(t, { install: 'demand', installed: false });
  const failing = async () => { throw new Error('npm pack failed (1): E404'); };
  await assert.rejects(provisionArtifact(h.artifact, { ...h.options, env: { LASM_ARTIFACT_SOURCE: 'npm' },
    npm: { manifest: h.manifest, npm, run: failing } }), /npm could not fetch .*E404/);
  assert.equal(h.requests(), 0);
});

test('fetchNpmPackage extracts only the archive member', async t => {
  const f = await fixture(t, { install: 'demand', installed: false });
  const tarballSource = join(f.base, 'pack-source');
  await mkdir(join(tarballSource, 'package'), { recursive: true });
  await writeFile(join(tarballSource, 'package/README.md'), 'x');
  await createTar({ cwd: tarballSource, file: join(f.base, 'pkg.tgz'), gzip: true, portable: true }, ['package']);
  const tgz = await readFile(join(f.base, 'pkg.tgz'));
  const run = async (npm, args) => { await writeFile(join(args[args.indexOf('--pack-destination') + 1], 'p.tgz'), tgz); return '[]'; };
  const work = join(f.base, 'work'); await mkdir(work);
  await assert.rejects(fetchNpmPackage({ ...f.entry, integrity: integrity(tgz) }, work, { npm: { command: 'npm', args: [] }, run }),
    /lacks tool-1\.tar\.zst/);
  await assert.rejects(fetchNpmPackage(f.entry, work, { npm: null }), /npm was not found/);
});

test('missing-package messages name the exact package and version', () => {
  const entry = { package: '@lasm/emscripten-darwin-arm64', version: '6.0.9-lasm.1', install: 'optional' };
  const message = missingPackageMessage(entry, 'is not installed', 'auto', 'compiler tools');
  assert.match(message, /^Lasm's npm package @lasm\/emscripten-darwin-arm64@6\.0\.9-lasm\.1 \(compiler tools\) is not installed\./);
  assert.match(message, /`npm install @lasm\/emscripten-darwin-arm64@6\.0\.9-lasm\.1`/);
  assert.match(message, /npm install --include=optional/);
  const both = missingPackageMessage(entry, 'is not installed', 'auto', 'compiler tools',
    ['@lasm/emscripten-darwin-arm64@6.0.9-lasm.1', '@lasm/lean-darwin-arm64@4.35.0-lasm.1']);
  assert.match(both, /`npm install @lasm\/emscripten-darwin-arm64@6\.0\.9-lasm\.1 @lasm\/lean-darwin-arm64@4\.35\.0-lasm\.1`/);
  const shared = missingPackageMessage({ ...entry, install: 'required' }, 'is not installed', 'npm', 'x');
  assert.doesNotMatch(shared, /optional/);
  assert.match(shared, /LASM_ARTIFACT_SOURCE=npm forbids direct downloads/);
});

test('npm is found from npm_execpath, beside Node, or on PATH without a shell', () => {
  const exists = files => file => files.includes(file);
  assert.deepEqual(findNpm({ env: { npm_execpath: '/n/lib/node_modules/npm/bin/npx-cli.js' }, execPath: '/n/bin/node', platform: 'linux',
    exists: exists(['/n/lib/node_modules/npm/bin/npm-cli.js']) }), { command: '/n/bin/node', args: ['/n/lib/node_modules/npm/bin/npm-cli.js'] });
  // pnpm's npm_execpath is not npm; use the npm beside Node.
  assert.deepEqual(findNpm({ env: { npm_execpath: '/p/pnpm.cjs' }, execPath: '/n/bin/node', platform: 'darwin',
    exists: exists(['/n/lib/node_modules/npm/bin/npm-cli.js']) }), { command: '/n/bin/node', args: ['/n/lib/node_modules/npm/bin/npm-cli.js'] });
  assert.deepEqual(findNpm({ env: { PATH: '/a:/b' }, execPath: '/x/node', platform: 'linux', exists: exists(['/b/npm']) }),
    { command: '/b/npm', args: [] });
  assert.deepEqual(findNpm({ env: {}, execPath: 'C:\\Program Files\\nodejs\\node.exe', platform: 'win32',
    exists: exists(['C:\\Program Files\\nodejs\\node_modules\\npm\\bin\\npm-cli.js']) }),
  { command: 'C:\\Program Files\\nodejs\\node.exe', args: ['C:\\Program Files\\nodejs\\node_modules\\npm\\bin\\npm-cli.js'] });
  assert.deepEqual(findNpm({ env: { Path: 'C:\\tools\\node' }, execPath: 'D:\\node.exe', platform: 'win32',
    exists: exists(['C:\\tools\\node\\npm.cmd', 'C:\\tools\\node\\node_modules\\npm\\bin\\npm-cli.js']) }),
  { command: 'D:\\node.exe', args: ['C:\\tools\\node\\node_modules\\npm\\bin\\npm-cli.js'] });
  assert.equal(findNpm({ env: { PATH: '/a' }, execPath: '/x/node', platform: 'linux', exists: () => false }), null);
});

test('manifest validation, entry matching and installed-package checks', async t => {
  const f = await fixture(t);
  assert.throws(() => validateNpmToolManifest({ schema: 1, artifacts: { [f.artifact.sha256]: { ...f.entry, version: '^1.0.0' } } }), /Invalid npm tool manifest entry/);
  assert.throws(() => validateNpmToolManifest({ schema: 1, artifacts: { [f.artifact.sha256]: { ...f.entry, install: 'postinstall' } } }), /Invalid/);
  assert.equal(npmEntryFor(f.manifest, { ...f.artifact, bytes: f.artifact.bytes + 1 }), null);
  assert.equal(archiveFileName({ name: 'emscripten-6.0.9-linux-x64-tools', format: 'tar.zst' }), 'emscripten-6.0.9-linux-x64-tools.tar.zst');
  assert.equal(archiveFileName({ name: 'lean-4.35.0-core-std.tar.zst', format: 'tar.zst' }), 'lean-4.35.0-core-std.tar.zst');
  const report = await checkInstalledToolPackages(f.manifest, { resolveFrom: f.product, platform: 'linux', arch: 'x64' });
  assert.deepEqual(report.installed, ['@lasm/lean-linux-x64@1.0.0-lasm.1']);
  const elsewhere = await checkInstalledToolPackages(f.manifest, { resolveFrom: join(f.base, 'nowhere.mjs'), platform: 'linux', arch: 'x64' });
  assert.deepEqual(elsewhere.missing.map(item => item.fix), ['npm install @lasm/lean-linux-x64@1.0.0-lasm.1']);
  assert.deepEqual((await checkInstalledToolPackages(f.manifest, { resolveFrom: f.product, platform: 'darwin', arch: 'arm64' })).missing, []);
  // A source checkout has no packed manifest and keeps downloading directly.
  assert.equal(await bundledNpmToolManifest(pathToFileURL(join(f.base, 'nonexistent', 'npm-tools.json'))), null);
});
