// Builds the documented AWS Lambda container recipe (deploy/lambda/Dockerfile:
// Lambda's managed Node 24 image plus the AWS Lambda Web Adapter) around the
// Express and Hono interop examples, runs each image with the Runtime Interface
// Emulator built into the image (read-only, /tmp writable, 512 MB), and invokes
// it with API Gateway HTTP API (payload 2.0) events. No AWS account is used.
//   node run-lambda.mjs APPS_DIR RESULT.json
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { randomUUID } from 'node:crypto';
import { cpSync, mkdtempSync, readFileSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const [appsArg, resultArg] = process.argv.slice(2);
assert.ok(appsArg && resultArg, 'Usage: node run-lambda.mjs APPS_DIR RESULT.json');
const apps = resolve(appsArg), resultFile = resolve(resultArg);
const config = JSON.parse(readFileSync(join(root, 'scripts/platform/images.json'), 'utf8')).lambda;
const result = { platform: `${process.platform}-${process.arch}`, recipe: 'deploy/lambda/Dockerfile', ...config, startedAt: new Date().toISOString(), runs: [] };
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
const docker = args => {
  const run = spawnSync('docker', args, { encoding: 'utf8', timeout: 900_000, maxBuffer: 64 * 1024 * 1024 });
  if (run.error) throw run.error;
  return run;
};
const must = args => {
  const run = docker(args);
  assert.equal(run.status, 0, `docker ${args.join(' ')}: ${run.stderr}`);
  return run.stdout.trim();
};
const network = 'lasm-lambda-' + randomUUID().slice(0, 8), postgres = network + '-pg';
let failed = false;
try {
  for (const image of [config.image, config.adapter]) must(['pull', '-q', image]);
  result.imageDigest = must(['image', 'inspect', '--format', '{{index .RepoDigests 0}}', config.image]);
  result.adapterDigest = must(['image', 'inspect', '--format', '{{index .RepoDigests 0}}', config.adapter]);
  must(['network', 'create', network]);
  must(['run', '-d', '--name', postgres, '--network', network, '-e', 'POSTGRES_PASSWORD=postgres', 'postgres:17']);
  for (let i = 0; docker(['exec', postgres, 'pg_isready', '-U', 'postgres']).status !== 0; i++) {
    assert.ok(i < 120, 'Postgres did not become ready');
    await new Promise(done => setTimeout(done, 1000));
  }
  for (const app of ['express', 'hono']) {
    const run = { app };
    result.runs.push(run); save();
    let id;
    try {
      const context = mkdtempSync(join(tmpdir(), 'lasm-lambda-'));
      cpSync(join(apps, app), join(context, 'dist'), { recursive: true });
      const tag = `${network}-${app}`;
      must(['build', '-q', '--build-arg', `LAMBDA_IMAGE=${config.image}`, '--build-arg', `ADAPTER_IMAGE=${config.adapter}`,
        '-f', join(root, 'deploy/lambda/Dockerfile'), '-t', tag, context]);
      id = must(['run', '-d', '--network', network, '--read-only', '--tmpfs', '/tmp', '--memory=512m', '--memory-swap=512m',
        '-p', '127.0.0.1::8080', '-e', `DATABASE_URL=postgres://postgres:postgres@${postgres}:5432/postgres`,
        '-e', 'AWS_LAMBDA_FUNCTION_MEMORY_SIZE=512', tag]);
      const port = must(['port', id, '8080/tcp']).split('\n')[0].split(':').pop();
      const invoke = async (method, path, { body, token } = {}) => {
        const event = { version: '2.0', routeKey: '$default', rawPath: path, rawQueryString: '',
          headers: { host: 'lambda.test', ...(body ? { 'content-type': 'application/json' } : {}), ...(token ? { authorization: `Bearer ${token}` } : {}) },
          requestContext: { accountId: '000000000000', apiId: 'local', domainName: 'lambda.test', requestId: randomUUID(), routeKey: '$default', stage: '$default',
            http: { method, path, protocol: 'HTTP/1.1', sourceIp: '127.0.0.1', userAgent: 'lasm-platform-ci' }, timeEpoch: Date.now() },
          body: body === undefined ? undefined : JSON.stringify(body), isBase64Encoded: false };
        let response;
        for (let i = 0; i < 60 && !response; i++) {
          response = await fetch(`http://127.0.0.1:${port}/2015-03-31/functions/function/invocations`, { method: 'POST', body: JSON.stringify(event) })
            .catch(() => undefined);
          if (!response) await new Promise(done => setTimeout(done, 500));
        }
        assert.ok(response?.ok, `invocation of ${method} ${path} failed: ${response?.status}`);
        const reply = await response.json();
        let json; try { json = JSON.parse(reply.isBase64Encoded ? Buffer.from(reply.body, 'base64').toString() : reply.body); } catch { json = reply.body; }
        return { status: reply.statusCode, json };
      };
      const checks = run.checks = [];
      const check = async (name, action) => {
        try { await action(); checks.push({ name, ok: true }); } catch (error) { checks.push({ name, ok: false, error: error.message }); }
      };
      const started = performance.now();
      await check('health (cold start)', async () => assert.deepEqual(await invoke('GET', '/health'), { status: 200, json: { ok: true } }));
      run.firstInvocationMs = Math.round(performance.now() - started);
      let token;
      await check('todos without a token are 401', async () => assert.equal((await invoke('GET', '/todos')).status, 401));
      await check('login issues a JWT', async () => {
        const r = await invoke('POST', '/login', { body: { user: 'lambda-' + randomUUID() } });
        assert.equal(r.status, 200); token = r.json.token; assert.match(token, /^[\w-]+\.[\w-]+\.[\w-]+$/);
      });
      await check('create a todo (201)', async () => assert.equal((await invoke('POST', '/todos', { token, body: { title: 'run on Lambda' } })).status, 201));
      await check('list todos', async () => {
        const r = await invoke('GET', '/todos', { token });
        assert.equal(r.status, 200); assert.deepEqual(r.json.map(todo => todo.title), ['run on Lambda']);
      });
      await check('unknown route is 404', async () => assert.equal((await invoke('GET', '/nope')).status, 404));
      run.ok = checks.every(item => item.ok);
    } catch (error) { run.ok = false; run.error = error.message; }
    finally {
      if (id) {
        const logs = docker(['logs', id]);
        run.logs = (logs.stdout + logs.stderr).slice(-3000);
        run.adapterRegistered = /lambda-adapter .* registered/.test(run.logs);
        if (!run.adapterRegistered) run.ok = false;
        docker(['rm', '-f', id]);
      }
    }
    failed ||= !run.ok;
    console.log(`${run.ok ? 'ok  ' : 'FAIL'} Lambda ${app}: ${run.checks?.filter(c => !c.ok).map(c => c.name + ': ' + c.error).join('; ') || run.error || 'all checks passed'}`);
    save();
  }
} finally {
  docker(['rm', '-f', postgres]); docker(['network', 'rm', network]);
  result.finishedAt = new Date().toISOString(); result.ok = !failed; save();
}
process.exit(failed ? 1 : 0);
