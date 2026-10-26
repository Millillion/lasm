// Netlify Edge with no account (Phase 7.3): `netlify build --offline` bundles
// the edge function with Netlify's own Deno bundler (the eszip it deploys), and
// `netlify dev --offline` serves it in Netlify's local edge runtime (Deno), where
// every route is checked. Deno comes from PATH (the pinned npm `deno`), so the
// CLI downloads nothing. Neither command needs a login.
//   node netlify-edge-check.mjs TOOLS_DIR PROJECT hono|pure PORT RESULT.json
import { execFileSync, spawn } from 'node:child_process';
import { mkdtempSync, readFileSync, readdirSync, statSync, writeFileSync } from 'node:fs';
import { join, resolve, delimiter } from 'node:path';
import { tmpdir } from 'node:os';
import { createRequire } from 'node:module';
import { apps } from './checks.mjs';
import { headlessEnvironment } from './headless.mjs';

const [toolsArg, projectArg, appName, port, resultFile] = process.argv.slice(2);
const tools = resolve(toolsArg), project = resolve(projectArg), app = apps[appName];
const require = createRequire(join(tools, 'package.json'));
const bin = join(tools, 'node_modules/.bin');
const env = headlessEnvironment(process.env, { PATH: bin + delimiter + process.env.PATH,
  XDG_CONFIG_HOME: mkdtempSync(join(tmpdir(), 'lasm-netlify-')), NETLIFY_AUTH_TOKEN: '' });
const result = { app: appName, netlifyCli: require('netlify-cli/package.json').version,
  deno: execFileSync(join(bin, 'deno'), ['--version'], { encoding: 'utf8' }).split('\n')[0], checks: [] };
const check = (name, ok, extra = {}) => result.checks.push({ name, ok: !!ok, ...extra });

execFileSync(join(bin, 'netlify'), ['build', '--offline'], { cwd: project, env, stdio: ['ignore', 'pipe', 'inherit'], timeout: 600_000 });
const dist = join(project, '.netlify/edge-functions-dist');
const eszip = readdirSync(dist).filter(name => name.endsWith('.eszip'));
const manifest = JSON.parse(readFileSync(join(dist, 'manifest.json'), 'utf8'));
result.bundle = { eszipBytes: eszip.reduce((n, name) => n + statSync(join(dist, name)).size, 0) };
check('netlify build bundled the edge function', eszip.length === 1 && JSON.stringify(manifest).includes('lasm'), { routes: manifest.routes });
check('within Netlify Edge code limit (20 MB)', result.bundle.eszipBytes < 20 * 1024 * 1024);

const child = spawn(join(bin, 'netlify'), ['dev', '--offline', '--no-open', '--port', port, '--dir', 'public'], { cwd: project, env, stdio: ['ignore', 'pipe', 'pipe'], detached: true });
let log = '';
child.stdout.on('data', c => { log += c; }); child.stderr.on('data', c => { log += c; });
// localhost: whichever address family netlify dev listens on.
const base = `http://localhost:${port}`;
let last = 'no response';
try {
  const deadline = Date.now() + 180_000;
  for (;;) {
    try { const r = await fetch(base + app.checks[0].path); if (r.status === app.checks[0].status) break; last = `status ${r.status}: ${(await r.text()).slice(0, 500)}`; } catch (error) { last = String(error.cause ?? error); }
    if (Date.now() > deadline || child.exitCode !== null) throw new Error(`netlify dev did not serve the edge function (last: ${last}; exit ${child.exitCode}):\n` + log.slice(-4000));
    await new Promise(r => setTimeout(r, 1000));
  }
  const request = async ({ method = 'GET', path, send, type }) => {
    const response = await fetch(base + path, { method, body: send, headers: type ? { 'content-type': type } : {} });
    return { status: response.status, body: await response.text() };
  };
  for (const c of app.checks) {
    const got = await request(c);
    const ok = got.status === c.status && (c.body === undefined || got.body === c.body) && (!c.match || c.match.test(got.body));
    check(`netlify dev ${c.method ?? 'GET'} ${c.path}`, ok, ok ? {} : { got });
  }
  if (app.fatal) {
    const got = await request(app.fatal);
    check(`netlify dev ${app.fatal.path} fails the request`, got.status !== 200);
    const after = await request(app.fatal.after);
    check('a stopped instance is replaced', after.status === 200 && after.body === app.fatal.after.body, { after });
  }
  const n = 300, t = performance.now();
  for (let i = 0; i < n; i++) await request({ path: app.bench.trivial });
  result.httpMsPerRequest = +((performance.now() - t) / n).toFixed(3);
} finally { try { process.kill(-child.pid); } catch { /* exited */ } }
result.passed = result.checks.every(c => c.ok);
writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result));
if (!result.passed) { console.error(log.slice(-3000)); process.exitCode = 1; }
