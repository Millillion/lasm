// Starts a Tandem server for the tests.
//
// startTandem(): the Node build (dist/server/main.mjs) on a free port with a
// fresh database, or any other command ({port}: its port), or an already
// running server (`url`). Returns { base, stop, restart, kill }: `kill`
// ends the server with SIGKILL (no clean shutdown) and `restart` starts it
// again on the same port and database.
import { spawn } from 'node:child_process';
import { mkdtempSync, rmSync } from 'node:fs';
import { createServer } from 'node:net';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

export const root = fileURLToPath(new URL('..', import.meta.url));

export const freePort = () => new Promise((resolve, reject) => {
  const server = createServer().listen(0, '127.0.0.1', () => {
    const { port } = server.address();
    server.close(() => resolve(port));
  }).on('error', reject);
});

export async function waitFor(url, child, timeoutMs = 60_000) {
  const end = Date.now() + timeoutMs;
  while (Date.now() < end) {
    if (child && child.exitCode !== null) throw new Error(`the server exited with code ${child.exitCode}`);
    try { if ((await fetch(url)).ok) return; } catch {}
    await new Promise(r => setTimeout(r, 200));
  }
  throw new Error(`no answer from ${url} within ${timeoutMs / 1000} s`);
}

/** The arguments every test script takes: --url, --command, --platform, --name, --seed, --seconds. */
export function args(argv = process.argv.slice(2)) {
  const get = k => { const i = argv.indexOf(k); return i >= 0 ? argv[i + 1] : undefined; };
  return { url: get('--url'), command: get('--command'), platform: get('--platform'), name: get('--name'),
           seed: get('--seed'), seconds: get('--seconds'), equivalence: argv.includes('--equivalence') };
}

export async function startTandem({ command, url, platform, env = {} } = {}) {
  if (url) return { base: url.replace(/\/$/, ''), stop: async () => {}, restart: null, kill: null };
  if (platform) {
    const { baseUrl, startServer } = await import('./platforms.mjs');
    const port = await freePort();
    const server = startServer(platform, port);
    const base = baseUrl(platform, port);
    try { await waitFor(`${base}/health`, server.child, 600_000); }
    catch (e) { server.stop(); throw e; }
    return { base, stop: async () => server.stop(), restart: null, kill: null, platform };
  }
  const port = await freePort();
  const base = `http://127.0.0.1:${port}`;
  const work = mkdtempSync(join(tmpdir(), 'tandem-test-'));
  const cmd = (command ?? `node ${JSON.stringify(join(root, 'dist/server/main.mjs'))}`).replaceAll('{port}', String(port));
  let child;
  const launch = async () => {
    child = spawn(cmd, {
      shell: true, cwd: root, stdio: ['ignore', 'inherit', 'inherit'], detached: process.platform !== 'win32',
      env: { ...process.env, PORT: String(port), HOST: '127.0.0.1', DATABASE_PATH: join(work, 'tandem.db'),
             TANDEM_POLL_SECONDS: '2', ...env },
    });
    await waitFor(`${base}/health`, child, 600_000);
  };
  const signal = sig => { try { process.kill(process.platform === 'win32' ? child.pid : -child.pid, sig); } catch {} };
  process.on('exit', () => signal('SIGKILL'));
  await launch();
  return {
    base,
    kill: async () => { signal('SIGKILL'); await new Promise(r => child.exitCode !== null ? r() : child.once('exit', r)); },
    restart: launch,
    stop: async () => {
      signal('SIGTERM');
      await new Promise(r => setTimeout(r, 200));
      rmSync(work, { recursive: true, force: true });
    },
  };
}

/** One sync over HTTP: the reply's text. */
export async function sync(base, doc, cursor, ops = []) {
  const body = `tandem 1\nsync ${cursor}\n` + ops.map(o => o + '\n').join('');
  const r = await fetch(`${base}/doc/${doc}/sync`, { method: 'POST', body, headers: { 'content-type': 'text/plain' } });
  return { status: r.status, text: await r.text() };
}

/** A reply's parts: { from, to, ops } or { error }. */
export function parseReply(text) {
  const lines = text.split('\n');
  if (lines.at(-1) === '') lines.pop();
  if (lines[0] !== 'tandem 1') return { bad: text };
  const head = lines[1]?.split(' ') ?? [];
  if (head[0] === 'error') return { error: lines[1].slice(6) };
  if (head[0] === 'ops' && head.length === 3) return { from: Number(head[1]), to: Number(head[2]), ops: lines.slice(2) };
  return { bad: text };
}

/** A small seeded PRNG (mulberry32). */
export function rng(seed) {
  let a = seed >>> 0;
  const next = () => {
    a = (a + 0x6D2B79F5) >>> 0;
    let t = a;
    t = Math.imul(t ^ (t >>> 15), t | 1);
    t ^= t + Math.imul(t ^ (t >>> 7), t | 61);
    return ((t ^ (t >>> 14)) >>> 0) / 4294967296;
  };
  return { next, int: n => Math.floor(next() * n), pick: xs => xs[Math.floor(next() * xs.length)] };
}
