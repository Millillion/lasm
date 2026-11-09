// The native file adapter that normally runs inside the file worker
// (nativeFiles({ synchronous: true })), exercised in this thread against the
// real C library: FILE streams, errno conventions, directories, temporary
// files, locks, the environment and Linux system files.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, rmSync, writeFileSync, readFileSync, mkdirSync, chmodSync, symlinkSync, readSync, closeSync, openSync, fstatSync, realpathSync, constants as fsConstants } from 'node:fs';
import { join } from 'node:path';
import { tmpdir, constants, release, machine, userInfo, totalmem } from 'node:os';
import { nativeFiles } from '../src/native-files.mjs';

const posix = process.platform !== 'win32';
const linux = process.platform === 'linux';
const E = constants.errno;
const files = posix ? nativeFiles({ synchronous: true }) : undefined;
const crt = (errno, extra = {}) => error => error.errno === errno && error.code === Object.keys(E).find(key => E[key] === Math.abs(errno))
  && error.nativeMessage === (extra.nativeMessage ?? true) && error.message === files.strerror(Math.abs(errno))
  && (extra.errorOrigin === undefined || error.errorOrigin === extra.errorOrigin);
function scratch(t) {
  const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-adapter-')));
  t.after(() => { try { chmodSync(directory, 0o700); } catch {} rmSync(directory, { recursive: true, force: true }); });
  return directory;
}
function withEnvironment(t, values) {
  const saved = Object.fromEntries(Object.keys(values).map(key => [key, process.env[key]]));
  for (const [key, value] of Object.entries(values)) value === undefined ? files.unsetEnvironment(key) : files.setEnvironment(key, value);
  t.after(() => { for (const [key, value] of Object.entries(saved)) value === undefined ? files.unsetEnvironment(key) : files.setEnvironment(key, value); });
}

test('the synchronous adapter is cached separately from the pooled one', { skip: !posix }, () => {
  assert.equal(nativeFiles({ synchronous: true }), files);
  assert.equal(nativeFiles(), nativeFiles());
  assert.notEqual(nativeFiles(), files);
});

test('open modes create, truncate, append and refuse existing files as Lean\'s do', { skip: !posix }, async t => {
  const directory = scratch(t), path = join(directory, 'file');
  const write = async (mode, text) => { const f = await files.open(path, mode); await files.write(f, Buffer.from(text)); files.close(f); };
  await assert.rejects(files.open(path, 0), crt(E.ENOENT, { errorOrigin: 'crt' }));
  await assert.rejects(files.open(path, 3), crt(E.ENOENT));
  await write(1, 'first');
  assert.equal(readFileSync(path, 'utf8'), 'first');
  await write(1, 'x');
  assert.equal(readFileSync(path, 'utf8'), 'x');
  await write(4, 'yz');
  assert.equal(readFileSync(path, 'utf8'), 'xyz');
  await assert.rejects(files.open(path, 2), crt(E.EEXIST));
  await assert.rejects(files.open(path, 5), crt(E.EEXIST));
  rmSync(path);
  await write(2, 'new');
  assert.equal(readFileSync(path, 'utf8'), 'new');
  rmSync(path);
  const both = await files.open(path, 5);
  await files.write(both, Buffer.from('rw'));
  await files.rewind(both);
  assert.equal((await files.read(both, 10)).toString(), 'rw');
  files.close(both);
  const update = await files.open(path, 3);
  assert.equal((await files.read(update, 1)).toString(), 'r');
  files.close(update);
  // Permissions apply to created files (umask permitting), and the descriptor is close-on-exec.
  rmSync(path);
  const created = await files.open(path, 1, 0o600);
  assert.equal(fstatSync(created.fd).mode & 0o777, 0o600);
  files.close(created);
  for (const mode of [-1, 6, 1.5]) await assert.rejects(files.open(path, mode), crt(E.EINVAL));
  await assert.rejects(files.open(directory, 1), crt(E.EISDIR));
});

test('streams read to EOF, see appended data after EOF, write, flush and truncate', { skip: !posix }, async t => {
  const directory = scratch(t), path = join(directory, 'data');
  writeFileSync(path, 'hello');
  const file = await files.open(path, 3);
  assert.equal(file.type, 'file');
  assert.deepEqual(await files.read(file, 0), Buffer.alloc(0));
  assert.equal((await files.read(file, 3)).toString(), 'hel');
  assert.equal((await files.read(file, 100)).toString(), 'lo');
  assert.deepEqual(await files.read(file, 4), Buffer.alloc(0));
  writeFileSync(path, 'hello world');
  assert.equal((await files.read(file, 100)).toString(), ' world');
  await files.write(file, Buffer.alloc(0));
  await files.write(file, Buffer.from('!'));
  await files.flush(file);
  assert.equal(readFileSync(path, 'utf8'), 'hello world!');
  await files.rewind(file);
  assert.equal((await files.read(file, 5)).toString(), 'hello');
  await files.truncate(file);
  assert.equal(readFileSync(path, 'utf8'), 'hello');
  assert.equal(files.isTty(file), false);
  files.close(file);
  assert.equal(file.stream, null);
  files.close(file);
});

test('reads and writes on the wrong stream direction fail with the C library errno', { skip: !posix }, async t => {
  const directory = scratch(t), path = join(directory, 'one-way');
  writeFileSync(path, 'abc');
  const reader = await files.open(path, 0);
  await assert.rejects(files.write(reader, Buffer.from('x')), crt(E.EBADF));
  files.close(reader);
  const writer = await files.open(path, 1);
  await assert.rejects(files.read(writer, 1), crt(E.EBADF));
  files.close(writer);
});

test('lines keep their newline, a final line may be unterminated, and EOF is cleared', { skip: !posix }, async t => {
  const directory = scratch(t), path = join(directory, 'lines');
  writeFileSync(path, 'one\ntwo\n\nlast');
  const file = await files.open(path, 0);
  const lines = [];
  for (let i = 0; i < 5; i++) lines.push((await files.getLine(file)).toString());
  assert.deepEqual(lines, ['one\n', 'two\n', '\n', 'last', '']);
  writeFileSync(path, 'one\ntwo\n\nlast more\n');
  assert.equal((await files.getLine(file)).toString(), ' more\n');
  files.close(file);
});

test('closing with discarded output drops buffered bytes; a normal close writes them', { skip: !posix }, async t => {
  const directory = scratch(t), path = join(directory, 'buffered');
  const kept = await files.open(path, 1);
  await files.write(kept, Buffer.from('kept'));
  assert.equal(readFileSync(path, 'utf8'), '');
  await files.closeAsync(kept);
  assert.equal(readFileSync(path, 'utf8'), 'kept');
  assert.equal(kept.stream, null);
  await files.closeAsync(kept);
  for (const close of [file => files.close(file, true), file => files.closeAsync(file, true)]) {
    const dropped = await files.open(path, 1);
    await files.write(dropped, Buffer.from('dropped'));
    await close(dropped);
    assert.equal(readFileSync(path, 'utf8'), '');
  }
});

test('flock locks are shared or exclusive, try-locks report contention, and cancellation stops a wait', { skip: !posix }, async t => {
  const directory = scratch(t), path = join(directory, 'lock');
  writeFileSync(path, '');
  const [a, b] = [await files.open(path, 0), await files.open(path, 0)];
  t.after(() => { files.close(a); files.close(b); });
  assert.equal(await files.lock(a, false), true);
  assert.equal(await files.lock(b, false, true), true);
  assert.equal(await files.lock(b, true, true), false);
  assert.equal(await files.lock(b, false, false, true), true);
  assert.equal(await files.lock(a, true, true), true);
  assert.equal(await files.lock(b, false, true), false);
  // A blocking lock waits until the holder unlocks.
  let acquired = false;
  const waiting = files.lock(b, true).then(value => { acquired = value; });
  await new Promise(resolve => setTimeout(resolve, 20));
  assert.equal(acquired, false);
  await files.lock(a, false, false, true);
  await waiting;
  assert.equal(acquired, true);
  // A cancelled handle stops waiting with ECANCELED.
  const blocked = files.lock(a, true);
  a.cancelled = true;
  await assert.rejects(blocked, crt(E.ECANCELED));
  a.cancelled = false;
  await files.lock(b, false, false, true);
});

test('directories list raw names without . and .., in readdir order, and report errors', { skip: !posix }, async t => {
  const directory = scratch(t);
  const names = ['a', 'b c', 'x'.repeat(200), Buffer.from([0xff, 0x41]).toString('latin1')];
  for (const name of names.slice(0, 3)) writeFileSync(join(directory, name), '');
  writeFileSync(Buffer.concat([Buffer.from(directory + '/'), Buffer.from([0xff, 0x41])]), '');
  const listed = await files.readDirectory(directory);
  assert.deepEqual(listed.map(name => name.toString('latin1')).sort(), names.sort());
  assert.ok(listed.some(name => name.equals(Buffer.from([0xff, 0x41]))));
  await assert.rejects(files.readDirectory(join(directory, 'missing')), crt(E.ENOENT));
  await assert.rejects(files.readDirectory(join(directory, 'a')), crt(E.ENOTDIR));
  mkdirSync(join(directory, 'empty'));
  assert.deepEqual(await files.readDirectory(join(directory, 'empty')), []);
});

test('real paths resolve links; missing paths fail with errno', { skip: !posix }, async t => {
  const directory = scratch(t);
  mkdirSync(join(directory, 'target'));
  symlinkSync(join(directory, 'target'), join(directory, 'link'));
  assert.equal((await files.realPath(join(directory, 'link') + '/.')).toString(), join(directory, 'target'));
  await assert.rejects(files.realPath(join(directory, 'missing')), crt(E.ENOENT));
});

test('removing a file uses unlink with libuv\'s negative errno', { skip: !posix }, async t => {
  const directory = scratch(t);
  writeFileSync(join(directory, 'f'), '');
  assert.equal(await files.removeFile(join(directory, 'f')), undefined);
  await assert.rejects(files.removeFile(join(directory, 'f')), crt(-E.ENOENT, { nativeMessage: false, errorOrigin: 'uv' }));
  mkdirSync(join(directory, 'd'));
  await assert.rejects(files.removeFile(join(directory, 'd')), error => error.errno < 0 && ['EISDIR', 'EPERM'].includes(error.code));
});

test('directory search permission is checked without changing directory', { skip: !posix || process.getuid?.() === 0 }, async t => {
  const directory = scratch(t);
  await files.checkDirectorySearch(directory);
  chmodSync(directory, 0o600);
  await assert.rejects(files.checkDirectorySearch(directory), crt(E.EACCES));
  chmodSync(directory, 0o700);
  await assert.rejects(files.checkDirectorySearch(join(directory, 'missing')), crt(E.ENOENT));
});

test('temporary files and directories replace the template suffix; failures use libuv errnos', { skip: !posix }, async t => {
  const directory = scratch(t);
  const made = await files.createTemporary(join(directory, 'tmp.XXXXXX'));
  assert.match(made.path.toString(), new RegExp(`^${directory}/tmp\\.[A-Za-z0-9]{6}$`));
  assert.equal(made.file.type, 'file');
  await files.write(made.file, Buffer.from('temp'));
  files.close(made.file);
  assert.equal(readFileSync(made.path.toString(), 'utf8'), 'temp');
  const folder = await files.createTemporary(Buffer.from(join(directory, 'dir.XXXXXX')), true);
  assert.equal(folder.file, undefined);
  assert.deepEqual(await files.readDirectory(folder.path.toString()), []);
  for (const isDirectory of [false, true])
    await assert.rejects(files.createTemporary(join(directory, 'missing', 'tmp.XXXXXX'), isDirectory), crt(-E.ENOENT, { nativeMessage: false }));
  await assert.rejects(files.createTemporary(join(directory, 'no-template'), false), crt(-E.EINVAL, { nativeMessage: false }));
});

test('group records include their members; an unknown group is none', { skip: !posix }, async () => {
  const group = await files.groupInfo(userInfo().gid);
  assert.equal(group.gid, userInfo().gid);
  assert.equal(typeof group.name, 'string');
  assert.ok(Array.isArray(group.members) && group.members.every(member => typeof member === 'string'));
  assert.equal(await files.groupInfo(4_000_000_123), null);
});

test('the environment is read and written byte for byte in the C library', { skip: !posix }, t => {
  withEnvironment(t, { LASM_ADAPTER_TEST: 'a=b', LASM_ADAPTER_EMPTY: '' });
  assert.deepEqual(files.environmentValue('LASM_ADAPTER_TEST'), Buffer.from('a=b'));
  assert.deepEqual(files.environmentValue('LASM_ADAPTER_EMPTY'), Buffer.alloc(0));
  assert.equal(process.env.LASM_ADAPTER_TEST, 'a=b');
  const entries = new Map(files.environmentEntries().map(([key, value]) => [key.toString(), value.toString()]));
  assert.equal(entries.get('LASM_ADAPTER_TEST'), 'a=b');
  assert.equal(entries.get('LASM_ADAPTER_EMPTY'), '');
  assert.equal(entries.get('PATH'), process.env.PATH);
  files.unsetEnvironment('LASM_ADAPTER_TEST');
  assert.equal(files.environmentValue('LASM_ADAPTER_TEST'), undefined);
  assert.equal(process.env.LASM_ADAPTER_TEST, undefined);
  assert.equal(files.environmentEntries().some(([key]) => key.toString() === 'LASM_ADAPTER_TEST'), false);
  assert.throws(() => files.setEnvironment('A=B', 'x'), crt(-E.EINVAL, { nativeMessage: false }));
  assert.throws(() => files.unsetEnvironment('A=B'), crt(-E.EINVAL, { nativeMessage: false }));
});

test('the temporary directory follows TMPDIR, TMP, TEMP and TEMPDIR, without a trailing slash', { skip: !posix }, t => {
  withEnvironment(t, { TMPDIR: undefined, TMP: undefined, TEMP: undefined, TEMPDIR: undefined });
  assert.deepEqual(files.temporaryDirectory(), Buffer.from('/tmp'));
  for (const [name, value, expected] of [['TEMPDIR', '/d/', '/d'], ['TEMP', '/c', '/c'], ['TMP', '/b//', '/b/'], ['TMPDIR', '/', '/']]) {
    files.setEnvironment(name, value);
    assert.deepEqual(files.temporaryDirectory(), Buffer.from(expected), name);
  }
  files.setEnvironment('TMPDIR', '');
  assert.deepEqual(files.temporaryDirectory(), Buffer.alloc(0));
  const limit = process.platform === 'darwin' ? 1024 : 4096;
  files.setEnvironment('TMPDIR', '/' + 'x'.repeat(limit - 1));
  assert.throws(() => files.temporaryDirectory(), crt(-E.ENOBUFS, { nativeMessage: false }));
  assert.equal(files.temporaryDirectory({ grow: true }).length, limit);
  files.setEnvironment('TMPDIR', '/' + 'x'.repeat(limit - 2));
  assert.equal(files.temporaryDirectory().length, limit - 1);
});

test('the home directory is HOME when present, even empty, else the passwd entry', { skip: !posix }, t => {
  withEnvironment(t, { HOME: '/home/someone' });
  assert.deepEqual(files.homeDirectory(), Buffer.from('/home/someone'));
  files.setEnvironment('HOME', '');
  assert.deepEqual(files.homeDirectory(), Buffer.alloc(0));
  files.unsetEnvironment('HOME');
  assert.deepEqual(files.homeDirectory(), Buffer.from(userInfo().homedir));
  files.setEnvironment('HOME', '/' + 'h'.repeat(5000));
  assert.throws(() => files.homeDirectory(), crt(-E.ENOBUFS, { nativeMessage: false }));
  assert.equal(files.homeDirectory({ grow: true }).length, 5001);
});

test('pipes, duplicates and raw descriptor writes keep their bytes', { skip: !posix }, async () => {
  const [readEnd, writeEnd] = files.pipe();
  try {
    assert.equal(await files.writeDescriptor(writeEnd, Buffer.from('raw')), 3);
    const bytes = Buffer.alloc(3);
    assert.equal(readSync(readEnd, bytes), 3);
    assert.equal(bytes.toString(), 'raw');
    const copy = files.duplicateDescriptor(writeEnd, 'w');
    assert.notEqual(copy.fd, writeEnd);
    files.unbuffer(copy);
    await files.write(copy, Buffer.from('dup'));
    assert.equal(readSync(readEnd, bytes), 3);
    assert.equal(bytes.toString(), 'dup');
    files.close(copy);
    assert.equal(files.nodeDescriptor(writeEnd), writeEnd);
    assert.ok(files.descriptorFlags(readEnd) >= 0);
  } finally { files.closeDescriptor(readEnd); files.closeDescriptor(writeEnd); }
  assert.throws(() => files.duplicateDescriptor(1_000_000, 'r'), crt(E.EBADF));
  assert.throws(() => files.descriptorFlags(1_000_000), crt(E.EBADF));
  await assert.rejects(files.writeDescriptor(1_000_000, Buffer.from('x')), crt(E.EBADF));
  assert.throws(() => files.openDescriptor(1_000_000, 'r'), crt(E.EBADF));
});

test('errors carry the C library name, number and message', { skip: !posix }, () => {
  assert.equal(files.errno('ENOENT'), E.ENOENT);
  assert.ok(crt(E.EACCES, { errorOrigin: 'crt' })(files.error(E.EACCES)));
  assert.ok(crt(E.ENOENT)(files.fromNodeError({ code: 'ENOENT' })));
  assert.ok(crt(E.EIO)(files.fromNodeError({ code: 'ERR_SOMETHING' })));
  assert.ok(crt(E.ENOMEM)(files.outOfMemory()));
});

test('Linux system files are read once, bounded and NUL-free', { skip: !linux }, () => {
  const cgroup = files.readSystemFile(Buffer.from('/proc/self/cgroup'), 1024);
  assert.equal(cgroup.toString(), readFileSync('/proc/self/cgroup', 'utf8').slice(0, 1023));
  assert.equal(files.readSystemFile(Buffer.from('/proc/self/cgroup'), 3).length, 2);
  assert.equal(files.readSystemFile(Buffer.from('/proc/self/cgroup'), 1).length, 0);
  assert.equal(files.readSystemFile(Buffer.from('/nonexistent/lasm'), 16), undefined);
  assert.equal(files.readSystemFile(Buffer.from('/proc/self'), 16), undefined);
  for (const capacity of [0, 4097, 1.5, '8']) assert.throws(() => files.readSystemFile(Buffer.from('/proc/self/cgroup'), capacity), RangeError);
  const memory = files.systemMemoryInfo();
  assert.equal(memory.total, BigInt(totalmem()));
  assert.ok(memory.free > 0n && memory.free <= memory.total);
  const page = files.pageSize();
  assert.ok(page >= 4096n && (page & (page - 1n)) === 0n);
  const [system, version, , architecture] = files.systemInformation().map(String);
  assert.deepEqual([system, files.systemInformation()[1].toString(), architecture], ['Linux', release(), machine()]);
  assert.ok(version.length > 0);
  const directory = files.openDirectory('/tmp');
  try { assert.equal(realpathSync(`/proc/self/fd/${directory}`), realpathSync('/tmp')); } finally { files.closeDescriptor(directory); }
  assert.throws(() => files.openDirectory('/nonexistent/lasm'), crt(E.ENOENT));
});

test('directory names come from the descriptor link, bounded by PATH_MAX', { skip: !linux }, async t => {
  const directory = scratch(t);
  const fd = openSync(directory, 'r');
  try {
    assert.deepEqual(await files.readDirectoryName(`/proc/self/fd/${fd}`), Buffer.from(directory));
    assert.deepEqual(await nativeFiles().readDirectoryName(`/proc/self/fd/${fd}`), Buffer.from(directory));
  } finally { closeSync(fd); }
  await assert.rejects(files.readDirectoryName(join(directory, 'missing')), crt(E.ENOENT));
  await assert.rejects(nativeFiles().readDirectoryName(join(directory, 'missing')), crt(E.ENOENT));
});

test('read-only regular files open on the host thread; other paths are left to the pool', { skip: !posix }, async t => {
  const directory = scratch(t), path = join(directory, 'regular');
  writeFileSync(path, 'abcdef');
  const host = nativeFiles();
  const file = host.openRegular(path);
  assert.deepEqual([file.type, file.regular, typeof file.fd], ['file', true, 'number']);
  assert.equal(files.descriptorFlags(file.fd) & fsConstants.O_NONBLOCK, 0);
  assert.equal(host.readRegular(file, 0).length, 0);
  assert.equal(host.readRegular(file, 4).toString(), 'abcd');
  assert.equal(host.readRegular(file, 10).toString(), 'ef');
  assert.equal(host.readRegular(file, 10).length, 0);
  writeFileSync(path, 'abcdefgh');
  assert.equal(host.readRegular(file, 10).toString(), 'gh');
  host.close(file);
  for (const other of [directory, join(directory, 'missing'), Buffer.from(path)]) assert.equal(host.openRegular(other), undefined);
  if (process.getuid?.() !== 0) {
    chmodSync(path, 0o200);
    assert.equal(host.openRegular(path), undefined);
  }
  const writer = await files.open(path, 1);
  assert.throws(() => host.readRegular(writer, 1), crt(E.EBADF));
  files.close(writer);
});

test('the pooled adapter runs each operation in a file worker with the same results', { skip: !posix }, async t => {
  const directory = scratch(t), pooled = nativeFiles();
  writeFileSync(join(directory, 'lines'), 'a\nb');
  const file = await pooled.open(join(directory, 'lines'), 3);
  assert.equal(typeof file.tail?.then, 'function');
  assert.equal((await pooled.getLine(file)).toString(), 'a\n');
  assert.equal((await pooled.read(file, 0)).length, 0);
  assert.equal((await pooled.read(file, 10)).toString(), 'b');
  await pooled.write(file, Buffer.alloc(0));
  await pooled.write(file, Buffer.from('c'));
  await pooled.flush(file);
  await pooled.rewind(file);
  assert.equal((await pooled.read(file, 10)).toString(), 'a\nbc');
  await pooled.rewind(file);
  await pooled.truncate(file);
  assert.equal(readFileSync(join(directory, 'lines'), 'utf8'), '');
  await pooled.closeAsync(file);
  assert.equal(file.stream, null);
  await pooled.closeAsync(file);
  const temporary = await pooled.createTemporary(join(directory, 'tmp.XXXXXX'));
  assert.ok(Buffer.isBuffer(temporary.path));
  assert.equal(typeof temporary.file.tail.then, 'function');
  pooled.close(temporary.file);
  const folder = await pooled.createTemporary(join(directory, 'dir.XXXXXX'), true);
  assert.ok(Buffer.isBuffer(folder.path));
  assert.equal(folder.file, undefined);
  assert.deepEqual((await pooled.readDirectory(folder.path.toString())), []);
  assert.deepEqual((await pooled.readDirectory(directory)).map(String).sort(), ['dir.' + folder.path.toString().slice(-6), 'lines', temporary.path.toString().split('/').pop()].sort());
  assert.deepEqual(await pooled.realPath(directory + '/.'), Buffer.from(directory));
  assert.equal(await pooled.removeFile(temporary.path.toString()), undefined);
  await assert.rejects(pooled.removeFile(temporary.path.toString()), { code: 'ENOENT', errno: -2 });
  assert.equal((await pooled.groupInfo(userInfo().gid)).gid, userInfo().gid);
  await pooled.checkDirectorySearch(directory);
  const [readEnd, writeEnd] = pooled.pipe();
  try {
    assert.equal(await pooled.writeDescriptor(writeEnd, Buffer.from('pipe')), 4);
    const bytes = Buffer.alloc(4); readSync(readEnd, bytes);
    assert.equal(bytes.toString(), 'pipe');
  } finally { pooled.closeDescriptor(readEnd); pooled.closeDescriptor(writeEnd); }
  assert.equal(await pooled.flushAll(), undefined);
  const ordinary = pooled.openRegular(join(directory, 'lines'));
  assert.equal(ordinary.regular, true);
  pooled.close(ordinary);
  assert.equal(pooled.openRegular(join(directory, 'missing')), undefined);
});
