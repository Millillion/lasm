// Starts a Porter server for the tests, and a minimal browser to sign in with.
//
// startPorter(): the Node build (dist/server/main.mjs) on a free port with a
// fresh database and the test configuration (test/config.mjs), or any other
// command ({port}: its port), or a platform of test/platforms.mjs, or an
// already running server (`url`). Returns { base, stop }.
import { spawn } from 'node:child_process';
import { mkdtempSync, rmSync } from 'node:fs';
import { createServer } from 'node:net';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { testConfig } from './config.mjs';

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

/** The arguments every test script takes: --url, --command, --platform, --name. */
export function serverArgs(argv = process.argv.slice(2)) {
  const get = k => { const i = argv.indexOf(k); return i >= 0 ? argv[i + 1] : undefined; };
  return { url: get('--url'), command: get('--command'), platform: get('--platform'), name: get('--name') };
}

export async function startPorter({ command, url, platform } = {}) {
  if (url) return { base: url.replace(/\/$/, ''), stop: async () => {} };
  if (platform) {
    const { baseUrl, startServer } = await import('./platforms.mjs');
    const port = await freePort();
    const server = startServer(platform, port);
    const base = baseUrl(platform, port);
    try { await waitFor(`${base}/.well-known/openid-configuration`, server.child, 600_000); }
    catch (e) { server.stop(); throw e; }
    return { base, stop: async () => server.stop() };
  }
  const port = await freePort();
  const base = `http://127.0.0.1:${port}`;
  const work = mkdtempSync(join(tmpdir(), 'porter-test-'));
  const cmd = (command ?? `node ${JSON.stringify(join(root, 'dist/server/main.mjs'))}`).replaceAll('{port}', String(port));
  const child = spawn(cmd, {
    shell: true, cwd: root, stdio: ['ignore', 'inherit', 'inherit'], detached: process.platform !== 'win32',
    env: { ...process.env, PORT: String(port), HOST: '127.0.0.1', ISSUER: base, DATABASE_PATH: join(work, 'porter.db'),
           PORTER_CONFIG: JSON.stringify(testConfig) },
  });
  const kill = () => { try { process.kill(process.platform === 'win32' ? child.pid : -child.pid, 'SIGTERM'); } catch {} };
  process.on('exit', kill);
  await waitFor(`${base}/.well-known/openid-configuration`, child, 600_000);
  return {
    base,
    stop: async () => {
      try { process.kill(process.platform === 'win32' ? child.pid : -child.pid, 'SIGTERM'); } catch {}
      await new Promise(r => setTimeout(r, 200));
      rmSync(work, { recursive: true, force: true });
    },
  };
}

/** A browser without JavaScript: a cookie jar, forms, and redirects followed
by hand so that the test sees each one. */
export class Browser {
  constructor(base) { this.base = base; this.cookies = new Map(); }

  cookieHeader(url) {
    const path = new URL(url).pathname;
    return [...this.cookies.values()].filter(c => path.startsWith(c.path)).map(c => `${c.name}=${c.value}`).join('; ');
  }

  remember(res) {
    for (const line of res.headers.getSetCookie()) {
      const [pair, ...attrs] = line.split(';').map(s => s.trim());
      const eq = pair.indexOf('=');
      const name = pair.slice(0, eq), value = pair.slice(eq + 1);
      const path = attrs.find(a => /^path=/i.test(a))?.slice(5) ?? '/';
      const maxAge = attrs.find(a => /^max-age=/i.test(a));
      if (maxAge && Number(maxAge.slice(8)) <= 0) this.cookies.delete(name);
      else this.cookies.set(name, { name, value, path });
    }
  }

  /** One request, no redirect followed. */
  async request(url, { method = 'GET', form, headers = {} } = {}) {
    const cookie = url.startsWith(this.base) ? this.cookieHeader(url) : '';
    const res = await fetch(url, {
      method, redirect: 'manual',
      headers: { ...(cookie ? { cookie } : {}), ...(form ? { 'content-type': 'application/x-www-form-urlencoded' } : {}),
                 ...headers },
      body: form ? new URLSearchParams(form).toString() : undefined,
    });
    if (url.startsWith(this.base)) this.remember(res);
    const text = await res.text();
    return { status: res.status, location: res.headers.get('location'), text, headers: res.headers };
  }

  /** Follows redirects within the provider; returns the first response that
  is not a redirect to the provider (a redirect to a client, or a page). */
  async follow(url, opts) {
    let res = await this.request(url, opts);
    for (let i = 0; i < 10 && res.status === 303 && res.location?.startsWith(this.base); i++) {
      res = await this.request(res.location);
    }
    return res;
  }

  /** The interaction page's form action, from its HTML. */
  static action(html) {
    const m = /<form method="post" action="([^"]+)"/.exec(html);
    return m && m[1].replaceAll('&amp;', '&');
  }

  /** Starts at an authorization URL, signs in if asked, consents if asked
  (or denies, with `deny`), and returns the final redirect to the client. */
  async authorize(url, { username = 'alice', password = 'wonderland', deny = false } = {}) {
    let res = await this.follow(url.toString());
    if (res.status === 200 && res.text.includes('name="password"')) {
      res = await this.follow(this.base + Browser.action(res.text), { method: 'POST', form: { username, password } });
    }
    if (res.status === 200 && res.text.includes('name="decision"')) {
      res = await this.follow(this.base + Browser.action(res.text), { method: 'POST', form: { decision: deny ? 'deny' : 'allow' } });
    }
    if (res.status !== 303) throw new Error(`expected a redirect to the client, got ${res.status}: ${res.text.slice(0, 300)}`);
    return res.location;
  }
}

/** A tiny test harness: named checks, a summary, exit code 1 on failure. */
export function harness(title) {
  const results = [];
  return {
    async check(name, fn) {
      const started = Date.now();
      try { await fn(); results.push({ name, ok: true }); console.log(`  ok    ${name} (${Date.now() - started} ms)`); }
      catch (e) { results.push({ name, ok: false, error: e }); console.log(`  FAIL  ${name}\n        ${e.stack ?? e}`); }
    },
    done() {
      const failed = results.filter(r => !r.ok);
      console.log(`\n${title}: ${results.length - failed.length} of ${results.length} passed`);
      if (failed.length) process.exitCode = 1;
      return { passed: results.length - failed.length, failed: failed.length };
    },
  };
}
