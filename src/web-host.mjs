const LIMIT = 16 * 1024 * 1024;

/** Explicit portable byte storage and HTTP capabilities. Neither is implicit. */
export function createWebHost({ storage, fetch: fetchImpl, maxBytes = LIMIT, timeoutMs = 10_000 } = {}) {
  if (!Number.isInteger(maxBytes) || maxBytes < 1 || maxBytes > LIMIT) throw new RangeError('maxBytes must be from 1 through 16777216');
  if (!Number.isInteger(timeoutMs) || timeoutMs < 1) throw new RangeError('timeoutMs must be positive');
  const checkKey = key => {
    if (typeof key !== 'string' || !key || key.length > 1024 || key.includes('\0')) throw new Error('Invalid storage key');
  };
  const host = {};
  if (storage !== undefined) {
    if (typeof storage.get !== 'function' || typeof storage.put !== 'function') throw new TypeError('storage requires get and put functions');
    host.readBytes = async (key, { signal }) => {
      checkKey(key); signal.throwIfAborted();
      const bytes = await storage.get(key, { signal });
      signal.throwIfAborted();
      if (bytes === null || bytes === undefined) throw new Error('Storage key not found');
      if (!(bytes instanceof Uint8Array)) throw new TypeError('Storage must return Uint8Array or null');
      if (bytes.length > maxBytes) throw new Error('Storage response exceeds the response limit');
      return bytes.slice();
    };
    host.writeBytes = async (key, bytes, { signal }) => {
      checkKey(key); signal.throwIfAborted();
      if (!(bytes instanceof Uint8Array)) throw new TypeError('Storage writes require Uint8Array');
      if (bytes.length > maxBytes) throw new Error('Storage write exceeds the request limit');
      await storage.put(key, bytes.slice(), { signal });
      signal.throwIfAborted();
    };
  }
  if (fetchImpl !== undefined) {
    if (typeof fetchImpl !== 'function') throw new TypeError('fetch must be a function');
    host.fetchBytes = async (key, { signal }) => {
      const url = new URL(key);
      if (!['http:', 'https:'].includes(url.protocol)) throw new Error('Only HTTP and HTTPS URLs are supported');
      const controller = new AbortController();
      const cancel = () => controller.abort(signal.reason);
      signal.throwIfAborted();
      signal.addEventListener('abort', cancel, { once: true });
      const timer = setTimeout(() => controller.abort(new Error('HTTP request timed out')), timeoutMs);
      try {
        // Workers supports manual redirects but not redirect: 'error'. A manual
        // redirect (including a browser's opaque redirect) fails the 2xx check.
        const response = await fetchImpl(url, { method: 'GET', redirect: 'manual', signal: controller.signal });
        if (!response.ok) { await response.body?.cancel(); throw new Error(`HTTP ${response.status}`); }
        if (Number(response.headers.get('content-length')) > maxBytes) {
          await response.body?.cancel(); throw new Error('HTTP response exceeds the response limit');
        }
        if (!response.body) return new Uint8Array();
        const reader = response.body.getReader();
        const pieces = [];
        let total = 0;
        try {
          while (true) {
            controller.signal.throwIfAborted();
            const { done, value } = await reader.read();
            if (done) break;
            total += value.byteLength;
            if (total > maxBytes) throw new Error('HTTP response exceeds the response limit');
            pieces.push(value);
          }
        } catch (error) { await reader.cancel().catch(() => {}); throw error; }
        finally { reader.releaseLock(); }
        const result = new Uint8Array(total);
        let offset = 0;
        for (const piece of pieces) { result.set(piece, offset); offset += piece.length; }
        return result;
      } finally { clearTimeout(timer); signal.removeEventListener('abort', cancel); }
    };
  }
  return Object.freeze(host);
}

/** Browser persistence. Each operation is an IndexedDB transaction. */
export async function createIndexedDbStorage({ name = 'lasm-files' } = {}) {
  if (!globalThis.indexedDB) throw new Error('IndexedDB is unavailable in this environment');
  const database = await new Promise((resolve, reject) => {
    const request = indexedDB.open(name, 1);
    let failed = false;
    request.onupgradeneeded = () => request.result.createObjectStore('files');
    request.onsuccess = () => { if (failed) request.result.close(); else resolve(request.result); };
    request.onerror = () => reject(request.error);
    request.onblocked = () => { failed = true; reject(new Error('IndexedDB upgrade is blocked')); };
  });
  const transaction = (key, value, signal) => new Promise((resolve, reject) => {
    signal?.throwIfAborted();
    const tx = database.transaction('files', value === undefined ? 'readonly' : 'readwrite');
    const store = tx.objectStore('files');
    const request = value === undefined ? store.get(key) : store.put(value, key);
    const abort = () => { try { tx.abort(); } catch {} };
    signal?.addEventListener('abort', abort, { once: true });
    const clean = () => signal?.removeEventListener('abort', abort);
    tx.oncomplete = () => { clean(); resolve(value === undefined ? request.result ?? null : undefined); };
    tx.onabort = () => { clean(); reject(signal?.reason ?? tx.error ?? new Error('Storage transaction aborted')); };
    tx.onerror = () => {}; // The abort handler rejects once and removes listeners.
  });
  return {
    get: (key, { signal } = {}) => transaction(key, undefined, signal),
    put: (key, value, { signal } = {}) => transaction(key, value, signal),
    close: () => database.close(),
  };
}

/** Cloudflare Workers KV is supplied explicitly as an application binding. */
export function createWorkerHost({ kv, ...options } = {}) {
  const storage = kv === undefined ? undefined : {
    async get(key, { signal }) {
      signal.throwIfAborted();
      const buffer = await kv.get(key, 'arrayBuffer');
      return buffer === null ? null : new Uint8Array(buffer);
    },
    async put(key, bytes, { signal }) { signal.throwIfAborted(); await kv.put(key, bytes); },
  };
  return createWebHost({ ...options, storage });
}
