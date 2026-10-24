// Runs `lasm package --target lambda` and `--target lambda-edge` zips in AWS's
// own Lambda Node 24 image (public.ecr.aws/lambda/nodejs:24) through its
// Runtime Interface Emulator: the zip is extracted with Info-ZIP unzip (keeping
// its permissions) and mounted read-only at /var/task, with /tmp writable and
// 512 MB of memory, exactly as a zip function's code. Each server template is
// invoked with the documented API Gateway REST and HTTP API, function URL, ALB
// (single- and multi-value) and CloudFront origin-request events.
// Measures cold starts (the emulator's INIT REPORT and the time from container
// start to the first response, three fresh containers per app) and warm
// invocations. With --compare-lwa it measures the alternative: the zip
// layout of the AWS Lambda Web Adapter layer (adapter extension plus
// /opt/bootstrap and a run.sh handler). No AWS account is used.
//   node run-lambda.mjs WORK/apps.json RESULT.json [--compare-lwa ADAPTER_IMAGE] [--cold-starts N]
import assert from 'node:assert/strict';
import { execFileSync, spawnSync } from 'node:child_process';
import { chmodSync, cpSync, mkdirSync, mkdtempSync, readFileSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { eventKinds, makeEvent, readReply } from './lambda-events.mjs';

const args = process.argv.slice(2);
const flag = name => { const i = args.indexOf(name); if (i < 0) return undefined; const [, value] = args.splice(i, 2); return value; };
const lwaImage = flag('--compare-lwa');
const coldStarts = Number(flag('--cold-starts') ?? 3);
const image = flag('--image') ?? 'public.ecr.aws/lambda/nodejs:24';
const [appsArg, resultArg] = args;
assert.ok(appsArg && resultArg, 'Usage: node run-lambda.mjs WORK/apps.json RESULT.json [--compare-lwa IMAGE]');
const { apps } = JSON.parse(readFileSync(resolve(appsArg), 'utf8'));
const resultFile = resolve(resultArg);
const result = { platform: `${process.platform}-${process.arch}`, image, startedAt: new Date().toISOString(), runs: [] };
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
const docker = (argv, options = {}) => spawnSync('docker', argv, { encoding: 'utf8', timeout: 900_000, maxBuffer: 64 * 1024 * 1024, ...options });
const must = argv => { const r = docker(argv); assert.equal(r.status, 0, `docker ${argv.join(' ')}: ${r.stderr}`); return r.stdout.trim(); };

async function pull(name) {
  if (docker(['image', 'inspect', name]).status === 0) return;
  for (let attempt = 1; ; attempt++) {
    const r = docker(['pull', '-q', name]);
    if (r.status === 0) return;
    assert.ok(attempt < 6 && /toomanyrequests|rate|timeout|TLS|connection/i.test(r.stderr), `docker pull ${name}: ${r.stderr}`);
    await new Promise(done => setTimeout(done, 30_000 * attempt));
  }
}

function extract(zipFile) {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-task-'));
  execFileSync('unzip', ['-q', zipFile, '-d', directory]);
  // The emulator runs as the image's user; Lambda runs code as another user too.
  chmodSync(directory, 0o755);
  return directory;
}

/** Starts the function; returns { id, invoke, logs, firstMs } after the first answered invocation. */
async function start(task, { opt, env = {}, handler = 'lasm-lambda.handler', first }) {
  const mounts = ['-v', `${task}:/var/task:ro`, ...(opt ? ['-v', `${opt}:/opt:ro`] : [])];
  const started = performance.now();
  const id = must(['run', '-d', '--read-only', '--tmpfs', '/tmp', '--memory=512m', '--memory-swap=512m', '-p', '127.0.0.1::8080',
    '-e', 'AWS_LAMBDA_FUNCTION_MEMORY_SIZE=512', ...Object.entries(env).flatMap(([k, v]) => ['-e', `${k}=${v}`]), ...mounts, image, handler]);
  const port = must(['port', id, '8080/tcp']).split('\n')[0].split(':').pop();
  const invoke = async event => {
    const response = await fetch(`http://127.0.0.1:${port}/2015-03-31/functions/function/invocations`, { method: 'POST', body: JSON.stringify(event) });
    const text = await response.text();
    let reply; try { reply = JSON.parse(text); } catch { reply = text; }
    if (reply?.errorType || reply?.errorMessage) throw new Error(`function error: ${text.slice(0, 2000)}`);
    return reply;
  };
  let reply, lastError;
  for (let i = 0; i < 400 && !reply; i++) {
    try { reply = await invoke(first); } catch (error) { lastError = error; if (/function error/.test(error.message)) break; await new Promise(done => setTimeout(done, 25)); }
  }
  const firstMs = Math.round(performance.now() - started);
  const logs = () => { const r = docker(['logs', id]); return r.stdout + r.stderr; };
  if (!reply) { const text = logs(); docker(['rm', '-f', id]); throw new Error(`no answer: ${lastError?.message}\n${text.slice(-3000)}`); }
  const init = /INIT REPORT\(durationMs: ([\d.]+)\)/.exec(logs());
  return { id, invoke, logs, firstMs, initMs: init ? Math.round(Number(init[1])) : undefined, first: reply };
}

/** The HTTP contract of every server template, through one event kind. */
async function contract(fn, kind, framework) {
  const checks = [];
  const call = async request => readReply(kind, await fn.invoke(makeEvent(kind, request)));
  const check = async (name, request, status, expected) => {
    try {
      const reply = await call(request);
      assert.equal(reply.status, status, `${name}: ${reply.status} ${reply.body}`);
      if (expected !== undefined) assert.deepEqual(JSON.parse(reply.body.toString()), expected, name);
      checks.push({ kind, name, ok: true });
    } catch (error) { checks.push({ kind, name, ok: false, error: error.message.slice(0, 1000) }); }
  };
  await check('GET /', { path: '/' }, 200, { message: `Hello from Lean on ${framework}!` });
  await check('GET /hello/Ada?x=1', { path: '/hello/Ada', query: [['x', '1']] }, 200, { message: 'Hello, Ada, from Lean!' });
  await check('POST /echo (JSON body)', { method: 'POST', path: '/echo', headers: { 'content-type': 'application/json' }, body: '{"n":[1,2],"s":"λ"}' },
    200, { echo: { n: [1, 2], s: 'λ' } });
  await check('GET /health', { path: '/health' }, 200, { ok: true });
  await check('GET /missing is 404', { path: '/missing' }, 404);
  return checks;
}

const median = values => { const sorted = [...values].sort((a, b) => a - b); return sorted[Math.floor(sorted.length / 2)]; };
const health = makeEvent('apigw-v2-http', { path: '/health' });
let failed = false;
try {
  await pull(image);
  result.imageDigest = must(['image', 'inspect', '--format', '{{.Id}} {{json .RepoDigests}}', image]);
  for (const app of apps.filter(app => app.packages.lambda || app.packages['lambda-edge'])) {
    for (const target of ['lambda', 'lambda-edge']) {
      const zipFile = app.packages[target]?.path;
      if (!zipFile) continue;
      const run = { app: app.name, framework: app.framework, target, zipBytes: app.packages[target].bytes };
      result.runs.push(run); save();
      const task = extract(zipFile);
      run.helperModes = execFileSync('stat', ['-c', '%a %n', ...['main.mjs', 'host/native/process/linux-x64-gnu', 'host/native/process/linux-arm64-gnu'].map(f => join(task, f))], { encoding: 'utf8' })
        .trim().split('\n').map(line => line.replace(task + '/', ''));
      run.unzippedBytes = Number(execFileSync('du', ['-sb', task], { encoding: 'utf8' }).split('\t')[0]);
      run.withinLimits = run.zipBytes <= 50 * 1024 * 1024 && run.unzippedBytes <= 250 * 1024 * 1024;
      run.checks = []; run.coldStarts = [];
      try {
        const kinds = target === 'lambda-edge' ? ['cloudfront-origin-request'] : eventKinds;
        for (let i = 0; i < coldStarts; i++) {
          const fn = await start(task, { first: health });
          run.coldStarts.push({ initMs: fn.initMs, firstResponseMs: fn.firstMs });
          if (i === 0) {
            for (const kind of kinds) run.checks.push(...await contract(fn, kind, app.framework));
            const warm = [];
            for (let j = 0; j < 30; j++) { const t = performance.now(); await fn.invoke(health); warm.push(performance.now() - t); }
            run.warmMedianMs = Math.round(median(warm) * 10) / 10;
            const stats = docker(['stats', '--no-stream', '--format', '{{.MemUsage}}', fn.id]);
            run.memoryUsage = stats.stdout.trim();
            run.logTail = fn.logs().slice(-1500);
          }
          docker(['rm', '-f', fn.id]);
        }
        run.ok = run.withinLimits && run.helperModes.every(line => line.startsWith('755')) && run.checks.every(check => check.ok);
      } catch (error) { run.ok = false; run.error = error.message.slice(0, 4000); }
      failed ||= !run.ok;
      console.log(`${run.ok ? 'ok  ' : 'FAIL'} ${target} ${app.name}: zip ${(run.zipBytes / 1048576).toFixed(1)} MB, unzipped ${(run.unzippedBytes / 1048576).toFixed(1)} MB; `
        + `init ${run.coldStarts.map(c => c.initMs).join('/')} ms, first response ${run.coldStarts.map(c => c.firstResponseMs).join('/')} ms, warm ${run.warmMedianMs} ms; `
        + `${run.checks.filter(c => !c.ok).map(c => `${c.kind} ${c.name}: ${c.error}`).join('; ') || run.error || `${run.checks.length} checks passed`}`);
      save();
    }
  }
  // The alternative design: the AWS Lambda Web Adapter as a layer.
  if (lwaImage) {
    const app = apps.find(app => app.template === 'hono' && app.packages.lambda) ?? apps.find(app => app.packages.lambda);
    const run = { app: app.name, target: 'lambda-web-adapter-layer', adapterImage: lwaImage, coldStarts: [] };
    result.runs.push(run);
    try {
      await pull(lwaImage);
      const opt = mkdtempSync(join(tmpdir(), 'lasm-opt-')), task = mkdtempSync(join(tmpdir(), 'lasm-lwa-'));
      mkdirSync(join(opt, 'extensions'));
      const container = must(['create', lwaImage, 'x']);
      must(['cp', `${container}:/lambda-adapter`, join(opt, 'extensions/lambda-adapter')]);
      docker(['rm', container]);
      // The layer's wrapper: run the handler file instead of a Node handler.
      writeFileSync(join(opt, 'bootstrap'), '#!/bin/bash\nexec -- "${LAMBDA_TASK_ROOT}/${_HANDLER}"\n', { mode: 0o755 });
      cpSync(app.dist, task, { recursive: true });
      writeFileSync(join(task, 'run.sh'), '#!/bin/sh\nexec node "$LAMBDA_TASK_ROOT/main.mjs"\n', { mode: 0o755 });
      chmodSync(opt, 0o755); chmodSync(task, 0o755);
      const env = { AWS_LAMBDA_EXEC_WRAPPER: '/opt/bootstrap', PORT: '3000', AWS_LWA_PORT: '3000', AWS_LWA_READINESS_CHECK_PATH: '/health' };
      for (let i = 0; i < coldStarts; i++) {
        const fn = await start(task, { opt, env, handler: 'run.sh', first: health });
        run.coldStarts.push({ initMs: fn.initMs, firstResponseMs: fn.firstMs });
        if (i === 0) {
          run.checks = await contract(fn, 'apigw-v2-http', app.framework);
          const warm = [];
          for (let j = 0; j < 30; j++) { const t = performance.now(); await fn.invoke(health); warm.push(performance.now() - t); }
          run.warmMedianMs = Math.round(median(warm) * 10) / 10;
        }
        docker(['rm', '-f', fn.id]);
      }
      run.ok = run.checks.every(check => check.ok);
    } catch (error) { run.ok = false; run.error = error.message.slice(0, 4000); }
    console.log(`${run.ok ? 'ok  ' : 'info'} LWA layer layout ${app.name}: init ${run.coldStarts.map(c => c.initMs).join('/')} ms, first response ${run.coldStarts.map(c => c.firstResponseMs).join('/')} ms, warm ${run.warmMedianMs} ms (comparison only)`);
  }
} finally {
  result.finishedAt = new Date().toISOString(); result.ok = !failed; save();
}
process.exit(failed ? 1 : 0);
