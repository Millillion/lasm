import { parentPort, workerData } from 'node:worker_threads';
import { createServer as httpsServer } from 'node:https';
import { createServer as httpServer } from 'node:http';
import { connect } from 'node:net';
import { createReadStream } from 'node:fs';
import { stat } from 'node:fs/promises';
import { resolve, sep } from 'node:path';

const root = resolve(workerData.repository);
const server = httpsServer({ key: workerData.privateKey, cert: workerData.certificate }, async (req, res) => {
  try {
    const url = new URL(req.url, 'https://localhost');
    if (req.method !== 'GET' || !url.pathname.startsWith('/repo.git/')) { res.writeHead(404); res.end(); return; }
    const file = resolve(root, decodeURIComponent(url.pathname.slice('/repo.git/'.length)));
    if (!file.startsWith(root + sep) || /[\\\0]/.test(url.pathname)) { res.writeHead(403); res.end(); return; }
    const info = await stat(file);
    if (!info.isFile() || info.size > 1024 * 1024) { res.writeHead(404); res.end(); return; }
    parentPort.postMessage({ type: 'git-request', path: url.pathname, bytes: info.size });
    res.writeHead(200, { 'Content-Type': 'application/octet-stream', 'Content-Length': info.size });
    const stream = createReadStream(file); stream.on('error', () => res.destroy()); stream.pipe(res);
  } catch { res.writeHead(404); res.end(); }
});
await new Promise(resolve => server.listen(0, '127.0.0.1', resolve));
const tlsPort = server.address().port, proxy = httpServer();
proxy.on('connect', (req, client, head) => {
  if (req.url !== `localhost:${tlsPort}` || req.headers['proxy-authorization'] !== 'Basic ' + Buffer.from(workerData.proxyCredential).toString('base64')) {
    client.end('HTTP/1.1 407 Proxy Authentication Required\r\nProxy-Authenticate: Basic realm="Lasm installer fixture"\r\nConnection: close\r\n\r\n'); return;
  }
  parentPort.postMessage({ type: 'proxy-connect', target: req.url, authenticated: true });
  const upstream = connect(tlsPort, '127.0.0.1');
  upstream.once('connect', () => { client.write('HTTP/1.1 200 Connection Established\r\n\r\n'); if (head.length) upstream.write(head); client.pipe(upstream); upstream.pipe(client); });
  client.on('error', () => upstream.destroy()); upstream.on('error', () => client.destroy());
  client.on('close', () => upstream.destroy());
});
await new Promise(resolve => proxy.listen(0, '127.0.0.1', resolve));
parentPort.postMessage({ type: 'ready', url: `https://localhost:${tlsPort}/repo.git`, proxyPort: proxy.address().port });
