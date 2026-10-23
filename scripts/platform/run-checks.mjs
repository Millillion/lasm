// Runs the platform sample applications (built by build-apps.mjs) with the Node
// that runs this script: the trivial program, then the Express and Hono
// interop examples against DATABASE_URL (scripts/js-interop/check-crud.mjs).
// Runs inside containers too, so it needs only Node itself.
//   node run-checks.mjs APPS_DIR [--expect-node-error | --expect-host-error]
// Prints one JSON line; exits 1 if any check fails.
import { spawnSync } from 'node:child_process';
import { existsSync, readFileSync, writeFileSync, rmSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const [appsArg, ...flags] = process.argv.slice(2);
const apps = resolve(appsArg ?? '');
if (!appsArg || !existsSync(join(apps, 'apps.json'))) { console.error('Usage: node run-checks.mjs APPS_DIR [--expect-node-error | --expect-host-error]'); process.exit(2); }
const manifest = JSON.parse(readFileSync(join(apps, 'apps.json'), 'utf8'));
const expectNodeError = flags.includes('--expect-node-error'), expectHostError = flags.includes('--expect-host-error');
const checkCrud = fileURLToPath(new URL('../js-interop/check-crud.mjs', import.meta.url));
let glibc;
try { glibc = process.report?.getReport().header.glibcVersionRuntime; } catch { /* not reported */ }
const memoryLimit = ['/sys/fs/cgroup/memory.max', '/sys/fs/cgroup/memory/memory.limit_in_bytes']
  .filter(existsSync).map(file => readFileSync(file, 'utf8').trim())[0];
// The deployment must work from a read-only directory; report whether it is one.
let appsWritable = true;
try { writeFileSync(join(apps, '.lasm-write-probe'), ''); rmSync(join(apps, '.lasm-write-probe')); } catch { appsWritable = false; }
const result = { node: process.version, platform: `${process.platform}-${process.arch}`, glibc: glibc ?? null,
  memoryLimit: memoryLimit ?? null, appsWritable, builtOn: manifest.host, builtWithNode: manifest.node, checks: [] };
const record = (name, ok, details = {}) => { result.checks.push({ name, ok, ...details }); };

if (expectNodeError || expectHostError) {
  // Old Node releases, and hosts the build carries no native pieces for, get
  // one clear message before any host code loads.
  const expected = expectNodeError ? /requires Node 24\.0\.0 or newer; you are running Node /
    : new RegExp(`includes native support for .*; it is running on ${process.platform}-${process.arch}\\. Run it on one of those platforms, or rebuild`);
  for (const app of manifest.apps) {
    const run = spawnSync(process.execPath, [join(apps, app.name, 'main.mjs')], { encoding: 'utf8', timeout: 60_000 });
    record(`${app.name} refuses ${expectNodeError ? 'Node ' + process.versions.node : result.platform}`, run.status === 1
      && expected.test(run.stderr) && !/\n\s+at /.test(run.stderr), { status: run.status, stderr: run.stderr.slice(-1000) });
  }
} else {
  for (const app of manifest.apps) {
    const main = join(apps, app.name, 'main.mjs');
    if (app.kind === 'program') {
      const started = performance.now();
      const run = spawnSync(process.execPath, [main], { encoding: 'utf8', timeout: 120_000 });
      record(app.name, run.status === 0 && run.stdout === app.expectedStdout,
        { status: run.status, ms: Math.round(performance.now() - started), stdout: run.stdout.slice(-500), stderr: run.stderr.slice(-2000) });
    } else {
      const run = spawnSync(process.execPath, [checkCrud, join(apps, app.name), app.name], { encoding: 'utf8', timeout: 300_000 });
      const line = run.stdout.trim().split('\n').pop();
      let report; try { report = JSON.parse(line); } catch { report = { stdout: run.stdout.slice(-2000), stderr: run.stderr.slice(-2000) }; }
      record(app.name, run.status === 0 && report.ok === true, { startupMs: report.startupMs, rps: report.load?.rps,
        failed: report.checks?.filter(check => !check.ok), ...(run.status === 0 ? {} : { status: run.status, report }) });
    }
  }
}
result.ok = result.checks.length === manifest.apps.length && result.checks.every(check => check.ok);
console.log(JSON.stringify(result));
process.exit(result.ok ? 0 : 1);
