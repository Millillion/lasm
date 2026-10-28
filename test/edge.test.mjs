// Phase 7 edge build (docs/EDGE.md): the pure-JS host, the module list and the
// generated Worker entry. The Wasm program itself is tested by workers.yml.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, writeFileSync, mkdirSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createEdgeRuntimeHost } from '../src/edge/edge-host.mjs';
import { edgeModules, workersEntry, workersConfig, edgeTargets, vercelEdgeEntry, netlifyEdgeEntry, portableEntry, inlineWasmModule,
  supabaseEntry, supabaseImportMap, supabaseFunctionName, edgeTargetSuspend, edgeProgramKey } from '../src/edge/edge-build.mjs';
import { edgeRecipe, edgeRecipeMode, edgeSuspendModes } from '../src/edge/edge-link.mjs';
import { edgeBuildTargets } from '../src/cli-arguments.mjs';

const encoder = new TextEncoder(), decoder = new TextDecoder();
const u64 = (bytes, i = 0) => new DataView(bytes.buffer, bytes.byteOffset).getBigUint64(i * 8, true);
const call = (host, op, handle = 0, arg = 0n, text = '') => host.request(op, handle, arg, typeof text === 'string' ? encoder.encode(text) : text);

test('edge host: read-only files with the bundled UTC zone', () => {
  const host = createEdgeRuntimeHost({ stdout: () => {} });
  const opened = call(host, 1, 0, 0n, '/etc/localtime');
  assert.equal(opened.error, false);
  const id = Number(u64(opened.bytes));
  const zone = call(host, 2, id, 4096n).bytes;
  assert.equal(decoder.decode(zone.subarray(0, 4)), 'TZif');
  assert.equal(call(host, 2, id, 4096n).bytes.length, 0, 'end of file');
  assert.equal(u64(call(host, 10, 0, 0n, '/usr/share/zoneinfo/UTC').bytes, 4), 114n, 'size');
  assert.equal(u64(call(host, 10, 0, 0n, '/usr/share/zoneinfo').bytes, 6), 0n, 'a directory');
  assert.deepEqual(decoder.decode(call(host, 13, 0, 0n, '/usr/share/zoneinfo').bytes).split('\0').filter(Boolean).sort(), ['Etc', 'UTC']);
  const missing = call(host, 1, 0, 0n, '/etc/passwd');
  assert.equal(missing.error, true);
  assert.equal(u64(missing.bytes), 1n, 'ENOENT kind');
  assert.equal(call(host, 1, 0, 1n, '/tmp/x').error, true, 'writes are refused');
  assert.equal(call(host, 14, 0, 0n, '/tmp').error, true, 'no directories are created');
});

test('edge host: output lines, env, clocks, random bytes and unavailable operations', () => {
  const lines = [];
  const host = createEdgeRuntimeHost({ env: { GREETING: 'hi' }, stdout: line => lines.push(line) });
  call(host, 3, 1, 0n, 'one\ntw'); call(host, 3, 1, 0n, 'o\nthree');
  assert.deepEqual(lines, ['one', 'two']);
  host.flush();
  assert.deepEqual(lines, ['one', 'two', 'three']);
  assert.equal(decoder.decode(call(host, 22, 0, 0n, 'GREETING').bytes.subarray(1)), 'hi');
  assert.equal(call(host, 22, 0, 0n, 'MISSING').bytes.length, 0);
  assert.ok(u64(call(host, 27).bytes) > 1_700_000_000n, 'wall clock seconds');
  assert.equal(call(host, 28, 0, 32n).bytes.length, 32);
  const process = call(host, 80);
  assert.equal(process.error, true);
  assert.match(decoder.decode(process.bytes.subarray(16)), /Processes is not available in the Lasm edge profile/);
});

test('edge host: Lasm.JS tells Lean it runs on the edge (op 200)', () => {
  const host = createEdgeRuntimeHost({ stdout: () => {} });
  const reply = call(host, 200, 0, 0n, new Uint8Array(4)).bytes;
  assert.deepEqual([...new Uint32Array(reply.slice().buffer)], [1, 1]);
});

test('edge modules: bindings plus configuration, minus Node-only modules', () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-edge-'));
  writeFileSync(join(directory, 'package.json'), JSON.stringify({ lasm: { edge: { modules: ['jose'], exclude: ['@hono/node-server'] } } }));
  const bindings = [{ module: 'hono' }, { module: '@hono/node-server' }, { module: 'globalThis' }];
  assert.deepEqual(edgeModules(directory, bindings), ['hono', 'jose']);
  writeFileSync(join(directory, 'package.json'), JSON.stringify({ lasm: { edge: { modules: 'jose' } } }));
  assert.throws(() => edgeModules(directory, []), /must be an array/);
});

test('generated Worker entry and configuration', () => {
  const entry = workersEntry(['hono', '@scope/x']);
  assert.match(entry, /import \* as m0 from "hono";\nimport \* as m1 from "@scope\/x";/);
  assert.match(entry, /const modules = \{ "hono": m0, "@scope\/x": m1 \};/);
  assert.match(entry, /from 'cloudflare:workers'/);
  assert.match(entry, /lasmEdge\.stopped/);
  const config = workersConfig('my-app');
  assert.match(config, /main = "worker.mjs"/);
  assert.match(config, /type = "CompiledWasm"/);
});

test('edge runtime: the cataloged archive is provisioned, verified and used', async t => {
  const { edgeRuntime, edgeRuntimeCatalog } = await import('../src/edge/edge-runtime.mjs');
  const archive = process.env.LASM_TEST_EDGE_ARCHIVE;
  if (!archive) return t.skip('LASM_TEST_EDGE_ARCHIVE names the packaged archive (scripts/edge/package-edge-runtime.mjs)');
  const { readFileSync } = await import('node:fs');
  // The archive's own description (CI: the one just packaged), else the catalog's.
  const described = process.env.LASM_TEST_EDGE_ARTIFACT ? JSON.parse(readFileSync(process.env.LASM_TEST_EDGE_ARTIFACT, 'utf8')) : {};
  const artifact = { ...edgeRuntimeCatalog.lean['4.36.0-rc2'], ...described };
  const catalog = { lean: { '4.35.0': artifact } };
  const cache = mkdtempSync(join(tmpdir(), 'lasm-edge-cache-'));
  let requested;
  const fetch = async url => { requested = String(url); return new Response(readFileSync(archive)); };
  const nodeRuntime = { identity: artifact.baseRuntimeManifestSha256, manifest: { lean: '4.35.0', name: 'lean-4.36.0-rc2-wasm64' } };
  const edge = await edgeRuntime(nodeRuntime, { directory: undefined, catalog, cache, fetch, log: () => {} });
  assert.equal(requested, artifact.url);
  assert.deepEqual(Object.keys(edge.libraries).sort(), ['liblasmhost.a', 'liblasmjsedge.a', 'libleancpp.a', 'libleanrt.a']);
  assert.ok(edge.sysroot && edge.libraries['liblasmjsedge.a'], 'the system libraries and the glue for the Node link driver');
  await assert.rejects(edgeRuntime({ ...nodeRuntime, identity: '0'.repeat(64) }, { directory: undefined, catalog, cache, fetch }), /another runtime build/);
});

test('edge targets: the CLI list, and the Vercel, Netlify, Bun and Deno entries', async () => {
  assert.deepEqual(edgeBuildTargets, Object.keys(edgeTargets));
  const vercel = vercelEdgeEntry(['hono']);
  assert.match(vercel, /export const config = \{ runtime: 'edge' \};/);
  assert.match(vercel, /from '\.\/_lasm\/lasm\/program\.wasm\?module'/);
  assert.match(vercel, /^\/\/ Generated by Lasm \(lasm build --target vercel-edge\)/);
  const netlify = netlifyEdgeEntry([]);
  assert.match(netlify, /export const config = \{ path: '\/\*' \};/);
  assert.match(netlify, /WebAssembly\.compile\(wasmBytes\)/);
  const deno = portableEntry('deno-deploy', ['hono']);
  assert.match(deno, /readFile\(new URL\('\.\/lasm\/program\.wasm', import\.meta\.url\)\)/);
  assert.match(deno, /deno\.serve\(env\.PORT \? \{ port: Number\(env\.PORT\) \} : \{\}/);
  assert.match(deno, /import \* as m0 from "hono";/);
  assert.match(portableEntry('bun', []), /^\/\/ Generated by Lasm \(lasm build --target bun\)[^]*Bun\.serve/);
  const bytes = Uint8Array.of(0, 97, 115, 109, 1, 0, 0, 0, 255);
  const file = join(mkdtempSync(join(tmpdir(), 'lasm-inline-')), 'w.mjs');
  writeFileSync(file, inlineWasmModule(bytes));
  assert.deepEqual([...(await import(file)).default], [...bytes]);
});

test('supabase-edge: function directory, entry, pinned import map and Asyncify', async () => {
  const project = mkdtempSync(join(tmpdir(), 'lasm-supabase-'));
  writeFileSync(join(project, 'package.json'), JSON.stringify({ name: '@me/My_App' }));
  assert.equal(supabaseFunctionName(project), 'my-app');
  writeFileSync(join(project, 'package.json'), JSON.stringify({ name: '9lives' }));
  assert.equal(supabaseFunctionName(project), 'lasm-9lives');
  assert.equal(edgeTargets['supabase-edge'].output(project), 'supabase/functions/lasm-9lives');
  assert.equal(edgeTargets['supabase-edge'].inlineWasm, true);
  // Supabase's runtime has no JSPI: the target links with Asyncify; the others with JSPI.
  assert.equal(edgeTargetSuspend('supabase-edge'), 'asyncify');
  assert.equal(edgeTargetSuspend('workers'), 'jspi');
  assert.deepEqual(edgeSuspendModes, ['jspi', 'asyncify', 'none']);
  assert.equal(edgeRecipeMode('jspi'), 'edge');
  assert.equal(edgeRecipeMode('asyncify'), 'edge-asyncify');
  assert.ok(edgeRecipe().link.modes.edge, 'the JSPI recording');
  const result = { signature: 'node-build' }, edge = { identity: 'edge' };
  assert.notEqual(edgeProgramKey({ result, edge, suspend: 'jspi' }), edgeProgramKey({ result, edge, suspend: 'asyncify' }), 'cached apart');

  const entry = supabaseEntry(['hono'], 'my-app');
  assert.match(entry, /^\/\/ Generated by Lasm \(lasm build --target supabase-edge\)/);
  assert.match(entry, /import wasmBytes from '\.\/lasm\/program\.wasm\.mjs';/);
  assert.match(entry, /import \* as m0 from "hono";/);
  assert.match(entry, /const prefix = "\/my-app";/);
  assert.match(entry, /Deno\.serve\(/);

  // The route prefix: Supabase passes /<name>/PATH; the handler sees /PATH.
  const served = [];
  globalThis.Deno = { env: { toObject: () => ({}) }, serve: handler => served.push(handler) };
  const directory = join(mkdtempSync(join(tmpdir(), 'lasm-supabase-entry-')), 'fn');
  mkdirSync(join(directory, 'lasm'), { recursive: true });
  writeFileSync(join(directory, 'lasm/program.wasm.mjs'), 'export default new Uint8Array([0, 97, 115, 109, 1, 0, 0, 0]);');
  writeFileSync(join(directory, 'lasm/program.mjs'), 'export default async () => ({});');
  writeFileSync(join(directory, 'lasm/edge-start.mjs'), `export async function startLean() {
    globalThis.__lasmDefaultExport = request => new Response(new URL(request.url).pathname + ' ' + request.method);
    return { lasmEdge: { stopped: null } };
  }`);
  writeFileSync(join(directory, 'index.mjs'), supabaseEntry([], 'my-app'));
  try {
    await import(join(directory, 'index.mjs'));
    assert.equal(served.length, 1);
    const path = async (url, init) => (await served[0](new Request(url, init), {})).text();
    assert.equal(await path('http://x/my-app'), '/ GET');
    assert.equal(await path('http://x/my-app/hello/Ada?q=1'), '/hello/Ada GET');
    assert.equal(await path('http://x/my-app/echo', { method: 'POST', body: '{}' }), '/echo POST');
    assert.equal(await path('http://x/my-appx/y'), '/my-appx/y GET', 'only the whole first segment');
  } finally { delete globalThis.Deno; }

  // deno.json pins every npm module the entry imports to the installed version.
  mkdirSync(join(project, 'node_modules/hono'), { recursive: true });
  writeFileSync(join(project, 'node_modules/hono/package.json'), JSON.stringify({ name: 'hono', version: '4.13.13' }));
  assert.deepEqual(supabaseImportMap(project, ['hono', 'hono/cors', 'node:process']),
    { imports: { hono: 'npm:hono@4.13.13', 'hono/': 'npm:hono@4.13.13/' } });
  assert.deepEqual(supabaseImportMap(project, ['@scope/pkg/sub'], () => '1.2.3'),
    { imports: { '@scope/pkg': 'npm:@scope/pkg@1.2.3', '@scope/pkg/': 'npm:@scope/pkg@1.2.3/' } });
  assert.throws(() => supabaseImportMap(project, ['jose']), /jose, which is not installed: run npm install jose/);
});

test('js runtime: under bunx (a renamed bun) child scripts run with the bun beside it', async () => {
  const { runtimeExecutableFor } = await import('../src/js-runtime.mjs');
  const { join } = await import('node:path');
  const dir = join('C:', 'bun', 'bin');
  assert.equal(runtimeExecutableFor({ runtime: 'bun', execPath: join(dir, 'bunx.exe'), exists: () => true }), join(dir, 'bun.exe'));
  assert.equal(runtimeExecutableFor({ runtime: 'bun', execPath: join(dir, 'bunx'), exists: () => true }), join(dir, 'bun'));
  assert.equal(runtimeExecutableFor({ runtime: 'bun', execPath: join(dir, 'bunx.exe'), exists: () => false }), join(dir, 'bunx.exe'));
  assert.equal(runtimeExecutableFor({ runtime: 'bun', execPath: join(dir, 'bun.exe'), exists: () => true }), join(dir, 'bun.exe'));
  assert.equal(runtimeExecutableFor({ runtime: 'node', execPath: '/usr/bin/bunx', exists: () => true }), '/usr/bin/bunx');
});
