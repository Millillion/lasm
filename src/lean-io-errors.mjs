// Private IO ABI policy for the pinned Lean releases. These messages come from
// libuv v1.48.0 include/uv.h, linked by the official Lean 4.34 Linux distribution.
// The native-library oracle verifies classification separately: that release
// was compiled against newer headers (ENOEXEC is classified but has no message
// in its linked libuv). Do not infer this policy from the JavaScript engine.
// The official Windows x64 release links libuv 1.52.1 and additionally supplies
// ENOEXEC's message. Both policies are checked against the native Lean library.
// libuv header SHA256: 67b062ea0de8a660a8907553a20acf918bfd02ba289e2f0a28f6c55a0a935795
/*
Copyright (c) 2015-present libuv project contributors.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to
deal in the Software without restriction, including without limitation the
rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
IN THE SOFTWARE.
*/
import { getSystemErrorMap } from 'node:util';

const messages = {
  "E2BIG": "argument list too long",
  "EACCES": "permission denied",
  "EADDRINUSE": "address already in use",
  "EADDRNOTAVAIL": "address not available",
  "EAFNOSUPPORT": "address family not supported",
  "EAGAIN": "resource temporarily unavailable",
  "EAI_ADDRFAMILY": "address family not supported",
  "EAI_AGAIN": "temporary failure",
  "EAI_BADFLAGS": "bad ai_flags value",
  "EAI_BADHINTS": "invalid value for hints",
  "EAI_CANCELED": "request canceled",
  "EAI_FAIL": "permanent failure",
  "EAI_FAMILY": "ai_family not supported",
  "EAI_MEMORY": "out of memory",
  "EAI_NODATA": "no address",
  "EAI_NONAME": "unknown node or service",
  "EAI_OVERFLOW": "argument buffer overflow",
  "EAI_PROTOCOL": "resolved protocol is unknown",
  "EAI_SERVICE": "service not available for socket type",
  "EAI_SOCKTYPE": "socket type not supported",
  "EALREADY": "connection already in progress",
  "EBADF": "bad file descriptor",
  "EBUSY": "resource busy or locked",
  "ECANCELED": "operation canceled",
  "ECHARSET": "invalid Unicode character",
  "ECONNABORTED": "software caused connection abort",
  "ECONNREFUSED": "connection refused",
  "ECONNRESET": "connection reset by peer",
  "EDESTADDRREQ": "destination address required",
  "EEXIST": "file already exists",
  "EFAULT": "bad address in system call argument",
  "EFBIG": "file too large",
  "EHOSTUNREACH": "host is unreachable",
  "EINTR": "interrupted system call",
  "EINVAL": "invalid argument",
  "EIO": "i/o error",
  "EISCONN": "socket is already connected",
  "EISDIR": "illegal operation on a directory",
  "ELOOP": "too many symbolic links encountered",
  "EMFILE": "too many open files",
  "EMSGSIZE": "message too long",
  "ENAMETOOLONG": "name too long",
  "ENETDOWN": "network is down",
  "ENETUNREACH": "network is unreachable",
  "ENFILE": "file table overflow",
  "ENOBUFS": "no buffer space available",
  "ENODEV": "no such device",
  "ENOENT": "no such file or directory",
  "ENOMEM": "not enough memory",
  "ENONET": "machine is not on the network",
  "ENOPROTOOPT": "protocol not available",
  "ENOSPC": "no space left on device",
  "ENOSYS": "function not implemented",
  "ENOTCONN": "socket is not connected",
  "ENOTDIR": "not a directory",
  "ENOTEMPTY": "directory not empty",
  "ENOTSOCK": "socket operation on non-socket",
  "ENOTSUP": "operation not supported on socket",
  "EOVERFLOW": "value too large for defined data type",
  "EPERM": "operation not permitted",
  "EPIPE": "broken pipe",
  "EPROTO": "protocol error",
  "EPROTONOSUPPORT": "protocol not supported",
  "EPROTOTYPE": "protocol wrong type for socket",
  "ERANGE": "result too large",
  "EROFS": "read-only file system",
  "ESHUTDOWN": "cannot send after transport endpoint shutdown",
  "ESPIPE": "invalid seek",
  "ESRCH": "no such process",
  "ETIMEDOUT": "connection timed out",
  "ETXTBSY": "text file is busy",
  "EXDEV": "cross-device link not permitted",
  "UNKNOWN": "unknown error",
  "EOF": "end of file",
  "ENXIO": "no such device or address",
  "EMLINK": "too many links",
  "EHOSTDOWN": "host is down",
  "EREMOTEIO": "remote I/O error",
  "ENOTTY": "inappropriate ioctl for device",
  "EFTYPE": "inappropriate file type or format",
  "EILSEQ": "illegal byte sequence",
  "ESOCKTNOSUPPORT": "socket type not supported",
  "ENODATA": "no data available",
  "EUNATCH": "protocol driver not attached"
};

// lean_crt_to_uv_err in the pinned Lean runtime, including C errno aliases.
const crtAliases = {
  EBADMSG: 'EPROTO', ECHILD: 'ESRCH', EDEADLK: 'EBUSY', EDEADLOCK: 'EBUSY',
  EDOM: 'EINVAL', EIDRM: 'EPIPE', EINPROGRESS: 'EISCONN', ENETRESET: 'ECONNRESET',
  ENOLCK: 'EAGAIN', ENOLINK: 'ECONNRESET', ENOSR: 'ENOBUFS', ENOSTR: 'EINVAL',
  ETIME: 'ETIMEDOUT', ENOMSG: 'ENODATA', EWOULDBLOCK: 'EAGAIN', EOPNOTSUPP: 'ENOTSUP',
};

// Exact cases of Lean 4.34's lean_crt_to_uv_err. Windows CRT errno values are
// distinct from libuv values: an unlisted errno is negated, not translated by
// its name. In particular ENOTSUP != EOPNOTSUPP and EWOULDBLOCK != EAGAIN there.
// EDEADLOCK is the CRT spelling alias of the handled EDEADLK value.
const windowsCrtCases = new Set(`
  E2BIG EACCES EADDRINUSE EADDRNOTAVAIL EAFNOSUPPORT EAGAIN EBADF EBUSY
  ECONNABORTED ECONNREFUSED ECONNRESET EDESTADDRREQ EEXIST EFAULT EFBIG
  EHOSTUNREACH EILSEQ EINTR EINVAL EIO EISCONN EISDIR ELOOP EMFILE EMLINK
  EMSGSIZE ENAMETOOLONG ENETDOWN ENETUNREACH ENFILE ENOBUFS ENODEV ENOENT
  ENOMEM ENOPROTOOPT ENOSPC ENOSYS ENOTCONN ENOTDIR ENOTEMPTY ENOTSOCK ENOTTY
  ENXIO EOPNOTSUPP EPERM EPIPE EPROTO EPROTONOSUPPORT EPROTOTYPE ERANGE EROFS
  ESPIPE ESRCH ETIMEDOUT ETXTBSY EXDEV ENODATA ENOMSG ENOEXEC EBADMSG ECHILD
  EDEADLK EDEADLOCK EDOM EIDRM EINPROGRESS ENETRESET ENOLCK ENOLINK ENOSR ENOSTR ETIME
`.trim().split(/\s+/));

export function checkLeanIOVersion(version) {
  if (version !== '4.32.0' && version !== '4.34.0')
    throw new Error('No verified IO error policy for Lean ' + version);
}

export function leanIOError(error, version) {
  if (version === '4.32.0' || error.leanUserError) return error;
  const uv = typeof error.errno === 'number' && error.errno < 0;
  if (!uv && error.errorOrigin !== 'crt') return error;
  let code = uv ? error.code : crtAliases[error.code] ?? error.code;
  if (!uv && process.platform === 'win32' && !windowsCrtCases.has(error.code))
    code = getSystemErrorMap().get(-error.errno)?.[0] ?? 'UNKNOWN';
  const uvNumber = uv ? error.errno : -error.errno;
  // UNKNOWN names the real UV_UNKNOWN sentinel only at -4094. Unknown errno
  // values instead include their signed number in libuv's diagnostic.
  const message = (process.platform === 'win32' && code === 'ENOEXEC' ? 'exec format error' : undefined)
    ?? (code !== 'UNKNOWN' || uvNumber === -4094 ? messages[code] : undefined)
    ?? `Unknown system error ${uvNumber}`;
  return { ...error, code, errno: uv ? -error.errno : error.errno, message, nativeMessage: true };
}
