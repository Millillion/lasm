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
  assert.equal((await selectLeanVersion(main)).version, '4.34.0');
  await writeFile(join(f.base, 'lean-toolchain'), 'leanprover/lean4:v4.32.0\n');
  await assert.rejects(selectLeanVersion(main), /Unsupported Lean toolchain.*4.32.0/);
  const pin = join(f.base, 'project/lean-toolchain');
  await writeFile(pin, 'leanprover/lean4:v4.34.0\n');
  assert.deepEqual(await selectLeanVersion(main), { version: '4.34.0', pin });
  for (const value of ['nightly', 'v4.34.0-rc1', '', '../tool', 'leanprover/lean4:v999.0.0']) {
    await writeFile(pin, value); await assert.rejects(selectLeanVersion(main), /Unsupported Lean toolchain/);
    assert.equal(await readFile(pin, 'utf8'), value);
  }
});

test('Windows ARM64 remains explicit until a native compiler artifact is implemented', async t => {
  const f = await fixture(t);
  await assert.rejects(provisionLean(f.base, { ...f.options, platform: 'win32', arch: 'arm64' }), /no native Windows ARM64 archive/);
  assert.equal(f.requests(), 0);
});
