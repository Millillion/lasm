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
