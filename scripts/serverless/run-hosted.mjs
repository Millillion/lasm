// Azure Functions and Google Cloud Functions with no cloud account:
//   Azure: Azure Functions Core Tools `func start` (Node.js v4 programming
//   model) on the `lasm package --target azure` app;
//   Google: the Functions Framework on the `--target gcf` source directory,
//   and that directory built by Google Cloud's buildpacks (`pack build` with
//   the google-24 builder, as Cloud Run functions build Node 24 sources), the
//   image run with 512 MB.
//   node run-hosted.mjs WORK/apps.json RESULT.json --func FUNC_BIN --pack PACK_BIN
import assert from 'node:assert/strict';
import { spawn, spawnSync } from 'node:child_process';
import { readFileSync, writeFileSync } from 'node:fs';
import net from 'node:net';
import { join, resolve } from 'node:path';
import { checkContract, waitFor } from './http-contract.mjs';

const args = process.argv.slice(2);
const flag = name => { const i = args.indexOf(name); if (i < 0) return undefined; const [, value] = args.splice(i, 2); return value; };
const func = flag('--func'), pack = flag('--pack');
const builder = flag('--builder') ?? 'gcr.io/buildpacks/builder:google-24';
const [appsArg, resultArg] = args;
assert.ok(appsArg && resultArg && (func || pack), 'Usage: node run-hosted.mjs WORK/apps.json RESULT.json [--func FUNC_BIN] [--pack PACK_BIN]');
const { apps } = JSON.parse(readFileSync(resolve(appsArg), 'utf8'));
const resultFile = resolve(resultArg);
const result = { platform: `${process.platform}-${process.arch}`, startedAt: new Date().toISOString(), runs: [] };
if (func) result.func = spawnSync(func, ['--version'], { encoding: 'utf8' }).stdout.trim();
if (pack) Object.assign(result, { pack: spawnSync(pack, ['--version'], { encoding: 'utf8' }).stdout.trim(), builder });
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
const freePort = () => new Promise(done => { const s = net.createServer().listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => done(port)); }); });
let failed = false;

/** Starts a local server process, checks the template contract, stops it. */
async function serve(run, label, command, argv, options, port, framework) {
  const started = performance.now();
  const child = spawn(command, argv, { ...options, stdio: ['ignore', 'pipe', 'pipe'] });
  let log = ''; child.stdout.on('data', d => { log += d; }); child.stderr.on('data', d => { log += d; });
  try {
    const base = `http://127.0.0.1:${port}`;
    await waitFor(base + '/health', { alive: () => child.exitCode === null, timeoutMs: 300_000 });
    run[`${label}FirstResponseMs`] = Math.round(performance.now() - started);
    const checks = await checkContract(base, framework);
    const bad = checks.filter(c => !c.ok);
    assert.equal(bad.length, 0, bad.map(c => `${c.name}: ${c.error}`).join('; ') + '\n' + log.slice(-2000));
  } finally {
    child.kill('SIGTERM');
    await new Promise(done => { const t = setTimeout(() => { child.kill('SIGKILL'); done(); }, 10_000); child.once('exit', () => { clearTimeout(t); done(); }); });
    run[`${label}LogTail`] = log.slice(-1200);
  }
}

for (const app of apps.filter(app => app.packages.azure || app.packages.gcf)) {
  const run = { app: app.name, checks: [] };
  result.runs.push(run); save();
  const check = async (name, action) => {
    try { await action(); run.checks.push({ name, ok: true }); }
    catch (error) { run.checks.push({ name, ok: false, error: error.message.slice(0, 3000) }); }
  };
  if (func && app.packages.azure) {
    const directory = app.packages.azure.path;
    await check('Azure Functions Core Tools func start', async () => {
      const port = await freePort();
      await serve(run, 'azure', func, ['start', '--port', String(port)], { cwd: directory,
        env: { ...process.env, FUNCTIONS_CORE_TOOLS_TELEMETRY_OPTOUT: '1' } }, port, app.framework);
    });
  }
  if (app.packages.gcf) {
    const directory = app.packages.gcf.path;
    await check('Functions Framework (node, the runner\'s Ubuntu 24.04)', async () => {
      const port = await freePort();
      await serve(run, 'functionsFramework', process.execPath,
        [join(directory, 'node_modules/@google-cloud/functions-framework/build/src/main.js'), '--target=lasm', `--port=${port}`],
        { cwd: directory, env: { ...process.env } }, port, app.framework);
    });
    if (pack) await check(`Google Cloud buildpacks (${builder}) image`, async () => {
      const tag = `lasm-gcf-${app.name}-${process.pid}`.toLowerCase();
      const started = performance.now();
      const build = spawnSync(pack, ['build', tag, '--builder', builder, '--path', directory, '--pull-policy', 'if-not-present',
        '--env', 'GOOGLE_FUNCTION_TARGET=lasm', '--env', 'GOOGLE_FUNCTION_SIGNATURE_TYPE=http', '--env', 'GOOGLE_RUNTIME_VERSION=24'],
        { encoding: 'utf8', timeout: 1800_000, maxBuffer: 64 * 1024 * 1024 });
      run.packBuildSeconds = Math.round((performance.now() - started) / 100) / 10;
      assert.equal(build.status, 0, (build.stdout + build.stderr).slice(-4000));
      run.packNode = /Installing Node\.js v?((\d+\.\d+\.\d+))/i.exec(build.stdout)?.slice(1).find(Boolean);
      const port = await freePort();
      try {
        await serve(run, 'buildpacks', 'docker', ['run', '--rm', '--name', tag, '-p', `127.0.0.1:${port}:8080`, '--memory=512m', '--memory-swap=512m',
          '-e', 'PORT=8080', tag], {}, port, app.framework);
      } finally { spawnSync('docker', ['rm', '-f', tag]); spawnSync('docker', ['rmi', '-f', tag]); }
    });
  }
  run.ok = run.checks.every(check => check.ok);
  failed ||= !run.ok;
  console.log(`${run.ok ? 'ok  ' : 'FAIL'} hosted ${app.name}: first responses azure ${run.azureFirstResponseMs} ms, framework ${run.functionsFrameworkFirstResponseMs} ms, buildpacks ${run.buildpacksFirstResponseMs} ms (pack build ${run.packBuildSeconds} s, Node ${run.packNode}); `
    + `${run.checks.filter(c => !c.ok).map(c => c.name + ': ' + c.error).join('; ') || run.checks.length + ' checks passed'}`);
  save();
}
result.finishedAt = new Date().toISOString(); result.ok = !failed; save();
process.exit(failed ? 1 : 0);
