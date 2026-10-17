import { parentPort, workerData } from 'node:worker_threads';
import { createServer as httpsServer } from 'node:https';
import { createServer as httpServer } from 'node:http';
import { connect } from 'node:net';
import { spawn } from 'node:child_process';
import { createGunzip } from 'node:zlib';
import { resolve } from 'node:path';

// Serve the bare fixture through Git's smart HTTP protocol, as private Git
// hosts do. Lake 4.35 fetches dependencies with `git fetch --filter=tree:0
// <url> <rev>`; over the dumb HTTP protocol Git 2.53 then recurses through lazy
// promisor fetches (git -> git-remote-https -> git ...) until process creation
// fails, which is a fixture artifact, not the product path.
// The protocol is implemented here over the built-in `git upload-pack
// --stateless-rpc` (what `git http-backend` runs): the managed Windows Git
// (dugite-native) does not reliably provide the separate http-backend program,
// and this avoids CGI parsing and path translation on every platform.
const root = resolve(workerData.repository);
const git = workerData.git ?? { executable: 'git', env: process.env };
// Discovery requests are counted so that a lazy-fetch recursion is refused
// quickly and reported instead of exhausting the runner.
const maximumDiscoveries = 32;
let discoveries = 0;
const backendEnvironment = {
  ...git.env,
  // Match common private hosts: partial-clone filters and fetching reachable revisions.
  GIT_CONFIG_COUNT: '2',
  GIT_CONFIG_KEY_0: 'uploadpack.allowFilter', GIT_CONFIG_VALUE_0: 'true',
  GIT_CONFIG_KEY_1: 'uploadpack.allowReachableSHA1InWant', GIT_CONFIG_VALUE_1: 'true',
};
for (const name of Object.keys(backendEnvironment)) if (/proxy|^GIT_PROTOCOL$/i.test(name)) delete backendEnvironment[name];
const packet = text => (text.length + 4).toString(16).padStart(4, '0') + text;

const server = httpsServer({ key: workerData.privateKey, cert: workerData.certificate }, (req, res) => {
  const fail = (status, detail) => {
    if (detail) parentPort.postMessage({ type: 'git-backend-failure', method: req.method, path: req.url, status, ...detail });
    if (!res.headersSent) res.writeHead(status, { 'Content-Type': 'text/plain' });
    res.end(detail ? JSON.stringify(detail) + '\n' : undefined);
  };
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
    const protocol = req.headers['git-protocol'];
    parentPort.postMessage({ type: 'git-request', method: req.method, path: url.pathname, service, protocol });
    const env = { ...backendEnvironment };
    if (typeof protocol === 'string') env.GIT_PROTOCOL = protocol;
    const args = ['upload-pack', '--stateless-rpc', ...(discovery ? ['--advertise-refs'] : []), root];
    const backend = spawn(git.executable, args, { env, stdio: ['pipe', 'pipe', 'pipe'], windowsHide: true });
    const stderr = [];
    backend.stderr.on('data', chunk => { if (stderr.reduce((n, c) => n + c.length, 0) < 65536) stderr.push(chunk); });
    let started = false;
    const start = () => {
      if (started) return; started = true;
      res.writeHead(200, { 'Content-Type': `application/x-git-upload-pack-${discovery ? 'advertisement' : 'result'}`,
        'Cache-Control': 'no-cache' });
      // Protocol v0/v1 discovery starts with a service announcement; v2 does not.
      if (discovery && !/version=2/.test(protocol ?? '')) res.write(packet('# service=git-upload-pack\n') + '0000');
    };
    backend.stdout.on('data', chunk => { start(); res.write(chunk); });
    backend.on('error', error => fail(500, { error: error.message, args }));
    backend.on('close', (code, signal) => {
      if (code === 0) { start(); res.end(); return; }
      const detail = { code, signal, args, stderr: Buffer.concat(stderr).toString('utf8').slice(-4000) };
      if (started) { parentPort.postMessage({ type: 'git-backend-failure', method: req.method, path: url.pathname, ...detail }); res.destroy(); }
      else fail(500, detail);
    });
    backend.stdin.on('error', () => {});
    req.on('error', () => backend.kill());
    if (discovery) { req.resume(); backend.stdin.end(); }
    else if (req.headers['content-encoding'] === 'gzip') req.pipe(createGunzip()).on('error', () => backend.kill()).pipe(backend.stdin);
    else req.pipe(backend.stdin);
  } catch (error) { fail(500, { error: error.message }); }
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
