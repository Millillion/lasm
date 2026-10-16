import { parentPort, workerData } from 'node:worker_threads';
import { createServer as httpsServer } from 'node:https';
import { createServer as httpServer } from 'node:http';
import { connect } from 'node:net';
import { spawn } from 'node:child_process';
import { basename, dirname, resolve } from 'node:path';

// Serve the bare fixture through Git's smart HTTP protocol (`git http-backend`),
// as private Git hosts do. Lake 4.35 fetches dependencies with
// `git fetch --filter=tree:0 <url> <rev>`; over the dumb HTTP protocol Git 2.53
// then recurses through lazy promisor fetches (git -> git-remote-https -> git ...)
// until process creation fails, which is a fixture artifact, not the product path.
const root = resolve(workerData.repository);
const git = workerData.git ?? { executable: 'git', env: process.env };
// Discovery requests are counted so that a lazy-fetch recursion is refused
// quickly and reported instead of exhausting the runner.
const maximumDiscoveries = 32;
let discoveries = 0;
const backendEnvironment = {
  ...git.env, GIT_PROJECT_ROOT: dirname(root), GIT_HTTP_EXPORT_ALL: '1',
  // Match common private hosts: partial-clone filters and fetching reachable revisions.
  GIT_CONFIG_COUNT: '2',
  GIT_CONFIG_KEY_0: 'uploadpack.allowFilter', GIT_CONFIG_VALUE_0: 'true',
  GIT_CONFIG_KEY_1: 'uploadpack.allowReachableSHA1InWant', GIT_CONFIG_VALUE_1: 'true',
};
for (const name of Object.keys(backendEnvironment)) if (/proxy/i.test(name)) delete backendEnvironment[name];

const server = httpsServer({ key: workerData.privateKey, cert: workerData.certificate }, (req, res) => {
  const fail = status => { if (!res.headersSent) res.writeHead(status); res.end(); };
  try {
    const url = new URL(req.url, 'https://localhost');
    const service = url.searchParams.get('service') ?? undefined;
    const discovery = req.method === 'GET' && url.pathname === '/repo.git/info/refs' && service === 'git-upload-pack';
    const upload = req.method === 'POST' && url.pathname === '/repo.git/git-upload-pack';
    if (!discovery && !upload) { fail(404); return; }
    if (discovery && ++discoveries > maximumDiscoveries) {
      parentPort.postMessage({ type: 'git-request-refused', method: req.method, path: url.pathname, discoveries });
      fail(429); return;
    }
    parentPort.postMessage({ type: 'git-request', method: req.method, path: url.pathname, service });
    const env = { ...backendEnvironment, REQUEST_METHOD: req.method, QUERY_STRING: url.search.slice(1),
      PATH_INFO: '/' + basename(root) + url.pathname.slice('/repo.git'.length), REMOTE_ADDR: '127.0.0.1',
      CONTENT_TYPE: req.headers['content-type'] ?? '' };
    if (req.headers['content-length'] !== undefined) env.CONTENT_LENGTH = req.headers['content-length'];
    if (req.headers['content-encoding'] !== undefined) env.HTTP_CONTENT_ENCODING = req.headers['content-encoding'];
    if (req.headers['git-protocol'] !== undefined) env.GIT_PROTOCOL = req.headers['git-protocol'];
    const backend = spawn(git.executable, ['http-backend'], { env, stdio: ['pipe', 'pipe', 'ignore'], windowsHide: true });
    backend.on('error', () => fail(500));
    req.on('error', () => backend.kill());
    req.pipe(backend.stdin).on('error', () => {});
    // CGI response: header lines, a blank line, then the body.
    let header = Buffer.alloc(0), bodyStarted = false;
    backend.stdout.on('data', chunk => {
      if (bodyStarted) { res.write(chunk); return; }
      header = Buffer.concat([header, chunk]);
      const text = header.toString('latin1'), crlf = text.indexOf('\r\n\r\n'), lf = text.indexOf('\n\n');
      const end = crlf >= 0 && (lf < 0 || crlf < lf) ? crlf + 4 : lf >= 0 ? lf + 2 : -1;
      if (end < 0) { if (header.length > 65536) { backend.kill(); fail(502); } return; }
      let status = 200; const headers = {};
      for (const line of text.slice(0, end).split(/\r?\n/).filter(Boolean)) {
        const colon = line.indexOf(':'), name = line.slice(0, colon).trim(), value = line.slice(colon + 1).trim();
        if (name.toLowerCase() === 'status') status = Number.parseInt(value, 10); else headers[name] = value;
      }
      res.writeHead(status, headers); bodyStarted = true;
      const rest = header.subarray(end); if (rest.length) res.write(rest);
    });
    backend.on('close', code => { if (!bodyStarted) fail(code === 0 ? 502 : 500); else res.end(); });
  } catch { fail(500); }
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
