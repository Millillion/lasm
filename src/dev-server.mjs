// `lasm dev` for browser output: serve a build directory on localhost with
// live reload. HTML pages get a small script that listens on an event stream
// and reloads the page after each successful rebuild. Lasm only prints the
// URL; it never opens a browser.
import { createServer } from 'node:http';
import { createReadStream, existsSync, statSync } from 'node:fs';
import { readFile } from 'node:fs/promises';
import { extname, join, normalize, resolve, sep } from 'node:path';

export const liveReloadPath = '/__lasm/live-reload';
export const liveReloadScript = `<script type="module">
// Injected by lasm dev (not part of the build): reload after each rebuild.
const events = new EventSource(${JSON.stringify(liveReloadPath)});
events.addEventListener('reload', () => location.reload());
events.addEventListener('error-report', event => console.error('[lasm dev] ' + JSON.parse(event.data).message));
</script>`;

const types = {
  '.html': 'text/html; charset=utf-8', '.js': 'text/javascript; charset=utf-8', '.mjs': 'text/javascript; charset=utf-8',
  '.css': 'text/css; charset=utf-8', '.json': 'application/json; charset=utf-8', '.wasm': 'application/wasm',
  '.svg': 'image/svg+xml', '.png': 'image/png', '.jpg': 'image/jpeg', '.jpeg': 'image/jpeg', '.gif': 'image/gif',
  '.ico': 'image/x-icon', '.webp': 'image/webp', '.txt': 'text/plain; charset=utf-8', '.map': 'application/json; charset=utf-8',
  '.woff2': 'font/woff2', '.woff': 'font/woff',
};

/** Insert the live-reload script before </head>, else </body>, else at the end. */
export function injectLiveReload(html) {
  for (const tag of ['</head>', '</body>']) {
    const at = html.toLowerCase().lastIndexOf(tag);
    if (at >= 0) return html.slice(0, at) + liveReloadScript + '\n' + html.slice(at);
  }
  return html + '\n' + liveReloadScript + '\n';
}

/** Serve `directory()` (re-read per request: a rebuild may replace it) on
 * host:port. Returns { url, reload(), report(message), close() }. */
export async function serveDirectory(directory, { host = '127.0.0.1', port = 5173, fallback = 'index.html' } = {}) {
  const clients = new Set();
  const root = () => resolve(typeof directory === 'function' ? directory() : directory);
  const server = createServer(async (request, response) => {
    const url = new URL(request.url, 'http://localhost');
    if (url.pathname === liveReloadPath) {
      response.writeHead(200, { 'content-type': 'text/event-stream', 'cache-control': 'no-store', connection: 'keep-alive' });
      response.write(': lasm dev\n\n');
      clients.add(response);
      request.on('close', () => clients.delete(response));
      return;
    }
    if (!['GET', 'HEAD'].includes(request.method)) { response.writeHead(405).end(); return; }
    const base = root();
    let file;
    try { file = normalize(join(base, decodeURIComponent(url.pathname))); } catch { response.writeHead(400).end(); return; }
    if (file !== base && !file.startsWith(base + sep)) { response.writeHead(403).end(); return; }
    if (existsSync(file) && statSync(file).isDirectory()) file = join(file, 'index.html');
    // Client-side routes (no extension) fall back to the app's page.
    if (!existsSync(file) && !extname(file) && fallback && existsSync(join(base, fallback))) file = join(base, fallback);
    if (!existsSync(file) || !statSync(file).isFile()) { response.writeHead(404, { 'content-type': 'text/plain' }).end('Not found\n'); return; }
    const type = types[extname(file).toLowerCase()] ?? 'application/octet-stream';
    const headers = { 'content-type': type, 'cache-control': 'no-store' };
    if (extname(file).toLowerCase() === '.html') {
      const body = Buffer.from(injectLiveReload(await readFile(file, 'utf8')));
      response.writeHead(200, { ...headers, 'content-length': body.length });
      response.end(request.method === 'HEAD' ? undefined : body);
      return;
    }
    response.writeHead(200, { ...headers, 'content-length': statSync(file).size });
    if (request.method === 'HEAD') { response.end(); return; }
    createReadStream(file).pipe(response);
  });
  await new Promise((resolve, reject) => { server.once('error', reject); server.listen(port, host, resolve); });
  const send = (event, data) => { for (const client of clients) client.write(`event: ${event}\ndata: ${JSON.stringify(data)}\n\n`); };
  const address = server.address();
  return {
    url: `http://${host.includes(':') ? `[${host}]` : host}:${address.port}/`,
    reload() { send('reload', {}); },
    report(message) { send('error-report', { message }); },
    close() { for (const client of clients) client.end(); clients.clear(); return new Promise(resolve => server.close(resolve)); },
  };
}
