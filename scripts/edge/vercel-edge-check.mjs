// Vercel Edge with no account (Phase 7.3): `vercel build` offline (a local
// .vercel/project.json stands in for `vercel link`), from a tree without the
// generated function (vercel.json's build command writes it), must emit the
// function as an edge function with every Lasm file; then the built function,
// copied out of the project (so only its own files resolve) and bundled with
// esbuild (Vercel bundles edge functions at deployment, which cannot run
// locally), runs in Vercel's open-source edge runtime (the `edge-runtime`
// package, which `next dev` uses for edge code), where every route is checked.
// `vercel dev` needs a login and is not used. JSPI comes from the host Node.
//   node vercel-edge-check.mjs TOOLS_DIR PROJECT hono|pure RESULT.json
import { execFileSync } from 'node:child_process';
import { cpSync, existsSync, mkdirSync, mkdtempSync, readFileSync, writeFileSync, statSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { tmpdir } from 'node:os';
import { createRequire } from 'node:module';
import { gzipSync } from 'node:zlib';
import { apps } from './checks.mjs';
import { headlessEnvironment } from './headless.mjs';

const [toolsArg, projectArg, appName, resultFile] = process.argv.slice(2);
const tools = resolve(toolsArg), project = resolve(projectArg), app = apps[appName];
const require = createRequire(join(tools, 'package.json'));
const home = mkdtempSync(join(tmpdir(), 'lasm-vercel-home-'));
const env = headlessEnvironment(process.env, { XDG_DATA_HOME: join(home, 'd'), XDG_CONFIG_HOME: join(home, 'c'), VERCEL_TOKEN: '' });
const result = { app: appName, vercel: require('vercel/package.json').version, edgeRuntime: require('edge-runtime/package.json').version, node: process.version, checks: [] };
const check = (name, ok, extra = {}) => result.checks.push({ name, ok: !!ok, ...extra });

mkdirSync(join(project, '.vercel'), { recursive: true });
writeFileSync(join(project, '.vercel/project.json'), JSON.stringify({ projectId: 'prj_lasm_ci', orgId: 'team_lasm_ci', settings: {} }));
execFileSync(join(tools, 'node_modules/.bin/vercel'), ['build', '--yes'], { cwd: project, env, stdio: ['ignore', 'pipe', 'inherit'], timeout: 600_000 });
const func = join(project, '.vercel/output/functions/api/lasm.func');
const config = JSON.parse(readFileSync(join(func, '.vc-config.json'), 'utf8'));
check('vercel build: an edge function', config.runtime === 'edge' && config.entrypoint === 'api/lasm.mjs', { config });
for (const file of ['api/lasm.mjs', 'api/_lasm/lasm/program.wasm', 'api/_lasm/lasm/program.mjs', 'api/_lasm/lasm/edge-start.mjs', 'api/_lasm/lasm/edge-host.mjs', 'api/_lasm/lasm/edge-js.mjs'])
  check(`vercel build traced ${file}`, existsSync(join(func, file)));

// Bundle as Vercel would (one script; .wasm?module becomes a WebAssembly.Module),
// from a copy of the function alone: its imports must resolve within it.
const esbuild = require('esbuild');
const wasmFiles = [];
const alone = join(mkdtempSync(join(tmpdir(), 'lasm-vercel-func-')), 'lasm.func');
cpSync(func, alone, { recursive: true });
const bundle = await esbuild.build({ entryPoints: [join(alone, 'api/lasm.mjs')], bundle: true, write: false, format: 'iife', globalName: 'lasmFunction',
  platform: 'browser', target: 'es2022', logLevel: 'silent',
  plugins: [{ name: 'wasm-module', setup(build) {
    build.onResolve({ filter: /\.wasm\?module$/ }, args => ({ path: resolve(args.resolveDir, args.path.replace(/\?module$/, '')), namespace: 'wasm' }));
    build.onLoad({ filter: /.*/, namespace: 'wasm' }, args => { wasmFiles.push(args.path); return { contents: `export default globalThis.__lasmWasm[${wasmFiles.length - 1}];`, loader: 'js' }; });
  } }] });
const code = bundle.outputFiles[0].text + `\naddEventListener('fetch', event => event.respondWith(lasmFunction.default(event.request, {})));`;
const gzip = gzipSync(Buffer.concat([Buffer.from(code), ...wasmFiles.map(f => readFileSync(f))]), { level: 9 }).length;
result.bundle = { jsBytes: code.length, wasmBytes: wasmFiles.reduce((n, f) => n + statSync(f).size, 0), gzipBytes: gzip };
check('within Vercel Edge Hobby code limit (1 MB gzip)', gzip < 1024 * 1024, { gzip });

const { EdgeRuntime } = require('edge-runtime');
const modules = wasmFiles.map(file => new WebAssembly.Module(readFileSync(file)));
const runtime = new EdgeRuntime({ initialCode: code, extend: context => Object.assign(context, { __lasmWasm: modules }) });
const request = async ({ method = 'GET', path, send, type }) => {
  const response = await runtime.dispatchFetch('http://vercel.local' + path, { method, body: send, headers: type ? { 'content-type': type } : {} });
  return { status: response.status, body: await response.text() };
};
for (const c of app.checks) {
  const got = await request(c).catch(error => ({ status: 'error', body: String(error) }));
  const ok = got.status === c.status && (c.body === undefined || got.body === c.body) && (!c.match || c.match.test(got.body));
  check(`edge-runtime ${c.method ?? 'GET'} ${c.path}`, ok, ok ? {} : { got });
}
if (app.fatal) {
  const got = await request(app.fatal).catch(error => ({ status: 'error', body: String(error) }));
  check(`edge-runtime ${app.fatal.path} fails the request`, got.status !== 200);
  const after = await request(app.fatal.after).catch(error => ({ status: 'error', body: String(error) }));
  check('a stopped instance is replaced', after.status === 200 && after.body === app.fatal.after.body, { after });
}
const n = 1000, path = app.bench.trivial; for (let i = 0; i < 100; i++) await request({ path });
const t = performance.now(); for (let i = 0; i < n; i++) await request({ path });
result.msPerRequest = +((performance.now() - t) / n).toFixed(3);
result.passed = result.checks.every(c => c.ok);
writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result));
if (!result.passed) process.exitCode = 1;
