// An instance's working directory (src/working-directory.mjs), in-process: the
// Linux directory descriptors and their leases, path anchoring, child spawn
// settings, names of removed directories, and the pathname form used elsewhere.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, rmSync, writeFileSync, realpathSync, readlinkSync, renameSync, chmodSync, existsSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, sep } from 'node:path';
import { createWorkingDirectory } from '../src/working-directory.mjs';

const linux = { skip: process.platform !== 'linux' };
const isOpen = fd => { try { readlinkSync(`/proc/self/fd/${fd}`); return true; } catch { return false; } };
function scratch(t) {
  const base = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-cwd-unit-')));
  t.after(() => { try { chmodSync(join(base, 'locked'), 0o700); } catch {} rmSync(base, { recursive: true, force: true }); });
  for (const name of ['a', 'b', 'locked']) mkdirSync(join(base, name));
  writeFileSync(join(base, 'file'), '');
  return base;
}
function asPlatform(t, platform) {
  const saved = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { ...saved, value: platform });
  t.after(() => Object.defineProperty(process, 'platform', saved));
}
const failsWith = (code, extra = {}) => error => error.code === code && Object.entries(extra).every(([key, value]) => error[key] === value);

test('Linux: a lease keeps its directory descriptor until the last user releases it', linux, async t => {
  const base = scratch(t);
  const cwd = createWorkingDirectory(join(base, 'a'), false);
  const first = cwd.retain();
  assert.deepEqual([first.path, first.users, first.retired], [join(base, 'a'), 1, false]);
  assert.equal(readlinkSync(`/proc/self/fd/${first.fd}`), join(base, 'a'));
  assert.equal(cwd.retain(), first);
  assert.equal(first.users, 2);
  await cwd.change('../b', first);
  assert.equal(first.retired, true);
  assert.ok(isOpen(first.fd));
  cwd.release(first);
  assert.ok(isOpen(first.fd));
  cwd.release(first);
  assert.equal(isOpen(first.fd), false);
  const second = cwd.retain();
  assert.equal(readlinkSync(`/proc/self/fd/${second.fd}`), join(base, 'b'));
  cwd.release(second);
  assert.ok(isOpen(second.fd));
  // Closing retires the current directory: with no users its descriptor closes.
  cwd.close(); cwd.close();
  assert.equal(isOpen(second.fd), false);
  assert.throws(() => cwd.retain(), failsWith('ECANCELED', { message: 'Lean runtime disposed' }));
});

test('Linux: an unused retired directory closes at once; a released current one stays open', linux, async t => {
  const base = scratch(t);
  const cwd = createWorkingDirectory(join(base, 'a'), false);
  const state = cwd.retain(); cwd.release(state);
  assert.ok(isOpen(state.fd));
  const lease = cwd.retain();
  await cwd.change(join(base, 'b'), lease);
  cwd.release(lease);
  assert.equal(isOpen(state.fd), false);
  cwd.close();
});

test('Linux: relative paths are anchored at the descriptor, as strings or bytes', linux, async t => {
  const base = scratch(t);
  const cwd = createWorkingDirectory(join(base, 'a'), false);
  t.after(() => cwd.close());
  const state = cwd.retain();
  const anchor = `/proc/self/fd/${state.fd}`;
  assert.equal(cwd.path('x/y', state), anchor + sep + 'x/y');
  assert.equal(cwd.path('/abs', state), '/abs');
  assert.equal(cwd.path('', state), '');
  assert.deepEqual(cwd.path(Buffer.from([0xff, 0x2f]), state), Buffer.concat([Buffer.from(anchor + '/'), Buffer.from([0xff, 0x2f])]));
  assert.deepEqual(cwd.path(Buffer.from('/abs'), state), Buffer.from('/abs'));
  assert.deepEqual(cwd.path(new Uint8Array(0), state), Buffer.alloc(0));
  const view = new Uint8Array([0, 0x61, 0x62, 0]).subarray(1, 3);
  assert.deepEqual(cwd.path(view, state), Buffer.from(anchor + '/ab'));
  cwd.release(state);
});

test('Linux: a child inherits the process cwd only when it is the same directory', linux, async t => {
  const base = scratch(t);
  const inside = createWorkingDirectory(process.cwd(), false);
  const other = createWorkingDirectory(join(base, 'a'), false);
  t.after(() => { inside.close(); other.close(); });
  const here = inside.retain(), there = other.retain();
  assert.deepEqual(inside.spawn(here), { directory: process.cwd(), directoryFd: here.fd, inheritProcessCwd: true });
  assert.deepEqual(other.spawn(there), { directory: join(base, 'a'), directoryFd: there.fd, inheritProcessCwd: false });
  inside.release(here); other.release(there);
});

test('Linux: names follow renames; a removed directory is ENOENT', linux, async t => {
  const base = scratch(t);
  const cwd = createWorkingDirectory(join(base, 'a'), false);
  t.after(() => cwd.close());
  const state = cwd.retain();
  assert.deepEqual(await cwd.name(state), Buffer.from(join(base, 'a')));
  renameSync(join(base, 'a'), join(base, 'renamed'));
  assert.deepEqual(await cwd.name(state), Buffer.from(join(base, 'renamed')));
  // A real name ending in " (deleted)" is still a name.
  mkdirSync(join(base, 'x (deleted)'));
  const suffixed = createWorkingDirectory(join(base, 'x (deleted)'), false);
  const lease = suffixed.retain();
  assert.deepEqual(await suffixed.name(lease), Buffer.from(join(base, 'x (deleted)')));
  rmSync(join(base, 'x (deleted)'), { recursive: true });
  await assert.rejects(suffixed.name(lease), failsWith('ENOENT', { errno: 2, nativeMessage: true }));
  suffixed.release(lease); suffixed.close();
  rmSync(join(base, 'renamed'), { recursive: true });
  await assert.rejects(cwd.name(state), failsWith('ENOENT', { errno: 2, nativeMessage: true }));
  cwd.release(state);
});

test('Linux: changing to a file, a missing or an unsearchable directory fails without leaking', linux, async t => {
  const base = scratch(t);
  const cwd = createWorkingDirectory(base, false);
  t.after(() => cwd.close());
  const state = cwd.retain();
  const { readdirSync } = await import('node:fs');
  const before = readdirSync('/proc/self/fd').length;
  await assert.rejects(cwd.change('file', state), failsWith('ENOTDIR', { errno: 20, nativeMessage: true }));
  await assert.rejects(cwd.change('missing', state), failsWith('ENOENT', { errno: 2 }));
  if (process.getuid?.() !== 0) {
    chmodSync(join(base, 'locked'), 0o600);
    await assert.rejects(cwd.change('locked', state), failsWith('EACCES', { errno: 13 }));
  }
  assert.equal(readdirSync('/proc/self/fd').length, before);
  assert.equal(cwd.retain(), state);
  cwd.release(state); cwd.release(state);
});

test('Linux: a change finishing after disposal is cancelled and closes the new descriptor', linux, async t => {
  const base = scratch(t);
  const cwd = createWorkingDirectory(base, false);
  const state = cwd.retain();
  const { readdirSync } = await import('node:fs');
  const changing = cwd.change('a', state);
  cwd.close();
  await assert.rejects(changing, failsWith('ECANCELED', { nativeMessage: true }));
  cwd.release(state);
  assert.equal(isOpen(state.fd), false);
  assert.equal(readdirSync('/proc/self/fd').filter(fd => { try { return readlinkSync(`/proc/self/fd/${fd}`) === join(base, 'a'); } catch { return false; } }).length, 0);
});

test('Linux: a propagated change also moves the process cwd', linux, async t => {
  const base = scratch(t);
  const previous = process.cwd();
  t.after(() => process.chdir(previous));
  const cwd = createWorkingDirectory(base, true);
  t.after(() => cwd.close());
  const state = cwd.retain();
  await cwd.change('b', state);
  assert.equal(realpathSync(process.cwd()), join(base, 'b'));
  cwd.release(state);
});

test('elsewhere: pathname directories are resolved, checked and reported by path', async t => {
  const base = scratch(t);
  asPlatform(t, 'darwin');
  const cwd = createWorkingDirectory(join(base, 'a', '..', 'b'), false);
  const state = cwd.retain();
  assert.deepEqual([state.path, state.fd], [join(base, 'b'), undefined]);
  assert.equal(cwd.path('x', state), join(base, 'b') + sep + 'x');
  assert.deepEqual(cwd.path(Buffer.from('x'), state), Buffer.from(join(base, 'b') + '/x'));
  assert.deepEqual(cwd.spawn(state), { directory: join(base, 'b'), directoryFd: undefined, inheritProcessCwd: false });
  assert.equal(await cwd.name(state), join(base, 'b'));
  await assert.rejects(cwd.change(join(base, 'file'), state), failsWith('ENOTDIR', { errno: 20, nativeMessage: true }));
  await assert.rejects(cwd.change(join(base, 'missing'), state), failsWith('ENOENT', { errno: 2, nativeMessage: true }));
  if (process.getuid?.() !== 0) {
    chmodSync(join(base, 'locked'), 0o600);
    await assert.rejects(cwd.change(join(base, 'locked'), state), failsWith('EACCES', { errno: 13 }));
    chmodSync(join(base, 'locked'), 0o700);
  }
  await cwd.change('../a', state);
  const next = cwd.retain();
  assert.equal(next.path, join(base, 'a'));
  cwd.release(state); cwd.release(next);
  cwd.close();
  assert.throws(() => cwd.retain(), failsWith('ECANCELED'));
});

test('elsewhere: a propagated change skips the search check and moves the process cwd', async t => {
  const base = scratch(t);
  const previous = process.cwd();
  t.after(() => process.chdir(previous));
  asPlatform(t, 'darwin');
  const cwd = createWorkingDirectory(base, true);
  const state = cwd.retain();
  await cwd.change('b', state);
  assert.equal(process.cwd(), join(base, 'b'));
  cwd.close();
});

test('Windows: byte paths are refused and change errors are reported as they are', async t => {
  const base = scratch(t);
  asPlatform(t, 'win32');
  const cwd = createWorkingDirectory(base, false);
  const state = cwd.retain();
  assert.throws(() => cwd.path(Buffer.from('x'), state), { name: 'TypeError', message: 'Byte paths are POSIX-only' });
  // No search check on Windows: an unsearchable directory is accepted by path.
  await assert.rejects(cwd.change(join(base, 'missing'), state), error => error.code === 'ENOENT' && error.nativeMessage === undefined);
  await assert.rejects(cwd.change(join(base, 'file'), state), { code: 'ENOTDIR', message: 'Working directory must be a directory' });
  assert.ok(existsSync(base));
  cwd.close();
});
