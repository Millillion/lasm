// The managed cache's small contracts, one at a time (src/managed-artifacts.mjs):
// where the cache lives, which descriptors are accepted, the final archive check,
// verification records and session trust, and hard-linking verified trees.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, readFile, rm, readdir, lstat, readlink, stat } from 'node:fs/promises';
import { join, resolve } from 'node:path';
import { tmpdir, homedir } from 'node:os';
import { createHash } from 'node:crypto';
import { managedCacheDirectory, validateArtifact, verifyArchiveFile, hashFile, verifyTreeOnce, recordTreeVerified,
  trustVerifiedTreesForSession, sessionTrusted, verificationRecords, linkArtifactTree, treeFingerprint } from '../src/managed-artifacts.mjs';

const sha = text => createHash('sha256').update(text).digest('hex');
async function scratch(t) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-artifact-units-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  return base;
}

test('the cache directory: LASM_TOOLCHAIN_CACHE, else each platform\'s user cache', () => {
  assert.equal(managedCacheDirectory({ LASM_TOOLCHAIN_CACHE: 'relative/cache' }, 'linux'), resolve('relative/cache'));
  assert.equal(managedCacheDirectory({ LASM_TOOLCHAIN_CACHE: '/x', LOCALAPPDATA: '/l' }, 'win32'), resolve('/x'));
  assert.equal(managedCacheDirectory({ LOCALAPPDATA: '/local' }, 'win32'), join('/local', 'lasm', 'Cache'));
  assert.equal(managedCacheDirectory({}, 'win32'), join(homedir(), 'AppData', 'Local', 'lasm', 'Cache'));
  assert.equal(managedCacheDirectory({ XDG_CACHE_HOME: '/xdg' }, 'darwin'), join(homedir(), 'Library', 'Caches', 'lasm'));
  assert.equal(managedCacheDirectory({ XDG_CACHE_HOME: '/xdg' }, 'linux'), join('/xdg', 'lasm'));
  assert.equal(managedCacheDirectory({}, 'linux'), join(homedir(), '.cache', 'lasm'));
  assert.equal(managedCacheDirectory({ LASM_TOOLCHAIN_CACHE: '' }, 'linux'), join(homedir(), '.cache', 'lasm'), 'empty is unset');
});

const good = { name: 'tool-1.tar.zst', root: 'tool', url: 'https://example.invalid/tool.tar.zst', sha256: 'a'.repeat(64),
  bytes: 10, format: 'tar.zst', maximumExtractedBytes: 100 };
test('descriptor validation accepts exactly the safe shapes and identifies the descriptor', () => {
  assert.equal(validateArtifact(good), sha(JSON.stringify(good)));
  assert.notEqual(validateArtifact({ ...good, bytes: 11 }), validateArtifact(good));
  for (const change of [{ root: '.' }, { name: 'A', root: 'B_c-d.e' }, { format: 'tar.gz' }, { format: 'tar.xz' }, { format: 'zip' },
    { bytes: 1, maximumExtractedBytes: 1 }, { url: 'https://example.invalid:8443/a?b=c' }])
    assert.doesNotThrow(() => validateArtifact({ ...good, ...change }), JSON.stringify(change));
  for (const change of [{ name: undefined }, { name: '' }, { name: '.hidden' }, { name: '-x' }, { name: 'a/b' }, { name: 'a b' }, { name: 'x\n' },
    { root: undefined }, { root: '' }, { root: '..' }, { root: './tool' }, { root: 'a/b' }, { root: '_x' },
    { sha256: undefined }, { sha256: 'A'.repeat(64) }, { sha256: 'a'.repeat(63) }, { sha256: 'a'.repeat(65) }, { sha256: 'g'.repeat(64) },
    { bytes: 0 }, { bytes: 1.5 }, { bytes: '10' }, { bytes: 2 ** 53 }, { maximumExtractedBytes: 0 }, { maximumExtractedBytes: 0.5 },
    { maximumExtractedBytes: undefined }, { format: 'tar' }, { format: undefined }])
    assert.throws(() => validateArtifact({ ...good, ...change }), { message: 'Invalid managed artifact description' }, JSON.stringify(change));
  assert.throws(() => validateArtifact(null), { message: 'Invalid managed artifact description' });
  for (const url of ['http://example.invalid/x', 'https://u@example.invalid/x', 'https://:p@example.invalid/x', 'file:///x'])
    assert.throws(() => validateArtifact({ ...good, url }), { message: 'Managed artifacts require an HTTPS URL without credentials' }, url);
  assert.throws(() => validateArtifact({ ...good, url: 'not a url' }), TypeError);
});

test('an archive file passes only with the exact size and SHA-256', async t => {
  const base = await scratch(t), file = join(base, 'archive');
  await writeFile(file, 'archive bytes');
  const artifact = { name: 'a', bytes: 13, sha256: sha('archive bytes') };
  await verifyArchiveFile(artifact, file);
  assert.equal(await hashFile(file), sha('archive bytes'));
  for (const wrong of [{ bytes: 12 }, { bytes: 14 }, { sha256: sha('other') }])
    await assert.rejects(verifyArchiveFile({ ...artifact, ...wrong }, file), { code: 'LASM_INTEGRITY', message: 'Checksum or size mismatch: a' });
});

test('a verification record skips the next full check until the tree changes, and is keyed by its key', async t => {
  const base = await scratch(t), tree = join(base, 'tree'), stamps = join(base, 'stamps');
  await mkdir(tree); await writeFile(join(tree, 'f'), 'one');
  let checks = 0; const check = async () => { checks++; };
  await verifyTreeOnce(stamps, 'key', tree, check);
  assert.equal(checks, 1);
  const [record] = await readdir(stamps);
  assert.equal(record, sha('key') + '.json');
  assert.deepEqual(JSON.parse(await readFile(join(stamps, record), 'utf8')), { schema: 1, key: 'key', fingerprint: treeFingerprint(tree) });
  await verifyTreeOnce(stamps, 'key', tree, check);
  assert.equal(checks, 1, 'the record is used');
  await verifyTreeOnce(stamps, 'other key', tree, check);
  assert.equal(checks, 2, 'another key has its own record');
  // A record whose stored key or schema differs is not trusted.
  for (const stored of [{ schema: 2, key: 'key', fingerprint: treeFingerprint(tree) }, { schema: 1, key: 'not key', fingerprint: treeFingerprint(tree) }, 'garbage']) {
    await writeFile(join(stamps, record), typeof stored === 'string' ? stored : JSON.stringify(stored));
    const before = checks;
    await verifyTreeOnce(stamps, 'key', tree, check);
    assert.equal(checks, before + 1, JSON.stringify(stored));
  }
  // A failed check records nothing; without stamps every call checks.
  await rm(stamps, { recursive: true });
  await assert.rejects(verifyTreeOnce(stamps, 'key', tree, async () => { throw new Error('bad tree'); }), /bad tree/);
  await assert.rejects(lstat(stamps), { code: 'ENOENT' });
  checks = 0;
  await verifyTreeOnce(undefined, 'key', tree, check); await verifyTreeOnce(undefined, 'key', tree, check);
  assert.equal(checks, 2);
  // recordTreeVerified writes the same record a passing check would.
  await recordTreeVerified(stamps, 'fresh', tree);
  assert.deepEqual(JSON.parse(await readFile(join(stamps, sha('fresh') + '.json'), 'utf8')), { schema: 1, key: 'fresh', fingerprint: treeFingerprint(tree) });
  await verifyTreeOnce(stamps, 'fresh', tree, check);
  assert.equal(checks, 2);
  await recordTreeVerified(undefined, 'none', tree);
  assert.equal(verificationRecords('relative'), join(resolve('relative'), 'verified'));
  // No partial record files are left behind.
  assert.ok((await readdir(stamps)).every(name => name.endsWith('.json')));
});

test('an unwritable record location costs a recheck, never a failure', async t => {
  const base = await scratch(t), tree = join(base, 'tree');
  await mkdir(tree); await writeFile(join(tree, 'f'), 'x');
  await writeFile(join(base, 'file'), 'not a directory');
  let checks = 0;
  await verifyTreeOnce(join(base, 'file', 'stamps'), 'k', tree, async () => { checks++; });
  await verifyTreeOnce(join(base, 'file', 'stamps'), 'k', tree, async () => { checks++; });
  assert.equal(checks, 2);
});

test('a tree changed during its check is not recorded', async t => {
  const base = await scratch(t), tree = join(base, 'tree'), stamps = join(base, 'stamps');
  await mkdir(tree); await writeFile(join(tree, 'f'), 'x');
  await verifyTreeOnce(stamps, 'k', tree, async () => { await writeFile(join(tree, 'g'), 'added'); });
  await assert.rejects(readdir(stamps), { code: 'ENOENT' });
});

test('session trust skips re-walking a verified tree until it is switched off', async t => {
  const base = await scratch(t), tree = join(base, 'tree');
  await mkdir(tree); await writeFile(join(tree, 'f'), 'x');
  let checks = 0; const check = async () => { checks++; };
  assert.equal(sessionTrusted(), false);
  try {
    trustVerifiedTreesForSession();
    assert.equal(sessionTrusted(), true);
    await verifyTreeOnce(undefined, 'k', tree, check);
    await verifyTreeOnce(undefined, 'k', tree, check);
    assert.equal(checks, 1);
    await verifyTreeOnce(undefined, 'k2', tree, check);
    await mkdir(join(base, 'tree2')); await verifyTreeOnce(undefined, 'k', join(base, 'tree2'), check);
    assert.equal(checks, 3, 'key and directory both name the tree');
    // A failing check is not trusted later.
    await assert.rejects(verifyTreeOnce(undefined, 'bad', tree, async () => { throw new Error('no'); }));
    await assert.rejects(verifyTreeOnce(undefined, 'bad', tree, async () => { throw new Error('again'); }), /again/);
    trustVerifiedTreesForSession(false);
    assert.equal(sessionTrusted(), false);
    await verifyTreeOnce(undefined, 'k', tree, check);
    assert.equal(checks, 4);
    // Switching it on again starts from nothing.
    trustVerifiedTreesForSession(true);
    await verifyTreeOnce(undefined, 'k', tree, check);
    assert.equal(checks, 5);
  } finally { trustVerifiedTreesForSession(false); }
});

test('linking a verified tree: directories first, owners recorded, conflicts named, hashes carried', async t => {
  const base = await scratch(t), source = join(base, 'source'), destination = join(base, 'prefix');
  await mkdir(join(source, 'bin'), { recursive: true }); await mkdir(join(source, 'lib/deep'), { recursive: true });
  await writeFile(join(source, 'bin/tool'), 'tool'); await writeFile(join(source, 'lib/deep/data'), 'data');
  const files = { bin: { type: 'directory' }, lib: { type: 'directory' }, 'lib/deep': { type: 'directory' },
    'bin/tool': { type: 'file', bytes: 4, sha256: sha('tool') }, 'lib/deep/data': { type: 'file', bytes: 4, sha256: sha('data') },
    'lib/link': { type: 'symlink', target: 'deep/data' } };
  const owners = new Map(), known = new Map();
  await linkArtifactTree(source, { files }, destination, owners, 'first', 'Archive', known);
  assert.equal(await readFile(join(destination, 'bin/tool'), 'utf8'), 'tool');
  assert.equal((await stat(join(destination, 'bin/tool'))).ino, (await stat(join(source, 'bin/tool'))).ino, 'a hard link, not a copy');
  assert.equal(await readlink(join(destination, 'lib/link')), 'deep/data');
  assert.equal(await readFile(join(destination, 'lib/link'), 'utf8'), 'data');
  assert.deepEqual([...owners], [['bin', 'directory'], ['bin/tool', 'first'], ['lib', 'directory'], ['lib/deep', 'directory'],
    ['lib/deep/data', 'first'], ['lib/link', 'first']]);
  assert.deepEqual([...known].sort(), [['bin/tool', { sha256: sha('tool'), size: 4n, linked: true }], ['lib/deep/data', { sha256: sha('data'), size: 4n, linked: true }]]);
  // A second archive may share directories but not files; the default kind is "Archive".
  await mkdir(join(base, 'second/bin'), { recursive: true }); await writeFile(join(base, 'second/bin/tool'), 'other');
  await assert.rejects(linkArtifactTree(join(base, 'second'), { files: { bin: { type: 'directory' }, 'bin/tool': { type: 'file', bytes: 5, sha256: sha('other') } } },
    destination, owners, 'second'), { message: 'Archives first and second both contain bin/tool' });
  await assert.rejects(linkArtifactTree(join(base, 'second'), { files: { 'bin/tool': { type: 'directory' } } }, destination, owners, 'third', 'Lean archive'),
    { message: 'Lean archive third conflicts at bin/tool' });
  // An existing file at a link target is an error, not an overwrite.
  await assert.rejects(linkArtifactTree(source, { files: { 'bin/tool': files['bin/tool'] } }, destination, new Map(), 'again'), { code: 'EEXIST' });
  // Without `known`, linking still works.
  await linkArtifactTree(source, { files }, join(base, 'plain'), new Map(), 'plain');
  assert.equal(await readFile(join(base, 'plain/lib/deep/data'), 'utf8'), 'data');
});

test('linking many files completes them all', async t => {
  const base = await scratch(t), source = join(base, 'source');
  await mkdir(join(source, 'd'), { recursive: true });
  const files = { d: { type: 'directory' } };
  for (let i = 0; i < 70; i++) { await writeFile(join(source, 'd', `f${i}`), String(i)); files[`d/f${i}`] = { type: 'file', bytes: String(i).length, sha256: sha(String(i)) }; }
  await linkArtifactTree(source, { files }, join(base, 'out'), new Map(), 'many');
  assert.equal((await readdir(join(base, 'out', 'd'))).length, 70);
  assert.equal(await readFile(join(base, 'out/d/f69'), 'utf8'), '69');
});

// provisionArtifact and deriveArtifact from a small gzip archive served in-process.
async function served(t, files = { 'tool/bin/run': 'run', 'tool/NOTICE': 'notice' }) {
  const base = await scratch(t);
  const { c: createTar } = await import('tar');
  const source = join(base, 'source');
  await mkdir(join(source, 'tool'), { recursive: true });
  for (const [name, text] of Object.entries(files)) { await mkdir(join(source, name, '..'), { recursive: true }); if (text !== null) await writeFile(join(source, name), text); }
  await createTar({ cwd: source, file: join(base, 'a.tgz'), gzip: true, portable: true }, ['tool']);
  const bytes = await readFile(join(base, 'a.tgz'));
  const artifact = { name: 'tool', root: 'tool', url: 'https://example.invalid/tool.tgz', format: 'tar.gz', bytes: bytes.length,
    sha256: sha(bytes), maximumExtractedBytes: 10_000 };
  let requests = 0;
  const cache = join(base, 'cache');
  return { base, cache, artifact, bytes, requests: () => requests,
    options: { cache, log() {}, env: {}, fetch: async () => { requests++; return new Response(bytes); } } };
}
const { provisionArtifact, deriveArtifact, verifyArtifactDirectory } = await import('../src/managed-artifacts.mjs');

test('concurrent requests in one process share one operation and its result', async t => {
  const f = await served(t);
  const [a, b] = await Promise.all([provisionArtifact(f.artifact, f.options), provisionArtifact(f.artifact, f.options)]);
  assert.equal(a, b, 'the same result object');
  assert.equal(f.requests(), 1);
  const produce = async tree => { await writeFile(join(tree, 'out'), 'x'); };
  const [c, d] = await Promise.all([deriveArtifact({ k: 1 }, produce, { cache: f.cache, log() {} }), deriveArtifact({ k: 1 }, produce, { cache: f.cache, log() {} })]);
  assert.equal(c, d);
  // Once settled, a new request is a new (cached) operation.
  const again = await provisionArtifact(f.artifact, f.options);
  assert.notEqual(again, a); assert.equal(again.cacheHit, true);
});

test('installation reports each stage, records the tree as verified, and writes a newline-terminated receipt', async t => {
  const f = await served(t);
  const stages = [];
  const installed = await provisionArtifact(f.artifact, { ...f.options, label: 'the tool', progress: event => stages.push(event.stage) });
  for (const stage of ['Downloading the tool', 'Extracting the tool', 'Verifying installed the tool', 'Finishing the tool setup']) assert.ok(stages.includes(stage), stage);
  const receipt = await readFile(join(installed.directory, '.lasm-artifact.json'), 'utf8');
  assert.ok(receipt.endsWith('}\n'));
  assert.deepEqual(JSON.parse(receipt), installed.receipt);
  assert.deepEqual(installed.receipt.source, { kind: 'https', url: f.artifact.url });
  const key = `managed-artifact\0${installed.identity}\0${installed.directory}`;
  assert.deepEqual(await readdir(join(f.cache, 'verified')), [sha(key) + '.json']);
  // Reuse is verified by that record, with its own progress stage.
  stages.length = 0;
  const reused = await provisionArtifact(f.artifact, { ...f.options, label: 'the tool', progress: event => stages.push(event.stage) });
  assert.equal(reused.cacheHit, true);
  assert.deepEqual(stages, ['Verifying cached the tool']);
});

test('retries are reported through progress, or logged without it', async t => {
  for (const withProgress of [true, false]) {
    const f = await served(t);
    let calls = 0; const stages = [], logs = [], events = [];
    await provisionArtifact(f.artifact, { ...f.options, label: 'the tool', log: line => logs.push(line),
      progress: withProgress ? event => stages.push(event.stage) : undefined,
      download: { sleep: async () => {}, random: () => 0, event: event => events.push(event.type) },
      fetch: async () => ++calls === 1 ? new Response('', { status: 503 }) : new Response(f.bytes) });
    const message = 'Retrying the tool in 2s (attempt 2): LASM_HTTP_RETRY: HTTP 503';
    if (withProgress) { assert.ok(stages.includes(message), stages.join('\n')); assert.equal(logs.includes(message), false); }
    else assert.ok(logs.includes(message), logs.join('\n'));
    assert.deepEqual(events, ['attempt', 'failed-attempt', 'retry', 'attempt', 'transferred'], 'the caller\'s event hook sees every event');
  }
});

test('an archive with no files is refused', async t => {
  const f = await served(t, {});
  await assert.rejects(provisionArtifact(f.artifact, f.options), { message: 'Managed artifact is empty' });
  await assert.rejects(deriveArtifact({ empty: true }, async () => {}, { cache: f.cache, log() {} }), { message: 'Derived tool tree is empty' });
});

test('receipts are checked: identity, schema, files, and no symbolic links', async t => {
  const f = await served(t);
  const installed = await provisionArtifact(f.artifact, f.options);
  const receiptFile = join(installed.directory, '.lasm-artifact.json');
  const original = await readFile(receiptFile, 'utf8');
  await verifyArtifactDirectory(installed.directory, installed.identity);
  await assert.rejects(verifyArtifactDirectory(installed.directory, 'other'), { message: 'Managed artifact receipt does not match the requested toolchain' });
  for (const change of [{ schema: 2 }, { files: undefined }, { files: {} }]) {
    await writeFile(receiptFile, JSON.stringify({ ...JSON.parse(original), ...change }));
    await assert.rejects(verifyArtifactDirectory(installed.directory, installed.identity), { message: 'Managed artifact receipt does not match the requested toolchain' }, JSON.stringify(change));
  }
  await writeFile(receiptFile, original);
  if (process.platform !== 'win32') {
    const { symlink, rename } = await import('node:fs/promises');
    await rename(receiptFile, join(f.base, 'receipt.json'));
    await symlink(join(f.base, 'receipt.json'), receiptFile);
    await assert.rejects(verifyArtifactDirectory(installed.directory, installed.identity), { message: `Managed artifact directory and receipt must not be symbolic links: ${installed.directory}` });
    const link = join(f.base, 'linked-tool');
    await symlink(installed.directory, link);
    await assert.rejects(verifyArtifactDirectory(link, installed.identity), /must not be symbolic links/);
  }
});

test('a changed tree names up to ten changed entries', async t => {
  const files = {};
  for (let i = 0; i < 12; i++) files[`tool/f${String(i).padStart(2, '0')}`] = 'x';
  const f = await served(t, files);
  const installed = await provisionArtifact(f.artifact, f.options);
  for (let i = 0; i < 11; i++) await writeFile(join(installed.directory, `f${String(i).padStart(2, '0')}`), 'changed');
  const error = await verifyArtifactDirectory(installed.directory, installed.identity).then(() => null, e => e);
  assert.equal(error.message, `Managed cache contents changed: ${installed.directory}. Changed entries (11): `
    + Array.from({ length: 10 }, (_, i) => `"f${String(i).padStart(2, '0')}"`).join(', ') + ', .... Run lasm cache repair, then retry to download a verified replacement.');
  await writeFile(join(installed.directory, 'f10'), 'x');
  const ten = await verifyArtifactDirectory(installed.directory, installed.identity).then(() => null, e => e);
  assert.ok(ten.message.includes('Changed entries (10): ') && ten.message.includes('"f09". Run lasm cache repair'), ten.message);
});

test('a cached tree whose receipt is missing is incomplete, never overwritten', async t => {
  const f = await served(t);
  const installed = await provisionArtifact(f.artifact, f.options);
  await rm(join(installed.directory, '.lasm-artifact.json'));
  await assert.rejects(provisionArtifact(f.artifact, f.options), { message: `Incomplete managed cache: ${installed.directory}. Run lasm cache repair and retry.` });
  const derived = await deriveArtifact({ d: 1 }, async tree => { await writeFile(join(tree, 'out'), 'x'); }, { cache: f.cache, log() {} });
  await rm(join(derived.directory, '.lasm-artifact.json'));
  await assert.rejects(deriveArtifact({ d: 1 }, async () => assert.fail('not rebuilt'), { cache: f.cache, log() {} }), { message: `Incomplete derived tool cache: ${derived.directory}` });
  await assert.rejects(deriveArtifact({ d: 2 }, async () => assert.fail('not built'), { cache: f.cache, log() {}, cachedOnly: true }),
    { code: 'ERR_LASM_NOT_CACHED', message: 'Not in the tool cache yet' });
});

test('an installation waits for another holder of its lock, and says so', async t => {
  const f = await served(t);
  const { withCacheEntryLock } = await import('../src/cache-lifecycle.mjs');
  const identity = validateArtifact(f.artifact);
  const stages = [];
  let release, waiting;
  const waited = new Promise(resolve => { waiting = resolve; });
  const holder = withCacheEntryLock(f.cache, 'artifacts', identity, () => new Promise(resolve => { release = resolve; }));
  while (!release) await new Promise(resolve => setTimeout(resolve, 5));
  const installing = provisionArtifact(f.artifact, { ...f.options, label: 'the tool', progress: event => { stages.push(event.stage); if (/^Waiting/.test(event.stage)) waiting(); } });
  await waited;
  assert.equal(stages[0], 'Waiting for another the tool installation or cache repair');
  release(); await holder;
  assert.equal((await installing).cacheHit, false);
  // The same for derivations.
  const derivedStages = [];
  const provenance = { waits: true };
  const derivedIdentity = sha(JSON.stringify(provenance));
  let releaseDerived, derivedWaiting;
  const derivedWaited = new Promise(resolve => { derivedWaiting = resolve; });
  const derivedHolder = withCacheEntryLock(f.cache, 'derived', derivedIdentity, () => new Promise(resolve => { releaseDerived = resolve; }));
  while (!releaseDerived) await new Promise(resolve => setTimeout(resolve, 5));
  const deriving = deriveArtifact(provenance, async tree => { await writeFile(join(tree, 'o'), 'o'); },
    { cache: f.cache, log() {}, progress: event => { derivedStages.push(event.stage); derivedWaiting(); } });
  await derivedWaited;
  assert.deepEqual(derivedStages, ['Waiting for another tool derivation or cache repair']);
  releaseDerived(); await derivedHolder; await deriving;
});
