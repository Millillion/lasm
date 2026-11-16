// One real compiled Lean program on a function platform's local runner, on
// every pull request that touches the function-platform files: the fetch
// template's Export.lean (`exportDefault Handler.handle`), built with
// `lasm build Export.lean --target lambda` by an installed candidate, its
// lambda.zip extracted read-only into AWS's Lambda Node 24 image and invoked
// through the image's Runtime Interface Emulator. The init phase must publish
// the handler, and requests must answer 200 with the template's bodies.
// The stand-in program of the other jobs (scripts/serverless/stand-in-app.mjs)
// is JavaScript; this is what caught the function host taking Emscripten's
// start-up exit code for the program's end (0.9.0).
//   node lean-function-check.mjs LASM_BIN WORK_DIR RESULT.json
import assert from 'node:assert/strict';
import { execFileSync, spawnSync } from 'node:child_process';
import { chmodSync, existsSync, mkdirSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { makeEvent, readReply } from './lambda-events.mjs';

const [lasmArg, workArg, resultArg] = process.argv.slice(2);
assert.ok(lasmArg && workArg && resultArg, 'Usage: node lean-function-check.mjs LASM_BIN WORK_DIR RESULT.json');
const lasm = resolve(lasmArg), work = resolve(workArg), resultFile = resolve(resultArg);
const image = 'public.ecr.aws/lambda/nodejs:24';
const result = { image, checks: [] };
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
const docker = argv => spawnSync('docker', argv, { encoding: 'utf8', timeout: 600_000 });

mkdirSync(work, { recursive: true });
const app = join(work, 'app');
const env = { ...process.env, CI: '1', LASM_EDITOR: '0' };
if (!existsSync(app)) execFileSync(process.execPath, [lasm, 'init', app, '--template', 'fetch', '--deploy', 'lambda'], { env, stdio: 'inherit' });
const started = performance.now();
execFileSync(process.execPath, [lasm, 'build', 'Export.lean', '--target', 'lambda'], { cwd: app, env, stdio: 'inherit', timeout: 3600_000 });
result.buildSeconds = Math.round((performance.now() - started) / 100) / 10;
const task = join(work, 'task');
mkdirSync(task, { recursive: true });
execFileSync('unzip', ['-q', '-o', join(app, 'lambda.zip'), '-d', task]);
chmodSync(task, 0o755);

const run = docker(['run', '-d', '--read-only', '--tmpfs', '/tmp', '--memory=512m', '-p', '127.0.0.1::8080',
  '-e', 'AWS_LAMBDA_FUNCTION_MEMORY_SIZE=512', '-v', `${task}:/var/task:ro`, image, 'lasm-lambda.handler']);
assert.equal(run.status, 0, run.stderr);
const id = run.stdout.trim();
try {
  const port = docker(['port', id, '8080/tcp']).stdout.split('\n')[0].split(':').pop();
  const invoke = async (request, kind = 'apigw-v2-http') => {
    const response = await fetch(`http://127.0.0.1:${port}/2015-03-31/functions/function/invocations`,
      { method: 'POST', body: JSON.stringify(makeEvent(kind, request)), signal: AbortSignal.timeout(60_000) });
    const reply = JSON.parse(await response.text());
    if (reply?.errorType || reply?.errorMessage) throw new Error(`function error: ${JSON.stringify(reply).slice(0, 2000)}`);
    return readReply(kind, reply);
  };
  const check = async (name, request, status, body) => {
    try {
      const reply = await invoke(request);
      assert.equal(reply.status, status, `${name}: ${reply.status} ${reply.body}`);
      if (body !== undefined) assert.deepEqual(JSON.parse(reply.body.toString()), body, name);
      result.checks.push({ name, ok: true });
    } catch (error) { result.checks.push({ name, ok: false, error: error.message.slice(0, 3000) }); }
  };
  // The first invocation runs the init phase: Lean starts and main publishes the handler.
  const first = performance.now();
  let ready;
  for (let i = 0; i < 120 && !ready; i++) {
    try { ready = await invoke({ path: '/health' }); } catch (error) {
      if (/function error/.test(error.message)) { result.checks.push({ name: 'init publishes the handler', ok: false, error: error.message }); break; }
      await new Promise(done => setTimeout(done, 500));
    }
  }
  result.firstResponseMs = Math.round(performance.now() - first);
  if (ready) {
    result.checks.push({ name: 'init publishes the handler', ok: ready.status === 200, status: ready.status });
    await check('GET /', { path: '/' }, 200, { message: 'Hello from Lean!' });
    await check('GET /hello/Ada', { path: '/hello/Ada' }, 200, { message: 'Hello, Ada, from Lean!' });
    await check('POST /echo', { method: 'POST', path: '/echo', headers: { 'content-type': 'application/json' }, body: '{"n":1}' }, 200, { n: 1 });
    await check('GET /missing is 404', { path: '/missing' }, 404);
  }
} finally {
  result.logTail = (docker(['logs', id]).stdout + docker(['logs', id]).stderr).slice(-3000);
  docker(['rm', '-f', id]);
  result.ok = result.checks.length > 1 && result.checks.every(c => c.ok);
  save();
}
console.log(JSON.stringify({ ok: result.ok, buildSeconds: result.buildSeconds, firstResponseMs: result.firstResponseMs, checks: result.checks }, null, 2));
if (!result.ok) { console.log(result.logTail); process.exit(1); }
