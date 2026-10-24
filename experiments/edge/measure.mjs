// Phase 7.1 measurements: sizes of every edge build, then check-pure.mjs on
// each engine. node measure.mjs OUT_ROOT EVIDENCE.json  (engines from env:
// NODE26, BUN, DENO executables).
import { readFileSync, readdirSync, writeFileSync, existsSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { gzipSync, brotliCompressSync, constants } from 'node:zlib';
import { execFileSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
const here = dirname(fileURLToPath(import.meta.url));
const [root, evidence] = process.argv.slice(2).map(p => resolve(p));
const sizes = {};
for (const build of readdirSync(root).sort()) {
  const wasm = join(root, build, 'program.wasm'), js = join(root, build, 'program.mjs');
  if (!existsSync(wasm)) continue;
  const w = readFileSync(wasm), j = readFileSync(js);
  sizes[build] = { wasm: w.length, wasmGzip9: gzipSync(w, { level: 9 }).length,
    wasmBrotli11: brotliCompressSync(w, { params: { [constants.BROTLI_PARAM_QUALITY]: 11 } }).length, glueJs: j.length,
    link: JSON.parse(readFileSync(join(root, build, 'link-args.json'))).mode };
}
const runs = [];
const engines = [['node', process.env.NODE26, []], ['deno', process.env.DENO, ['run', '-A']], ['bun', process.env.BUN, []]];
for (const build of ['pure-jspi', 'pure-sync', 'pure-asyncify', 'pure-jspi-m64']) for (const [name, exe, pre] of engines) {
  if (!exe || !existsSync(join(root, build))) continue;
  if (name === 'bun' && build.endsWith('m64')) { runs.push({ engine: 'bun', build, skipped: 'Bun has no Wasm memory64 by default' }); continue; }
  const args = [...pre, join(here, 'check-pure.mjs'), join(root, build), ...(build.includes('sync') && !build.includes('asyncify') ? ['--no-jspi'] : [])];
  try { runs.push(JSON.parse(execFileSync(exe, args, { encoding: 'utf8', timeout: 300_000 }).trim().split('\n').pop())); }
  catch (error) { runs.push({ engine: name, build, failed: String(error.stdout ?? error.message).slice(-400) }); }
}
const host = { cpus: (await import('node:os')).cpus()[0].model, platform: process.platform, arch: process.arch };
writeFileSync(evidence, JSON.stringify({ schema: 1, date: new Date().toISOString(), host, sizes, runs }, null, 1) + '\n');
console.log(JSON.stringify(sizes, null, 1));
for (const r of runs) console.log(r.engine, r.build, r.failed ?? r.skipped ?? JSON.stringify({ start: r.startMs, mem: r.memoryAfterLoadMiB, trivial: r.trivial?.usPerRequest, fib20: r.fib20?.usPerRequest, primes: r.primes10k?.usPerRequest, block: r.checks?.['/block']?.[0], sleep: r.checks?.['/sleep/20']?.[0], deepMax: Object.entries(r.deep ?? {}).filter(([, v]) => v === 'ok').pop()?.[0] }));
