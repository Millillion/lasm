// Netlify Functions with no Netlify account:
//   1. `lasm package --target netlify` output (a v2 function directory) is checked;
//   2. `netlify build --offline` runs netlify.toml's build command and bundles
//      the function exactly as for a deploy (.netlify/functions/lasm.zip): the
//      zip must hold the Wasm program, host and native pieces (included_files)
//      with the helpers executable, within Netlify's size limits;
//   3. `netlify dev --offline` serves every path through the function;
//   4. that deploy zip runs in AWS's Lambda Node 24 image through the Runtime
//      Interface Emulator with Netlify's own bundled bootstrap
//      (___netlify-entry-point.handler, a response-streaming handler), invoked
//      with the request fields that bootstrap reads.
//   node run-netlify.mjs WORK/apps.json RESULT.json NETLIFY_BIN
import assert from 'node:assert/strict';
import { execFileSync, spawn, spawnSync } from 'node:child_process';
import { chmodSync, existsSync, mkdtempSync, readFileSync, writeFileSync } from 'node:fs';
import net from 'node:net';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { checkContract, waitFor } from './http-contract.mjs';

const [appsArg, resultArg, netlify] = process.argv.slice(2);
assert.ok(appsArg && resultArg && netlify, 'Usage: node run-netlify.mjs WORK/apps.json RESULT.json NETLIFY_BIN');
const { apps } = JSON.parse(readFileSync(resolve(appsArg), 'utf8'));
const resultFile = resolve(resultArg);
const image = 'public.ecr.aws/lambda/nodejs:24';
const env = { ...process.env, NETLIFY_TELEMETRY_DISABLED: '1', BROWSER: 'none', NETLIFY_AUTH_TOKEN: '' };
const result = { platform: `${process.platform}-${process.arch}`, netlify: spawnSync(netlify, ['--version'], { encoding: 'utf8', env }).stdout.trim(),
  image, startedAt: new Date().toISOString(), runs: [] };
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
const freePort = () => new Promise(done => { const s = net.createServer().listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => done(port)); }); });
const must = argv => { const r = spawnSync('docker', argv, { encoding: 'utf8' }); assert.equal(r.status, 0, r.stderr); return r.stdout.trim(); };
let failed = false;

/** Invokes Netlify's bundled v2 bootstrap the way its handler reads requests. */
async function invokeBootstrap(port, { method = 'GET', path = '/', body } = {}) {
  const event = { httpMethod: method, rawUrl: `https://lasm-ci.netlify.app${path}`, route: '/*',
    headers: { host: 'lasm-ci.netlify.app', ...(body ? { 'content-type': 'application/json' } : {}) },
    body: body ? Buffer.from(body).toString('base64') : '', isBase64Encoded: Boolean(body) };
  const response = await fetch(`http://127.0.0.1:${port}/2015-03-31/functions/function/invocations`, { method: 'POST', body: JSON.stringify(event) });
  const bytes = Buffer.from(await response.arrayBuffer());
  // A streamed reply: JSON metadata, eight NUL bytes, then the body.
  const split = bytes.indexOf(Buffer.alloc(8));
  assert.ok(split > 0, 'not a streamed reply: ' + bytes.toString().slice(0, 1000));
  const meta = JSON.parse(bytes.subarray(0, split).toString());
  return { status: meta.statusCode, body: bytes.subarray(split + 8).toString() };
}

for (const app of apps.filter(app => app.packages.netlify)) {
  const run = { app: app.name, checks: [] };
  result.runs.push(run); save();
  const check = async (name, action) => {
    try { await action(); run.checks.push({ name, ok: true }); }
    catch (error) { run.checks.push({ name, ok: false, error: error.message.slice(0, 2000) }); }
  };
  const fn = app.packages.netlify.path;
  await check('lasm package output: a v2 function serving every path', () => {
    const source = readFileSync(join(fn, 'lasm.mjs'), 'utf8');
    assert.match(source, /export const config = \{ path: '\/\*', preferStatic: true \}/);
    for (const file of ['lasm-server.mjs', 'main.mjs', 'program.wasm', 'host/node-host.mjs']) assert.ok(existsSync(join(fn, file)), file);
  });
  const zip = join(app.project, '.netlify/functions/lasm.zip');
  await check('netlify build --offline bundles the function with included_files', () => {
    const started = performance.now();
    const build = spawnSync(netlify, ['build', '--offline'], { cwd: app.project, env, encoding: 'utf8', timeout: 1800_000, maxBuffer: 64 * 1024 * 1024 });
    run.netlifyBuildSeconds = Math.round((performance.now() - started) / 100) / 10;
    assert.equal(build.status, 0, (build.stdout + build.stderr).slice(-4000));
    const manifest = JSON.parse(readFileSync(join(app.project, '.netlify/functions/manifest.json'), 'utf8')).functions.find(f => f.name === 'lasm');
    run.manifest = { runtimeVersion: manifest.runtimeVersion, bundler: manifest.bundler, invocationMode: manifest.invocationMode, routes: manifest.routes };
    assert.equal(manifest.runtimeVersion, 'nodejs24.x');
    assert.equal(manifest.routes[0].pattern, '/*');
    const listing = execFileSync('zipinfo', [zip], { encoding: 'utf8', maxBuffer: 64 * 1024 * 1024 });
    for (const file of ['program.wasm', 'program.cjs', 'main.mjs', 'lasm-server.mjs', 'host/node-host.mjs', 'host/native/manifest.json',
      'host/native/node_modules/@koromix/koffi-linux-x64/linux_x64/koffi.node', 'host/native/process/linux-x64-gnu'])
      assert.match(listing, new RegExp(` ${file.replace(/[.*+?^${}()|[\]\\/]/g, '\\$&')}$`, 'm'), `${file} is in the deploy zip`);
    assert.match(listing, /^-rwxr-xr-x .* host\/native\/process\/linux-x64-gnu$/m, 'the helper stays executable');
    const total = /(\d+) files, (\d+) bytes uncompressed, (\d+) bytes compressed/.exec(listing);
    run.zipBytes = Number(total[3]); run.unzippedBytes = Number(total[2]);
    assert.ok(run.zipBytes < 50 * 1024 * 1024 && run.unzippedBytes < 250 * 1024 * 1024, 'within 50 MB zipped and 250 MB unzipped');
  });
  await check('netlify dev --offline serves every path through the function', async () => {
    const port = await freePort();
    const dev = spawn(netlify, ['dev', '--offline', '--port', String(port), '--no-open'], { cwd: app.project, env, stdio: ['ignore', 'pipe', 'pipe'] });
    let log = ''; dev.stdout.on('data', d => { log += d; }); dev.stderr.on('data', d => { log += d; });
    try {
      const base = `http://127.0.0.1:${port}`;
      run.netlifyDevReadyMs = await waitFor(base + '/health', { alive: () => dev.exitCode === null, timeoutMs: 180_000 });
      const checks = await checkContract(base, app.framework);
      const bad = checks.filter(c => !c.ok);
      assert.equal(bad.length, 0, bad.map(c => `${c.name}: ${c.error}`).join('; ') + '\n' + log.slice(-1500));
    } finally { dev.kill('SIGTERM'); await new Promise(done => setTimeout(done, 2000)); dev.kill('SIGKILL'); }
  });
  await check(`the deploy zip in ${image} with Netlify's bootstrap`, async () => {
    const task = mkdtempSync(join(tmpdir(), 'lasm-netlify-task-'));
    execFileSync('unzip', ['-q', zip, '-d', task]);
    chmodSync(task, 0o755);
    run.coldStarts = [];
    for (let i = 0; i < 3; i++) {
      const started = performance.now();
      const id = must(['run', '-d', '--read-only', '--tmpfs', '/tmp', '--memory=512m', '--memory-swap=512m', '-p', '127.0.0.1::8080',
        '-e', 'AWS_LAMBDA_FUNCTION_MEMORY_SIZE=1024', '-v', `${task}:/var/task:ro`, image, '___netlify-entry-point.handler']);
      try {
        const port = must(['port', id, '8080/tcp']).split('\n')[0].split(':').pop();
        let first;
        for (let j = 0; j < 400 && !first; j++) first = await invokeBootstrap(port, { path: '/health' }).catch(() => new Promise(done => setTimeout(done, 25)));
        assert.ok(first, 'no answer');
        const logs = spawnSync('docker', ['logs', id], { encoding: 'utf8' });
        const init = /INIT REPORT\(durationMs: ([\d.]+)\)/.exec(logs.stdout + logs.stderr);
        run.coldStarts.push({ initMs: init ? Math.round(Number(init[1])) : undefined, firstResponseMs: Math.round(performance.now() - started) });
        if (i > 0) continue;
        assert.deepEqual([first.status, JSON.parse(first.body)], [200, { ok: true }]);
        const hello = await invokeBootstrap(port, { path: '/hello/Ada?x=1' });
        assert.deepEqual([hello.status, JSON.parse(hello.body)], [200, { message: 'Hello, Ada, from Lean!' }]);
        const echo = await invokeBootstrap(port, { method: 'POST', path: '/echo', body: '{"s":"λ"}' });
        assert.deepEqual([echo.status, JSON.parse(echo.body)], [200, { echo: { s: 'λ' } }]);
        assert.equal((await invokeBootstrap(port, { path: '/missing' })).status, 404);
      } finally { spawnSync('docker', ['rm', '-f', id]); }
    }
    // Netlify stops synchronous functions after 60 s; a cold start is far below it.
    assert.ok(run.coldStarts.every(c => c.firstResponseMs < 10_000), 'cold start under 10 s');
  });
  run.ok = run.checks.every(check => check.ok);
  failed ||= !run.ok;
  console.log(`${run.ok ? 'ok  ' : 'FAIL'} Netlify ${app.name}: zip ${((run.zipBytes ?? 0) / 1048576).toFixed(1)} MB; cold starts ${run.coldStarts?.map(c => `${c.initMs}/${c.firstResponseMs}`).join(' ')} ms; `
    + `${run.checks.filter(c => !c.ok).map(c => c.name + ': ' + c.error).join('; ') || run.checks.length + ' checks passed'}`);
  save();
}
result.finishedAt = new Date().toISOString(); result.ok = !failed; save();
process.exit(failed ? 1 : 0);
