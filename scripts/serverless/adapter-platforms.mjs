// The function-platform shims (src/serverless/) on each platform's own local
// runtime, with the stand-in application (scripts/serverless/stand-in-app.mjs:
// a published fetch handler in place of a Lean build, so no toolchain and no build):
// what a sign-in sends and a browser sends back must survive every adapter.
//   - several Set-Cookie headers in one reply, each arriving whole (#80);
//   - two Cookie header lines in one request reaching the handler's web
//     Request as one Cookie field joined with "; " (RFC 6265 §5.4, #80);
//   - a 303 with only a Location and no body (#82).
// Platforms (CI only: platform CLIs never run on a developer's machine):
//   lambda   AWS SAM `sam local start-api`: an HTTP API (payload 2.0) on /v2/…
//            and a REST API (payload 1.0) on /v1/…, nodejs24.x
//   vercel   `lasm package --target vercel` output under Vercel's own Node
//            launcher (@vercel/node's dev server) in AWS Lambda's Node 24 image
//   netlify  the zip `netlify build --offline` bundles, with Netlify's bootstrap
//            (___netlify-entry-point.handler) in AWS Lambda's Node 24 image
//   azure    Azure Functions Core Tools `func start`
//   gcf      the Google Cloud Functions Framework
//   node adapter-platforms.mjs PLATFORM WORK_DIR RESULT.json
//     tools on PATH: sam | docker, VERCEL_NODE_MODULES (the vercel CLI's node_modules) | netlify, docker | func
import assert from 'node:assert/strict';
import { execFileSync, spawn, spawnSync } from 'node:child_process';
import { chmodSync, existsSync, mkdirSync, mkdtempSync, realpathSync, rmSync, writeFileSync } from 'node:fs';
import http from 'node:http';
import net from 'node:net';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { packageApplication } from '../../src/package.mjs';
import { sessionCookies, standInApplication } from './stand-in-app.mjs';

const [platform, workArg, resultArg] = process.argv.slice(2);
const platforms = ['lambda', 'vercel', 'netlify', 'azure', 'gcf'];
assert.ok(platforms.includes(platform) && workArg && resultArg, `Usage: node adapter-platforms.mjs ${platforms.join('|')} WORK_DIR RESULT.json`);
const work = resolve(workArg), resultFile = resolve(resultArg);
assert.ok(!existsSync(work), 'Use a new work directory');
mkdirSync(work, { recursive: true });
const env = { ...process.env, CI: '1', BROWSER: 'none', DO_NOT_TRACK: '1', SAM_CLI_TELEMETRY: '0', NETLIFY_TELEMETRY_DISABLED: '1',
  NETLIFY_AUTH_TOKEN: '', VERCEL_TELEMETRY_DISABLED: '1', FUNCTIONS_CORE_TOOLS_TELEMETRY_OPTOUT: '1' };
const image = 'public.ecr.aws/lambda/nodejs:24';
const result = { platform, host: `${process.platform}-${process.arch}`, startedAt: new Date().toISOString(), runs: [] };
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
const freePort = () => new Promise(done => { const s = net.createServer().listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => done(port)); }); });
const run = (command, args, options = {}) => {
  const r = spawnSync(command, args, { env, encoding: 'utf8', timeout: 1800_000, maxBuffer: 64 * 1024 * 1024, ...options });
  assert.equal(r.status, 0, `${command} ${args.join(' ')} failed:\n${(r.stdout ?? '').slice(-3000)}\n${(r.stderr ?? '').slice(-3000)}`);
  return r.stdout;
};

// ---------- the checks, over plain HTTP (raw header lines both ways) ----------
function request(base, path, headers = []) {
  return new Promise((done, fail) => {
    const url = new URL(base + path);
    const req = http.request({ host: url.hostname, port: url.port, path: url.pathname + url.search, agent: false, timeout: 60_000,
      headers: ['host', url.host, 'connection', 'close', ...headers] }, res => {
      const chunks = [];
      res.on('data', c => chunks.push(c));
      res.on('end', () => {
        const raw = [];
        for (let i = 0; i < res.rawHeaders.length; i += 2) raw.push([res.rawHeaders[i].toLowerCase(), res.rawHeaders[i + 1]]);
        done({ status: res.statusCode, raw, body: Buffer.concat(chunks).toString() });
      });
      res.on('error', fail);
    });
    req.on('timeout', () => req.destroy(new Error('timeout')));
    req.on('error', fail);
    req.end();
  });
}
/** name, value and the attributes (lowercase, SameSite's value too) of a Set-Cookie value. */
function cookieParts(header) {
  const [pair, ...attributes] = header.split(';');
  const at = pair.indexOf('=');
  return { name: pair.slice(0, at).trim(), value: pair.slice(at + 1).trim(),
    attributes: attributes.map(a => a.trim().toLowerCase().replace(/\s*=\s*/, '=')).filter(Boolean) };
}

async function checkAll(base, label) {
  const entry = { label, base, checks: [] };
  result.runs.push(entry); save();
  const check = async (name, action) => {
    try { entry.checks.push({ name, ok: true, observed: await action() }); }
    catch (error) { entry.checks.push({ name, ok: false, error: error.message.slice(0, 3000) }); }
  };
  await check('several Set-Cookie headers in one reply (a sign-in) each arrive whole', async () => {
    const r = await request(base, '/session');
    const setCookies = r.raw.filter(([name]) => name === 'set-cookie').map(([, value]) => value);
    const observed = { status: r.status, location: r.raw.find(([name]) => name === 'location')?.[1], setCookies };
    assert.equal(r.status, 303, JSON.stringify(observed));
    assert.equal(setCookies.length, sessionCookies.length, 'Set-Cookie headers: ' + JSON.stringify(observed));
    for (const expected of sessionCookies.map(cookieParts)) {
      const got = setCookies.map(cookieParts).find(c => c.name === expected.name);
      assert.ok(got, `no Set-Cookie for ${expected.name}: ${JSON.stringify(setCookies)}`);
      assert.equal(got.value, expected.value, `${expected.name}'s value: ${JSON.stringify(setCookies)}`);
      for (const attribute of expected.attributes)
        assert.ok(got.attributes.includes(attribute), `${expected.name} lacks ${attribute}: ${JSON.stringify(setCookies)}`);
    }
    return observed;
  });
  await check('two Cookie header lines reach the server as one, joined with "; "', async () => {
    const r = await request(base, '/hello', ['cookie', 'a=1', 'cookie', 'b=2']);
    assert.equal(r.status, 200, r.body.slice(0, 500));
    const { cookie } = JSON.parse(r.body);
    assert.equal(cookie, 'a=1; b=2');
    return { cookie };
  });
  await check('one Cookie header line arrives as it was sent', async () => {
    const r = await request(base, '/hello', ['cookie', 'a=1; b=2']);
    const { cookie } = JSON.parse(r.body);
    assert.equal(cookie, 'a=1; b=2');
    return { cookie };
  });
  await check('a 303 with no body reaches the client with its Location', async () => {
    const r = await request(base, '/see-other');
    const observed = { status: r.status, location: r.raw.find(([name]) => name === 'location')?.[1], body: r.body };
    assert.deepEqual(observed, { status: 303, location: '/there', body: '' });
    return observed;
  });
  entry.ok = entry.checks.every(c => c.ok);
  console.log(`${entry.ok ? 'ok  ' : 'FAIL'} ${label}`);
  for (const c of entry.checks) console.log(`  ${c.ok ? 'ok  ' : 'FAIL'} ${c.name}${c.ok ? ' ' + JSON.stringify(c.observed) : ': ' + c.error}`);
  save();
  return entry.ok;
}

async function waitFor(base, alive, log, timeoutMs = 600_000) {
  const started = Date.now();
  for (;;) {
    if (await request(base, '/health').then(r => r.status === 200, () => false)) return Date.now() - started;
    assert.ok(alive(), 'the server exited: ' + log().slice(-3000));
    assert.ok(Date.now() - started < timeoutMs, `no answer within ${timeoutMs} ms: ` + log().slice(-3000));
    await new Promise(done => setTimeout(done, 500));
  }
}
/** Starts `command`, waits for /health on `port`, runs `body`, stops it. */
async function serving(command, args, options, port, body, { stop = () => {} } = {}) {
  const child = spawn(command, args, { env, stdio: ['ignore', 'pipe', 'pipe'], detached: true, ...options });
  let log = ''; child.stdout.on('data', d => { log += d; }); child.stderr.on('data', d => { log += d; });
  try {
    await waitFor(`http://127.0.0.1:${port}`, () => child.exitCode === null, () => log);
    return await body();
  } finally {
    try { process.kill(-child.pid, 'SIGTERM'); } catch {}
    await new Promise(done => { const t = setTimeout(() => { try { process.kill(-child.pid, 'SIGKILL'); } catch {} done(); }, 10_000); child.once('exit', () => { clearTimeout(t); done(); }); });
    stop();
    result.logTail = log.slice(-4000); save();
  }
}

// ---------- the stand-in build, packaged for the platform ----------
const dist = standInApplication(join(work, 'dist'));
const dependency = { azure: '@azure/functions@4.17.0', gcf: '@google-cloud/functions-framework@5.0.5' }[platform];
if (dependency) run('npm', ['install', '--prefix', dist, '--no-save', '--no-package-lock', '--no-bin-links', '--no-audit', '--no-fund', dependency]);
let ok;
if (platform === 'lambda') {
  const directory = join(work, 'sam');
  mkdirSync(directory);
  packageApplication({ input: dist, target: 'lambda', output: join(directory, 'lambda.zip') });
  const architecture = process.arch === 'arm64' ? 'arm64' : 'x86_64';
  writeFileSync(join(directory, 'template.yaml'), `AWSTemplateFormatVersion: '2010-09-09'
Transform: AWS::Serverless-2016-10-31
Globals:
  Function:
    CodeUri: lambda.zip
    Handler: lasm-lambda.handler
    Runtime: nodejs24.x
    Architectures: [${architecture}]
    MemorySize: 512
    Timeout: 10
Resources:
  HttpApiFunction:
    Type: AWS::Serverless::Function
    Properties:
      Events:
        Health: { Type: HttpApi, Properties: { Path: /health, Method: GET } }
        V2: { Type: HttpApi, Properties: { Path: '/v2/{proxy+}', Method: ANY } }
  RestApiFunction:
    Type: AWS::Serverless::Function
    Properties:
      Events:
        V1: { Type: Api, Properties: { Path: '/v1/{proxy+}', Method: ANY } }
`);
  const home = mkdtempSync(join(tmpdir(), 'lasm-sam-home-'));
  Object.assign(env, { HOME: home, AWS_SHARED_CREDENTIALS_FILE: join(home, 'none'), AWS_CONFIG_FILE: join(home, 'none'),
    AWS_REGION: 'us-east-1', AWS_ACCESS_KEY_ID: '', AWS_SECRET_ACCESS_KEY: '', AWS_SESSION_TOKEN: '' });
  const port = await freePort();
  const samStop = () => {
    const left = spawnSync('docker', ['ps', '-aq', '--filter', 'label=sam.cli.container.type'], { encoding: 'utf8' }).stdout.trim();
    if (left) spawnSync('docker', ['rm', '-f', ...left.split('\n')]);
  };
  ok = await serving('sam', ['local', 'start-api', '--port', String(port), '--host', '127.0.0.1', '--warm-containers', 'EAGER'], { cwd: directory }, port, async () =>
    [await checkAll(`http://127.0.0.1:${port}/v2`, 'AWS Lambda, API Gateway HTTP API (payload 2.0), sam local start-api'),
      await checkAll(`http://127.0.0.1:${port}/v1`, 'AWS Lambda, API Gateway REST API (payload 1.0), sam local start-api')].every(Boolean), { stop: samStop });
} else if (platform === 'vercel') {
  const output = packageApplication({ input: dist, target: 'vercel', output: join(work, 'site/.vercel/output') }).output;
  const func = join(output, 'functions/index.func');
  const modules = process.env.VERCEL_NODE_MODULES;
  assert.ok(modules && existsSync(join(modules, '@vercel/node/dist/dev-server.mjs')), 'set VERCEL_NODE_MODULES to the vercel CLI\'s node_modules');
  const port = await freePort(), name = `lasm-adapters-vercel-${port}`;
  ok = await serving('docker', ['run', '--rm', '--name', name, '--network', 'host', '--read-only', '--tmpfs', '/tmp', '--memory=1g',
    '-v', `${func}:/var/task:ro`, '-v', `${realpathSync(modules)}:/opt/vercel/node_modules:ro`, '-w', '/var/task',
    '-e', 'VERCEL_DEV_ENTRYPOINT=lasm-vercel.mjs', '-e', `VERCEL_DEV_PORT=${port}`, '-e', 'VERCEL_DEV_CONFIG={}',
    '--entrypoint', 'node', image, '/opt/vercel/node_modules/@vercel/node/dist/dev-server.mjs'], {}, port,
  () => checkAll(`http://127.0.0.1:${port}`, 'Vercel Functions: Vercel\'s Node launcher in the Lambda Node 24 image'),
  { stop: () => spawnSync('docker', ['rm', '-f', name]) });
} else if (platform === 'netlify') {
  const project = join(work, 'site');
  mkdirSync(join(project, 'public'), { recursive: true });
  writeFileSync(join(project, 'public/index.html'), '<!doctype html>\n');
  writeFileSync(join(project, 'netlify.toml'), '[build]\n  command = "true"\n  publish = "public"\n\n[functions]\n  directory = "netlify/functions"\n  included_files = ["netlify/functions/lasm/**"]\n');
  packageApplication({ input: dist, target: 'netlify', output: join(project, 'netlify/functions/lasm') });
  run('netlify', ['build', '--offline'], { cwd: project });
  const task = mkdtempSync(join(tmpdir(), 'lasm-adapters-netlify-'));
  execFileSync('unzip', ['-q', join(project, '.netlify/functions/lasm.zip'), '-d', task]);
  chmodSync(task, 0o755);
  const name = `lasm-adapters-netlify-${process.pid}`;
  const id = run('docker', ['run', '-d', '--name', name, '--read-only', '--tmpfs', '/tmp', '--memory=1g', '-p', '127.0.0.1::8080',
    '-e', 'AWS_LAMBDA_FUNCTION_MEMORY_SIZE=1024', '-v', `${task}:/var/task:ro`, image, '___netlify-entry-point.handler']).trim();
  const emulator = run('docker', ['port', id, '8080/tcp']).trim().split('\n')[0].split(':').pop();
  // HTTP in front of the emulator, as Netlify's front end invokes the function
  // (the request's headers as one value each, the reply streamed back).
  const port = await freePort();
  const hopByHop = new Set(['connection', 'keep-alive', 'transfer-encoding', 'te', 'trailer', 'upgrade', 'host', 'content-length']);
  let queue = Promise.resolve();
  const front = http.createServer((req, res) => {
    queue = queue.then(async () => {
      try {
        const headers = { host: `127.0.0.1:${port}` };
        for (const [key, value] of Object.entries(req.headers)) if (!hopByHop.has(key)) headers[key] = Array.isArray(value) ? value.join(', ') : value;
        const event = { httpMethod: req.method, rawUrl: `http://127.0.0.1:${port}${req.url}`, route: '/*', headers, body: '', isBase64Encoded: false };
        const response = await fetch(`http://127.0.0.1:${emulator}/2015-03-31/functions/function/invocations`, { method: 'POST', body: JSON.stringify(event) });
        const bytes = Buffer.from(await response.arrayBuffer());
        // A streamed reply: the JSON metadata, eight NUL bytes, then the body.
        const split = bytes.indexOf(Buffer.alloc(8));
        if (split < 0) throw new Error(`not a streamed reply: emulator ${response.status}, ${bytes.length} bytes: ${bytes.toString().slice(0, 500)}`);
        const meta = JSON.parse(bytes.subarray(0, split).toString());
        const out = [];
        for (const [key, value] of Object.entries(meta.headers ?? {})) if (!hopByHop.has(key.toLowerCase())) out.push(key, value);
        for (const [key, values] of Object.entries(meta.multiValueHeaders ?? {}))
          if (!hopByHop.has(key.toLowerCase())) for (const value of values) out.push(key, value);
        for (const cookie of meta.cookies ?? []) out.push('set-cookie', cookie);
        res.writeHead(meta.statusCode, out);
        res.end(bytes.subarray(split + 8));
      } catch (error) { res.writeHead(502); res.end(String(error)); }
    });
  }).listen(port, '127.0.0.1');
  try {
    await waitFor(`http://127.0.0.1:${port}`, () => true, () => spawnSync('docker', ['logs', id], { encoding: 'utf8' }).stderr ?? '', 120_000);
    ok = await checkAll(`http://127.0.0.1:${port}`, 'Netlify Functions: the netlify build --offline zip with Netlify\'s bootstrap in the Lambda Node 24 image');
  } finally {
    result.logTail = spawnSync('docker', ['logs', id], { encoding: 'utf8' }).stdout?.slice(-4000);
    front.close(); spawnSync('docker', ['rm', '-f', id]); rmSync(task, { recursive: true, force: true });
  }
} else if (platform === 'azure') {
  const output = packageApplication({ input: dist, target: 'azure', output: join(work, 'azure-functions') }).output;
  const port = await freePort();
  ok = await serving('func', ['start', '--port', String(port)], { cwd: output }, port,
    () => checkAll(`http://127.0.0.1:${port}`, 'Azure Functions: Core Tools func start'));
} else if (platform === 'gcf') {
  const output = packageApplication({ input: dist, target: 'gcf', output: join(work, 'gcf') }).output;
  const port = await freePort();
  ok = await serving(process.execPath, [join(output, 'node_modules/@google-cloud/functions-framework/build/src/main.js'), '--target=lasm', `--port=${port}`],
    { cwd: output }, port, () => checkAll(`http://127.0.0.1:${port}`, 'Google Cloud Functions: the Functions Framework'));
}
result.finishedAt = new Date().toISOString(); result.ok = ok; save();
process.exit(ok ? 0 : 1);
