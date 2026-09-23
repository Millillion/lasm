import * as fs from 'node:fs/promises';
import { statSync } from 'node:fs';
import { resolve, isAbsolute, sep } from 'node:path';
import { nativeFiles } from './native-files.mjs';

// Linux directory descriptors preserve identity when a cwd is renamed or
// removed. Other platforms retain the existing pathname implementation until
// their native directory-handle behavior is implemented and validated.
export function createWorkingDirectory(cwd, propagate) {
  const descriptors = process.platform === 'linux';
  const state = path => ({ path, users: 0, retired: false,
    ...(descriptors ? { fd: nativeFiles().openDirectory(path) } : {}) });
  let current = state(descriptors ? cwd : resolve(cwd)), closed = false;
  const unavailable = () => Object.assign(new Error('Lean runtime disposed'), { code: 'ECANCELED' });
  const location = value => value.fd === undefined ? value.path : `/proc/self/fd/${value.fd}`;
  const release = value => {
    if (--value.users === 0 && value.retired && value.fd !== undefined) nativeFiles().closeDescriptor(value.fd);
  };
  const retire = value => {
    value.retired = true;
    if (value.users === 0 && value.fd !== undefined) nativeFiles().closeDescriptor(value.fd);
  };
  const path = (value, directory) => {
    // POSIX temporary-directory environment values can contain arbitrary
    // non-NUL bytes. Retain them while adding the instance's cwd anchor.
    if (value instanceof Uint8Array) {
      if (process.platform === 'win32') throw new TypeError('Byte paths are POSIX-only');
      const bytes = Buffer.from(value.buffer, value.byteOffset, value.byteLength);
      return !bytes.length || bytes[0] === 47 ? bytes
        : Buffer.concat([Buffer.from(location(directory) + sep), bytes]);
    }
    return !value || isAbsolute(value) ? value : location(directory) + sep + value;
  };
  return {
    retain() {
      if (closed) throw unavailable();
      current.users++; return current;
    },
    release,
    path,
    spawn(directory) {
      let inheritProcessCwd = false;
      if (directory.fd !== undefined) {
        const saved = statSync(location(directory), { bigint: true });
        const actual = statSync('/proc/self/cwd', { bigint: true });
        inheritProcessCwd = saved.dev === actual.dev && saved.ino === actual.ino;
      }
      return { directory: directory.path, directoryFd: directory.fd, inheritProcessCwd };
    },
    async name(directory) {
      if (!descriptors) return directory.path;
      try {
        const target = location(directory);
        if ((await fs.stat(target)).nlink === 0) throw nativeFiles().fromNodeError({ code: 'ENOENT' });
        const name = await fs.readlink(target);
        // A real filename can end in this suffix. Recheck the inode instead of
        // stripping text or misidentifying such a name as a removed directory.
        if (name.endsWith(' (deleted)') && (await fs.stat(target)).nlink === 0)
          throw nativeFiles().fromNodeError({ code: 'ENOENT' });
        if (Buffer.byteLength(name) >= 4096) throw nativeFiles().fromNodeError({ code: 'ERANGE' });
        return name;
      } catch (error) { throw error.nativeMessage ? error : nativeFiles().fromNodeError(error); }
    },
    async change(value, directory) {
      let next;
      try {
        const target = path(value, directory);
        if (descriptors) {
          next = state(target);
          await nativeFiles().checkDirectorySearch(location(next));
        } else {
          const metadata = await fs.stat(target);
          if (!metadata.isDirectory()) throw Object.assign(new Error('Working directory must be a directory'), { code: 'ENOTDIR' });
          if (!propagate && process.platform !== 'win32') await nativeFiles().checkDirectorySearch(target);
          next = state(await fs.realpath(target));
        }
        if (closed) throw unavailable();
        if (propagate) process.chdir(location(next));
        const previous = current;
        current = next; next = undefined;
        retire(previous);
      } catch (error) {
        if (process.platform === 'win32' || error.nativeMessage) throw error;
        throw nativeFiles().fromNodeError(error);
      } finally { if (next?.fd !== undefined) nativeFiles().closeDescriptor(next.fd); }
    },
    close() { if (!closed) { closed = true; retire(current); } },
  };
}
