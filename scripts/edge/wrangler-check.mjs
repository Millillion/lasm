// Serves a `lasm build --target workers` project with `wrangler dev` (local
// workerd, no account: CI=1, no browser, no telemetry) and checks every route;
// measures the deployable bundle with `wrangler deploy --dry-run` (no login).
//   node wrangler-check.mjs WRANGLER PROJECT_DIR hono|pure PORT RESULT.json
import { spawn, execFileSync } from 'node:child_process';
import { mkdtempSync, readdirSync, statSync, writeFileSync, readFileSync, realpathSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { tmpdir } from 'node:os';
import { gzipSync } from 'node:zlib';
import { apps } from './checks.mjs';

const [wrangler, projectArg, appName, port, resultFile] = process.argv.slice(2);
const project = resolve(projectArg), app = apps[appName];
const env = { ...process.env, CI: '1', BROWSER: 'false', WRANGLER_SEND_METRICS: 'false', NO_COLOR: '1', WRANGLER_LOG: 'info' };
// wrangler's own package.json (node_modules/wrangler/bin/wrangler.js).
const wranglerVersion = JSON.parse(readFileSync(join(dirname(realpathSync(wrangler)), '../package.json'), 'utf8')).version;
const result = { app: appName, wrangler: wranglerVersion, checks: [] };
// The bundle wrangler would upload: every file of the dry-run output.
const out = mkdtempSync(join(tmpdir(), 'lasm-wrangler-'));
execFileSync(wrangler, ['deploy', '--dry-run', '--outdir', out], { cwd: project, env, stdio: ['ignore', 'pipe', 'pipe'] });
const files = readdirSync(out).filter(name => !name.endsWith('.map') && name !== 'README.md');
result.bundle = { files: files.length, bytes: files.reduce((n, name) => n + statSync(join(out, name)).size, 0),
  gzipBytes: files.reduce((n, name) => n + gzipSync(readFileSync(join(out, name)), { level: 9 }).length, 0) };
const child = spawn(wrangler, ['dev', '--port', port, '--ip', '127.0.0.1'], { cwd: project, env, stdio: ['ignore', 'pipe', 'pipe'], detached: true });
let log = '';
child.stdout.on('data', chunk => { log += chunk; }); child.stderr.on('data', chunk => { log += chunk; });
const base = `http://127.0.0.1:${port}`;
try {
  const deadline = Date.now() + 120_000;
  for (;;) {
    try { await fetch(base + '/'); break; } catch { /* not listening yet */ }
    if (Date.now() > deadline || child.exitCode !== null) throw new Error('wrangler dev did not start:\n' + log.slice(-4000));
    await new Promise(r => setTimeout(r, 500));
  }
  const request = async ({ method = 'GET', path, send, type }) => {
    const response = await fetch(base + path, { method, body: send, headers: type ? { 'content-type': type } : {} });
    return { status: response.status, body: await response.text() };
  };
  const verify = async check => {
    const got = await request(check);
    const ok = got.status === check.status && (check.body === undefined || got.body === check.body) && (!check.match || check.match.test(got.body));
    result.checks.push({ path: check.path, ok, ...(ok ? {} : { got }) });
  };
  for (const check of app.checks) await verify(check);
  if (app.fatal) {
    const got = await request(app.fatal);
    result.checks.push({ path: app.fatal.path, ok: got.status === 500, got: got.status });
    await verify(app.fatal.after);
    result.instanceRestarted = /the Lean instance stopped/.test(log);
  }
  // Concurrency: 50 requests at once.
  const many = await Promise.all(Array.from({ length: 50 }, () => request({ path: app.checks[0].path })));
  result.checks.push({ path: '50 concurrent ' + app.checks[0].path, ok: many.every(r => r.status === app.checks[0].status) });
  // HTTP round trips through wrangler's local proxy (informational).
  const n = 300, t = performance.now();
  for (let i = 0; i < n; i++) await request({ path: app.bench.trivial });
  result.httpMsPerRequest = +((performance.now() - t) / n).toFixed(3);
} finally {
  try { process.kill(-child.pid); } catch { /* exited */ }
}
result.passed = result.checks.every(c => c.ok);
writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result));
if (!result.passed) { console.error(log.slice(-4000)); process.exitCode = 1; }
