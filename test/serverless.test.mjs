// `lasm package` and the function-platform shims, with a stand-in application:
// a Node HTTP server in place of a Lean build (no toolchain needed). The real
// Lean builds run in .github/workflows/serverless.yml.
import assert from 'node:assert/strict';
import { test } from 'node:test';
import { execFileSync, spawnSync } from 'node:child_process';
import { mkdirSync, mkdtempSync, readFileSync, statSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { parseLasmArguments } from '../src/cli-arguments.mjs';
import { packageApplication, packageTargets } from '../src/package.mjs';
import { zip } from '../src/serverless/zip.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));

// Echoes each request as JSON; /binary, /cookies and /empty exercise encodings.
const server = `import http from 'node:http';
if (process.argv.length !== 2) throw new Error('unexpected arguments ' + process.argv);
http.createServer((req, res) => {
  const chunks = [];
  req.on('data', c => chunks.push(c)).on('end', () => {
    const url = new URL(req.url, 'http://x');
    if (url.pathname === '/binary') { res.writeHead(200, { 'content-type': 'application/octet-stream' }); return res.end(Buffer.from([0, 255, 1, 254])); }
    if (url.pathname === '/cookies') { res.setHeader('set-cookie', ['a=1; Path=/', 'b=2; Path=/']); res.setHeader('x-many', ['p', 'q']); return res.end('ok'); }
    if (url.pathname === '/empty') { res.writeHead(204); return res.end(); }
    res.writeHead(url.pathname === '/missing' ? 404 : 200, { 'content-type': 'application/json' });
    res.end(JSON.stringify({ method: req.method, url: req.url, host: req.headers.host, type: req.headers['content-type'] ?? null,
      cookie: req.headers.cookie ?? null, body: Buffer.concat(chunks).toString() }));
  });
}).listen(Number(process.env.PORT), process.env.HOST);
`;

function fakeApplication(directory, { packages = {} } = {}) {
  const write = (name, text, mode = 0o644) => {
    mkdirSync(join(directory, name, '..'), { recursive: true });
    writeFileSync(join(directory, name), text, { mode });
  };
  write('main.mjs', server, 0o755);
  write('package.json', JSON.stringify({ private: true, type: 'module' }));
  write('program.cjs', '');
  write('program.wasm', '');
  write('build-info.json', '{}');
  write('.lasm-application.json', '{}');
  write('host/native/manifest.json', JSON.stringify({ deployment: { target: 'node', targets: ['linux-x64', 'linux-arm64'] } }));
  // Built on Windows: no execute permission recorded.
  write('host/native/process/linux-x64-gnu', 'ELF', 0o644);
  write('host/native/process/manifest.json', '{}');
  for (const [name, text] of Object.entries(packages)) {
    write(`node_modules/${name}/package.json`, JSON.stringify({ name, version: '1.2.3', type: 'module', main: 'index.js' }));
    write(`node_modules/${name}/index.js`, text);
  }
  return directory;
}

/** Runs `script` (ESM) in a fresh Node process: each process starts its server once. */
function inProcess(script, cwd) {
  const run = spawnSync(process.execPath, ['--input-type=module', '-e', script], { cwd, encoding: 'utf8', timeout: 60_000 });
  assert.equal(run.status, 0, run.stderr + run.stdout);
  return JSON.parse(run.stdout.trim().split('\n').at(-1));
}

test('lasm package arguments', () => {
  assert.deepEqual(parseLasmArguments(['package', '--target', 'lambda']), { command: 'package', target: 'lambda', input: 'dist' });
  assert.deepEqual(parseLasmArguments(['package', 'out', '--target=vercel', '--output', 'x']), { command: 'package', target: 'vercel', output: 'x', input: 'out' });
  assert.deepEqual(parseLasmArguments(['package', '--help']), { command: 'package-help' });
  assert.throws(() => parseLasmArguments(['package']), /--target is required/);
  assert.throws(() => parseLasmArguments(['package', '--target', 'workers']), /Unknown target "workers"/);
  assert.throws(() => parseLasmArguments(['package', 'a', 'b', '--target', 'lambda']), /Usage: lasm package/);
  assert.throws(() => parseLasmArguments(['package', '--target', 'lambda', '--target', 'vercel']), /only once/);
  assert.throws(() => parseLasmArguments(['package', '--target', 'lambda', '--zip']), /Unknown lasm package option/);
});

test('zip entries keep the given permissions and extract with unzip', { skip: process.platform === 'win32' }, () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-zip-'));
  const archive = zip([{ name: 'a/run', data: Buffer.from('#!/bin/sh\n'), mode: 0o755 }, { name: 'b.txt', data: Buffer.alloc(5000, 97), mode: 0o644 }]);
  writeFileSync(join(directory, 'x.zip'), archive);
  if (spawnSync('unzip', ['-v']).status !== 0) return;
  execFileSync('unzip', ['-q', 'x.zip', '-d', 'out'], { cwd: directory });
  assert.equal(statSync(join(directory, 'out/a/run')).mode & 0o777, 0o755);
  assert.equal(statSync(join(directory, 'out/b.txt')).mode & 0o777, 0o644);
  assert.equal(readFileSync(join(directory, 'out/b.txt'), 'utf8'), 'a'.repeat(5000));
});

test('lasm package refuses what is not a Linux-capable Lasm build', () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-package-'));
  assert.throws(() => packageApplication({ input: directory, target: 'lambda', output: join(directory, '..', 'x.zip') }), /is not a Lasm build/);
  const app = fakeApplication(join(directory, 'dist'));
  writeFileSync(join(app, 'host/native/manifest.json'), JSON.stringify({ deployment: { targets: ['darwin-arm64'] } }));
  assert.throws(() => packageApplication({ input: app, target: 'lambda', output: join(directory, 'x.zip') }), /no Linux native support/);
  fakeApplication(app);
  assert.throws(() => packageApplication({ input: app, target: 'azure', output: join(directory, 'az') }), /needs the npm package @azure\/functions/);
  assert.throws(() => packageApplication({ input: app, target: 'vercel', output: directory }), /must not contain the build/);
});

test('Lambda zip: every event shape reaches the server and returns its response shape', { skip: process.platform === 'win32' || spawnSync('unzip', ['-v']).status !== 0 }, () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-lambda-'));
  const app = fakeApplication(join(directory, 'dist'));
  const result = packageApplication({ input: app, target: 'lambda', output: join(directory, 'lambda.zip') });
  assert.equal(result.handler, 'lasm-lambda.handler');
  assert.ok(result.zippedBytes > 0 && result.zippedBytes < packageTargets.lambda.zipped);
  execFileSync('unzip', ['-q', 'lambda.zip', '-d', 'task'], { cwd: directory });
  const task = join(directory, 'task');
  assert.equal(statSync(join(task, 'main.mjs')).mode & 0o777, 0o755);
  assert.equal(statSync(join(task, 'host/native/process/linux-x64-gnu')).mode & 0o777, 0o755, 'helpers stay executable');
  assert.equal(statSync(join(task, 'program.wasm')).mode & 0o777, 0o644);
  assert.throws(() => statSync(join(task, '.lasm-application.json')));
  const events = pathToEvents();
  const output = inProcess(`
    import { makeEvent, readReply, eventKinds } from ${JSON.stringify(events)};
    const { handler } = await import('./task/lasm-lambda.mjs');
    const out = {};
    for (const kind of eventKinds) {
      const call = async request => { const r = readReply(kind, await handler(makeEvent(kind, request))); return { ...r, body: r.body.toString('base64') }; };
      out[kind] = {
        get: await call({ path: '/hello/Ada', query: [['a', 'x y'], ['a', 'z']] }),
        post: await call({ method: 'POST', path: '/echo', headers: { 'content-type': 'application/json' }, body: '{"s":"λ"}' }),
        binary: await call({ path: '/binary' }),
        cookies: await call({ path: '/cookies' }),
        missing: await call({ path: '/missing' }),
      };
    }
    console.log(JSON.stringify(out));
    process.exit(0);`, directory);
  for (const [kind, replies] of Object.entries(output)) {
    const json = reply => JSON.parse(Buffer.from(reply.body, 'base64').toString());
    assert.equal(replies.get.status, 200, kind);
    const get = json(replies.get);
    assert.equal(get.method, 'GET');
    // Single-value forms keep only the last value of a repeated query parameter.
    assert.equal(get.url, kind === 'alb' ? '/hello/Ada?a=z' : '/hello/Ada?a=x+y&a=z', kind);
    assert.ok(get.host, kind);
    const post = json(replies.post);
    assert.deepEqual([post.method, post.url, post.type, post.body], ['POST', '/echo', 'application/json', '{"s":"λ"}'], kind);
    assert.deepEqual([...Buffer.from(replies.binary.body, 'base64')], [0, 255, 1, 254], kind);
    // A single-value ALB target group carries one Set-Cookie (enable multi-value headers for more).
    assert.deepEqual(replies.cookies.headers['set-cookie'], kind === 'alb' ? ['b=2; Path=/'] : ['a=1; Path=/', 'b=2; Path=/'], kind);
    assert.deepEqual(replies.cookies.headers['x-many'], kind === 'alb' || kind.startsWith('apigw-v2') || kind === 'function-url' ? ['p, q'] : ['p', 'q'], kind);
    assert.equal(replies.missing.status, 404, kind);
  }
  assert.equal(JSON.parse(Buffer.from(output['apigw-v2-http'].get.body, 'base64')).cookie, 'cookie1; cookie2');
});

function pathToEvents() { return new URL('../scripts/serverless/lambda-events.mjs', import.meta.url).href; }

test('Vercel, Netlify, Azure Functions and Google Cloud Functions outputs', () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-functions-'));
  const app = fakeApplication(join(directory, 'dist'), { packages: {
    // Stand-ins that record the registered handler, as the platforms' packages do.
    '@azure/functions': 'export const app = { http(name, options) { globalThis.registered = { name, options }; } };',
    '@google-cloud/functions-framework': 'export default { http(name, fn) { globalThis.registered = { name, fn }; } };',
  } });
  const vercel = packageApplication({ input: app, target: 'vercel', output: join(directory, '.vercel/output') });
  const func = join(vercel.output, 'functions/index.func');
  assert.deepEqual(JSON.parse(readFileSync(join(func, '.vc-config.json'), 'utf8')).handler, 'lasm-vercel.mjs');
  assert.equal(JSON.parse(readFileSync(join(vercel.output, 'config.json'), 'utf8')).version, 3);
  assert.equal(statSync(join(func, 'host/native/process/linux-x64-gnu')).mode & 0o111, process.platform === 'win32' ? 0 : 0o111);
  const viaNode = inProcess(`
    import http from 'node:http';
    const { default: handler } = await import(${JSON.stringify(new URL('file://' + join(func, 'lasm-vercel.mjs')).href)});
    const server = http.createServer(handler).listen(0, '127.0.0.1');
    await new Promise(r => server.once('listening', r));
    const base = 'http://127.0.0.1:' + server.address().port;
    const post = await fetch(base + '/echo?x=1', { method: 'POST', body: 'hi', headers: { 'content-type': 'text/plain' } });
    const cookies = await fetch(base + '/cookies');
    console.log(JSON.stringify({ post: await post.json(), cookies: cookies.headers.getSetCookie() }));
    process.exit(0);`, directory);
  assert.deepEqual([viaNode.post.url, viaNode.post.body], ['/echo?x=1', 'hi']);
  assert.deepEqual(viaNode.cookies, ['a=1; Path=/', 'b=2; Path=/']);

  const netlify = packageApplication({ input: app, target: 'netlify', output: join(directory, 'netlify/functions/lasm') });
  const viaFetch = inProcess(`
    const mod = await import(${JSON.stringify(new URL('file://' + join(netlify.output, 'lasm.mjs')).href)});
    const post = await mod.default(new Request('https://site.netlify.app/echo?x=1', { method: 'POST', body: 'hi' }));
    const empty = await mod.default(new Request('https://site.netlify.app/empty'));
    const binary = await mod.default(new Request('https://site.netlify.app/binary'));
    console.log(JSON.stringify({ config: mod.config, post: await post.json(), empty: empty.status, binary: [...new Uint8Array(await binary.arrayBuffer())] }));
    process.exit(0);`, directory);
  assert.deepEqual(viaFetch.config, { path: '/*', preferStatic: true });
  assert.deepEqual([viaFetch.post.url, viaFetch.post.body, viaFetch.empty, viaFetch.binary], ['/echo?x=1', 'hi', 204, [0, 255, 1, 254]]);

  const azure = packageApplication({ input: app, target: 'azure', output: join(directory, 'azure') });
  assert.equal(azure.dependency, '@azure/functions@1.2.3');
  const azurePackage = JSON.parse(readFileSync(join(azure.output, 'package.json'), 'utf8'));
  assert.equal(azurePackage.main, 'lasm-azure.mjs');
  assert.equal(azurePackage.dependencies['@azure/functions'], '1.2.3');
  assert.equal(JSON.parse(readFileSync(join(azure.output, 'host.json'), 'utf8')).extensions.http.routePrefix, '');
  const viaAzure = inProcess(`
    await import(${JSON.stringify(new URL('file://' + join(azure.output, 'lasm-azure.mjs')).href)});
    const { name, options } = globalThis.registered;
    const reply = await options.handler(new Request('http://localhost:7071/echo?x=1', { method: 'POST', body: 'hi' }));
    console.log(JSON.stringify({ name, route: options.route, auth: options.authLevel, status: reply.status, body: JSON.parse(Buffer.from(reply.body).toString()) }));
    process.exit(0);`, directory);
  assert.deepEqual([viaAzure.name, viaAzure.route, viaAzure.auth, viaAzure.status, viaAzure.body.url], ['lasm', '{*path}', 'anonymous', 200, '/echo?x=1']);

  const gcf = packageApplication({ input: app, target: 'gcf', output: join(directory, 'gcf') });
  assert.equal(JSON.parse(readFileSync(join(gcf.output, 'package.json'), 'utf8')).main, 'lasm-gcf.mjs');
  const viaGcf = inProcess(`
    import http from 'node:http';
    await import(${JSON.stringify(new URL('file://' + join(gcf.output, 'lasm-gcf.mjs')).href)});
    const { name, fn } = globalThis.registered;
    const server = http.createServer((req, res) => fn(Object.assign(req, { originalUrl: req.url }), res)).listen(0, '127.0.0.1');
    await new Promise(r => server.once('listening', r));
    const reply = await fetch('http://127.0.0.1:' + server.address().port + '/echo?x=1', { method: 'PUT', body: 'hi' });
    console.log(JSON.stringify({ name, body: await reply.json() }));
    process.exit(0);`, directory);
  assert.deepEqual([viaGcf.name, viaGcf.body.method, viaGcf.body.url, viaGcf.body.body], ['lasm', 'PUT', '/echo?x=1', 'hi']);
});

test('a program that does not listen fails clearly', () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-nolisten-'));
  const app = fakeApplication(join(directory, 'dist'));
  writeFileSync(join(app, 'main.mjs'), 'console.log("done");');
  packageApplication({ input: app, target: 'netlify', output: join(directory, 'fn') });
  const run = spawnSync(process.execPath, ['--input-type=module', '-e', `
    const { startLeanServer } = await import('./fn/lasm-server.mjs');
    try { await startLeanServer({ timeoutMs: 500 }); } catch (error) { console.log(error.message); }`], { cwd: directory, encoding: 'utf8' });
  assert.match(run.stdout, /did not listen on \$PORT/);
  assert.ok(root);
});
