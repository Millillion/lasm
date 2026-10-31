// Serves the `vercel build` output of the Vercel Edge build
// (.vercel/output/functions/api/lasm.func) in Vercel's open-source edge
// runtime (the `edge-runtime` package, which `next dev` uses for edge code)
// on 127.0.0.1:PORT. The function is bundled with esbuild first, as Vercel
// bundles edge functions at deployment (`.wasm?module` imports become
// WebAssembly modules). `vercel dev` needs a Vercel login, so it is not used.
//   node test/vercel-edge-serve.mjs PORT
// edge-runtime and esbuild come from VERCEL_EDGE_TOOLS (a directory with them
// in node_modules).
import { existsSync, readFileSync } from 'node:fs';
import { createRequire } from 'node:module';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));
const port = Number(process.argv[2]);
const func = join(root, '.vercel/output/functions/api/lasm.func');
const config = JSON.parse(readFileSync(join(func, '.vc-config.json'), 'utf8'));
if (config.runtime !== 'edge') throw new Error(`${func} is not an edge function: ${JSON.stringify(config)}`);
const tools = process.env.VERCEL_EDGE_TOOLS;
if (!tools || !existsSync(join(tools, 'node_modules/edge-runtime'))) throw new Error('Set VERCEL_EDGE_TOOLS to a directory with edge-runtime and esbuild installed');
const require = createRequire(join(resolve(tools), 'package.json'));
const esbuild = require('esbuild');
const wasmFiles = [];
const bundle = await esbuild.build({
  entryPoints: [join(func, config.entrypoint)], bundle: true, write: false, format: 'iife', globalName: 'lasmFunction',
  platform: 'browser', target: 'es2022', nodePaths: [join(root, 'node_modules')], logLevel: 'error',
  plugins: [{ name: 'wasm-module', setup(build) {
    build.onResolve({ filter: /\.wasm\?module$/ }, args => ({ path: resolve(args.resolveDir, args.path.replace(/\?module$/, '')), namespace: 'wasm' }));
    build.onLoad({ filter: /.*/, namespace: 'wasm' }, args => {
      wasmFiles.push(args.path);
      return { contents: `export default globalThis.__lasmWasm[${wasmFiles.length - 1}];`, loader: 'js' };
    });
  } }],
});
// The environment the function sees (process.env on Vercel Edge).
const env = Object.fromEntries(['JWT_SECRET'].filter(k => process.env[k]).map(k => [k, process.env[k]]));
const code = `globalThis.process ??= { env: ${JSON.stringify(env)} };\n` + bundle.outputFiles[0].text +
  `\naddEventListener('fetch', event => event.respondWith(lasmFunction.default(event.request, {})));`;
const { EdgeRuntime, runServer } = require('edge-runtime');
const modules = wasmFiles.map(file => new WebAssembly.Module(readFileSync(file)));
const runtime = new EdgeRuntime({ initialCode: code, extend: context => Object.assign(context, { __lasmWasm: modules }) });
const server = await runServer({ runtime, port, host: '127.0.0.1' });
console.log(`Vercel edge-runtime serving ${func} at ${server.url}`);
for (const signal of ['SIGTERM', 'SIGINT']) process.on(signal, async () => { await server.close(); process.exit(0); });
