import createModule from '../io/dist/worker.mjs';
import { createWorkerHost } from '../io/dist/web-host.mjs';

// A fresh instance per request avoids sharing suspended guest state across requests.
export default {
  async fetch(request, env) {
    const host = createWorkerHost({ kv: env.DATA, maxBytes: 65_536, timeoutMs: 1000,
      fetch: env.UPSTREAM ? (url, options) => env.UPSTREAM.fetch(url, options) : undefined });
    const api = await createModule({ host });
    try {
      const url = new URL(request.url);
      if (url.pathname === '/health') return Response.json({ ready: String(await api.ready()) });
      if (url.pathname === '/remote') {
        // Deployment supplies this capability binding. Clients cannot select a URL.
        return new Response(await api.fetch('https://templates.internal/binary'));
      }
      if (url.pathname.startsWith('/files/')) {
        const key = decodeURIComponent(url.pathname.slice('/files/'.length));
        if (request.method === 'PUT') {
          const reader = request.body?.getReader();
          const pieces = [];
          let length = 0;
          if (reader) {
            try {
              while (true) {
                const { done, value } = await reader.read();
                if (done) break;
                length += value.length;
                if (length > 65_536) { await reader.cancel(); return new Response('Too large', { status: 413 }); }
                pieces.push(value);
              }
            } finally { reader.releaseLock(); }
          }
          const bytes = new Uint8Array(length);
          let offset = 0;
          for (const piece of pieces) { bytes.set(piece, offset); offset += piece.length; }
          await api.write(key, bytes);
          return new Response(null, { status: 204 });
        }
        if (request.method === 'GET') return new Response(await api.read(key));
        return new Response('Method not allowed', { status: 405 });
      }
      return new Response('Not found', { status: 404 });
    } catch (error) {
      return Response.json({ error: error.name === 'LeanIOError' ? 'host_operation_failed' : 'runtime_failed' }, { status: 502 });
    } finally { api.dispose(); }
  },
};
