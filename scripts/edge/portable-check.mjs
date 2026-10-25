// The portable entry served by Bun or Deno (Phases 7.4 and 7.5): `bun
// bun/main.mjs` or `deno run -A deno/main.mjs` (Deno Deploy runs the same
// entry with the Deno runtime), with every route checked. Bare imports resolve
// from the project's package.json and node_modules, as on Deno Deploy.
//   node portable-check.mjs BUN_OR_DENO ENTRY PROJECT hono|pure PORT RESULT.json
import { execFileSync, spawn } from 'node:child_process';
import { writeFileSync, statSync, readdirSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { apps } from './checks.mjs';
import { headlessEnvironment } from './headless.mjs';

const [runtime, entry, projectArg, appName, port, resultFile] = process.argv.slice(2);
const isDeno = /deno(\.exe)?$/i.test(runtime);
const project = resolve(projectArg), app = apps[appName];
const env = headlessEnvironment(process.env, { PORT: port, DENO_NO_UPDATE_CHECK: '1', DENO_NO_PROMPT: '1' });
const result = { app: appName, entry, runtime: execFileSync(runtime, ['--version'], { encoding: 'utf8' }).split('\n')[0], checks: [] };
const check = (name, ok, extra = {}) => result.checks.push({ name, ok: !!ok, ...extra });
const size = dir => readdirSync(dir, { withFileTypes: true }).reduce((n, e) => n + (e.isDirectory() ? size(join(dir, e.name)) : statSync(join(dir, e.name)).size), 0);
result.bundle = { bytes: size(join(project, entry, '..')) };

const started = performance.now();
const child = spawn(runtime, [...(isDeno ? ['run', '-A'] : []), entry], { cwd: project, env, stdio: ['ignore', 'pipe', 'pipe'], detached: true, windowsHide: true });
let log = '';
child.stdout.on('data', c => { log += c; }); child.stderr.on('data', c => { log += c; });
const base = `http://127.0.0.1:${port}`;
try {
  const deadline = Date.now() + 120_000;
  for (;;) {
    try { const r = await fetch(base + app.checks[0].path); if (r.status === app.checks[0].status) break; } catch { /* starting */ }
    if (Date.now() > deadline || child.exitCode !== null) throw new Error(`${entry} did not serve the program:\n` + log.slice(-4000));
    await new Promise(r => setTimeout(r, 100));
  }
  result.firstResponseMs = Math.round(performance.now() - started);
  const request = async ({ method = 'GET', path, send, type }) => {
    const response = await fetch(base + path, { method, body: send, headers: type ? { 'content-type': type } : {} });
    return { status: response.status, body: await response.text() };
  };
  for (const c of app.checks) {
    const got = await request(c);
    const ok = got.status === c.status && (c.body === undefined || got.body === c.body) && (!c.match || c.match.test(got.body));
    check(`${entry} ${c.method ?? 'GET'} ${c.path}`, ok, ok ? {} : { got });
  }
  if (app.fatal) {
    const got = await request(app.fatal);
    check(`${entry} ${app.fatal.path} fails the request`, got.status !== 200);
    const after = await request(app.fatal.after);
    check('a stopped instance is replaced', after.status === 200 && after.body === app.fatal.after.body, { after });
  }
  const n = 300, t = performance.now();
  for (let i = 0; i < n; i++) await request({ path: app.bench.trivial });
  result.httpMsPerRequest = +((performance.now() - t) / n).toFixed(3);
} finally {
  // The server and its children: a process group, or the tree on Windows.
  try { if (process.platform === 'win32') execFileSync('taskkill', ['/pid', String(child.pid), '/T', '/F'], { stdio: 'ignore' }); else process.kill(-child.pid); } catch { /* exited */ }
}
result.passed = result.checks.every(c => c.ok);
writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result));
if (!result.passed) { console.error(log.slice(-3000)); process.exitCode = 1; }
