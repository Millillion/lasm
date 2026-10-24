// Local check of an edge build on Node/Deno/Bun: node run-node.mjs OUT_DIR [requests JSON]
import { readFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { pathToFileURL } from 'node:url';
import { startLean } from './runtime/edge-start.mjs';
const out = resolve(process.argv[2]);
const t0 = performance.now();
const wasmModule = await WebAssembly.compile(readFileSync(join(out, 'program.wasm')));
const t1 = performance.now();
const createProgram = (await import(pathToFileURL(join(out, 'program.mjs')).href)).default;
const modules = {};
try { modules.hono = await import('hono'); } catch { /* pure */ }
await startLean({ createProgram, wasmModule, env: { GREETING: 'hi' }, modules, jspi: !process.argv.includes('--no-jspi') });
const t2 = performance.now();
console.log(JSON.stringify({ compileMs: +(t1 - t0).toFixed(1), startMs: +(t2 - t1).toFixed(1) }));
const requests = JSON.parse(process.argv[3] ?? '[["GET","/"],["GET","/fib/20"],["GET","/primes/10000"],["GET","/bignum"],["POST","/words","a b a c b a"],["GET","/time"],["GET","/env"],["GET","/nope"]]');
if (globalThis.lasmFetch) for (const [m, p, b = ''] of requests) console.log(m, p, JSON.stringify(await globalThis.lasmFetch(m, p, b)));
if (globalThis.lasmApp) for (const [m, p, b] of requests) {
  const res = await globalThis.lasmApp.fetch(new Request('http://x' + p, { method: m, body: b, headers: b ? { 'content-type': 'application/json' } : {} }));
  console.log(m, p, res.status, (await res.text()).slice(0, 200));
}
