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
import { standInApplication } from '../scripts/serverless/stand-in-app.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));

const fakeApplication = standInApplication;

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

test('lasm package refuses a dev-profile build unless --allow-dev', () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-package-dev-'));
  const app = fakeApplication(join(directory, 'dist'));
  writeFileSync(join(app, 'build-info.json'), JSON.stringify({ profile: 'dev' }));
  assert.throws(() => packageApplication({ input: app, target: 'netlify', output: join(directory, 'nf') }), /is a dev build.*--allow-dev/);
  const allowed = packageApplication({ input: app, target: 'netlify', output: join(directory, 'nf'), allowDev: true });
  assert.equal(allowed.profile, 'dev');
  assert.match(allowed.warnings.join('\n'), /dev build/);
  writeFileSync(join(app, 'build-info.json'), JSON.stringify({ profile: 'release' }));
  const release = packageApplication({ input: app, target: 'netlify', output: join(directory, 'nf2') });
  assert.equal(release.profile, 'release'); assert.deepEqual(release.warnings, []);
  assert.deepEqual(parseLasmArguments(['package', '--target', 'lambda', '--allow-dev']), { command: 'package', target: 'lambda', input: 'dist', allowDev: true });
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
        seeOther: await call({ path: '/see-other' }),
      };
      // The request's cookies in every form the event can carry them, at once
      // (sam local start-api fills both headers.cookie and cookies, #80).
      const event = makeEvent(kind, { path: '/hello', headers: { cookie: 'a=1; b=2' } });
      if (event.cookies) event.cookies = ['a=1', 'b=2'];
      if (event.multiValueHeaders) event.multiValueHeaders.cookie = ['a=1', 'b=2'];
      if (event.Records) event.Records[0].cf.request.headers.cookie = [{ key: 'Cookie', value: 'a=1' }, { key: 'Cookie', value: 'b=2' }];
      const r = readReply(kind, await handler(event));
      out[kind].requestCookies = { ...r, body: r.body.toString('base64') };
    }
    console.log(JSON.stringify(out));
    process.exit(0);`, directory);
  for (const [kind, replies] of Object.entries(output)) {
    const json = reply => JSON.parse(Buffer.from(reply.body, 'base64').toString());
    assert.equal(replies.get.status, 200, kind);
    const get = json(replies.get);
    assert.equal(get.method, 'GET');
    // Single-value forms keep only the last value of a repeated query parameter;
    // an ALB's still-encoded values are forwarded as they came.
    assert.equal(get.url, kind === 'alb' ? '/hello/Ada?a=z' : kind === 'alb-multi-value' ? '/hello/Ada?a=x%20y&a=z' : '/hello/Ada?a=x+y&a=z', kind);
    assert.ok(get.host, kind);
    const post = json(replies.post);
    assert.deepEqual([post.method, post.url, post.type, post.body], ['POST', '/echo', 'application/json', '{"s":"λ"}'], kind);
    assert.deepEqual([...Buffer.from(replies.binary.body, 'base64')], [0, 255, 1, 254], kind);
    // A single-value ALB target group carries one Set-Cookie (enable multi-value headers for more).
    assert.deepEqual(replies.cookies.headers['set-cookie'], kind === 'alb' ? ['b=2; Path=/'] : ['a=1; Path=/', 'b=2; Path=/'], kind);
    assert.deepEqual(replies.cookies.headers['x-many'], kind === 'alb' || kind.startsWith('apigw-v2') || kind === 'function-url' ? ['p, q'] : ['p', 'q'], kind);
    assert.equal(replies.missing.status, 404, kind);
    // A redirect with no body keeps its status and Location (#82).
    assert.deepEqual([replies.seeOther.status, replies.seeOther.headers.location, replies.seeOther.body], [303, ['/there'], ''], kind);
    // One Cookie header reaches the server, whatever the event held (#80).
    const cookies = json(replies.requestCookies);
    assert.deepEqual([cookies.cookie, cookies.cookieFields], ['a=1; b=2', 1], kind);
  }
  assert.equal(JSON.parse(Buffer.from(output['apigw-v2-http'].get.body, 'base64')).cookie, 'cookie1; cookie2');
});

test('function packages leave out the musl (Alpine) native pieces', { skip: process.platform === 'win32' || spawnSync('unzip', ['-v']).status !== 0 }, () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-musl-'));
  const app = fakeApplication(join(directory, 'dist'));
  const write = (name, text) => { mkdirSync(join(app, name, '..'), { recursive: true }); writeFileSync(join(app, name), text); };
  write('host/native/manifest.json', JSON.stringify({ nodeApi: 8, deployment: { target: 'node', targets: ['linux-x64', 'linux-arm64'], linuxLibc: ['glibc', 'musl'] } }));
  write('host/native/node_modules/@koromix/koffi-linux-x64/linux_x64/koffi.node', 'gnu');
  write('host/native/node_modules/@koromix/koffi-linux-x64/musl_x64/koffi.node', 'musl');
  write('host/native/process/linux-x64-musl', 'musl');
  write('host/native/process/manifest.json', JSON.stringify({ protocol: 1, files: { 'linux-x64-gnu': { sha256: 'a' }, 'linux-x64-musl': { sha256: 'b' } } }));
  write('host/native/signals/linux-x64-gnu.so', 'gnu');
  write('host/native/signals/linux-x64-musl.so', 'musl');
  write('host/native/signals/manifest.json', JSON.stringify({ protocol: 1, files: { 'linux-x64-gnu.so': { sha256: 'c' }, 'linux-x64-musl.so': { sha256: 'd' } } }));
  packageApplication({ input: app, target: 'lambda', output: join(directory, 'lambda.zip') });
  execFileSync('unzip', ['-q', 'lambda.zip', '-d', 'task'], { cwd: directory });
  const task = join(directory, 'task'), json = name => JSON.parse(readFileSync(join(task, name), 'utf8'));
  const listing = execFileSync('unzip', ['-Z1', 'lambda.zip'], { cwd: directory, encoding: 'utf8' });
  assert.doesNotMatch(listing, /musl/);
  assert.match(listing, /linux_x64\/koffi\.node/);
  assert.deepEqual(json('host/native/manifest.json').deployment.linuxLibc, ['glibc']);
  assert.deepEqual(Object.keys(json('host/native/process/manifest.json').files), ['linux-x64-gnu']);
  assert.deepEqual(Object.keys(json('host/native/signals/manifest.json').files), ['linux-x64-gnu.so']);
  // The build itself keeps them, for Alpine containers.
  assert.match(readFileSync(join(app, 'host/native/process/linux-x64-musl'), 'utf8'), /musl/);
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
    const raw = (base, path, headers = []) => new Promise((done, fail) => {
      const u = new URL(base + path);
      http.request({ host: u.hostname, port: u.port, path: u.pathname, headers: ['host', u.host, 'cookie', 'a=1', 'cookie', 'b=2', ...headers] }, res => {
        const chunks = []; res.on('data', c => chunks.push(c)); res.on('end', () => done({ status: res.statusCode, headers: res.headers, body: Buffer.concat(chunks).toString() }));
      }).on('error', fail).end();
    });
    const seeOther = await raw(base, '/see-other');
    const requestCookies = JSON.parse((await raw(base, '/hello')).body);
    console.log(JSON.stringify({ post: await post.json(), cookies: cookies.headers.getSetCookie(), seeOther, requestCookies }));
    process.exit(0);`, directory);
  assert.deepEqual([viaNode.post.url, viaNode.post.body], ['/echo?x=1', 'hi']);
  assert.deepEqual(viaNode.cookies, ['a=1; Path=/', 'b=2; Path=/']);
  assert.deepEqual([viaNode.seeOther.status, viaNode.seeOther.headers.location, viaNode.seeOther.body], [303, '/there', '']);
  assert.deepEqual([viaNode.requestCookies.cookie, viaNode.requestCookies.cookieFields], ['a=1; b=2', 1]);

  const netlify = packageApplication({ input: app, target: 'netlify', output: join(directory, 'netlify/functions/lasm') });
  const viaFetch = inProcess(`
    const mod = await import(${JSON.stringify(new URL('file://' + join(netlify.output, 'lasm.mjs')).href)});
    const post = await mod.default(new Request('https://site.netlify.app/echo?x=1', { method: 'POST', body: 'hi' }));
    const empty = await mod.default(new Request('https://site.netlify.app/empty'));
    const binary = await mod.default(new Request('https://site.netlify.app/binary'));
    const cookies = await mod.default(new Request('https://site.netlify.app/cookies'));
    const seeOther = await mod.default(new Request('https://site.netlify.app/see-other'));
    const request = new Request('https://site.netlify.app/hello', { headers: [['cookie', 'a=1'], ['cookie', 'b=2']] });
    const requestCookies = await (await mod.default(request)).json();
    console.log(JSON.stringify({ config: mod.config, post: await post.json(), empty: empty.status, binary: [...new Uint8Array(await binary.arrayBuffer())],
      cookies: cookies.headers.getSetCookie(), seeOther: [seeOther.status, seeOther.headers.get('location'), seeOther.body], requestCookies }));
    process.exit(0);`, directory);
  assert.deepEqual(viaFetch.config, { path: '/*', preferStatic: true });
  assert.deepEqual([viaFetch.post.url, viaFetch.post.body, viaFetch.empty, viaFetch.binary], ['/echo?x=1', 'hi', 204, [0, 255, 1, 254]]);
  assert.deepEqual(viaFetch.cookies, ['a=1; Path=/', 'b=2; Path=/']);
  // No zero-length body stream: Netlify's streaming bootstrap sends nothing for one (#82).
  assert.deepEqual(viaFetch.seeOther, [303, '/there', null]);
  assert.deepEqual([viaFetch.requestCookies.cookie, viaFetch.requestCookies.cookieFields], ['a=1; b=2', 1]);

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
    const cookies = await options.handler(new Request('http://localhost:7071/cookies'));
    const seeOther = await options.handler(new Request('http://localhost:7071/see-other'));
    console.log(JSON.stringify({ name, route: options.route, auth: options.authLevel, status: reply.status, body: JSON.parse(Buffer.from(reply.body).toString()),
      cookies: { list: cookies.cookies, setCookie: cookies.headers.getSetCookie(), many: cookies.headers.get('x-many') },
      seeOther: { status: seeOther.status, location: seeOther.headers.get('location'), body: seeOther.body ?? null } }));
    process.exit(0);`, directory);
  assert.deepEqual([viaAzure.name, viaAzure.route, viaAzure.auth, viaAzure.status, viaAzure.body.url], ['lasm', '{*path}', 'anonymous', 200, '/echo?x=1']);
  // Several Set-Cookie headers travel in HttpResponseInit.cookies (#80).
  assert.deepEqual(viaAzure.cookies, { list: [{ name: 'b', value: '2', path: '/' }], setCookie: ['a=1; Path=/'], many: 'p, q' });
  assert.deepEqual(viaAzure.seeOther, { status: 303, location: '/there', body: null });

  const gcf = packageApplication({ input: app, target: 'gcf', output: join(directory, 'gcf') });
  assert.equal(JSON.parse(readFileSync(join(gcf.output, 'package.json'), 'utf8')).main, 'lasm-gcf.mjs');
  const viaGcf = inProcess(`
    import http from 'node:http';
    await import(${JSON.stringify(new URL('file://' + join(gcf.output, 'lasm-gcf.mjs')).href)});
    const { name, fn } = globalThis.registered;
    const server = http.createServer((req, res) => fn(Object.assign(req, { originalUrl: req.url }), res)).listen(0, '127.0.0.1');
    await new Promise(r => server.once('listening', r));
    const base = 'http://127.0.0.1:' + server.address().port;
    const reply = await fetch(base + '/echo?x=1', { method: 'PUT', body: 'hi' });
    const cookies = await fetch(base + '/cookies');
    const raw = (base, path, headers = []) => new Promise((done, fail) => {
      const u = new URL(base + path);
      http.request({ host: u.hostname, port: u.port, path: u.pathname, headers: ['host', u.host, 'cookie', 'a=1', 'cookie', 'b=2', ...headers] }, res => {
        const chunks = []; res.on('data', c => chunks.push(c)); res.on('end', () => done({ status: res.statusCode, headers: res.headers, body: Buffer.concat(chunks).toString() }));
      }).on('error', fail).end();
    });
    const seeOther = await raw(base, '/see-other');
    const requestCookies = JSON.parse((await raw(base, '/hello')).body);
    console.log(JSON.stringify({ name, body: await reply.json(), cookies: cookies.headers.getSetCookie(), seeOther, requestCookies }));
    process.exit(0);`, directory);
  assert.deepEqual([viaGcf.name, viaGcf.body.method, viaGcf.body.url, viaGcf.body.body], ['lasm', 'PUT', '/echo?x=1', 'hi']);
  assert.deepEqual(viaGcf.cookies, ['a=1; Path=/', 'b=2; Path=/']);
  assert.deepEqual([viaGcf.seeOther.status, viaGcf.seeOther.headers.location, viaGcf.seeOther.body], [303, '/there', '']);
  assert.deepEqual([viaGcf.requestCookies.cookie, viaGcf.requestCookies.cookieFields], ['a=1; b=2', 1]);
});

test('adapter helpers: one Cookie header, Set-Cookie as cookie objects, Azure replies', async () => {
  const { joinCookies, parseSetCookie, azureReply } = await import('../src/serverless/lasm-server.mjs');
  assert.deepEqual(joinCookies([['host', 'x'], ['Cookie', 'a=1'], ['accept', '*/*'], ['cookie', 'b=2; c=3']]),
    [['host', 'x'], ['Cookie', 'a=1; b=2; c=3'], ['accept', '*/*']]);
  assert.deepEqual(joinCookies([['cookie', 'a=1'], ['cookie', '']]), [['cookie', 'a=1']]);
  assert.deepEqual(joinCookies([['cookie', 'a=1']]), [['cookie', 'a=1']]);
  // Cookies a proxy joined with commas (Azure's host, SAM's gateway); a comma inside a value stays.
  assert.deepEqual(joinCookies([['cookie', 'a=1,b=2']]), [['cookie', 'a=1; b=2']]);
  assert.deepEqual(joinCookies([['cookie', 'a=1, b=2; c=3'], ['cookie', 'a=1,b=2']]), [['cookie', 'a=1; b=2; c=3; a=1; b=2']]);
  assert.deepEqual(joinCookies([['cookie', 'last=Wed, 21 Oct 2026 07:28:00 GMT; x=1']]), [['cookie', 'last=Wed, 21 Oct 2026 07:28:00 GMT; x=1']]);
  const none = [['host', 'x']];
  assert.equal(joinCookies(none), none);
  assert.deepEqual(joinCookies([['x', '1'], ['x', '2']]), [['x', '1'], ['x', '2']], 'other repeated headers stay repeated');

  assert.deepEqual(parseSetCookie('sid=abc=; Path=/; Domain=example.com; Max-Age=3600; Expires=Wed, 21 Oct 2026 07:28:00 GMT; Secure; HttpOnly; SameSite=lax'),
    { name: 'sid', value: 'abc=', path: '/', domain: 'example.com', maxAge: 3600, expires: new Date('Wed, 21 Oct 2026 07:28:00 GMT'),
      secure: true, httpOnly: true, sameSite: 'Lax', dropped: [] });
  assert.deepEqual(parseSetCookie('gone=; Max-Age=0; Partitioned; Priority=High'), { name: 'gone', value: '', maxAge: 0, dropped: ['Partitioned', 'Priority=High'] });
  assert.equal(parseSetCookie('novalue'), null);
  assert.equal(parseSetCookie('=x'), null);

  const reply = (headers, body = '') => ({ status: 200, statusText: 'OK', headers, body: Buffer.from(body) });
  const single = azureReply(reply([['set-cookie', 'a=1; Path=/'], ['content-type', 'text/plain']], 'hi'));
  assert.deepEqual([single.cookies, single.headers.getSetCookie(), String(single.body)], [undefined, ['a=1; Path=/'], 'hi'], 'one Set-Cookie stays a header');
  // The first cookie stays a header unless another would change in cookies (its value percent-encoded, an attribute dropped).
  const many = azureReply(reply([['set-cookie', 'a=1; Path=/; HttpOnly'], ['set-cookie', 'b=; Max-Age=0'], ['set-cookie', 'c=x+y=; Path=/'], ['location', '/x']]));
  assert.deepEqual(many.cookies, [{ name: 'a', value: '1', path: '/', httpOnly: true }, { name: 'b', value: '', maxAge: 0 }]);
  assert.deepEqual([many.headers.getSetCookie(), many.headers.get('location'), many.body], [['c=x+y=; Path=/'], '/x', undefined]);
  const plain = azureReply(reply([['set-cookie', 'a=1'], ['set-cookie', 'b=2; Partitioned; Secure']]));
  assert.deepEqual([plain.cookies, plain.headers.getSetCookie()], [[{ name: 'a', value: '1' }], ['b=2; Partitioned; Secure']]);
});

test('adapter helpers: request targets, outgoing fields, textual bodies, web replies (the Lean model, library/Lasm/Serverless)', async () => {
  const { requestTarget, outgoingHeaders, plainHost, isTextual, joinCookies, webReply } = await import('../src/serverless/lasm-server.mjs');
  // A valid target is sent unchanged: escapes, `://`, a malformed escape in the query.
  assert.equal(requestTarget('/go/https://example.com/a%20b', 'q=%E0&x=1'), '/go/https://example.com/a%20b?q=%E0&x=1');
  assert.equal(requestTarget('', ''), '/');
  assert.equal(requestTarget(undefined, undefined), '/');
  // A decoded path (API Gateway REST): what a target cannot carry is percent-encoded as UTF-8, `?` and `#` included.
  assert.equal(requestTarget('/a b?c#d/é/\u{1F600}', 'a b#c?d'), '/a%20b%3Fc%23d/%C3%A9/%F0%9F%98%80?a%20b%23c?d');
  assert.equal(requestTarget('/\uD800'), '/%EF%BF%BD', 'a lone surrogate as U+FFFD, not a URIError');
  assert.equal(requestTarget('/x\x7f\x00'), '/x%7F%00');

  assert.deepEqual([plainHost('example.com:8080'), plainHost('[::1]:3000'), plainHost(''), plainHost('x/admin#'), plainHost('a b'),
    plainHost('u@h'), plainHost('h\\x'), plainHost('h?'), plainHost('é')], [true, true, false, false, false, false, false, false, false]);
  // One Host: the first plain one, else the default; no hop-by-hop field, the body's Content-Length.
  assert.deepEqual(outgoingHeaders([['Host', 'x/admin#'], ['host', 'a.example'], ['HOST', 'b.example'], ['Connection', 'close'],
    ['Content-Length', '99'], ['x', '1']], 3, '127.0.0.1:1'), [['host', 'a.example'], ['x', '1'], ['content-length', '3']]);
  assert.deepEqual(outgoingHeaders([['Host', 'x/admin#'], ['Cookie', 'a=1'], ['cookie', 'b=2']], 0, '127.0.0.1:1'),
    [['Cookie', 'a=1; b=2'], ['host', '127.0.0.1:1']]);
  assert.deepEqual(outgoingHeaders([], 0, 'h:1'), [['host', 'h:1']]);
  // Empty Cookie fields carry nothing: none is sent.
  assert.deepEqual(joinCookies([['cookie', ''], ['x', '1'], ['Cookie', '']]), [['x', '1']]);

  // Text only when the type is textual and the body is valid UTF-8.
  assert.equal(isTextual([['content-type', 'text/html; charset=iso-8859-1']], Buffer.from([0x63, 0xe9])), false);
  assert.equal(isTextual([['content-type', 'text/html']], Buffer.from('café')), true);
  assert.equal(isTextual([['content-type', 'application/problem+json']]), true);
  assert.equal(isTextual([['content-type', 'application/jsonx']]), false);
  assert.equal(isTextual([['content-type', 'text/plain'], ['content-encoding', 'gzip']], Buffer.from('x')), false);
  assert.equal(isTextual([], Buffer.from([0xff])), false);

  const reply = (status, body = '') => ({ status, statusText: 'S', headers: [['x', '1'], ['x', '2']], body: Buffer.from(body) });
  const ok = webReply(reply(200, 'hi'), 'GET');
  assert.deepEqual([ok.status, ok.headers.get('x'), await ok.text()], [200, '1, 2', 'hi']);
  for (const [r, method] of [[reply(204, 'x'), 'GET'], [reply(304, 'x'), 'GET'], [reply(200, 'x'), 'HEAD'], [reply(303), 'GET']])
    assert.equal(webReply(r, method).body, null, `${r.status} ${method}`);
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
