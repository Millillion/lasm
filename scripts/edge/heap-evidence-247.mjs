// TEMPORARY evidence for issue #247 (removed before the issue's PR merges).
// The edge targets' WebAssembly linear memory with Emscripten's libmimalloc
// (before: LASM_EVIDENCE_247_MIMALLOC=sysroot, 16 MiB arenas) and Lasm's build
// of it (after: 2 MiB arenas, src/mimalloc), both linked by this checkout's
// CLI in the same job. Local runtimes only (wrangler dev's workerd, Node, Deno,
// Bun, headless Chromium; no account, no deployment).
//
// A probe is patched into this checkout's src/edge/edge-start.mjs, so every
// build reports Module.HEAPU8.buffer.byteLength: GET /__lasm_mem answers
// { start, now }, every response carries x-lasm-wasm-memory, each growth is
// logged ("[lasm-mem] <bytes>"), and in a browser globalThis.__lasmMem().
// Wasm memory never shrinks, so the size after a request is its peak.
//
//   node heap-evidence-247.mjs PART TOOLS_BIN RESULT.json
//   PART: edge-pure | folio | porter | ledger | conduit
import { spawn, spawnSync, execFileSync } from 'node:child_process';
import { chmodSync, cpSync, existsSync, mkdtempSync, readFileSync, rmSync, writeFileSync, statSync } from 'node:fs';
import { createServer } from 'node:http';
import { createRequire } from 'node:module';
import { tmpdir } from 'node:os';
import { extname, join, normalize, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { headlessEnvironment } from './headless.mjs';

const [part, binArg, resultFile] = process.argv.slice(2);
const bin = resolve(binArg);
const root = fileURLToPath(new URL('../..', import.meta.url));
process.env.PATH = `${bin}:${process.env.PATH}`;
const sleep = ms => new Promise(r => setTimeout(r, ms));
const MiB = n => n == null || Number.isNaN(n) ? null : +(n / 1048576).toFixed(2);
const variants = { before: 'sysroot', after: 'lasm' };
const result = { part, before: {}, after: {} };
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 1) + '\n');
const log = (...a) => console.log('[247]', ...a);
const envFor = variant => headlessEnvironment(process.env, { LASM_EVIDENCE_247_MIMALLOC: variants[variant] });

// 1. The probe.
const probe = `  { // TEMPORARY issue #247 probe
    const mem = () => Module.HEAPU8.buffer.byteLength;
    const atStart = mem();
    let peak = atStart;
    console.log('[lasm-mem] start ' + atStart);
    globalThis.__lasmMem = () => ({ start: atStart, now: mem() });
    const h = globalThis.__lasmDefaultExport;
    if (h !== undefined) {
      const call = typeof h === 'function' ? h : h.fetch.bind(h);
      globalThis.__lasmDefaultExport = async (request, ...rest) => {
        if (new URL(request.url).pathname === '/__lasm_mem') return new Response(JSON.stringify(globalThis.__lasmMem()), { headers: { 'content-type': 'application/json' } });
        const r = await call(request, ...rest);
        const now = mem();
        if (now > peak) { peak = now; console.log('[lasm-mem] ' + now); }
        try {
          const headers = new Headers(r.headers);
          headers.set('x-lasm-wasm-memory', String(now));
          return new Response(r.body, { status: r.status, statusText: r.statusText, headers });
        } catch { return r; }
      };
    }
  }
`;
{
  const file = join(root, 'src/edge/edge-start.mjs');
  const text = readFileSync(file, 'utf8'), anchor = '  host.flush();\n  return Module;';
  if (!text.includes('__lasmMem')) {
    if (!text.includes(anchor)) throw new Error(`${file}: no probe anchor`);
    writeFileSync(file, text.replace(anchor, '  host.flush();\n' + probe + '  return Module;'));
  }
}

const run = (cmd, args, cwd, variant) => {
  log('$', cmd, ...args, `(in ${cwd}, ${variant})`);
  execFileSync(cmd, args, { cwd, env: envFor(variant), stdio: 'inherit', timeout: 5_400_000 });
};
const lasm = (cwd, variant, ...args) => run(process.execPath, [join(root, 'bin/lasm.mjs'), ...args], cwd, variant);
// npm scripts of an example run this checkout's CLI (its `lasm` is replaced).
function useCheckoutCli(project) {
  const shim = join(project, 'node_modules/.bin/lasm');
  rmSync(shim, { force: true });
  writeFileSync(shim, `#!/bin/sh\nexec ${JSON.stringify(process.execPath)} ${JSON.stringify(join(root, 'bin/lasm.mjs'))} "$@"\n`);
  chmodSync(shim, 0o755);
}
const wasmSize = file => existsSync(file) ? statSync(file).size : null;

function serve(cmd, args, cwd, port, variant, extraEnv = {}) {
  const child = spawn(cmd, args, { cwd, env: { ...envFor(variant), PORT: String(port), ...extraEnv }, stdio: ['ignore', 'pipe', 'pipe'], detached: true });
  let out = '';
  const keep = c => { out = (out + c).slice(-200000); };
  child.stdout.on('data', keep); child.stderr.on('data', keep);
  const exited = new Promise(r => child.once('exit', r));
  const base = `http://127.0.0.1:${port}`;
  return {
    base, log: () => out,
    async ready() {
      const deadline = Date.now() + 180_000;
      while (Date.now() < deadline) {
        if (child.exitCode !== null) throw new Error(`${cmd} exited:\n${out.slice(-4000)}`);
        try { const r = await fetch(base + '/__lasm_mem', { signal: AbortSignal.timeout(10_000) }); if (r.ok) return r.json(); } catch {}
        await sleep(500);
      }
      throw new Error(`${cmd} did not answer:\n${out.slice(-4000)}`);
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
const memLines = text => [...text.matchAll(/\[lasm-mem\] (start )?(\d+)/g)].map(m => ({ start: !!m[1], bytes: Number(m[2]) }));

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
  // Throughput: 8 at a time, GET / and GET /primes/1000.
  for (const path of ['/', '/primes/1000']) {
    const rates = p[`requestsPerSecond ${path}`] = [];
    for (let round = 0; round < 3; round++) {
      const n = 2000; let next = 0;
      const started = performance.now();
      await Promise.all(Array.from({ length: 8 }, async () => { while (next++ < n) { const r = await fetch(base + path); await r.arrayBuffer(); } }));
      rates.push(Math.round(n / ((performance.now() - started) / 1000)));
    }
  }
  p.afterThroughput = MiB((await mem(base)).now);
  return p;
}

async function edgePure() {
  const dirs = {};
  for (const variant of Object.keys(variants)) {
    const dir = dirs[variant] = mkdtempSync(join(tmpdir(), `edge-pure-247-${variant}-`));
    cpSync(join(root, 'examples/edge-pure'), dir, { recursive: true });
    for (const target of ['workers', 'deno', 'bun']) lasm(dir, variant, 'build', 'Main.lean', '--target', target);
    result[variant].wasmBytes = wasmSize(join(dir, 'workers/lasm/program.wasm'));
  }
  // Each runtime: before, then after, on the same runner.
  for (const [name, cmd, args, sub, port] of [
    ['workers (wrangler dev, workerd)', join(bin, 'wrangler'), ['dev', '--port', '8801', '--ip', '127.0.0.1'], 'workers', 8801],
    ['deno', join(bin, 'deno'), ['run', '-A', 'deno/main.mjs'], '.', 8802],
    ['bun', join(bin, 'bun'), ['bun/main.mjs'], '.', 8803],
  ]) {
    for (const variant of Object.keys(variants)) {
      const server = serve(cmd, args, join(dirs[variant], sub), port, variant);
      try {
        const first = await server.ready();
        result[variant][name] = { start: MiB(first.start), ...(await profile(server.base)) };
      } catch (e) {
        result[variant][name] = { error: String(e.message).slice(0, 4000) };
      } finally { await server.stop(); }
      log(variant, name, JSON.stringify(result[variant][name]));
      save();
    }
  }
  // Node (and Deno, Bun) running the Workers output in process: scripts/edge/check-worker.mjs.
  for (const [engine, command, prefix] of [['node', process.execPath, []], ['deno', join(bin, 'deno'), ['run', '-A']], ['bun', join(bin, 'bun'), []]]) {
    for (const variant of Object.keys(variants)) {
      const file = join(dirs[variant], `check-${engine}.json`);
      const r = spawnSync(command, [...prefix, join(root, 'scripts/edge/check-worker.mjs'), join(dirs[variant], 'workers'), 'pure', file], { env: envFor(variant), encoding: 'utf8', maxBuffer: 64 << 20 });
      try {
        const c = JSON.parse(readFileSync(file, 'utf8'));
        result[variant][`check-worker ${engine}`] = { passed: c.passed, wasmMemoryMiB: c.wasmMemoryMiB, wasmMemoryAfterMiB: c.wasmMemoryAfterMiB, startupMs: c.startupMs,
          trivialMsPerRequest: c.trivialMsPerRequest, jsonMsPerRequest: c.jsonMsPerRequest };
      } catch { result[variant][`check-worker ${engine}`] = { error: (r.stderr || r.stdout || '').slice(-2000) }; }
      log(variant, engine, JSON.stringify(result[variant][`check-worker ${engine}`]));
      save();
    }
  }
}

async function folio() {
  const dir = join(root, 'examples/folio');
  useCheckoutCli(dir);
  const casesFile = join(dir, 'test/_cases-247.mjs');
  {
    const text = readFileSync(join(dir, 'test/pathological.mjs'), 'utf8');
    const end = text.indexOf('\nfor (const name of Object.keys(skip))');
    if (end < 0) throw new Error('pathological.mjs: the cases object was not found');
    writeFileSync(casesFile, text.slice(0, end) + '\nexport { cases };\n');
  }
  const { cases } = await import(casesFile);
  const all = [['trivial', ['# hi\n']], ...Object.entries(cases)];
  const { runDirectory, seed } = await import(join(dir, 'test/platforms.mjs'));
  const { chromium } = createRequire(join(dir, 'package.json'))('@playwright/test');
  for (const variant of Object.keys(variants)) {
    const out = result[variant];
    run('npm', ['run', 'build:workers'], dir, variant);
    run('npm', ['run', 'build:batch-browser'], dir, variant);
    out.workersWasmBytes = wasmSize(join(dir, 'workers/lasm/program.wasm'));
    out.browserWasmBytes = wasmSize(join(dir, 'dist/batch-browser/program.wasm'));
    const data = runDirectory('workers');
    cpSync(join(dir, 'site'), join(data, 'site'), { recursive: true });
    seed('workers', data);
    // The 652 CommonMark examples through one Workers instance (POST /api/render): its peak and time.
    {
      const server = serve(join(bin, 'wrangler'), ['dev', '--port', '8804', '--ip', '127.0.0.1', '--persist-to', join(data, 'state')], dir, 8804, variant);
      try {
        const start = (await server.ready()).now;
        const spec = JSON.parse(readFileSync(join(dir, 'test/commonmark-spec/spec.json'), 'utf8'));
        const started = performance.now();
        let ok = 0, peak = start;
        for (const example of spec) {
          const r = await fetch(server.base + '/api/render?raw_html=1', { method: 'POST', body: example.markdown });
          await r.arrayBuffer();
          if (r.status === 200) ok++;
          peak = Math.max(peak, Number(r.headers.get('x-lasm-wasm-memory')) || 0);
        }
        out.spec = { examples: spec.length, ok, seconds: +((performance.now() - started) / 1000).toFixed(2), start: MiB(start), peak: MiB(peak) };
      } catch (e) { out.spec = { error: String(e.message).slice(-2000) }; }
      finally { await server.stop(); }
      log(variant, 'spec', JSON.stringify(out.spec));
      save();
    }
    out.workers = [];
    for (const [name, [input]] of all) {
      const server = serve(join(bin, 'wrangler'), ['dev', '--port', '8804', '--ip', '127.0.0.1', '--persist-to', join(data, 'state')], dir, 8804, variant);
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
        try { const m = await mem(server.base); row.after = MiB(m.now); } catch {}
        if (row.status !== 200) row.log = server.log().slice(-1500);
      } catch (e) { row.error = String(e.message).slice(-1500); }
      finally { await server.stop(); }
      log(variant, 'workers', JSON.stringify({ ...row, log: undefined }));
      out.workers.push(row);
      save();
    }
    rmSync(data, { recursive: true, force: true });

    // Chromium (the pinned Playwright's), BatchBrowser.lean: a fresh context per case.
    const site = join(dir, 'dist/batch-browser');
    const types = { '.html': 'text/html', '.js': 'text/javascript', '.mjs': 'text/javascript', '.wasm': 'application/wasm', '.json': 'application/json' };
    const http = createServer((req, res) => {
      const path = normalize(decodeURIComponent(new URL(req.url, 'http://x').pathname)).replace(/^([/\\])+/, '');
      try { res.writeHead(200, { 'content-type': types[extname(path || 'index.html')] ?? 'application/octet-stream' }).end(readFileSync(join(site, path || 'index.html'))); }
      catch { res.writeHead(404).end(); }
    });
    await new Promise(r => http.listen(8805, '127.0.0.1', r));
    const browser = await chromium.launch({ headless: true });
    out.chromium = [];
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
          row.start = MiB(m.start);
          row.peak = MiB(m.now);
          row.outputCharacters = await page.evaluate(() => globalThis.folioBatchOutput.length);
          if (errors.length) row.errors = errors.slice(0, 3);
        } catch (e) { row.error = String(e.message).slice(0, 1500); }
        finally { await context.close(); }
        log(variant, 'chromium', JSON.stringify(row));
        out.chromium.push(row);
        save();
      }
    } finally { await browser.close(); http.close(); }
  }
}

// Porter, Ledger and Conduit: their own suites against wrangler dev (test/platforms.mjs
// workers); the probe's log lines in the suite's output give the memory.
const suites = {
  porter: [['test/oracles.mjs', '--platform', 'workers', '--name', 'workers'], ['test/attacks.mjs', '--platform', 'workers', '--name', 'workers']],
  ledger: [['test/api.mjs', '--platform', 'workers'], ['test/bank.mjs', '--platform', 'workers', '--seconds', '20', '--writers', '4', '--readers', '2']],
  conduit: [['test/api.mjs', '--platform', 'workers']],
};
async function app(name) {
  const dir = join(root, 'examples', name);
  useCheckoutCli(dir);
  for (const variant of Object.keys(variants)) {
    const out = result[variant];
    run('npm', ['run', 'build:workers'], dir, variant);
    out.workersWasmBytes = wasmSize(join(dir, 'workers/lasm/program.wasm'));
    out.suites = [];
    // Each suite twice, so a throughput difference between runs is visible.
    for (const round of [1, 2]) {
      for (const args of suites[name]) {
        const started = performance.now();
        const r = spawnSync(process.execPath, args, { cwd: dir, env: envFor(variant), encoding: 'utf8', maxBuffer: 256 << 20, timeout: 1_800_000 });
        const text = (r.stdout ?? '') + (r.stderr ?? '');
        const lines = memLines(text), starts = lines.filter(l => l.start).map(l => l.bytes), all = lines.map(l => l.bytes);
        const row = { suite: args.join(' '), round, status: r.status, seconds: +((performance.now() - started) / 1000).toFixed(2),
          instances: starts.length, start: MiB(starts.length ? Math.min(...starts) : null), peak: MiB(all.length ? Math.max(...all) : null),
          growth: [...new Set(all)].sort((a, b) => a - b).map(MiB), tail: text.split('\n').filter(l => !l.includes('[lasm-mem]')).slice(-12).join('\n') };
        log(variant, JSON.stringify({ ...row, tail: undefined }));
        out.suites.push(row);
        save();
      }
    }
  }
}

if (part === 'edge-pure') await edgePure();
else if (part === 'folio') await folio();
else if (suites[part]) await app(part);
else throw new Error(`Unknown part ${part}`);
save();
log('done');
