// Builds a standard bindings conformance program (test/fixtures/js-web for
// Lasm.JS.Web, test/fixtures/js-node for Lasm.JS.Node, test/fixtures/js-serve for
// Lasm.JS.Deno, Lasm.JS.Bun and the Node adapter: --fixture) with an
// installed @lasm/cli for each JavaScript target and runs it there
// (docs/TESTING.md, "Standard bindings"). A target passes when its build
// succeeds, the program reports a summary, and every failed check is listed
// for that target in the fixture's known.json with its reason (a runtime's own
// deviation from the spec or the docs, never a binding bug); a listed check
// that passes fails the run too, so the list stays exact.
//
//   node scripts/bindings/test-web.mjs --lasm PATH/bin/lasm.mjs --work DIR [--fixture js-web|js-node|js-serve]
//     [--targets node,node24,bun,deno,workers,browser-chromium] [--node24 PATH] [--bun PATH]
//     [--deno PATH] [--wrangler PATH] [--playwright DIR] [--report FILE] [--sizes]
//
// CI only for workers (wrangler dev runs workerd locally, offline): platform
// CLIs are never run on a developer's machine.
import { spawn } from 'node:child_process';
import { cpSync, existsSync, mkdirSync, readFileSync, readdirSync, rmSync, statSync, writeFileSync, appendFileSync } from 'node:fs';
import { createServer, request } from 'node:http';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { parseArgs } from 'node:util';

const root = fileURLToPath(new URL('../../', import.meta.url));
const { values } = parseArgs({ options: {
  lasm: { type: 'string' }, work: { type: 'string' }, targets: { type: 'string', default: 'node,bun,deno' }, fixture: { type: 'string', default: 'js-web' },
  node24: { type: 'string' }, bun: { type: 'string', default: 'bun' }, deno: { type: 'string', default: 'deno' },
  wrangler: { type: 'string', default: 'wrangler' }, playwright: { type: 'string' }, report: { type: 'string' },
  sizes: { type: 'boolean', default: false },
} });
if (!values.lasm || !values.work) { console.error('--lasm and --work are required'); process.exit(2); }
if (!['js-web', 'js-node', 'js-serve'].includes(values.fixture)) { console.error('--fixture is js-web, js-node or js-serve'); process.exit(2); }
const fixture = join(root, 'test', 'fixtures', values.fixture);
const tierName = { 'js-web': 'Lasm.JS.Web', 'js-node': 'Lasm.JS.Node', 'js-serve': 'Lasm.JS.Deno and Lasm.JS.Bun' }[values.fixture];
const lasm = resolve(values.lasm), work = resolve(values.work);
const known = JSON.parse(readFileSync(join(fixture, 'known.json'), 'utf8'));
const env = { ...process.env, CI: '1', BROWSER: 'none', LASM_EDITOR: '0', NO_COLOR: '1', WRANGLER_SEND_METRICS: 'false' };

function exec(cmd, args, { cwd, timeout = 20 * 60_000, extraEnv = {} } = {}) {
  return new Promise(done => {
    const started = performance.now();
    const child = spawn(cmd, args, { cwd, env: { ...env, ...extraEnv }, stdio: ['ignore', 'pipe', 'pipe'] });
    const out = [], err = [];
    let timedOut = false, spawnError = '';
    const timer = setTimeout(() => { timedOut = true; child.kill('SIGKILL'); }, timeout);
    child.stdout.on('data', d => out.push(d));
    child.stderr.on('data', d => err.push(d));
    child.on('error', e => { spawnError += String(e); });
    child.on('close', code => {
      clearTimeout(timer);
      done({ code, timedOut, stdout: Buffer.concat(out).toString('utf8'), stderr: Buffer.concat(err).toString('utf8') + spawnError, ms: Math.round(performance.now() - started) });
    });
  });
}
const dirSize = dir => existsSync(dir) ? readdirSync(dir, { recursive: true }).reduce((n, f) => {
  const s = statSync(join(dir, f)); return n + (s.isFile() ? s.size : 0);
}, 0) : 0;
const freePort = () => new Promise((ok, fail) => { const s = createServer(); s.once('error', fail); s.listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => ok(port)); }); });
const get = (port, timeoutMs) => new Promise((ok, fail) => {
  const r = request({ host: '127.0.0.1', port, path: '/', timeout: timeoutMs }, res => {
    const chunks = []; res.on('data', c => chunks.push(c)); res.on('end', () => ok({ status: res.statusCode, body: Buffer.concat(chunks).toString('utf8') }));
  });
  r.on('timeout', () => r.destroy(new Error('timeout'))); r.on('error', fail); r.end();
});

async function serveWorkers(project) {
  const port = await freePort();
  const child = spawn(values.wrangler, ['dev', '--cwd', 'workers', '--port', String(port), '--ip', '127.0.0.1', '--show-interactive-dev-session=false'],
    { cwd: project, env, stdio: ['ignore', 'pipe', 'pipe'] });
  const logs = [];
  child.stdout.on('data', d => logs.push(String(d))); child.stderr.on('data', d => logs.push(String(d)));
  try {
    const until = Date.now() + 180_000;
    while (Date.now() < until) {
      if (child.exitCode !== null) throw new Error(`wrangler dev exited (${child.exitCode}):\n${logs.join('').slice(-3000)}`);
      try {
        // The first answered request runs every check (minutes on a slow runner).
        const res = await get(port, 600_000);
        return { code: res.status === 200 ? 0 : 1, stdout: res.body, stderr: logs.join(''), timedOut: false };
      } catch (error) {
        if (/timeout/.test(String(error))) throw error;
        await new Promise(r => setTimeout(r, 500));
      }
    }
    throw new Error(`wrangler dev did not answer:\n${logs.join('').slice(-3000)}`);
  } finally { child.kill('SIGTERM'); }
}

const TARGETS = {
  node: { build: [], output: 'dist', run: dir => exec(process.execPath, ['dist/main.mjs'], { cwd: dir }) },
  node24: { build: [], output: 'dist', run: dir => exec(values.node24, ['dist/main.mjs'], { cwd: dir }) },
  bun: { build: ['--target', 'bun'], output: 'bun', run: dir => exec(values.bun, ['bun/main.mjs'], { cwd: dir }) },
  deno: { build: ['--target', 'deno'], output: 'deno', run: dir => exec(values.deno, ['run', '-A', '--no-lock', 'deno/main.mjs'], { cwd: dir }) },
  workers: { build: ['--target', 'workers'], output: 'workers', run: dir => serveWorkers(dir) },
  'browser-chromium': { build: ['--target', 'browser', '--suspend', 'jspi'], output: 'dist',
    run: dir => exec(process.execPath, [join(root, 'scripts/differential/browser-runner.mjs'), '--browser', 'chromium',
      ...(values.playwright ? ['--playwright', values.playwright] : []), '--dist', join(dir, 'dist'), '--result', join(dir, 'browser-result.json')],
      { extraEnv: { LASM_BROWSER_RUN_TIMEOUT_MS: '600000' } }) },
};
const targets = values.targets.split(',').filter(Boolean);
for (const t of targets) if (!TARGETS[t]) { console.error(`unknown target ${t}`); process.exit(2); }

const matches = (name, pattern) => pattern.endsWith('*') ? name.startsWith(pattern.slice(0, -1)) : name === pattern;
function judge(target, stdout) {
  const failures = stdout.split('\n').filter(l => l.startsWith('FAIL ')).map(l => {
    const rest = l.slice(5), colon = rest.indexOf(': ');
    return { name: colon < 0 ? rest : rest.slice(0, colon), detail: colon < 0 ? '' : rest.slice(colon + 2) };
  });
  const summary = /^summary (\d+) (\d+)$/m.exec(stdout);
  const allowed = known[target] ?? {};
  const unexpected = failures.filter(f => !Object.keys(allowed).some(p => matches(f.name, p)));
  const stale = Object.keys(allowed).filter(p => !failures.some(f => matches(f.name, p)));
  const sections = [...stdout.matchAll(/^section (\S+): (\d+) passed, (\d+) failed$/gm)].map(m => ({ name: m[1], passed: +m[2], failed: +m[3] }));
  // Generated members this runtime lacks: reported (docs/JS_BINDINGS.md), never a failure.
  const missing = stdout.split('\n').filter(l => l.startsWith('missing ')).map(l => l.slice(8));
  return { summary: summary && { passed: +summary[1], failed: +summary[2] }, failures, unexpected, stale, sections, missing };
}

rmSync(work, { recursive: true, force: true });
mkdirSync(work, { recursive: true });
const results = [];
let ok = true;
// Node 24 runs Node's build (the same dist/), so it shares the node project.
for (const target of targets) {
  const dir = join(work, target === 'node24' ? 'node' : target);
  const result = { target };
  results.push(result);
  try {
    if (target !== 'node24' || !existsSync(join(dir, 'dist/main.mjs'))) {
      cpSync(fixture, dir, { recursive: true });
      // A fixture with npm dependencies (js-serve's @hono/node-server) installs them as a user would.
      if (existsSync(join(dir, 'package-lock.json'))) {
        const i = await exec(process.platform === 'win32' ? 'npm.cmd' : 'npm', ['ci', '--ignore-scripts', '--no-audit', '--no-fund'], { cwd: dir, timeout: 10 * 60_000 });
        if (i.code !== 0) throw new Error(`npm ci failed:\n${(i.stdout + i.stderr).slice(-4000)}`);
      }
      const b = await exec(process.execPath, [lasm, 'build', 'Main.lean', ...TARGETS[target].build], { cwd: dir, timeout: 60 * 60_000 });
      result.buildMs = b.ms;
      if (b.code !== 0) throw new Error(`lasm build ${TARGETS[target].build.join(' ')} failed:\n${(b.stdout + b.stderr).slice(-6000)}`);
      result.outputBytes = dirSize(join(dir, TARGETS[target].output));
    }
    const r = await TARGETS[target].run(dir);
    result.runMs = r.ms;
    writeFileSync(join(work, `${target}.out.txt`), r.stdout);
    writeFileSync(join(work, `${target}.err.txt`), r.stderr);
    Object.assign(result, judge(target, r.stdout));
    if (r.timedOut) throw new Error('timed out');
    if (!result.summary) throw new Error(`no summary (exit ${r.code}):\n${(r.stdout + r.stderr).slice(-4000)}`);
    result.pass = result.unexpected.length === 0 && result.stale.length === 0;
  } catch (error) {
    result.pass = false;
    result.error = String(error?.message ?? error);
  }
  if (!result.pass) ok = false;
  const s = result.summary;
  console.log(`${result.pass ? 'PASS' : 'FAIL'} ${target}: ${s ? `${s.passed} passed, ${s.failed} failed (${result.failures.length - result.unexpected.length} known)` : 'no result'}`
    + `${result.buildMs !== undefined ? `, build ${(result.buildMs / 1000).toFixed(1)} s` : ''}${result.outputBytes ? `, output ${(result.outputBytes / 1048576).toFixed(2)} MiB` : ''}`);
  for (const f of result.unexpected ?? []) console.log(`  unexpected: ${f.name}: ${f.detail}`);
  for (const p of result.stale ?? []) console.log(`  listed in known.json but passed: ${p}`);
  if (result.error) console.log(`  ${result.error.split('\n').join('\n  ')}`);
}
// --sizes: what importing the tier costs, against the same program on Lasm.JS
// alone (test/fixtures/<fixture>-size: Base.lean and the tier's program), for Node
// and the edge runtime (--target deno): build time of a new project with warm
// tools, and the program's Wasm.
const sizes = [];
if (values.sizes) {
  const wasmBytes = dir => existsSync(dir) ? readdirSync(dir, { recursive: true }).filter(f => String(f).endsWith('.wasm'))
    .reduce((n, f) => n + statSync(join(dir, f)).size, 0) : 0;
  const sizeFixture = join(root, 'test', 'fixtures', `${values.fixture}-size`);
  // js-web: Browser.lean imports the browser tier too (Lasm.JS.Web.Browser), built for the browser as well.
  const sizeTargets = values.fixture === 'js-web' ? [['node', [], 'dist'], ['deno', ['--target', 'deno'], 'deno'], ['browser', ['--target', 'browser'], 'dist']]
    : [['node', [], 'dist'], ['deno', ['--target', 'deno'], 'deno']];
  const programs = readdirSync(sizeFixture).filter(f => f.endsWith('.lean')).map(f => f.slice(0, -5)).sort((a, b) => (a !== 'Base') - (b !== 'Base') || a.localeCompare(b));
  for (const [target, flags, output] of sizeTargets) {
    for (const program of programs) {
      const dir = join(work, `size-${target}-${program}`);
      cpSync(sizeFixture, dir, { recursive: true });
      const b = await exec(process.execPath, [lasm, 'build', `${program}.lean`, ...flags], { cwd: dir, timeout: 30 * 60_000 });
      const entry = { target, program, buildMs: b.ms, ok: b.code === 0, wasmBytes: wasmBytes(join(dir, output)), outputBytes: dirSize(join(dir, output)) };
      if (!entry.ok) { entry.error = (b.stdout + b.stderr).slice(-3000); ok = false; }
      sizes.push(entry);
      console.log(`size ${target} ${program}: ${entry.ok ? `build ${(b.ms / 1000).toFixed(1)} s, wasm ${entry.wasmBytes} bytes, output ${entry.outputBytes} bytes` : 'build failed\n' + entry.error}`);
    }
  }
}
if (values.report) writeFileSync(values.report, JSON.stringify({ results, sizes }, null, 1) + '\n');
// Availability: which targets lack each generated member that some target lacks.
const lacking = new Map();
for (const r of results) for (const m of r.missing ?? []) lacking.set(m, [...(lacking.get(m) ?? []), r.target]);
const availability = [...lacking].sort(([a], [b]) => a.localeCompare(b)).map(([member, where]) => `| \`${member}\` | ${where.join(', ')} |`);
console.log(`\nGenerated members missing on some target (${lacking.size}):`);
for (const [member, where] of [...lacking].sort(([a], [b]) => a.localeCompare(b))) console.log(`  ${member}: ${where.join(', ')}`);
if (process.env.GITHUB_STEP_SUMMARY) {
  const rows = results.map(r => `| ${r.target} | ${r.pass ? 'pass' : '**fail**'} | ${r.summary ? `${r.summary.passed} / ${r.summary.failed}` : '–'} | ${r.failures ? r.failures.length - r.unexpected.length : '–'} | ${r.buildMs !== undefined ? (r.buildMs / 1000).toFixed(1) + ' s' : '–'} | ${r.outputBytes ? (r.outputBytes / 1048576).toFixed(2) + ' MiB' : '–'} |`);
  appendFileSync(process.env.GITHUB_STEP_SUMMARY, `## ${tierName} conformance\n\n| Target | Result | Passed / failed checks | Known deviations | Build | Output |\n| --- | --- | --- | --- | --- | --- |\n${rows.join('\n')}\n\n### Cost of importing ${tierName}\n\n| Target | Program | Build | Wasm | Output |\n| --- | --- | --- | --- | --- |\n${sizes.map(e => `| ${e.target} | ${e.program} | ${(e.buildMs / 1000).toFixed(1)} s | ${e.wasmBytes} | ${e.outputBytes} |`).join('\n')}\n\n### Generated members a runtime lacks\n\n| Member | Missing on |\n| --- | --- |\n${availability.join('\n')}\n`);
}
process.exit(ok ? 0 : 1);
