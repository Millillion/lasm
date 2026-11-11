// End-to-end test of a Lean HTTP handler served by each runtime's own server API
// (docs/TESTING.md, "Standard bindings"): test/fixtures/js-serve/Serve.lean serves
// App.handle with Deno.serve (Lasm.JS.Deno), Bun.serve (Lasm.JS.Bun) and, on Node,
// @hono/node-server (an `@[js]` binding to the npm package the fixture installs).
// For each target this builds Serve.lean with an installed @lasm/cli, starts it on
// a free port, requests it over HTTP from this process (another process than the
// server's), then asks it to shut down and expects it to exit with 0.
//
//   node scripts/bindings/test-serve.mjs --lasm PATH/bin/lasm.mjs --work DIR
//     [--targets node,bun,deno] [--bun PATH] [--deno PATH] [--report FILE]
import { spawn } from 'node:child_process';
import { appendFileSync, cpSync, existsSync, mkdirSync, rmSync, writeFileSync } from 'node:fs';
import { createServer, request } from 'node:http';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { parseArgs } from 'node:util';

const root = fileURLToPath(new URL('../../', import.meta.url));
const { values } = parseArgs({ options: {
  lasm: { type: 'string' }, work: { type: 'string' }, targets: { type: 'string', default: 'node,bun,deno' },
  bun: { type: 'string', default: 'bun' }, deno: { type: 'string', default: 'deno' }, report: { type: 'string' },
} });
if (!values.lasm || !values.work) { console.error('--lasm and --work are required'); process.exit(2); }
const fixture = join(root, 'test', 'fixtures', 'js-serve');
const lasm = resolve(values.lasm), work = resolve(values.work);
const env = { ...process.env, CI: '1', BROWSER: 'none', LASM_EDITOR: '0', NO_COLOR: '1' };

const TARGETS = {
  node: { build: [], run: dir => [process.execPath, ['dist/main.mjs'], dir] },
  bun: { build: ['--target', 'bun'], run: dir => [values.bun, ['bun/main.mjs'], dir] },
  deno: { build: ['--target', 'deno'], run: dir => [values.deno, ['run', '-A', '--no-lock', 'deno/main.mjs'], dir] },
};
const targets = values.targets.split(',').filter(Boolean);
for (const t of targets) if (!TARGETS[t]) { console.error(`unknown target ${t}`); process.exit(2); }

function exec(cmd, args, cwd, timeout = 60 * 60_000) {
  return new Promise(done => {
    const started = performance.now();
    const child = spawn(cmd, args, { cwd, env, stdio: ['ignore', 'pipe', 'pipe'] });
    const out = [];
    const timer = setTimeout(() => child.kill('SIGKILL'), timeout);
    child.stdout.on('data', d => out.push(d)); child.stderr.on('data', d => out.push(d));
    child.on('error', e => out.push(Buffer.from(String(e))));
    child.on('close', code => { clearTimeout(timer); done({ code, output: Buffer.concat(out).toString('utf8'), ms: Math.round(performance.now() - started) }); });
  });
}
const freePort = () => new Promise((ok, fail) => { const s = createServer(); s.once('error', fail); s.listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => ok(port)); }); });
/** One HTTP request from this process: { status, headers, body }. */
const http = (port, path, { method = 'GET', body, headers = {} } = {}) => new Promise((ok, fail) => {
  const r = request({ host: '127.0.0.1', port, path, method, headers, timeout: 30_000, agent: false }, res => {
    const chunks = []; res.on('data', c => chunks.push(c));
    res.on('end', () => ok({ status: res.statusCode, headers: res.headers, body: Buffer.concat(chunks).toString('utf8') }));
  });
  r.on('timeout', () => r.destroy(new Error(`${method} ${path}: timeout`))); r.on('error', fail);
  if (body !== undefined) r.write(body);
  r.end();
});

/** The checks, each `[name, ok, detail]`, against the server on `port`. */
async function exercise(port) {
  const checks = [];
  const check = (name, ok, detail = '') => checks.push({ name, ok: !!ok, detail });
  const hello = await http(port, '/hello');
  check('GET /hello', hello.status === 200 && hello.body === 'hello from Lean' && hello.headers['content-type'] === 'text/plain; charset=utf-8',
    `${hello.status} ${JSON.stringify(hello.body)} ${hello.headers['content-type']}`);
  const text = 'héllo ✓ wörld 𝔘 — échange\n'.repeat(50);
  const echo = await http(port, '/echo', { method: 'POST', body: text, headers: { 'content-type': 'text/x-e2e; charset=utf-8' } });
  check('POST /echo', echo.status === 200 && echo.body === text && echo.headers['content-type'] === 'text/x-e2e; charset=utf-8' && echo.headers['x-lasm-method'] === 'POST',
    `${echo.status} ${echo.body.length} chars ${echo.headers['content-type']} ${echo.headers['x-lasm-method']}`);
  const square = await http(port, '/square?n=12345');
  check('GET /square', square.status === 200 && square.body === '{"n":12345,"square":152399025}' && square.headers['content-type'] === 'application/json',
    `${square.status} ${square.body}`);
  const missing = await http(port, '/missing');
  check('GET /missing', missing.status === 404 && missing.body === 'not found: /missing', `${missing.status} ${missing.body}`);
  const thrown = await http(port, '/throw');
  check('a throwing handler answers 500', thrown.status === 500, `${thrown.status}`);
  const started = performance.now();
  const slow = await Promise.all(Array.from({ length: 20 }, () => http(port, '/slow?ms=300')));
  const elapsed = performance.now() - started;
  check('20 concurrent slow requests', slow.every(r => r.status === 200 && r.body === 'slept 300') && elapsed < 4000, `${Math.round(elapsed)} ms`);
  return checks;
}

rmSync(work, { recursive: true, force: true });
mkdirSync(work, { recursive: true });
const results = [];
let ok = true;
for (const target of targets) {
  const dir = join(work, target);
  const result = { target, checks: [] };
  results.push(result);
  let child;
  try {
    cpSync(fixture, dir, { recursive: true });
    const install = await exec(process.platform === 'win32' ? 'npm.cmd' : 'npm', ['ci', '--ignore-scripts', '--no-audit', '--no-fund'], dir, 10 * 60_000);
    if (install.code !== 0) throw new Error(`npm ci failed:\n${install.output.slice(-3000)}`);
    const b = await exec(process.execPath, [lasm, 'build', 'Serve.lean', ...TARGETS[target].build], dir);
    result.buildMs = b.ms;
    if (b.code !== 0) throw new Error(`lasm build failed:\n${b.output.slice(-6000)}`);
    const port = await freePort();
    const [cmd, args, cwd] = TARGETS[target].run(dir);
    child = spawn(cmd, args, { cwd, env: { ...env, PORT: String(port) }, stdio: ['ignore', 'pipe', 'pipe'] });
    let output = '';
    child.stdout.on('data', d => { output += d; }); child.stderr.on('data', d => { output += d; });
    const exited = new Promise(done => child.on('close', code => done(code)));
    const until = Date.now() + 120_000;
    while (!/^listening (\d+)$/m.test(output)) {
      if (child.exitCode !== null) throw new Error(`the server exited (${child.exitCode}):\n${output.slice(-3000)}`);
      if (Date.now() > until) throw new Error(`the server did not print "listening":\n${output.slice(-3000)}`);
      await new Promise(r => setTimeout(r, 100));
    }
    const listened = +/^listening (\d+)$/m.exec(output)[1];
    result.checks.push({ name: 'listens on $PORT', ok: listened === port, detail: `${listened}` });
    result.checks.push(...await exercise(port));
    const bye = await http(port, '/shutdown');
    result.checks.push({ name: 'GET /shutdown', ok: bye.status === 200 && bye.body === 'stopping', detail: `${bye.status} ${bye.body}` });
    const code = await Promise.race([exited, new Promise(r => setTimeout(() => r('timeout'), 60_000))]);
    result.checks.push({ name: 'stops and exits with 0', ok: code === 0 && /^stopped$/m.test(output), detail: `exit ${code}` });
    writeFileSync(join(work, `${target}.out.txt`), output);
  } catch (error) {
    result.error = String(error?.message ?? error);
  } finally {
    if (child && child.exitCode === null) child.kill('SIGKILL');
  }
  result.pass = !result.error && result.checks.every(c => c.ok);
  if (!result.pass) ok = false;
  console.log(`${result.pass ? 'PASS' : 'FAIL'} ${target}: ${result.checks.filter(c => c.ok).length}/${result.checks.length} checks${result.buildMs !== undefined ? `, build ${(result.buildMs / 1000).toFixed(1)} s` : ''}`);
  for (const c of result.checks.filter(c => !c.ok)) console.log(`  FAIL ${c.name}: ${c.detail}`);
  if (result.error) console.log(`  ${result.error.split('\n').join('\n  ')}`);
}
if (values.report) writeFileSync(values.report, JSON.stringify(results, null, 1) + '\n');
if (process.env.GITHUB_STEP_SUMMARY) {
  appendFileSync(process.env.GITHUB_STEP_SUMMARY, `## A Lean handler served end to end\n\n| Target | Server | Result | Checks | Build |\n| --- | --- | --- | --- | --- |\n${results.map(r =>
    `| ${r.target} | ${{ node: '@hono/node-server', bun: 'Bun.serve', deno: 'Deno.serve' }[r.target]} | ${r.pass ? 'pass' : '**fail**'} | ${r.checks.filter(c => c.ok).length}/${r.checks.length} | ${r.buildMs !== undefined ? (r.buildMs / 1000).toFixed(1) + ' s' : '–'} |`).join('\n')}\n`);
}
process.exit(ok ? 0 : 1);
