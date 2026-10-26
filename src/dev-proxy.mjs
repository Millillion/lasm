// lasm dev with a server and a browser app (node=Server.lean,browser=Client.lean):
// one URL. A small proxy on the user's port forwards every request to the
// server program (on a private port), injects the live-reload client into HTML
// pages and pushes reloads over server-sent events; while the server restarts
// it waits for it. Also: which project sources each output depends on, so an
// edit rebuilds only the outputs that import the changed file.
import { createServer, request as httpRequest } from 'node:http';
import { createServer as createNetServer, connect } from 'node:net';
import { existsSync, readFileSync } from 'node:fs';
import { join, resolve, sep } from 'node:path';

const reloadClient = `<script type="module">
// Injected by lasm dev: reloads the page when a rebuild finishes.
const source = new EventSource('/__lasm/events');
source.addEventListener('reload', () => location.reload());
source.addEventListener('error-report', event => console.error('[lasm dev] ' + JSON.parse(event.data)));
</script>`;

/** The project's Lean files `entry` imports, directly or not, itself included
 * (module `A.B` is `A/B.lean` under the project). Imports from outside the
 * project (Lean, Std, Lasm, packages) are not followed. */
export function importClosure(project, entry) {
  const files = new Set();
  const visit = file => {
    if (files.has(file) || !existsSync(file)) return;
    files.add(file);
    let text;
    try { text = readFileSync(file, 'utf8'); } catch { return; }
    // The header: everything before the first declaration-like line.
    for (const line of text.replace(/\/-[\s\S]*?-\//g, '').split('\n')) {
      const t = line.trim();
      if (!t || t.startsWith('--')) continue;
      const m = /^(?:public\s+|meta\s+|private\s+)*import\s+(.+)$/.exec(t);
      if (!m) { if (/^(module|prelude)\b/.test(t)) continue; break; }
      for (const name of m[1].split(/\s+/)) if (/^[A-Za-z_][\w.]*$/.test(name)) visit(join(project, ...name.split('.')) + '.lean');
    }
  };
  visit(resolve(entry));
  return files;
}

/** Whether a change to `changed` (absolute paths) needs `entry` rebuilt:
 * configuration changes rebuild everything; Lean files only their importers. */
export function affects(project, entry, changed) {
  if (changed.some(file => !file.endsWith('.lean'))) return true;
  const closure = importClosure(project, entry);
  return changed.some(file => closure.has(file) || !file.startsWith(resolve(project) + sep));
}

/** A free TCP port on the loopback interface. */
export function freePort() {
  return new Promise((done, fail) => {
    const server = createNetServer();
    server.once('error', fail);
    server.listen(0, '127.0.0.1', () => { const { port } = server.address(); server.close(() => done(port)); });
  });
}

/** Resolves once something listens on 127.0.0.1:port (or after `ms`). */
export async function waitForPort(port, ms = 15000) {
  const deadline = Date.now() + ms;
  while (Date.now() < deadline) {
    const ok = await new Promise(done => {
      const socket = connect(port, '127.0.0.1');
      socket.once('connect', () => { socket.end(); done(true); });
      socket.once('error', () => done(false));
    });
    if (ok) return true;
    await new Promise(r => setTimeout(r, 50));
  }
  return false;
}

/** The proxy: { url, reload(), report(message), close() }. */
export function startDevProxy({ port, host = '127.0.0.1', upstreamPort }) {
  const clients = new Set();
  const send = (event, data) => { for (const client of clients) client.write(`event: ${event}\ndata: ${JSON.stringify(data)}\n\n`); };
  const forward = (request, response, body, attempt = 0) => {
    const headers = { ...request.headers, host: `127.0.0.1:${upstreamPort}` };
    delete headers['accept-encoding'];
    const upstream = httpRequest({ host: '127.0.0.1', port: upstreamPort, method: request.method, path: request.url, headers }, reply => {
      const type = String(reply.headers['content-type'] ?? '');
      if (/^text\/html/.test(type) && request.method !== 'HEAD') {
        const chunks = [];
        reply.on('data', c => chunks.push(c));
        reply.on('end', () => {
          const html = Buffer.concat(chunks).toString('utf8');
          const out = html.includes('</body>') ? html.replace('</body>', reloadClient + '\n</body>') : html + reloadClient;
          const h = { ...reply.headers, 'cache-control': 'no-store' };
          delete h['content-length']; delete h['content-encoding'];
          response.writeHead(reply.statusCode, h).end(out);
        });
      } else {
        response.writeHead(reply.statusCode, reply.headers);
        reply.pipe(response);
      }
    });
    upstream.on('error', () => {
      // The server is (re)starting: wait for it, then fail with a page that reloads when it is back.
      if (attempt < 100) setTimeout(() => forward(request, response, body, attempt + 1), 100);
      else if (!response.headersSent) response.writeHead(502, { 'content-type': 'text/html; charset=utf-8' })
        .end(`<!doctype html><title>lasm dev</title><p>The server is not running (see the terminal).</p>${reloadClient}`);
    });
    upstream.end(body);
  };
  const server = createServer((request, response) => {
    if (request.url === '/__lasm/events') {
      response.writeHead(200, { 'content-type': 'text/event-stream', 'cache-control': 'no-cache', connection: 'keep-alive' });
      response.write(': lasm dev\n\n');
      clients.add(response);
      request.on('close', () => clients.delete(response));
      return;
    }
    const chunks = [];
    request.on('data', c => chunks.push(c));
    request.on('end', () => forward(request, response, Buffer.concat(chunks)));
  });
  return new Promise((done, fail) => {
    server.once('error', fail);
    server.listen(port, host, () => {
      const shown = host === '0.0.0.0' || host === '::' ? 'localhost' : host;
      done({ url: `http://${shown}:${server.address().port}/`, port: server.address().port,
        reload() { send('reload', Date.now()); }, report(message) { send('error-report', message); },
        close() { for (const client of clients) client.end(); return new Promise(r => server.close(r)); } });
    });
  });
}
