import test from 'node:test';
import assert from 'node:assert/strict';
import { createRequire } from 'node:module';
import { mkdtemp, mkdir, writeFile, readFile, rm, readdir, stat } from 'node:fs/promises';
import { readdirSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';
import { c as tar } from 'tar';
import { provisionArtifact, hashFile } from '../src/managed-artifacts.mjs';
import { windowsToolPrefix } from '../src/windows-tool-paths.mjs';

test('a Windows deny-delete handle delays cleanup without losing a published tool',
  { skip: process.platform !== 'win32', timeout: 20_000 }, async t => {
    const base = await mkdtemp(join(tmpdir(), 'lasm-win-lock-'));
    t.after(() => rm(base, { recursive: true, force: true, maxRetries: 10, retryDelay: 100 }));
    const ffi = createRequire(import.meta.url)('koffi'), kernel = ffi.load('kernel32.dll');
    const open = kernel.func('intptr_t __stdcall CreateFileW(str16, uint32_t, uint32_t, void *, uint32_t, uint32_t, intptr_t)');
    const close = kernel.func('int __stdcall CloseHandle(intptr_t)');
    let handle;
    t.after(() => { if (handle !== undefined) close(handle); });
    const cache = join(base, 'cache'), archive = join(base, 'archive.tgz');
    await mkdir(join(base, 'source/tool'), { recursive: true });
    await writeFile(join(base, 'source/tool/compiler'), 'verified compiler');
    await tar({ cwd: join(base, 'source'), file: archive, gzip: true, portable: true }, ['tool']);
    const bytes = await readFile(archive), warnings = [];
    const artifact = { name: 'windows-lock-fixture', root: 'tool', format: 'tar.gz', url: 'https://example.invalid/tool',
      bytes: bytes.length, sha256: createHash('sha256').update(bytes).digest('hex'), maximumExtractedBytes: 10000 };
    const result = await provisionArtifact(artifact, { cache, fetch: async () => new Response(bytes),
      log: message => warnings.push(message), progress: event => {
        if (!event.stage.startsWith('Finishing ')) return;
        const staging = readdirSync(join(cache, 'artifacts')).find(name => name.startsWith('.install-'));
        // GENERIC_READ; FILE_SHARE_READ | FILE_SHARE_WRITE, deliberately omit
        // FILE_SHARE_DELETE. This exercises real Windows sharing violations.
        handle = open(join(cache, 'artifacts', staging, 'archive.tar.gz'), 0x80000000, 3, null, 3, 0x80, 0);
        assert.notEqual(Number(handle), -1);
      },
    });
    assert.equal(await readFile(join(result.directory, 'compiler'), 'utf8'), 'verified compiler');
    assert.ok(warnings.some(message => message.includes('Temporary cleanup pending')));
    assert.ok((await readdir(join(cache, 'artifacts'))).some(name => name.startsWith('.install-')));
    assert.notEqual(close(handle), 0); handle = undefined;
    const reused = await provisionArtifact(artifact, { cache, log() {}, fetch: async () => { throw new Error('Do not download a valid tool twice'); } });
    assert.equal(reused.cacheHit, true);
    assert.deepEqual(await readdir(join(cache, 'artifacts')), [result.identity]);
  });

test('Windows compiler prefixes copy and verify files across real volumes',
  { skip: process.platform !== 'win32', timeout: 15_000 }, async t => {
    assert.ok(process.env.LASM_TEST_OTHER_VOLUME, 'The native CI profile supplies a small disposable NTFS volume');
    const source = await mkdtemp(join(tmpdir(), 'lasm-win-volume-'));
    const temporaryDirectory = await mkdtemp(join(process.env.LASM_TEST_OTHER_VOLUME, 'lasm-prefix-'));
    t.after(async () => {
      await rm(temporaryDirectory, { recursive: true, force: true });
      await rm(source, { recursive: true, force: true });
    });
    assert.notEqual((await stat(source)).dev, (await stat(temporaryDirectory)).dev, 'Test distinct physical volume identities');
    await mkdir(join(source, 'bin')); await mkdir(join(source, 'lib'));
    await writeFile(join(source, 'bin/lean.exe'), 'verified compiler');
    await writeFile(join(source, 'lib/library'), 'verified library');
    const receipt = { identity: 'e'.repeat(64), files: { bin: { type: 'directory' }, lib: { type: 'directory' } } };
    for (const name of ['bin/lean.exe', 'lib/library']) receipt.files[name] = {
      type: 'file', bytes: (await stat(join(source, name))).size, sha256: await hashFile(join(source, name)),
    };
    const prefix = await windowsToolPrefix(source, { receipt, temporaryDirectory });
    assert.equal(await readFile(join(prefix, 'bin/lean.exe'), 'utf8'), 'verified compiler');
    assert.equal(await readFile(join(prefix, 'lib/library'), 'utf8'), 'verified library');
    assert.equal((await stat(join(source, 'bin/lean.exe'))).nlink, 1, 'Cross-volume fallback is a copy, not a hard link');
    assert.equal(await windowsToolPrefix(source, { receipt, temporaryDirectory }), prefix);
    await writeFile(join(prefix, 'bin/lean.exe'), 'damaged copy');
    assert.equal(await readFile(join(source, 'bin/lean.exe'), 'utf8'), 'verified compiler');
    await assert.rejects(windowsToolPrefix(source, { receipt, temporaryDirectory }), /execution files changed/);
    assert.equal(await windowsToolPrefix(source, { receipt, temporaryDirectory, repair: true }), prefix);
  });
