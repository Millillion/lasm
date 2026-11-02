// Build-cache identity and delivery, case by case: the output receipt that
// decides whether a cached build is reused (src/application-files.mjs), the
// delivery that must never erase a developer's files, and the cache lock and
// staging helpers (src/cache-lifecycle.mjs). Written to kill the surviving
// mutants of docs/TESTING.md#mutation-testing; test/application-files.test.mjs and
// test/cache-lifecycle.test.mjs cover the main scenarios.
import assert from 'node:assert/strict';
import test from 'node:test';
import { mkdtemp, mkdir, writeFile, readFile, rm, readdir, stat } from 'node:fs/promises';
import { existsSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, dirname } from 'node:path';
import { createHash } from 'node:crypto';
import { Writable } from 'node:stream';
import { pathToFileURL } from 'node:url';
import { buildApplicationWithProgress } from '../src/application-build-client.mjs';
import { deliverOutput, fileInventory, outputReceipt, reusableOutput } from '../src/application-files.mjs';
import { withCacheEntryLock, removeOwnedStaging, removeDirectoryWithRetries, createOwnedStaging, storageDiagnostic,
  checkDownloadSpace } from '../src/cache-lifecycle.mjs';

const sha = text => createHash('sha256').update(text).digest('hex');
async function base(t) {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-build-cache-'));
  t.after(() => rm(directory, { recursive: true, force: true }));
  return directory;
}
async function tree(directory, files) {
  await mkdir(directory, { recursive: true });
  for (const [name, contents] of Object.entries(files)) {
    await mkdir(dirname(join(directory, name)), { recursive: true });
    await writeFile(join(directory, name), contents);
  }
  return directory;
}
async function build(directory, signature, files) {
  await tree(directory, files);
  await writeFile(join(directory, outputReceipt), JSON.stringify({ schema: 1, signature, files: await fileInventory(directory) }));
  return directory;
}

test('the inventory lists every file with its SHA-256, by sorted relative path', async t => {
  const root = await base(t);
  const names = Array.from({ length: 30 }, (_, i) => `f${String((i * 7) % 30).padStart(2, '0')}`);
  await tree(join(root, 'out'), Object.fromEntries([...names.map(n => [n, n]), ['sub/deep/z', 'z'], ['sub/a', 'a']]));
  const inventory = await fileInventory(join(root, 'out'));
  assert.deepEqual(Object.keys(inventory), [...names].sort().concat(['sub/a', 'sub/deep/z']).sort());
  assert.equal(inventory['sub/deep/z'], sha('z'));
  const directories = [];
  await fileInventory(join(root, 'out'), new Set(['f00', 'sub/deep']), directories);
  assert.deepEqual(directories, ['sub']);
  assert.equal(Object.hasOwn(await fileInventory(join(root, 'out'), new Set(['f00'])), 'f00'), false);
  await writeFile(join(root, 'file'), 'x');
  await assert.rejects(fileInventory(join(root, 'file')), /Application output must be an ordinary directory/);
});

test('reuse: only a complete, unchanged output with the same signature', async t => {
  const root = await base(t);
  const out = await build(join(root, 'out'), 'sig', { 'main.mjs': 'main', 'lib/a.js': 'a' });
  assert.equal(await reusableOutput(out, 'sig'), true);
  assert.equal(await reusableOutput(out, 'other'), false);
  await writeFile(join(out, 'lib/a.js'), 'changed');
  assert.equal(await reusableOutput(out, 'sig'), false);
  await writeFile(join(out, 'lib/a.js'), 'a');
  await writeFile(join(out, 'extra'), 'x');
  assert.equal(await reusableOutput(out, 'sig'), false);
  await rm(join(out, 'extra'));
  await rm(join(out, 'lib/a.js'));
  assert.equal(await reusableOutput(out, 'sig'), false);
  assert.equal(await reusableOutput(join(root, 'missing'), 'sig'), false);
  await writeFile(join(out, outputReceipt), '{ not json');
  assert.equal(await reusableOutput(out, 'sig'), false);
  await rm(join(out, outputReceipt));
  assert.equal(await reusableOutput(out, 'sig'), false);
});

test('receipts that could name files outside the output, or are malformed, are refused', async t => {
  const root = await base(t);
  const out = await tree(join(root, 'out'), { 'main.mjs': 'main' });
  const good = sha('main');
  const receipts = [
    { schema: 2, signature: 's', files: {} },
    { signature: 's', files: {} },
    { schema: 1, signature: 3, files: {} },
    { schema: 1, files: {} },
    { schema: 1, signature: 's' },
    { schema: 1, signature: 's', files: null },
    { schema: 1, signature: 's', files: 'main.mjs' },
    { schema: 1, signature: 's', files: [good] },
    ...[outputReceipt, 'a\\b', 'c:x', 'nul\0', '/abs', 'a//b', 'a/', './a', 'a/./b', '..', '../up', 'a/../b', '']
      .map(name => ({ schema: 1, signature: 's', files: { [name]: good } })),
    ...[good.toUpperCase(), good.slice(1), good + 'a', 'x' + good, 7, null].map(hash => ({ schema: 1, signature: 's', files: { 'main.mjs': hash } })),
  ];
  for (const record of receipts) {
    await writeFile(join(out, outputReceipt), JSON.stringify(record));
    await assert.rejects(reusableOutput(out, 's'), { message: 'Invalid application output receipt' }, JSON.stringify(record));
  }
  // Names with dots that are not path segments are fine.
  await writeFile(join(out, outputReceipt), JSON.stringify({ schema: 1, signature: 's', files: { 'main.mjs': good } }));
  assert.equal(await reusableOutput(out, 's'), true);
  await writeFile(join(out, outputReceipt), JSON.stringify({ schema: 1, signature: 's', files: { '.hidden..x/..a': good } }));
  assert.equal(await reusableOutput(out, 's'), false);
  await rm(join(out, outputReceipt));
  await mkdir(join(out, outputReceipt));
  await assert.rejects(reusableOutput(out, 's'), { message: 'Application receipt must be an ordinary file' });
});

test('delivery into a new nested directory, an empty directory, and onto the cache itself', async t => {
  const root = await base(t);
  const cached = await build(join(root, 'cached'), 'sig', { 'main.mjs': 'main' });
  await deliverOutput(cached, join(root, 'a/b/dist'), 'sig');
  assert.equal(await readFile(join(root, 'a/b/dist/main.mjs'), 'utf8'), 'main');
  await mkdir(join(root, 'empty'));
  await deliverOutput(cached, join(root, 'empty'), 'sig');
  assert.deepEqual((await readdir(join(root, 'empty'))).sort(), [outputReceipt, 'main.mjs']);
  // Delivering the cache onto itself does nothing (not even a lock beside it).
  await deliverOutput(cached, cached, 'sig');
  assert.equal(existsSync(cached + '.lasm-output.lock'), false);
  assert.deepEqual((await readdir(cached)).sort(), [outputReceipt, 'main.mjs']);
});

test('an unchanged delivery leaves the output alone; any change replaces it', async t => {
  const root = await base(t);
  const dist = join(root, 'dist');
  const first = await build(join(root, 'first'), 'one', { 'main.mjs': 'main' });
  await deliverOutput(first, dist, 'one');
  const inode = (await stat(dist)).ino;
  await deliverOutput(first, dist, 'one');
  assert.equal((await stat(dist)).ino, inode, 'same signature, same files: not touched');
  // Same files under another signature: replaced (the receipt records the new signature).
  const second = await build(join(root, 'second'), 'two', { 'main.mjs': 'main' });
  await deliverOutput(second, dist, 'two');
  assert.notEqual((await stat(dist)).ino, inode);
  assert.equal(JSON.parse(await readFile(join(dist, outputReceipt), 'utf8')).signature, 'two');
  // An added asset with the same signature: replaced, asset kept.
  const again = (await stat(dist)).ino;
  await writeFile(join(dist, 'asset.txt'), 'mine');
  await deliverOutput(second, dist, 'two');
  assert.notEqual((await stat(dist)).ino, again);
  assert.equal(await readFile(join(dist, 'asset.txt'), 'utf8'), 'mine');
  // A removed generated file with the same signature: restored.
  await rm(join(dist, 'main.mjs'));
  await deliverOutput(second, dist, 'two');
  assert.equal(await readFile(join(dist, 'main.mjs'), 'utf8'), 'main');
});

test('generated directories that a new build drops disappear; asset directories stay', async t => {
  const root = await base(t);
  const dist = join(root, 'dist');
  await deliverOutput(await build(join(root, 'old'), 'old', { 'main.mjs': '1', 'host/support.mjs': 's', 'deep/er/x.js': 'x' }), dist, 'old');
  await mkdir(join(dist, 'assets/img'), { recursive: true });
  await mkdir(join(dist, 'deep/mine'));
  await deliverOutput(await build(join(root, 'new'), 'new', { 'main.mjs': '2' }), dist, 'new');
  assert.deepEqual((await readdir(dist)).sort(), [outputReceipt, 'assets', 'deep', 'main.mjs']);
  assert.deepEqual(await readdir(join(dist, 'deep')), ['mine']);
  assert.deepEqual(await readdir(join(dist, 'assets')), ['img']);
});

test('added assets inside what a new build generates are refused', async t => {
  const root = await base(t);
  const dist = join(root, 'dist');
  await deliverOutput(await build(join(root, 'old'), 'old', { 'main.mjs': '1' }), dist, 'old');
  await mkdir(join(dist, 'gen/sub'), { recursive: true });
  await assert.rejects(deliverOutput(await build(join(root, 'file'), 'f', { gen: 'file now' }), dist, 'f'), /conflicts with an added asset directory/);
  await rm(join(dist, 'gen'), { recursive: true });
  await mkdir(join(dist, 'gen'));
  await writeFile(join(dist, 'gen/child'), 'mine');
  await assert.rejects(deliverOutput(await build(join(root, 'file2'), 'f2', { gen: 'file now' }), dist, 'f2'), /conflicts with an added asset/);
  assert.equal(await readFile(join(dist, 'gen/child'), 'utf8'), 'mine');
  // An asset beside generated files with a similar name is fine.
  await rm(join(dist, 'gen'), { recursive: true });
  await writeFile(join(dist, 'gen.txt'), 'mine');
  await mkdir(join(dist, 'gen-dir'));
  await deliverOutput(await build(join(root, 'file3'), 'f3', { gen: 'file now', 'x/gen': 'deep' }), dist, 'f3');
  assert.equal(await readFile(join(dist, 'gen.txt'), 'utf8'), 'mine');
  assert.equal(await readFile(join(dist, 'gen'), 'utf8'), 'file now');
});

test('cache entry locks need a known kind and a SHA-256 identity', async t => {
  const cache = await base(t);
  const id = sha('entry');
  assert.equal(await withCacheEntryLock(cache, 'artifacts', id, async () => 'held'), 'held');
  assert.equal(await withCacheEntryLock(cache, 'derived', id, async () => 'held'), 'held');
  assert.deepEqual((await readdir(join(cache, '.locks'))).sort(), [`artifacts-${id}.lock`, `derived-${id}.lock`, 'usage.lock']);
  for (const [kind, identity] of [['other', id], ['artifacts', id.toUpperCase()], ['artifacts', 'x' + id], ['artifacts', id + 'a'], ['artifacts', id.slice(1)]])
    assert.throws(() => withCacheEntryLock(cache, kind, identity, async () => {}), { message: 'Invalid managed cache identity' });
});

test('owned staging: created private, never reused; removed only when it is a directory', async t => {
  const root = await base(t);
  const path = join(root, 'staging');
  assert.equal(await createOwnedStaging(path), path);
  assert.equal((await stat(path)).mode & 0o777, 0o700);
  await assert.rejects(createOwnedStaging(path), error => {
    assert.match(error.message, /^Cannot reuse unfinished staging .*staging\. Close programs holding these files and run lasm cache repair\.$/);
    assert.equal(error.cause.code, 'EEXIST');
    return true;
  });
  await assert.rejects(createOwnedStaging(join(root, 'missing/parent')), { code: 'ENOENT' });
  const logs = [];
  await writeFile(join(path, 'f'), 'x');
  assert.equal(await removeOwnedStaging(path, { log: m => logs.push(m) }), true);
  assert.equal(existsSync(path), false);
  assert.equal(await removeOwnedStaging(path, { log: m => logs.push(m) }), true, 'already gone');
  await writeFile(path, 'a file');
  assert.equal(await removeOwnedStaging(path, { log: m => logs.push(m) }), false);
  assert.equal(await readFile(path, 'utf8'), 'a file');
  assert.equal(logs.length, 1);
  assert.match(logs[0], /^\[lasm\] Temporary cleanup pending at .*staging: staging is not an ordinary directory\. Completed tools remain valid/);
  const busy = await removeOwnedStaging(join(root), { log: m => logs.push(m), remove: async () => { throw Object.assign(new Error('x'), { code: 'EACCES' }); } });
  assert.equal(busy, false);
  assert.match(logs[1], /: EACCES\. /);
});

test('removal retries contention errors with growing waits, at most ten times', async () => {
  for (const code of ['EBUSY', 'EMFILE', 'ENFILE', 'ENOTEMPTY', 'EPERM']) {
    const sleeps = [];
    let calls = 0;
    await removeDirectoryWithRetries('/x', { remove: async (path, options) => {
      assert.deepEqual([path, options], ['/x', { recursive: true, force: true, maxRetries: 0 }]);
      if (++calls < 3) throw Object.assign(new Error(code), { code });
    }, sleep: async ms => sleeps.push(ms) });
    assert.deepEqual(sleeps, [100, 200], code);
  }
  const sleeps = [];
  await assert.rejects(removeDirectoryWithRetries('/x', { remove: async () => { throw Object.assign(new Error('busy'), { code: 'EBUSY' }); },
    sleep: async ms => sleeps.push(ms) }), { code: 'EBUSY' });
  assert.deepEqual(sleeps, [100, 200, 300, 400, 500, 600, 700, 800, 900, 1000]);
  let once = 0;
  await assert.rejects(removeDirectoryWithRetries('/x', { remove: async () => { once++; throw Object.assign(new Error('no'), { code: 'EACCES' }); },
    sleep: async () => assert.fail('no retry') }), { code: 'EACCES' });
  assert.equal(once, 1);
});

test('storage diagnostics name the action for each error; other errors pass through', () => {
  for (const [code, action] of [['ENOSPC', 'Free disk space or increase your quota'], ['EDQUOT', 'Free disk space or increase your quota'],
    ['EACCES', 'Choose a writable directory on a local disk, or close programs locking the files'], ['EPERM', 'Choose a writable directory'], ['EROFS', 'Choose a writable directory']]) {
    const cause = Object.assign(new Error('raw'), { code });
    const error = storageDiagnostic(cause, '/cache/dir');
    assert.equal(error.code, code);
    assert.equal(error.cause, cause);
    assert.ok(error.message.startsWith(`${code} while installing tools in /cache/dir. ${action}`), error.message);
    assert.ok(error.message.endsWith('; set LASM_TOOLCHAIN_CACHE to relocate the cache and retry.'));
  }
  const other = Object.assign(new Error('other'), { code: 'EIO' });
  assert.equal(storageDiagnostic(other, '/c'), other);
  assert.equal(storageDiagnostic(undefined, '/c'), undefined);
  assert.equal(storageDiagnostic(null, '/c'), null);
});

test('download space: enough space passes, too little fails with numbers, unsupported filesystems are skipped', async () => {
  const inspect = (bavail, bsize = 4096n) => async (directory, options) => {
    assert.deepEqual(options, { bigint: true });
    return { bavail, bsize };
  };
  assert.deepEqual(await checkDownloadSpace('/d', 8192, { inspect: inspect(2n) }), { available: 8192n, blockSize: 4096n });
  await assert.rejects(checkDownloadSpace('/d', 8193, { inspect: inspect(2n) }), error => {
    assert.equal(error.code, 'ENOSPC');
    assert.equal(error.message, 'Insufficient free space for the 8193-byte tool archive; 8192 bytes available at /d. Extraction requires additional space. Set LASM_TOOLCHAIN_CACHE to a larger local disk.');
    return true;
  });
  for (const code of ['ENOSYS', 'ENOTSUP', 'EOPNOTSUPP'])
    assert.equal(await checkDownloadSpace('/d', 1, { inspect: async () => { throw Object.assign(new Error(code), { code }); } }), undefined);
  await assert.rejects(checkDownloadSpace('/d', 1, { inspect: async () => { throw Object.assign(new Error('io'), { code: 'EIO' }); } }), { code: 'EIO' });
  // The real statfs of a real directory.
  const real = await checkDownloadSpace(tmpdir(), 1);
  assert.equal(typeof real.available, 'bigint');
});

test('the build client: names the file first, relays worker logs, keeps the streams open, and needs a result and exit 0', async t => {
  const root = await base(t);
  const worker = join(root, 'worker.mjs');
  await writeFile(worker, `import { parentPort, workerData } from 'node:worker_threads';
const o = workerData.options;
parentPort.postMessage({ type: 'log', text: 'a worker log line' });
console.log('to stdout');
if (o.result) parentPort.postMessage({ type: 'result', result: { file: workerData.file, cacheHit: false } });
if (o.exit) process.exitCode = o.exit;
parentPort.close();`);
  const capture = () => { const chunks = []; return { chunks, stream: new Writable({ write(chunk, _, callback) { chunks.push(String(chunk)); callback(); } }) }; };
  const out = capture(), err = capture();
  const run = options => buildApplicationWithProgress('/project/Main.lean', options, { workerUrl: pathToFileURL(worker), stdout: out.stream, stderr: err.stream, intervalMs: 10_000 });
  assert.deepEqual(await run({ result: true }), { file: '/project/Main.lean', cacheHit: false });
  const text = err.chunks.join('');
  assert.match(text, /^\[lasm\] Preparing Main\.lean\n/);
  assert.match(text, /a worker log line/);
  assert.equal(out.chunks.join(''), 'to stdout\n');
  assert.equal(out.stream.writableEnded, false);
  assert.equal(err.stream.writableEnded, false);
  await assert.rejects(run({ result: true, exit: 3 }), { message: 'Lasm build worker stopped before completing (exit 3).' });
  await assert.rejects(run({}), { message: 'Lasm build worker stopped before completing (exit 0).' });
  out.stream.write('still open\n');
  assert.equal(out.chunks.at(-1), 'still open\n');
});
