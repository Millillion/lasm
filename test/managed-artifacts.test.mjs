import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, readFile, writeFile, readdir, rm, symlink, chmod } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';
import { zstdCompressSync, gzipSync } from 'node:zlib';
import { c as createTar, Header } from 'tar';
import { provisionArtifact, managedCacheDirectory, validateArtifact } from '../src/managed-artifacts.mjs';
import { selectLeanVersion, provisionLean } from '../src/managed-lean.mjs';

const hash = bytes => createHash('sha256').update(bytes).digest('hex');
async function fixture(t) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-managed-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  const source = join(base, 'source'), cache = join(base, 'cache');
  await mkdir(join(source, 'tool/bin'), { recursive: true });
  await writeFile(join(source, 'tool/bin/lean'), 'compiler fixture');
  await chmod(join(source, 'tool/bin/lean'), 0o755);
  await writeFile(join(source, 'tool/LICENSE'), 'Fixture redistribution notice');
  await createTar({ cwd: source, file: join(base, 'tool.tar'), portable: true }, ['tool']);
  const bytes = zstdCompressSync(await readFile(join(base, 'tool.tar')));
  const artifact = description(bytes);
  let requests = 0;
  return { base, cache, source, bytes, artifact, requests: () => requests,
    options: { cache, log() {}, fetch: async () => { requests++; return new Response(bytes); } } };
}
function description(bytes) {
  return { name: 'tool-1.tar.zst', root: 'tool', url: 'https://example.invalid/tool.tar.zst',
    sha256: hash(bytes), bytes: bytes.length, format: 'tar.zst', maximumExtractedBytes: 1_000_000 };
}
function archive(entries) {
  const parts = [];
  for (const entry of entries) {
    const body = Buffer.from(entry.body ?? '');
    const header = new Header({ mode: 0o755, type: 'File', ...entry, size: body.length });
    header.encode(); parts.push(header.block, body, Buffer.alloc((512 - body.length % 512) % 512));
  }
  return zstdCompressSync(Buffer.concat([...parts, Buffer.alloc(1024)]));
}

test('streamed installation preserves executable files and notices; reuse verifies every file', async t => {
  const f = await fixture(t);
  const first = await provisionArtifact(f.artifact, f.options);
  assert.equal(first.cacheHit, false);
  assert.equal(await readFile(join(first.directory, 'LICENSE'), 'utf8'), 'Fixture redistribution notice');
  const second = await provisionArtifact(f.artifact, f.options);
  assert.equal(second.cacheHit, true);
  assert.equal(second.identity, first.identity);
  assert.equal(f.requests(), 1);
  assert.deepEqual(await readdir(join(f.cache, 'artifacts')), [first.identity]);
  await writeFile(join(first.directory, 'bin/lean'), 'tampered compiler');
  await assert.rejects(provisionArtifact(f.artifact, f.options), /cache contents changed/);
  assert.equal(f.requests(), 1);
});

test('download progress uses actual bytes, reports extraction and verification, and distinguishes cache reuse', async t => {
  const f = await fixture(t), events = [];
  const options = { ...f.options, progress: event => events.push(event), label: 'test compiler' };
  await provisionArtifact(f.artifact, options);
  const downloads = events.filter(event => event.download);
  assert.equal(downloads[0].receivedBytes, 0);
  assert.equal(downloads.at(-1).receivedBytes, f.bytes.length);
  assert.equal(downloads.at(-1).totalBytes, f.bytes.length);
  assert.equal(downloads.at(-1).complete, true);
  assert.ok(downloads.every((event, i) => event.receivedBytes <= event.totalBytes
    && (!i || event.receivedBytes >= downloads[i - 1].receivedBytes)));
  assert.ok(events.some(event => event.stage === 'Extracting test compiler'));
  assert.ok(events.some(event => event.stage === 'Verifying installed test compiler'));
  events.length = 0;
  await provisionArtifact(f.artifact, options);
  assert.deepEqual(events.map(event => event.stage), ['Verifying cached test compiler']);
  assert.equal(f.requests(), 1);
});

test('old receipts remain valid regardless of filename or property ordering', async t => {
  const f = await fixture(t);
  const bytes = archive(['a', 'z', 'ä'].map(name => ({ path: 'tool/' + name, body: name })));
  const options = { ...f.options, fetch: async () => new Response(bytes) };
  const installed = await provisionArtifact(description(bytes), options);
  const path = join(installed.directory, '.lasm-artifact.json');
  const receipt = JSON.parse(await readFile(path, 'utf8'));
  receipt.files = Object.fromEntries(Object.entries(receipt.files).reverse().map(([name, value]) =>
    [name, Object.fromEntries(Object.entries(value).reverse())]));
  await writeFile(path, JSON.stringify(receipt));
  assert.equal((await provisionArtifact(description(bytes), options)).cacheHit, true);
  await writeFile(join(installed.directory, 'ä'), 'different');
  await assert.rejects(provisionArtifact(description(bytes), options), /Changed entries \(1\): "ä"/);
});

test('reserved JavaScript property names are ordinary verified filenames', async t => {
  const f = await fixture(t);
  const bytes = archive(['__proto__', 'constructor', 'toString'].map(name => ({ path: 'tool/' + name, body: name })));
  const options = { ...f.options, fetch: async () => new Response(bytes) };
  const installed = await provisionArtifact(description(bytes), options);
  assert.equal(Object.hasOwn(installed.receipt.files, '__proto__'), true);
  assert.equal((await provisionArtifact(description(bytes), options)).cacheHit, true);
  await writeFile(join(installed.directory, '__proto__'), 'changed');
  await assert.rejects(provisionArtifact(description(bytes), options), /Changed entries \(1\): "__proto__"/);
});

test('a failed checksum cannot report a verified download or begin extraction', async t => {
  const f = await fixture(t), events = [];
  await assert.rejects(provisionArtifact({ ...f.artifact, sha256: '0'.repeat(64) },
    { ...f.options, progress: event => events.push(event) }), /checksum/);
  assert.equal(events.some(event => event.complete || event.stage.startsWith('Extracting')), false);
});

test('concurrent requests share an install; version identities never share directories', async t => {
  const f = await fixture(t);
  const [a, b] = await Promise.all([provisionArtifact(f.artifact, f.options), provisionArtifact(f.artifact, f.options)]);
  assert.equal(a.directory, b.directory); assert.equal(f.requests(), 1);
  const c = await provisionArtifact({ ...f.artifact, name: 'tool-2.tar.zst' }, f.options);
  assert.notEqual(a.directory, c.directory);
});

test('gzip bootstrap archives need no external decompression executable', async t => {
  const f = await fixture(t), bytes = gzipSync(await readFile(join(f.base, 'tool.tar')));
  const artifact = { ...description(bytes), name: 'python.tar.gz', format: 'tar.gz' };
  const options = { ...f.options, fetch: async () => new Response(bytes) };
  const installed = await provisionArtifact(artifact, options);
  assert.equal(await readFile(join(installed.directory, 'bin/lean'), 'utf8'), 'compiler fixture');
  assert.equal((await provisionArtifact(artifact, options)).cacheHit, true);
  await assert.rejects(provisionArtifact({ ...artifact, name: 'broken.tar.gz' },
    { ...options, fetch: async () => new Response(bytes.subarray(0, -3)) }), /checksum or size/);
});

test('rootless portable archives preserve notices and forward hardlinks without stripping directories', async t => {
  const f = await fixture(t);
  const bytes = archive([
    { path: './', type: 'Directory' },
    { path: './bin/alias', type: 'Link', linkpath: './bin/git' },
    { path: './bin/git', body: 'portable executable' },
    { path: './share/NOTICE', body: 'portable notices' },
  ]);
  const artifact = { ...description(bytes), root: '.' };
  const options = { ...f.options, fetch: async () => new Response(bytes) };
  const installed = await provisionArtifact(artifact, options);
  assert.equal(await readFile(join(installed.directory, 'bin/alias'), 'utf8'), 'portable executable');
  assert.equal(await readFile(join(installed.directory, 'share/NOTICE'), 'utf8'), 'portable notices');
  assert.equal((await provisionArtifact(artifact, options)).cacheHit, true);
});

for (const [name, entries] of [
  ['traversal', [{ path: './../escape', body: 'outside' }]],
  ['absolute', [{ path: '/bin/git', body: 'outside' }]],
  ['duplicate spelling', [{ path: './bin/git', body: 'one' }, { path: 'bin/git', body: 'two' }]],
  ['escaping link', [{ path: './bin/link', type: 'SymbolicLink', linkpath: '../../outside' }]],
  ['escaping hardlink', [{ path: './bin/link', type: 'Link', linkpath: '../outside' }]],
]) test(`rootless archives reject ${name}`, async t => {
  const f = await fixture(t), bytes = archive(entries);
  await assert.rejects(provisionArtifact({ ...description(bytes), root: '.' },
    { ...f.options, fetch: async () => new Response(bytes) }), /Unsafe|escapes|TAR_/);
  assert.deepEqual(await readdir(join(f.cache, 'artifacts')), []);
});

for (const mode of ['digest', 'truncated', 'oversized', 'http-error', 'interrupted']) {
  test(`${mode} downloads leave no completed artifact or staging directory`, async t => {
    const f = await fixture(t);
    const options = { ...f.options };
    let artifact = f.artifact;
    if (mode === 'digest') artifact = { ...artifact, sha256: '0'.repeat(64) };
    if (mode === 'truncated') options.fetch = async () => new Response(f.bytes.subarray(0, -1));
    if (mode === 'oversized') options.fetch = async () => new Response(Buffer.concat([f.bytes, Buffer.from('x')]));
    if (mode === 'http-error') options.fetch = async () => new Response('missing', { status: 404 });
    if (mode === 'interrupted') options.fetch = async () => new Response(new ReadableStream({ start(controller) {
      controller.enqueue(f.bytes.subarray(0, 5)); controller.error(new Error('connection interrupted'));
    } }));
    await assert.rejects(provisionArtifact(artifact, options));
    assert.deepEqual(await readdir(join(f.cache, 'artifacts')), []);
  });
}

test('unreachable download diagnostics identify the tool, host and recovery action', async t => {
  const f = await fixture(t);
  await assert.rejects(provisionArtifact(f.artifact, { ...f.options, fetch: async () => { throw new TypeError('fetch failed'); } }),
    /Could not download tool-1\.tar\.zst from example\.invalid:.*Check network access and retry/);
  assert.deepEqual(await readdir(join(f.cache, 'artifacts')), []);
  assert.equal((await provisionArtifact(f.artifact, f.options)).cacheHit, false);
});

for (const [name, entries] of [
  ['traversal', [{ path: 'tool/../../escape', body: 'escape' }]],
  ['absolute path', [{ path: '/tool/escape', body: 'escape' }]],
  ['backslash path', [{ path: 'tool/..\\escape', body: 'escape' }]],
  ['wrong archive root', [{ path: 'different/bin/lean', body: 'wrong' }]],
  ['duplicate path', [{ path: 'tool/bin/lean', body: 'one' }, { path: 'tool/bin/lean', body: 'two' }]],
  ['escaping symlink', [{ path: 'tool/link', type: 'SymbolicLink', linkpath: '../../outside' }]],
  ['escaping hardlink', [{ path: 'tool/link', type: 'Link', linkpath: '../outside' }]],
  ['special file', [{ path: 'tool/fifo', type: 'FIFO' }]],
]) test(`rejects ${name} before publishing a cache entry`, async t => {
  const f = await fixture(t), bytes = archive(entries);
  await assert.rejects(provisionArtifact(description(bytes), { ...f.options, fetch: async () => new Response(bytes) }), /Unsafe|escapes|TAR_/);
  assert.deepEqual(await readdir(join(f.cache, 'artifacts')), []);
});

test('extraction size is independently bounded', async t => {
  const f = await fixture(t);
  await assert.rejects(provisionArtifact({ ...f.artifact, maximumExtractedBytes: 2 }, f.options), /size limit/);
});

test('added files and deleted cache receipts invalidate the complete tree', async t => {
  const f = await fixture(t), installed = await provisionArtifact(f.artifact, f.options);
  const unexpected = join(installed.directory, 'extra');
  await writeFile(unexpected, 'unrecorded');
  await assert.rejects(provisionArtifact(f.artifact, f.options), /cache contents changed/);
  await rm(unexpected); await rm(join(installed.directory, '.lasm-artifact.json'));
  await assert.rejects(provisionArtifact(f.artifact, f.options), /Incomplete managed cache/);
});

test('relative toolchain symlinks work and later escapes are rejected', { skip: process.platform === 'win32' }, async t => {
  const f = await fixture(t);
  const bytes = archive([{ path: 'tool/bin/real', body: 'compiler' },
    { path: 'tool/bin/alias', type: 'SymbolicLink', linkpath: 'real' }]);
  const artifact = description(bytes), options = { ...f.options, fetch: async () => new Response(bytes) };
  const installed = await provisionArtifact(artifact, options);
  assert.equal(await readFile(join(installed.directory, 'bin/alias'), 'utf8'), 'compiler');
  assert.equal((await provisionArtifact(artifact, options)).cacheHit, true);
  await rm(join(installed.directory, 'bin/alias'));
  await symlink(f.source, join(installed.directory, 'bin/alias'));
  await assert.rejects(provisionArtifact(artifact, options), /escapes/);
});

test('official-style shared-library symlink chains are created after ordinary files', { skip: process.platform === 'win32' }, async t => {
  const f = await fixture(t);
  const bytes = archive([
    { path: 'tool/lib/libunwind.so.1', type: 'SymbolicLink', linkpath: 'libunwind.so.1.0' },
    { path: 'tool/lib/libunwind.so', type: 'SymbolicLink', linkpath: 'libunwind.so.1' },
    { path: 'tool/lib/libunwind.so.1.0', body: 'library' },
  ]);
  const artifact = description(bytes), options = { ...f.options, fetch: async () => new Response(bytes) };
  const installed = await provisionArtifact(artifact, options);
  assert.equal(await readFile(join(installed.directory, 'lib/libunwind.so'), 'utf8'), 'library');
  assert.equal((await provisionArtifact(artifact, options)).cacheHit, true);
});

test('forward hardlinks retain file contents', async t => {
  const f = await fixture(t);
  const bytes = archive([
    { path: 'tool/first', type: 'Link', linkpath: 'tool/second' },
    { path: 'tool/second', type: 'Link', linkpath: 'tool/real' },
    { path: 'tool/real', body: 'library' },
  ]);
  const installed = await provisionArtifact(description(bytes), { ...f.options, fetch: async () => new Response(bytes) });
  assert.equal(await readFile(join(installed.directory, 'first'), 'utf8'), 'library');
});

test('cache parents may use OS path aliases without misclassifying internal links as escapes', async t => {
  const f = await fixture(t);
  const physical = join(f.base, 'physical-cache'), alias = join(f.base, 'cache-alias');
  await mkdir(physical);
  await symlink(physical, alias, process.platform === 'win32' ? 'junction' : 'dir');
  const bytes = archive([{ path: 'tool/alias', type: 'Link', linkpath: 'tool/real' }, { path: 'tool/real', body: 'compiler' }]);
  const artifact = description(bytes), options = { ...f.options, cache: alias, fetch: async () => new Response(bytes) };
  const installed = await provisionArtifact(artifact, options);
  assert.equal(await readFile(join(installed.directory, 'alias'), 'utf8'), 'compiler');
  assert.equal((await provisionArtifact(artifact, options)).cacheHit, true);
});

test('symlink directory aliases cannot redirect extracted files', { skip: process.platform === 'win32' }, async t => {
  const f = await fixture(t);
  const bytes = archive([
    { path: 'tool/alias', type: 'SymbolicLink', linkpath: 'real' },
    { path: 'tool/alias/child', body: 'redirected' },
    { path: 'tool/real/child', body: 'original' },
  ]);
  await assert.rejects(provisionArtifact(description(bytes), { ...f.options, fetch: async () => new Response(bytes) }), /EEXIST/);
  assert.deepEqual(await readdir(join(f.cache, 'artifacts')), []);
});

test('artifact descriptors require fixed hashes, sizes and HTTPS', async t => {
  const f = await fixture(t);
  for (const change of [{ name: '../tool' }, { root: '..' }, { sha256: 'x' }, { bytes: -1 },
    { maximumExtractedBytes: Infinity }, { format: 'rar' }, { url: 'http://example.invalid/x' },
    { url: 'https://user:secret@example.invalid/x' }]) assert.throws(() => validateArtifact({ ...f.artifact, ...change }));
  assert.equal(managedCacheDirectory({ LASM_TOOLCHAIN_CACHE: f.cache }), f.cache);
});

test('nearest standard Lean pin wins; unsupported pins are never silently replaced', async t => {
  const f = await fixture(t), nested = join(f.base, 'project/src');
  await mkdir(nested, { recursive: true });
  const main = join(nested, 'Main.lean'); await writeFile(main, 'def main : IO Unit := pure ()');
  assert.equal((await selectLeanVersion(main)).version, '4.35.0');
  await writeFile(join(f.base, 'lean-toolchain'), 'leanprover/lean4:v4.32.0\n');
  await assert.rejects(selectLeanVersion(main), /Unsupported Lean toolchain.*4.32.0/);
  const pin = join(f.base, 'project/lean-toolchain');
  // Lasm supports exactly Lean 4.35.0; earlier releases fail with the fix.
  for (const value of ['leanprover/lean4:v4.34.0\n', 'leanprover/lean4:v4.34.1\n']) {
    await writeFile(pin, value);
    await assert.rejects(selectLeanVersion(main), { message: /Lasm supports Lean v4\.35\.0; set lean-toolchain to leanprover\/lean4:v4\.35\.0\. The project pin was not changed\./ });
  }
  await writeFile(pin, 'leanprover/lean4:v4.36.0-rc1\n');
  assert.deepEqual(await selectLeanVersion(main), { version: '4.35.0', pin });
  for (const value of ['nightly', 'v4.34.0-rc1', '', '../tool', 'leanprover/lean4:v999.0.0']) {
    await writeFile(pin, value); await assert.rejects(selectLeanVersion(main), /Unsupported Lean toolchain/);
    assert.equal(await readFile(pin, 'utf8'), value);
  }
});

test('Windows ARM64 is refused as an unsupported platform before any download', async t => {
  const f = await fixture(t);
  await assert.rejects(provisionLean(f.base, { ...f.options, platform: 'win32', arch: 'arm64' }), /Windows ARM64 is not supported/);
  assert.equal(f.requests(), 0);
});

// The synchronous archive writer (src/managed-artifacts.mjs archiveWriter) that
// replaced node-tar's: the same refusals, plus the cases below.
for (const [name, entries] of [
  ['parent traversal after normalization', [{ path: 'tool/bin/../../escape', body: 'escape' }]],
  ['a drive letter', [{ path: 'C:/escape', body: 'escape' }]],
  ['a drive-relative name', [{ path: 'tool/C:escape', body: 'escape' }]],
  ['a UNC path', [{ path: '//server/share/escape', body: 'escape' }]],
  ['a backslash UNC path', [{ path: '\\\\server\\share\\escape', body: 'escape' }]],
  ['a backslash traversal', [{ path: 'tool\\..\\..\\escape', body: 'escape' }]],
  ['a character device', [{ path: 'tool/device', type: 'CharacterDevice' }]],
  ['a block device', [{ path: 'tool/disk', type: 'BlockDevice' }]],
  ['an absolute symlink', [{ path: 'tool/link', type: 'SymbolicLink', linkpath: '/etc/passwd' }]],
  ['an absolute hardlink', [{ path: 'tool/link', type: 'Link', linkpath: '/etc/passwd' }]],
  ['a hardlink to another root', [{ path: 'tool/link', type: 'Link', linkpath: 'other/file' }]],
]) test(`the archive writer rejects ${name}`, async t => {
  const f = await fixture(t), bytes = archive(entries);
  await assert.rejects(provisionArtifact(description(bytes), { ...f.options, fetch: async () => new Response(bytes) }), /Unsafe|escapes|TAR_/);
  assert.deepEqual(await readdir(join(f.cache, 'artifacts')), []);
});

test('the archive writer drops setuid, setgid and sticky bits and keeps the owner able to write', { skip: process.platform === 'win32' }, async t => {
  const f = await fixture(t);
  const bytes = archive([{ path: 'tool/bin/suid', mode: 0o6755, body: 'tool' }, { path: 'tool/sticky', mode: 0o1444, body: 'notes' }]);
  const installed = await provisionArtifact(description(bytes), { ...f.options, fetch: async () => new Response(bytes) });
  const { stat } = await import('node:fs/promises');
  const suid = await stat(join(installed.directory, 'bin/suid')), sticky = await stat(join(installed.directory, 'sticky'));
  assert.equal(suid.mode & 0o7000, 0); assert.equal(suid.mode & 0o100, 0o100);
  assert.equal(sticky.mode & 0o7000, 0); assert.equal(sticky.mode & 0o200, 0o200);
});

test('the archive writer handles PAX and GNU long names, and its hashes match the files', async t => {
  const f = await fixture(t);
  const deep = 'tool/' + Array.from({ length: 6 }, (_, i) => `directory-with-a-long-name-${i}-${'x'.repeat(30)}`).join('/');
  const source = join(f.base, 'long');
  await mkdir(join(source, deep), { recursive: true });
  await writeFile(join(source, deep, `file-${'y'.repeat(120)}.olean`), 'long name contents');
  await writeFile(join(source, 'tool', 'short'), 'short contents');
  const parts = [];
  for (const portable of [true, false]) {
    await createTar({ cwd: source, file: join(f.base, `long-${portable}.tar`), portable }, ['tool']);
    parts.push(await readFile(join(f.base, `long-${portable}.tar`)));
  }
  for (const tarBytes of parts) {
    const bytes = zstdCompressSync(tarBytes);
    const cache = await mkdtemp(join(f.base, 'cache-'));
    const installed = await provisionArtifact(description(bytes), { ...f.options, cache, fetch: async () => new Response(bytes) });
    const name = deep.slice('tool/'.length) + `/file-${'y'.repeat(120)}.olean`;
    assert.equal(await readFile(join(installed.directory, ...name.split('/')), 'utf8'), 'long name contents');
    assert.equal(installed.receipt.files[name].sha256, hash(Buffer.from('long name contents')));
    // The hashes taken while writing are the files' hashes: a full check passes.
    const { verifyArtifactDirectory } = await import('../src/managed-artifacts.mjs');
    await verifyArtifactDirectory(installed.directory, installed.identity);
  }
});

for (const [name, corrupt] of [
  ['a truncated tar body', bytes => zstdCompressSync(bytes.subarray(0, 512 + 4))],
  ['a corrupt zstd stream', bytes => Buffer.concat([zstdCompressSync(bytes).subarray(0, 20), Buffer.alloc(64, 7)])],
  ['a garbage header', () => zstdCompressSync(Buffer.alloc(2048, 0x41))],
]) test(`the archive writer fails cleanly on ${name}`, async t => {
  const f = await fixture(t);
  const tar = await readFile(join(f.base, 'tool.tar'));
  const bytes = corrupt(tar);
  await assert.rejects(provisionArtifact(description(bytes), { ...f.options, fetch: async () => new Response(bytes) }));
  assert.deepEqual(await readdir(join(f.cache, 'artifacts')), []);
  // The staging directory is removed, and a good archive installs afterwards.
  assert.equal((await provisionArtifact(f.artifact, f.options)).cacheHit, false);
});
