// Lasm.JS start-up stress (.github/workflows/lasm-js-stress.yml): runs Lasm.JS
// programs many times with a short per-run timeout, to catch hangs that show
// up once in hundreds of runs (lost wake-ups between Lean threads that start
// on demand, the interop poller and Node's main thread).
//   - js-interop: the installed acceptance's program (test/fixtures/js-interop,
//     in a directory named "js interop λ"), `lasm Main.lean` as the acceptance
//     runs it for the first runs, then its cached dev build directly;
//   - js-callbacks: a JavaScript callback before any promise is awaited and no
//     `waitForever` (the host starts the poller), then awaits;
//   - hono: a server that ends in `waitForever` (`main` becomes the poller),
//     started, asked GET / and stopped.
// A run still going after the timeout gets a Node diagnostic report (every
// thread's JavaScript and Wasm stack), Lasm.JS's poller state and every Lean
// thread's pending host request (diag preload below), then is killed.
//   node scripts/ci/lasm-js-stress.mjs CANDIDATE.tgz NEW_WORK_DIR RESULT.json [--runs 200] [--cli-runs 20] [--timeout-s 30]
import assert from 'node:assert/strict';
import { spawn, execFileSync } from 'node:child_process';
import { cpSync, existsSync, mkdirSync, readdirSync, readFileSync, writeFileSync } from 'node:fs';
import { createServer } from 'node:net';
import { get } from 'node:http';
import { join, resolve } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';

const args = process.argv.slice(2);
const flag = (name, fallback) => { const i = args.indexOf(name); if (i < 0) return fallback; const [, v] = args.splice(i, 2); return v; };
const runs = Number(flag('--runs', '200')), cliRuns = Number(flag('--cli-runs', '20')), timeoutMs = Number(flag('--timeout-s', '30')) * 1000;
const only = flag('--only', '');
const [tgzArg, workArg, outputArg] = args;
assert.ok(tgzArg && workArg && outputArg, 'Usage: node scripts/ci/lasm-js-stress.mjs CANDIDATE.tgz NEW_WORK_DIR RESULT.json [--runs N] [--cli-runs N] [--timeout-s S]');
const root = fileURLToPath(new URL('../../', import.meta.url));
const tgz = resolve(tgzArg), work = resolve(workArg), output = resolve(outputArg);
assert.ok(!existsSync(work), 'Use a new work directory');
mkdirSync(work, { recursive: true });
const windows = process.platform === 'win32';
const npm = windows ? 'npm.cmd' : 'npm';
const install = join(work, 'install');
mkdirSync(install);
writeFileSync(join(install, 'package.json'), '{"private":true}\n');
execFileSync(npm, ['install', tgz, '--no-audit', '--no-fund'], { cwd: install, stdio: 'inherit', shell: windows });
const lasm = join(install, 'node_modules/@lasm/compiler/bin/lasm.mjs');

// Loaded into every run (NODE_OPTIONS --import): after LASM_STRESS_DIAG_MS on
// the main thread, write the state, then a diagnostic report. Unref'd: a run
// that finishes is not kept alive.
const diag = join(work, 'diag.mjs');
writeFileSync(diag, `import { isMainThread } from 'node:worker_threads';
import { mkdirSync, writeFileSync } from 'node:fs';
const ms = Number(process.env.LASM_STRESS_DIAG_MS), dir = process.env.LASM_STRESS_DIAG_DIR;
if (isMainThread && ms && dir) setTimeout(() => {
  mkdirSync(dir, { recursive: true });
  const state = { pid: process.pid, argv: process.argv, uptimeMs: Math.round(process.uptime() * 1000) };
  try { state.js = globalThis[Symbol.for('lasm.js.stats')]?.() ?? null; } catch (e) { state.js = String(e); }
  try { state.host = globalThis[Symbol.for('lasm.full.slots')]?.() ?? null; } catch (e) { state.host = String(e); }
  try { state.activeResources = process.getActiveResourcesInfo(); } catch {}
  writeFileSync(dir + '/state-' + process.pid + '.json', JSON.stringify(state, (k, v) => typeof v === 'bigint' ? String(v) : v, 2));
  process.report.directory = dir;
  process.report.writeReport();
}, ms).unref();
`);
const diagEnv = dir => ({ ...process.env, NODE_OPTIONS: `${process.env.NODE_OPTIONS ?? ''} --import=${pathToFileURL(diag).href}`.trim(),
  LASM_STRESS_DIAG_MS: String(timeoutMs - 3000), LASM_STRESS_DIAG_DIR: dir, CI: '1', BROWSER: 'none' });

function freePort() {
  return new Promise((done, fail) => { const s = createServer(); s.once('error', fail); s.listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => done(port)); }); });
}
// One run: the exit code and output, or a hang (state and report written, then killed).
function once(command, argv, cwd, diagDir, { untilOutput, onOutput } = {}) {
  return new Promise(done => {
    const started = performance.now();
    const child = spawn(command, argv, { cwd, env: diagEnv(diagDir), stdio: ['ignore', 'pipe', 'pipe'] });
    let stdout = '', stderr = '', settled = false, hung = false;
    const finish = result => { if (!settled) { settled = true; clearTimeout(timer); done({ ...result, ms: Math.round(performance.now() - started), stdout, stderr }); } };
    const timer = setTimeout(() => { hung = true; child.kill('SIGKILL'); }, timeoutMs);
    child.stdout.on('data', d => { stdout += d; if (untilOutput && untilOutput.test(stdout)) { untilOutput = null; onOutput(child).then(ok => { child.kill('SIGKILL'); finish({ code: ok ? 0 : 1, hung: false }); }, () => { child.kill('SIGKILL'); finish({ code: 1, hung: false }); }); } });
    child.stderr.on('data', d => { stderr += d; });
    child.on('exit', code => finish({ code, hung }));
  });
}
const httpGet = port => new Promise((ok, fail) => get({ host: '127.0.0.1', port, path: '/', timeout: 10_000 }, r => { let b = ''; r.on('data', d => b += d); r.on('end', () => ok(b)); }).on('error', fail).on('timeout', () => fail(new Error('timeout'))));
function cachedDist(directory) {
  const base = join(directory, '.lake/lasm/applications'), found = [];
  for (const name of readdirSync(base)) for (const signature of readdirSync(join(base, name)))
    if (existsSync(join(base, name, signature, 'dist/build-info.json'))) found.push(join(base, name, signature, 'dist'));
  assert.equal(found.length, 1, `one cached build in ${directory}`);
  return found[0];
}

const result = { platform: `${process.platform}-${process.arch}`, node: process.version, candidate: tgz, runs, cliRuns, timeoutMs, programs: {} };
const save = () => writeFileSync(output, JSON.stringify(result, null, 2) + '\n');
async function stress(name, project, { expected, viaCli = 0, server = false }) {
  const record = result.programs[name] = { pass: 0, hang: 0, fail: 0, failures: [], msMax: 0, msTotal: 0 };
  // Build first, untimed (a cold build downloads tools): every timed run then
  // reuses the cached build, as the acceptance's run does after its first build.
  if (!server) {
    execFileSync(process.execPath, [lasm, 'Main.lean'], { cwd: project, stdio: ['ignore', 'ignore', 'inherit'], env: { ...process.env, CI: '1' }, timeout: 30 * 60_000 });
  }
  const total = viaCli + runs;
  for (let i = 0; i < total; i++) {
    const diagDir = join(work, 'hangs', `${name}-${i}`);
    let r;
    if (!server && i < viaCli) r = await once(process.execPath, [lasm, 'Main.lean'], project, diagDir);
    else {
      const dist = server ? join(project, 'dist') : cachedDist(project);
      if (server) {
        const port = await freePort();
        process.env.PORT = String(port);
        r = await once(process.execPath, [join(dist, 'main.mjs')], project, diagDir,
          { untilOutput: /Listening on/, onOutput: async () => /"ok":true/.test(await httpGet(port)) });
      } else r = await once(process.execPath, [join(dist, 'main.mjs')], project, diagDir);
    }
    record.msMax = Math.max(record.msMax, r.ms); record.msTotal += r.ms;
    const ok = !r.hung && r.code === 0 && (!expected || r.stdout.replace(/\r\n/g, '\n') === expected) && (server || r.stdout.length > 0);
    if (ok) record.pass++;
    else {
      r.hung ? record.hang++ : record.fail++;
      record.failures.push({ run: i, hung: r.hung, code: r.code, ms: r.ms, stdoutTail: r.stdout.slice(-600), stderrTail: r.stderr.slice(-2000), diag: existsSync(diagDir) ? readdirSync(diagDir) : [] });
      console.log(`${name} run ${i}: ${r.hung ? 'HANG' : 'FAIL ' + r.code} after ${r.ms} ms; last output: ${JSON.stringify(r.stdout.slice(-120))}`);
    }
    if ((i + 1) % 25 === 0) { console.log(`${name}: ${i + 1}/${total} (pass ${record.pass}, hang ${record.hang}, fail ${record.fail})`); save(); }
  }
  save();
}

const npmProject = dir => execFileSync(npm, ['install', '--offline', '--no-audit', '--no-fund'], { cwd: dir, stdio: 'inherit', shell: windows });
const want = name => !only || only.split(',').includes(name);
if (want('js-interop')) {
  const dir = join(work, 'js interop λ');
  cpSync(join(root, 'test/fixtures/js-interop'), dir, { recursive: true });
  npmProject(dir);
  await stress('js-interop', dir, { expected: readFileSync(join(dir, 'expected.txt'), 'utf8').replace(/\r\n/g, '\n'), viaCli: cliRuns });
}
if (want('js-callbacks')) {
  const dir = join(work, 'js callbacks');
  cpSync(join(root, 'test/fixtures/js-callbacks'), dir, { recursive: true });
  await stress('js-callbacks', dir, {});
}
if (want('hono')) {
  const dir = join(work, 'hono');
  cpSync(join(root, 'bench/fixtures/hono'), dir, { recursive: true });
  execFileSync(npm, ['ci', '--no-audit', '--no-fund'], { cwd: dir, stdio: 'inherit', shell: windows });
  // The first run builds; a server never exits, so build first.
  execFileSync(process.execPath, [lasm, 'build', 'Main.lean', '--dev'], { cwd: dir, stdio: 'inherit', env: { ...process.env, CI: '1' } });
  await stress('hono', dir, { server: true, viaCli: 0 });
}
const bad = Object.values(result.programs).reduce((n, p) => n + p.hang + p.fail, 0);
result.ok = bad === 0;
save();
console.log(JSON.stringify(Object.fromEntries(Object.entries(result.programs).map(([k, v]) => [k, { pass: v.pass, hang: v.hang, fail: v.fail, msMax: v.msMax }]))));
process.exit(bad ? 1 : 0);
