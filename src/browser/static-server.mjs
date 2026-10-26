// A static file server for browser builds (lasm dev, and the browser CI): it
// serves a directory as a static host or CDN should (docs/deploy/browser.md):
// application/wasm for .wasm, the precompressed .br/.gz copies when the client
// accepts them, immutable caching for content-hashed files, no-cache for the
// rest. Optionally it injects a live-reload client into HTML pages and pushes
// reloads over server-sent events. Node built-ins only; it listens on the
// loopback interface unless told otherwise.
import { createServer } from 'node:http';
import { createReadStream, existsSync, readFileSync, statSync } from 'node:fs';
import { extname, join, normalize, resolve, sep } from 'node:path';

export const mimeTypes = Object.freeze({
  '.html': 'text/html; charset=utf-8', '.js': 'text/javascript; charset=utf-8', '.mjs': 'text/javascript; charset=utf-8',
  '.css': 'text/css; charset=utf-8', '.json': 'application/json; charset=utf-8', '.wasm': 'application/wasm',
  '.svg': 'image/svg+xml', '.png': 'image/png', '.jpg': 'image/jpeg', '.jpeg': 'image/jpeg', '.gif': 'image/gif', '.webp': 'image/webp',
  '.avif': 'image/avif', '.ico': 'image/x-icon', '.txt': 'text/plain; charset=utf-8', '.map': 'application/json; charset=utf-8',
  '.woff': 'font/woff', '.woff2': 'font/woff2', '.webmanifest': 'application/manifest+json', '.xml': 'application/xml',
});
export const hashedFile = /\.[0-9a-f]{12}\.(?:js|wasm)$/;
const compressible = new Set(['.html', '.js', '.mjs', '.css', '.json', '.wasm', '.svg', '.txt', '.map', '.xml', '.webmanifest']);

const reloadClient = `<script type="module">
// Injected by lasm dev: reloads the page when a rebuild finishes.
const source = new EventSource('/__lasm/events');
source.addEventListener('reload', () => location.reload());
source.addEventListener('error-report', event => console.error('[lasm dev] ' + JSON.parse(event.data)));
</script>`;

/**
 * root: the directory to serve. options: port (0: any free port), host
 * (default 127.0.0.1), liveReload (inject the reload client), routes(request,
 * response, url) → true when it answered (tests), fallback ('index.html': unknown
 * paths without an extension get the page, for client-side routing), log.
 * Resolves to { server, url, reload(), report(message), close() }.
 */
export function startStaticServer(root, { port = 0, host = '127.0.0.1', liveReload = false, routes, fallback = 'index.html', headers: extraHeaders = {}, log = () => {} } = {}) {
  root = resolve(root);
  const clients = new Set();
  const send = (event, data) => { for (const client of clients) client.write(`event: ${event}\ndata: ${JSON.stringify(data)}\n\n`); };
  const server = createServer((request, response) => {
    const url = new URL(request.url, 'http://localhost');
    try {
      if (routes?.(request, response, url)) return;
      if (liveReload && url.pathname === '/__lasm/events') {
        response.writeHead(200, { 'content-type': 'text/event-stream', 'cache-control': 'no-cache', connection: 'keep-alive' });
        response.write(': lasm dev\n\n');
        clients.add(response);
        request.on('close', () => clients.delete(response));
        return;
      }
      if (request.method !== 'GET' && request.method !== 'HEAD') { response.writeHead(405, { allow: 'GET, HEAD' }).end(); return; }
      let path = decodeURIComponent(url.pathname);
      if (path.endsWith('/')) path += 'index.html';
      let file = normalize(join(root, path));
      if (file !== root && !file.startsWith(root + sep)) { response.writeHead(403).end(); return; }
      if (!existsSync(file) || !statSync(file).isFile()) {
        if (fallback && !extname(path)) file = join(root, fallback);
        if (!existsSync(file) || !statSync(file).isFile()) { response.writeHead(404, { 'content-type': 'text/plain; charset=utf-8' }).end('Not found\n'); return; }
      }
      const extension = extname(file);
      const headers = { 'content-type': mimeTypes[extension] ?? 'application/octet-stream', vary: 'accept-encoding',
        'cache-control': hashedFile.test(file) ? 'public, max-age=31536000, immutable' : 'no-cache', 'x-content-type-options': 'nosniff', ...extraHeaders };
      if (liveReload && extension === '.html') {
        const html = readFileSync(file, 'utf8');
        const body = html.includes('</body>') ? html.replace('</body>', reloadClient + '\n</body>') : html + reloadClient;
        response.writeHead(200, { ...headers, 'cache-control': 'no-store' }).end(request.method === 'HEAD' ? undefined : body);
        return;
      }
      const accepts = String(request.headers['accept-encoding'] ?? '');
      let served = file;
      if (compressible.has(extension)) {
        for (const [encoding, suffix] of [['br', '.br'], ['gzip', '.gz']]) {
          if (new RegExp(`\\b${encoding}\\b`).test(accepts) && existsSync(file + suffix)) { served = file + suffix; headers['content-encoding'] = encoding; break; }
        }
      }
      headers['content-length'] = statSync(served).size;
      response.writeHead(200, headers);
      if (request.method === 'HEAD') { response.end(); return; }
      createReadStream(served).pipe(response);
      log(`${request.method} ${url.pathname} ${headers['content-encoding'] ?? ''}`.trimEnd());
    } catch (error) {
      if (!response.headersSent) response.writeHead(500, { 'content-type': 'text/plain; charset=utf-8' });
      response.end(String(error?.message ?? error));
    }
  });
  return new Promise((resolveServer, reject) => {
    server.once('error', reject);
    server.listen(port, host, () => {
      const address = server.address();
      const shown = host === '0.0.0.0' || host === '::' ? 'localhost' : host.includes(':') ? `[${host}]` : host;
      resolveServer({ server, url: `http://${shown}:${address.port}/`, port: address.port,
        reload() { send('reload', Date.now()); }, report(message) { send('error-report', message); },
        close() { for (const client of clients) client.end(); return new Promise(done => server.close(done)); } });
    });
  });
}
