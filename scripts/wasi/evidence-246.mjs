// EVIDENCE #246 (temporary; removed before merge): the WASI targets' memory and
// speed with Emscripten's 16 MiB mimalloc arenas (before) and 8 MiB ones (after), in one job.
//   node scripts/wasi/evidence-246.mjs WORK TOOLS
// TOOLS as scripts/wasi/wasi-ci.mjs's. Writes WORK/evidence-246.json and prints a summary.
import { execFileSync, spawn, spawnSync } from 'node:child_process';
import { closeSync, cpSync, mkdirSync, openSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { headlessEnvironment } from '../edge/headless.mjs';

const root = resolve(dirname(fileURLToPath(import.meta.url)), '../..');
const [work, tools] = process.argv.slice(2).map(p => resolve(p));
const viceroy = join(tools, 'viceroy/viceroy'), wasmtimeDir = join(tools, 'wasmtime');
mkdirSync(work, { recursive: true });
const variants = { before: '16', after: '8' };
const out = { builds: {}, trivialFastly: {}, trivialWasi: {}, folioWasi: {}, folioFastly: {} };
const save = () => writeFileSync(join(work, 'evidence-246.json'), JSON.stringify(out, null, 1) + '\n');
const env = arenas => ({ ...headlessEnvironment(), LASM_EVIDENCE_246_ARENA_MIB: arenas, PATH: `${wasmtimeDir}:${process.env.PATH}` });
const passed = ['LASM_APPLICATION_RUNTIME', 'LASM_EDGE_RUNTIME', 'LASM_BUILD_JOBS'].filter(key => process.env[key])
  .map(key => `${key}=${key === 'LASM_BUILD_JOBS' ? process.env[key] : resolve(process.env[key])}`);
const bounded = [join(root, 'scripts/full-lean/run-bounded.mjs'), '--', 'python3', join(root, 'scripts/full-lean/base-pages.py'), 'env', ...passed];
function lasm(project, args, variant) {
  const started = Date.now();
  execFileSync(process.execPath, [...bounded, `LASM_EVIDENCE_246_ARENA_MIB=${variants[variant]}`, process.execPath, join(root, 'bin/lasm.mjs'), ...args],
    { cwd: project, stdio: 'inherit', env: env(variants[variant]) });
  out.builds[`${variant} ${args.join(' ')}`] = (Date.now() - started) / 1000;
}
const stats = xs => { const s = [...xs].sort((a, b) => a - b); return s.length ? { n: s.length, min: s[0], median: s[s.length >> 1], max: s.at(-1) } : { n: 0 }; };
const heapOf = log => [...log.matchAll(/using ([\d.]+) MB of WebAssembly heap/g)].map(m => Number(m[1]));

/** Starts Viceroy on `wasm`; returns { base, stop, log() }. */
async function serve(cwd, wasm, port, logFile) {
  // Viceroy writes its log straight to the file: a pipe stalls it while this script waits in spawnSync.
  const fd = openSync(logFile, 'w');
  const child = spawn(viceroy, ['serve', '--addr', `127.0.0.1:${port}`, '-C', 'fastly.toml', wasm],
    { cwd, env: { ...headlessEnvironment(), RUST_LOG: 'viceroy=error,viceroy_lib=error,viceroy_lib::execute=info' }, stdio: ['ignore', fd, fd] });
  closeSync(fd);
  const base = `http://127.0.0.1:${port}`;
  const deadline = Date.now() + 180_000;
  for (;;) {
    if (child.exitCode !== null) throw new Error(`Viceroy exited: ${readFileSync(logFile, 'utf8')}`);
    try { await (await fetch(base + '/', { signal: AbortSignal.timeout(5000) })).arrayBuffer(); break; } catch {}
    if (Date.now() > deadline) throw new Error('Viceroy did not start');
    await new Promise(r => setTimeout(r, 300));
  }
  return { base, log: () => readFileSync(logFile, 'utf8'), stop: () => new Promise(r => { child.once('exit', r); child.kill('SIGTERM'); }) };
}
async function throughput(base, path, total, concurrency) {
  let next = 0; const started = performance.now();
  await Promise.all(Array.from({ length: concurrency }, async () => {
    while (next++ < total) { const r = await fetch(base + path); await r.arrayBuffer(); if (r.status !== 200) throw new Error(`${path}: ${r.status}`); }
  }));
  return total / ((performance.now() - started) / 1000);
}

// 1. The trivial Fastly program (examples/fastly): heap per request and requests per second.
for (const v of Object.keys(variants)) {
  const app = join(work, `fastly-${v}`);
  rmSync(app, { recursive: true, force: true }); cpSync(join(root, 'examples/fastly'), app, { recursive: true });
  lasm(app, ['build', 'Main.lean', '--target', 'fastly'], v);
}
{
  const servers = {};
  for (const [i, v] of Object.keys(variants).entries()) servers[v] = await serve(join(work, `fastly-${v}`), 'bin/main.wasm', 3201 + i, join(work, `viceroy-trivial-${v}.log`));
  const rps = { before: [], after: [] };
  for (const v of Object.keys(variants)) for (let i = 0; i < 20; i++) await (await fetch(servers[v].base + '/hello/Ada')).arrayBuffer();
  for (let round = 0; round < 3; round++) for (const v of Object.keys(variants)) rps[v].push(await throughput(servers[v].base, '/hello/Ada', 1000, 4));
  for (const v of Object.keys(variants)) {
    out.trivialFastly[v] = { heapMB: stats(heapOf(servers[v].log())), requestsPerSecond: rps[v] };
    await servers[v].stop();
  }
  save();
}

// 2. Folio (examples/folio) with this checkout's Lasm: its batch renderer for WASI, its site server for Fastly.
const folio = join(work, 'folio');
rmSync(folio, { recursive: true, force: true });
cpSync(join(root, 'examples/folio'), folio, { recursive: true, filter: p => !/[/\\](node_modules|\.lake|dist|bin)$/.test(p) });
const batch = join(folio, 'test/batch.mjs');
writeFileSync(batch, readFileSync(batch, 'utf8')
  .replace("const wasm = join(root, 'dist', 'batch-wasi', 'main.wasm');", "const wasm = process.env.FOLIO_EVIDENCE_WASM;")
  .replace('process.exitCode = wasi.start(await WebAssembly.instantiate(m, wasi.getImportObject()));',
    "const i = await WebAssembly.instantiate(m, wasi.getImportObject()); process.exitCode = wasi.start(i); console.error('#246 memory ' + i.exports.memory.buffer.byteLength);"));
for (const v of Object.keys(variants)) {
  lasm(folio, ['build', 'Batch.lean', '--target', 'wasi', '--output', `dist/batch-wasi-${v}`], v);
  lasm(folio, ['build', 'ServerEdge.lean', '--target', 'fastly'], v);
  mkdirSync(join(folio, `bin-${v}`), { recursive: true });
  cpSync(join(folio, 'bin/main.wasm'), join(folio, `bin-${v}/main.wasm`));
}
const node = (args, extra = {}) => {
  const started = performance.now();
  const r = spawnSync(process.execPath, args, { cwd: folio, encoding: 'utf8', maxBuffer: 256 << 20, env: { ...env('8'), ...extra } });
  return { status: r.status, seconds: (performance.now() - started) / 1000, stdout: r.stdout, stderr: r.stderr };
};
const caseLines = text => text.split('\n').filter(l => /^(ok  |FAIL|skip) /.test(l));
// 2a. WASI: the 652 examples on wasmtime (three times each, alternating), then the pathological cases on wasmtime and node:wasi.
for (const v of Object.keys(variants)) out.folioWasi[v] = { specSeconds: [] };
for (let round = 0; round < 3; round++) for (const v of Object.keys(variants)) {
  const r = node(['test/spec.mjs', '--engine', 'wasmtime'], { FOLIO_EVIDENCE_WASM: join(folio, `dist/batch-wasi-${v}/main.wasm`) });
  out.folioWasi[v].specSeconds.push(r.status === 0 ? r.seconds : `exit ${r.status}: ${r.stdout.slice(-300)}${r.stderr.slice(-300)}`);
}
for (const v of Object.keys(variants)) {
  const wasm = { FOLIO_EVIDENCE_WASM: join(folio, `dist/batch-wasi-${v}/main.wasm`) };
  const t = node(['test/pathological.mjs', '--engine', 'wasmtime'], wasm);
  const n = node(['test/pathological.mjs', '--engine', 'node-wasi'], wasm);
  const memory = [...n.stderr.matchAll(/#246 memory (\d+)/g)].map(m => +(Number(m[1]) / 1048576).toFixed(1));
  out.folioWasi[v].pathologicalWasmtime = { status: t.status, seconds: t.seconds, cases: caseLines(t.stdout) };
  out.folioWasi[v].pathologicalNodeWasi = { status: n.status, seconds: n.seconds, cases: caseLines(n.stdout).map((line, i) => `${line} [memory ${memory[i]} MiB]`) };
  save();
}
// 2b. Fastly: the site server under Viceroy: the 652 examples (requests per second) and every pathological case (no skips) with its heap.
for (const [i, v] of Object.keys(variants).entries()) {
  const server = await serve(folio, `bin-${v}/main.wasm`, 3211 + i, join(work, `viceroy-folio-${v}.log`));
  const spec = node(['test/spec.mjs', '--engine', server.base]);
  const specHeap = heapOf(server.log());
  const patho = node(['test/pathological.mjs', '--engine', server.base]);
  const pathoHeap = heapOf(server.log()).slice(specHeap.length);
  const cases = caseLines(patho.stdout);
  out.folioFastly[v] = { specStatus: spec.status, specSeconds: spec.seconds, specHeapMB: stats(specHeap), pathologicalStatus: patho.status,
    pathologicalHeapMB: pathoHeap, cases, outOfMemory: (server.log().match(/memory|limit/gi) ?? []).length };
  await server.stop();
  save();
}
console.log('\n#246 EVIDENCE\n' + JSON.stringify(out, null, 1));
