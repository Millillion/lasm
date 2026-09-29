import test from 'node:test';
import assert from 'node:assert/strict';
import { createServer as httpsServer } from 'node:https';
import { createServer as httpServer } from 'node:http';
import { connect } from 'node:net';
import { readFile, writeFile, mkdtemp, rm } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { fileURLToPath } from 'node:url';
import { spawn } from 'node:child_process';
import { createHash } from 'node:crypto';
import { createInstallerCertificate } from './fixtures/create-installer-certificate.mjs';

const bytes = Buffer.from('real TLS transport fixture, complete and authenticated');
const childScript = fileURLToPath(new URL('./fixtures/download-network.mjs', import.meta.url));

async function setup(t) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-tls-fault-'));
  const ephemeral = createInstallerCertificate(), certificate = join(base, 'test-ca.pem');
  await writeFile(certificate, ephemeral.certificate);
  const requests = [], tunnels = [], sockets = new Set(), counters = new Map();
  const track = socket => { sockets.add(socket); socket.once('close', () => sockets.delete(socket)); };
  const server = httpsServer({ key: ephemeral.privateKey.export({ type: 'pkcs8', format: 'pem' }), cert: ephemeral.certificate }, (req, res) => {
    const count = (counters.get(req.url) ?? 0) + 1; counters.set(req.url, count);
    requests.push({ path: req.url, range: req.headers.range, ifRange: req.headers['if-range'] });
    if (req.url === '/headers' && count === 1) return;
    if (req.url === '/retry' && count === 1) { res.writeHead(503, { 'Retry-After': '1' }); res.end('later'); return; }
    const offset = req.headers.range ? Number(/^bytes=(\d+)-$/.exec(req.headers.range)?.[1]) : 0;
    const headers = { ETag: '"tls-fixture"', 'Content-Length': bytes.length - offset,
      ...(offset ? { 'Content-Range': `bytes ${offset}-${bytes.length - 1}/${bytes.length}` } : {}) };
    res.writeHead(offset ? 206 : 200, headers); res.flushHeaders();
    if (req.url === '/idle' && count === 1) return;
    if (req.url === '/resume' && count === 1) {
      res.write(bytes.subarray(0, 5)); setTimeout(() => res.destroy(), 100); return;
    }
    if (req.url === '/slow') { res.write(bytes.subarray(0, 5)); setTimeout(() => res.end(bytes.subarray(5)), 400); return; }
    res.end(bytes.subarray(offset));
  });
  server.on('connection', track);
  await new Promise(resolve => server.listen(0, '127.0.0.1', resolve));
  const port = server.address().port;
  const proxy = httpServer();
  proxy.on('connection', track);
  proxy.on('connect', (request, client, head) => {
    tunnels.push({ target: request.url, authenticated: request.headers['proxy-authorization'] === 'Basic ' + Buffer.from('fixture:private-test-password').toString('base64') });
    if (request.url !== `installer.invalid:${port}`) { client.destroy(); return; }
    const upstream = connect(port, '127.0.0.1'); track(upstream);
    upstream.once('connect', () => { client.write('HTTP/1.1 200 Connection Established\r\n\r\n'); if (head.length) upstream.write(head); client.pipe(upstream); upstream.pipe(client); });
    upstream.on('error', () => client.destroy()); client.on('error', () => upstream.destroy());
    client.on('close', () => upstream.destroy());
  });
  await new Promise(resolve => proxy.listen(0, '127.0.0.1', resolve));
  t.after(async () => {
    for (const socket of sockets) socket.destroy();
    await Promise.all([server, proxy].map(s => new Promise(resolve => s.close(resolve))));
    await rm(base, { force: true, recursive: true, maxRetries: 10, retryDelay: 100 });
  });
  let sequence = 0;
  const run = async (path, { privateCa = true, throughProxy = false, bypassProxy = false, optIn = true, policy = {} } = {}) => {
    const destination = join(base, 'archive-' + sequence++), configuration = destination + '.json';
    const artifact = { name: 'TLS-fixture', url: `https://${throughProxy ? 'installer.invalid' : '127.0.0.1'}:${port}${path}`,
      bytes: bytes.length, sha256: createHash('sha256').update(bytes).digest('hex') };
    await writeFile(configuration, JSON.stringify({ artifact, destination,
      policy: { attempts: 3, connectMs: 1000, idleMs: 1000, totalMs: 10_000, ...policy } }));
    const env = { ...process.env };
    for (const name of Object.keys(env)) if (/proxy|NODE_EXTRA_CA_CERTS|NODE_TLS_REJECT_UNAUTHORIZED|NODE_OPTIONS|NODE_USE_SYSTEM_CA/i.test(name)) delete env[name];
    if (privateCa) env.NODE_EXTRA_CA_CERTS = certificate;
    if (throughProxy || bypassProxy) {
      env.HTTPS_PROXY = `http://fixture:private-test-password@127.0.0.1:${proxy.address().port}`;
      if (optIn) env.NODE_USE_ENV_PROXY = '1';
      if (bypassProxy) env.NO_PROXY = '127.0.0.1';
    }
    const child = spawn(process.execPath, ['--max-old-space-size=96', childScript, configuration], { env, windowsHide: true, stdio: ['ignore', 'pipe', 'pipe'] });
    let stdout = '', stderr = '';
    child.stdout.on('data', b => { stdout += b; }); child.stderr.on('data', b => { stderr += b; });
    const timer = setTimeout(() => child.kill('SIGKILL'), 15_000);
    const code = await new Promise((resolve, reject) => { child.once('error', reject); child.once('close', (code, signal) => resolve(signal ?? code)); }).finally(() => clearTimeout(timer));
    assert.doesNotMatch(stdout + stderr, /private-test-password/, 'Proxy credentials must not appear in diagnostics');
    return { code, stdout, stderr, destination };
  };
  return { run, requests, tunnels };
}

test('real TLS rejects an untrusted CA and accepts an explicit startup CA through the build worker', { timeout: 30_000 }, async t => {
  const f = await setup(t);
  const untrusted = await f.run('/ca', { privateCa: false });
  assert.equal(untrusted.code, 1); assert.match(untrusted.stderr, /SELF_SIGNED|self.signed|CERT/);
  assert.equal(f.requests.length, 0);
  const trusted = await f.run('/ca');
  assert.equal(trusted.code, 0, trusted.stderr); assert.deepEqual(await readFile(trusted.destination), bytes);
});

test('real CONNECT proxy honors startup opt-in, credentials and NO_PROXY in the build worker', { timeout: 30_000 }, async t => {
  const f = await setup(t);
  const proxied = await f.run('/proxy', { throughProxy: true });
  assert.equal(proxied.code, 0, proxied.stderr); assert.ok(f.tunnels.length > 0);
  assert.ok(f.tunnels.every(t => t.authenticated));
  const count = f.tunnels.length;
  const direct = await f.run('/direct', { bypassProxy: true });
  assert.equal(direct.code, 0, direct.stderr); assert.equal(f.tunnels.length, count);
  const noOptIn = await f.run('/no-opt-in', { throughProxy: true, optIn: false, policy: { attempts: 1 } });
  assert.equal(noOptIn.code, 1); assert.match(noOptIn.stderr, /ENOTFOUND|EAI_AGAIN/);
  assert.equal(f.tunnels.length, count);
});

for (const path of ['/retry', '/resume', '/headers', '/idle', '/slow'])
  test(`real HTTPS ${path} recovery remains fully authenticated`, { timeout: 30_000 }, async t => {
    const f = await setup(t);
    const result = await f.run(path, { policy: { connectMs: path === '/headers' || path === '/slow' ? 250 : 1000,
      idleMs: path === '/idle' ? 250 : 1000 } });
    assert.equal(result.code, 0, result.stderr);
    assert.deepEqual(await readFile(result.destination), bytes);
    assert.equal(f.requests.length, path === '/slow' ? 1 : 2);
    if (path === '/resume') assert.deepEqual(f.requests[1], { path, range: 'bytes=5-', ifRange: '"tls-fixture"' });
  });
