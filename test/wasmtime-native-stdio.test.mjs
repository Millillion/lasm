// WASI preview1 errno numbers of host errors (src/wasmtime-native-stdio.mjs),
// as the pinned SDK's libc reads them, and the standard output descriptors.
import test from 'node:test';
import assert from 'node:assert/strict';
import { wasiErrno, writeNativeWasiStdio } from '../src/wasmtime-native-stdio.mjs';

// wasi_snapshot_preview1's errno enumeration (witx), in order from 1; 0 is success.
const preview1 = `2big acces addrinuse addrnotavail afnosupport again already badf badmsg busy canceled child connaborted connrefused connreset
  deadlk destaddrreq dom dquot exist fault fbig hostunreach idrm ilseq inprogress intr inval io isconn isdir loop mfile mlink msgsize multihop
  nametoolong netdown netreset netunreach nfile nobufs nodev noent noexec nolck nolink nomem nomsg noprotoopt nospc nosys notconn notdir notempty
  notrecoverable notsock notsup notty nxio overflow ownerdead perm pipe proto protonosupport prototype range rofs spipe srch stale timedout txtbsy xdev
  notcapable`.trim().split(/\s+/);

test('wasiErrno: every POSIX error code has its preview1 number', () => {
  assert.equal(preview1.length, 76);
  for (const [index, name] of preview1.entries()) assert.equal(wasiErrno({ code: 'E' + name.toUpperCase() }), index + 1, name);
  // Aliases with the same number on Linux.
  assert.equal(wasiErrno({ code: 'EWOULDBLOCK' }), 6);
  assert.equal(wasiErrno({ code: 'EOPNOTSUPP' }), 58);
  // Errors without a POSIX code are not errno values: they are rethrown as they are.
  for (const error of [new Error('plain'), Object.assign(new Error('x'), { code: 'ERR_ASSERTION' }), { code: 'ESUCCESS' }, { code: null }, { code: 'null' }, { code: 'E' }])
    assert.throws(() => wasiErrno(error), thrown => thrown === error);
});

test('writeNativeWasiStdio: only the two output descriptors, written natively', async () => {
  for (const fd of [0, 3, -1, '1']) await assert.rejects(writeNativeWasiStdio(fd, new Uint8Array(0)), { message: `Unimplemented WASI descriptor: ${fd}` });
  assert.deepEqual(await writeNativeWasiStdio(2, new Uint8Array(0)), { errno: 0, written: 0 });
  assert.deepEqual(await writeNativeWasiStdio(1, new Uint8Array(0)), { errno: 0, written: 0 });
});
