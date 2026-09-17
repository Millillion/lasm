import express from 'express';
import { mkdir, open, rename, rm } from 'node:fs/promises';
import { randomUUID } from 'node:crypto';
import { resolve, join } from 'node:path';
import createModule from './dist/index.mjs';
import { createNodeHost } from './dist/host.mjs';
import { trackHostOperations } from './host-operations.mjs';

const STORE = 'tasks.json';
const MAX_STORE_BYTES = 4 * 1024 * 1024;

class ServiceError extends Error {
  constructor(status, code, message) { super(message); this.status = status; this.code = code; }
}

function upstreamUrl(value) {
  if (value === undefined || value === '') return '';
  const url = new URL(value);
  if (!['http:', 'https:'].includes(url.protocol) || url.username || url.password || url.search || url.hash) {
    throw new TypeError('upstream must be an HTTP(S) base URL without credentials, query, or fragment');
  }
  return url.href.replace(/\/+$/, '');
}

/** HTTP transport only. The compiled Lean module implements the API. */
export async function createApp({ directory, upstream, maxPending = 128, upstreamTimeoutMs = 5000 } = {}) {
  if (typeof directory !== 'string') throw new TypeError('A data directory is required');
  if (!Number.isInteger(maxPending) || maxPending < 1) throw new TypeError('maxPending must be positive');
  const root = resolve(directory);
  const baseUrl = upstreamUrl(upstream);
  await mkdir(root, { recursive: true });
  const lockPath = join(root, '.task-board.lock');
  let lock;
  try { lock = await open(lockPath, 'wx', 0o600); }
  catch (error) {
    if (error.code === 'EEXIST') throw new Error('The data directory is already locked by a task-board server');
    throw error;
  }
  let backend;
  const releaseLock = async () => { await lock.close(); await rm(lockPath); };
  try {
    await lock.writeFile(JSON.stringify({ pid: process.pid }) + '\n');
    const nodeHost = await createNodeHost({
      directory: root, maxBytes: MAX_STORE_BYTES, timeoutMs: upstreamTimeoutMs,
      fetch: baseUrl ? (url, options) => {
        const suffix = url.href.slice(baseUrl.length);
        if (!url.href.startsWith(baseUrl) || !/^\/templates\/[0-9]+$/.test(suffix)) {
          throw new Error('HTTP capability only permits the configured template service');
        }
        return fetch(url, options);
      } : undefined,
    });
    const { host, drain } = trackHostOperations({
      ...nodeHost,
      readBytes(path, options) {
        if (path !== STORE) throw new Error('Unknown task-store path');
        return nodeHost.readBytes(path, options);
      },
      async writeBytes(path, bytes, { signal }) {
        if (path !== STORE) throw new Error('Unknown task-store path');
        if (bytes.byteLength > MAX_STORE_BYTES) throw new Error('Task store exceeds its byte limit');
        signal.throwIfAborted();
        // Commit by rename so an interrupted write cannot truncate the old store.
        const temporary = join(root, `.${STORE}.${randomUUID()}.tmp`);
        let file;
        try {
          file = await open(temporary, 'wx', 0o600);
          await file.writeFile(bytes, { signal });
          await file.sync();
          await file.close(); file = undefined;
          signal.throwIfAborted();
          await rename(temporary, join(root, STORE));
        } finally {
          await file?.close();
          await rm(temporary, { force: true });
        }
      },
    });
    backend = await createModule({ host });
    try {
      const initial = await open(join(root, STORE), 'wx', 0o600);
      try { await initial.writeFile(backend.initialState()); }
      finally { await initial.close(); }
    } catch (error) { if (error.code !== 'EEXIST') throw error; }

    let tail = Promise.resolve();
    let pending = 0;
    let closed = false;
    let closePromise;
    function enqueue(operation, signal) {
      if (closed) return Promise.reject(new ServiceError(503, 'shutting_down', 'The server is shutting down'));
      if (pending >= maxPending) return Promise.reject(new ServiceError(503, 'queue_full', 'The server request queue is full'));
      pending++;
      const result = tail.then(async () => {
        signal.throwIfAborted();
        // A trap invalidates the guest, but the next request can use a fresh one.
        if (backend.stats().disposed) backend = await createModule({ host });
        try { return await operation(); }
        // Guest cancellation can win its race with a host Promise. Keep this
        // transaction's queue slot until real filesystem/network work settles.
        finally { await drain(); }
      });
      tail = result.catch(() => {});
      return result.finally(() => { pending--; });
    }

    const app = express();
    app.disable('x-powered-by');
    app.disable('etag'); // Lean returns explicit version tags for task resources.
    app.use((req, res, next) => {
      res.set('X-Endpoint-Implementation', 'Lean/Wasm');
      if (req.originalUrl.length > 8192) return next(new ServiceError(414, 'uri_too_long', 'Request URL is too long'));
      if (['POST', 'PATCH'].includes(req.method) && !req.is(['application/json', 'application/*+json'])) {
        return next(new ServiceError(415, 'unsupported_media_type', 'Use application/json'));
      }
      next();
    });
    // Keep JSON validation in Lean. Express only bounds and reads transport bytes.
    app.use(express.raw({ type: ['application/json', 'application/*+json'], limit: '32kb', inflate: false }));
    app.use(async (req, res) => {
      const controller = new AbortController();
      const abort = () => controller.abort(new Error('HTTP client disconnected'));
      const close = () => { if (!res.writableEnded) abort(); };
      req.once('aborted', abort);
      res.once('close', close);
      try {
        const url = new URL(req.originalUrl, 'http://localhost');
        const query = Object.create(null);
        for (const [key, value] of url.searchParams) {
          if (Object.hasOwn(query, key)) query[key] = Array.isArray(query[key]) ? [...query[key], value] : [query[key], value];
          else query[key] = value;
        }
        let body;
        try { body = new TextDecoder('utf-8', { fatal: true }).decode(req.body ?? new Uint8Array()); }
        catch { throw new ServiceError(400, 'invalid_encoding', 'Request body must be UTF-8'); }
        const encoded = await enqueue(() => backend.handle(req.method, url.pathname, JSON.stringify(query), body, baseUrl,
          { signal: controller.signal }), controller.signal);
        if (res.destroyed) return;
        const reply = JSON.parse(encoded);
        if (!Number.isInteger(reply.status) || reply.status < 200 || reply.status > 599) throw new Error('Invalid Lean response status');
        for (const [name, value] of Object.entries(reply.headers)) {
          if (!['etag', 'location'].includes(name) || typeof value !== 'string') throw new Error('Invalid Lean response header');
          res.set(name, value);
        }
        res.status(reply.status);
        if (reply.status === 204) res.end();
        else res.json(reply.body);
      } finally {
        req.off('aborted', abort);
        res.off('close', close);
      }
    });
    app.use((error, req, res, next) => {
      if (res.headersSent) return next(error);
      if (res.destroyed) return;
      const status = error instanceof ServiceError ? error.status
        : error.type === 'entity.too.large' ? 413 : error.status === 415 ? 415 : 500;
      const code = error instanceof ServiceError ? error.code
        : status === 413 ? 'body_too_large' : status === 415 ? 'unsupported_encoding' : 'internal_error';
      const message = error instanceof ServiceError ? error.message
        : status === 413 ? 'Request body exceeds 32 KiB' : status === 415 ? 'Unsupported content encoding' : 'The request could not be completed';
      res.status(status).json({ error: { code, message } });
    });
    return {
      app,
      stats: () => ({ ...backend.stats(), pending, closed }),
      close() {
        if (!closePromise) {
          closed = true;
          closePromise = (async () => { await tail; backend.dispose(); await releaseLock(); })();
        }
        return closePromise;
      },
    };
  } catch (error) {
    backend?.dispose();
    await releaseLock();
    throw error;
  }
}
