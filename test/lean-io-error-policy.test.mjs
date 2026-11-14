// The IO error policy of each pinned Lean release, checked in-process: the
// libuv/CRT translation (src/lean-io-errors.mjs) and Lean's IOError constructor
// families (encodeError in src/node-host.mjs), including the Windows branches,
// which run here by presenting process.platform as win32 for one call.
import test from 'node:test';
import assert from 'node:assert/strict';
import { getSystemErrorMap, getSystemErrorMessage } from 'node:util';
import { checkLeanIOVersion, leanAtLeast, leanIOError, receiveSizeError } from '../src/lean-io-errors.mjs';
import { encodeError, numbers, loopAlive, LeanExit } from '../src/node-host.mjs';
import { forAll } from './helpers/property.mjs';

const verified = ['4.32.0', '4.34.0', '4.34.1', '4.35.0', '4.36.0-rc2'];
function asPlatform(platform, action) {
  const original = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { ...original, value: platform });
  try { return action(); } finally { Object.defineProperty(process, 'platform', original); }
}
const fields = ({ bytes }) => ({ kind: Number(bytes.readBigUInt64LE()), errno: bytes.readBigInt64LE(8), message: bytes.subarray(16).toString() });

test('only the reviewed Lean releases have an IO error policy', () => {
  for (const version of verified) assert.equal(checkLeanIOVersion(version), undefined);
  for (const version of ['4.33.0', '4.34.2', '4.36.0', '4.35.0-rc1', '', '4.35'])
    assert.throws(() => checkLeanIOVersion(version), { message: `No verified IO error policy for Lean ${version}` });
  assert.throws(() => encodeError({ code: 'EIO' }, '4.36.0'), /No verified IO error policy for Lean 4\.36\.0/);
});

// Proposition: Lasm.Cli.Spec.lean_at_least_lexicographic
//   ∀ (a b : Nat × Nat × Nat) (rc : Option Nat),
//     (leanAtLeast (versionText a ++ (rc.map (s!"-rc{·}")).getD "") (versionText b) = true ↔ LexGe a b) ∧
//     leanAtLeast (versionText a ++ (rc.map (s!"-rc{·}")).getD "") (versionText a) = true
test('Lean version comparison is lexicographic on major.minor.patch and ignores a prerelease tag', () => {
  forAll(r => ({ a: [r.int(0, 5), r.int(0, 40), r.int(0, 3)], b: [r.int(0, 5), r.int(0, 40), r.int(0, 3)], rc: r.int(0, 2) }), ({ a, b, rc }) => {
    const expected = a[0] !== b[0] ? a[0] > b[0] : a[1] !== b[1] ? a[1] > b[1] : a[2] >= b[2];
    const version = a.join('.') + (rc ? `-rc${rc}` : '');
    assert.equal(leanAtLeast(version, b.join('.')), expected);
    assert.equal(leanAtLeast(version, a.join('.')), true);
  }, { runs: 500 });
  assert.equal(leanAtLeast('4.36.0-rc2', '4.36.0'), true);
  assert.equal(leanAtLeast('4.35.9', '4.36.0'), false);
  assert.equal(leanAtLeast('5.0.0', '4.36.0'), true);
  assert.equal(leanAtLeast('4.36.0', '4.36.1'), false);
});

test('a zero-size receive is invalidArgument EINVAL with its own message', () => {
  const error = receiveSizeError();
  assert.ok(error instanceof Error);
  assert.deepEqual({ ...error, message: error.message }, { code: 'EINVAL', errno: 22, nativeMessage: true, message: 'receive buffer size must be positive' });
  for (const version of verified.slice(1))
    assert.deepEqual(fields(encodeError(error, version)), { kind: 4, errno: 22n, message: 'receive buffer size must be positive' });
});

test('the 4.32.0 policy, Lean user errors and non-system errors pass through unchanged', () => {
  const uv = { code: 'ENOENT', errno: -2, message: 'x' };
  assert.equal(leanIOError(uv, '4.32.0'), uv);
  const user = { leanUserError: true, code: 'ENOENT', errno: -2, message: 'mine' };
  assert.equal(leanIOError(user, '4.34.1'), user);
  for (const plain of [{ code: 'ENOENT', errno: 2, message: 'p' }, { code: 'EIO', message: 'p' }, { code: 'EIO', errno: '-5' }, { errno: 0 }])
    assert.equal(leanIOError(plain, '4.34.0'), plain);
});

test('libuv errors take the pinned libuv message and a positive errno; other fields are kept', () => {
  for (const [code, errno, message] of [['ENOENT', -2, 'no such file or directory'], ['EACCES', -13, 'permission denied'],
    ['EAI_NONAME', -3008, 'unknown node or service'], ['EOF', -4095, 'end of file'], ['EUNATCH', -49, 'protocol driver not attached'],
    ['ECHARSET', -4080, 'invalid Unicode character'], ['E2BIG', -7, 'argument list too long'], ['ESHUTDOWN', -108, 'cannot send after transport endpoint shutdown']]) {
    const result = leanIOError({ code, errno, message: 'engine text', extra: 1 }, '4.34.1');
    assert.deepEqual(result, { code, errno: -errno, message, extra: 1, nativeMessage: true });
  }
  // A libuv code is never translated by the CRT alias table.
  assert.equal(leanIOError({ code: 'EWOULDBLOCK', errno: -11 }, '4.35.0').code, 'EWOULDBLOCK');
  assert.equal(leanIOError({ code: 'EWOULDBLOCK', errno: -11 }, '4.35.0').message, 'Unknown system error -11');
});

test('UNKNOWN names libuv\'s sentinel only at -4094; other unknown numbers are spelled out', () => {
  assert.equal(leanIOError({ code: 'UNKNOWN', errno: -4094 }, '4.34.0').message, 'unknown error');
  assert.equal(leanIOError({ code: 'UNKNOWN', errno: -4093 }, '4.34.0').message, 'Unknown system error -4093');
  assert.equal(leanIOError({ code: 'ENOTREAL', errno: -77 }, '4.34.0').message, 'Unknown system error -77');
  assert.equal(leanIOError({ code: 'UNKNOWN', errno: 4094, errorOrigin: 'crt' }, '4.34.0').message, 'unknown error');
});

test('CRT errors use Lean\'s errno aliases and keep the positive errno', () => {
  const aliases = { EBADMSG: 'EPROTO', ECHILD: 'ESRCH', EDEADLK: 'EBUSY', EDEADLOCK: 'EBUSY', EDOM: 'EINVAL', EIDRM: 'EPIPE',
    EINPROGRESS: 'EISCONN', ENETRESET: 'ECONNRESET', ENOLCK: 'EAGAIN', ENOLINK: 'ECONNRESET', ENOSR: 'ENOBUFS',
    ENOSTR: 'EINVAL', ETIME: 'ETIMEDOUT', ENOMSG: 'ENODATA', EWOULDBLOCK: 'EAGAIN', EOPNOTSUPP: 'ENOTSUP' };
  const messages = { EPROTO: 'protocol error', ESRCH: 'no such process', EBUSY: 'resource busy or locked', EINVAL: 'invalid argument',
    EPIPE: 'broken pipe', EISCONN: 'socket is already connected', ECONNRESET: 'connection reset by peer', EAGAIN: 'resource temporarily unavailable',
    ENOBUFS: 'no buffer space available', ETIMEDOUT: 'connection timed out', ENODATA: 'no data available', ENOTSUP: 'operation not supported on socket' };
  for (const [code, alias] of Object.entries(aliases)) {
    const result = asPlatform('linux', () => leanIOError({ code, errno: 42, errorOrigin: 'crt' }, '4.34.1'));
    assert.deepEqual(result, { code: alias, errno: 42, message: messages[alias], errorOrigin: 'crt', nativeMessage: true }, code);
  }
  assert.deepEqual(asPlatform('linux', () => leanIOError({ code: 'ENOENT', errno: 2, errorOrigin: 'crt' }, '4.34.0')),
    { code: 'ENOENT', errno: 2, message: 'no such file or directory', errorOrigin: 'crt', nativeMessage: true });
  assert.equal(asPlatform('linux', () => leanIOError({ code: 'ENOEXEC', errno: 8, errorOrigin: 'crt' }, '4.34.0')).message, 'Unknown system error -8');
});

test('Windows: unlisted CRT errnos are named by their number; ENOEXEC has its 1.52 message', () => {
  const name = errno => getSystemErrorMap().get(-errno)?.[0] ?? 'UNKNOWN';
  asPlatform('win32', () => {
    // Listed cases keep their name (and alias), as on POSIX.
    assert.equal(leanIOError({ code: 'EWOULDBLOCK', errno: 140, errorOrigin: 'crt' }, '4.34.0').code, name(140));
    assert.equal(leanIOError({ code: 'EDEADLOCK', errno: 36, errorOrigin: 'crt' }, '4.34.0').code, 'EBUSY');
    assert.equal(leanIOError({ code: 'ENOENT', errno: 2, errorOrigin: 'crt' }, '4.34.0').code, 'ENOENT');
    // Unlisted: the name of that negated number, or UNKNOWN.
    const unlisted = leanIOError({ code: 'ECANCELED', errno: 2, errorOrigin: 'crt' }, '4.34.0');
    assert.equal(unlisted.code, 'ENOENT');
    assert.equal(unlisted.message, 'no such file or directory');
    const unknown = leanIOError({ code: 'EOVERFLOW', errno: 132, errorOrigin: 'crt' }, '4.34.0');
    assert.equal(unknown.code, name(132));
    assert.equal(leanIOError({ code: 'EOVERFLOW', errno: 99999, errorOrigin: 'crt' }, '4.34.0').code, 'UNKNOWN');
    assert.equal(leanIOError({ code: 'EOVERFLOW', errno: 99999, errorOrigin: 'crt' }, '4.34.0').message, 'Unknown system error -99999');
    for (const error of [{ code: 'ENOEXEC', errno: 8, errorOrigin: 'crt' }, { code: 'ENOEXEC', errno: -4022 }])
      assert.equal(leanIOError(error, '4.34.0').message, 'exec format error');
    // libuv codes are not renamed on Windows.
    assert.equal(leanIOError({ code: 'ECANCELED', errno: -4081 }, '4.34.0').code, 'ECANCELED');
  });
  assert.equal(asPlatform('linux', () => leanIOError({ code: 'ENOEXEC', errno: -4022 }, '4.34.0')).message, 'Unknown system error -4022');
});

// The constructor family (lean_decode_io_error's tag) for each code.
const families = {
  1: ['ENOENT'], 2: ['EACCES', 'EPERM', 'EROFS', 'ECONNABORTED', 'EFBIG'], 3: ['EEXIST', 'EINPROGRESS', 'EISCONN'],
  4: ['EINVAL', 'EBADF', 'ELOOP', 'ENAMETOOLONG', 'EDESTADDRREQ', 'EDOM', 'EILSEQ', 'ENOEXEC', 'ENOSTR', 'ENOTCONN', 'ENOTSOCK', 'ERR_INVALID_ARG_VALUE'],
  5: ['EISDIR', 'ENOTDIR', 'EBADMSG'], 6: ['EBUSY', 'EADDRINUSE', 'EDEADLK', 'ETXTBSY'], 7: ['ETIMEDOUT', 'ETIME'],
  8: ['ENOSYS', 'ENOTSUP', 'EOPNOTSUPP', 'EADDRNOTAVAIL', 'EAFNOSUPPORT', 'ENODEV', 'ENOPROTOOPT', 'ERANGE', 'ESPIPE', 'EXDEV'],
  9: ['EPIPE', 'ECONNRESET', 'EIDRM', 'ENETDOWN', 'ENETRESET', 'ENOLINK'], 10: ['ECANCELED'],
  11: ['EMFILE', 'ENFILE', 'ENOSPC', 'E2BIG', 'EAGAIN', 'EMLINK', 'EMSGSIZE', 'ENOBUFS', 'ENOLCK', 'ENOMEM', 'ENOSR'],
  12: ['ENXIO', 'EHOSTUNREACH', 'ENETUNREACH', 'ECHILD', 'ECONNREFUSED', 'ENODATA', 'ENOMSG', 'ESRCH'],
  13: ['EIO'], 14: ['ENOTEMPTY'], 15: ['ENOTTY'], 16: ['EPROTO', 'EPROTONOSUPPORT', 'EPROTOTYPE'], 17: ['EINTR'],
};

test('every error code reaches its Lean IOError constructor family', () => {
  for (const [kind, codes] of Object.entries(families)) for (const code of codes)
    assert.deepEqual(fields(encodeError({ code, errno: 7, message: `m ${code}` })), { kind: Number(kind), errno: 7n, message: `m ${code}` }, code);
  for (const code of ['EHOSTDOWN', 'ENOTREAL', undefined, ''])
    assert.equal(fields(encodeError({ code, errno: 1, message: 'other' })).kind, 0);
  assert.deepEqual(fields(encodeError({ leanUserError: true, code: 'ENOENT', errno: 2, message: 'user' })), { kind: 18, errno: 2n, message: 'user' });
  assert.deepEqual(fields(encodeError(new Error('no code'))), { kind: 0, errno: 0n, message: 'no code' });
  assert.deepEqual(encodeError({ code: 'EIO', errno: 5, message: 'x' }).error, true);
});

test('engine messages for negative errnos come from the engine unless already native', () => {
  assert.equal(fields(encodeError({ code: 'ENOENT', errno: -2, message: 'engine' })).message, getSystemErrorMessage(-2));
  assert.equal(fields(encodeError({ code: 'ENOENT', errno: -2, message: 'kept', nativeMessage: true })).message, 'kept');
  assert.equal(fields(encodeError({ code: 'ENOENT', errno: 2, message: 'positive' })).message, 'positive');
  assert.equal(fields(encodeError({ code: 'ENOENT', errno: -2, message: 'engine' })).errno, -2n);
});

test('node:os SystemErrors are classified by their underlying libuv error', () => {
  const wrapped = { code: 'ERR_SYSTEM_ERROR', errno: undefined, message: 'A system error occurred', info: { code: 'ENOTDIR', errno: -20, message: 'm' } };
  assert.deepEqual(fields(encodeError(wrapped, '4.34.1')), { kind: 5, errno: 20n, message: 'not a directory' });
  // Without a numeric errno in info, the wrapper is classified as it is.
  assert.equal(fields(encodeError({ ...wrapped, info: { code: 'ENOTDIR', errno: '-20' } }, '4.34.1')).kind, 0);
  assert.equal(fields(encodeError({ ...wrapped, info: { errno: -20 } }, '4.34.1')).kind, 0);
});

// Proposition: Lasm.Cli.Spec.numbers_le64
//   ∀ values : List Int, (numbers values).data.toList = values.flatMap le64
test('numbers encodes each value as a little-endian UInt64, wrapping negatives', () => {
  forAll(r => r.array(r.int(0, 6), () => BigInt(r.int(-(2 ** 31), 2 ** 31)) * BigInt(r.int(1, 2 ** 20))), values => {
    const bytes = numbers(...values);
    assert.equal(bytes.length, 8 * values.length);
    values.forEach((value, i) => assert.equal(bytes.readBigUInt64LE(8 * i), BigInt.asUintN(64, value)));
  });
  assert.deepEqual([...numbers(-1)], Array(8).fill(255));
  assert.deepEqual([...numbers(true, 2)], [1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0]);
});

test('LeanExit carries the status and whether the exit is forced', () => {
  const exit = new LeanExit(3);
  assert.ok(exit instanceof Error);
  assert.deepEqual([exit.name, exit.code, exit.force, exit.message], ['LeanExit', 3, false, 'Lean exited with status 3']);
  assert.equal(new LeanExit(1, true).force, true);
});

test('the loop is alive exactly while a request runs or a handle is active', () => {
  assert.equal(loopAlive([]), false);
  assert.equal(loopAlive([], 1), true);
  for (const type of ['timer', 'signal']) {
    assert.equal(loopAlive([{ type, phase: 'running' }]), true);
    assert.equal(loopAlive([{ type, phase: 'initial' }]), false);
    assert.equal(loopAlive([{ type, phase: 'finished' }]), false);
  }
  assert.equal(loopAlive([{ type: 'file', phase: 'running' }]), false);
  assert.equal(loopAlive([{ type: 'tcp', server: { listening: true } }]), true);
  assert.equal(loopAlive([{ type: 'tcp', server: { listening: false } }]), false);
  assert.equal(loopAlive([{ type: 'tcp', acceptWait: {} }]), true);
  assert.equal(loopAlive([{ type: 'tcp', readWait: {} }]), true);
  assert.equal(loopAlive([{ type: 'tcp' }]), false);
  assert.equal(loopAlive([{ type: 'udp', waiter: {} }]), true);
  assert.equal(loopAlive([{ type: 'udp' }]), false);
  assert.equal(loopAlive([{ type: 'sleep', waiter: {}, acceptWait: {}, phase: 'running' }]), false);
  assert.equal(loopAlive([{ type: 'udp' }, { type: 'timer', phase: 'running' }]), true);
});

// libuv v1.48.0 include/uv.h, the messages Lean 4.34's runtime reports (Linux errno numbers).
const libuv148 = [
  ['E2BIG', -7, 'argument list too long'], ['EACCES', -13, 'permission denied'], ['EADDRINUSE', -98, 'address already in use'],
  ['EADDRNOTAVAIL', -99, 'address not available'], ['EAFNOSUPPORT', -97, 'address family not supported'],
  ['EAGAIN', -11, 'resource temporarily unavailable'], ['EAI_ADDRFAMILY', -3000, 'address family not supported'],
  ['EAI_AGAIN', -3001, 'temporary failure'], ['EAI_BADFLAGS', -3002, 'bad ai_flags value'],
  ['EAI_BADHINTS', -3013, 'invalid value for hints'], ['EAI_CANCELED', -3003, 'request canceled'],
  ['EAI_FAIL', -3004, 'permanent failure'], ['EAI_FAMILY', -3005, 'ai_family not supported'],
  ['EAI_MEMORY', -3006, 'out of memory'], ['EAI_NODATA', -3007, 'no address'], ['EAI_NONAME', -3008, 'unknown node or service'],
  ['EAI_OVERFLOW', -3009, 'argument buffer overflow'], ['EAI_PROTOCOL', -3014, 'resolved protocol is unknown'],
  ['EAI_SERVICE', -3010, 'service not available for socket type'], ['EAI_SOCKTYPE', -3011, 'socket type not supported'],
  ['EALREADY', -114, 'connection already in progress'], ['EBADF', -9, 'bad file descriptor'],
  ['EBUSY', -16, 'resource busy or locked'], ['ECANCELED', -125, 'operation canceled'],
  ['ECHARSET', -4080, 'invalid Unicode character'], ['ECONNABORTED', -103, 'software caused connection abort'],
  ['ECONNREFUSED', -111, 'connection refused'], ['ECONNRESET', -104, 'connection reset by peer'],
  ['EDESTADDRREQ', -89, 'destination address required'], ['EEXIST', -17, 'file already exists'],
  ['EFAULT', -14, 'bad address in system call argument'], ['EFBIG', -27, 'file too large'],
  ['EHOSTUNREACH', -113, 'host is unreachable'], ['EINTR', -4, 'interrupted system call'], ['EINVAL', -22, 'invalid argument'],
  ['EIO', -5, 'i/o error'], ['EISCONN', -106, 'socket is already connected'],
  ['EISDIR', -21, 'illegal operation on a directory'], ['ELOOP', -40, 'too many symbolic links encountered'],
  ['EMFILE', -24, 'too many open files'], ['EMSGSIZE', -90, 'message too long'], ['ENAMETOOLONG', -36, 'name too long'],
  ['ENETDOWN', -100, 'network is down'], ['ENETUNREACH', -101, 'network is unreachable'], ['ENFILE', -23, 'file table overflow'],
  ['ENOBUFS', -105, 'no buffer space available'], ['ENODEV', -19, 'no such device'], ['ENOENT', -2, 'no such file or directory'],
  ['ENOMEM', -12, 'not enough memory'], ['ENONET', -64, 'machine is not on the network'],
  ['ENOPROTOOPT', -92, 'protocol not available'], ['ENOSPC', -28, 'no space left on device'],
  ['ENOSYS', -38, 'function not implemented'], ['ENOTCONN', -107, 'socket is not connected'],
  ['ENOTDIR', -20, 'not a directory'], ['ENOTEMPTY', -39, 'directory not empty'],
  ['ENOTSOCK', -88, 'socket operation on non-socket'], ['ENOTSUP', -95, 'operation not supported on socket'],
  ['EOVERFLOW', -75, 'value too large for defined data type'], ['EPERM', -1, 'operation not permitted'],
  ['EPIPE', -32, 'broken pipe'], ['EPROTO', -71, 'protocol error'], ['EPROTONOSUPPORT', -93, 'protocol not supported'],
  ['EPROTOTYPE', -91, 'protocol wrong type for socket'], ['ERANGE', -34, 'result too large'],
  ['EROFS', -30, 'read-only file system'], ['ESHUTDOWN', -108, 'cannot send after transport endpoint shutdown'],
  ['ESPIPE', -29, 'invalid seek'], ['ESRCH', -3, 'no such process'], ['ETIMEDOUT', -110, 'connection timed out'],
  ['ETXTBSY', -26, 'text file is busy'], ['EXDEV', -18, 'cross-device link not permitted'], ['UNKNOWN', -4094, 'unknown error'],
  ['EOF', -4095, 'end of file'], ['ENXIO', -6, 'no such device or address'], ['EMLINK', -31, 'too many links'],
  ['EHOSTDOWN', -112, 'host is down'], ['EREMOTEIO', -121, 'remote I/O error'],
  ['ENOTTY', -25, 'inappropriate ioctl for device'], ['EFTYPE', -4028, 'inappropriate file type or format'],
  ['EILSEQ', -84, 'illegal byte sequence'], ['ESOCKTNOSUPPORT', -94, 'socket type not supported'],
  ['ENODATA', -61, 'no data available'], ['EUNATCH', -49, 'protocol driver not attached'],
];
test('every libuv 1.48 error code has its exact libuv message', () => {
  for (const [code, errno, message] of libuv148)
    assert.deepEqual(leanIOError({ code, errno }, '4.34.1'), { code, errno: -errno, message, nativeMessage: true }, code);
});
