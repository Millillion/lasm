// Starts a Ledger server for the tests: the Node build (dist/server/main.mjs)
// on a free port with a fresh database, or any other command ({port}: its port).
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

/** Starts a server: a running one (`url`), a platform of test/platforms.mjs
(`platform`, served by its own tooling), or a command (default: the Node
build). Returns { base, stop }. */
export async function startLedger({ command, url, platform } = {}) {
  if (url) return { base: url, stop: async () => {} };
  if (platform) {
    const { baseUrl, startServer } = await import('./platforms.mjs');
    const port = await freePort();
    const server = startServer(platform, port);
    const base = baseUrl(platform, port);
    // Container images and function emulators can take minutes to pull and start.
    try { await waitFor(`${base}/api/accounts`, server.child, 600_000); } catch (e) { server.stop(); throw e; }
    return { base, stop: async () => server.stop() };
  }
  const port = await freePort();
  const work = mkdtempSync(join(tmpdir(), 'ledger-test-'));
  const cmd = (command ?? `node ${JSON.stringify(join(root, 'dist/server/main.mjs'))}`).replaceAll('{port}', String(port));
  const child = spawn(cmd, {
    shell: true, cwd: root, stdio: ['ignore', 'inherit', 'inherit'], detached: process.platform !== 'win32',
    env: { ...process.env, PORT: String(port), HOST: '127.0.0.1', DATABASE_PATH: join(work, 'ledger.db') },
  });
  const base = `http://127.0.0.1:${port}`;
  await waitFor(`${base}/api/accounts`, child, 600_000);
  return {
    base,
    stop: async () => {
      try { process.kill(process.platform === 'win32' ? child.pid : -child.pid, 'SIGTERM'); } catch {}
      await new Promise(r => setTimeout(r, 200));
      rmSync(work, { recursive: true, force: true });
    },
  };
}

/** A JSON request to the API. */
export async function api(base, method, path, body) {
  const res = await fetch(base + '/api' + path, {
    method, headers: body === undefined ? {} : { 'content-type': 'application/json' },
    body: body === undefined ? undefined : JSON.stringify(body),
  });
  const text = await res.text();
  let json;
  try { json = JSON.parse(text); } catch { json = text; }
  return { status: res.status, body: json, text };
}

/** A seeded pseudo-random generator (mulberry32), its seed logged by the caller. */
export function rng(seed) {
  let a = seed >>> 0;
  const next = () => {
    a = (a + 0x6D2B79F5) >>> 0;
    let t = a;
    t = Math.imul(t ^ (t >>> 15), t | 1);
    t ^= t + Math.imul(t ^ (t >>> 7), t | 61);
    return ((t ^ (t >>> 14)) >>> 0) / 4294967296;
  };
  const int = (lo, hi) => lo + Math.floor(next() * (hi - lo + 1));
  return { next, int, pick: xs => xs[int(0, xs.length - 1)], chance: p => next() < p };
}

/** The seed: `--seed N`, else LEDGER_SEED, else random. */
export function seedFrom(args) {
  const i = args.indexOf('--seed');
  const s = i >= 0 ? args[i + 1] : process.env.LEDGER_SEED;
  return s !== undefined ? Number(s) >>> 0 : (Math.random() * 2 ** 32) >>> 0;
}
