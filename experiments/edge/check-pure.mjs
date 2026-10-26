// Correctness and cost checks of the pure-Lean edge prototype on Node, Deno or
// Bun: node check-pure.mjs OUT_DIR [--no-jspi]. Prints one JSON object.
import { readFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { pathToFileURL } from 'node:url';
import { startLean } from '../../src/edge/edge-start.mjs';
const out = resolve(process.argv[2]);
const jspi = !process.argv.includes('--no-jspi');
const engine = globalThis.Bun ? `bun ${Bun.version}` : globalThis.Deno ? `deno ${Deno.version.deno}` : `node ${process.version}`;
const result = { engine, build: out.split('/').pop(), jspi };
const cpu = () => process.cpuUsage ? (u => (u.user + u.system) / 1000)(process.cpuUsage()) : performance.now();
let t = performance.now(), c = cpu();
const wasmModule = await WebAssembly.compile(readFileSync(join(out, 'program.wasm')));
result.compileMs = +(performance.now() - t).toFixed(1);
const createProgram = (await import(pathToFileURL(join(out, 'program.mjs')).href)).default;
const fresh = () => startLean({ createProgram, wasmModule, jspi, stdout: () => {}, stderr: () => {}, env: { GREETING: 'hi' } });
t = performance.now(); c = cpu();
let Module = await fresh();
result.startMs = +(performance.now() - t).toFixed(1); result.startCpuMs = +(cpu() - c).toFixed(1);
result.memoryAfterStartMiB = +(Module.HEAPU8.length / 1048576).toFixed(1);
const call = async (path, method = 'GET', body = '') => {
  try { return await globalThis.lasmFetch(method, path, body); } catch (e) { return ['error', String(e?.message ?? e).slice(0, 160)]; }
};
const checks = {};
for (const p of ['/', '/fib/20', '/bignum', '/asleep/20', '/mutex', '/throw', '/env', '/time'])
  checks[p] = await call(p);
result.checks = checks;
// Concurrency: 100 Std.Async sleepers at once, then 5 blocking sleepers at once.
t = performance.now();
const many = await Promise.all(Array.from({ length: 100 }, () => call('/asleep/50')));
result.async100x50ms = { ms: Math.round(performance.now() - t), ok: many.every(r => r[0] === 200) };
// Cost per request (handler call through Lasm.JS, as the Worker does).
for (const [name, path] of [['trivial', '/'], ['fib20', '/fib/20'], ['primes10k', '/primes/10000']]) {
  const n = 3000;
  for (let i = 0; i < 200; i++) await call(path);
  t = performance.now(); c = cpu();
  for (let i = 0; i < n; i++) await call(path);
  result[name] = { usPerRequest: +((performance.now() - t) * 1000 / n).toFixed(1), cpuUsPerRequest: +((cpu() - c) * 1000 / n).toFixed(1) };
}
result.memoryAfterLoadMiB = +(Module.HEAPU8.length / 1048576).toFixed(1);
result.hostOperations = Module.lasmEdgeHost.operationCounts();
// Checks that may stop the instance; each later one gets a fresh instance.
const fatal = async path => {
  if (Module.lasmEdge.stopped) Module = await fresh();
  const r = await call(path);
  return Module.lasmEdge.stopped ? ['stopped', String(Module.lasmEdge.stopped.message).slice(0, 120)] : r;
};
for (const p of ['/block', '/sleep/20']) checks[p] = await fatal(p);
if (Module.lasmEdge.stopped) Module = await fresh();
t = performance.now();
const blocking = await Promise.all(Array.from({ length: 5 }, () => call('/sleep/20')));
result.blocking5x20ms = { ms: Math.round(performance.now() - t), results: blocking.map(r => r[0]), stopped: !!Module.lasmEdge.stopped };

result.deep = {};
for (const n of [1000, 3000, 10000, 30000, 100000, 300000, 1000000]) {
  const r = await fatal(`/deep/${n}`);
  result.deep[n] = r[0] === 200 ? 'ok' : r[1];
}
console.log(JSON.stringify(result));
