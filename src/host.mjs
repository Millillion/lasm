import { open, realpath, lstat } from 'node:fs/promises';
import { constants } from 'node:fs';
import { resolve, dirname, basename, relative, isAbsolute, sep } from 'node:path';

const LIMIT = 16 * 1024 * 1024;
/** Explicit Node capabilities. No filesystem or network access is enabled by default. */
export async function createNodeHost({ directory, fetch: fetchImpl, maxBytes = LIMIT, timeoutMs = 10_000 } = {}) {
  if (!Number.isInteger(maxBytes) || maxBytes < 1 || maxBytes > LIMIT) throw new RangeError('maxBytes must be from 1 through 16777216');
  if (!Number.isInteger(timeoutMs) || timeoutMs < 1) throw new RangeError('timeoutMs must be positive');
  const root = directory === undefined ? undefined : await realpath(directory);
  function within(path) {
    const difference = relative(root, path);
    if (difference === '..' || difference.startsWith('..' + sep) || isAbsolute(difference)) throw new Error('Filesystem path is outside the configured directory');
    return path;
  }
  async function pathFor(key, writing = false) {
    if (!root) throw new Error('Filesystem capability is unavailable');
    if (key.includes('\0')) throw new Error('Filesystem paths must not contain NUL');
    const candidate = within(resolve(root, key));
    if (!writing) return within(await realpath(candidate));
    const destination = within(resolve(within(await realpath(dirname(candidate))), basename(candidate)));
    // Windows does not expose O_NOFOLLOW. Reject an existing terminal symlink
    // explicitly too; as documented, this is not a defense against racing writers.
    try {
      if ((await lstat(destination)).isSymbolicLink()) throw new Error('Filesystem writes cannot target a symlink');
    } catch (error) { if (error.code !== 'ENOENT') throw error; }
    return destination;
  }
  const host = {};
  if (root) {
    host.readBytes = async (key, { signal }) => {
      signal.throwIfAborted();
      const file = await open(await pathFor(key), constants.O_RDONLY | constants.O_NOFOLLOW);
      try {
        const stat = await file.stat();
        if (!stat.isFile()) throw new Error('Filesystem reads require a regular file');
        if (stat.size > maxBytes) throw new Error('File exceeds the response limit');
        const pieces = [];
        let total = 0;
        while (true) {
          signal.throwIfAborted();
          const chunk = new Uint8Array(Math.min(64 * 1024, maxBytes - total + 1));
          const { bytesRead } = await file.read(chunk);
          if (!bytesRead) break;
          total += bytesRead;
          if (total > maxBytes) throw new Error('File exceeds the response limit');
          pieces.push(chunk.subarray(0, bytesRead));
        }
        signal.throwIfAborted();
        const result = new Uint8Array(total);
        let offset = 0;
        for (const piece of pieces) { result.set(piece, offset); offset += piece.length; }
        return result;
      } finally { await file.close(); }
    };
    host.writeBytes = async (key, bytes, { signal }) => {
      if (bytes.byteLength > maxBytes) throw new Error('Write exceeds the request limit');
      signal.throwIfAborted();
      const file = await open(await pathFor(key, true), constants.O_WRONLY | constants.O_CREAT | constants.O_TRUNC | constants.O_NOFOLLOW, 0o666);
      try { await file.writeFile(bytes, { signal }); }
      finally { await file.close(); }
    };
  }
  if (fetchImpl !== undefined) {
    if (typeof fetchImpl !== 'function') throw new TypeError('fetch must be a function');
    host.fetchBytes = async (key, { signal }) => {
      const url = new URL(key);
      if (!['http:', 'https:'].includes(url.protocol)) throw new Error('Only HTTP and HTTPS URLs are supported');
      const requestSignal = AbortSignal.any([signal, AbortSignal.timeout(timeoutMs)]);
      const response = await fetchImpl(url, { method: 'GET', redirect: 'error', signal: requestSignal });
      if (!response.ok) {
        await response.body?.cancel();
        throw new Error(`HTTP ${response.status} ${response.statusText}`);
      }
      if (Number(response.headers.get('content-length')) > maxBytes) {
        await response.body?.cancel();
        throw new Error('HTTP response exceeds the response limit');
      }
      if (!response.body) return new Uint8Array();
      const reader = response.body.getReader();
      const pieces = [];
      let length = 0;
      try {
        while (true) {
          requestSignal.throwIfAborted();
          const { done, value } = await reader.read();
          if (done) break;
          length += value.byteLength;
          if (length > maxBytes) throw new Error('HTTP response exceeds the response limit');
          pieces.push(value);
        }
      } catch (error) { await reader.cancel().catch(() => {}); throw error; }
      finally { reader.releaseLock(); }
      const result = new Uint8Array(length);
      let offset = 0;
      for (const piece of pieces) { result.set(piece, offset); offset += piece.byteLength; }
      return result;
    };
  }
  return Object.freeze(host);
}
