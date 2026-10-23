// Lasm release benchmarks (docs/BENCHMARKS.md): install, build, bundle size,
// cold start, memory, HTTP throughput/latency and interop latency of one
// candidate package, with plain-Node references measured on the same machine.
//
//   node bench/run.mjs CANDIDATE.tgz NEW_WORK_DIR NEW_RESULT.json
//
// Prerequisites: the Node version the candidate requires, and `npm ci` in bench/
// (the reference servers' dependencies). Settings (environment,
// defaults in parentheses):
//   BENCH_PHASES (install,build,start,http,interop)  BENCH_START_REPS (10)
//   BENCH_LOAD_REPS (3)  BENCH_LOAD_SECONDS (10)  BENCH_WARMUP_SECONDS (3)
//   BENCH_CONNECTIONS (16)  BENCH_BUILD_REPS (3)  BENCH_INSTALL_REPS (3)
//   BENCH_INTEROP_REPS (3)  BENCH_INTEROP_SAMPLES (5000)  BENCH_MAX_RSS_MIB (2048)
//   BENCH_TOOL_CACHE (a new directory in the work directory; the first build
//     then includes the one-time tool download; set it to reuse a warm cache)
//   BENCH_REUSE=1 reuses an existing work directory's built projects (local
//     iteration only; results are marked).
import assert from 'node:assert/strict';
import { spawn, spawnSync, execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { existsSync, lstatSync, mkdirSync, readFileSync, readdirSync, writeFileSync, cpSync, appendFileSync } from 'node:fs';
import http from 'node:http';
import net from 'node:net';
import os from 'node:os';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { setTimeout as sleep } from 'node:timers/promises';
import { brotliCompressSync, gzipSync, constants as zlib } from 'node:zlib';

const benchRoot = fileURLToPath(new URL('./', import.meta.url));
const repoRoot = resolve(benchRoot, '..');
const [tgzArg, workArg, outputArg] = process.argv.slice(2);
assert.ok(tgzArg && workArg && outputArg, 'Usage: node bench/run.mjs CANDIDATE.tgz NEW_WORK_DIR NEW_RESULT.json');
const tgz = resolve(tgzArg), work = resolve(workArg), output = resolve(outputArg);
const reuse = process.env.BENCH_REUSE === '1';
assert.ok(existsSync(tgz), `Missing candidate ${tgz}`);
assert.ok(!existsSync(output), 'Use a new result file');
assert.ok(reuse || !existsSync(work), 'Use a new work directory (or BENCH_REUSE=1)');
assert.ok(existsSync(join(benchRoot, 'node_modules/hono')), 'Run `npm ci` in bench/ first');

const setting = (name, fallback) => Number(process.env[name] ?? fallback);
const settings = {
  phases: (process.env.BENCH_PHASES ?? 'install,build,start,http,interop').split(','),
  startReps: setting('BENCH_START_REPS', 10), loadReps: setting('BENCH_LOAD_REPS', 3),
  loadSeconds: setting('BENCH_LOAD_SECONDS', 10), warmupSeconds: setting('BENCH_WARMUP_SECONDS', 3),
  connections: setting('BENCH_CONNECTIONS', 16), buildReps: setting('BENCH_BUILD_REPS', 3),
  installReps: setting('BENCH_INSTALL_REPS', 3), interopReps: setting('BENCH_INTEROP_REPS', 3),
  interopSamples: setting('BENCH_INTEROP_SAMPLES', 5000), maxRssMiB: setting('BENCH_MAX_RSS_MIB', 2048),
  idleSettleMs: 1000, reuse,
};
const has = phase => settings.phases.includes(phase);
const windows = process.platform === 'win32', linux = process.platform === 'linux', darwin = process.platform === 'darwin';
const node = process.execPath;
const npmCli = windows ? [node, join(dirname(node), 'node_modules/npm/bin/npm-cli.js')] : [join(dirname(node), 'npm')];
const npxCli = windows ? [node, join(dirname(node), 'node_modules/npm/bin/npx-cli.js')] : [join(dirname(node), 'npx')];
mkdirSync(work, { recursive: true });
const toolCache = resolve(process.env.BENCH_TOOL_CACHE ?? join(work, 'tool-cache'));
const freshTools = !existsSync(toolCache) || readdirSync(toolCache).length === 0;
const npmCacheRoot = join(work, 'npm-caches');
const baseEnv = { ...process.env, LASM_TOOLCHAIN_CACHE: toolCache, npm_config_audit: 'false', npm_config_fund: 'false',
  npm_config_update_notifier: 'false', npm_config_cache: join(npmCacheRoot, 'shared') };

// ---------- statistics and result shape ----------
const median = xs => { const s = [...xs].sort((a, b) => a - b), m = s.length >> 1; return s.length % 2 ? s[m] : (s[m - 1] + s[m]) / 2; };
const summarize = xs => xs.length ? { median: median(xs), min: Math.min(...xs), max: Math.max(...xs), n: xs.length } : null;
const round = (v, d = 2) => v == null ? v : Math.round(v * 10 ** d) / 10 ** d;
const result = {
  schema: 1, suite: 'lasm-release-benchmarks', recordedAt: new Date().toISOString(),
  candidate: {}, harness: {}, environment: {}, settings, calibration: {}, metrics: {}, raw: {}, notes: [], errors: [],
};
const save = () => writeFileSync(output, JSON.stringify(result, null, 2) + '\n');
// metric(key, { value, unit, better, samples?, ratio?, group, label })
function metric(key, fields) {
  const { samples, ...rest } = fields;
  const entry = { ...rest };
  if (samples) { const s = summarize(samples); entry.value = s.median; entry.spread = { min: s.min, max: s.max, n: s.n }; }
  if (entry.value == null) return;
  result.metrics[key] = entry; save();
}

// ---------- processes ----------
function run(label, [command, ...base], args, { cwd, env = baseEnv, timeout = 3600_000 } = {}) {
  const started = performance.now();
  const r = spawnSync(command, [...base, ...args], { cwd, env, encoding: 'utf8', timeout, maxBuffer: 256 * 1024 * 1024, windowsHide: true });
  const ms = performance.now() - started;
  if (r.status !== 0) throw new Error(`${label} failed (${r.status ?? r.signal ?? r.error?.message}):\n${(r.stdout ?? '').slice(-3000)}\n${(r.stderr ?? '').slice(-6000)}`);
  return { ms, stdout: r.stdout, stderr: r.stderr };
}
function bytesOf(path, { exclude = [] } = {}) {
  const stat = lstatSync(path);
  if (stat.isSymbolicLink()) return 0;
  if (!stat.isDirectory()) return stat.size;
  let total = 0;
  for (const name of readdirSync(path)) if (!exclude.includes(name)) total += bytesOf(join(path, name));
  return total;
}
function filesOf(path, { exclude = [] } = {}) {
  const stat = lstatSync(path);
  if (stat.isSymbolicLink()) return [];
  if (!stat.isDirectory()) return [path];
  return readdirSync(path).filter(n => !exclude.includes(n)).flatMap(n => filesOf(join(path, n)));
}
const gzipSize = bytes => gzipSync(bytes, { level: 9 }).length;
const brotliSize = bytes => brotliCompressSync(bytes, { params: { [zlib.BROTLI_PARAM_QUALITY]: 11, [zlib.BROTLI_PARAM_SIZE_HINT]: bytes.length } }).length;
async function freePort() {
  const server = net.createServer();
  await new Promise(done => server.listen(0, '127.0.0.1', done));
  const { port } = server.address();
  await new Promise(done => server.close(done));
  return port;
}
// Resident memory of one process (Lasm applications are one process: Lean
// runs on worker threads). Linux: VmRSS/VmHWM from procfs. macOS: ps (no
// kernel high-water mark, so peaks are sampled). Windows: the working set.
function memoryOf(pid) {
  try {
    if (linux) {
      const status = readFileSync(`/proc/${pid}/status`, 'utf8');
      const kib = name => Number(status.match(new RegExp(`^${name}:\\s+(\\d+) kB$`, 'm'))?.[1] ?? NaN) * 1024;
      return { rss: kib('VmRSS'), peak: kib('VmHWM') };
    }
    if (darwin) {
      const rss = Number(execFileSync('ps', ['-o', 'rss=', '-p', String(pid)], { encoding: 'utf8' }).trim()) * 1024;
      return { rss, peak: null };
    }
    if (windows) {
      const out = execFileSync('powershell.exe', ['-NoProfile', '-NonInteractive', '-Command',
        `$p = Get-Process -Id ${pid}; "$($p.WorkingSet64) $($p.PeakWorkingSet64)"`], { encoding: 'utf8', windowsHide: true }).trim();
      const [rss, peak] = out.split(/\s+/).map(Number);
      return { rss, peak };
    }
  } catch { /* exited */ }
  return { rss: null, peak: null };
}

// Pin the load generator (two threads) to the last two CPUs and the server to
// the others where possible (Linux with taskset and at least 4 CPUs), so they
// do not contend.
const cpuCount = os.availableParallelism?.() ?? os.cpus().length;
const pinning = linux && cpuCount >= 4 && spawnSync('taskset', ['-c', '0', 'true']).status === 0
  ? { server: `0-${cpuCount - 3}`, load: `${cpuCount - 2}-${cpuCount - 1}` } : null;
const pinned = (cpus, argv) => pinning ? ['taskset', '-c', cpus, ...argv] : argv;

function startProcess(argv, { cwd, env, ready, pinTo }) {
  const [command, ...args] = pinTo ? pinned(pinTo, argv) : argv;
  const started = performance.now();
  const child = spawn(command, args, { cwd, env, stdio: ['ignore', 'pipe', 'pipe'], windowsHide: true });
  const state = { child, started, stdout: '', stderr: '', firstOutputMs: null, readyMs: null, exitMs: null, code: undefined };
  state.ready = new Promise((resolveReady, rejectReady) => {
    child.stdout.on('data', chunk => {
      const now = performance.now();
      state.firstOutputMs ??= now - started;
      state.stdout += chunk;
      if (ready && state.readyMs == null && ready.test(state.stdout)) { state.readyMs = now - started; resolveReady(); }
    });
    child.stderr.on('data', chunk => { state.stderr += chunk; });
    state.exited = new Promise(done => child.on('close', (code, signal) => {
      state.exitMs = performance.now() - started; state.code = code ?? signal;
      if (state.readyMs == null) rejectReady(new Error(`Exited (${state.code}) before ready:\n${state.stdout.slice(-2000)}\n${state.stderr.slice(-4000)}`));
      done();
    }));
    child.on('error', rejectReady);
  });
  state.ready.catch(() => {});
  return state;
}
async function stop(state) {
  if (state.code !== undefined) return;
  state.child.kill('SIGKILL');
  await Promise.race([state.exited, sleep(10_000)]);
}
function get(port) {
  return new Promise((resolveGet, rejectGet) => {
    const request = http.get({ host: '127.0.0.1', port, path: '/', agent: false }, response => {
      let body = '';
      response.setEncoding('utf8');
      response.on('data', chunk => { body += chunk; });
      response.on('end', () => resolveGet({ status: response.statusCode, body }));
    });
    request.on('error', rejectGet);
    request.setTimeout(10_000, () => request.destroy(new Error('timeout')));
  });
}
async function firstResponse(state, port, deadlineMs = 120_000) {
  for (;;) {
    if (state.code !== undefined) throw new Error(`Server exited (${state.code}):\n${state.stderr.slice(-4000)}`);
    try {
      const r = await get(port);
      const ms = performance.now() - state.started;
      assert.equal(r.status, 200, `GET / answered ${r.status}`);
      assert.deepEqual(JSON.parse(r.body), { ok: true });
      return ms;
    } catch (error) {
      if (error.code !== 'ECONNREFUSED' && error.code !== 'ECONNRESET') throw error;
      if (performance.now() - state.started > deadlineMs) throw new Error('No HTTP response before the deadline');
      await sleep(2);
    }
  }
}

// ---------- environment ----------
function environment() {
  let distro = null;
  try { distro = readFileSync('/etc/os-release', 'utf8').match(/^PRETTY_NAME="?([^"\n]+)"?$/m)?.[1] ?? null; } catch { /* not Linux */ }
  if (darwin) try { distro = 'macOS ' + execFileSync('sw_vers', ['-productVersion'], { encoding: 'utf8' }).trim(); } catch { /* ignore */ }
  const npmVersion = run('npm --version', npmCli, ['--version']).stdout.trim();
  return {
    platform: `${process.platform}-${process.arch}`, os: os.type(), osRelease: os.release(), distro,
    cpuModel: os.cpus()[0]?.model?.trim() ?? null, cpus: cpuCount, memoryBytes: os.totalmem(),
    node: process.versions.node, npm: npmVersion, v8: process.versions.v8,
    runner: process.env.GITHUB_ACTIONS ? { kind: 'github-actions', name: process.env.RUNNER_NAME ?? null,
      environment: process.env.RUNNER_ENVIRONMENT ?? null, image: process.env.ImageOS ?? null, imageVersion: process.env.ImageVersion ?? null,
      runId: process.env.GITHUB_RUN_ID ?? null, runAttempt: process.env.GITHUB_RUN_ATTEMPT ?? null } : { kind: 'local', hostname: null },
    pinning,
  };
}
// A fixed CPU workload in a fresh Node process: a same-runner speed index for
// normalizing CPU-bound numbers (build time, interop) across runner hardware.
function calibrate() {
  const script = `const {createHash}=require('node:crypto');const b=Buffer.alloc(64<<20,7);const o=Array.from({length:20000},(_, i)=>({i,s:'x'+i,a:[i,i+1]}));
const t=performance.now();createHash('sha256').update(b).digest();for(let k=0;k<10;k++)JSON.parse(JSON.stringify(o));let x=0;for(let i=0;i<3e7;i++)x=(x+i*i)%1000003;console.log(performance.now()-t)`;
  const samples = [];
  for (let i = 0; i < 6; i++) samples.push(Number(run('calibration', [node], ['-e', script]).stdout.trim()));
  return samples.slice(1);
}

// ---------- phases ----------
const projects = {};
const fixtures = ['hello', 'hono', 'express', 'std-http', 'interop'];
function project(name) {
  const dir = join(work, 'projects', name);
  if (reuse && existsSync(join(dir, 'node_modules/.bin'))) return dir;
  cpSync(join(benchRoot, 'fixtures', name), dir, { recursive: true });
  if (existsSync(join(dir, 'package.json'))) run(`npm ci (${name})`, npmCli, ['ci'], { cwd: dir });
  else writeFileSync(join(dir, 'package.json'), JSON.stringify({ private: true }) + '\n');
  // Lasm is a build tool: a devDependency, never deployed.
  run(`npm install -D candidate (${name})`, npmCli, ['install', '-D', tgz], { cwd: dir });
  return dir;
}
const build = (name, extra = []) => run(`lasm build ${name}`, npxCli, ['lasm', 'build', 'Main.lean', '--output', 'dist', ...extra], { cwd: projects[name] }).ms;

function installPhase() {
  const samples = [];
  let installed = null, packageBytes = null;
  for (let i = 0; i < settings.installReps; i++) {
    const dir = join(work, `install-${i}`);
    mkdirSync(dir, { recursive: true });
    writeFileSync(join(dir, 'package.json'), JSON.stringify({ private: true }) + '\n');
    // A new npm cache each time: nothing is reused from earlier installs.
    const env = { ...baseEnv, npm_config_cache: join(npmCacheRoot, `install-${i}`) };
    samples.push(run('npm install -D candidate', npmCli, ['install', '-D', tgz], { cwd: dir, env }).ms);
    if (i === 0) {
      installed = bytesOf(join(dir, 'node_modules'));
      const manifest = JSON.parse(readFileSync(join(dir, 'package.json'), 'utf8'));
      const name = Object.keys(manifest.devDependencies)[0];
      packageBytes = bytesOf(join(dir, 'node_modules', ...name.split('/')));
    }
  }
  metric('install.download_bytes', { value: lstatSync(tgz).size, unit: 'bytes', better: 'lower', group: 'install', label: 'Package download (npm tarball)' });
  metric('install.installed_bytes', { value: installed, unit: 'bytes', better: 'lower', group: 'install', label: 'Installed size (node_modules)' });
  metric('install.package_bytes', { value: packageBytes, unit: 'bytes', better: 'lower', group: 'install', label: 'Installed size (the Lasm package itself)' });
  metric('install.time_ms', { samples, unit: 'ms', better: 'lower', group: 'install', label: 'npm install time, empty npm cache' });
}

function buildPhase() {
  for (const name of fixtures) projects[name] = project(name);
  if (reuse && existsSync(join(projects.hello, 'dist/main.mjs'))) {
    result.notes.push('Builds reused (BENCH_REUSE): build times not measured');
    for (const name of fixtures) sizes(name);
    return;
  }
  // First build of the trivial program; with a new tool cache this includes the
  // one-time download and extraction of Lean and the build tools.
  const firstMs = build('hello');
  metric(freshTools ? 'install.first_build_ms' : 'build.first_build_warm_tools_ms', { value: firstMs, unit: 'ms', better: 'lower', group: 'install',
    label: freshTools ? 'First build on a new machine (includes one-time tool download)' : 'First build (tools already cached)' });
  if (freshTools) metric('install.tool_cache_bytes', { value: bytesOf(toolCache), unit: 'bytes', better: 'lower', group: 'install', label: 'Tool cache after the first build (on disk)' });
  for (const name of ['hello', 'hono']) {
    const clean = [], incremental = [];
    for (let i = 0; i < settings.buildReps; i++) clean.push(build(name, ['--rebuild']));
    sizes(name);
    const source = join(projects[name], 'Main.lean'), original = readFileSync(source, 'utf8');
    for (let i = 0; i < settings.buildReps; i++) {
      writeFileSync(source, original + `\ndef benchmarkEdit : Nat := ${i + 1}\n`);
      incremental.push(build(name));
    }
    writeFileSync(source, original);
    build(name);
    metric(`build.clean_ms.${name}`, { samples: clean, unit: 'ms', better: 'lower', group: 'build', label: `Clean build (--rebuild), ${name}`, normalize: 'cpu' });
    metric(`build.incremental_ms.${name}`, { samples: incremental, unit: 'ms', better: 'lower', group: 'build', label: `Incremental build after a one-line change, ${name}`, normalize: 'cpu' });
  }
  for (const name of ['express', 'std-http', 'interop']) {
    metric(`build.clean_ms.${name}`, { value: build(name), unit: 'ms', better: 'lower', group: 'build', label: `Clean build, ${name}`, normalize: 'cpu', spread: { n: 1 } });
    sizes(name);
  }
}

function sizes(name) {
  const dist = join(projects[name], 'dist');
  const files = filesOf(dist, { exclude: ['node_modules'] });
  const wasm = readFileSync(join(dist, 'program.wasm'));
  let gzipTotal = 0, brotliTotal = 0;
  for (const file of files) { const bytes = readFileSync(file); gzipTotal += gzipSize(bytes); brotliTotal += brotliSize(bytes); }
  const modules = existsSync(join(dist, 'node_modules')) ? bytesOf(join(dist, 'node_modules')) : 0;
  const m = (key, value, label) => metric(`size.${key}.${name}`, { value, unit: 'bytes', better: 'lower', group: 'size', label: `${label}, ${name}` });
  m('dist_bytes', files.reduce((t, f) => t + lstatSync(f).size, 0), 'dist/ without node_modules');
  m('dist_gzip_bytes', gzipTotal, 'dist/ without node_modules, gzip -9 per file');
  m('dist_brotli_bytes', brotliTotal, 'dist/ without node_modules, brotli 11 per file');
  m('wasm_bytes', wasm.length, 'program.wasm');
  m('wasm_gzip_bytes', gzipSize(wasm), 'program.wasm, gzip -9');
  m('wasm_brotli_bytes', brotliSize(wasm), 'program.wasm, brotli 11');
  m('node_modules_bytes', modules, 'dist/node_modules (npm dependencies)');
  result.raw.distFiles ??= {};
  result.raw.distFiles[name] = files.length;
}

const servers = () => [
  { id: 'node-http', argv: [node, join(benchRoot, 'reference/node-http.mjs')], reference: true, label: 'Plain Node node:http (reference)' },
  { id: 'node-hono', argv: [node, join(benchRoot, 'reference/node-hono.mjs')], reference: true, label: 'Hono, JavaScript handler (reference)' },
  { id: 'node-express', argv: [node, join(benchRoot, 'reference/node-express.mjs')], reference: true, label: 'Express, JavaScript handler (reference)' },
  { id: 'lasm-hono', argv: [node, join(projects.hono, 'dist/main.mjs')], framework: 'node-hono', label: 'Hono with a Lean handler' },
  { id: 'lasm-express', argv: [node, join(projects.express, 'dist/main.mjs')], framework: 'node-express', label: 'Express with a Lean handler' },
  { id: 'lasm-std-http', argv: [node, join(projects['std-http'], 'dist/main.mjs')], label: "Lean's Std.Http server" },
];
const programs = () => [
  { id: 'node-hello', argv: [node, join(benchRoot, 'reference/hello.mjs')], reference: true, label: 'Plain Node console.log (reference)' },
  { id: 'lasm-hello', argv: [node, join(projects.hello, 'dist/main.mjs')], label: 'Trivial Lean program' },
];
const rotate = (xs, k) => xs.map((_, i) => xs[(i + k) % xs.length]);

async function startPhase() {
  // Every repetition is a new process; subjects are interleaved so that drift
  // in a shared runner affects all of them alike. Run 0 warms the OS file cache
  // and is discarded: these are process start times with a warm file cache.
  const samples = {};
  const add = (key, v) => { (samples[key] ??= []).push(v); };
  for (let rep = 0; rep <= settings.startReps; rep++) {
    for (const p of rotate(programs(), rep)) {
      const state = startProcess(p.argv, { env: process.env });
      await state.exited;
      assert.equal(state.code, 0, `${p.id} failed: ${state.stderr}`);
      assert.match(state.stdout, /^Hello from Lean! 2 \+ 3 = 5\n$/);
      if (rep) { add(`${p.id}.first_output`, state.firstOutputMs); add(`${p.id}.exit`, state.exitMs); }
    }
    for (const s of rotate(servers(), rep)) {
      const port = await freePort();
      const state = startProcess(s.argv, { env: { ...process.env, PORT: String(port) }, ready: /Listening on/ });
      const first = await firstResponse(state, port);
      await state.ready;
      if (rep) { add(`${s.id}.ready`, state.readyMs); add(`${s.id}.first_response`, first); }
      await stop(state);
    }
  }
  result.raw.start = samples;
  for (const p of programs()) {
    const ratio = p.reference ? undefined : round(median(samples[`${p.id}.exit`]) / median(samples['node-hello.exit']));
    metric(`start.exit_ms.${p.id}`, { samples: samples[`${p.id}.exit`], unit: 'ms', better: 'lower', group: 'start', label: `Start to exit, ${p.label}`, ratio, ratioTo: 'node-hello', reference: p.reference });
    metric(`start.first_output_ms.${p.id}`, { samples: samples[`${p.id}.first_output`], unit: 'ms', better: 'lower', group: 'start', label: `Start to first output, ${p.label}`, reference: p.reference });
  }
  for (const s of servers()) {
    const ratio = s.id === 'node-http' ? undefined : round(median(samples[`${s.id}.first_response`]) / median(samples['node-http.first_response']));
    metric(`start.ready_ms.${s.id}`, { samples: samples[`${s.id}.ready`], unit: 'ms', better: 'lower', group: 'start', label: `Start to listening, ${s.label}`, reference: s.reference });
    metric(`start.first_response_ms.${s.id}`, { samples: samples[`${s.id}.first_response`], unit: 'ms', better: 'lower', group: 'start', label: `Start to first HTTP response, ${s.label}`, ratio, ratioTo: 'node-http', reference: s.reference });
  }
  // Peak memory of the trivial program: Node's own resource usage, reported
  // from the main thread at exit by a preloaded module (no OS sampling gaps).
  const preload = join(work, 'max-rss.mjs');
  writeFileSync(preload, "import { isMainThread } from 'node:worker_threads';\nif (isMainThread) process.on('exit', () => process.stderr.write(`\\nLASM_BENCH_MAX_RSS=${process.resourceUsage().maxRSS * 1024}\\n`));\n");
  for (const p of programs()) {
    const values = [];
    for (let i = 0; i < 3; i++) {
      const [command, ...args] = p.argv;
      const r = spawnSync(command, ['--import', pathToFileURL(preload).href, ...args], { encoding: 'utf8', windowsHide: true });
      const v = Number(r.stderr.match(/LASM_BENCH_MAX_RSS=(\d+)/)?.[1]);
      if (r.status === 0 && v > 0) values.push(v);
      else { result.notes.push(`max RSS not reported for ${p.id}: ${r.status} ${r.stderr.slice(-500)}`); break; }
    }
    if (values.length) metric(`memory.max_rss_bytes.${p.id}`, { samples: values, unit: 'bytes', better: 'lower', group: 'memory',
      label: `Peak RSS, ${p.label}`, reference: p.reference,
      ratio: p.reference ? undefined : round(median(values) / (result.metrics['memory.max_rss_bytes.node-hello']?.value ?? NaN)), ratioTo: 'node-hello' });
  }
}

async function httpPhase() {
  const samples = {};
  const add = (key, v) => { (samples[key] ??= []).push(v); };
  const runs = [];
  for (let rep = 0; rep < settings.loadReps; rep++) {
    for (const s of rotate(servers(), rep)) {
      const port = await freePort();
      const state = startProcess(s.argv, { env: { ...process.env, PORT: String(port) }, ready: /Listening on/, pinTo: pinning?.server });
      await state.ready;
      await firstResponse(state, port);
      await sleep(settings.idleSettleMs);
      const idle = memoryOf(state.child.pid).rss;
      let sampledPeak = idle ?? 0, capped = false;
      const sampler = setInterval(() => {
        const { rss } = memoryOf(state.child.pid);
        if (rss != null) sampledPeak = Math.max(sampledPeak, rss);
        if (rss > settings.maxRssMiB * 1024 ** 2 && !capped) { capped = true; state.child.kill('SIGKILL'); }
      }, windows ? 2000 : 250);
      const load = startProcess(pinned(pinning?.load, [node, join(benchRoot, 'load.mjs'), `http://127.0.0.1:${port}/`,
        String(settings.connections), String(settings.warmupSeconds), String(settings.loadSeconds), '2']), { env: process.env });
      await load.exited;
      clearInterval(sampler);
      const memory = memoryOf(state.child.pid);
      const peak = Math.max(sampledPeak, memory.peak ?? 0, memory.rss ?? 0);
      const alive = state.code === undefined;
      await stop(state);
      assert.equal(load.code, 0, `load generator failed: ${load.stderr}`);
      const r = JSON.parse(load.stdout.trim().split('\n').pop());
      const entry = { rep, server: s.id, idleRssBytes: idle, peakRssBytes: peak, capped, alive, ...r };
      runs.push(entry); result.raw.http = runs; save();
      if (capped || !alive || r.errors || r.timeouts || r.non2xx) {
        result.errors.push(`${s.id} rep ${rep}: capped=${capped} alive=${alive} errors=${r.errors} timeouts=${r.timeouts} non2xx=${r.non2xx}`);
        continue;
      }
      add(`${s.id}.rps`, r.rps); add(`${s.id}.p50`, r.latencyMs.p50); add(`${s.id}.p99`, r.latencyMs.p99);
      add(`${s.id}.idle`, idle); add(`${s.id}.peak`, peak);
    }
  }
  // Ratios pair each server with the reference from the same repetition.
  const ratioOf = (id, field, ref) => {
    const xs = runs.filter(r => r.server === id && !r.capped && !r.errors);
    const ys = xs.map(x => { const y = runs.find(r => r.server === ref && r.rep === x.rep); return y ? field(x) / field(y) : NaN; }).filter(Number.isFinite);
    return ys.length ? round(median(ys), 3) : undefined;
  };
  for (const s of servers()) {
    if (!samples[`${s.id}.rps`]) continue;
    const ref = s.id === 'node-http' ? undefined : 'node-http';
    const common = { group: 'http', reference: s.reference };
    metric(`http.rps.${s.id}`, { samples: samples[`${s.id}.rps`], unit: 'req/s', better: 'higher', ...common, label: `Throughput, ${s.label}`,
      ratio: ref && ratioOf(s.id, r => r.rps, ref), ratioTo: ref, frameworkRatio: s.framework && ratioOf(s.id, r => r.rps, s.framework), frameworkRef: s.framework });
    metric(`http.p50_ms.${s.id}`, { samples: samples[`${s.id}.p50`], unit: 'ms', better: 'lower', ...common, label: `Latency p50, ${s.label}`,
      ratio: ref && ratioOf(s.id, r => r.latencyMs.p50, ref), ratioTo: ref });
    metric(`http.p99_ms.${s.id}`, { samples: samples[`${s.id}.p99`], unit: 'ms', better: 'lower', ...common, label: `Latency p99, ${s.label}`,
      ratio: ref && ratioOf(s.id, r => r.latencyMs.p99, ref), ratioTo: ref });
    metric(`memory.idle_rss_bytes.${s.id}`, { samples: samples[`${s.id}.idle`], unit: 'bytes', better: 'lower', group: 'memory', reference: s.reference,
      label: `Idle RSS after start, ${s.label}`, ratio: ref && ratioOf(s.id, r => r.idleRssBytes, ref), ratioTo: ref });
    metric(`memory.peak_rss_bytes.${s.id}`, { samples: samples[`${s.id}.peak`], unit: 'bytes', better: 'lower', group: 'memory', reference: s.reference,
      label: `Peak RSS under load, ${s.label}`, ratio: ref && ratioOf(s.id, r => r.peakRssBytes, ref), ratioTo: ref });
  }
}

async function interopPhase() {
  const ops = {};
  for (let rep = 0; rep < settings.interopReps; rep++) {
    const r = run('interop', [node], [join(projects.interop, 'dist/main.mjs'), String(settings.interopSamples), String(Math.ceil(settings.interopSamples / 10))]);
    for (const line of r.stdout.trim().split('\n')) {
      const o = JSON.parse(line);
      (ops[o.op] ??= []).push(o);
    }
  }
  result.raw.interop = ops;
  const labels = { call: 'Lean→JS synchronous call round trip (Math.max())', await: 'Lean awaits a resolved JS promise (Promise.resolve(1))' };
  for (const [op, runs] of Object.entries(ops)) {
    metric(`interop.${op}_p50_us`, { samples: runs.map(r => r.p50Ns / 1000), unit: 'µs', better: 'lower', group: 'interop', label: `${labels[op]}, p50`, normalize: 'cpu' });
    metric(`interop.${op}_p99_us`, { samples: runs.map(r => r.p99Ns / 1000), unit: 'µs', better: 'lower', group: 'interop', label: `${labels[op]}, p99`, normalize: 'cpu' });
  }
}

// ---------- main ----------
async function hashFile(path) { return createHash('sha256').update(readFileSync(path)).digest('hex'); }
try {
  const manifest = JSON.parse(execFileSync('tar', ['-xOzf', tgz, 'package/package.json'], { encoding: 'utf8', maxBuffer: 1 << 24 }));
  let provenance = null;
  try { provenance = JSON.parse(execFileSync('tar', ['-xOzf', tgz, 'package/provenance.json'], { encoding: 'utf8', maxBuffer: 1 << 26 })); } catch { /* optional */ }
  result.candidate = { name: manifest.name, version: manifest.version, sha256: await hashFile(tgz),
    sourceRevision: provenance?.sourceRevision ?? provenance?.source?.revision ?? process.env.LASM_CANDIDATE_SOURCE_REVISION ?? null,
    release: process.env.LASM_CANDIDATE_RELEASE ?? null, requiredNode: manifest.engines?.node ?? null };
  let harnessCommit = process.env.GITHUB_SHA ?? null;
  if (!harnessCommit) try { harnessCommit = execFileSync('git', ['rev-parse', 'HEAD'], { cwd: repoRoot, encoding: 'utf8' }).trim(); } catch { /* not a checkout */ }
  result.harness = { commit: harnessCommit, loadGenerator: 'bench/load.mjs (closed loop, 2 threads)' };
  result.environment = environment();
  save();
  const before = calibrate();
  if (has('install')) installPhase();
  if (has('build') || has('start') || has('http') || has('interop')) buildPhase();
  if (has('start')) await startPhase();
  if (has('http')) await httpPhase();
  if (has('interop')) await interopPhase();
  const after = calibrate();
  result.calibration = { cpuMs: summarize([...before, ...after]), beforeMs: summarize(before), afterMs: summarize(after),
    description: 'Fixed single-threaded JavaScript workload (SHA-256 of 64 MiB, JSON round trips, an integer loop) in a fresh Node process' };
  result.finishedAt = new Date().toISOString();
  result.passed = result.errors.length === 0;
} catch (error) {
  result.passed = false; result.errors.push(error.stack ?? String(error));
  save();
  throw error;
} finally { save(); }
if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, `Benchmarks ${result.environment.platform}: ${Object.keys(result.metrics).length} metrics, ${result.errors.length} errors\n`);
console.log(JSON.stringify({ passed: result.passed, metrics: Object.keys(result.metrics).length, errors: result.errors }, null, 2));
