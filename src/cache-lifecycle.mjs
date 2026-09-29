import { lstat, mkdir, rm, statfs } from 'node:fs/promises';
import { join, resolve } from 'node:path';
import { withApplicationLock } from './application-lock.mjs';
import { setTimeout as delay } from 'node:timers/promises';

/** Builds hold a shared lease until compiler children finish. Explicit repair
 * takes the exclusive lease and never removes files from an active new build.
 * Persistent empty lock files must never be deleted or aged out.
 */
export function withCacheLease(cache, action, options = {}) {
  return withApplicationLock(join(resolve(cache), '.locks/usage.lock'), action, { exclusive: false, ...options });
}

export function withCacheEntryLock(cache, kind, identity, action, options = {}) {
  if (!['artifacts', 'derived'].includes(kind) || !/^[a-f0-9]{64}$/.test(identity)) throw new Error('Invalid managed cache identity');
  return withCacheLease(cache, () => withApplicationLock(join(resolve(cache), '.locks', `${kind}-${identity}.lock`), action, options), options);
}

/** Only deterministic staging belonging to the held entry lock is reclaimed.
 * Legacy random staging lacks this ownership proof and is deliberately left.
 * Symlinks and unexpected entry types are never recursively traversed.
 */
export async function removeOwnedStaging(path, { log = console.error, remove = rm } = {}) {
  try {
    const entry = await lstat(path);
    if (!entry.isDirectory()) throw new Error('staging is not an ordinary directory');
    await removeDirectoryWithRetries(path, { remove });
    return true;
  } catch (error) {
    if (error.code === 'ENOENT') return true;
    log(`[lasm] Temporary cleanup pending at ${path}: ${error.code ?? error.message}. `
      + 'Completed tools remain valid. Close programs holding these files and retry; use lasm cache repair when no build is active.');
    return false;
  }
}

/** Node's recursive rm applies maxRetries again at each directory depth. A
 * permanently locked nested file can therefore multiply delays dramatically.
 * Retry the whole removal at one level only: at most 5.5 seconds of backoff.
 */
export async function removeDirectoryWithRetries(path, { remove = rm, sleep = delay } = {}) {
  for (let retry = 0; ; retry++) {
    try { return await remove(path, { recursive: true, force: true, maxRetries: 0 }); }
    catch (error) {
      if (retry === 10 || !['EBUSY', 'EMFILE', 'ENFILE', 'ENOTEMPTY', 'EPERM'].includes(error.code)) throw error;
      await sleep((retry + 1) * 100);
    }
  }
}

export async function createOwnedStaging(path) {
  try { await mkdir(path, { mode: 0o700 }); }
  catch (cause) {
    if (cause.code !== 'EEXIST') throw cause;
    throw new Error(`Cannot reuse unfinished staging ${path}. Close programs holding these files and run lasm cache repair.`, { cause });
  }
  return path;
}

export function storageDiagnostic(error, cache) {
  if (!['ENOSPC', 'EDQUOT', 'EACCES', 'EPERM', 'EROFS'].includes(error?.code)) return error;
  const action = ['ENOSPC', 'EDQUOT'].includes(error.code)
    ? 'Free disk space or increase your quota'
    : 'Choose a writable directory on a local disk, or close programs locking the files';
  return Object.assign(new Error(`${error.code} while installing tools in ${resolve(cache)}. ${action}; `
    + 'set LASM_TOOLCHAIN_CACHE to relocate the cache and retry.', { cause: error }), { code: error.code });
}

/** A lower-bound check, not a reservation or a promise that extraction will fit.
 * The larger catalog expansion limit is a security ceiling, not a disk estimate.
 * Writes can still fail if a quota or available space changes during extraction.
 */
export async function checkDownloadSpace(directory, bytes, { inspect = statfs } = {}) {
  let space;
  try { space = await inspect(directory, { bigint: true }); }
  catch (error) { if (['ENOSYS', 'ENOTSUP', 'EOPNOTSUPP'].includes(error.code)) return; throw error; }
  const available = BigInt(space.bavail) * BigInt(space.bsize);
  if (available < BigInt(bytes)) throw Object.assign(new Error(`Insufficient free space for the ${bytes}-byte tool archive; `
    + `${available} bytes available at ${directory}. Extraction requires additional space. Set LASM_TOOLCHAIN_CACHE to a larger local disk.`), { code: 'ENOSPC' });
  return { available, blockSize: BigInt(space.bsize) };
}
