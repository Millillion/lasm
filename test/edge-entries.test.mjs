// The generated entry modules of the edge targets (src/edge/edge-build.mjs),
// run here as each platform runs them: written beside a stand-in program and
// host (lasm/program.mjs, lasm/edge-start.mjs), with the platform's imports
// (cloudflare:workers, .wasm modules) and globals (Deno, Bun, Netlify) played
// by stand-ins. The real entries run in .github/workflows/workers.yml and the
// platform workflows.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdirSync, mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { pathToFileURL } from 'node:url';
import { registerHooks } from 'node:module';
import { workersEntry, vercelEdgeEntry, netlifyEdgeEntry, portableEntry, supabaseEntry } from '../src/edge/edge-build.mjs';

registerHooks({
  resolve(specifier, context, next) {
    if (specifier === 'cloudflare:workers' || specifier.startsWith('lasm-test-module:')) return { url: 'lasm-stand-in:' + specifier, shortCircuit: true };
    return next(specifier, context);
  },
  load(url, context, next) {
    if (url === 'lasm-stand-in:cloudflare:workers') return { format: 'module', shortCircuit: true, source: 'export const env = globalThis.__lasmBindings;' };
    if (url.startsWith('lasm-stand-in:lasm-test-module:')) return { format: 'module', shortCircuit: true, source: `export const name = ${JSON.stringify(url.slice(url.lastIndexOf(':') + 1))};` };
    if (/\.wasm(\?module)?$/.test(url)) return { format: 'module', shortCircuit: true, source: 'export default globalThis.__lasmWasmModule;' };
    return next(url, context);
  },
});

const root = mkdtempSync(join(tmpdir(), 'lasm-edge-entries-'));
test.after(() => rmSync(root, { recursive: true, force: true }));
const wasm = Uint8Array.of(0, 0x61, 0x73, 0x6d, 1, 0, 0, 0);
let entries = 0;
/** Writes `entry` at `path` in a fresh directory with the stand-in program under `lasm`; returns its URL. */
function place(entry, { path = 'entry.mjs', lasm = 'lasm' } = {}) {
  const directory = join(root, String(++entries));
  mkdirSync(join(directory, lasm, 'modules'), { recursive: true });
  mkdirSync(join(directory, path, '..'), { recursive: true });
  writeFileSync(join(directory, lasm, 'program.mjs'), 'export default function createProgram() {}\n');
  writeFileSync(join(directory, lasm, 'program.wasm'), wasm);
  writeFileSync(join(directory, lasm, 'program.wasm.mjs'), `export default Uint8Array.of(${[...wasm]});\n`);
  writeFileSync(join(directory, lasm, 'modules', 'web.mjs'), 'export const web = true;\n');
  writeFileSync(join(directory, lasm, 'edge-start.mjs'), 'export const startLean = (...args) => globalThis.__lasmStart(...args);\n');
  writeFileSync(join(directory, path), entry);
  return pathToFileURL(join(directory, path)).href;
}
/** startLean stand-in: each start publishes `handler` (or none) and can be stopped. */
function lean({ handler, fail, exitCode } = {}) {
  const starts = [];
  globalThis.__lasmStart = async options => {
    starts.push(options);
    if (fail) throw new Error(fail);
    const instance = { lasmEdge: { stopped: null }, lasmExitCode: exitCode };
    if (handler !== undefined) globalThis.__lasmDefaultExport = typeof handler === 'function' && handler.length === 0 ? handler() : handler;
    return instance;
  };
  return starts;
}

test('workers: Lean starts once per isolate with the string bindings, and the handler serves requests', async () => {
  globalThis.__lasmBindings = { GREETING: 'hello', KV: { get() {} }, COUNT: 3 };
  globalThis.__lasmWasmModule = 'compiled module';
  const seen = [];
  const starts = lean({ handler: (request, env, ctx) => { seen.push([request.url, env, ctx]); return new Response('fn'); } });
  globalThis.__lasmDefaultExport = 'stale';
  const worker = (await import(place(workersEntry(['lasm-test-module:a', 'lasm:web'])))).default;
  assert.equal(starts.length, 1);
  assert.equal(starts[0].wasmModule, 'compiled module');
  assert.equal(typeof starts[0].createProgram, 'function');
  assert.deepEqual(starts[0].env, { GREETING: 'hello' });
  assert.deepEqual(Object.keys(starts[0].modules), ['lasm-test-module:a', 'lasm:web']);
  assert.equal(starts[0].modules['lasm-test-module:a'].name, 'a');
  assert.equal(starts[0].modules['lasm:web'].web, true, 'builtins from lasm/modules/');
  const env = { GREETING: 'per request' }, ctx = { waitUntil() {} };
  assert.equal(await (await worker.fetch(new Request('http://x/a'), env, ctx)).text(), 'fn');
  assert.deepEqual(seen, [['http://x/a', env, ctx]]);
  assert.equal(starts.length, 1);
});

test('workers: an object handler\'s fetch, a stopped instance replaced, and a program without a handler', async () => {
  globalThis.__lasmBindings = {};
  const instances = [];
  const starts = [];
  globalThis.__lasmStart = async options => {
    starts.push(options);
    const instance = { lasmEdge: { stopped: null } };
    instances.push(instance);
    globalThis.__lasmDefaultExport = { fetch: (request, env, ctx) => new Response(`object ${starts.length} ${env.n} ${ctx.c}`) };
    return instance;
  };
  const worker = (await import(place(workersEntry([])))).default;
  assert.equal(await (await worker.fetch(new Request('http://x/'), { n: 1 }, { c: 2 })).text(), 'object 1 1 2');
  instances[0].lasmEdge.stopped = new Error('stack exhausted');
  assert.equal(await (await worker.fetch(new Request('http://x/'), { n: 1 }, { c: 2 })).text(), 'object 2 1 2');
  assert.equal(await (await worker.fetch(new Request('http://x/'), { n: 1 }, { c: 2 })).text(), 'object 2 1 2', 'the new instance is kept');
  assert.deepEqual(starts[0].modules, {});
  // No handler: the isolate fails to start, saying why.
  lean({});
  delete globalThis.__lasmDefaultExport;
  await assert.rejects(import(place(workersEntry([]))), { message: 'The Lean program did not call Lasm.JS.exportDefault: nothing handles requests' });
});

test('vercel-edge: lazy start with the process environment; Accept-Encoding never reaches the handler', async () => {
  globalThis.__lasmWasmModule = 'vercel module';
  const original = process.env;
  process.env = { ...original, VERCEL_VALUE: 'v' };
  try {
    const seen = [];
    const starts = lean({ handler: (request, env, context) => { seen.push([request.headers.get('accept-encoding'), request.headers.get('x-kept'), env.VERCEL_VALUE, context]); return new Response('ok'); } });
    const mod = await import(place(vercelEdgeEntry(['lasm:web']), { path: 'api/lasm.mjs', lasm: 'api/_lasm/lasm' }));
    assert.deepEqual(mod.config, { runtime: 'edge' });
    await new Promise(resolve => setTimeout(resolve, 0));
    assert.equal(starts.length, 1, 'started when the module is evaluated');
    assert.equal(starts[0].wasmModule, 'vercel module');
    assert.equal(starts[0].env.VERCEL_VALUE, 'v');
    assert.ok(Object.values(starts[0].env).every(value => typeof value === 'string'));
    assert.equal(starts[0].modules['lasm:web'].web, true);
    const context = { geo: {} };
    await mod.default(new Request('http://x/', { headers: { 'accept-encoding': 'br', 'x-kept': 'yes' } }), context);
    await mod.default(new Request('http://x/', { headers: { 'x-kept': 'plain' } }), context);
    assert.deepEqual(seen, [[null, 'yes', 'v', context], [null, 'plain', 'v', context]]);
  } finally { process.env = original; }
});

test('vercel-edge and netlify-edge: a failed first start is retried by the next request; a stopped instance is replaced', async () => {
  let attempts = 0;
  const instances = [];
  globalThis.__lasmStart = async () => {
    attempts++;
    if (attempts === 1) throw new Error('first start failed');
    const instance = { lasmEdge: { stopped: null } };
    instances.push(instance);
    globalThis.__lasmDefaultExport = { fetch: () => new Response('object ' + attempts) };
    return instance;
  };
  const mod = await import(place(netlifyEdgeEntry([]), { path: 'netlify/edge-functions/lasm.mjs', lasm: 'netlify/lasm/lasm' }));
  assert.deepEqual(mod.config, { path: '/*' });
  await assert.rejects(mod.default(new Request('http://x/'), {}), /first start failed/);
  // The failed start is the current one until an instance stops: the platform restarts the isolate.
  await assert.rejects(mod.default(new Request('http://x/'), {}), /first start failed/);
  assert.equal(attempts, 1);
  // Netlify's environment, when it has one.
  globalThis.Netlify = { env: { toObject: () => ({ SITE: 'netlify' }) } };
  const seen = [];
  globalThis.__lasmStart = async options => { seen.push(options); const instance = { lasmEdge: { stopped: null } }; instances.push(instance);
    globalThis.__lasmDefaultExport = (request, env, context) => new Response(`${env.SITE} ${context.site}`); return instance; };
  try {
    const netlify = await import(place(netlifyEdgeEntry([]), { path: 'netlify/edge-functions/lasm.mjs', lasm: 'netlify/lasm/lasm' }));
    assert.equal(await (await netlify.default(new Request('http://x/'), { site: 's' })).text(), 'netlify s');
    assert.deepEqual(seen[0].env, { SITE: 'netlify' });
    assert.ok(seen[0].wasmModule instanceof WebAssembly.Module, 'compiled from the inlined bytes');
    instances.at(-1).lasmEdge.stopped = new Error('stopped');
    assert.equal(await (await netlify.default(new Request('http://x/'), { site: 't' })).text(), 'netlify t');
    assert.equal(seen.length, 2);
  } finally { delete globalThis.Netlify; }
  // Without Netlify's globals: an empty environment.
  const empty = [];
  globalThis.__lasmStart = async options => { empty.push(options); globalThis.__lasmDefaultExport = () => new Response('x'); return { lasmEdge: { stopped: null } }; };
  const bare = await import(place(netlifyEdgeEntry([]), { path: 'netlify/edge-functions/lasm.mjs', lasm: 'netlify/lasm/lasm' }));
  await bare.default(new Request('http://x/'), {});
  assert.deepEqual(empty[0].env, {});
  // No handler: requests fail saying why.
  globalThis.__lasmStart = async () => { delete globalThis.__lasmDefaultExport; return { lasmEdge: { stopped: null } }; };
  const none = await import(place(vercelEdgeEntry([]), { path: 'api/lasm.mjs', lasm: 'api/_lasm/lasm' }));
  await assert.rejects(none.default(new Request('http://x/'), {}), { message: 'The Lean program did not call Lasm.JS.exportDefault: nothing handles requests' });
});

/** Runs a portable entry with Deno (or Bun, or neither) stood in. */
async function portable(target, { deno, bun, start, modules = [] } = {}) {
  const exits = [];
  const exit = process.exit;
  process.exit = code => { exits.push(code); };
  if (deno) globalThis.Deno = deno;
  if (bun) globalThis.Bun = bun;
  globalThis.__lasmStart = start;
  try { await import(place(portableEntry(target, modules))); }
  catch (error) { return { exits, error }; }
  finally { process.exit = exit; delete globalThis.Deno; delete globalThis.Bun; }
  return { exits };
}

test('bun and deno: main runs with the arguments and environment; its result is the exit code', async () => {
  const starts = [];
  const deno = { env: { toObject: () => ({ A: '1' }) }, args: ['x', 'y'], exit: code => { deno.exited = code; } };
  const run = await portable('deno', { deno, start: async options => { starts.push(options); delete globalThis.__lasmDefaultExport; return { lasmEdge: { stopped: null }, lasmExitCode: 300 }; } });
  assert.deepEqual(run.exits, []);
  assert.equal(deno.exited, 300 & 255);
  assert.deepEqual(starts[0].env, { A: '1' });
  assert.deepEqual(starts[0].args, ['x', 'y']);
  starts[0].exit(4);
  assert.equal(deno.exited, 4, 'exit is Deno.exit');
  assert.ok(starts[0].wasmModule instanceof WebAssembly.Module);
  assert.deepEqual(Object.keys(starts[0].writers), ['1', '2']);
  starts[0].writers[2](new Uint8Array(0));
  // Without Deno: Node's process (as Bun has it).
  const node = [];
  const plain = await portable('bun', { start: async options => { node.push(options); return { lasmEdge: { stopped: null } }; } });
  assert.deepEqual(plain.exits, [0], 'no exit code: 0');
  assert.deepEqual(node[0].args, process.argv.slice(2));
  assert.ok(Object.values(node[0].env).every(value => typeof value === 'string'));
  // A failed start prints the reason and exits with 1.
  const errors = [];
  const original = console.error;
  console.error = text => errors.push(text);
  try {
    const failed = await portable('deno-deploy', { deno: { ...deno, exit: code => errors.push(['exit', code]) }, start: async () => { throw new Error('no memory'); } });
    assert.deepEqual(errors.slice(0, 2), ['no memory', ['exit', 1]]);
    assert.ok(failed.error, 'nothing to serve after a failed start');
  } finally { console.error = original; }
});

test('bun and deno: a published handler is served with Bun.serve or Deno.serve on PORT, and a stopped instance is replaced', async () => {
  const served = [];
  const instances = [];
  const start = async () => { const instance = { lasmEdge: { stopped: null } }; instances.push(instance);
    globalThis.__lasmDefaultExport = (request, env, info) => new Response(`${instances.length} ${env.PORT} ${info.remote}`); return instance; };
  const deno = { env: { toObject: () => ({ PORT: '8123' }) }, args: [], exit: () => assert.fail('exit'), serve: (options, handler) => served.push([options, handler]) };
  await portable('deno', { deno, start });
  assert.deepEqual(served[0][0], { port: 8123 });
  assert.equal(await (await served[0][1](new Request('http://x/'), { remote: 'r' })).text(), '1 8123 r');
  instances[0].lasmEdge.stopped = new Error('stopped');
  const [a, b] = await Promise.all([served[0][1](new Request('http://x/'), { remote: 'r' }), served[0][1](new Request('http://x/'), { remote: 'r' })]);
  assert.deepEqual([await a.text(), await b.text()], ['2 8123 r', '2 8123 r'], 'one restart for concurrent requests');
  assert.equal(instances.length, 2);
  // Deno without PORT: its default.
  served.length = 0;
  await portable('deno', { deno: { ...deno, env: { toObject: () => ({}) } }, start });
  assert.deepEqual(served[0][0], {});
  // Bun: PORT or 3000, and the listening address.
  const bun = [];
  const logs = [];
  const original = console.error;
  console.error = text => logs.push(text);
  try {
    const process_ = process.env.PORT;
    delete process.env.PORT;
    await portable('bun', { bun: { serve: options => { bun.push(options); return { url: 'http://localhost:3000/' }; } }, start });
    if (process_ !== undefined) process.env.PORT = process_;
  } finally { console.error = original; }
  assert.equal(bun[0].port, 3000);
  assert.deepEqual(logs, ['Listening on http://localhost:3000/']);
  const response = await bun[0].fetch(new Request('http://x/'), { remote: 'bun' });
  assert.match(await response.text(), /bun$/);
  // Neither Bun nor Deno: a handler cannot be served.
  const neither = await portable('bun', { start });
  assert.match(neither.error.message, /Serving a Lasm.JS handler needs Bun or Deno; on Node, build with lasm build --target node/);
});

test('supabase-edge: the import map and the Deno environment', async () => {
  const served = [];
  const starts = [];
  globalThis.Deno = { env: { toObject: () => ({ SUPABASE_URL: 'u' }) }, serve: handler => served.push(handler) };
  globalThis.__lasmStart = async options => { starts.push(options); globalThis.__lasmDefaultExport = { fetch: (request, env) => new Response(`${new URL(request.url).pathname} ${env.SUPABASE_URL}`) }; return { lasmEdge: { stopped: null } }; };
  try {
    await import(place(supabaseEntry(['lasm-test-module:b'], 'fn-name'), { path: 'index.mjs' }));
    assert.equal(await (await served[0](new Request('http://x/fn-name/p'), {})).text(), '/p u');
    assert.equal(starts[0].modules['lasm-test-module:b'].name, 'b');
    assert.ok(starts[0].wasmModule instanceof WebAssembly.Module);
  } finally { delete globalThis.Deno; }
});
