// The native file adapter (src/native-files.mjs) against a scripted C library:
// the Windows CRT and kernel32 paths, macOS symbol and flag choices, and the
// POSIX failure paths a real libc rarely produces (uname, close, sysinfo,
// mkostemp, corrupt directory records, group buffer growth, getc lines).
import test from 'node:test';
import assert from 'node:assert/strict';
import { constants } from 'node:os';
import { constants as fsConstants } from 'node:fs';
import { tmpdir, homedir } from 'node:os';
import { installKoffiStandIn, standInKoffi, freshImport } from './helpers/koffi-stand-in.mjs';

installKoffiStandIn();
const source = new URL('../src/native-files.mjs', import.meta.url);
const E = constants.errno;

/** A fresh adapter for `platform` whose C functions are `functions` (others return 0). */
async function adapter(t, platform, functions = {}, { arch, missing } = {}) {
  const saved = ['platform', 'arch'].map(key => [key, Object.getOwnPropertyDescriptor(process, key)]);
  Object.defineProperty(process, 'platform', { ...saved[0][1], value: platform });
  if (arch) Object.defineProperty(process, 'arch', { ...saved[1][1], value: arch });
  t.after(() => { for (const [key, descriptor] of saved) Object.defineProperty(process, key, descriptor); });
  let koffi;
  const errnoCell = { value: 0 };
  koffi = standInKoffi({
    strerror: errno => `strerror ${errno}`,
    _errno: () => errnoCell,
    environ: { environ: true },
    ...functions,
    $decode: (pointer, ...rest) => functions.$decode ? functions.$decode(pointer, ...rest) : pointer === errnoCell ? errnoCell.value : 0,
  }, { errno: E, fallback: () => () => 0, missing });
  koffi.ffi.sizeof = () => 8;
  koffi.install();
  const { nativeFiles } = await freshImport(source);
  return { files: nativeFiles({ synchronous: true }), pooled: () => nativeFiles(), koffi, errnoCell, calls: name => koffi.calls.filter(([n]) => n === name).map(([, ...args]) => args) };
}
const crt = (errno, extra = {}) => error => error.errno === errno && error.message === `strerror ${Math.abs(errno)}`
  && error.code === Object.keys(E).find(key => E[key] === Math.abs(errno)) && Object.entries(extra).every(([key, value]) => error[key] === value);

test('Windows: the CRT and kernel32 are loaded', async t => {
  const { koffi } = await adapter(t, 'win32');
  assert.deepEqual(koffi.loads, ['ucrtbase.dll', 'kernel32.dll']);
});

test('Windows: opens use _wsopen_s with each mode\'s flags, binary and no-inherit', async t => {
  const { files, calls } = await adapter(t, 'win32', { _wsopen_s: (output) => { output[0] = 9; return 0; }, _fdopen: (fd, mode) => ({ fd, mode }) });
  for (const [mode, flags, letter] of [[0, 0, 'r'], [1, 0x301, 'w'], [2, 0x701, 'w'], [3, 2, 'r+'], [4, 0x109, 'a'], [5, 0x502, 'r+']]) {
    const file = await files.open('C:\\f', mode, 0o644);
    assert.deepEqual(file.stream, { fd: 9, mode: letter });
    const [, path, openFlags, sharing, permissions] = calls('_wsopen_s').at(-1);
    assert.deepEqual([path, openFlags, sharing, permissions], ['C:\\f', flags | 0x8000 | 0x80, 0x40, 0o600]);
  }
  await assert.rejects(files.open('C:\\f', 6), crt(E.EINVAL));
});

test('Windows: open errors are the returned errno; a failed fdopen closes the descriptor', async t => {
  const { files } = await adapter(t, 'win32', { _wsopen_s: (output) => { output[0] = 4; return E.ENOENT; } });
  await assert.rejects(files.open('C:\\missing', 0), crt(E.ENOENT, { errorOrigin: 'crt', nativeMessage: true }));
  const second = await adapter(t, 'win32', { _wsopen_s: output => { output[0] = 4; return 0; }, _fdopen: () => null });
  second.errnoCell.value = E.EMFILE;
  await assert.rejects(second.files.open('C:\\f', 0), crt(E.EMFILE));
  assert.deepEqual(second.calls('_close'), [[4]]);
});

test('Windows: locks use LockFileEx/UnlockFileEx and report Windows errors as Lean user errors', async t => {
  let lockResult = 1, lastError = 0;
  const { files, calls } = await adapter(t, 'win32', {
    _fileno: () => 3, _get_osfhandle: fd => 100 + fd,
    LockFileEx: () => lockResult, UnlockFileEx: () => lockResult, GetLastError: () => lastError,
  });
  const file = { stream: 's' };
  assert.equal(await files.lock(file, true), true);
  assert.deepEqual(calls('LockFileEx')[0].slice(0, 5), [103, 3, 0, 0xffffffff, 0xffffffff]);
  assert.equal(calls('LockFileEx')[0][5].length, 32);
  assert.equal(await files.lock(file, false, true), true);
  assert.equal(calls('LockFileEx')[1][1], 1);
  assert.equal(await files.lock(file, false, false, true), true);
  assert.deepEqual(calls('UnlockFileEx')[0].slice(0, 4), [103, 0, 0xffffffff, 0xffffffff]);
  lockResult = 0; lastError = 33;
  assert.equal(await files.lock(file, true, true), false);
  lastError = 158;
  assert.equal(await files.lock(file, true, false, true), true);
  lastError = 5;
  await assert.rejects(files.lock(file, true, true), error => error.message === '5' && error.leanUserError === true);
  await assert.rejects(files.lock(file, true, false, true), { message: '5' });
  // A blocking lock polls until it is free.
  lastError = 33;
  setTimeout(() => { lockResult = 1; }, 15);
  assert.equal(await files.lock(file, true), true);
});

test('Windows: terminals are console handles; duplicates are binary; pipes are binary and not inherited', async t => {
  let consoleMode = 1, setmode = 0, pipe = 0;
  const { files, calls, errnoCell } = await adapter(t, 'win32', {
    _get_osfhandle: fd => 200 + fd, GetConsoleMode: () => consoleMode, _dup: () => 12, _setmode: () => setmode,
    _fdopen: (fd, mode) => ({ fd, mode }), _pipe: fds => { fds[0] = 5; fds[1] = 6; return pipe; },
  });
  assert.equal(files.isTty({ fd: 1 }), true);
  assert.deepEqual(calls('GetConsoleMode')[0][0], 201);
  consoleMode = 0;
  assert.equal(files.isTty({ fd: 1 }), false);
  assert.deepEqual(files.duplicateDescriptor(1, 'w').stream, { fd: 12, mode: 'w' });
  assert.deepEqual(calls('_setmode'), [[12, 0x8000]]);
  setmode = -1; errnoCell.value = E.EBADF;
  assert.throws(() => files.duplicateDescriptor(1, 'w'), crt(E.EBADF));
  assert.deepEqual(calls('_close'), [[12]]);
  assert.deepEqual(files.pipe(), [5, 6]);
  assert.deepEqual(calls('_pipe')[0].slice(1), [4096, 0x8000 | 0x80]);
  assert.equal(calls('fcntl').length, 0);
  pipe = -1; errnoCell.value = E.EMFILE;
  assert.throws(() => files.pipe(), crt(E.EMFILE));
});

test('Windows: child descriptors are duplicated into the engine\'s CRT', async t => {
  let source = 77, duplicated = 1, owned = 41;
  const { files, calls, koffi } = await adapter(t, 'win32', {
    _get_osfhandle: () => source, GetCurrentProcess: () => -1, GetLastError: () => 6,
    DuplicateHandle: (process, handle, target, out) => { out[0] = 900; return duplicated; },
    uv_open_osfhandle: () => owned, CloseHandle: () => 1,
  });
  assert.equal(files.nodeDescriptor(3), 41);
  assert.deepEqual(calls('DuplicateHandle')[0].filter((_, i) => i !== 3), [-1, 77, -1, 0, 0, 2]);
  assert.deepEqual(calls('uv_open_osfhandle'), [[900]]);
  assert.ok(koffi.loads.includes(process.execPath));
  owned = -24;
  assert.throws(() => files.nodeDescriptor(3), error => error.message === 'uv_open_osfhandle failed' && error.code === 'EMFILE' && error.errno === -24);
  assert.deepEqual(calls('CloseHandle'), [[900]]);
  duplicated = 0;
  assert.throws(() => files.nodeDescriptor(3), error => error.message === 'DuplicateHandle failed (6)' && error.code === 'EBADF' && error.errno === -4083);
  source = -1;
  assert.throws(() => files.nodeDescriptor(3), crt(E.EBADF));
  // The handles are bound once.
  assert.equal(koffi.loads.filter(path => path === process.execPath).length, 1);
});

test('Windows: the environment, home and temporary directories come from the engine', async t => {
  const { files } = await adapter(t, 'win32');
  process.env.LASM_STAND_IN = 'v';
  t.after(() => { delete process.env.LASM_STAND_IN; });
  assert.deepEqual(files.environmentValue('LASM_STAND_IN'), Buffer.from('v'));
  assert.equal(files.environmentValue('LASM_STAND_IN_ABSENT'), undefined);
  assert.ok(files.environmentEntries().some(([key, value]) => key.toString() === 'LASM_STAND_IN' && value.toString() === 'v'));
  files.setEnvironment('LASM_STAND_IN', 'w');
  assert.equal(process.env.LASM_STAND_IN, 'w');
  files.unsetEnvironment('LASM_STAND_IN');
  assert.equal(process.env.LASM_STAND_IN, undefined);
  assert.deepEqual(files.homeDirectory(), Buffer.from(homedir()));
  assert.deepEqual(files.temporaryDirectory(), Buffer.from(tmpdir()));
});

test('Windows: POSIX-only operations are refused', async t => {
  const { files, pooled } = await adapter(t, 'win32');
  await assert.rejects(files.createTemporary('x'), crt(E.ENOSYS));
  await assert.rejects(files.groupInfo(0), error => error.errno === -E.ENOSYS);
  await assert.rejects(files.checkDirectorySearch('.'), { message: 'Directory search validation is POSIX-only' });
  await assert.rejects(files.readDirectory('.'), { message: 'Native directory scanning is POSIX-only' });
  await assert.rejects(files.realPath('.'), { message: 'Native realpath is POSIX-only' });
  await assert.rejects(files.removeFile('x'), { message: 'Native unlink is POSIX-only' });
  await assert.rejects(files.writeDescriptor(1, Buffer.from('x')), crt(E.ENOSYS));
  await assert.rejects(files.readDirectoryName('x'), crt(E.ENOSYS));
  assert.throws(() => files.descriptorFlags(1), crt(E.ENOSYS));
  assert.throws(() => files.openDirectory('.'), crt(E.ENOSYS));
  assert.throws(() => files.systemInformation(), crt(E.ENOSYS));
  assert.throws(() => files.readSystemFile(Buffer.from('/proc/x'), 8), { message: 'Linux system files are unavailable' });
  assert.throws(() => files.systemMemoryInfo(), { message: 'Linux sysinfo is unavailable' });
  assert.throws(() => files.pageSize(), { message: 'Linux page size is unavailable' });
  assert.equal(pooled().openRegular('C:\\file'), undefined);
});

test('Windows: unbuffering uses _IONBF 4; a failed truncation reports its returned errno', async t => {
  const { files, calls } = await adapter(t, 'win32', { setvbuf: () => 0, _ftelli64: () => 10, _chsize_s: () => E.EACCES });
  files.unbuffer({ stream: 's' });
  assert.deepEqual(calls('setvbuf'), [['s', null, 4, 0]]);
  await assert.rejects(files.truncate({ stream: 's', fd: 3 }), crt(E.EACCES));
  assert.deepEqual(calls('_chsize_s'), [[3, 10]]);
});

test('without getdelim, lines are read with fgetc up to and including the newline', async t => {
  let bytes = [...Buffer.from('ab\ncd')], error = 0, eof = 0;
  const { files, calls } = await adapter(t, 'win32', {
    fgetc: () => { const value = bytes.shift(); if (value === undefined) { eof = 1; return -1; } return value; },
    ferror: () => error, feof: () => eof, clearerr: () => { eof = 0; },
  });
  const file = { stream: 's' };
  assert.equal((await files.getLine(file)).toString(), 'ab\n');
  assert.equal((await files.getLine(file)).toString(), 'cd');
  assert.equal(calls('clearerr').length, 1);
  assert.equal((await files.getLine(file)).toString(), '');
  bytes = [...Buffer.from('x')]; error = 1;
  await assert.rejects(files.getLine(file), error => error.nativeMessage === true);
});

test('Linux: uname failures and malformed fields are errors', async t => {
  let status = 0;
  const { files, koffi } = await adapter(t, 'linux', { uname: bytes => { bytes.fill(0x41, 0, 65); return status; } });
  assert.throws(() => files.systemInformation(), { message: 'Invalid native uname field' });
  status = -1; koffi.state.errno = E.EFAULT;
  assert.throws(() => files.systemInformation(), crt(-E.EFAULT, { nativeMessage: false }));
});

test('Linux: system file reads retry EINTR, and close errors other than EINTR and EINPROGRESS are reported', async t => {
  let reads = [], closeErrno = 0;
  const koffiRef = {};
  const { files, koffi, calls } = await adapter(t, 'linux', {
    open: () => 7,
    read: (fd, bytes) => { const next = reads.shift(); if (next < 0) { koffiRef.koffi.state.errno = -next; return -1; } bytes.write(next); return next.length; },
    close: () => { if (closeErrno) { koffiRef.koffi.state.errno = closeErrno; return -1; } return 0; },
  });
  koffiRef.koffi = koffi;
  reads = [-E.EINTR, 'data'];
  assert.deepEqual(files.readSystemFile(Buffer.from('/proc/x'), 16), Buffer.from('data'));
  assert.deepEqual(calls('open')[0], [Buffer.from('/proc/x\0'), 0x80000]);
  assert.deepEqual(calls('read').map(([fd, , size]) => [fd, size]), [[7, 15], [7, 15]]);
  reads = [-E.EIO];
  assert.equal(files.readSystemFile(Buffer.from('/proc/x'), 16), undefined);
  for (const errno of [E.EINTR, E.EINPROGRESS]) {
    reads = ['ok']; closeErrno = errno;
    assert.deepEqual(files.readSystemFile(Buffer.from('/proc/x'), 16), Buffer.from('ok'));
  }
  reads = ['ok']; closeErrno = E.EIO;
  assert.throws(() => files.readSystemFile(Buffer.from('/proc/x'), 16), crt(E.EIO));
});

test('Linux: a failing sysinfo reports no memory', async t => {
  const { files } = await adapter(t, 'linux', { sysinfo: () => -1 });
  assert.deepEqual(files.systemMemoryInfo(), { total: 0n, free: 0n });
  const working = await adapter(t, 'linux', { sysinfo: bytes => { bytes.writeBigUInt64LE(10n, 32); bytes.writeBigUInt64LE(4n, 40); bytes.writeUInt32LE(4096, 104); return 0; }, getpagesize: () => 16384 });
  assert.deepEqual(working.files.systemMemoryInfo(), { total: 40960n, free: 16384n });
  assert.equal(working.files.pageSize(), 16384n);
});

test('Linux: temporary files fall back to mkstemp when mkostemp is missing or refuses its flags', async t => {
  const fill = bytes => { bytes.write('abcdef', bytes.indexOf(0) - 6); };
  for (const [name, functions, options] of [
    ['missing', { mkstemp: bytes => { fill(bytes); return 5; } }, { missing: ['mkostemp'] }],
    ['EINVAL', { mkostemp: () => -1, mkstemp: bytes => { fill(bytes); return 5; } }],
  ]) {
    const { files, calls, koffi } = await adapter(t, 'linux', { ...functions, fcntl: () => 0, fdopen: (fd, mode) => ({ fd, mode }) }, options);
    if (name === 'EINVAL') koffi.ffi.errno(E.EINVAL);
    const made = await files.createTemporary('/t/tmp.XXXXXX');
    assert.deepEqual(made.path, Buffer.from('/t/tmp.abcdef'), name);
    assert.deepEqual(made.file.stream, { fd: 5, mode: 'r+' });
    assert.deepEqual(calls('fcntl'), [[5, 2, 'int', 1]], name);
  }
  // A close-on-exec failure closes the new descriptor and is a libuv error.
  const failing = await adapter(t, 'linux', { mkostemp: () => -1, mkstemp: () => 5, fcntl: () => -1 });
  failing.koffi.ffi.errno(E.EINVAL);
  await assert.rejects(failing.files.createTemporary('/t/tmp.XXXXXX'), error => error.errno < 0 && error.nativeMessage === false);
  assert.deepEqual(failing.calls('close'), [[5]]);
  // mkostemp's own flag is O_CLOEXEC; macOS uses its own value.
  const linux = await adapter(t, 'linux', { mkostemp: () => 6, fdopen: () => 's' });
  await linux.files.createTemporary('/t/tmp.XXXXXX');
  assert.equal(linux.calls('mkostemp')[0][1], 0x80000);
  const darwin = await adapter(t, 'darwin', { mkostemp: () => 6, fdopen: () => 's' });
  await darwin.files.createTemporary('/t/tmp.XXXXXX');
  assert.equal(darwin.calls('mkostemp')[0][1], 0x1000000);
  // A failed fdopen closes the temporary descriptor.
  const unopened = await adapter(t, 'linux', { mkostemp: () => 6, fdopen: () => null });
  await assert.rejects(unopened.files.createTemporary('/t/tmp.XXXXXX'));
  assert.deepEqual(unopened.calls('close'), [[6]]);
});

test('Linux: corrupt directory records are errors and every record is freed', async t => {
  const records = [Buffer.alloc(24), Buffer.alloc(24)];
  records[0].writeUInt16LE(24, 16); records[0].write('ok\0', 19);
  records[1].writeUInt16LE(19, 16);
  const list = { list: true };
  const decode = (pointer, offset, type) => {
    if (pointer === list) return records[offset / 8];
    if (type === 'uint16_t') return pointer.readUInt16LE(offset);
    return 0;
  };
  const { files, calls } = await adapter(t, 'linux', { scandir: (path, output) => { output[0] = list; return 2; }, $decode: decode, $view: (pointer, size) => pointer.subarray(0, size) });
  await assert.rejects(files.readDirectory('/d'), { message: 'Invalid native directory record length' });
  assert.deepEqual(calls('free').map(([pointer]) => pointer), [records[0], records[1], list]);
  records[1].writeUInt16LE(24, 16); records[1].write('abcde', 19);
  await assert.rejects(files.readDirectory('/d'), { message: 'Unterminated native directory entry' });
});

test('macOS: directory records keep d_name at byte 21; Intel uses the INODE64 symbol', async t => {
  const record = Buffer.alloc(32); record.writeUInt16LE(32, 16); record.write('name\0', 21);
  const list = { list: true };
  const decode = (pointer, offset, type) => pointer === list ? record : type === 'uint16_t' ? pointer.readUInt16LE(offset) : 0;
  const view = (pointer, size) => pointer.subarray(0, size);
  for (const [arch, symbol] of [['x64', 'scandir$INODE64'], ['arm64', 'scandir']]) {
    const scan = (path, output) => { output[0] = list; return 1; };
    const { files, calls } = await adapter(t, 'darwin', { [symbol]: scan, $decode: decode, $view: view }, { arch });
    assert.deepEqual(await files.readDirectory('/d'), [Buffer.from('name')]);
    assert.equal(calls(symbol).length, 1);
  }
});

test('macOS: opens, regular opens and search checks use the Darwin constants', async t => {
  const { openSync, closeSync } = await import('node:fs');
  const real = openSync(new URL(import.meta.url), 'r');
  t.after(() => closeSync(real));
  const { files, pooled, calls } = await adapter(t, 'darwin', { open: () => real, fdopen: () => 's', faccessat: () => 0, fcntl: () => 0 });
  await files.open('/f', 0);
  assert.equal(calls('open')[0][1], fsConstants.O_RDONLY | 0x1000000);
  await files.checkDirectorySearch('/d');
  assert.deepEqual(calls('faccessat')[0], [-2, '/d', fsConstants.X_OK, 0x10]);
  const regular = pooled().openRegular(new URL(import.meta.url).pathname);
  assert.equal(regular.regular, true);
  assert.equal(calls('open')[1][1], fsConstants.O_RDONLY | fsConstants.O_NONBLOCK | fsConstants.O_NOCTTY | 0x1000000);
});

test('Linux: search checks use AT_FDCWD and AT_EACCESS', async t => {
  const { files, calls, koffi } = await adapter(t, 'linux', { faccessat: () => -1 });
  koffi.ffi.errno(E.EACCES);
  await assert.rejects(files.checkDirectorySearch('/d'), crt(E.EACCES));
  assert.deepEqual(calls('faccessat')[0], [-100, '/d', fsConstants.X_OK, 0x200]);
});

test('discarding output purges the stream before closing it, with each platform\'s purge', async t => {
  for (const [platform, purge] of [['linux', '__fpurge'], ['darwin', 'fpurge']]) {
    let result = 0;
    const { files, calls, koffi } = await adapter(t, platform, { [purge]: () => result });
    files.close({ stream: 's' }, true);
    assert.deepEqual([calls(purge), calls('fclose')], [[['s']], [['s']]]);
    result = -1; koffi.ffi.errno(E.EBADF);
    assert.throws(() => files.close({ stream: 't' }, true), crt(E.EBADF));
    await assert.rejects(files.closeAsync({ stream: 'u' }, true), crt(E.EBADF));
    assert.equal(calls('fclose').length, 1);
  }
});

test('group lookups grow their buffer on ERANGE and decode the members', async t => {
  let attempts = 0;
  const members = ['m1', 'm2'];
  const { files, calls } = await adapter(t, 'linux', {
    getgrgid_r: (gid, group, buffer, size, output) => {
      if (++attempts < 3) return E.ERANGE;
      Object.assign(group, { name: 'staff', gid: 20, members: 'list' }); output[0] = 'record'; return 0;
    },
    $decode: (pointer, offset, type) => pointer === 'list' ? members[offset / 8] ?? null : offset === 'str' ? pointer : 0,
  });
  assert.deepEqual(await files.groupInfo(-1), { name: 'staff', gid: 20, members: ['m1', 'm2'] });
  assert.deepEqual(calls('getgrgid_r').map(([gid, , , size]) => [gid, size]), [[4294967295, 1024], [4294967295, 2048], [4294967295, 4096]]);
  const failing = await adapter(t, 'linux', { getgrgid_r: () => E.EIO });
  await assert.rejects(failing.files.groupInfo(1), error => error.errno === -E.EIO && error.message === `strerror ${E.EIO}`);
});

test('exiting flushes C streams first; a forced exit skips them', async t => {
  const { files, calls } = await adapter(t, 'linux', { _Exit: () => {}, fflush: () => 0 });
  const exits = [];
  t.mock.method(process, 'exit', code => { exits.push(code); });
  await files.exitProcess(3, false);
  assert.deepEqual([exits, calls('fflush'), calls('_Exit')], [[3], [[null]], []]);
  await files.exitProcess(4, true);
  assert.deepEqual(calls('_Exit'), [[4]]);
});

test('a failing allocation for a read is out of memory', async t => {
  const { files, pooled } = await adapter(t, 'linux');
  t.mock.method(Buffer, 'allocUnsafe', () => { throw new RangeError('too large'); });
  await assert.rejects(files.read({ stream: 's' }, 10), crt(E.ENOMEM));
  assert.throws(() => pooled().readRegular({ stream: 's' }, 10), crt(E.ENOMEM));
});

test('Linux: environment entries are read from environ up to its null entry', async t => {
  const strings = { a: Buffer.from('A=1\0'), b: Buffer.from('NOEQUALS\0'), c: Buffer.from('B==2\0') };
  const table = ['a', 'b', 'c', null];
  const { files } = await adapter(t, 'linux', {
    strlen: pointer => strings[pointer].indexOf(0),
    $decode: (pointer, offset, type) => pointer?.environ && type === undefined ? 'table' : pointer === 'table' ? table[offset / 8] : 0,
    $view: (pointer, length) => strings[pointer].subarray(0, length),
  });
  // environ is a symbol: the stand-in decodes it to the table pointer.
  const entries = files.environmentEntries().map(([key, value]) => [key.toString(), value.toString()]);
  assert.deepEqual(entries, [['A', '1'], ['B', '=2']]);
});
