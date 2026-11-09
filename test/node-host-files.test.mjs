// The Node host's IO.FS and process requests (operations 1–37) through
// `request`, as a Lean program issues them, with their result encodings and
// error constructors.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, rmSync, writeFileSync, readFileSync, mkdirSync, symlinkSync, statSync, existsSync, realpathSync, lstatSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { createNodeRuntimeHost, numbers } from '../src/node-host.mjs';

const posix = process.platform !== 'win32';
function setup(t, options = {}) {
  const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-host-files-')));
  const host = createNodeRuntimeHost({ cwd: directory, leanVersion: '4.34.1', ...options });
  t.after(() => { host.close(); rmSync(directory, { recursive: true, force: true }); });
  const raw = (op, id = 0, arg = 0n, bytes = Buffer.alloc(0), context) => host.request(op, id, BigInt(arg), Buffer.from(bytes), context);
  const ok = async (...args) => { const result = await raw(...args); assert.equal(result.error, false, result.bytes.subarray(16).toString()); return result.bytes; };
  const fails = async (...args) => {
    const result = await raw(...args);
    assert.equal(result.error, true);
    return { kind: Number(result.bytes.readBigUInt64LE()), errno: Number(result.bytes.readBigInt64LE(8)), message: result.bytes.subarray(16).toString() };
  };
  return { directory, host, raw, ok, fails };
}
const words = (bytes, n = bytes.length / 8) => Array.from({ length: n }, (_, i) => bytes.readBigInt64LE(8 * i));

test('main arguments must be Unicode strings without NUL', () => {
  for (const args of ['a', [1], ['a\0b'], ['\ud800']])
    assert.throws(() => createNodeRuntimeHost({ args }), { name: 'TypeError', message: 'Lean main arguments must be Unicode strings without NUL characters' });
  const host = createNodeRuntimeHost({ args: ['one', 'two words', ''] });
  try { assert.deepEqual(host.request(31, 0, 0n, Buffer.alloc(0)).bytes, Buffer.from('one\0two words\0\0')); }
  finally { host.close(); }
});

test('metadata reports times, size, links and the file type', { skip: !posix }, async t => {
  const { directory, ok, fails } = setup(t);
  writeFileSync(join(directory, 'file'), 'twelve bytes');
  mkdirSync(join(directory, 'dir'));
  symlinkSync('file', join(directory, 'link'));
  const stat = statSync(join(directory, 'file'), { bigint: true });
  const [atime, atimeNs, mtime, mtimeNs, size, nlink, type] = words(await ok(10, 0, 0, 'file'));
  assert.deepEqual([atime * 1_000_000_000n + atimeNs, mtime * 1_000_000_000n + mtimeNs], [stat.atimeNs, stat.mtimeNs]);
  assert.ok(atimeNs >= 0n && atimeNs < 1_000_000_000n);
  assert.deepEqual([size, nlink, type], [12n, 1n, 1n]);
  assert.equal(words(await ok(10, 0, 0, 'dir'))[6], 0n);
  assert.equal(words(await ok(10, 0, 0, 'link'))[6], 1n);
  assert.equal(words(await ok(11, 0, 0, 'link'))[6], 2n);
  assert.equal(words(await ok(11, 0, 0, 'link'))[4], BigInt(lstatSync(join(directory, 'link')).size));
  assert.equal(words(await ok(10, 0, 0, '/dev/null'))[6], 3n);
  assert.deepEqual(await fails(10, 0, 0, 'missing'), { kind: 1, errno: 2, message: 'no such file or directory' });
});

test('timestamps before the epoch split into seconds and a non-negative remainder', { skip: !posix }, async t => {
  const { directory, ok } = setup(t);
  writeFileSync(join(directory, 'old'), '');
  const { utimesSync } = await import('node:fs');
  utimesSync(join(directory, 'old'), new Date(-1250), new Date(-500));
  const [atime, atimeNs, mtime, mtimeNs] = words(await ok(10, 0, 0, 'old'));
  assert.deepEqual([atime, atimeNs, mtime, mtimeNs], [-2n, 750_000_000n, -1n, 500_000_000n]);
});

test('real paths, directory listings, creation and removal', { skip: !posix }, async t => {
  const { directory, ok, fails } = setup(t);
  mkdirSync(join(directory, 'target'));
  symlinkSync('target', join(directory, 'alias'));
  assert.equal((await ok(12, 0, 0, 'alias')).toString(), join(directory, 'target'));
  // Every realpath failure is noFileOrDirectory with errno 2 and no message.
  assert.deepEqual(await fails(12, 0, 0, 'missing'), { kind: 1, errno: 2, message: '' });
  writeFileSync(join(directory, 'target', 'a'), '');
  writeFileSync(join(directory, 'target', 'b'), '');
  assert.deepEqual((await ok(13, 0, 0, 'target')).toString().split('\0').sort(), ['', 'a', 'b']);
  assert.deepEqual(await fails(13, 0, 0, 'missing'), { kind: 1, errno: 2, message: 'no such file or directory' });
  assert.deepEqual(await ok(14, 0, 0, 'made'), Buffer.alloc(0));
  assert.ok(statSync(join(directory, 'made')).isDirectory());
  assert.deepEqual(await fails(14, 0, 0, 'made'), { kind: 3, errno: 17, message: 'file already exists' });
  assert.deepEqual(await ok(15, 0, 0, 'target/a'), Buffer.alloc(0));
  assert.equal(existsSync(join(directory, 'target', 'a')), false);
  assert.deepEqual(await fails(15, 0, 0, 'target/a'), { kind: 1, errno: 2, message: 'no such file or directory' });
  assert.deepEqual(await fails(16, 0, 0, 'target'), { kind: 14, errno: 39, message: 'directory not empty' });
  assert.deepEqual(await ok(16, 0, 0, 'made'), Buffer.alloc(0));
  assert.deepEqual(await fails(16, 0, 0, 'made'), { kind: 1, errno: 2, message: 'no such file or directory' });
});

test('rename and hard links split their two paths at the given length', { skip: !posix }, async t => {
  const { directory, ok, fails } = setup(t);
  writeFileSync(join(directory, 'from'), 'x');
  const pair = (a, b) => Buffer.from(`${a}\0${b}`);
  assert.deepEqual(await ok(17, 0, 4, pair('from', 'to')), Buffer.alloc(0));
  assert.equal(readFileSync(join(directory, 'to'), 'utf8'), 'x');
  assert.equal(existsSync(join(directory, 'from')), false);
  assert.deepEqual(await fails(17, 0, 4, pair('from', 'to')), { kind: 1, errno: 2, message: 'no such file or directory' });
  assert.deepEqual(await ok(18, 0, 2, pair('to', 'hard')), Buffer.alloc(0));
  assert.equal(statSync(join(directory, 'hard')).nlink, 2);
  const linked = await fails(18, 0, 2, pair('to', 'hard'));
  assert.equal(linked.kind, 3);
});

test('permissions are set from the argument', { skip: !posix }, async t => {
  const { directory, ok, fails } = setup(t);
  writeFileSync(join(directory, 'file'), '');
  assert.deepEqual(await ok(19, 0, 0o640, 'file'), Buffer.alloc(0));
  assert.equal(statSync(join(directory, 'file')).mode & 0o777, 0o640);
  assert.equal((await fails(19, 0, 0o640, 'missing')).kind, 1);
});

test('environment lookups, the application path and clocks', async t => {
  const { ok, host } = setup(t, { appPath: '/opt/app.mjs' });
  process.env.LASM_HOST_FILES = 'value';
  t.after(() => { delete process.env.LASM_HOST_FILES; });
  if (posix) {
    const { nativeFiles } = await import('../src/native-files.mjs');
    nativeFiles().setEnvironment('LASM_HOST_FILES', 'value');
  }
  assert.deepEqual(await ok(22, 0, 0, 'LASM_HOST_FILES'), Buffer.from('\x01value'));
  assert.deepEqual(await ok(22, 0, 0, 'LASM_HOST_FILES_ABSENT'), Buffer.alloc(0));
  assert.deepEqual(await ok(22, 0, 0, Buffer.from('LASM_HOST_FILES\0x')), Buffer.alloc(0));
  assert.deepEqual(await ok(24), Buffer.from('/opt/app.mjs'));
  const before = process.hrtime.bigint();
  const ms = (await ok(25)).readBigUInt64LE(), ns = (await ok(26)).readBigUInt64LE();
  const after = process.hrtime.bigint();
  assert.ok(ms >= before / 1_000_000n && ms <= after / 1_000_000n);
  assert.ok(ns >= before && ns <= after);
  assert.equal((await ok(28, 0, 37)).length, 37);
  assert.equal(host.platform, process.platform === 'win32' ? 1 : process.platform === 'darwin' ? 2 : 0);
});

test('the current directory can be read and changed; a NUL ends a POSIX path', { skip: !posix }, async t => {
  const { directory, ok, fails } = setup(t);
  mkdirSync(join(directory, 'sub'));
  assert.equal((await ok(23)).toString(), directory);
  assert.deepEqual(await ok(29, 0, 0, Buffer.from('sub\0ignored')), Buffer.alloc(0));
  assert.equal((await ok(23)).toString(), join(directory, 'sub'));
  assert.equal((await fails(29, 0, 0, 'missing')).kind, 1);
  assert.deepEqual(await fails(29, 0, 0, Buffer.from([0xff])), { kind: 0, errno: 0, message: 'The encoded data was not valid for encoding utf-8' });
});

test('paths with NUL bytes are invalid arguments with Lean\'s message', { skip: !posix }, async t => {
  const { fails } = setup(t);
  for (const op of [10, 11, 13, 14, 15, 16, 19])
    assert.deepEqual(await fails(op, 0, 0, Buffer.from('bad\0path')), { kind: 4, errno: 22, message: 'string contains NUL bytes' }, String(op));
});

test('the thread ID comes from the request context or the native thread', async t => {
  const { ok } = setup(t);
  assert.equal((await ok(37, 0, 0, '', { nativeThreadId: 4242 })).readBigUInt64LE(), 4242n);
  assert.ok((await ok(37)).readBigUInt64LE() > 0n);
});

test('out of memory, unknown operations, bad handles and a disposed runtime are errors', async t => {
  const { raw, fails, host } = setup(t);
  assert.deepEqual(await fails(36), { kind: 11, errno: 12, message: 'not enough memory' });
  assert.deepEqual(await fails(38), { kind: 8, errno: 0, message: 'Unsupported Lean runtime operation 38' });
  assert.deepEqual(await fails(99), { kind: 8, errno: 0, message: 'Unsupported Lean async operation 99' });
  assert.deepEqual(await fails(2, 12345, 1), { kind: 4, errno: 0, message: 'Invalid or closed resource' });
  assert.equal((await raw(9, 0)).bytes.readBigUInt64LE() <= 1n, true);
  assert.deepEqual(host.stats(), { resources: 0 });
  host.release(0); host.release(2); host.release(99999);
  host.close();
  assert.deepEqual(await fails(25), { kind: 10, errno: 0, message: 'Lean runtime disposed' });
  assert.throws(() => host.request(90, 777), { message: 'Unknown asynchronous host request' });
});

test('Lean 4.35 reports its loop as always alive', async () => {
  const old = createNodeRuntimeHost({ leanVersion: '4.35.0' });
  try { assert.equal(old.request(145, 0, 0n, Buffer.alloc(0)).bytes.readBigUInt64LE(), 1n); } finally { old.close(); }
});

test('operation numbers route to their subsystems at each range boundary', async t => {
  const { raw } = setup(t);
  const message = async op => { const result = await raw(op); return result.error ? result.bytes.subarray(16).toString() : 'ok'; };
  assert.deepEqual((await raw(192)).bytes, Buffer.from([1]));
  assert.equal(await message(190), 'malformed fetch request');
  assert.equal(await message(199), 'Unsupported fetch operation 199');
  assert.equal(await message(189), 'Unsupported Lean async operation 189');
  assert.equal(await message(220), 'Unsupported Lean async operation 220');
  assert.notEqual(await message(200), 'Unsupported Lean async operation 200');
  assert.notEqual(await message(219), 'Unsupported Lean async operation 219');
  assert.equal(await message(165), 'Unsupported Lean async operation 165');
  assert.equal(await message(164), 'Invalid or closed resource');
  assert.equal(await message(160), 'ok');
  assert.equal(await message(159), 'Unsupported Lean async operation 159');
  assert.equal(await message(146), 'Unsupported Lean async operation 146');
  assert.equal((await raw(144)).error, false);
  assert.equal((await raw(120)).bytes.toString(), process.title);
  assert.equal(await message(119), 'Unsupported Lean async operation 119');
  assert.equal(await message(99), 'Unsupported Lean async operation 99');
  assert.equal(await message(100), 'ok');
  assert.equal(await message(114), 'Invalid or closed resource');
  assert.equal(await message(79), 'Unsupported Lean async operation 79');
  assert.equal(await message(85), 'ok');
  assert.equal(await message(89), 'Invalid or closed resource');
  assert.equal(await message(39), 'Unsupported Lean runtime operation 39');
  assert.equal(await message(40), 'ok');
});

test('standard output and error go to the embedder\'s sinks', async t => {
  const out = [], err = [];
  const { ok, host } = setup(t, { stdio: { stdout: async bytes => out.push(Buffer.from(bytes).toString()), stderr: async bytes => err.push(Buffer.from(bytes).toString()) } });
  await ok(3, 1, 0n, 'to out');
  await ok(3, 2, 0n, 'to err');
  assert.deepEqual([out, err], [['to out'], ['to err']]);
  assert.equal((await host.flushStdIO()).length, 2);
});

test('a resource that arrives after disposal is closed and the request cancelled', { skip: !posix }, async t => {
  const { directory, raw, host } = setup(t);
  const pending = raw(1, 0, 1, 'created');
  host.close();
  const result = await pending;
  assert.equal(result.error, true);
  assert.deepEqual([Number(result.bytes.readBigUInt64LE()), result.bytes.subarray(16).toString()], [10, 'Lean runtime disposed']);
  assert.ok(existsSync(join(directory, 'created')));
  host.close();
});

test('temporary files use the C library\'s template under the temporary directory, with or without its slash', { skip: process.platform !== 'linux' }, async t => {
  const { directory, ok, fails } = setup(t);
  const { nativeFiles } = await import('../src/native-files.mjs');
  const previous = process.env.TMPDIR;
  t.after(() => previous === undefined ? nativeFiles().unsetEnvironment('TMPDIR') : nativeFiles().setEnvironment('TMPDIR', previous));
  for (const base of [directory, directory + '/']) {
    nativeFiles().setEnvironment('TMPDIR', base);
    const name = (await ok(21)).toString();
    assert.match(name, new RegExp(`^${directory}/tmp\\.[A-Za-z0-9]{8}$`));
    assert.ok(statSync(name).isDirectory());
  }
  nativeFiles().setEnvironment('TMPDIR', '');
  assert.deepEqual(await fails(20), { kind: 1, errno: 2, message: 'no such file or directory' });
});

test('file handles rewind, truncate, lock and report terminals', { skip: !posix }, async t => {
  const { directory, ok } = setup(t);
  writeFileSync(join(directory, 'data'), 'abcdef');
  const id = Number((await ok(1, 0, 3, 'data')).readBigUInt64LE());
  const other = Number((await ok(1, 0, 0, 'data')).readBigUInt64LE());
  assert.equal((await ok(2, id, 3)).toString(), 'abc');
  assert.deepEqual(await ok(5, id), Buffer.alloc(0));
  assert.equal((await ok(2, id, 2)).toString(), 'ab');
  assert.deepEqual(await ok(6, id), Buffer.alloc(0));
  assert.equal(readFileSync(join(directory, 'data'), 'utf8'), 'ab');
  assert.deepEqual(await ok(4, id), Buffer.alloc(0));
  // 32 locks (blocking), 33 tries, 34 unlocks; n selects an exclusive lock.
  assert.deepEqual(await ok(32, id, 1), numbers(1));
  assert.deepEqual(await ok(33, other, 0), numbers(0));
  assert.deepEqual(await ok(34, id, 0), numbers(1));
  assert.deepEqual(await ok(33, other, 0), numbers(1));
  assert.deepEqual(await ok(33, id, 1), numbers(0));
  assert.deepEqual(await ok(33, id, 0), numbers(1));
  assert.deepEqual(await ok(9, id), numbers(0));
});

test('Windows: paths, listings, removal, renames and temporary names follow the Windows host', { skip: process.platform !== 'linux' }, async t => {
  const { directory, ok, raw } = setup(t);
  mkdirSync(join(directory, 'sub'));
  writeFileSync(join(directory, 'sub', 'x'), '');
  const saved = Object.getOwnPropertyDescriptor(process, 'platform');
  const windows = async action => {
    Object.defineProperty(process, 'platform', { ...saved, value: 'win32' });
    try { return await action(); } finally { Object.defineProperty(process, 'platform', saved); }
  };
  assert.equal((await windows(() => ok(12, 0, 0, 'sub'))).toString(), join(directory, 'sub'));
  assert.deepEqual((await windows(() => ok(13, 0, 0, 'sub'))).toString(), 'x\0');
  assert.deepEqual(await windows(() => ok(15, 0, 0, 'sub/x')), Buffer.alloc(0));
  // Windows reports a failed rename with the engine's error, not the C library's.
  const renamed = await windows(() => raw(17, 0, 7, Buffer.from('missing\0other')));
  assert.equal(renamed.error, true);
  assert.equal(Number(renamed.bytes.readBigUInt64LE()), 1);
  const file = await windows(() => ok(20));
  const name = file.subarray(8).toString();
  assert.match(name, /\/lean-[0-9a-f]{32}$/);
  assert.ok(existsSync(name));
  rmSync(name);
  const folder = (await windows(() => ok(21))).toString();
  assert.match(folder, /\/lean-\w{6}$/);
  rmSync(folder, { recursive: true });
  // setCurrentDir keeps a NUL on Windows, where it is an invalid argument.
  const nul = await windows(() => raw(29, 0, 0, Buffer.from('sub\0x')));
  assert.deepEqual([Number(nul.bytes.readBigUInt64LE()), nul.bytes.subarray(16).toString()], [4, 'string contains NUL bytes']);
});

test('processExit asks the C library to exit, forced when the id says so', async t => {
  const { nativeFiles } = await import('../src/native-files.mjs');
  const exits = [];
  t.mock.method(nativeFiles(), 'exitProcess', (code, force) => { exits.push([code, force]); return Buffer.alloc(0); });
  const { raw } = setup(t, { processExit: true });
  await raw(30, 0, 3);
  await raw(30, 1, 4);
  assert.deepEqual(exits, [[3, false], [4, true]]);
});
