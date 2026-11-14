// TEMPORARY evidence for issue #247 (removed before the issue's PR merges).
// The edge targets' WebAssembly linear memory, on local runtimes only (wrangler
// dev's workerd, Deno, Bun, headless Chromium; no account, no deployment):
// after start, after a trivial request, its growth steps, throughput, and the
// peak of each of Folio's pathological cases in a fresh Workers instance and
// a fresh Chromium page.
//
// A probe is patched into the CLI's src/edge/edge-start.mjs (in CLI_ROOT, a
// throwaway install or checkout), so every build it makes reports
// Module.HEAPU8.buffer.byteLength: GET /__lasm_mem answers { start, now }, and
// every response carries x-lasm-wasm-memory; in a browser, globalThis.__lasmMem().
//
//   node heap-evidence-247.mjs FOLIO_DIR CLI_ROOT TOOLS_BIN RESULT.json
import { spawn, execFileSync } from 'node:child_process';
import { cpSync, mkdtempSync, readFileSync, writeFileSync, statSync } from 'node:fs';
import { createServer } from 'node:http';
import { createRequire } from 'node:module';
import { tmpdir } from 'node:os';
import { extname, join, normalize, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { headlessEnvironment } from './headless.mjs';

const [folioArg, cliArg, binArg, resultFile] = process.argv.slice(2);
const folio = resolve(folioArg), cli = resolve(cliArg), bin = resolve(binArg);
const root = fileURLToPath(new URL('../..', import.meta.url));
process.env.PATH = `${bin}:${process.env.PATH}`;
const env = headlessEnvironment(process.env);
const sleep = ms => new Promise(r => setTimeout(r, ms));
const MiB = n => n == null ? null : +(n / 1048576).toFixed(2);
const result = { cli: JSON.parse(readFileSync(join(cli, 'package.json'), 'utf8')).version, edgePure: {}, folio: {} };
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 1) + '\n');
const log = (...a) => console.log('[247]', ...a);

// 1. The probe.
const probe = `  { // TEMPORARY issue #247 probe
    const mem = () => Module.HEAPU8.buffer.byteLength;
    const atStart = mem();
    globalThis.__lasmMem = () => ({ start: atStart, now: mem() });
    const h = globalThis.__lasmDefaultExport;
    if (h !== undefined) {
      const call = typeof h === 'function' ? h : h.fetch.bind(h);
      globalThis.__lasmDefaultExport = async (request, ...rest) => {
        if (new URL(request.url).pathname === '/__lasm_mem') return new Response(JSON.stringify(globalThis.__lasmMem()), { headers: { 'content-type': 'application/json' } });
        const r = await call(request, ...rest);
        const headers = new Headers(r.headers);
        headers.set('x-lasm-wasm-memory', String(mem()));
        return new Response(r.body, { status: r.status, statusText: r.statusText, headers });
      };
    }
  }
`;
{
  const file = join(cli, 'src/edge/edge-start.mjs');
  const text = readFileSync(file, 'utf8'), anchor = '  host.flush();\n  return Module;';
  if (!text.includes('__lasmMem')) {
    if (!text.includes(anchor)) throw new Error(`${file}: no probe anchor`);
    writeFileSync(file, text.replace(anchor, '  host.flush();\n' + probe + '  return Module;'));
  }
}

const run = (cmd, args, cwd) => { log('$', cmd, ...args, `(in ${cwd})`); execFileSync(cmd, args, { cwd, env, stdio: 'inherit', timeout: 3_600_000 }); };
const lasm = (cwd, ...args) => run(process.execPath, [join(cli, 'bin/lasm.mjs'), ...args], cwd);
const wasmSize = file => statSync(file).size;

function serve(cmd, args, cwd, port) {
  const child = spawn(cmd, args, { cwd, env: { ...env, PORT: String(port) }, stdio: ['ignore', 'pipe', 'pipe'], detached: true });
  let out = '';
  const keep = c => { out = (out + c).slice(-20000); };
  child.stdout.on('data', keep); child.stderr.on('data', keep);
  const exited = new Promise(r => child.once('exit', r));
  const base = `http://127.0.0.1:${port}`;
  return {
    base, log: () => out,
    async ready() {
      const deadline = Date.now() + 180_000;
      while (Date.now() < deadline) {
        if (child.exitCode !== null) throw new Error(`${cmd} exited:\n${out}`);
        try { const r = await fetch(base + '/__lasm_mem', { signal: AbortSignal.timeout(10_000) }); if (r.ok) return r.json(); } catch {}
        await sleep(500);
      }
      throw new Error(`${cmd} did not answer:\n${out}`);
    },
    async stop() {
      if (child.exitCode === null) {
        try { process.kill(-child.pid, 'SIGTERM'); } catch {}
        const t = setTimeout(() => { try { process.kill(-child.pid, 'SIGKILL'); } catch {} }, 10_000);
        await exited; clearTimeout(t);
      }
    },
  };
}
const mem = async base => (await fetch(base + '/__lasm_mem')).json();

// The growth profile of one served edge-pure build.
async function profile(base) {
  const p = { afterStart: MiB((await mem(base)).now), steps: [] };
  let last = null;
  const request = async (label, method, path, body) => {
    const r = await fetch(base + path, { method, body });
    await r.arrayBuffer();
    const bytes = Number(r.headers.get('x-lasm-wasm-memory'));
    if (bytes !== last) { p.steps.push({ after: label, status: r.status, MiB: MiB(bytes) }); last = bytes; }
    return bytes;
  };
  p.afterTrivial = MiB(await request('GET / #1', 'GET', '/'));
  for (let i = 2; i <= 200; i++) await request(`GET / #${i}`, 'GET', '/');
  for (const n of [1000, 50000, 200000]) await request(`GET /primes/${n}`, 'GET', `/primes/${n}`);
  await request('GET /fib/27', 'GET', '/fib/27');
  for (const kib of [64, 1024, 4096, 16384]) await request(`POST /words ${kib} KiB`, 'POST', '/words', 'lean edge memory words '.repeat(Math.ceil(kib * 1024 / 24)).slice(0, kib * 1024));
  for (let i = 1; i <= 200; i++) await request(`GET / after load #${i}`, 'GET', '/');
  p.final = MiB(last);
  // Throughput: GET /, 8 at a time.
  p.requestsPerSecond = [];
  for (let round = 0; round < 3; round++) {
    const n = 2000; let next = 0;
    const started = performance.now();
    await Promise.all(Array.from({ length: 8 }, async () => { while (next++ < n) { const r = await fetch(base + '/'); await r.arrayBuffer(); } }));
    p.requestsPerSecond.push(Math.round(n / ((performance.now() - started) / 1000)));
  }
  p.afterThroughput = MiB((await mem(base)).now);
  return p;
}

// 2. examples/edge-pure on workerd, Deno and Bun.
const pure = mkdtempSync(join(tmpdir(), 'edge-pure-247-'));
cpSync(join(root, 'examples/edge-pure'), pure, { recursive: true });
for (const target of ['workers', 'deno', 'bun']) lasm(pure, 'build', 'Main.lean', '--target', target);
for (const [name, cmd, args, cwd, port, wasm] of [
  ['workers (wrangler dev, workerd)', join(bin, 'wrangler'), ['dev', '--port', '8801', '--ip', '127.0.0.1'], join(pure, 'workers'), 8801, 'workers/lasm/program.wasm'],
  ['deno', join(bin, 'deno'), ['run', '-A', 'deno/main.mjs'], pure, 8802, 'deno/lasm/program.wasm'],
  ['bun', join(bin, 'bun'), ['bun/main.mjs'], pure, 8803, 'bun/lasm/program.wasm'],
]) {
  const server = serve(cmd, args, cwd, port);
  try {
    const first = await server.ready();
    result.edgePure[name] = { wasmBytes: wasmSize(join(pure, wasm)), start: MiB(first.start), ...(await profile(server.base)) };
  } catch (e) {
    result.edgePure[name] = { error: String(e.message).slice(0, 4000) };
  } finally { await server.stop(); }
  log(name, JSON.stringify(result.edgePure[name]));
  save();
}

// 3. Folio's site server on Workers, and its browser renderer in Chromium:
// each pathological case in a fresh instance.
const casesFile = join(folio, 'test/_cases-247.mjs');
{
  const text = readFileSync(join(folio, 'test/pathological.mjs'), 'utf8');
  const end = text.indexOf('\nfor (const name of Object.keys(skip))');
  if (end < 0) throw new Error('pathological.mjs: the cases object was not found');
  writeFileSync(casesFile, text.slice(0, end) + '\nexport { cases };\n');
}
const { cases } = await import(casesFile);
const all = [['trivial', ['# hi\n']], ...Object.entries(cases)];
run('npm', ['run', 'build:workers'], folio);
run('npm', ['run', 'build:batch-browser'], folio);
result.folio.workersWasmBytes = wasmSize(join(folio, 'workers/lasm/program.wasm'));

const { platforms, runDirectory, seed } = await import(join(folio, 'test/platforms.mjs'));
const data = runDirectory('workers');
cpSync(join(folio, 'site'), join(data, 'site'), { recursive: true });
seed('workers', data);
result.folio.workers = [];
for (const [name, [input]] of all) {
  const server = serve(join(bin, 'wrangler'), ['dev', '--port', '8804', '--ip', '127.0.0.1', '--persist-to', join(data, 'state')], folio, 8804);
  const row = { name, characters: input.length };
  try {
    row.start = MiB((await server.ready()).now);
    const started = performance.now();
    try {
      const r = await fetch(server.base + '/api/render?raw_html=1', { method: 'POST', body: input, signal: AbortSignal.timeout(180_000) });
      row.bytes = (await r.arrayBuffer()).byteLength;
      row.status = r.status;
      row.peak = MiB(Number(r.headers.get('x-lasm-wasm-memory')) || null);
    } catch (e) { row.status = String(e.message).slice(0, 200); }
    row.seconds = +((performance.now() - started) / 1000).toFixed(2);
    try { const m = await mem(server.base); row.after = MiB(m.now); row.afterStart = MiB(m.start); } catch {}
    if (row.status !== 200) row.log = server.log().slice(-1500);
  } catch (e) { row.error = String(e.message).slice(-1500); }
  finally { await server.stop(); }
  log('workers', JSON.stringify({ ...row, log: undefined }));
  result.folio.workers.push(row);
  save();
}

// Chromium (the pinned Playwright's), BatchBrowser.lean.
const { chromium } = createRequire(join(folio, 'package.json'))('@playwright/test');
const dir = join(folio, 'dist/batch-browser');
const types = { '.html': 'text/html', '.js': 'text/javascript', '.mjs': 'text/javascript', '.wasm': 'application/wasm', '.json': 'application/json' };
const site = createServer((req, res) => {
  const path = normalize(decodeURIComponent(new URL(req.url, 'http://x').pathname)).replace(/^([/\\])+/, '');
  try { res.writeHead(200, { 'content-type': types[extname(path || 'index.html')] ?? 'application/octet-stream' }).end(readFileSync(join(dir, path || 'index.html'))); }
  catch { res.writeHead(404).end(); }
});
await new Promise(r => site.listen(8805, '127.0.0.1', r));
const browser = await chromium.launch({ headless: true });
result.folio.chromium = [];
try {
  for (const [name, [input]] of all) {
    const row = { name, characters: input.length };
    const context = await browser.newContext();
    try {
      const page = await context.newPage();
      const errors = [];
      page.on('pageerror', e => errors.push(String(e)));
      await page.addInitScript(text => { globalThis.folioBatchInput = text; }, `u ${[...input].length}\n${input}`);
      const started = performance.now();
      await page.goto('http://127.0.0.1:8805/');
      await page.waitForFunction(() => typeof globalThis.folioBatchOutput === 'string' && typeof globalThis.__lasmMem === 'function', null, { timeout: 180_000, polling: 100 });
      row.seconds = +((performance.now() - started) / 1000).toFixed(2);
      const m = await page.evaluate(() => globalThis.__lasmMem());
      row.peak = MiB(m.now);
      row.outputCharacters = await page.evaluate(() => globalThis.folioBatchOutput.length);
      if (errors.length) row.errors = errors.slice(0, 3);
    } catch (e) { row.error = String(e.message).slice(0, 1500); }
    finally { await context.close(); }
    log('chromium', JSON.stringify(row));
    result.folio.chromium.push(row);
    save();
  }
} finally { await browser.close(); site.close(); }
save();
log('done');
