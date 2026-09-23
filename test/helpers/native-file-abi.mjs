import assert from 'node:assert/strict';
import { mkdtempSync, rmSync, statSync, constants } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import koffi from 'koffi';
import { nativeFiles } from '../../src/native-files.mjs';
import { nativeTcp } from '../../src/native-tcp.mjs';

export const posix = process.platform !== 'win32';
const libc = posix ? koffi.load(process.platform === 'darwin' ? '/usr/lib/libSystem.B.dylib' : null) : null;
const descriptorFlags = libc?.func('int fcntl(int fd, int command, ...)');

export async function verifyFileCreation(synchronous) {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-file-abi-'));
  try {
    const files = nativeFiles({ synchronous });
    for (const mode of [1, 2, 4, 5]) for (const permissions of [0o600, 0o640, 0o666]) {
      const path = join(directory, `mode-${mode}-permissions-${permissions.toString(8)}-λ`);
      const file = await files.open(path, mode, permissions);
      try {
        if (posix) {
          assert.equal(statSync(path).mode & 0o777, permissions & ~process.umask(), path);
          assert.equal(descriptorFlags(file.fd, 1 /* F_GETFD */) & 1, 1, 'created file is close-on-exec');
        }
        await files.write(file, Buffer.from('first\n'));
      } finally { await files.closeAsync(file); }
      const reader = await files.open(path, 0);
      try { assert.equal((await files.read(reader, 32)).toString(), 'first\n'); }
      finally { await files.closeAsync(reader); }
      const appender = await files.open(path, 4);
      try { await files.write(appender, Buffer.from('second\n')); }
      finally { await files.closeAsync(appender); }
      const reopened = await files.open(path, 0);
      try { assert.equal((await files.read(reopened, 32)).toString(), 'first\nsecond\n'); }
      finally { await files.closeAsync(reopened); }
      if (mode === 2 || mode === 5) await assert.rejects(files.open(path, mode, permissions), { code: 'EEXIST' });
    }
  } finally { rmSync(directory, { recursive: true, force: true }); }
}

export function verifyDescriptorInheritance() {
  const files = nativeFiles({ synchronous: true });
  const descriptors = files.pipe();
  try {
    for (const fd of descriptors) assert.equal(descriptorFlags(fd, 1) & 1, 1, 'pipe FD_CLOEXEC');
    const duplicate = files.duplicateDescriptor(descriptors[1], 'w');
    try { assert.equal(descriptorFlags(duplicate.fd, 1) & 1, 1, 'duplicate FD_CLOEXEC'); }
    finally { files.close(duplicate); }
  } finally { for (const fd of descriptors) files.closeDescriptor(fd); }
}

export function verifySocketFlags() {
  const socket = nativeTcp().create({ host: '127.0.0.1', port: 0 }, {});
  try {
    assert.equal(descriptorFlags(socket.fd, 1) & 1, 1, 'socket FD_CLOEXEC');
    assert.equal(descriptorFlags(socket.fd, 3) & constants.O_NONBLOCK, constants.O_NONBLOCK);
    socket.bind({ host: '127.0.0.1', port: 0 });
    assert.equal(socket.name().address, '127.0.0.1');
    assert.ok(socket.name().port > 0);
  } finally { socket.close(); }
}
