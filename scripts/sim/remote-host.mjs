// The Node side of a simulation whose program runs in another engine
// (remote.mjs is the program side): loads the app's world, runs the app's
// Sim.lean as built for the target, and answers the program's calls to the
// world. Targets, all local (CI=1, no account, nothing deployed, no window):
//
//   workers                       the Workers build (`lasm build Sim.lean
//                                 --target workers --output DIR`) under
//                                 `wrangler dev` (workerd), over a WebSocket;
//   chromium, firefox, webkit     the browser build (`--target browser
//                                 --output DIR`) in that headless browser of
//                                 the app's Playwright, through an exposed
//                                 function.
//
//   node scripts/sim/remote-host.mjs --target T --dist DIR WORLD.mjs [world options]
//
// Run it from the app's directory (Playwright and wrangler resolve from
// there). The world's options (--seed, --seeds, --minutes, --faults, …) and
// output are exactly those of the Node simulation; the exit status is the
// world's.
import { spawn } from 'node:child_process';
import { createServer } from 'node:http';
import { readFileSync, writeFileSync } from 'node:fs';
import { createRequire } from 'node:module';
import { extname, join, normalize, resolve } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { installRemoteWorld, worldHost } from './remote.mjs';

const argv = process.argv.slice(2);
const take = name => {
  const i = argv.indexOf(name);
  if (i < 0) return undefined;
  const [, value] = argv.splice(i, 2);
  return value;
};
const target = take('--target');
const dist = take('--dist');
const browsers = ['chromium', 'firefox', 'webkit'];
if (!(target === 'workers' || browsers.includes(target)) || !dist || !argv[0]) {
  console.error('usage: node scripts/sim/remote-host.mjs --target workers|chromium|firefox|webkit --dist DIR WORLD.mjs [world options]');
  process.exit(2);
}
const silence = Number(process.env.SIM_REMOTE_SILENCE_MS ?? 300_000);

// The world reads its options from process.argv, as when Sim.lean `require`s it.
process.argv = [process.argv[0], argv[0], ...argv];
const world = await import(pathToFileURL(resolve(argv[0])).href);

const host = worldHost(world);
let lastCall = Date.now();
const answer = text => { lastCall = Date.now(); return host.answer(text); };

/** Resolves with the program's exit status, or rejects. */
const finished = () => new Promise((resolveDone, reject) => {
  const timer = setInterval(() => {
    if (Date.now() - lastCall > silence) reject(new Error(`no call from the program for ${silence / 1000} s`));
  }, 5_000);
  finished.done = m => {
    clearInterval(timer);
    if (m.error !== undefined) reject(new Error(`the program failed: ${m.error}`)); else resolveDone(m.done);
  };
});

let status;
try {
  status = target === 'workers' ? await runWorkers() : await runBrowser();
} catch (e) {
  console.error(`${target}: ${e.message}`);
  status = 1;
}
if (host.exitCode !== null && host.exitCode !== status) {
  console.error(`${target}: the program ended with ${status}, the world said ${host.exitCode}`);
  status = status || 1;
}
process.exit(status);

/* ---------------------------------------------------------------- Browser */

async function runBrowser() {
  const require = createRequire(join(process.cwd(), 'package.json'));
  const playwright = require('@playwright/test');
  const types = { '.html': 'text/html', '.js': 'text/javascript', '.mjs': 'text/javascript', '.wasm': 'application/wasm', '.json': 'application/json', '.css': 'text/css' };
  const root = resolve(dist);
  const server = createServer((req, res) => {
    const path = normalize(decodeURIComponent(new URL(req.url, 'http://x').pathname)).replace(/^([/\\])+/, '');
    if (path.startsWith('..')) { res.writeHead(403).end(); return; }
    const file = path || 'index.html';
    let body;
    // read first: a missing file (Firefox asks for /favicon.ico) is a 404, not a second writeHead
    try { body = readFileSync(join(root, file)); } catch { res.writeHead(404).end(); return; }
    res.writeHead(200, { 'content-type': types[extname(file)] ?? 'application/octet-stream' }).end(body);
  });
  await new Promise(r => server.listen(0, '127.0.0.1', r));
  const browser = await playwright[target].launch({ headless: true });
  try {
    const page = await browser.newPage();
    const done = finished();
    page.on('pageerror', e => console.error(`${target} page error: ${e.message}`));
    page.on('console', m => { if (m.type() === 'error') console.error(`${target} console: ${m.text()}`); });
    page.on('crash', () => finished.done({ error: 'the page crashed' }));
    await page.exposeFunction('lasmSimSend', answer);
    await page.exposeFunction('lasmSimDone', text => finished.done(JSON.parse(text)));
    await page.addInitScript(`(${installRemoteWorld})(text => globalThis.lasmSimSend(text));
(async () => {
  while (typeof globalThis.__lasmDefaultExport !== 'function') await new Promise(r => setTimeout(r, 20));
  try { await globalThis.lasmSimDone(JSON.stringify({ done: Number(await globalThis.__lasmDefaultExport()) })); }
  catch (e) { await globalThis.lasmSimDone(JSON.stringify({ error: String(e && e.stack || e) })); }
})();`);
    await page.goto(`http://127.0.0.1:${server.address().port}/`);
    return await done;
  } finally {
    await browser.close();
    await new Promise(r => server.close(r));
  }
}

/* ---------------------------------------------------------------- Workers */

async function runWorkers() {
  const root = resolve(dist);
  writeFileSync(join(root, 'sim-entry.mjs'), `// Written by scripts/sim/remote-host.mjs: the simulation's Worker.
import lean from './worker.mjs';
import { serveRemoteWorld } from ${JSON.stringify(fileURLToPath(new URL('remote.mjs', import.meta.url)))};
export default serveRemoteWorld(lean);
`);
  writeFileSync(join(root, 'wrangler.sim.toml'), `# Written by scripts/sim/remote-host.mjs (wrangler dev only: local workerd).
name = "lasm-sim"
main = "sim-entry.mjs"
compatibility_date = "2026-10-01"

[[rules]]
type = "CompiledWasm"
globs = ["**/*.wasm"]
fallthrough = false
`);
  const port = Number(process.env.SIM_WORKERS_PORT ?? 8797);
  const child = spawn('wrangler', ['dev', '-c', join(root, 'wrangler.sim.toml'), '--port', String(port), '--ip', '127.0.0.1', '--persist-to', join(root, '.wrangler-state')],
    { cwd: process.cwd(), stdio: ['ignore', 'inherit', 'inherit'], detached: true, env: { ...process.env, CI: '1', WRANGLER_SEND_METRICS: 'false' } });
  const exited = new Promise(r => child.once('exit', r));
  try {
    const started = Date.now();
    for (;;) {
      if (child.exitCode !== null) throw new Error(`wrangler dev exited (${child.exitCode})`);
      try { await (await fetch(`http://127.0.0.1:${port}/`, { signal: AbortSignal.timeout(10_000) })).arrayBuffer(); break; } catch {}
      if (Date.now() - started > 180_000) throw new Error('wrangler dev did not answer within 3 minutes');
      await new Promise(r => setTimeout(r, 500));
    }
    const done = finished();
    const socket = new WebSocket(`ws://127.0.0.1:${port}/`);
    socket.addEventListener('message', async event => {
      const m = JSON.parse(event.data);
      if (m.q !== undefined) socket.send(JSON.stringify({ i: m.i, r: await answer(m.q) }));
      else finished.done(m);
    });
    socket.addEventListener('close', e => finished.done({ error: `the socket closed (${e.code} ${e.reason})` }));
    socket.addEventListener('error', () => finished.done({ error: 'the socket failed' }));
    return await done;
  } finally {
    try { process.kill(-child.pid, 'SIGTERM'); } catch {}
    const timer = setTimeout(() => { try { process.kill(-child.pid, 'SIGKILL'); } catch {} }, 10_000);
    await exited;
    clearTimeout(timer);
  }
}
