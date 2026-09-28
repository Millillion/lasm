// Characterization probes for the installation audit. These record current
// weaknesses; they are not a release acceptance suite or fixes for those issues.
// Run from the repository root, through run-bounded.mjs, with Node 26.10.0.
import assert from 'node:assert/strict';
import fs from 'node:fs';
import { mkdir, readFile, writeFile, readdir, rm, chmod } from 'node:fs/promises';
import { join, resolve } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { spawn, execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { createServer as httpsServer } from 'node:https';
import { createServer as httpServer } from 'node:http';
import { connect } from 'node:net';
import { Writable } from 'node:stream';
import { syncBuiltinESMExports } from 'node:module';
import { c as tar } from 'tar';

const self = fileURLToPath(import.meta.url), root = process.cwd();
const digest = b => createHash('sha256').update(b).digest('hex');
const emit = value => process.stdout.write(JSON.stringify(value) + '\n');
const errorData = e => e && ({ name: e.name, message: e.message, code: e.code,
  ...(e.cause ? { cause: errorData(e.cause) } : {}) });

if (process.argv[2] === '--worker') {
  const cfg = JSON.parse(await readFile(process.argv[3], 'utf8'));
  if (cfg.shortDeadline) {
    const original = AbortSignal.timeout;
    AbortSignal.timeout = ms => { emit({ deadlineRequestedMs: ms, testDeadlineMs: cfg.shortDeadline }); return original(cfg.shortDeadline); };
  }
  if (cfg.noSpace) {
    fs.createWriteStream = () => new Writable({ write(chunk, encoding, cb) {
      cb(Object.assign(new Error('simulated disk full'), { code: 'ENOSPC' }));
    } });
    syncBuiltinESMExports();
  }
  const { provisionArtifact } = await import(pathToFileURL(join(root, 'src/managed-artifacts.mjs')));
  try {
    const installed = await provisionArtifact(cfg.artifact, { cache: cfg.cache, log() {}, progress(event) {
      emit({ progress: event });
      if (cfg.pauseStage && event.stage.startsWith(cfg.pauseStage))
        Atomics.wait(new Int32Array(new SharedArrayBuffer(4)), 0, 0);
      if (cfg.failCleanup && event.stage.startsWith('Finishing'))
        for (const name of fs.readdirSync(join(cfg.cache, 'artifacts')).filter(n => n.startsWith('.install-')))
          fs.chmodSync(join(cfg.cache, 'artifacts', name), 0o500);
    } });
    emit({ result: { ok: true, cacheHit: installed.cacheHit, identity: installed.identity,
      locale: Intl.DateTimeFormat().resolvedOptions().locale } });
  } catch (error) { emit({ result: { ok: false, error: errorData(error), locale: Intl.DateTimeFormat().resolvedOptions().locale } }); }
} else {
  assert.equal(process.versions.node, '26.10.0');
  const out = resolve(process.argv[2]);
  await mkdir(out); // New output only: do not overwrite earlier evidence.
  const fixture = join(out, 'fixture');
  await mkdir(join(fixture, 'tool'), { recursive: true });
  for (const name of ['a', 'z', 'ä']) await writeFile(join(fixture, 'tool', name), 'verified bytes\n');
  const archivePath = join(out, 'tool.tar.gz');
  await tar({ cwd: fixture, file: archivePath, portable: true, gzip: true }, ['tool']);
  const bytes = await readFile(archivePath);
  const cert = join(out, 'cert.pem'), key = join(out, 'key.pem');
  execFileSync('openssl', ['req', '-x509', '-newkey', 'rsa:2048', '-nodes', '-keyout', key,
    '-out', cert, '-days', '1', '-subj', '/CN=fixture.invalid',
    '-addext', 'subjectAltName=DNS:fixture.invalid,IP:127.0.0.1'], { stdio: 'ignore', timeout: 10000 });
  const counts = {}, routes = {}, requests = [], sockets = new Set();
  const server = httpsServer({ key: await readFile(key), cert: await readFile(cert) }, (req, res) => {
    counts[req.url] = (counts[req.url] ?? 0) + 1;
    requests.push({ path: req.url, range: req.headers.range ?? null });
    const action = routes[req.url];
    if (action) return action(req, res, counts[req.url]);
    res.writeHead(200, { 'content-length': bytes.length }); res.end(bytes);
  });
  server.on('connection', s => { sockets.add(s); s.on('close', () => sockets.delete(s)); });
  await new Promise(r => server.listen(0, '127.0.0.1', r));
  const port = server.address().port;
  let proxyConnects = 0;
  const proxy = httpServer();
  proxy.on('connection', s => { sockets.add(s); s.on('close', () => sockets.delete(s)); });
  proxy.on('connect', (req, client, head) => {
    proxyConnects++;
    const remote = connect(port, '127.0.0.1', () => {
      client.write('HTTP/1.1 200 Connection Established\r\n\r\n');
      if (head.length) remote.write(head);
      remote.pipe(client); client.pipe(remote);
    });
    sockets.add(remote); remote.on('close', () => sockets.delete(remote));
    remote.on('error', () => client.destroy()); client.on('error', () => remote.destroy());
    client.on('close', () => remote.destroy());
  });
  await new Promise(r => proxy.listen(0, '127.0.0.1', r));
  const artifact = path => ({ name: 'audit-fixture.tar.gz', root: 'tool', format: 'tar.gz',
    url: `https://127.0.0.1:${port}/${path}`, bytes: bytes.length,
    sha256: digest(bytes), maximumExtractedBytes: 10000 });
  let next = 0;
  const children = new Set(), cases = [];
  async function worker(name, extra = {}, envExtra = {}, killAt) {
    const config = { artifact: artifact(name), cache: join(out, name), ...extra };
    const cfgPath = join(out, `worker-${++next}.json`); await writeFile(cfgPath, JSON.stringify(config));
    const env = { ...process.env };
    for (const k of Object.keys(env)) if (/^(?:https?_proxy|all_proxy|no_proxy|NODE_USE_ENV_PROXY|NODE_EXTRA_CA_CERTS|NODE_OPTIONS|NODE_TLS_REJECT_UNAUTHORIZED|NODE_USE_SYSTEM_CA)$/i.test(k)) delete env[k];
    Object.assign(env, { NODE_EXTRA_CA_CERTS: cert, LANG: 'en_US.UTF-8', LC_ALL: 'en_US.UTF-8' }, envExtra);
    if (env.NODE_EXTRA_CA_CERTS === '') delete env.NODE_EXTRA_CA_CERTS;
    const child = spawn(process.execPath, ['--max-old-space-size=96', self, '--worker', cfgPath], { env, stdio: ['ignore', 'pipe', 'pipe'] });
    children.add(child);
    const events = []; let pending = '', stderr = '', killed = false, deadline = false;
    const timer = setTimeout(() => { deadline = true; child.kill('SIGKILL'); }, 15000);
    child.stdout.setEncoding('utf8'); child.stderr.setEncoding('utf8');
    child.stderr.on('data', s => { stderr = (stderr + s).slice(-4096); });
    child.stdout.on('data', s => {
      pending += s;
      for (;;) {
        const index = pending.indexOf('\n'); if (index < 0) break;
        const event = JSON.parse(pending.slice(0, index)); pending = pending.slice(index + 1); events.push(event);
        if (!killed && killAt?.(event)) { killed = true; child.kill('SIGKILL'); }
      }
    });
    const [code, signal] = await new Promise((r, reject) => {
      child.once('error', reject); child.once('close', (code, signal) => r([code, signal]));
    });
    clearTimeout(timer); children.delete(child);
    assert.equal(deadline, false, name + ': probe deadline');
    if (!killed) assert.equal(code, 0, stderr);
    return { ...(events.find(e => e.result)?.result ?? {}), killed, code, signal, events, stderr };
  }
  const simple = r => ({ ok: r.ok, cacheHit: r.cacheHit, error: r.error, locale: r.locale,
    killed: r.killed, signal: r.signal });
  const entries = async name => await readdir(join(out, name, 'artifacts')).catch(e => e.code === 'ENOENT' ? [] : Promise.reject(e));
  const save = () => writeFile(join(out, 'result.json'), JSON.stringify({ schema: 1, at: new Date().toISOString(),
    sourceRevision: execFileSync('git', ['rev-parse', 'HEAD'], { encoding: 'utf8' }).trim(),
    node: process.versions.node, host: process.platform + '-' + process.arch, fixtureBytes: bytes.length,
    provisionerSha256: digest(fs.readFileSync(join(root, 'src/managed-artifacts.mjs'))), cases }, null, 2) + '\n');
  try {
    for (const status of [503, 429]) {
      const name = 'http-' + status;
      routes['/' + name] = (req, res, n) => { if (n === 1) { res.writeHead(status, { 'retry-after': '0' }); res.end('transient'); }
        else { res.writeHead(200); res.end(bytes); } };
      const first = await worker(name); assert.equal(first.ok, false); assert.equal(counts['/' + name], 1);
      assert.deepEqual(await entries(name), []);
      const second = await worker(name); assert.equal(second.ok, true);
      cases.push({ name, attemptsBeforeFailure: 1, first: simple(first), manualRetry: simple(second) });
    }
    routes['/reset'] = (req, res, n) => { res.writeHead(200, { 'content-length': bytes.length });
      if (n === 1) { res.write(bytes.subarray(0, 40)); setTimeout(() => res.destroy(), 20); } else res.end(bytes); };
    const reset = await worker('reset'); assert.equal(reset.ok, false); assert.deepEqual(await entries('reset'), []);
    const resetRetry = await worker('reset'); assert.equal(resetRetry.ok, true);
    cases.push({ name: 'socket-reset', first: simple(reset), manualRetry: simple(resetRetry), requests: requests.filter(r => r.path === '/reset') });
    routes['/slow'] = (req, res) => {
      res.writeHead(200, { 'content-length': bytes.length }); let offset = 0;
      const interval = setInterval(() => { res.write(bytes.subarray(offset, offset + 8)); offset += 8;
        if (offset >= bytes.length) { clearInterval(interval); res.end(); } }, 40);
      res.on('close', () => clearInterval(interval));
    };
    const slow = await worker('slow', { shortDeadline: 500 }); assert.equal(slow.ok, false);
    assert.ok(slow.events.some(e => e.progress?.receivedBytes > 0));
    cases.push({ name: 'slow-progressing-download', result: simple(slow), deadline: slow.events.find(e => e.deadlineRequestedMs),
      progressBytes: slow.events.filter(e => e.progress?.receivedBytes).map(e => e.progress.receivedBytes),
      note: 'Deadline accelerated in probe only; production timeout is unchanged.' });
    for (const name of ['kill-download', 'kill-extracted']) {
      if (name === 'kill-download') routes['/' + name] = (req, res, n) => {
        res.writeHead(200, { 'content-length': bytes.length });
        if (n === 1) res.write(bytes.subarray(0, 40)); else res.end(bytes);
      };
      const paused = name === 'kill-extracted' ? { pauseStage: 'Verifying installed' } : {};
      const killed = await worker(name, paused, {}, e => name === 'kill-download'
        ? e.progress?.receivedBytes > 0 : e.progress?.stage.startsWith('Verifying installed'));
      assert.equal(killed.signal, 'SIGKILL'); const before = await entries(name);
      assert.ok(before.some(n => n.startsWith('.install-')));
      const recovered = await worker(name); assert.equal(recovered.ok, true);
      const after = await entries(name); assert.ok(before.every(n => after.includes(n)));
      cases.push({ name, signal: killed.signal, orphanBeforeRetry: before, entriesAfterRetry: after, manualRetry: simple(recovered) });
    }
    const waiting = [];
    routes['/concurrent'] = (req, res) => { waiting.push(res); if (waiting.length === 3)
      for (const response of waiting) { response.writeHead(200); response.end(bytes); } };
    const concurrent = await Promise.all(Array.from({ length: 3 }, () => worker('concurrent')));
    assert.ok(concurrent.every(r => r.ok)); assert.equal(counts['/concurrent'], 3);
    assert.equal((await entries('concurrent')).length, 1);
    cases.push({ name: 'three-process-install-race', requests: counts['/concurrent'], results: concurrent.map(simple), entries: await entries('concurrent') });
    const localFirst = await worker('locale'), localSecond = await worker('locale', {}, { LANG: 'sv_SE.UTF-8', LC_ALL: 'sv_SE.UTF-8' });
    assert.equal(localFirst.ok, true); assert.equal(localSecond.ok, false);
    assert.match(localSecond.error.message, /Changed entries \(0\)/); assert.equal(counts['/locale'], 1);
    cases.push({ name: 'unchanged-cache-different-locale', first: simple(localFirst), second: simple(localSecond), requests: counts['/locale'] });
    const disk = await worker('enospc', { noSpace: true }); assert.equal(disk.ok, false); assert.deepEqual(await entries('enospc'), []);
    cases.push({ name: 'simulated-ENOSPC', result: simple(disk), entries: await entries('enospc') });
    const readOnly = join(out, 'readonly'); await mkdir(readOnly); await chmod(readOnly, 0o500);
    try { const denied = await worker('readonly'); assert.equal(denied.ok, false);
      cases.push({ name: 'read-only-cache', result: simple(denied), requests: counts['/readonly'] ?? 0 }); }
    finally { await chmod(readOnly, 0o700); }
    const cleanup = await worker('cleanup', { failCleanup: true }); assert.equal(cleanup.ok, false);
    const cleanupEntries = await entries('cleanup'); assert.ok(cleanupEntries.some(n => /^[a-f0-9]{64}$/.test(n)));
    for (const name of cleanupEntries.filter(n => n.startsWith('.install-'))) await chmod(join(out, 'cleanup/artifacts', name), 0o700);
    const cleanupRetry = await worker('cleanup'); assert.equal(cleanupRetry.cacheHit, true);
    cases.push({ name: 'post-publish-cleanup-denied', first: simple(cleanup), entries: cleanupEntries, manualRetry: simple(cleanupRetry) });
    const untrusted = await worker('tls', {}, { NODE_EXTRA_CA_CERTS: '' }); assert.equal(untrusted.ok, false);
    const trusted = await worker('tls'); assert.equal(trusted.ok, true);
    cases.push({ name: 'private-CA', untrusted: simple(untrusted), explicitCA: simple(trusted) });
    const proxyArtifact = { ...artifact('proxy'), url: `https://fixture.invalid:${port}/proxy` };
    const proxyEnv = { HTTPS_PROXY: `http://127.0.0.1:${proxy.address().port}` };
    const noOpt = await worker('proxy', { artifact: proxyArtifact }, proxyEnv);
    assert.equal(noOpt.ok, false); assert.equal(proxyConnects, 0);
    const opt = await worker('proxy', { artifact: proxyArtifact }, { ...proxyEnv, NODE_USE_ENV_PROXY: '1' });
    assert.equal(opt.ok, true); assert.equal(proxyConnects, 1);
    cases.push({ name: 'explicit-HTTPS-proxy', withoutNodeOptIn: simple(noOpt), withNodeOptIn: simple(opt), proxyConnects });
    await save(); emit({ output: join(out, 'result.json'), characterizationCases: cases.length });
  } finally {
    await save();
    for (const child of children) child.kill('SIGKILL');
    for (const socket of sockets) socket.destroy();
    await Promise.all([new Promise(r => server.close(r)), new Promise(r => proxy.close(r))]);
    await rm(key, { force: true }); // The ephemeral TLS private key is not evidence.
  }
}
