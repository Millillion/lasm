import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, readFile, writeFile, readdir, rm, symlink } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { fileURLToPath } from 'node:url';
import { fork } from 'node:child_process';
import { createHash } from 'node:crypto';
import { c as tar } from 'tar';
import { provisionArtifact } from '../src/managed-artifacts.mjs';
import { removeOwnedStaging, removeDirectoryWithRetries, checkDownloadSpace, storageDiagnostic, withCacheLease } from '../src/cache-lifecycle.mjs';
import { repairManagedCache } from '../src/cache-repair.mjs';
import { parseLasmArguments } from '../src/cli-arguments.mjs';

async function setup(t) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-cache-fault-'));
  const cache = join(base, 'cache'), archive = join(base, 'archive.tgz');
  await mkdir(join(base, 'source/tool'), { recursive: true });
  for (const name of ['a', 'z', 'ä']) await writeFile(join(base, 'source/tool', name), name);
  await tar({ cwd: join(base, 'source'), file: archive, gzip: true, portable: true }, ['tool']);
  const bytes = await readFile(archive);
  const artifact = { name: 'tiny-tool', root: 'tool', url: 'https://example.invalid/tool', format: 'tar.gz',
    bytes: bytes.length, sha256: createHash('sha256').update(bytes).digest('hex'), maximumExtractedBytes: 10000 };
  const configuration = join(base, 'configuration.json');
  await writeFile(configuration, JSON.stringify({ cache, archive, artifact }));
  const children = new Set();
  t.after(async () => {
    const active = [...children];
    for (const child of active) child.kill('SIGKILL');
    await Promise.allSettled(active.map(child => child.completed));
    await rm(base, { force: true, recursive: true });
  });
  const launch = (mode = 'install', phase = '', env = {}) => {
    const child = fork(fileURLToPath(new URL('./fixtures/cache-process.mjs', import.meta.url)), [configuration, mode, phase], {
      execArgv: ['--max-old-space-size=64'], env: { ...process.env, ...env }, silent: true,
    });
    children.add(child);
    const messages = [];
    child.on('message', message => messages.push(message));
    let stderr = '';
    child.stderr.on('data', bytes => { stderr += bytes; });
    child.completed = new Promise((resolve, reject) => {
      child.once('error', reject);
      child.once('exit', (code, signal) => { children.delete(child); resolve({ code, signal, stderr, messages }); });
    });
    child.held = Promise.race([
      new Promise(resolve => child.on('message', m => { if (m.type === 'hold') resolve(m); })),
      child.completed.then(result => { if (phase || mode === 'lease') throw new Error('Owner exited before hold: ' + JSON.stringify(result)); }),
    ]);
    // Avoid an unhandled rejection when a test intentionally expects failure.
    child.held.catch(() => {});
    return child;
  };
  return { base, cache, artifact, launch, options: { cache, log() {}, fetch: async () => new Response(bytes) } };
}

test('independent processes share one download and all receive the verified tree', { timeout: 20_000 }, async t => {
  const f = await setup(t);
  const children = [f.launch(), f.launch(), f.launch()];
  const results = await Promise.all(children.map(child => child.completed));
  for (const result of results) assert.equal(result.code, 0, result.stderr);
  assert.equal(results.flatMap(r => r.messages).filter(m => m.type === 'download').length, 1);
  assert.equal(new Set(results.flatMap(r => r.messages).filter(m => m.type === 'result').map(m => m.directory)).size, 1);
  assert.equal((await readdir(join(f.cache, 'artifacts'))).length, 1);
});

for (const phase of ['download', 'Extracting', 'Verifying installed', 'Finishing'])
  test(`kill and restart during ${phase} recovers owned staging`, { timeout: 20_000 }, async t => {
    const f = await setup(t), child = f.launch('install', phase);
    await child.held;
    child.kill('SIGKILL'); await child.completed;
    assert.ok((await readdir(join(f.cache, 'artifacts'))).some(name => name.startsWith('.install-')));
    const recovered = await provisionArtifact(f.artifact, f.options);
    assert.equal(recovered.cacheHit, phase === 'Finishing');
    assert.equal(await readFile(join(recovered.directory, 'ä'), 'utf8'), 'ä');
    assert.deepEqual(await readdir(join(f.cache, 'artifacts')), [recovered.identity]);
  });

test('a live owner is never reclaimed; repair refuses it and succeeds after owner death', { timeout: 20_000 }, async t => {
  const f = await setup(t), child = f.launch('install', 'download');
  await child.held;
  const before = await readdir(join(f.cache, 'artifacts'));
  await assert.rejects(repairManagedCache({ cache: f.cache }), { code: 'LASM_LOCK_BUSY' });
  assert.deepEqual(await readdir(join(f.cache, 'artifacts')), before);
  child.kill('SIGKILL'); await child.completed;
  const repaired = await repairManagedCache({ cache: f.cache, log() {} });
  assert.equal(repaired.stagingRemoved.length, 1);
  assert.deepEqual(await readdir(join(f.cache, 'artifacts')), []);
});

test('build leases protect already installed tools from explicit repair', { timeout: 20_000 }, async t => {
  const f = await setup(t);
  const installed = await provisionArtifact(f.artifact, f.options);
  const child = f.launch('lease'); await child.held;
  await writeFile(join(installed.directory, 'a'), 'changed');
  await assert.rejects(repairManagedCache({ cache: f.cache }), { code: 'LASM_LOCK_BUSY' });
  child.kill('SIGKILL'); await child.completed;
  const repaired = await repairManagedCache({ cache: f.cache, log() {} });
  assert.equal(repaired.removed.length, 1);
});

test('derived tool owner death recovers without repeating successful derivations', { timeout: 20_000 }, async t => {
  const f = await setup(t), child = f.launch('derive', 'produce'); await child.held;
  child.kill('SIGKILL'); await child.completed;
  const results = await Promise.all([f.launch('derive').completed, f.launch('derive').completed]);
  for (const result of results) assert.equal(result.code, 0, result.stderr);
  assert.deepEqual(results.flatMap(r => r.messages).map(m => m.cacheHit).sort(), [false, true]);
  assert.equal((await readdir(join(f.cache, 'derived'))).length, 1);
});

test('locale changes between processes preserve the cache', { timeout: 20_000 }, async t => {
  const f = await setup(t);
  const first = await f.launch('install', '', { LANG: 'en_US.UTF-8', LC_ALL: 'en_US.UTF-8' }).completed;
  const second = await f.launch('install', '', { LANG: 'sv_SE.UTF-8', LC_ALL: 'sv_SE.UTF-8' }).completed;
  assert.equal(first.code, 0, first.stderr); assert.equal(second.code, 0, second.stderr);
  assert.equal(second.messages.find(m => m.type === 'result').cacheHit, true);
  assert.equal(second.messages.some(m => m.type === 'download'), false);
});

test('offline repair retains valid tools and unrelated files; removed damage is redownloaded', async t => {
  const f = await setup(t);
  const valid = await provisionArtifact(f.artifact, f.options);
  const broken = await provisionArtifact({ ...f.artifact, name: 'other-tool' }, f.options);
  await rm(join(broken.directory, '.lasm-artifact.json'));
  const unrelated = join(f.cache, 'artifacts', '.install-legacy-random');
  await mkdir(unrelated); await writeFile(join(unrelated, 'keep'), 'unrelated');
  await mkdir(join(f.cache, 'sdk-state')); await writeFile(join(f.cache, 'sdk-state/keep'), 'state');
  const result = await repairManagedCache({ cache: f.cache, log() {} });
  assert.deepEqual(result.verified, [valid.directory]);
  assert.equal(result.removed[0].directory, broken.directory);
  assert.deepEqual(result.skipped, [unrelated]);
  assert.equal(await readFile(join(unrelated, 'keep'), 'utf8'), 'unrelated');
  assert.equal(await readFile(join(f.cache, 'sdk-state/keep'), 'utf8'), 'state');
  assert.equal((await provisionArtifact({ ...f.artifact, name: 'other-tool' }, f.options)).cacheHit, false);
});

test('cleanup failure warns without masking success; symlinks are never traversed', async t => {
  const f = await setup(t), path = join(f.base, 'staging'), logs = [];
  await mkdir(path);
  assert.equal(await removeOwnedStaging(path, { log: value => logs.push(value),
    remove: async () => { throw Object.assign(new Error('file locked'), { code: 'EACCES' }); } }), false);
  assert.match(logs[0], /Completed tools remain valid/);
  if (process.platform !== 'win32') {
    const linked = join(f.base, 'linked'); await symlink(path, linked);
    assert.equal(await removeOwnedStaging(linked, { log() {} }), false);
    await writeFile(join(path, 'retained'), 'safe');
    assert.equal(await readFile(join(linked, 'retained'), 'utf8'), 'safe');
  }
});

test('space and permission diagnostics require no real disk exhaustion or permission changes', async () => {
  await assert.rejects(checkDownloadSpace('.', 1000, { inspect: async () => ({ bavail: 1n, bsize: 512n }) }), /Insufficient free space/);
  await checkDownloadSpace('.', 1000, { inspect: async () => ({ bavail: 100n, bsize: 512n }) });
  for (const code of ['ENOSPC', 'EDQUOT', 'EACCES', 'EROFS', 'EPERM'])
    assert.match(storageDiagnostic(Object.assign(new Error('failure'), { code }), '/cache').message, /LASM_TOOLCHAIN_CACHE/);
});

test('persistent cleanup contention exhausts one retry budget; transient contention recovers', async () => {
  const locked = Object.assign(new Error('locked file'), { code: 'EPERM' });
  const waits = []; let calls = 0;
  await assert.rejects(removeDirectoryWithRetries('fixture', {
    remove: async (_path, options) => { assert.equal(options.maxRetries, 0); calls++; throw locked; },
    sleep: async ms => { waits.push(ms); },
  }), error => error === locked);
  assert.equal(calls, 11); assert.equal(waits.reduce((a, b) => a + b, 0), 5500);
  calls = 0;
  await removeDirectoryWithRetries('fixture', { remove: async () => { if (++calls < 3) throw locked; }, sleep: async () => {} });
  assert.equal(calls, 3);
});

test('cache repair grammar is explicit and rejects unrelated options', () => {
  assert.deepEqual(parseLasmArguments(['cache', 'repair']), { command: 'cache-repair' });
  assert.throws(() => parseLasmArguments(['cache', 'repair', '--force']), /Usage/);
  assert.throws(() => parseLasmArguments(['cache', 'delete']), /Usage/);
});

test('lock waiting can be cancelled without releasing the active owner', async t => {
  const f = await setup(t), abort = new AbortController();
  await withCacheLease(f.cache, async () => {
    const waiting = withCacheLease(f.cache, () => assert.fail('must not enter'), { exclusive: true, signal: abort.signal });
    abort.abort(new Error('cancel waiting'));
    await assert.rejects(waiting, /cancel waiting/);
  });
});
