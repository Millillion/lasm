// The edge runtime's location and verification (src/edge/edge-runtime.mjs) and
// the start-up of an edge program (src/edge/edge-start.mjs), with a stand-in
// runtime directory, a stand-in download and a stand-in Emscripten module. The
// real runtime and programs run in the edge workflows; these tests check what
// is accepted, what is refused and with which message (docs/TESTING.md#mutation-testing).
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, rmSync, existsSync, readFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';
import { fileURLToPath } from 'node:url';
import { zstdCompressSync } from 'node:zlib';
import { c as createTar } from 'tar';
import { edgeRuntime, edgeRuntimeCatalog, edgeArchives, edgeExtras } from '../src/edge/edge-runtime.mjs';
import { startLean } from '../src/edge/edge-start.mjs';

const sha = bytes => createHash('sha256').update(bytes).digest('hex');
const base = 'b'.repeat(64);
const nodeRuntime = (manifest = {}) => ({ identity: base, manifest: { lean: '4.35.0', name: 'lean-4.35.0-wasm64', ...manifest } });

/** A runtime directory: lib/<archive>, sysroot/lib/<dir>/<library>, libraries.json. */
function runtimeTree(directory, { extras = true, sysroot = true, manifest = {} } = {}) {
  const files = {};
  for (const name of [...edgeArchives, ...(extras ? edgeExtras : [])]) {
    mkdirSync(join(directory, 'lib'), { recursive: true });
    writeFileSync(join(directory, 'lib', name), `archive ${name}`);
    files[name] = sha(`archive ${name}`);
  }
  let sysrootRecord;
  if (sysroot) {
    const libs = join(directory, 'sysroot/lib/wasm32-emscripten');
    mkdirSync(libs, { recursive: true });
    sysrootRecord = { directory: 'wasm32-emscripten', files: {} };
    for (const name of ['libc.a', 'libstubs.a']) { writeFileSync(join(libs, name), `system ${name}`); sysrootRecord.files[name] = sha(`system ${name}`); }
  }
  const record = { schema: 1, profile: 'edge', baseRuntimeManifestSha256: base, files, ...(sysrootRecord ? { sysroot: sysrootRecord } : {}), ...manifest };
  writeFileSync(join(directory, 'libraries.json'), JSON.stringify(record));
  return record;
}

function scratch(t, prefix = 'lasm-edge-runtime-') {
  const directory = mkdtempSync(join(tmpdir(), prefix));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  return directory;
}

test('a runtime directory is verified: archives, the listed extras, the system libraries', async t => {
  const directory = join(scratch(t), 'edge');
  const manifest = runtimeTree(directory);
  const found = await edgeRuntime(nodeRuntime(), { directory });
  assert.equal(found.directory, resolve(directory));
  assert.deepEqual(found.manifest, manifest);
  assert.deepEqual(found.libraries, Object.fromEntries([...edgeArchives, ...edgeExtras].map(name => [name, join(directory, 'lib', name)])));
  assert.deepEqual(found.sysroot, { cache: resolve(directory), directory: 'wasm32-emscripten' });
  assert.equal(found.identity, JSON.stringify({ files: manifest.files, sysroot: manifest.sysroot.files }));
  // A relative directory is resolved.
  const cwd = process.cwd();
  process.chdir(join(directory, '..'));
  try { assert.equal((await edgeRuntime(nodeRuntime(), { directory: 'edge' })).directory, resolve(directory)); }
  finally { process.chdir(cwd); }
});

test('an older runtime without extras or system libraries is accepted as it is', async t => {
  const directory = scratch(t);
  const manifest = runtimeTree(directory, { extras: false, sysroot: false });
  // An extra file that the manifest does not list is not used.
  writeFileSync(join(directory, 'lib', 'liblasmjsedge.a'), 'unlisted');
  const found = await edgeRuntime(nodeRuntime(), { directory });
  assert.deepEqual(Object.keys(found.libraries), edgeArchives);
  assert.equal(found.sysroot, undefined);
  assert.equal(found.identity, JSON.stringify({ files: manifest.files, sysroot: null }));
});

test('a damaged or foreign runtime directory is refused with what is wrong', async t => {
  const root = scratch(t);
  let n = 0;
  const tree = options => { const directory = join(root, String(n++)); runtimeTree(directory, options); return directory; };
  const refuse = (directory, message, runtime = nodeRuntime()) => assert.rejects(edgeRuntime(runtime, { directory }), { message });
  const missing = join(root, 'missing');
  await refuse(missing, `The Lean 4.35.0 edge runtime is missing or incomplete (${join(missing, 'libraries.json')})`);
  await refuse(tree({ manifest: { schema: 2 } }), 'Unrecognized edge runtime manifest');
  await refuse(tree({ manifest: { profile: 'node' } }), 'Unrecognized edge runtime manifest');
  await refuse(tree({ manifest: { baseRuntimeManifestSha256: 'c'.repeat(64) } }),
    `The edge runtime was built for runtime ${'c'.repeat(64)}, not this Lasm's ${base}`);
  for (const archive of ['libleanrt.a', 'liblasmhost.a', 'liblasmjsedge.a']) {
    const changed = tree();
    writeFileSync(join(changed, 'lib', archive), 'changed');
    await refuse(changed, `Edge runtime archive ${archive} is missing or changed`);
    const removed = tree();
    rmSync(join(removed, 'lib', archive));
    await refuse(removed, `Edge runtime archive ${archive} is missing or changed`);
  }
  // An archive the manifest does not list at all.
  const unlisted = tree();
  const record = JSON.parse(readFileSync(join(unlisted, 'libraries.json'), 'utf8'));
  delete record.files['libleancpp.a'];
  writeFileSync(join(unlisted, 'libraries.json'), JSON.stringify(record));
  await refuse(unlisted, 'Edge runtime archive libleancpp.a is missing or changed');
  // A manifest without a file list names the first archive.
  const noFiles = tree();
  const bare = JSON.parse(readFileSync(join(noFiles, 'libraries.json'), 'utf8'));
  delete bare.files;
  writeFileSync(join(noFiles, 'libraries.json'), JSON.stringify(bare));
  await refuse(noFiles, 'Edge runtime archive libleanrt.a is missing or changed');
  const changedLibrary = tree();
  writeFileSync(join(changedLibrary, 'sysroot/lib/wasm32-emscripten/libstubs.a'), 'changed');
  await refuse(changedLibrary, 'Edge runtime system library libstubs.a is missing or changed');
  const removedLibrary = tree();
  rmSync(join(removedLibrary, 'sysroot/lib/wasm32-emscripten/libc.a'));
  await refuse(removedLibrary, 'Edge runtime system library libc.a is missing or changed');
});

test('LASM_EDGE_RUNTIME names the directory when none is given', async t => {
  const directory = scratch(t);
  runtimeTree(directory);
  const saved = process.env.LASM_EDGE_RUNTIME;
  process.env.LASM_EDGE_RUNTIME = directory;
  try { assert.equal((await edgeRuntime(nodeRuntime())).directory, resolve(directory)); }
  finally { if (saved === undefined) delete process.env.LASM_EDGE_RUNTIME; else process.env.LASM_EDGE_RUNTIME = saved; }
});

test('the package\'s bundled targets/<name>-edge is used before the catalog', async t => {
  const root = fileURLToPath(new URL('../', import.meta.url));
  const targets = join(root, 'targets'), created = !existsSync(targets);
  const name = `lasm-test-${process.pid}-${Date.now()}`;
  const named = join(targets, `${name}-edge`), unnamed = join(targets, 'lean-0.0.0-test-wasm64-edge');
  t.after(() => {
    rmSync(named, { recursive: true, force: true }); rmSync(unnamed, { recursive: true, force: true });
    if (created) rmSync(targets, { recursive: true, force: true });
  });
  const saved = process.env.LASM_EDGE_RUNTIME;
  delete process.env.LASM_EDGE_RUNTIME;
  try {
    runtimeTree(named);
    assert.equal((await edgeRuntime(nodeRuntime({ name }), { catalog: {} })).directory, named);
    // Without a name in the manifest: lean-<version>-wasm64.
    runtimeTree(unnamed);
    assert.equal((await edgeRuntime({ identity: base, manifest: { lean: '0.0.0-test' } }, { catalog: {} })).directory, unnamed);
    // A directory without libraries.json is not a bundled runtime: the catalog is asked.
    rmSync(join(named, 'libraries.json'));
    await assert.rejects(edgeRuntime(nodeRuntime({ name }), { catalog: {} }), { message: 'Lasm has no edge runtime for Lean 4.35.0; edge targets support no Lean version.' });
  } finally { if (saved !== undefined) process.env.LASM_EDGE_RUNTIME = saved; }
});

test('the catalog: supported versions, the base runtime, a verified download', async t => {
  const saved = process.env.LASM_EDGE_RUNTIME;
  delete process.env.LASM_EDGE_RUNTIME;
  t.after(() => { if (saved !== undefined) process.env.LASM_EDGE_RUNTIME = saved; });
  const runtime = nodeRuntime({ lean: '9.9.9', name: 'lasm-test-not-bundled' });
  await assert.rejects(edgeRuntime(runtime, { catalog: { lean: { '1.0.0': {}, '2.0.0': {} } } }),
    { message: 'Lasm has no edge runtime for Lean 9.9.9; edge targets support 1.0.0, 2.0.0.' });
  await assert.rejects(edgeRuntime(runtime, { catalog: {} }), { message: 'Lasm has no edge runtime for Lean 9.9.9; edge targets support no Lean version.' });
  await assert.rejects(edgeRuntime(runtime, { catalog: { lean: { '9.9.9': { baseRuntimeManifestSha256: 'd'.repeat(64) } } } }),
    { message: `The cataloged edge runtime for Lean 9.9.9 belongs to another runtime build (${'d'.repeat(64)})` });
  // The shipped catalog names a base runtime for each version.
  for (const artifact of Object.values(edgeRuntimeCatalog.lean)) assert.match(artifact.baseRuntimeManifestSha256, /^[0-9a-f]{64}$/);
  // A download: the archive root is stripped; the catalog's own fields are not part of the artifact.
  const directory = scratch(t);
  runtimeTree(join(directory, 'source', 'edge-root'));
  await createTar({ cwd: join(directory, 'source'), file: join(directory, 'edge.tar'), portable: true }, ['edge-root']);
  const bytes = zstdCompressSync(readFileSync(join(directory, 'edge.tar')));
  const artifact = { name: 'edge-test.tar.zst', root: 'edge-root', url: 'https://example.invalid/edge-test.tar.zst', sha256: sha(bytes),
    bytes: bytes.length, format: 'tar.zst', maximumExtractedBytes: 1_000_000 };
  const stages = [];
  const options = { catalog: { lean: { '9.9.9': { ...artifact, baseRuntimeManifestSha256: base, source: 'a test' } } },
    cache: join(directory, 'cache'), log() {}, fetch: async () => new Response(bytes), progress: event => stages.push(event.stage) };
  const found = await edgeRuntime(runtime, options);
  assert.deepEqual(Object.keys(found.libraries), [...edgeArchives, ...edgeExtras]);
  assert.ok(found.directory.startsWith(join(directory, 'cache')));
  assert.ok(stages.includes('Downloading Lean 9.9.9 edge runtime'), stages.join(' | '));
  stages.length = 0;
  await edgeRuntime(runtime, options);
  assert.ok(stages.includes('Verifying cached Lean 9.9.9 edge runtime'), stages.join(' | '));
});

/** A stand-in Emscripten module of an edge program. */
function program({ exitCode = 0, mainFails, onMain } = {}) {
  const seen = {};
  const createProgram = async options => {
    seen.options = options;
    // Instantiation goes through instantiateWasm with the precompiled module.
    const module = new WebAssembly.Module(Uint8Array.of(0, 0x61, 0x73, 0x6d, 1, 0, 0, 0));
    const done = [];
    seen.exports = options.instantiateWasm({}, (instance, compiled) => done.push([instance, compiled]));
    seen.done = done;
    let stop;
    const Module = {
      lasmEdge: {
        attach: host => { seen.attached = host; },
        notify: () => { seen.notified = (seen.notified ?? 0) + 1; },
        syncCall: (fn, payload) => { seen.syncCall = [fn, payload]; return Uint8Array.of(0, 0); },
        onStop: fn => { stop = fn; },
        main: async args => { seen.args = args; await onMain?.(Module, stop); if (mainFails) throw mainFails; return exitCode; },
      },
    };
    seen.module = module;
    return Module;
  };
  return { createProgram, seen };
}

test('startLean: instantiates the precompiled module, passes the environment, attaches the host, runs main', async () => {
  const { createProgram, seen } = program({ exitCode: 3, onMain: Module => { Module.lasmEdgeHost.request(3, 1, 0n, new TextEncoder().encode('partial')); } });
  const out = [], err = [];
  const wasmModule = new WebAssembly.Module(Uint8Array.of(0, 0x61, 0x73, 0x6d, 1, 0, 0, 0));
  const Module = await startLean({ createProgram, wasmModule, env: { A: '1', B: 2, C: undefined }, args: ['x', 'y'],
    stdout: line => out.push(line), stderr: line => err.push(line), jspi: false });
  assert.equal(seen.options.lasmEdgeJspi, false);
  assert.equal(seen.options.noInitialRun, true);
  assert.deepEqual(seen.options.lasmEnv, { A: '1' });
  seen.options.print('to stdout'); seen.options.printErr('to stderr');
  assert.equal(seen.done.length, 1);
  assert.ok(seen.done[0][0] instanceof WebAssembly.Instance);
  assert.equal(seen.done[0][1], wasmModule);
  assert.equal(seen.exports, seen.done[0][0].exports);
  assert.equal(seen.attached, Module.lasmEdgeHost);
  assert.deepEqual(seen.args, ['x', 'y']);
  assert.equal(Module.lasmExitCode, 3);
  // main's partial output line is flushed when main returns.
  assert.deepEqual(out, ['partial', 'to stdout']);
  assert.deepEqual(err, ['to stderr']);
  // The host's notify and syncCall reach the module's.
  Module.lasmEdgeHost.js.dispatch(207, 0, 1n, Uint8Array.of(0, 0, 0, 0, 0));
  await new Promise(resolve => setTimeout(resolve, 5));
  assert.ok(seen.notified >= 1);
  const sync = Module.lasmEdgeHost.js.dispatch(210, 6, 2n, new Uint8Array(4));
  const syncHandle = new DataView(sync.buffer, sync.byteOffset).getUint32(1, true);
  const u32 = n => { const b = new Uint8Array(4); new DataView(b.buffer).setUint32(0, n, true); return [...b]; };
  assert.deepEqual([...Module.lasmEdgeHost.js.dispatch(205, 0, 0n, Uint8Array.of(0, 0, 0, 0, 8, ...u32(3), 10, ...u32(syncHandle), 0, 0, 0, 0, 1, 8, 0, 0, 0, 0))], [0]);
  assert.equal(seen.syncCall[0], 6);
  assert.equal(Module.lasmContext.target, 'edge');
  assert.equal(typeof Module.lasmDispose, 'function');
  // Defaults: JSPI on, an empty environment; the console as sinks.
  const defaults = program();
  const logged = [], errors = [];
  const { log, error } = console;
  console.log = line => logged.push(line); console.error = line => errors.push(line);
  try {
    await startLean({ createProgram: defaults.createProgram, wasmModule, env: null });
    defaults.seen.options.print('p'); defaults.seen.options.printErr('e');
  } finally { console.log = log; console.error = error; }
  assert.equal(defaults.seen.options.lasmEdgeJspi, true);
  assert.deepEqual(defaults.seen.args, []);
  assert.deepEqual(defaults.seen.options.lasmEnv, {});
  assert.deepEqual([logged, errors], [['p'], ['e']]);
});

test('startLean: per-instance modules get the instance context; cleanups run once, in reverse, also when the instance stops', async () => {
  const order = [], reports = [];
  const instanced = { lasmInstance: context => ({ context }) };
  const plain = { lasmInstance: 'not a function', value: 1 };
  let captured;
  const { createProgram } = program({ onMain: (Module, stop) => { captured = stop; } });
  const err = [];
  const wasmModule = new WebAssembly.Module(Uint8Array.of(0, 0x61, 0x73, 0x6d, 1, 0, 0, 0));
  const Module = await startLean({ createProgram, wasmModule, modules: { instanced, plain, nothing: null }, stderr: line => err.push(line),
    context: { root: '/app', report: error => reports.push(error) } });
  const context = Module.lasmContext;
  assert.deepEqual({ target: context.target, root: context.root, flags: context.flags, hydrate: context.hydrate },
    { target: 'edge', root: '/app', flags: undefined, hydrate: false });
  context.report('r');
  assert.deepEqual(reports, ['r']);
  // The modules map the host sees: the instance's own module, the plain one as it is.
  const host = Module.lasmEdgeHost;
  const load = name => host.js.dispatch(201, 0, 1n, Uint8Array.of(0, 0, 0, 0, ...new TextEncoder().encode(name)));
  const handle = bytes => new DataView(bytes.buffer, bytes.byteOffset).getUint32(1, true);
  const describeHandle = id => new TextDecoder().decode(host.js.dispatch(206, id, 0n, new Uint8Array(4)));
  assert.equal(describeHandle(handle(load('instanced'))), 'object {context}');
  assert.equal(describeHandle(handle(load('plain'))), 'object {lasmInstance, value}');
  assert.equal(describeHandle(handle(load('nothing'))), 'null');
  context.onDispose(() => order.push('first'));
  context.onDispose(() => { throw new Error('cleanup broke'); });
  context.onDispose(() => order.push('third'));
  // The instance stops: Lasm.JS calls end, cleanups run, the reason is reported.
  const fn = handle(host.js.dispatch(210, 4, 1n, new Uint8Array(4)));
  const u32 = n => { const b = new Uint8Array(4); new DataView(b.buffer).setUint32(0, n, true); return [...b]; };
  const callFn = () => host.js.dispatch(205, 0, 2n, Uint8Array.of(0, 0, 0, 0, 8, ...u32(3), 10, ...u32(fn), 0, 0, 0, 0, 1, 8, 0, 0, 0, 0));
  const waiting = callFn();
  captured(new Error('trapped'));
  await assert.rejects(waiting, { message: 'Error: trapped' });
  await assert.rejects(callFn(), { message: 'Error: trapped' });
  assert.deepEqual(order, ['third', 'first']);
  assert.deepEqual(err, ['[lasm] cleanup failed: cleanup broke', '[lasm] the Lean instance stopped: trapped']);
  Module.lasmDispose();
  assert.deepEqual(order, ['third', 'first'], 'once');
  // After disposal a new cleanup runs at once.
  context.onDispose(() => order.push('late'));
  assert.deepEqual(order, ['third', 'first', 'late']);
  // A thrown non-Error is reported as it is.
  const second = program();
  const err2 = [];
  const Module2 = await startLean({ createProgram: second.createProgram, wasmModule, stderr: line => err2.push(line) });
  Module2.lasmContext.onDispose(() => { throw undefined; });
  Module2.lasmContext.onDispose(() => { throw 'plain'; });
  Module2.lasmDispose();
  assert.deepEqual(err2, ['[lasm] cleanup failed: plain', '[lasm] cleanup failed: undefined']);
});

test('startLean: without a stderr sink, failures go to the console', async () => {
  let captured;
  const { createProgram } = program({ onMain: (Module, stop) => { captured = stop; } });
  const wasmModule = new WebAssembly.Module(Uint8Array.of(0, 0x61, 0x73, 0x6d, 1, 0, 0, 0));
  const Module = await startLean({ createProgram, wasmModule });
  Module.lasmContext.onDispose(() => { throw new Error('x'); });
  const errors = [];
  const { error } = console;
  console.error = line => errors.push(line);
  try {
    Module.lasmContext.report('reported');
    captured(new Error('stopped'));
  } finally { console.error = error; }
  assert.deepEqual(errors, ['reported', '[lasm] cleanup failed: x', '[lasm] the Lean instance stopped: stopped']);
});
