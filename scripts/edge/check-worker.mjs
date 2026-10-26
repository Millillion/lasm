// Runs a `lasm build --target workers` output (workers/) on Node 26, Deno or
// Bun without wrangler: the same program, host and handler as the Worker, for
// correctness and cost (startup, memory, time per request). Also runs other
// edge outputs (supabase-edge: the Wasm as a JavaScript module), given the
// project directory whose node_modules has the imported modules.
//   node|deno run -A|bun check-worker.mjs WORKERS_DIR hono|pure RESULT.json [PROJECT_DIR]
import { readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { pathToFileURL } from 'node:url';
import { apps } from './checks.mjs';

const [dir, appName, resultFile, projectArg] = process.argv.slice(2);
const workers = resolve(dir), app = apps[appName], project = projectArg ? resolve(projectArg) : join(workers, '..');
const info = JSON.parse(readFileSync(join(workers, 'build-info.json'), 'utf8'));
const engine = globalThis.Bun ? `bun ${Bun.version}` : globalThis.Deno ? `deno ${Deno.version.deno}` : `node ${process.version}`;
const result = { engine, app: appName, suspend: null, checks: [] };
const modules = {};
// The modules the generated entry imports, from the project's node_modules (ESM entry).
for (const name of info.modules) {
  const base = join(project, 'node_modules', name), pkg = JSON.parse(readFileSync(join(base, 'package.json'), 'utf8'));
  const entry = pkg.exports?.['.']?.import ?? pkg.module ?? pkg.main ?? 'index.js';
  modules[name] = await import(pathToFileURL(join(base, typeof entry === 'string' ? entry : entry.default)).href);
}
const { startLean } = await import(pathToFileURL(join(workers, 'lasm/edge-start.mjs')).href);
const createProgram = (await import(pathToFileURL(join(workers, 'lasm/program.mjs')).href)).default;
let t = performance.now();
const bytes = info.wasm.endsWith('.mjs') ? (await import(pathToFileURL(join(workers, info.wasm)).href)).default : readFileSync(join(workers, info.wasm));
result.suspend = info.link?.suspend ?? null;
result.wasmBytes = bytes.length;
const wasmModule = await WebAssembly.compile(bytes);
result.compileMs = +(performance.now() - t).toFixed(1);
const start = async () => {
  delete globalThis.__lasmDefaultExport;
  // jspi: false for an Asyncify build, so only Asyncify can suspend (as on Supabase).
  const lean = await startLean({ createProgram, wasmModule, modules, jspi: info.link?.suspend !== 'asyncify', stdout: () => {}, stderr: () => {} });
  return { lean, handler: globalThis.__lasmDefaultExport };
};
t = performance.now();
let current = await start();
result.startupMs = +(performance.now() - t).toFixed(1);
result.wasmMemoryMiB = +(current.lean.HEAPU8.length / 1048576).toFixed(1);
const fetchOnce = async ({ method = 'GET', path, send, type }) => {
  if (current.lean.lasmEdge.stopped) current = await start();
  const request = new Request('http://worker.local' + path, { method, body: send, headers: type ? { 'content-type': type } : {} });
  try {
    const response = typeof current.handler === 'function' ? await current.handler(request, {}, {}) : await current.handler.fetch(request, {}, {});
    return { status: response.status, body: await response.text() };
  } catch (error) { return { status: 'error', body: String(error?.message ?? error) }; }
};
const verify = async check => {
  const got = await fetchOnce(check);
  const ok = got.status === check.status && (check.body === undefined || got.body === check.body) && (!check.match || check.match.test(got.body));
  result.checks.push({ path: check.path, ok, ...(ok ? {} : { got }) });
};
for (const check of app.checks) await verify(check);
if (app.fatal) {
  const got = await fetchOnce(app.fatal);
  result.checks.push({ path: app.fatal.path, ok: got.status === 'error' && !!current.lean.lasmEdge.stopped, stopped: !!current.lean.lasmEdge.stopped });
  await verify(app.fatal.after);
}
for (const [name, path] of Object.entries(app.bench)) {
  for (let i = 0; i < 200; i++) await fetchOnce({ path });
  const n = 2000; t = performance.now();
  for (let i = 0; i < n; i++) await fetchOnce({ path });
  result[`${name}MsPerRequest`] = +((performance.now() - t) / n).toFixed(4);
}
result.wasmMemoryAfterMiB = +(current.lean.HEAPU8.length / 1048576).toFixed(1);
result.passed = result.checks.every(c => c.ok);
writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result));
if (!result.passed) process.exitCode = 1;
