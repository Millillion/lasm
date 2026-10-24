// Vercel Functions with no Vercel account:
//   1. `lasm package --target vercel` output (Build Output API v3) is checked:
//      config, .vc-config.json, every application file, 250 MB limit;
//   2. `vercel build` runs offline in each project (a local .vercel/project.json
//      stands in for `vercel link`): it runs vercel.json's buildCommand, which
//      writes .vercel/output with lasm package;
//   3. the built function runs under Vercel's own Node launcher (the
//      dev-server of @vercel/node, which `vercel dev` uses) inside AWS's
//      Lambda Node 24 image (Vercel Functions run on AWS Lambda, Amazon Linux
//      2023), read-only with 512 MB, with and without Vercel's request helpers;
//   4. `vercel dev` is started to record whether it still needs a login.
//   node run-vercel.mjs WORK/apps.json RESULT.json VERCEL_BIN VERCEL_NODE_MODULES
import assert from 'node:assert/strict';
import { spawn, spawnSync } from 'node:child_process';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, readdirSync, rmSync, statSync, writeFileSync } from 'node:fs';
import net from 'node:net';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { checkContract, waitFor } from './http-contract.mjs';

const [appsArg, resultArg, vercel, vercelModules] = process.argv.slice(2);
assert.ok(appsArg && resultArg && vercel && vercelModules, 'Usage: node run-vercel.mjs WORK/apps.json RESULT.json VERCEL_BIN VERCEL_NODE_MODULES');
const { apps } = JSON.parse(readFileSync(resolve(appsArg), 'utf8'));
const resultFile = resolve(resultArg);
const image = 'public.ecr.aws/lambda/nodejs:24';
const home = mkdtempSync(join(tmpdir(), 'lasm-vercel-home-'));
// No Vercel credentials: an empty HOME and no token.
const env = { ...process.env, VERCEL_TELEMETRY_DISABLED: '1', XDG_DATA_HOME: join(home, 'data'), XDG_CONFIG_HOME: join(home, 'config'), VERCEL_TOKEN: '' };
const result = { platform: `${process.platform}-${process.arch}`, vercel: spawnSync(vercel, ['--version'], { encoding: 'utf8', env }).stdout.trim(),
  vercelNode: JSON.parse(readFileSync(join(vercelModules, '@vercel/node/package.json'), 'utf8')).version, image, startedAt: new Date().toISOString(), runs: [] };
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
const size = path => statSync(path).isDirectory() ? readdirSync(path).reduce((total, name) => total + size(join(path, name)), 0) : statSync(path).size;
const freePort = () => new Promise(done => { const s = net.createServer().listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => done(port)); }); });
let failed = false;

async function launch(func, helpers) {
  const port = await freePort(), name = `lasm-vercel-${port}`;
  const started = performance.now();
  const run = spawnSync('docker', ['run', '-d', '--name', name, '--network', 'host', '--read-only', '--tmpfs', '/tmp', '--memory=512m', '--memory-swap=512m',
    '-v', `${func}:/var/task:ro`, '-v', `${resolve(vercelModules)}:/opt/vercel/node_modules:ro`, '-w', '/var/task',
    '-e', 'VERCEL_DEV_ENTRYPOINT=lasm-vercel.mjs', '-e', `VERCEL_DEV_PORT=${port}`, '-e', `VERCEL_DEV_CONFIG=${JSON.stringify(helpers ? {} : { helpers: false })}`,
    '--entrypoint', 'node', image, '/opt/vercel/node_modules/@vercel/node/dist/dev-server.mjs'], { encoding: 'utf8' });
  assert.equal(run.status, 0, run.stderr);
  const alive = () => spawnSync('docker', ['inspect', '-f', '{{.State.Running}}', name], { encoding: 'utf8' }).stdout.trim() === 'true';
  const base = `http://127.0.0.1:${port}`;
  await waitFor(base + '/health', { alive });
  return { name, base, firstMs: Math.round(performance.now() - started), stop: () => {
    const logs = spawnSync('docker', ['logs', name], { encoding: 'utf8' });
    spawnSync('docker', ['rm', '-f', name]);
    return (logs.stdout + logs.stderr).slice(-1500);
  } };
}

for (const app of apps.filter(app => app.packages.vercel)) {
  const run = { app: app.name, checks: [] };
  result.runs.push(run); save();
  const check = async (name, action) => {
    try { await action(); run.checks.push({ name, ok: true }); }
    catch (error) { run.checks.push({ name, ok: false, error: error.message.slice(0, 2000) }); }
  };
  const output = app.packages.vercel.path, func = join(output, 'functions/index.func');
  await check('lasm package output: Build Output API v3, Node 24 function, all files, within 250 MB', () => {
    assert.equal(JSON.parse(readFileSync(join(output, 'config.json'), 'utf8')).version, 3);
    const config = JSON.parse(readFileSync(join(func, '.vc-config.json'), 'utf8'));
    assert.deepEqual([config.runtime, config.handler, config.launcherType], ['nodejs24.x', 'lasm-vercel.mjs', 'Nodejs']);
    for (const file of ['lasm-vercel.mjs', 'lasm-server.mjs', 'main.mjs', 'program.cjs', 'program.wasm', 'host/node-host.mjs', 'host/native/manifest.json'])
      assert.ok(existsSync(join(func, file)), file);
    assert.equal(statSync(join(func, 'host/native/process/linux-x64-gnu')).mode & 0o777, 0o755);
    run.functionBytes = size(func);
    assert.ok(run.functionBytes < 250 * 1024 * 1024);
  });
  // vercel build, offline: the project's vercel.json build command.
  await check('vercel build (no account; vercel.json buildCommand)', async () => {
    mkdirSync(join(app.project, '.vercel'), { recursive: true });
    writeFileSync(join(app.project, '.vercel/project.json'), JSON.stringify({ projectId: 'prj_lasm_ci', orgId: 'team_lasm_ci', settings: {} }));
    rmSync(output, { recursive: true, force: true });
    const started = performance.now();
    const build = spawnSync(vercel, ['build', '--yes'], { cwd: app.project, env, encoding: 'utf8', timeout: 1800_000, maxBuffer: 64 * 1024 * 1024 });
    run.vercelBuildSeconds = Math.round((performance.now() - started) / 100) / 10;
    assert.equal(build.status, 0, (build.stdout + build.stderr).slice(-4000));
    assert.equal(JSON.parse(readFileSync(join(func, '.vc-config.json'), 'utf8')).handler, 'lasm-vercel.mjs');
    assert.ok(existsSync(join(func, 'program.wasm')));
    const routes = JSON.parse(readFileSync(join(output, 'config.json'), 'utf8')).routes;
    run.vercelBuildRoutes = routes;
    // vercel.json's route comes first, ahead of the zero-config routes vercel build adds.
    assert.equal(routes[0].dest, '/index', 'the first route sends every path to the function');
    assert.ok(new RegExp(routes[0].src).test('/hello/Ada'));
  });
  for (const helpers of [false, true]) {
    await check(`Vercel Node launcher in ${image}, request helpers ${helpers ? 'on' : 'off'}`, async () => {
      const fn = await launch(func, helpers);
      try {
        run[`firstResponseMs_helpers${helpers ? 'On' : 'Off'}`] = fn.firstMs;
        const checks = await checkContract(fn.base, app.framework);
        const failedChecks = checks.filter(c => !c.ok);
        assert.equal(failedChecks.length, 0, failedChecks.map(c => `${c.name}: ${c.error}`).join('; '));
      } finally { run.logTail = fn.stop(); }
    });
  }
  run.ok = run.checks.every(check => check.ok);
  failed ||= !run.ok;
  console.log(`${run.ok ? 'ok  ' : 'FAIL'} Vercel ${app.name}: ${run.checks.filter(c => !c.ok).map(c => c.name + ': ' + c.error).join('; ') || run.checks.length + ' checks passed'}`);
  save();
}
// `vercel dev` without an account: recorded, not required.
const app = apps.find(app => app.packages.vercel);
if (app) {
  const port = await freePort();
  const dev = spawn(vercel, ['dev', '--listen', String(port), '--yes'], { cwd: app.project, env, stdio: ['ignore', 'pipe', 'pipe'] });
  let log = ''; dev.stdout.on('data', d => { log += d; }); dev.stderr.on('data', d => { log += d; });
  await new Promise(done => setTimeout(done, 20_000));
  const answered = await fetch(`http://127.0.0.1:${port}/health`, { signal: AbortSignal.timeout(5000) }).then(r => r.status, () => null);
  dev.kill('SIGKILL');
  result.vercelDev = { answered, needsLogin: /login|credentials/i.test(log), log: log.replace(/user_code=[\w-]+/g, 'user_code=…').slice(-600) };
  console.log(`info vercel dev without an account: ${answered ? 'answered ' + answered : 'did not serve'}${result.vercelDev.needsLogin ? ' (asks for a login)' : ''}`);
}
result.finishedAt = new Date().toISOString(); result.ok = !failed; save();
process.exit(failed ? 1 : 0);
