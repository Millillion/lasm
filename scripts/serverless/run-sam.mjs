// AWS SAM CLI with no AWS credentials: each `lasm package --target lambda`
// zip as the CodeUri of an AWS::Serverless::Function (nodejs24.x, the runner's
// architecture), `sam local invoke` with API Gateway REST and HTTP API events,
// and `sam local start-api` answering real HTTP requests.
//   node run-sam.mjs WORK/apps.json RESULT.json SAM_BINARY
import assert from 'node:assert/strict';
import { spawn, spawnSync } from 'node:child_process';
import { copyFileSync, mkdirSync, mkdtempSync, readFileSync, writeFileSync } from 'node:fs';
import net from 'node:net';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { makeEvent } from './lambda-events.mjs';

const [appsArg, resultArg, sam] = process.argv.slice(2);
assert.ok(appsArg && resultArg && sam, 'Usage: node run-sam.mjs WORK/apps.json RESULT.json SAM_BINARY');
const { apps } = JSON.parse(readFileSync(resolve(appsArg), 'utf8'));
const resultFile = resolve(resultArg);
const home = mkdtempSync(join(tmpdir(), 'lasm-sam-home-'));
// No credentials of any kind: SAM local must not need them.
const env = { ...process.env, HOME: home, SAM_CLI_TELEMETRY: '0', AWS_SHARED_CREDENTIALS_FILE: join(home, 'none'), AWS_CONFIG_FILE: join(home, 'none'),
  AWS_REGION: 'us-east-1', AWS_ACCESS_KEY_ID: '', AWS_SECRET_ACCESS_KEY: '', AWS_SESSION_TOKEN: '' };
const result = { platform: `${process.platform}-${process.arch}`, sam: spawnSync(sam, ['--version'], { encoding: 'utf8', env }).stdout.trim(),
  startedAt: new Date().toISOString(), runs: [] };
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
const architecture = process.arch === 'arm64' ? 'arm64' : 'x86_64';
const freePort = () => new Promise(done => { const s = net.createServer().listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => done(port)); }); });
let failed = false;
for (const app of apps.filter(app => app.packages.lambda)) {
  const run = { app: app.name, checks: [] };
  result.runs.push(run);
  const directory = mkdtempSync(join(tmpdir(), 'lasm-sam-'));
  copyFileSync(app.packages.lambda.path, join(directory, 'lambda.zip'));
  writeFileSync(join(directory, 'template.yaml'), `AWSTemplateFormatVersion: '2010-09-09'
Transform: AWS::Serverless-2016-10-31
Resources:
  LeanFunction:
    Type: AWS::Serverless::Function
    Properties:
      CodeUri: lambda.zip
      Handler: lasm-lambda.handler
      Runtime: nodejs24.x
      Architectures: [${architecture}]
      MemorySize: 512
      Timeout: 10
      Events:
        HttpApi:
          Type: HttpApi
`);
  const check = async (name, action) => {
    try { await action(); run.checks.push({ name, ok: true }); }
    catch (error) { run.checks.push({ name, ok: false, error: error.message.slice(0, 2000) }); }
  };
  for (const kind of ['apigw-v2-http', 'apigw-v1-rest']) {
    await check(`sam local invoke (${kind}) GET /hello/Ada`, async () => {
      mkdirSync(join(directory, 'events'), { recursive: true });
      writeFileSync(join(directory, 'events', kind + '.json'), JSON.stringify(makeEvent(kind, { path: '/hello/Ada' })));
      const started = performance.now();
      const r = spawnSync(sam, ['local', 'invoke', 'LeanFunction', '-e', `events/${kind}.json`], { cwd: directory, env, encoding: 'utf8', timeout: 600_000 });
      run[`invokeMs_${kind}`] = Math.round(performance.now() - started);
      assert.equal(r.status, 0, r.stderr.slice(-3000));
      const reply = JSON.parse(r.stdout.trim().split('\n').at(-1));
      assert.equal(reply.statusCode, 200, r.stdout);
      assert.deepEqual(JSON.parse(reply.body), { message: 'Hello, Ada, from Lean!' });
    });
  }
  const port = await freePort();
  const api = spawn(sam, ['local', 'start-api', '--port', String(port)], { cwd: directory, env, stdio: ['ignore', 'pipe', 'pipe'] });
  let log = ''; api.stdout.on('data', d => { log += d; }); api.stderr.on('data', d => { log += d; });
  try {
    const base = `http://127.0.0.1:${port}`;
    await check('sam local start-api is up', async () => {
      for (let i = 0; ; i++) {
        if (await fetch(base + '/health').then(r => r.ok, () => false)) break;
        assert.ok(i < 300, 'start-api did not answer: ' + log.slice(-2000));
        await new Promise(done => setTimeout(done, 1000));
      }
    });
    await check('start-api GET /hello/Ada', async () => {
      assert.deepEqual(await (await fetch(base + '/hello/Ada')).json(), { message: 'Hello, Ada, from Lean!' });
    });
    await check('start-api POST /echo', async () => {
      const r = await fetch(base + '/echo', { method: 'POST', headers: { 'content-type': 'application/json' }, body: '{"s":"λ"}' });
      assert.deepEqual(await r.json(), { echo: { s: 'λ' } });
    });
    await check('start-api GET /missing is 404', async () => assert.equal((await fetch(base + '/missing')).status, 404));
  } finally { api.kill('SIGINT'); await new Promise(done => setTimeout(done, 3000)); api.kill('SIGKILL'); }
  run.logTail = log.slice(-1500);
  run.ok = run.checks.every(check => check.ok);
  failed ||= !run.ok;
  console.log(`${run.ok ? 'ok  ' : 'FAIL'} SAM ${app.name}: ${run.checks.filter(c => !c.ok).map(c => c.name + ': ' + c.error).join('; ') || run.checks.length + ' checks passed'}`);
  save();
}
result.finishedAt = new Date().toISOString(); result.ok = !failed; save();
// SAM leaves its emulation containers to its own clean-up; remove any left.
const left = spawnSync('docker', ['ps', '-aq', '--filter', 'label=sam.cli.container.type'], { encoding: 'utf8' }).stdout.trim();
if (left) spawnSync('docker', ['rm', '-f', ...left.split('\n')]);
process.exit(failed ? 1 : 0);
