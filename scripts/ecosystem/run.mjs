// Phase 3 ecosystem check: one Lake project from scripts/ecosystem/projects,
// built and run natively (the oracle) and through an installed Lasm.
//   node run.mjs PROJECT WORK_DIR LASM_PACKAGE NATIVE_LEAN_PREFIX OUT.json [--memory-mib N] [--env K=V]...
// Heavy steps (Lake builds, Lasm builds) each run in their own resource-guarded
// workload. The project's project.json selects the executable, arguments, an
// optional local server (`resp`: a small Redis-protocol server), and expected
// Lasm failures. Results: pass, mismatch, native-fail (the package does not
// build or run natively: upstream), lasm-build-fail, lasm-run-fail, expected.
import { cpSync, existsSync, mkdirSync, readFileSync, rmSync, statSync, writeFileSync, readdirSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { spawn } from 'node:child_process';
import { delimiter, dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const [name, workArg, lasmArg, nativeArg, outArg, ...rest] = process.argv.slice(2);
if (!name || !workArg || !lasmArg || !nativeArg || !outArg) throw new Error('Usage: run.mjs PROJECT WORK LASM_PACKAGE NATIVE_LEAN OUT.json');
let memoryMiB = process.platform === 'darwin' && process.arch === 'arm64' ? 5120 : 10240;
const extraEnv = [];
for (let i = 0; i < rest.length; i++) {
  if (rest[i] === '--memory-mib') memoryMiB = Number(rest[++i]);
  else if (rest[i] === '--env') extraEnv.push(rest[++i]);
  else throw new Error(`Unknown option ${rest[i]}`);
}
const source = join(root, 'scripts/ecosystem/projects', name);
const config = JSON.parse(readFileSync(join(source, 'project.json'), 'utf8'));
const work = resolve(workArg, name), lasm = resolve(lasmArg), native = resolve(nativeArg), out = resolve(outArg);
const exeName = process.platform === 'win32' ? `${config.exe}.exe` : config.exe;
// Prepare steps (for example Mathlib's `lake exe cache get`) run after `lake update`.
const prepare = config.prepare ?? [];
rmSync(work, { recursive: true, force: true });
// A rerun replaces this project's earlier results and resource reports.
mkdirSync(dirname(out), { recursive: true });
for (const file of readdirSync(dirname(out))) if (file.startsWith(`${name}-`) && file.includes('-resources.json'))
  rmSync(join(dirname(out), file), { force: true });
mkdirSync(dirname(work), { recursive: true });
cpSync(source, work, { recursive: true });
// The resource guard keeps its per-checkout lock under the working directory's .work (macOS).
mkdirSync(join(work, '.work'), { recursive: true });
const result = { project: name, platform: `${process.platform}-${process.arch}`, node: process.version, started: new Date().toISOString() };
const save = () => writeFileSync(out, JSON.stringify(result, null, 2) + '\n');
const sha = text => createHash('sha256').update(text).digest('hex');

function run(command, args, { cwd = work, timeout = 3_600_000, env = process.env, bounded = false, report } = {}) {
  if (bounded) {
    const pages = process.platform === 'linux' ? ['python3', join(root, 'scripts/full-lean/base-pages.py')] : [];
    // The guard starts workloads with a clean environment; pass what they need explicitly.
    const passed = ['PATH', 'LASM_TOOLCHAIN_CACHE', ...extraEnv.map(item => item.split('=')[0]), ...Object.keys(config.env ?? {})]
      .filter(key => env[key] !== undefined).map(key => `${key}=${env[key]}`);
    const envCommand = process.platform === 'win32' ? [] : ['env', ...passed];
    args = ['--memory-mib', String(memoryMiB), ...(report ? ['--report', report] : []), '--', ...pages, ...envCommand, command, ...args];
    command = process.execPath; args.unshift(join(root, 'scripts/full-lean/run-bounded.mjs'));
  }
  return new Promise(resolvePromise => {
    const started = Date.now();
    const child = spawn(command, args, { cwd, env, windowsHide: true, stdio: ['ignore', 'pipe', 'pipe'] });
    let stdout = '', stderr = '';
    child.stdout.on('data', chunk => { stdout += chunk; });
    child.stderr.on('data', chunk => { stderr += chunk; });
    const timer = setTimeout(() => child.kill('SIGKILL'), timeout);
    child.on('error', error => { clearTimeout(timer); resolvePromise({ status: null, error: error.message, stdout, stderr, seconds: (Date.now() - started) / 1000 }); });
    child.on('close', (status, signal) => { clearTimeout(timer); resolvePromise({ status, signal, stdout, stderr, seconds: (Date.now() - started) / 1000 }); });
  });
}
const tail = (text, lines = 60) => text.split(/\r?\n/).slice(-lines).join('\n');
const env = { ...process.env, PATH: [join(native, 'bin'), dirname(process.execPath), process.env.PATH].filter(Boolean).join(delimiter) };
const lasmEnv = { ...process.env };
// Prepare steps (dependency builds) run without the project settings below.
const prepareEnv = { ...env };
// Project settings a native user also needs (for example where a tactic's shared library is).
for (const [key, value] of Object.entries(config.env ?? {})) env[key] = lasmEnv[key] = value.replaceAll('${work}', work);
for (const item of extraEnv) { const at = item.indexOf('='); env[item.slice(0, at)] = lasmEnv[item.slice(0, at)] = item.slice(at + 1); }
// Lean's own switches would change native results; Lasm strips them too.
for (const key of Object.keys(env)) if (/^(?:LEAN_|LAKE_|ELAN_)/.test(key)) delete env[key];

// Optional local server, shared by the native and Lasm runs.
let server, args = config.args ?? [];
if (config.server === 'resp') {
  const { startRespServer } = await import('./resp-server.mjs');
  server = await startRespServer();
  args = [String(server.port), ...args];
}
const lake = join(native, 'bin', process.platform === 'win32' ? 'lake.exe' : 'lake');
// A server module shipped by a dependency (`server: { module, export }`), started after Lake fetched it.
async function startModuleServer() {
  if (typeof config.server !== 'object' || server) return;
  const { pathToFileURL } = await import('node:url');
  const module = await import(pathToFileURL(join(work, config.server.module)).href);
  const http = await module[config.server.export ?? 'startServer']();
  server = { reset() {}, close() { http.close(); } };
  args = [`http://127.0.0.1:${http.address().port}`, ...args];
}
try {
  // Native oracle: Lake resolves and builds exactly as for a native user.
  if (config.native !== 'skip') {
    const update = await run(lake, ['update'], { env, bounded: true, report: join(dirname(out), `${name}-native-update-resources.json`) });
    let prepared = update;
    for (const [index, step] of prepare.entries()) if (prepared.status === 0)
      // Downloads and unpacking (Mathlib's cache) run outside the build guard.
      prepared = await run(step[0] === 'lake' ? lake : step[0], step.slice(1), { env: prepareEnv, bounded: !!step.bounded, timeout: 7_200_000,
        report: join(dirname(out), `${name}-native-prepare-${index}-resources.json`) });
    // Tier C: Mathlib's build unpacks its cache beyond the desktop guard's budget (CI only).
    const build = prepared.status === 0 ? await run(lake, ['build', config.exe], { env, bounded: !config.nativeUnbounded, timeout: 14_400_000,
      report: join(dirname(out), `${name}-native-build-resources.json`) }) : prepared;
    result.native = { buildSeconds: build.seconds, buildStatus: build.status };
    if (build.status !== 0) { result.native.log = tail(build.stdout + build.stderr); result.result = 'native-fail'; save(); process.exit(0); }
    await startModuleServer();
    // Module data the build needs (Tier C measures Mathlib's).
    result.native.oleanBytes = readdirSync(join(work, '.lake'), { recursive: true }).reduce((total, file) => {
      if (!/\.olean(?:\.private|\.server)?$/.test(file)) return total;
      try { return total + statSync(join(work, '.lake', file)).size; } catch { return total; }
    }, 0);
    if (server) server.reset();
    const executed = await run(join(work, '.lake/build/bin', exeName), args, { env, timeout: 600_000 });
    Object.assign(result.native, { exit: executed.status, stdout: executed.stdout, stderrTail: tail(executed.stderr, 10), runSeconds: executed.seconds });
    save();
  }
  // Lasm: the installed CLI builds a deployment and Node runs it.
  if (config.native === 'skip' && typeof config.server === 'object') {
    const update = await run(lake, ['update'], { env, bounded: true, report: join(dirname(out), `${name}-native-update-resources.json`) });
    if (update.status !== 0) { result.result = 'native-fail'; result.native = { log: tail(update.stdout + update.stderr) }; save(); process.exit(0); }
    await startModuleServer();
  }
  const lasmBuild = await run(process.execPath, [join(lasm, 'bin/lasm.mjs'), 'build', 'Main.lean', '--output', 'dist'],
    { env: lasmEnv, bounded: true, timeout: (config.lasmTimeoutSeconds ?? 3600) * 1000,
      report: join(dirname(out), `${name}-lasm-build-resources.json`) });
  result.lasm = { buildSeconds: lasmBuild.seconds, buildStatus: lasmBuild.status };
  const buildLog = lasmBuild.stdout + lasmBuild.stderr;
  if (lasmBuild.status !== 0) {
    result.lasm.log = tail(buildLog, 40);
    const expected = config.expect?.lasm === 'build-error' && new RegExp(config.expect.message).test(buildLog);
    result.result = expected ? 'expected' : 'lasm-build-fail';
    save(); process.exit(0);
  }
  const wasm = join(work, 'dist/program.wasm');
  result.lasm.wasmBytes = existsSync(wasm) ? statSync(wasm).size : null;
  result.lasm.distBytes = readdirSync(join(work, 'dist'), { recursive: true }).reduce((total, file) => {
    try { const stat = statSync(join(work, 'dist', file)); return total + (stat.isFile() ? stat.size : 0); } catch { return total; }
  }, 0);
  const info = JSON.parse(readFileSync(join(work, 'dist/build-info.json'), 'utf8'));
  result.lasm.initializationPlan = info.linkRequirements?.initializationPlan ?? null;
  result.lasm.nativeObjects = info.nativeObjects?.length ?? 0;
  result.lasm.leanDistribution = info.nativeLeanTier ? `tiers-${info.nativeLeanTier}` : 'full';
  // The deployment runs several times; every run must match (intermittent failures count).
  let executed;
  result.lasm.runs = [];
  for (let attempt = 0; attempt < (config.repeat ?? 3); attempt++) {
    if (server) server.reset();
    const current = await run(process.execPath, [join(work, 'dist/main.mjs'), ...args], { env: lasmEnv, timeout: 600_000 });
    result.lasm.runs.push({ exit: current.status, seconds: current.seconds, stdoutSha256: sha(current.stdout) });
    if (!executed || current.status !== executed.status || current.stdout !== executed.stdout) {
      if (executed) { executed = current.status !== 0 ? current : executed; break; }
      executed = current;
    }
  }
  if (new Set(result.lasm.runs.map(item => `${item.exit} ${item.stdoutSha256}`)).size > 1) result.lasm.inconsistent = true;
  Object.assign(result.lasm, { exit: executed.status, stdout: executed.stdout, stderrTail: tail(executed.stderr, 10), runSeconds: executed.seconds });
  if (config.native === 'skip') result.result = config.expect?.lasm === 'build-error' ? 'lasm-built-unexpectedly' : (executed.status === 0 ? 'pass' : 'lasm-run-fail');
  else if (!result.lasm.inconsistent && executed.status === result.native.exit
    && (config.compare === 'exit' ? executed.status === 0 : executed.stdout === result.native.stdout))
    result.result = 'pass';
  else result.result = executed.status === 0 || executed.status === result.native.exit ? 'mismatch' : 'lasm-run-fail';
  result.stdoutSha256 = sha(executed.stdout);
} finally {
  server?.close();
  result.finished = new Date().toISOString();
  save();
}
