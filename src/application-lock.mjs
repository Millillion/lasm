import { mkdir, lstat } from 'node:fs/promises';
import { dirname, resolve } from 'node:path';
import { nativeFiles } from './native-files.mjs';

/** OS-owned locks survive slow compiles and are released when a process dies.
 * Keep the empty lock file: unlinking it would split waiters across inodes.
 * Descriptors are close-on-exec and are never inherited by compiler children.
 */
export async function withApplicationLock(path, action, { onWait, exclusive = true, tryOnly = false, signal } = {}) {
  signal?.throwIfAborted();
  path = resolve(path);
  await mkdir(dirname(path), { recursive: true });
  try {
    if (!(await lstat(path)).isFile()) throw new Error(`Build lock must be an ordinary file: ${path}`);
  } catch (error) { if (error.code !== 'ENOENT') throw error; }
  const files = nativeFiles({ synchronous: true });
  const file = await files.open(path, 4, 0o600);
  try {
    let announced = false;
    while (!(await files.lock(file, exclusive, true))) {
      signal?.throwIfAborted();
      if (tryOnly) throw Object.assign(new Error(`Lasm cache is in use: ${path}. Wait for active builds to finish and retry.`), { code: 'LASM_LOCK_BUSY' });
      if (!announced) { onWait?.(); announced = true; }
      await new Promise(resolve => setTimeout(resolve, 50));
    }
    signal?.throwIfAborted();
    return await action();
  } finally { files.close(file); }
}
