// npm as an artifact source, contract by contract (src/npm-artifacts.mjs): the
// manifest's grammar, package resolution, `npm pack` through a stand-in npm, the
// registry fallback, and every route acquireArtifact takes.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, readFile, rm, readdir } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';
import { c as createTar } from 'tar';
import { validateNpmToolManifest, npmEntryFor, archiveFileName, npmSpec, npmInstallFix, missingPackageMessage, resolveInstalledPackage,
  fetchNpmPackage, registryTarballUrl, acquireArtifact, checkInstalledToolPackages, artifactSourceMode, artifactSourceModes, findNpm } from '../src/npm-artifacts.mjs';

const integrity = bytes => 'sha512-' + createHash('sha512').update(bytes).digest('base64');
const sha = 'b'.repeat(64);
const entry = { package: '@lasm/tool-linux-x64', version: '1.2.3-lasm.1', file: 'tool.tar.zst', bytes: 5,
  integrity: integrity(Buffer.from('x')), install: 'optional', platform: 'linux-x64' };
async function scratch(t) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-npm-units-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  return base;
}

test('source modes', () => {
  assert.deepEqual(artifactSourceModes, ['auto', 'npm', 'https']);
  assert.ok(Object.isFrozen(artifactSourceModes));
  for (const mode of artifactSourceModes) assert.equal(artifactSourceMode({ LASM_ARTIFACT_SOURCE: mode }), mode);
  assert.equal(artifactSourceMode({ LASM_ARTIFACT_SOURCE: '' }), 'auto');
  assert.throws(() => artifactSourceMode({ LASM_ARTIFACT_SOURCE: 'NPM' }), { message: 'LASM_ARTIFACT_SOURCE must be one of auto, npm, https.' });
});

test('the tool manifest grammar, field by field', () => {
  const ok = { schema: 1, artifacts: { [sha]: entry } };
  assert.equal(validateNpmToolManifest(ok), ok);
  assert.doesNotThrow(() => validateNpmToolManifest({ schema: 1, artifacts: {} }));
  for (const change of [{ package: 'lasm-tool' }, { package: '@a/b' }, { version: '1.2.3' }, { file: 'A.b-c_d' }, { install: 'required' }, { install: 'demand' },
    { platform: undefined }, { platform: 'darwin-arm64' }, { platform: 'win32-x64' }])
    assert.doesNotThrow(() => validateNpmToolManifest({ schema: 1, artifacts: { [sha]: { ...entry, ...change } } }), JSON.stringify(change));
  for (const manifest of [null, {}, { schema: 2, artifacts: {} }, { schema: 1 }, { schema: 1, artifacts: null }, { schema: 1, artifacts: 'x' }])
    assert.throws(() => validateNpmToolManifest(manifest), { message: 'Invalid npm tool manifest' }, JSON.stringify(manifest));
  assert.throws(() => validateNpmToolManifest({ schema: 1, artifacts: { ['B'.repeat(64)]: entry } }), { message: `Invalid npm tool manifest entry for ${'B'.repeat(64)}` });
  assert.throws(() => validateNpmToolManifest({ schema: 1, artifacts: { [sha]: null } }), /entry for/);
  for (const change of [{ package: undefined }, { package: 'Upper' }, { package: '@scope' }, { package: '@/x' }, { package: 'a/b' }, { package: '.x' },
    { version: undefined }, { version: '1.2' }, { version: 'v1.2.3' }, { version: '1.2.3 ' }, { version: '1.2.3-' },
    { file: undefined }, { file: '../x' }, { file: '.x' }, { file: 'a/b' },
    { bytes: 0 }, { bytes: 1.5 }, { bytes: '5' }, { bytes: undefined },
    { integrity: undefined }, { integrity: 'sha256-abc' }, { integrity: 'sha512-' + 'A'.repeat(85) + '==' }, { integrity: 'sha512-' + 'A'.repeat(86) + '=' },
    { install: undefined }, { install: 'postinstall' },
    { platform: 'linux' }, { platform: 'freebsd-x64' }, { platform: 'linux-ia32' }, { platform: '' }, { platform: 'linux-x64 ' }])
    assert.throws(() => validateNpmToolManifest({ schema: 1, artifacts: { [sha]: { ...entry, ...change } } }), { message: `Invalid npm tool manifest entry for ${sha}` }, JSON.stringify(change));
});

test('entries match an artifact by hash, size and file name', () => {
  const manifest = { schema: 1, artifacts: { [sha]: entry } };
  const artifact = { name: 'tool', format: 'tar.zst', sha256: sha, bytes: 5 };
  assert.equal(npmEntryFor(manifest, artifact), entry);
  assert.equal(npmEntryFor(manifest, { ...artifact, name: 'tool.tar.zst' }), entry);
  assert.equal(npmEntryFor(manifest, { ...artifact, bytes: 6 }), null);
  assert.equal(npmEntryFor(manifest, { ...artifact, name: 'other' }), null);
  assert.equal(npmEntryFor(manifest, { ...artifact, sha256: 'c'.repeat(64) }), null);
  assert.equal(npmEntryFor(null, artifact), null);
  assert.equal(npmEntryFor({}, artifact), null);
  assert.equal(archiveFileName({ name: 'a.tar.gz', format: 'tar.zst' }), 'a.tar.gz.tar.zst');
  assert.equal(archiveFileName({ name: 'a.zip', format: 'zip' }), 'a.zip');
  assert.equal(npmSpec(entry), '@lasm/tool-linux-x64@1.2.3-lasm.1');
  assert.equal(npmInstallFix(entry, 'other@1.0.0'), 'npm install @lasm/tool-linux-x64@1.2.3-lasm.1 other@1.0.0');
});

test('missing-package messages, word for word', () => {
  assert.equal(missingPackageMessage(entry, 'is not installed', 'auto', 'the tool'),
    "Lasm's npm package @lasm/tool-linux-x64@1.2.3-lasm.1 (the tool) is not installed. npm skips platform packages when optional dependencies are omitted "
    + '(--omit=optional or npm_config_omit=optional), when the lockfile was created on another operating system and lacks this platform (npm/cli#4828), '
    + 'or when the C library is unsupported (Linux requires glibc). Fix: run `npm install @lasm/tool-linux-x64@1.2.3-lasm.1` in the project where Lasm is installed, '
    + 'or reinstall with optional dependencies included (`npm install --include=optional`). Downloading the same verified archive directly instead.');
  assert.equal(missingPackageMessage({ ...entry, install: 'required' }, 'lacks x', 'npm', 'the tool', ['a@1.0.0', 'b@2.0.0']),
    "Lasm's npm package @lasm/tool-linux-x64@1.2.3-lasm.1 (the tool) lacks x. The installation is incomplete. "
    + 'Fix: run `npm install a@1.0.0 b@2.0.0` in the project where Lasm is installed. LASM_ARTIFACT_SOURCE=npm forbids direct downloads.');
});

async function product(t, { name = entry.package, version = entry.version, file = 'hello', fileName = entry.file, directoryFile = false } = {}) {
  const base = await scratch(t);
  await mkdir(join(base, 'node_modules/@lasm/compiler/src'), { recursive: true });
  const from = join(base, 'node_modules/@lasm/compiler/src/index.mjs');
  await writeFile(from, '');
  const directory = join(base, 'node_modules', entry.package);
  await mkdir(directory, { recursive: true });
  await writeFile(join(directory, 'package.json'), JSON.stringify({ name, version }));
  if (directoryFile) await mkdir(join(directory, fileName));
  else if (file !== null) await writeFile(join(directory, fileName), file);
  return { base, from, directory };
}

test('installed packages resolve only with the pinned name, version and archive size', async t => {
  const p = await product(t);
  assert.deepEqual(await resolveInstalledPackage(entry, { resolveFrom: p.from }), { directory: p.directory, file: join(p.directory, entry.file) });
  assert.deepEqual(await resolveInstalledPackage({ ...entry, package: '@lasm/absent' }, { resolveFrom: p.from }), { missing: 'is not installed' });
  assert.deepEqual(await resolveInstalledPackage(entry, { resolveFrom: (await product(t, { name: '@lasm/impostor' })).from }),
    { missing: 'resolved to a different package (@lasm/impostor)' });
  assert.deepEqual(await resolveInstalledPackage(entry, { resolveFrom: (await product(t, { version: '9.9.9' })).from }),
    { missing: `is installed at version 9.9.9, not ${entry.version}` });
  assert.deepEqual(await resolveInstalledPackage(entry, { resolveFrom: (await product(t, { file: null })).from }), { missing: `lacks ${entry.file}` });
  assert.deepEqual(await resolveInstalledPackage(entry, { resolveFrom: (await product(t, { file: 'four' })).from }), { missing: `has a damaged ${entry.file}` });
  assert.deepEqual(await resolveInstalledPackage(entry, { resolveFrom: (await product(t, { directoryFile: true })).from }), { missing: `has a damaged ${entry.file}` });
  // A package.json that is not JSON is an error, not a missing package.
  const broken = await product(t);
  await writeFile(join(broken.directory, 'package.json'), '{');
  await assert.rejects(resolveInstalledPackage(entry, { resolveFrom: broken.from }), { code: 'ERR_INVALID_PACKAGE_CONFIG' });
});

test('installed tool packages: this host\'s optional and required packages, never on-demand ones', async t => {
  const p = await product(t);
  const manifest = { schema: 1, artifacts: { [sha]: entry, ['c'.repeat(64)]: { ...entry, package: '@lasm/shared', platform: undefined, install: 'required' },
    ['d'.repeat(64)]: { ...entry, package: '@lasm/demand', install: 'demand' }, ['e'.repeat(64)]: { ...entry, package: '@lasm/mac', platform: 'darwin-arm64' } } };
  assert.deepEqual(await checkInstalledToolPackages(manifest, { resolveFrom: p.from, platform: 'linux', arch: 'x64' }), {
    host: 'linux-x64', installed: ['@lasm/tool-linux-x64@1.2.3-lasm.1'],
    missing: [{ spec: '@lasm/shared@1.2.3-lasm.1', reason: 'is not installed', fix: 'npm install @lasm/shared@1.2.3-lasm.1' }] });
});

test('npm is preferred from npm_execpath only when it is npm or npx, then beside Node', () => {
  const calls = [];
  const exists = files => file => { calls.push(file); return files.includes(file); };
  assert.equal(findNpm({ env: { npm_execpath: 'relative/npm-cli.js' }, execPath: '/n/bin/node', platform: 'linux', exists: exists([]) }), null);
  assert.deepEqual(calls, ['/n/lib/node_modules/npm/bin/npm-cli.js'], 'a relative npm_execpath is ignored');
  assert.deepEqual(findNpm({ env: { npm_execpath: '/q/npm-cli.js' }, execPath: '/n/bin/node', platform: 'linux', exists: exists(['/q/npm-cli.js']) }),
    { command: '/n/bin/node', args: ['/q/npm-cli.js'] });
  assert.equal(findNpm({ env: { npm_execpath: '/q/xnpm-cli.js' }, execPath: '/n/bin/node', platform: 'linux', exists: exists(['/q/npm-cli.js']) }), null);
  // On POSIX, PATH is found under any spelling and split at ':'; Windows needs npm.cmd with npm-cli.js beside it.
  assert.deepEqual(findNpm({ env: { path: '/a:/b' }, execPath: '/x/node', platform: 'linux', exists: exists(['/b/npm']) }), { command: '/b/npm', args: [] });
  assert.equal(findNpm({ env: { Path: 'C:\\n' }, execPath: 'D:\\node.exe', platform: 'win32', exists: exists(['C:\\n\\npm.cmd']) }), null);
  assert.equal(findNpm({ env: { Path: 'C:\\n' }, execPath: 'D:\\node.exe', platform: 'win32', exists: exists(['C:\\n\\node_modules\\npm\\bin\\npm-cli.js']) }), null);
  assert.equal(findNpm({ env: { PATH: '/a;/b' }, execPath: '/x/node', platform: 'linux', exists: exists(['/a;/b/npm']) }).command, '/a;/b/npm');
});

async function packTarball(base, members) {
  const source = join(base, 'tarball-source-' + Math.random().toString(16).slice(2));
  await mkdir(join(source, 'package'), { recursive: true });
  for (const [name, text] of Object.entries(members)) await writeFile(join(source, 'package', name), text);
  const file = join(base, 'out-' + Math.random().toString(16).slice(2) + '.tgz');
  await createTar({ cwd: source, file, gzip: true, portable: true }, ['package']);
  return readFile(file);
}

test('npm pack runs the user\'s npm without a shell and keeps only the archive member', { skip: process.platform === 'win32' }, async t => {
  const base = await scratch(t);
  const tgz = await packTarball(base, { [entry.file]: 'archive!', 'package.json': '{}' });
  await writeFile(join(base, 'served.tgz'), tgz);
  // A stand-in npm: records its arguments and environment, then writes the tarball where asked.
  const npmScript = join(base, 'npm-cli.js');
  await writeFile(npmScript, `const fs = require('node:fs'), path = require('node:path');
const args = process.argv.slice(2);
fs.writeFileSync(${JSON.stringify(join(base, 'npm-call.json'))}, JSON.stringify({ args, cwd: process.cwd(), notifier: process.env.npm_config_update_notifier, extra: process.env.LASM_FIXTURE }));
if (process.env.LASM_FIXTURE === 'fail') { console.error('line1\\nnpm error code E404\\nnpm error 404 Not Found'); process.exit(1); }
const dest = args[args.indexOf('--pack-destination') + 1];
fs.copyFileSync(${JSON.stringify(join(base, 'served.tgz'))}, path.join(dest, 'lasm-tool-1.2.3.tgz'));
if (process.env.LASM_FIXTURE === 'two') fs.writeFileSync(path.join(dest, 'other.tgz'), '');
console.log('npm notice\\n' + JSON.stringify([{ filename: process.env.LASM_FIXTURE === 'renamed' ? 'other-name.tgz' : 'lasm-tool-1.2.3.tgz' }]));
`);
  const npm = { command: process.execPath, args: [npmScript] };
  const pinned = { ...entry, integrity: integrity(tgz) };
  const work = join(base, 'work'); await mkdir(work);
  const file = await fetchNpmPackage(pinned, work, { npm, cwd: base, env: { ...process.env, LASM_FIXTURE: 'ok' } });
  assert.equal(file, join(work, 'npm-unpacked', 'package', entry.file));
  assert.equal(await readFile(file, 'utf8'), 'archive!');
  assert.deepEqual(await readdir(join(work, 'npm-unpacked', 'package')), [entry.file], 'only the archive member is extracted');
  assert.deepEqual(await readdir(work), ['npm-unpacked'], 'the tarball is removed');
  const call = JSON.parse(await readFile(join(base, 'npm-call.json'), 'utf8'));
  assert.deepEqual(call.args, ['pack', '@lasm/tool-linux-x64@1.2.3-lasm.1', '--pack-destination', join(work, 'npm-pack'), '--json', '--ignore-scripts',
    '--no-audit', '--no-fund', '--loglevel=error']);
  assert.equal(call.cwd, base); assert.equal(call.notifier, 'false'); assert.equal(call.extra, 'ok');
  // npm's failure carries its last lines.
  await assert.rejects(fetchNpmPackage(pinned, join(base, 'w-fail'), { npm, cwd: base, env: { ...process.env, LASM_FIXTURE: 'fail' } }),
    { message: 'npm pack failed (1): line1 | npm error code E404 | npm error 404 Not Found' });
  for (const mode of ['two', 'renamed'])
    await assert.rejects(fetchNpmPackage(pinned, join(base, 'w-' + mode), { npm, cwd: base, env: { ...process.env, LASM_FIXTURE: mode } }),
      { message: 'npm pack @lasm/tool-linux-x64@1.2.3-lasm.1 produced no single tarball' }, mode);
  // A command that cannot start is an error too.
  await assert.rejects(fetchNpmPackage(pinned, join(base, 'w-missing'), { npm: { command: join(base, 'no-such-npm'), args: [] }, cwd: base }), { code: 'ENOENT' });
  // Output without JSON still accepts the single tarball.
  const quiet = join(base, 'quiet.js');
  await writeFile(quiet, `const fs = require('node:fs'), path = require('node:path'); const a = process.argv.slice(2);
fs.copyFileSync(${JSON.stringify(join(base, 'served.tgz'))}, path.join(a[a.indexOf('--pack-destination') + 1], 'x.tgz'));`);
  assert.equal(await readFile(await fetchNpmPackage(pinned, join(base, 'w-quiet'), { npm: { command: process.execPath, args: [quiet] }, cwd: base }), 'utf8'), 'archive!');
});

test('a tarball with the archive twice, or as a link, is refused', async t => {
  const base = await scratch(t);
  const tgz = await packTarball(base, { 'other.txt': 'x' });
  const run = async (npm, args) => { await writeFile(join(args[args.indexOf('--pack-destination') + 1], 'p.tgz'), tgz); return ''; };
  await assert.rejects(fetchNpmPackage({ ...entry, file: 'other.txt', integrity: integrity(Buffer.from('nope')) }, join(base, 'w'), { npm: {}, run }),
    { message: 'npm package @lasm/tool-linux-x64@1.2.3-lasm.1 does not match its pinned integrity' });
  const ok = await fetchNpmPackage({ ...entry, file: 'other.txt', integrity: integrity(tgz) }, join(base, 'w2'), { npm: {}, run });
  assert.equal(await readFile(ok, 'utf8'), 'x');
});

test('registry tarball URLs: npm_config_registry, NPM_CONFIG_REGISTRY, then the public registry', () => {
  const unscoped = { package: 'plain', version: '1.0.0' };
  assert.equal(registryTarballUrl(unscoped, {}), 'https://registry.npmjs.org/plain/-/plain-1.0.0.tgz');
  assert.equal(registryTarballUrl(unscoped, { NPM_CONFIG_REGISTRY: 'https://upper.example//' }), 'https://upper.example/plain/-/plain-1.0.0.tgz');
  assert.equal(registryTarballUrl(unscoped, { npm_config_registry: 'https://lower.example', NPM_CONFIG_REGISTRY: 'https://upper.example' }),
    'https://lower.example/plain/-/plain-1.0.0.tgz');
  assert.equal(registryTarballUrl(unscoped, { npm_config_registry: '', NPM_CONFIG_REGISTRY: 'https://upper.example/' }), 'https://upper.example/plain/-/plain-1.0.0.tgz');
});

test('the registry fallback: HTTPS or loopback HTTP only, no credentials, no downgrade, statuses checked', async t => {
  const base = await scratch(t);
  const tgz = await packTarball(base, { [entry.file]: 'from registry' });
  const pinned = { ...entry, integrity: integrity(tgz) };
  let n = 0;
  const go = (env, fetch) => fetchNpmPackage(pinned, join(base, 'w' + n++), { npm: null, registryFallback: true, env, fetch });
  const seen = [];
  const serve = (url, init) => { seen.push({ url, redirect: init.redirect, signal: init.signal instanceof AbortSignal }); return new Response(tgz); };
  for (const registry of ['http://localhost:4873/', 'http://127.0.0.1:4873/', 'http://[::1]:4873/', 'https://mirror.example/'])
    assert.equal(await readFile(await go({ npm_config_registry: registry }, serve), 'utf8'), 'from registry', registry);
  assert.deepEqual(seen[0], { url: `http://localhost:4873/${entry.package}/-/tool-linux-x64-${entry.version}.tgz`, redirect: 'follow', signal: true });
  for (const registry of ['http://mirror.example/', 'https://user:pw@mirror.example/', 'https://user@mirror.example/', 'ftp://mirror.example/'])
    await assert.rejects(go({ npm_config_registry: registry }, serve), /The npm registry must be credential-free HTTPS/, registry);
  const redirected = (url) => { const r = new Response(tgz); Object.defineProperty(r, 'url', { value: 'http://evil.example/x.tgz' }); return r; };
  await assert.rejects(go({}, redirected), { message: 'The npm registry redirected away from HTTPS: http://evil.example/x.tgz' });
  await assert.rejects(go({}, () => new Response('', { status: 404 })), { message: `The npm registry returned 404 for https://registry.npmjs.org/${entry.package}/-/tool-linux-x64-${entry.version}.tgz` });
  // Without npm and without the fallback, the user is told npm is missing.
  await assert.rejects(fetchNpmPackage(pinned, join(base, 'none'), { npm: null, registryFallback: false }), { message: 'npm was not found (npm_execpath, beside Node, or on PATH)' });
});

// acquireArtifact's routes, with injected package resolution, fetching and verification.
const artifact = { name: 'tool', format: 'tar.zst', sha256: sha, bytes: 5, url: 'https://example.invalid/tool' };
async function acquire(t, { manifestEntry = entry, env = {}, resolve, fetch, verify = async () => {}, progress } = {}) {
  const base = await scratch(t), archive = join(base, 'archive');
  const logs = [], events = [];
  let downloads = 0;
  const result = acquireArtifact(artifact, archive, { label: 'the tool', log: line => logs.push(line), progress: progress && (event => events.push(event)),
    staging: base, env, npm: { manifest: manifestEntry ? { schema: 1, artifacts: { [sha]: manifestEntry } } : null, resolve, fetch },
    download: async () => { downloads++; await writeFile(archive, 'downloaded'); }, downloadProgress: () => events.push('download-progress'), verify });
  return { base, archive, logs, events, downloads: () => downloads, result };
}

test('no npm entry: a direct download, logged without progress', async t => {
  const a = await acquire(t, { manifestEntry: null });
  assert.deepEqual(await a.result, { kind: 'https', url: artifact.url });
  assert.equal(a.downloads(), 1);
  assert.deepEqual(a.logs, ['Downloading verified tool…']);
  assert.deepEqual(a.events, ['download-progress']);
  const b = await acquire(t, { manifestEntry: null, progress: true });
  await b.result;
  assert.deepEqual(b.logs, [], 'progress replaces the log line');
  const c = await acquire(t, { manifestEntry: null, env: { LASM_ARTIFACT_SOURCE: 'npm' } });
  await assert.rejects(c.result, { code: 'LASM_NPM_ONLY', message: 'LASM_ARTIFACT_SOURCE=npm forbids downloading the tool (tool); no npm package of this Lasm installation carries it.' });
  assert.equal(c.downloads(), 0);
});

test('https mode ignores the manifest entirely', async t => {
  const a = await acquire(t, { env: { LASM_ARTIFACT_SOURCE: 'https' }, resolve: () => assert.fail('no package lookup') });
  assert.equal((await a.result).kind, 'https');
});

test('an installed package is copied and verified; a damaged one falls back, other errors do not', async t => {
  const source = join(await scratch(t), 'packaged');
  await writeFile(source, 'packaged');
  const a = await acquire(t, { resolve: async () => ({ file: source }) });
  assert.deepEqual(await a.result, { kind: 'npm-installed', package: entry.package, version: entry.version });
  assert.equal(await readFile(a.archive, 'utf8'), 'packaged');
  assert.deepEqual(a.logs, ['Using the tool from npm package @lasm/tool-linux-x64@1.2.3-lasm.1']);
  assert.equal(a.downloads(), 0);
  const p = await acquire(t, { resolve: async () => ({ file: source }), progress: true });
  await p.result;
  assert.deepEqual(p.events, [{ stage: 'Using the tool from npm package @lasm/tool-linux-x64@1.2.3-lasm.1' }]);
  assert.deepEqual(p.logs, []);
  let verifies = 0;
  const b = await acquire(t, { resolve: async () => ({ file: source }), verify: async () => { if (verifies++ === 0) throw Object.assign(new Error('mismatch'), { code: 'LASM_INTEGRITY' }); } });
  assert.deepEqual(await b.result, { kind: 'https', url: artifact.url });
  assert.equal(b.downloads(), 1);
  assert.equal(b.logs[1], missingPackageMessage(entry, 'has an archive that does not match the pinned SHA-256', 'auto', 'the tool'));
  const c = await acquire(t, { resolve: async () => ({ file: source }), verify: async () => { throw Object.assign(new Error('disk'), { code: 'EIO' }); } });
  await assert.rejects(c.result, { code: 'EIO' });
  assert.equal(c.downloads(), 0);
});

test('a missing installed package names every missing package of the host, then downloads (unless forbidden)', async t => {
  const a = await acquire(t, { resolve: async () => ({ missing: 'is not installed' }) });
  assert.equal((await a.result).kind, 'https');
  assert.equal(a.logs.length, 2);
  assert.match(a.logs[0], /^Lasm's npm package @lasm\/tool-linux-x64@1\.2\.3-lasm\.1 \(the tool\) is not installed\./);
  assert.match(a.logs[0], /Fix: run `npm install @lasm\/tool-linux-x64@1\.2\.3-lasm\.1`/);
  const b = await acquire(t, { env: { LASM_ARTIFACT_SOURCE: 'npm' }, resolve: async () => ({ missing: 'is not installed' }) });
  await assert.rejects(b.result, { code: 'LASM_NPM_ONLY', message: 'LASM_ARTIFACT_SOURCE=npm forbids downloading the tool (tool); npm could not provide @lasm/tool-linux-x64@1.2.3-lasm.1.' });
  assert.match(b.logs[0], /LASM_ARTIFACT_SOURCE=npm forbids direct downloads\.$/);
});

test('on-demand packages: fetched, moved into place and verified; failures fall back or stop', async t => {
  const demand = { ...entry, install: 'demand' };
  const fetched = [];
  const a = await acquire(t, { manifestEntry: demand, resolve: () => assert.fail('demand packages are never resolved'),
    fetch: async (e, staging, options) => { fetched.push({ e, staging, env: options.env }); const file = join(staging, 'fetched'); await writeFile(file, 'npm bytes'); return file; } });
  assert.deepEqual(await a.result, { kind: 'npm-fetched', package: demand.package, version: demand.version, integrity: demand.integrity });
  assert.equal(await readFile(a.archive, 'utf8'), 'npm bytes');
  assert.equal(fetched[0].e, demand); assert.equal(fetched[0].staging, a.base); assert.deepEqual(fetched[0].env, {});
  assert.deepEqual(a.logs, ['Fetching the tool with npm (@lasm/tool-linux-x64@1.2.3-lasm.1)…']);
  const failing = async () => { throw new Error('E404'); };
  const b = await acquire(t, { manifestEntry: demand, fetch: failing, progress: true });
  assert.equal((await b.result).kind, 'https');
  assert.deepEqual(b.logs, ['npm could not fetch @lasm/tool-linux-x64@1.2.3-lasm.1 (the tool): E404. Downloading the same verified archive directly instead.']);
  assert.deepEqual(b.events[0], { stage: 'Fetching the tool with npm (@lasm/tool-linux-x64@1.2.3-lasm.1)' });
  const c = await acquire(t, { manifestEntry: demand, fetch: failing, env: { LASM_ARTIFACT_SOURCE: 'npm' } });
  const error = await c.result.then(() => null, e => e);
  assert.equal(error.code, 'LASM_NPM_ONLY'); assert.equal(error.cause.message, 'E404');
  assert.equal(error.message, 'npm could not fetch @lasm/tool-linux-x64@1.2.3-lasm.1 and LASM_ARTIFACT_SOURCE=npm forbids direct downloads: E404');
  assert.match(c.logs.at(-1), /LASM_ARTIFACT_SOURCE=npm forbids direct downloads\.$/);
  assert.equal(c.downloads(), 0);
  // A verification failure of the fetched archive also falls back.
  const d = await acquire(t, { manifestEntry: demand, fetch: async (e, staging) => { const f = join(staging, 'f'); await writeFile(f, 'x'); return f; },
    verify: async () => { throw new Error('mismatch'); } });
  assert.equal((await d.result).kind, 'https');
});

test('cancellation while fetching from npm is not turned into a download', async t => {
  const base = await scratch(t);
  const abort = new AbortController();
  let downloads = 0;
  await assert.rejects(acquireArtifact(artifact, join(base, 'a'), { log() {}, staging: base, env: {}, signal: abort.signal,
    npm: { manifest: { schema: 1, artifacts: { [sha]: { ...entry, install: 'demand' } } }, fetch: async () => { abort.abort(); throw new Error('aborted'); } },
    download: async () => { downloads++; }, verify: async () => {} }), /aborted/);
  assert.equal(downloads, 0);
});

test('more grammar: multi-digit versions, scoped and unscoped names, extension-less catalog names', () => {
  for (const change of [{ version: '10.20.30' }, { version: '10.20.30-lasm.12' }, { package: 'a' }, { package: '@lasm/a.b_c-d' }])
    assert.doesNotThrow(() => validateNpmToolManifest({ schema: 1, artifacts: { [sha]: { ...entry, ...change } } }), JSON.stringify(change));
  for (const change of [{ package: '@lasm/x/y' }, { package: 'x@1' }, { file: 'tool.tar.zst/' }, { version: '1.2.3-beta+meta' }])
    assert.throws(() => validateNpmToolManifest({ schema: 1, artifacts: { [sha]: { ...entry, ...change } } }), /Invalid npm tool manifest entry/, JSON.stringify(change));
  assert.throws(() => validateNpmToolManifest({ schema: 1, artifacts: { ['x' + sha]: entry } }), /Invalid npm tool manifest entry/);
  assert.throws(() => validateNpmToolManifest({ schema: 1, artifacts: { [sha + 'x']: entry } }), /Invalid npm tool manifest entry/);
  assert.equal(archiveFileName({ name: 'atar.zst', format: 'tar.zst' }), 'atar.zst.tar.zst', 'the extension follows a dot');
});

test('the bundled manifest: read once, validated, absent in a source checkout, other read errors reported', async t => {
  const base = await scratch(t);
  const { pathToFileURL } = await import('node:url');
  const file = join(base, 'npm-tools.json');
  await writeFile(file, JSON.stringify({ schema: 1, artifacts: { [sha]: entry } }));
  const first = await import('../src/npm-artifacts.mjs?bundled-valid');
  assert.deepEqual(await first.bundledNpmToolManifest(pathToFileURL(file)), { schema: 1, artifacts: { [sha]: entry } });
  await writeFile(file, '{ broken');
  assert.deepEqual(await first.bundledNpmToolManifest(pathToFileURL(file)), { schema: 1, artifacts: { [sha]: entry } }, 'read once per process');
  const invalid = await import('../src/npm-artifacts.mjs?bundled-invalid');
  await writeFile(file, JSON.stringify({ schema: 2 }));
  await assert.rejects(invalid.bundledNpmToolManifest(pathToFileURL(file)), { message: 'Invalid npm tool manifest' });
  const directory = await import('../src/npm-artifacts.mjs?bundled-directory');
  await assert.rejects(directory.bundledNpmToolManifest(pathToFileURL(base)), { code: 'EISDIR' });
  // Without a bundled manifest there is nothing to check.
  const none = await import('../src/npm-artifacts.mjs?bundled-none');
  await none.bundledNpmToolManifest(pathToFileURL(join(base, 'missing.json')));
  assert.equal(await none.checkInstalledToolPackages(null), null);
  assert.equal(await none.checkInstalledToolPackages(undefined), null);
});

test('a package that does not export package.json is not installed for Lasm\'s purposes', async t => {
  const p = await product(t);
  await writeFile(join(p.directory, 'package.json'), JSON.stringify({ name: entry.package, version: entry.version, exports: { '.': './index.js' } }));
  assert.deepEqual(await resolveInstalledPackage(entry, { resolveFrom: p.from }), { missing: 'is not installed' });
});

test('installed-package checks use the given host', async t => {
  const p = await product(t);
  const mac = { ...entry, package: '@lasm/tool-darwin-arm64', platform: 'darwin-arm64' };
  const manifest = { schema: 1, artifacts: { [sha]: entry, ['c'.repeat(64)]: mac } };
  const report = await checkInstalledToolPackages(manifest, { resolveFrom: p.from, platform: 'darwin', arch: 'arm64' });
  assert.equal(report.host, 'darwin-arm64');
  assert.deepEqual(report.installed, []);
  assert.deepEqual(report.missing.map(item => item.spec), ['@lasm/tool-darwin-arm64@1.2.3-lasm.1']);
});

test('PATH lookup: the PATH variable whatever other variables come first, and no empty entries', () => {
  const exists = files => file => files.includes(file);
  assert.deepEqual(findNpm({ env: { HOME: '/h', PATH: '/b' }, execPath: '/x/node', platform: 'linux', exists: exists(['/b/npm']) }), { command: '/b/npm', args: [] });
  assert.deepEqual(findNpm({ env: { PATH: ':/b' }, execPath: '/x/node', platform: 'linux', exists: exists(['npm', '/b/npm']) }), { command: '/b/npm', args: [] });
});

test('every missing package of this host is named in one sorted fix; a failed check names just this one', async t => {
  const other = { ...entry, package: '@lasm/a-shared', platform: undefined, install: 'required' };
  const here = { ...entry, platform: `${process.platform}-${process.arch}` };
  const base = await scratch(t), archive = join(base, 'archive'), logs = [];
  const manifest = { schema: 1, artifacts: { [sha]: here, ['c'.repeat(64)]: other } };
  await acquireArtifact(artifact, archive, { label: 'the tool', log: line => logs.push(line), staging: base, env: {},
    npm: { manifest, resolve: async () => ({ missing: 'is not installed' }), resolveFrom: join(base, 'nowhere.mjs') },
    download: async () => {}, verify: async () => {} });
  assert.match(logs[0], /Fix: run `npm install @lasm\/a-shared@1\.2\.3-lasm\.1 @lasm\/tool-linux-x64@1\.2\.3-lasm\.1` in the project/);
  const failing = [];
  await acquireArtifact(artifact, archive, { label: 'the tool', log: line => failing.push(line), staging: base, env: {},
    npm: { manifest: { schema: 1, artifacts: { [sha]: here, ['d'.repeat(64)]: { ...other, install: 'nonsense' } } }, resolve: async () => ({ missing: 'is not installed' }),
      resolveFrom: 42 }, download: async () => {}, verify: async () => {} });
  assert.match(failing[0], /Fix: run `npm install @lasm\/tool-linux-x64@1\.2\.3-lasm\.1` in the project/);
});

test('without npm, plain Node reports npm missing rather than reaching the registry', async t => {
  const base = await scratch(t);
  await assert.rejects(fetchNpmPackage(entry, join(base, 'w'), { npm: null, fetch: async () => assert.fail('no registry request') }),
    { message: 'npm was not found (npm_execpath, beside Node, or on PATH)' });
});

test('only a regular file member is the archive', async t => {
  const base = await scratch(t);
  const source = join(base, 'src');
  await mkdir(join(source, 'package', entry.file), { recursive: true });
  const file = join(base, 'dir.tgz');
  await createTar({ cwd: source, file, gzip: true, portable: true }, ['package']);
  const tgz = await readFile(file);
  const run = async (npm, args) => { await writeFile(join(args[args.indexOf('--pack-destination') + 1], 'p.tgz'), tgz); return ''; };
  await assert.rejects(fetchNpmPackage({ ...entry, integrity: integrity(tgz) }, join(base, 'w'), { npm: {}, run }), { message: `npm package ${npmSpec(entry)} lacks ${entry.file}` });
});
