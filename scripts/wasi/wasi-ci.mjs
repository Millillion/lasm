// WASI and Fastly CI (.github/workflows/wasi.yml, docs/WASI.md, docs/FETCH.md).
// Builds examples/wasi-cli and examples/fetch from this source checkout and
// checks them on every host:
//   - the command-line program (`--target wasi`) under wasmtime, wasmer and
//     Node's node:wasi, against native Lean (`lean --run`): arguments,
//     environment, files in the preopened directory, standard input, exit
//     statuses, errors, sleeps, Std.Async, tasks, Std.Time;
//   - the Lasm.Fetch handler as a CGI program (`--target wasi`) under the same
//     three engines, served by Spin (wagi executor), as Fastly Compute
//     (`--target fastly`) under Viceroy, and on Node (`lasm build`) and Deno
//     (`--target deno`): routes, bodies, headers, statuses, async waits and errors;
//   - sizes, startup and per-request times, written to WORK/wasi-results.json.
//   node scripts/wasi/wasi-ci.mjs WORK TOOLS [--engines wasmtime,wasmer,node,spin,viceroy,lasm-node,deno]
// TOOLS holds the pinned tools (the workflow installs them): wasmtime/wasmtime,
// wasmer/bin/wasmer, viceroy/viceroy, spin/spin, node_modules/.bin/deno.
// Needs LASM_APPLICATION_RUNTIME and LASM_EDGE_RUNTIME (as scripts/edge/workers-ci.mjs).
import { execFileSync, spawn, spawnSync } from 'node:child_process';
import { cpSync, existsSync, mkdirSync, readFileSync, rmSync, statSync, writeFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { gzipSync } from 'node:zlib';
import assert from 'node:assert/strict';
import { headlessEnvironment } from '../edge/headless.mjs';

const root = resolve(dirname(fileURLToPath(import.meta.url)), '../..');
const argv = process.argv.slice(2);
const option = name => { const i = argv.indexOf(name); return i < 0 ? undefined : argv.splice(i, 2)[1]; };
const engineList = option('--engines');
const [workArg, toolsArg] = argv;
if (!workArg || !toolsArg) { console.error('Usage: node scripts/wasi/wasi-ci.mjs WORK TOOLS [--engines …]'); process.exit(2); }
const work = resolve(workArg), tools = resolve(toolsArg);
const engines = new Set((engineList ?? 'wasmtime,wasmer,node,spin,viceroy,lasm-node,deno,component').split(','));
mkdirSync(work, { recursive: true });
const results = { started: new Date().toISOString(), host: `${process.platform}-${process.arch}`, node: process.version, tools: {}, builds: {}, cli: {}, fetch: {}, failures: [] };
const save = () => writeFileSync(join(work, 'wasi-results.json'), JSON.stringify(results, null, 2) + '\n');
const fail = (where, error) => { results.failures.push({ where, error: String(error?.stack ?? error) }); console.error(`FAIL ${where}: ${error?.message ?? error}`); };

const toolPath = { wasmtime: join(tools, 'wasmtime/wasmtime'), wasmer: join(tools, 'wasmer/bin/wasmer'), viceroy: join(tools, 'viceroy/viceroy'),
  spin: join(tools, 'spin/spin'), deno: join(tools, 'node_modules/.bin/deno') };
for (const [name, path] of Object.entries(toolPath)) {
  if (!existsSync(path)) { if (engines.has(name)) { console.error(`${name} is not installed in ${tools}; skipping it`); engines.delete(name); } continue; }
  try { results.tools[name] = execFileSync(path, ['--version'], { encoding: 'utf8', env: headlessEnvironment() }).trim().split('\n')[0]; } catch { /* reported below */ }
}

// ---- Builds ----
const passed = ['LASM_APPLICATION_RUNTIME', 'LASM_EDGE_RUNTIME', 'LASM_BUILD_JOBS', 'LASM_KEEP_LINK_WORK'].filter(key => process.env[key])
  .map(key => `${key}=${key === 'LASM_BUILD_JOBS' ? process.env[key] : resolve(process.env[key])}`);
const bounded = [join(root, 'scripts/full-lean/run-bounded.mjs'), '--', 'python3', join(root, 'scripts/full-lean/base-pages.py'), 'env', ...passed];
const cli = join(work, 'cli'), fetchApp = join(work, 'fetch');
for (const [from, to] of [['examples/wasi-cli', cli], ['examples/fetch', fetchApp]]) {
  rmSync(to, { recursive: true, force: true });
  cpSync(join(root, from), to, { recursive: true });
}
function lasm(project, args, label) {
  const started = Date.now();
  execFileSync(process.execPath, [...bounded, process.execPath, join(root, 'bin/lasm.mjs'), ...args], { cwd: project, stdio: 'inherit', env: headlessEnvironment() });
  results.builds[label] = { seconds: (Date.now() - started) / 1000 };
}
const sizes = file => { const bytes = readFileSync(file); return { bytes: bytes.length, gzipBytes: gzipSync(bytes, { level: 9 }).length }; };
lasm(cli, ['build', 'Main.lean', '--target', 'wasi'], 'cli-wasi');
Object.assign(results.builds['cli-wasi'], sizes(join(cli, 'wasi/main.wasm')));
lasm(fetchApp, ['build', 'Main.lean', '--target', 'wasi'], 'fetch-wasi');
Object.assign(results.builds['fetch-wasi'], sizes(join(fetchApp, 'wasi/main.wasm')));
lasm(fetchApp, ['build', 'Main.lean', '--target', 'fastly'], 'fetch-fastly');
lasm(fetchApp, ['build', 'Main.lean', '--target', 'wasi-http'], 'fetch-wasi-http');
Object.assign(results.builds['fetch-wasi-http'], sizes(join(fetchApp, 'wasi-http/main.wasm')));
// The shipped component template must still be what wasm-tools makes, and the
// build must equal wasm-tools' own component (scripts/wasi/make-component-template.mjs).
if (engines.has('component')) {
  const { extractCore } = await import(join(root, 'src/wasi/wasi-component.mjs'));
  const coreFile = join(work, 'fetch-core.wasm');
  writeFileSync(coreFile, extractCore(readFileSync(join(fetchApp, 'wasi-http/main.wasm'))));
  try {
    execFileSync(process.execPath, [join(root, 'scripts/wasi/make-component-template.mjs'), '--wasm-tools', join(tools, 'wasm-tools/wasm-tools'),
      '--adapter', join(tools, 'adapter/wasi_snapshot_preview1.proxy.wasm'), coreFile, '--check', join(fetchApp, 'wasi-http/main.wasm')], { stdio: 'inherit' });
    results.builds['fetch-wasi-http'].matchesWasmTools = true;
  } catch (error) { fail('component template', error); }
}
Object.assign(results.builds['fetch-fastly'], sizes(join(fetchApp, 'bin/main.wasm')), { package: statSync(join(fetchApp, 'pkg/lasm-fetch-example.tar.gz')).size });
// An unchanged second build reuses the cached program.
lasm(fetchApp, ['build', 'Main.lean', '--target', 'wasi'], 'fetch-wasi-cached');
if (engines.has('lasm-node')) lasm(fetchApp, ['build', 'Main.lean'], 'fetch-node');
if (engines.has('deno')) lasm(fetchApp, ['build', 'Main.lean', '--target', 'deno'], 'fetch-deno');
save();

// ---- The command-line program ----
const runners = {
  wasmtime: (wasm, args, { env = {} } = {}) => [toolPath.wasmtime, ['run', '--dir', '.', ...Object.entries(env).flatMap(([k, v]) => ['--env', `${k}=${v}`]), wasm, ...args]],
  // wasmer 7.4: --volume=.:/ makes the current directory the guest's root and "." (its --dir . maps "." to a
  // missing /home for preview 1 modules); it rejects empty --env values.
  wasmer: (wasm, args, { env = {} } = {}) => [toolPath.wasmer, ['run', '--volume=.:/', ...Object.entries(env).filter(([, v]) => v !== '').map(([k, v]) => `--env=${k}=${v}`), wasm, '--', ...args]],
  node: (wasm, args) => [process.execPath, [join(root, 'scripts/wasi/node-wasi-run.mjs'), wasm, ...args]],
};
function run(engine, cwd, wasm, args, { env = {}, input } = {}) {
  const [command, commandArgs] = runners[engine](wasm, args, { env });
  const started = performance.now();
  const r = spawnSync(command, commandArgs, { cwd, input, env: { ...headlessEnvironment(), ...(engine === 'node' ? env : {}) }, maxBuffer: 64 << 20, timeout: 120_000 });
  return { status: r.status, stdout: r.stdout ?? Buffer.alloc(0), stderr: (r.stderr ?? Buffer.alloc(0)).toString(), ms: performance.now() - started, error: r.error };
}

// Native Lean for the expected output (lean --run, the interpreter), from Lasm's managed Lean.
const { provisionLean } = await import(join(root, 'src/managed-lean.mjs'));
const lean = await provisionLean(join(cli, 'Main.lean'), {});
const native = (args, { env = {}, input } = {}) => {
  const r = spawnSync(lean.lean, ['--run', 'Main.lean', ...args], { cwd: cli, input, env: { ...process.env, ...env, LEAN_PATH: join(lean.prefix, 'lib/lean') }, maxBuffer: 64 << 20, timeout: 300_000 });
  return { status: r.status, stdout: r.stdout, stderr: r.stderr.toString() };
};
const cliCases = [
  { name: 'check', args: ['check', 'one', 'two words', 'ünïcode'], env: { GREETING: 'hello from the host' } },
  { name: 'sum', args: ['sum'], input: '1\n2\n39\n' },
  { name: 'exit', args: ['exit', '7'] },
  { name: 'fail', args: ['fail'], stderr: /uncaught exception: failing on purpose/ },
  { name: 'deep', args: ['deep', '10000'] },
  { name: 'usage', args: [] },
];
const expected = {};
for (const c of cliCases) expected[c.name] = native(c.args, c);
for (const engine of ['wasmtime', 'wasmer', 'node'].filter(e => engines.has(e))) {
  const out = results.cli[engine] = { cases: {} };
  for (const c of cliCases) {
    try {
      const got = run(engine, cli, 'wasi/main.wasm', c.args, c);
      out.cases[c.name] = { status: got.status, ms: Math.round(got.ms * 10) / 10 };
      assert.equal(got.stdout.toString(), expected[c.name].stdout.toString(), `${engine} ${c.name}: standard output differs from native Lean\n${got.stderr}`);
      assert.equal(got.status, expected[c.name].status, `${engine} ${c.name}: exit status ${got.status}, native ${expected[c.name].status}\n${got.stderr}`);
      if (c.stderr) assert.match(got.stderr, c.stderr);
      if (c.name === 'check') assert.match(got.stderr, /stderr: ok/);
    } catch (error) { fail(`cli ${engine} ${c.name}`, error); }
  }
  // Startup: the full run of a program that exits at once, best of 5.
  const times = [];
  for (let i = 0; i < 5; i++) times.push(run(engine, cli, 'wasi/main.wasm', ['exit', '0']).ms);
  out.startupMs = Math.round(Math.min(...times) * 10) / 10;
  save();
}

// ---- Lasm.Fetch ----
const MiB = 1048576;
// The origin server for outbound requests.
const http = await import('node:http');
const originServer = http.createServer(async (req, res) => {
  const chunks = []; for await (const c of req) chunks.push(c);
  if (req.url.startsWith('/origin/slow')) { await new Promise(r => setTimeout(r, 150)); res.writeHead(200, { 'content-type': 'text/plain' }); res.end('slow'); return; }
  res.writeHead(200, { 'content-type': 'text/plain', 'x-echo-method': req.method });
  res.end(`${req.method}:${Buffer.concat(chunks).toString()}`);
});
await new Promise(r => originServer.listen(3110, '127.0.0.1', r));
const origin = 'http://127.0.0.1:3110';
const bytes = Uint8Array.from({ length: 256 }, (_, i) => i);
// The routes of examples/fetch/Main.lean. `skip` names hosts where a check does not apply.
const routes = [
  { path: '/', status: 200, json: { message: 'Hello from Lean!' }, type: /^application\/json/ },
  { path: '/hello/Ada', json: { message: 'Hello, Ada, from Lean!' } },
  { path: '/hello/J%C3%BCrgen', json: { message: 'Hello, Jürgen, from Lean!' } },
  { path: '/fib/20', json: { fib: 6765 } },
  { path: '/primes/10000', json: { count: 1229 } },
  { path: '/bignum', json: { twoTo200: (2n ** 200n).toString() } },
  { path: '/query?a=1&b=x%20y&c=p+q', json: { a: '1', b: 'x y', c: 'p q' } },
  { path: '/echo', method: 'POST', body: bytes, headers: { 'content-type': 'application/x-lasm-test' }, bytes, type: /^application\/x-lasm-test/ },
  { path: '/words', method: 'POST', body: new TextEncoder().encode('b a b c'), headers: { 'content-type': 'text/plain' }, json: { a: 1, b: 2, c: 1 } },
  { path: '/headers', headers: { 'x-lasm-test': 'abc' }, json: { 'x-lasm-test': 'abc' }, reply: { 'x-lasm-reply': 'from-lean' }, cookies: 2 },
  { path: '/status/418', status: 418, text: 'status 418\n' },
  { path: '/status/201', status: 201, text: 'status 201\n' },
  { path: '/redirect', status: 302, reply: { location: '/hello/redirected' } },
  { path: '/empty', status: 204, text: '' },
  { path: '/asleep/50', json: { sum: 16, waited: true } },
  { path: '/sleep/30', json: { slept: true } },
  { path: '/tasks', json: { total: 140 } },
  { path: '/env/GREETING', json: { value: 'hello from the host' }, skip: ['viceroy', 'wasmtime-serve', 'spin'] },
  { path: '/time', json: { mono: true, random: 8 } },
  { path: '/throw', status: 500, text: 'Internal Server Error\n' },
  { path: '/nope', status: 404, text: 'Not Found\n' },
  { path: '/fastly/stores', json: { color: 'blue', missing: true, secret: 's3cret', greeting: 'hello kv', counter: '41', deleted: true }, only: ['viceroy'] },
  // Streamed bodies (/stream/… requests are read on demand).
  { path: '/stream/out/5', text: Array.from({ length: 5 }, (_, i) => `chunk ${i}\n`).join('') },
  { path: '/stream/in', method: 'POST', body: new Uint8Array(300000).fill(7), headers: { 'content-type': 'application/octet-stream' }, json: { bytes: 300000, chunks: true } },
  { path: '/stream/echo', method: 'POST', body: bytes, headers: { 'content-type': 'application/x-lasm-test' }, bytes },
  // Outbound HTTP (Lasm.Fetch.fetch) to the harness's origin server; WASI preview 1 has no sockets.
  { path: `/outbound?url=${encodeURIComponent(origin + '/origin/echo')}`, json: { status: 200, body: 'POST:ping', echoed: 'POST' }, outbound: true },
  { path: `/outbound-parallel?url=${encodeURIComponent(origin + '/origin/slow')}`, outbound: true,
    check: body => { const r = JSON.parse(body); assert.deepEqual(r.statuses, [200, 200, 200]); assert.ok(r.ms < 400, `three 150 ms requests took ${r.ms} ms`); } },
  { path: `/outbound?url=${encodeURIComponent(origin + '/origin/echo')}&backend=origin`, json: { status: 200, body: 'POST:ping', echoed: 'POST' }, only: ['viceroy'] },
  { path: `/outbound?url=${encodeURIComponent(origin + '/origin/echo')}`, status: 500, text: 'Internal Server Error\n', only: ['cgi-wasmtime', 'cgi-wasmer', 'cgi-node', 'spin-wagi'] },
];
const applies = (host, route) => !(route.skip?.includes(host) || route.only && !route.only.includes(host)
  || route.outbound && ['cgi-wasmtime', 'cgi-wasmer', 'cgi-node', 'spin-wagi'].includes(host));
function checkResponse(host, route, { status, headers, body }) {
  const where = `${host} ${route.method ?? 'GET'} ${route.path}`;
  assert.equal(status, route.status ?? 200, `${where}: status ${status}\n${new TextDecoder().decode(body).slice(0, 2000)}`);
  if (route.json) assert.deepEqual(JSON.parse(new TextDecoder().decode(body)), route.json, where);
  if (route.text !== undefined) assert.equal(new TextDecoder().decode(body), route.text, where);
  if (route.bytes) assert.deepEqual([...body], [...route.bytes], where);
  if (route.check) route.check(new TextDecoder().decode(body));
  if (route.type) assert.match(headers.get('content-type') ?? '', route.type, `${where}: content-type`);
  for (const [k, v] of Object.entries(route.reply ?? {})) assert.equal(headers.get(k), v, `${where}: header ${k}`);
  // Spin's wagi executor keeps one value per header name (crates/http/src/wagi).
  if (route.cookies) assert.equal(headers.getSetCookie().length, host === 'spin-wagi' ? 1 : route.cookies, `${where}: set-cookie`);
}

// CGI under the three engines: one run per request.
function cgi(engine, route) {
  const url = new URL(route.path, 'http://localhost:8080');
  const env = { REQUEST_METHOD: route.method ?? 'GET', X_FULL_URL: url.href, SERVER_NAME: 'localhost', SERVER_PORT: '8080',
    PATH_INFO: url.pathname, QUERY_STRING: url.search.slice(1), GREETING: 'hello from the host', HTTP_HOST: 'localhost:8080' };
  for (const [k, v] of Object.entries(route.headers ?? {})) env[k === 'content-type' ? 'CONTENT_TYPE' : 'HTTP_' + k.toUpperCase().replaceAll('-', '_')] = v;
  if (route.body) env.CONTENT_LENGTH = String(route.body.length);
  const got = run(engine, fetchApp, 'wasi/main.wasm', [], { env, input: route.body ? Buffer.from(route.body) : '' });
  if (got.status !== 0) throw new Error(`${engine} CGI ${route.path}: exit ${got.status}: ${got.stderr}`);
  const out = got.stdout, split = out.indexOf('\r\n\r\n');
  if (split < 0) throw new Error(`${engine} CGI ${route.path}: no CGI header block`);
  const headers = new Headers();
  let status = 200;
  for (const line of out.subarray(0, split).toString().split('\r\n')) {
    const colon = line.indexOf(':'), name = line.slice(0, colon).trim(), value = line.slice(colon + 1).trim();
    if (name.toLowerCase() === 'status') status = Number(value.split(' ')[0]);
    else headers.append(name, value);
  }
  return { status, headers, body: new Uint8Array(out.subarray(split + 4)), ms: got.ms };
}
for (const engine of ['wasmtime', 'wasmer', 'node'].filter(e => engines.has(e))) {
  const out = results.fetch[`cgi-${engine}`] = { passed: 0 };
  for (const route of routes) {
    if (!applies(`cgi-${engine}`, route)) continue;
    try { checkResponse(`cgi-${engine}`, route, cgi(engine, route)); out.passed++; } catch (error) { fail(`fetch cgi-${engine} ${route.path}`, error); }
  }
  try {
    const times = [];
    for (let i = 0; i < 10; i++) times.push(cgi(engine, routes[0]).ms);
    out.perRequestMs = { min: Math.round(Math.min(...times) * 10) / 10, mean: Math.round(times.reduce((a, b) => a + b) / times.length * 10) / 10 };
  } catch (error) { fail(`fetch cgi-${engine} timing`, error); }
  save();
}

// HTTP servers: Spin (wagi), Viceroy (Fastly), Node, Deno.
async function serveAndCheck(name, command, args, { cwd, port, env = {}, skipHead = false }) {
  const out = results.fetch[name] = { passed: 0 };
  const started = performance.now();
  const child = spawn(command, args, { cwd, env: { ...headlessEnvironment(), ...env }, stdio: ['ignore', 'pipe', 'pipe'] });
  let log = '';
  child.stdout.on('data', d => { log += d; }); child.stderr.on('data', d => { log += d; });
  const base = `http://127.0.0.1:${port}`;
  try {
    for (let ready = false; !ready;) {
      if (child.exitCode !== null) throw new Error(`${name} exited (${child.exitCode}):\n${log}`);
      if (performance.now() - started > 120_000) throw new Error(`${name} did not start:\n${log}`);
      try { await fetch(base + '/', { signal: AbortSignal.timeout(2000) }); ready = true; } catch { await new Promise(r => setTimeout(r, 200)); }
    }
    out.readyMs = Math.round(performance.now() - started);
    const request = async route => {
      const response = await fetch(base + route.path, { method: route.method ?? 'GET', headers: route.headers, body: route.body, redirect: 'manual' });
      return { status: response.status, headers: response.headers, body: new Uint8Array(await response.arrayBuffer()) };
    };
    for (const route of routes) {
      if (!applies(name, route)) continue;
      try { checkResponse(name, route, await request(route)); out.passed++; } catch (error) { fail(`fetch ${name} ${route.path}`, error); }
    }
    if (!skipHead) {
      try {
        const response = await fetch(base + '/', { method: 'HEAD' });
        assert.equal(response.status, 200); assert.equal((await response.arrayBuffer()).byteLength, 0); out.passed++;
      } catch (error) { fail(`fetch ${name} HEAD /`, error); }
    }
    // A streamed response arrives in pieces: the first chunk well before the last
    // (Spin's wagi executor collects a CGI program's whole output first).
    if (name !== 'spin-wagi') {
      try {
        const t0 = performance.now();
        const reader = (await fetch(base + '/stream/out/40')).body.getReader();
        let first, text = '';
        for (;;) { const { done, value } = await reader.read(); if (done) break; first ??= performance.now() - t0; text += new TextDecoder().decode(value); }
        const total = performance.now() - t0;
        out.streamFirstChunkMs = Math.round(first); out.streamTotalMs = Math.round(total);
        assert.equal(text.split('\n').length, 41, `${name}: streamed body`);
        assert.ok(first < total - 100, `${name}: the first chunk came after ${Math.round(first)} of ${Math.round(total)} ms`);
        out.passed++;
      } catch (error) { fail(`fetch ${name} streaming`, error); }
    }
    // Per request: 50 sequential GET /; 20 concurrent waits of 200 ms.
    const times = [];
    for (let i = 0; i < 50; i++) { const t = performance.now(); await (await fetch(base + '/')).arrayBuffer(); times.push(performance.now() - t); }
    times.sort((a, b) => a - b);
    out.perRequestMs = { median: Math.round(times[25] * 100) / 100, p90: Math.round(times[45] * 100) / 100, min: Math.round(times[0] * 100) / 100 };
    const t = performance.now();
    const all = await Promise.all(Array.from({ length: 20 }, () => fetch(base + '/asleep/200').then(r => r.json())));
    out.concurrentAsleep200Ms = Math.round(performance.now() - t);
    assert.ok(all.every(r => r.sum === 16), `${name}: concurrent waits`);
  } catch (error) { fail(`fetch ${name}`, error); }
  finally {
    child.kill('SIGTERM');
    await new Promise(r => setTimeout(r, 500));
    if (child.exitCode === null) child.kill('SIGKILL');
    out.log = log.slice(-4000);
    save();
  }
}
if (engines.has('spin')) {
  // Spin's HTTP trigger with the wasi-http component, and its wagi executor with the CGI build.
  const spinToml = (source, executor) => `spin_manifest_version = 2

[application]
name = "lasm-fetch"
version = "0.1.0"

[[trigger.http]]
route = "/..."
component = "lasm"
${executor}
[component.lasm]
source = "${source}"
environment = { GREETING = "hello from the host" }
allowed_outbound_hosts = ["${origin}"]
`;
  writeFileSync(join(fetchApp, 'spin.toml'), spinToml('wasi-http/main.wasm', ''));
  await serveAndCheck('spin', toolPath.spin, ['up', '--listen', '127.0.0.1:3101'], { cwd: fetchApp, port: 3101, env: { SPIN_HOME: join(work, 'spin-home') } });
  writeFileSync(join(fetchApp, 'spin.toml'), spinToml('wasi/main.wasm', 'executor = { type = "wagi" }\n'));
  await serveAndCheck('spin-wagi', toolPath.spin, ['up', '--listen', '127.0.0.1:3106'], { cwd: fetchApp, port: 3106, env: { SPIN_HOME: join(work, 'spin-home') } });
}
if (engines.has('wasmtime'))
  await serveAndCheck('wasmtime-serve', toolPath.wasmtime, ['serve', '--addr', '127.0.0.1:3105', 'wasi-http/main.wasm'], { cwd: fetchApp, port: 3105 });
if (engines.has('viceroy')) {
  // A named backend for FetchOptions.backend (Fastly services name theirs).
  writeFileSync(join(fetchApp, 'fastly.toml'), readFileSync(join(fetchApp, 'fastly.toml'), 'utf8')
    + `\n[local_server]\n  [local_server.backends]\n    [local_server.backends.origin]\n      url = "${origin}"\n`
    + `  [local_server.config_stores]\n    [local_server.config_stores.settings]\n      format = "inline-toml"\n    [local_server.config_stores.settings.contents]\n      color = "blue"\n`
    + `  [local_server.secret_stores]\n    [[local_server.secret_stores.secrets]]\n      key = "token"\n      data = "s3cret"\n`
    + `  [local_server.kv_stores]\n    [[local_server.kv_stores.kv]]\n      key = "greeting"\n      data = "hello kv"\n`);
}
if (engines.has('viceroy'))
  await serveAndCheck('viceroy', toolPath.viceroy, ['serve', '--addr', '127.0.0.1:3102', '-C', 'fastly.toml', 'bin/main.wasm'], { cwd: fetchApp, port: 3102 });
if (engines.has('lasm-node'))
  await serveAndCheck('lasm-node', process.execPath, ['dist/main.mjs'], { cwd: fetchApp, port: 3103, env: { PORT: '3103', HOST: '127.0.0.1', GREETING: 'hello from the host' } });
if (engines.has('deno'))
  await serveAndCheck('deno', toolPath.deno, ['run', '-A', 'deno/main.mjs'], { cwd: fetchApp, port: 3104, env: { PORT: '3104', GREETING: 'hello from the host' } });

originServer.close();
results.finished = new Date().toISOString();
save();
console.log(JSON.stringify({ builds: results.builds, cli: Object.fromEntries(Object.entries(results.cli).map(([k, v]) => [k, v.startupMs])),
  fetch: Object.fromEntries(Object.entries(results.fetch).map(([k, v]) => [k, { passed: v.passed, perRequestMs: v.perRequestMs, readyMs: v.readyMs }])) }, null, 1));
if (results.failures.length) { console.error(`${results.failures.length} failures`); process.exit(1); }
console.log('All WASI and Fastly checks passed.');
