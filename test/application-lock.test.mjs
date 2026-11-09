import assert from 'node:assert/strict';
import test from 'node:test';
import { mkdtemp, writeFile, readFile, rm, chmod } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { fileURLToPath } from 'node:url';
import { fork } from 'node:child_process';
import { withApplicationLock } from '../src/application-lock.mjs';

const fixture = fileURLToPath(new URL('./fixtures/application-lock.mjs', import.meta.url));
async function setup(t) {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-application-lock-'));
  const lock = join(directory, 'build.lock'), value = join(directory, 'counter');
  await writeFile(value, '0');
  const children = new Set();
  t.after(async () => {
    const remaining = [...children];
    for (const child of remaining) child.kill('SIGKILL');
    await Promise.allSettled(remaining.map(child => child.completed));
    await rm(directory, { recursive: true, force: true });
  });
  const launch = mode => {
    const child = fork(fixture, [lock, value, mode], { execArgv: ['--max-old-space-size=64'], silent: true });
    children.add(child);
    let stderr = '';
    child.stderr.on('data', bytes => { stderr += bytes; });
    child.completed = new Promise((resolve, reject) => {
      child.once('error', reject);
      child.once('exit', (code, signal) => { children.delete(child); resolve({ code, signal, stderr }); });
    });
    return child;
  };
  return { lock, value, launch };
}

test('separate build processes cannot interleave updates under the OS lock', { timeout: 15_000 }, async t => {
  const { value, launch } = await setup(t);
  const children = [launch('increment'), launch('increment'), launch('increment')];
  for (const child of children) assert.deepEqual(await child.completed, { code: 0, signal: null, stderr: '' });
  assert.equal(await readFile(value, 'utf8'), '15');
});

test('an interrupted owner releases its lock without PID files, stale timeouts or manual cleanup', { timeout: 15_000 }, async t => {
  const { lock, launch } = await setup(t);
  const child = launch('hold');
  await Promise.race([
    new Promise(resolve => child.once('message', message => { assert.equal(message, 'locked'); resolve(); })),
    child.completed.then(result => { throw new Error('Owner exited before acquisition: ' + JSON.stringify(result)); }),
  ]);
  let entered = false;
  const waiting = withApplicationLock(lock, async () => { entered = true; return 42; });
  await new Promise(resolve => setTimeout(resolve, 100));
  assert.equal(entered, false);
  child.kill('SIGKILL'); await child.completed;
  assert.equal(await waiting, 42);
});

test('exceptions release a build lock for the next operation', async t => {
  const { lock } = await setup(t);
  await assert.rejects(withApplicationLock(lock, () => { throw new Error('compile failed'); }), /compile failed/);
  assert.equal(await withApplicationLock(lock, () => 'recovered'), 'recovered');
});

test('release() lets another build take the lock before the first one finishes', async () => {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-application-lock-release-'));
  const lock = join(directory, 'build.lock'), order = [];
  try {
    let firstReleased;
    const released = new Promise(resolve => { firstReleased = resolve; });
    let finishFirst;
    const first = withApplicationLock(lock, async release => {
      order.push('first: imports'); release(); release(); firstReleased();
      await new Promise(resolve => { finishFirst = resolve; });
      order.push('first: link');
    });
    await released;
    await withApplicationLock(lock, async () => { order.push('second: imports'); }, { tryOnly: true });
    finishFirst();
    await first;
    assert.deepEqual(order, ['first: imports', 'second: imports', 'first: link']);
  } finally { await rm(directory, { recursive: true, force: true }); }
});

test('a busy lock: tryOnly refuses at once, a waiter is told once and enters after release, an abort ends the wait', async t => {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-application-lock-busy-'));
  t.after(() => rm(directory, { recursive: true, force: true }));
  const lock = join(directory, 'nested', 'build.lock');
  let releaseHolder, held;
  const holding = new Promise(resolve => { held = resolve; });
  const holder = withApplicationLock(lock, release => new Promise(resolve => { releaseHolder = () => { release(); resolve('holder'); }; held(); }));
  await holding;
  await assert.rejects(withApplicationLock(lock, () => 'entered', { tryOnly: true }), error =>
    error.code === 'LASM_LOCK_BUSY' && error.message === `Lasm cache is in use: ${lock}. Wait for active builds to finish and retry.`);
  // A shared waiter waits for the exclusive holder as well.
  let waits = 0;
  const waiter = withApplicationLock(lock, () => 'waiter', { onWait: () => { waits++; }, exclusive: false });
  const controller = new AbortController();
  const aborted = withApplicationLock(lock, () => 'never', { signal: controller.signal });
  await new Promise(resolve => setTimeout(resolve, 200));
  assert.equal(waits, 1);
  controller.abort(new Error('stop waiting'));
  await assert.rejects(aborted, { message: 'stop waiting' });
  releaseHolder();
  assert.equal(await holder, 'holder');
  assert.equal(await waiter, 'waiter');
  assert.equal(waits, 1);
  // Shared holders do not exclude each other.
  assert.deepEqual(await withApplicationLock(lock, () => withApplicationLock(lock, () => 'both', { exclusive: false, tryOnly: true }), { exclusive: false }), 'both');
});

test('an aborted signal stops before the lock; the lock path must be an ordinary file', async t => {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-application-lock-checks-'));
  t.after(() => rm(directory, { recursive: true, force: true }));
  let entered = false;
  await assert.rejects(withApplicationLock(join(directory, 'never/build.lock'), () => { entered = true; }, { signal: AbortSignal.abort() }), { name: 'AbortError' });
  assert.equal(entered, false);
  await assert.rejects(readFile(join(directory, 'never/build.lock')), { code: 'ENOENT' });
  await assert.rejects(withApplicationLock(directory, () => { entered = true; }), { message: `Build lock must be an ordinary file: ${directory}` });
  assert.equal(entered, false);
  // A relative path is resolved; the lock file stays (waiters share its inode).
  const cwd = process.cwd();
  try {
    process.chdir(directory);
    assert.equal(await withApplicationLock('relative.lock', () => 'ok'), 'ok');
  } finally { process.chdir(cwd); }
  assert.equal(await readFile(join(directory, 'relative.lock'), 'utf8'), '');
});

test('a lock file that cannot be opened is reported with its path and the open call', { skip: process.platform === 'win32' || process.getuid?.() === 0 }, async t => {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-application-lock-open-'));
  t.after(async () => { await chmod(directory, 0o700); await rm(directory, { recursive: true, force: true }); });
  const lock = join(directory, 'build.lock');
  await writeFile(lock, '');
  await chmod(lock, 0o000);
  await assert.rejects(withApplicationLock(lock, () => 'never'), error => error.path === lock && error.syscall === 'open');
});
