// Target equivalence (docs/TESTING.md#target-equivalence): one recorded request
// corpus replayed against the same Lean app built for every server target CI can
// run; every response must equal the recorded one (status, the headers the app
// sets, and the body bytes).
//
//   node scripts/equivalence/run.mjs --lasm PATH/bin/lasm.mjs --work NEW_DIR --app fetch-template|fetch-example
//     [--targets node,deno,bun,wasi-http,workers] [--deno PATH] [--bun PATH] [--wasmtime PATH]
//     [--wrangler PATH] [--record] [--wrap "CMD ARGS --"]
//
// Apps (black box: the template comes from `lasm init`, the example is copied out
// of the checkout): test/equivalence/<app>.json holds the requests and, after
// --record (from the node target), the expected responses.
import { spawn, spawnSync } from 'node:child_process';
import { cpSync, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { request } from 'node:http';
import { createServer } from 'node:net';
import { createHash } from 'node:crypto';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { headlessEnvironment } from '../edge/headless.mjs';

const argv = process.argv.slice(2);
const opt = (name, fallback) => { const i = argv.indexOf(name); return i < 0 ? fallback : argv[i + 1]; };
const root = fileURLToPath(new URL('../../', import.meta.url));
const lasm = resolve(opt('--lasm', ''));
const work = resolve(opt('--work', 'equivalence-work'));
const app = opt('--app', 'fetch-template');
const targets = opt('--targets', 'node,deno,wasi-http').split(',').filter(Boolean);
const record = argv.includes('--record');
const tools = { deno: opt('--deno', 'deno'), bun: opt('--bun', 'bun'), wasmtime: opt('--wasmtime', 'wasmtime'), wrangler: opt('--wrangler', 'wrangler') };
const wrap = (opt('--wrap', '') || '').split(' ').filter(Boolean);
const corpusFile = join(root, 'test/equivalence', `${app}.json`);
const corpus = JSON.parse(readFileSync(corpusFile, 'utf8'));
mkdirSync(work, { recursive: true });
// No telemetry, no browser, no display (platform tools run only in CI).
const env = headlessEnvironment(process.env, { LASM_EDITOR: '0', LASM_EQ_VALUE: 'same everywhere' });

// ---------- the project ----------
const project = join(work, app);
if (!existsSync(project)) {
  if (app === 'fetch-template') {
    const r = spawnSync(process.execPath, [lasm, 'init', project, '--template', 'fetch'], { env, encoding: 'utf8' });
    if (r.status !== 0) throw new Error(`lasm init failed: ${r.stdout}${r.stderr}`);
  } else if (app === 'fetch-example') cpSync(join(root, 'examples/fetch'), project, { recursive: true });
  else throw new Error(`unknown app ${app}`);
}

// ---------- targets: build flags and how each serves on a port ----------
const TARGETS = {
  node: { build: [], serve: port => [process.execPath, ['dist/main.mjs'], { PORT: String(port), HOST: '127.0.0.1' }] },
  deno: { build: ['--target', 'deno'], serve: port => [tools.deno, ['run', '-A', '--no-lock', 'deno/main.mjs'], { PORT: String(port) }] },
  bun: { build: ['--target', 'bun'], serve: port => [tools.bun, ['bun/main.mjs'], { PORT: String(port) }] },
  'wasi-http': { build: ['--target', 'wasi-http'], serve: port => [tools.wasmtime, ['serve', '--addr', `127.0.0.1:${port}`, '--env', 'LASM_EQ_VALUE=same everywhere', 'wasi-http/main.wasm'], {}] },
  // CI only (never run platform CLIs locally): workerd through wrangler dev, offline.
  workers: { build: ['--target', 'workers'], serve: port => [tools.wrangler, ['dev', '--cwd', 'workers', '--port', String(port), '--ip', '127.0.0.1', '--var', 'LASM_EQ_VALUE:same everywhere', '--show-interactive-dev-session=false'], { WRANGLER_SEND_METRICS: 'false' }] },
};
function build(target) {
  const args = [lasm, 'build', 'Main.lean', ...TARGETS[target].build];
  const [cmd, ...rest] = wrap.length ? [...wrap, process.execPath, ...args] : [process.execPath, ...args];
  const r = spawnSync(cmd, rest, { cwd: project, env, encoding: 'utf8', timeout: 40 * 60_000 });
  if (r.status !== 0) throw new Error(`lasm build --target ${target} failed:\n${(r.stdout + r.stderr).slice(-4000)}`);
}
const freePort = () => new Promise((ok, fail) => { const s = createServer(); s.once('error', fail); s.listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => ok(port)); }); });

function send(port, req, timeoutMs = 30_000) {
  return new Promise((ok, fail) => {
    const body = req.bodyBase64 ? Buffer.from(req.bodyBase64, 'base64') : req.bodyRepeat ? Buffer.from(req.bodyRepeat.text.repeat(req.bodyRepeat.times)) : req.body !== undefined ? Buffer.from(req.body) : null;
    const headers = { ...(req.headers ?? {}), connection: 'close' };
    if (body) headers['content-length'] = String(body.length);
    // A fresh connection per request (agent: false): a pooled keep-alive socket
    // that the server has just closed would fail with "socket hang up" on reuse.
    const r = request({ host: '127.0.0.1', port, method: req.method, path: req.path, headers, timeout: timeoutMs, agent: false }, res => {
      const chunks = [];
      res.on('data', c => chunks.push(c));
      res.on('end', () => ok({ status: res.statusCode, headers: res.headers, body: Buffer.concat(chunks) }));
      res.on('error', fail);
    });
    r.on('timeout', () => r.destroy(new Error('timeout')));
    r.on('error', fail);
    if (body) r.write(body);
    r.end();
  });
}
// The comparable part of a response: status, the headers the app itself sets,
// and the body (text when it is UTF-8 and short, else its SHA-256 and length).
const COMPARED_HEADERS = ['content-type', 'location', 'x-lasm-reply', 'set-cookie'];
function observe(res) {
  const headers = {};
  for (const h of COMPARED_HEADERS) if (res.headers[h] !== undefined) headers[h] = res.headers[h];
  const text = res.body.toString('utf8');
  const isText = Buffer.from(text, 'utf8').equals(res.body) && res.body.length <= 4096;
  return { status: res.status, headers, ...(isText ? { body: text } : { bodySha256: createHash('sha256').update(res.body).digest('hex'), bodyBytes: res.body.length }) };
}
async function waitReady(port, child, logs, ms = 120_000) {
  const until = Date.now() + ms;
  while (Date.now() < until) {
    if (child.exitCode !== null) throw new Error(`server exited (${child.exitCode}):\n${logs.join('').slice(-3000)}`);
    try { await send(port, { method: 'GET', path: corpus.readyPath ?? '/' }, 2000); return; } catch { await new Promise(r => setTimeout(r, 250)); }
  }
  throw new Error(`server not ready after ${ms} ms:\n${logs.join('').slice(-3000)}`);
}

const results = { app, targets: {}, differences: [], known: [] };
for (const target of targets) {
  console.log(`== ${app} on ${target}`);
  try { build(target); } catch (e) { results.targets[target] = { error: String(e.message) }; results.differences.push({ target, error: 'build failed', detail: String(e.message).slice(-2000) }); console.log(e.message); continue; }
  const port = await freePort();
  const [cmd, args, extra] = TARGETS[target].serve(port);
  const logs = [];
  const child = spawn(cmd, args, { cwd: project, env: { ...env, ...extra }, stdio: ['ignore', 'pipe', 'pipe'], detached: process.platform !== 'win32' });
  child.stdout.on('data', d => logs.push(String(d))); child.stderr.on('data', d => logs.push(String(d)));
  const observed = {};
  try {
    await waitReady(port, child, logs);
    for (const req of corpus.requests) {
      if (req.skip?.includes(target)) continue;
      try { observed[req.name] = observe(await send(port, req)); }
      catch (e) { observed[req.name] = { error: String(e.message) }; console.log(`  ${req.name}: ${e.message}; server log: ${logs.join('').slice(-1500)}`); }
    }
  } catch (e) {
    results.differences.push({ target, error: String(e.message).slice(0, 3000) });
    console.log(String(e.message).slice(0, 3000));
  } finally {
    try { process.platform === 'win32' ? child.kill() : process.kill(-child.pid, 'SIGTERM'); } catch {}
  }
  results.targets[target] = observed;
  // Without recorded responses (or with --record) the node target's responses
  // become the reference for the other targets, and the recorded corpus is
  // written next to the results (to be committed after review).
  if (target === 'node' && (record || !corpus.expected)) {
    if (!corpus.expected) console.log('  no recorded responses yet: node is the reference for this run');
    corpus.expected = observed;
    const recorded = record ? corpusFile : join(work, `${app}.json`);
    writeFileSync(recorded, JSON.stringify(corpus, null, 2) + '\n');
    console.log(`  recorded ${Object.keys(observed).length} responses into ${recorded}`);
  }
  const expected = corpus.expected ?? {};
  for (const req of corpus.requests) {
    if (req.skip?.includes(target) || !(req.name in observed)) continue;
    const want = JSON.stringify(expected[req.name]), got = JSON.stringify(observed[req.name]);
    if (want !== got) {
      // A difference with an open issue ("known": { "targets": [...], "issue": URL }) is reported, not failed.
      const known = req.known?.targets?.includes(target) ? req.known.issue : null;
      (known ? results.known : results.differences).push({ target, request: req.name, ...(known ? { issue: known } : {}), expected: expected[req.name], observed: observed[req.name] });
      console.log(`  ${known ? `KNOWN (${known})` : 'DIFFERS'} ${req.name}: expected ${want?.slice(0, 300)}\n           got      ${got.slice(0, 300)}`);
    }
  }
  console.log(`  ${Object.keys(observed).length} requests, ${results.differences.filter(d => d.target === target).length} differences`);
}
writeFileSync(join(work, `${app}-results.json`), JSON.stringify(results, null, 2) + '\n');
console.log(`${results.differences.length} differences, ${results.known.length} known (${join(work, `${app}-results.json`)})`);
process.exit(results.differences.length ? 1 : 0);
