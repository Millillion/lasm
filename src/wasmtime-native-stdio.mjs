import { nativeFiles } from './native-files.mjs';

// Preview1 errno numbers used by the pinned SDK, independent of host errno.
// Preserve actual errors and short writes from the inherited descriptors.
const names = [null, 'E2BIG', 'EACCES', 'EADDRINUSE', 'EADDRNOTAVAIL', 'EAFNOSUPPORT',
  'EAGAIN', 'EALREADY', 'EBADF', 'EBADMSG', 'EBUSY', 'ECANCELED', 'ECHILD',
  'ECONNABORTED', 'ECONNREFUSED', 'ECONNRESET', 'EDEADLK', 'EDESTADDRREQ', 'EDOM',
  'EDQUOT', 'EEXIST', 'EFAULT', 'EFBIG', 'EHOSTUNREACH', 'EIDRM', 'EILSEQ',
  'EINPROGRESS', 'EINTR', 'EINVAL', 'EIO', 'EISCONN', 'EISDIR', 'ELOOP', 'EMFILE',
  'EMLINK', 'EMSGSIZE', 'EMULTIHOP', 'ENAMETOOLONG', 'ENETDOWN', 'ENETRESET',
  'ENETUNREACH', 'ENFILE', 'ENOBUFS', 'ENODEV', 'ENOENT', 'ENOEXEC', 'ENOLCK',
  'ENOLINK', 'ENOMEM', 'ENOMSG', 'ENOPROTOOPT', 'ENOSPC', 'ENOSYS', 'ENOTCONN',
  'ENOTDIR', 'ENOTEMPTY', 'ENOTRECOVERABLE', 'ENOTSOCK', 'ENOTSUP', 'ENOTTY',
  'ENXIO', 'EOVERFLOW', 'EOWNERDEAD', 'EPERM', 'EPIPE', 'EPROTO', 'EPROTONOSUPPORT',
  'EPROTOTYPE', 'ERANGE', 'EROFS', 'ESPIPE', 'ESRCH', 'ESTALE', 'ETIMEDOUT',
  'ETXTBSY', 'EXDEV', 'ENOTCAPABLE'];
const errors = new Map(names.slice(1).map((name, index) => [name, index + 1]));
errors.set('EWOULDBLOCK', errors.get('EAGAIN'));
errors.set('EOPNOTSUPP', errors.get('ENOTSUP'));

export function wasiErrno(error) {
  const errno = errors.get(error.code);
  if (errno === undefined) throw error;
  return errno;
}

export async function writeNativeWasiStdio(fd, bytes) {
  if (fd !== 1 && fd !== 2) throw new Error(`Unimplemented WASI descriptor: ${fd}`);
  try { return { errno: 0, written: await nativeFiles().writeDescriptor(fd, bytes) }; }
  catch (error) {
    return { errno: wasiErrno(error), written: 0 };
  }
}
