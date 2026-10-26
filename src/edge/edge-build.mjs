// Edge targets (Phase 7, docs/EDGE.md): `lasm build --target workers|vercel-edge|
// netlify-edge|deno-deploy|supabase-edge`. The Node build's compiled program relinked for edge isolates
// (edge-link.mjs, cached per Node build), the pure-JS host, and a generated
// entry module per platform.
import { mkdirSync, readFileSync, writeFileSync, copyFileSync, existsSync, rmSync, renameSync, readdirSync, statSync } from 'node:fs';
import { basename, join, relative, resolve, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createHash } from 'node:crypto';
import { edgeRuntime } from './edge-runtime.mjs';
import { linkEdgeProgram, edgeLinkSettings } from './edge-link.mjs';
import { managedCacheDirectory } from '../managed-artifacts.mjs';
import { readStoreEntry, writeStoreEntry } from '../application-link.mjs';
import { builtinModuleClosure, builtinModuleFile, builtinPrefix, isBuiltinModule } from './builtin-modules.mjs';
import { supabaseFunctionNameOf } from '../init.mjs';
import { noticeBanner, noticesSectionName, targetNotices, withCustomSection } from '../notices.mjs';

const here = fileURLToPath(new URL('./', import.meta.url));
export const edgeHostFiles = ['edge-start.mjs', 'edge-host.mjs', 'edge-js.mjs'];
// Edge targets: the directory Lasm owns (output), and the entry module and
// configuration each platform needs beside the program. An entry outside the
// owned directory is replaced only when Lasm generated it.
export const edgeTargets = {
  workers: { label: 'Cloudflare Workers', supported: true, summary: 'Cloudflare Workers: workers/ (worker.mjs, the program and its host; wrangler.toml when the project has none)', output: 'workers',
    write({ staging, projectDirectory, modules }) {
      writeFileSync(join(staging, 'worker.mjs'), workersEntry(modules));
      const rootConfig = ['wrangler.toml', 'wrangler.json', 'wrangler.jsonc'].find(name => existsSync(join(projectDirectory, name)));
      if (!rootConfig) writeFileSync(join(staging, 'wrangler.toml'), workersConfig(workerName(projectDirectory)));
      return { note: rootConfig && (out => `your ${rootConfig} must use main = "${out}/worker.mjs" and the CompiledWasm rule`) };
    } },
  // Vercel's edge runtime: a zero-config function api/lasm.mjs (Vercel bundles
  // it at deployment); its support files in api/_lasm/, which Vercel does not
  // treat as functions. vercel.json routes every path to it.
  'vercel-edge': { label: 'Vercel Edge', supported: true, summary: 'Vercel Edge Function: api/lasm.mjs and api/_lasm/ (route every path to /api/lasm in vercel.json)', output: 'api/_lasm',
    write({ projectDirectory, modules }) {
      writeGeneratedFile(join(projectDirectory, 'api/lasm.mjs'), vercelEdgeEntry(modules));
      return { note: () => 'the function is api/lasm.mjs' };
    } },
  // Netlify Edge Functions (Deno): netlify/edge-functions/lasm.mjs serves every
  // path (inline config); the program and host in netlify/lasm/. The Wasm is a
  // JavaScript module, so Netlify's Deno bundler carries it.
  'netlify-edge': { label: 'Netlify Edge', supported: true, summary: 'Netlify Edge Function: netlify/edge-functions/lasm.mjs and netlify/lasm/ (serves every path)', output: 'netlify/lasm', inlineWasm: true,
    write({ projectDirectory, modules }) {
      writeGeneratedFile(join(projectDirectory, 'netlify/edge-functions/lasm.mjs'), netlifyEdgeEntry(modules));
      return { note: () => 'the edge function is netlify/edge-functions/lasm.mjs' };
    } },
  // Bun and Deno (Phase 7.5): the portable profile as a program. main.mjs runs
  // Lean's main with the command-line arguments and exits with its code; a
  // program that publishes a handler (Lasm.JS.exportDefault) is served with
  // Bun.serve or Deno.serve instead. Deno Deploy runs the same entry.
  bun: { label: 'Bun', supported: true, summary: 'Bun: bun/ (main.mjs, the program and its host; bun bun/main.mjs)', output: 'bun',
    write({ staging, modules }) {
      writeFileSync(join(staging, 'main.mjs'), portableEntry('bun', modules));
      return { note: () => 'run it with bun bun/main.mjs' };
    } },
  deno: { label: 'Deno', supported: true, summary: 'Deno: deno/ (main.mjs, the program and its host; deno run -A deno/main.mjs)', output: 'deno',
    write({ staging, modules }) {
      writeFileSync(join(staging, 'main.mjs'), portableEntry('deno', modules));
      return { note: () => 'run it with deno run -A deno/main.mjs' };
    } },
  'deno-deploy': { label: 'Deno Deploy', supported: true, summary: 'Deno Deploy: deno/ (main.mjs, the program and its host; entrypoint deno/main.mjs)', output: 'deno',
    write({ staging, modules }) {
      writeFileSync(join(staging, 'main.mjs'), portableEntry('deno-deploy', modules));
      return { note: () => 'the entrypoint is deno/main.mjs (deno run -A deno/main.mjs locally)' };
    } },
  // Supabase Edge Functions: supabase/functions/<name>/ (index.ts, a deno.json
  // import map of the npm modules pinned to the installed versions, the
  // program with the Wasm as a JavaScript module). Supabase's edge runtime
  // (V8 11.6) has no JSPI, so blocking waits suspend with Asyncify.
  'supabase-edge': { label: 'Supabase Edge Functions', summary: 'Supabase Edge Function: supabase/functions/<name>/ (index.ts, deno.json and the program; <name> from package.json)',
    output: projectDirectory => `supabase/functions/${supabaseFunctionName(projectDirectory)}`, inlineWasm: true, suspend: 'asyncify', supported: true,
    write({ staging, projectDirectory, modules }) {
      const name = supabaseFunctionName(projectDirectory);
      writeFileSync(join(staging, 'index.ts'), supabaseEntry(modules, name));
      writeFileSync(join(staging, 'deno.json'), JSON.stringify(supabaseImportMap(projectDirectory, modules), null, 2) + '\n');
      return { note: () => `deploy it with supabase functions deploy ${name}` };
    } },
};

const generatedMarker = '// Generated by Lasm (lasm build --target ';
/** Writes an entry module outside the owned directory, replacing only Lasm's own. */
function writeGeneratedFile(file, text) {
  if (existsSync(file) && !readFileSync(file, 'utf8').startsWith(generatedMarker))
    throw new Error(`${file} exists and was not generated by Lasm; remove or rename it`);
  mkdirSync(dirname(file), { recursive: true });
  writeFileSync(file, text);
}

/** The Wasm as a JavaScript module (targets whose bundlers do not carry .wasm). */
export function inlineWasmModule(bytes) {
  return `// Generated by Lasm: program.wasm as base64 (${bytes.length} bytes), for bundlers that carry only JavaScript.
const text = ${JSON.stringify(Buffer.from(bytes).toString('base64'))};
export default typeof Uint8Array.fromBase64 === 'function' ? Uint8Array.fromBase64(text) : Uint8Array.from(atob(text), c => c.charCodeAt(0));
`;
}

// The request path shared by the Vercel and Netlify entries: Lean starts when
// the module is evaluated (not awaited there: no top-level await), the first
// request waits for it, and a stopped instance is replaced.
const lazyStart = (wasm, env) => `const env = ${env};
const start = async () => {
  delete globalThis.__lasmDefaultExport;
  const lean = await startLean({ createProgram, wasmModule: ${wasm}, env, modules });
  const handler = globalThis.__lasmDefaultExport;
  if (handler === undefined) throw new Error('The Lean program did not call Lasm.JS.exportDefault: nothing handles requests');
  return { lean, handler };
};
let current = start();
current.catch(() => {});
const ready = async () => {
  let instance = await current;
  if (instance.lean.lasmEdge.stopped) instance = await (current = start());
  return instance.handler;
};
const respond = (handler, request, ...rest) => typeof handler === 'function' ? handler(request, ...rest) : handler.fetch(request, ...rest);
`;
// Builtin modules (lasm:<name>) are files of the output: base is the entry's
// path to the program directory (lasm/).
const moduleSource = (name, base) => isBuiltinModule(name) ? `${base}modules/${name.slice(builtinPrefix.length)}.mjs` : name;
const moduleImports = (modules, base = './lasm/') => modules.map((name, i) => `import * as m${i} from ${JSON.stringify(moduleSource(name, base))};`).join('\n');
const moduleMap = modules => `const modules = { ${modules.map((name, i) => `${JSON.stringify(name)}: m${i}`).join(', ')} };`;

export function vercelEdgeEntry(modules) {
  return `// Generated by Lasm (lasm build --target vercel-edge). Rebuilt on every build; do not edit.
// A Vercel Edge Function serving the Lean program's handler (Lasm.JS.exportDefault).
import wasmModule from './_lasm/lasm/program.wasm?module';
import createProgram from './_lasm/lasm/program.mjs';
import { startLean } from './_lasm/lasm/edge-start.mjs';
${moduleImports(modules, './_lasm/lasm/')}
export const config = { runtime: 'edge' };
${moduleMap(modules)}
${lazyStart('wasmModule', "Object.fromEntries(Object.entries(globalThis.process?.env ?? {}).filter(([, value]) => typeof value === 'string'))")}
export default async function lasm(request, context) {
  return respond(await ready(), request, globalThis.process?.env ?? {}, context);
}
`;
}

/** Bun, Deno and Deno Deploy: run main, then serve its handler if it published one. */
export function portableEntry(target, modules) {
  const run = target === 'bun' ? 'bun bun/main.mjs' : 'deno run -A deno/main.mjs';
  return `// Generated by Lasm (lasm build --target ${target}). Rebuilt on every build; do not edit.
// Runs the Lean program on Bun or Deno (${run} [arguments…]): main gets the
// arguments, and its result is the exit code. If main publishes a handler
// (Lasm.JS.exportDefault), the program is a server instead: Bun.serve or
// Deno.serve on PORT (Bun's default 3000, Deno's 8000), as on Deno Deploy.
import { readFile } from 'node:fs/promises';
import { writeSync } from 'node:fs';
import createProgram from './lasm/program.mjs';
import { startLean } from './lasm/edge-start.mjs';
${moduleImports(modules)}
${moduleMap(modules)}
const deno = globalThis.Deno;
const env = deno ? deno.env.toObject() : Object.fromEntries(Object.entries(process.env).filter(([, value]) => typeof value === 'string'));
const args = deno ? deno.args : process.argv.slice(2);
const exit = code => deno ? deno.exit(code) : process.exit(code);
const writer = fd => bytes => { for (let at = 0; at < bytes.length;) at += writeSync(fd, bytes, at); };
const wasmModule = await WebAssembly.compile(await readFile(new URL('./lasm/program.wasm', import.meta.url)));
const start = async () => {
  delete globalThis.__lasmDefaultExport;
  const lean = await startLean({ createProgram, wasmModule, env, modules, args, exit, writers: { 1: writer(1), 2: writer(2) } });
  return { lean, handler: globalThis.__lasmDefaultExport };
};
let current;
try { current = await start(); } catch (error) { console.error(error?.message ?? String(error)); exit(1); }
if (current.handler === undefined) exit(Number(current.lean.lasmExitCode ?? 0) & 255);
// A server: a stopped instance is replaced on the next request.
let restarting = null;
const ready = async () => {
  if (current.lean.lasmEdge.stopped) current = await (restarting ??= start().finally(() => { restarting = null; }));
  return current.handler;
};
const respond = (handler, request, ...rest) => typeof handler === 'function' ? handler(request, ...rest) : handler.fetch(request, ...rest);
if (globalThis.Bun) {
  const server = Bun.serve({ port: Number(env.PORT) || 3000, fetch: async (request, server) => respond(await ready(), request, env, server) });
  console.error(\`Listening on \${server.url}\`);
} else if (deno) deno.serve(env.PORT ? { port: Number(env.PORT) } : {}, async (request, info) => respond(await ready(), request, env, info));
else throw new Error('Serving a Lasm.JS handler needs Bun or Deno; on Node, build with lasm build --target node');
`;
}

/** The Supabase function's name: package.json's name (else the directory's),
 * in the form Supabase accepts (a letter, then letters, digits, - and _). */
export function supabaseFunctionName(projectDirectory) {
  const file = join(projectDirectory, 'package.json');
  return supabaseFunctionNameOf(existsSync(file) ? JSON.parse(readFileSync(file, 'utf8')).name ?? basename(projectDirectory) : basename(projectDirectory));
}

/** deno.json for the function: every npm module the entry imports, mapped to
 * the version installed in the project (npm:name@version), with subpaths. */
export function supabaseImportMap(projectDirectory, modules, resolveVersion = name => installedVersion(projectDirectory, name)) {
  const imports = {};
  for (const specifier of modules) {
    if (/^(?:node|npm|jsr|https?|data|lasm):/.test(specifier) || specifier.startsWith('.') || specifier.startsWith('/')) continue;
    const parts = specifier.split('/');
    const name = specifier.startsWith('@') ? parts.slice(0, 2).join('/') : parts[0];
    if (imports[name]) continue;
    const version = resolveVersion(name);
    imports[name] = `npm:${name}@${version}`;
    imports[name + '/'] = `npm:${name}@${version}/`;
  }
  return { imports };
}
function installedVersion(projectDirectory, name) {
  // node_modules of the project or of a directory above it (workspaces).
  for (let directory = resolve(projectDirectory); ; directory = dirname(directory)) {
    const file = join(directory, 'node_modules', name, 'package.json');
    if (existsSync(file)) return JSON.parse(readFileSync(file, 'utf8')).version;
    if (dirname(directory) === directory) break;
  }
  throw new Error(`The Supabase function imports ${name}, which is not installed: run npm install ${name}, so its version can be pinned in deno.json`);
}

export function supabaseEntry(modules, name) {
  return `// Generated by Lasm (lasm build --target supabase-edge). Rebuilt on every build; do not edit.
// @ts-nocheck
// A Supabase Edge Function serving the Lean program's handler
// (Lasm.JS.exportDefault). Supabase passes /functions/v1/${name}/PATH to the
// function as /${name}/PATH; the handler sees /PATH, as on every other target.
import wasmBytes from './lasm/program.wasm.mjs';
import createProgram from './lasm/program.mjs';
import { startLean } from './lasm/edge-start.mjs';
${moduleImports(modules)}
${moduleMap(modules)}
const compiled = WebAssembly.compile(wasmBytes);
${lazyStart('await compiled', 'Deno.env.toObject()')}const prefix = ${JSON.stringify('/' + name)};
const route = request => {
  const url = new URL(request.url);
  if (url.pathname !== prefix && !url.pathname.startsWith(prefix + '/')) return request;
  url.pathname = url.pathname.slice(prefix.length) || '/';
  return new Request(url, request);
};
Deno.serve(async (request, info) => respond(await ready(), route(request), env, info));
`;
}

export function netlifyEdgeEntry(modules) {
  return `// Generated by Lasm (lasm build --target netlify-edge). Rebuilt on every build; do not edit.
// A Netlify Edge Function (Deno) serving the Lean program's handler (Lasm.JS.exportDefault) on every path.
import wasmBytes from '../lasm/lasm/program.wasm.mjs';
import createProgram from '../lasm/lasm/program.mjs';
import { startLean } from '../lasm/lasm/edge-start.mjs';
${moduleImports(modules, '../lasm/lasm/')}
export const config = { path: '/*' };
${moduleMap(modules)}
const compiled = WebAssembly.compile(wasmBytes);
${lazyStart('await compiled', "globalThis.Netlify?.env?.toObject?.() ?? {}")}
export default async function lasm(request, context) {
  return respond(await ready(), request, globalThis.Netlify?.env?.toObject?.() ?? {}, context);
}
`;
}

// Tested together in CI (.github/workflows/workers.yml).
export const workersCompatibilityDate = '2026-10-01';

/** The JavaScript modules a Worker imports statically: those of Lasm.JS
 * bindings and package.json "lasm": { "edge": { "modules": [...] } } (for
 * `Lasm.JS.require "m"`), minus "exclude" (Node-only modules, such as
 * @hono/node-server, that the program calls only when not on the edge). */
export function edgeModules(projectDirectory, bindings = []) {
  const modules = new Set(bindings.map(binding => binding.module).filter(name => name && name !== 'globalThis'));
  const packageFile = join(projectDirectory, 'package.json');
  if (existsSync(packageFile)) {
    const edge = JSON.parse(readFileSync(packageFile, 'utf8')).lasm?.edge ?? {};
    for (const key of ['modules', 'exclude']) {
      const list = edge[key] ?? [];
      if (!Array.isArray(list) || list.some(name => typeof name !== 'string' || !name))
        throw new Error(`package.json "lasm.edge.${key}" must be an array of module names`);
    }
    for (const name of edge.modules ?? []) modules.add(name);
    for (const name of edge.exclude ?? []) modules.delete(name);
  }
  return [...modules].sort();
}

/** The generated Worker entry module. */
export function workersEntry(modules) {
  const imports = moduleImports(modules);
  return `// Generated by Lasm (lasm build --target workers). Rebuilt on every build; do not edit.
// Lean starts once per isolate in the global scope: its initializers and main
// run here, outside any request's CPU time. main publishes the request handler
// with Lasm.JS.exportDefault (a Hono app, an object with fetch, or a function).
// If the Lean instance stops (for example on stack exhaustion), the next
// request starts a fresh one.
import { env as bindings } from 'cloudflare:workers';
import wasmModule from './lasm/program.wasm';
import createProgram from './lasm/program.mjs';
import { startLean } from './lasm/edge-start.mjs';
${imports}

const modules = { ${modules.map((name, i) => `${JSON.stringify(name)}: m${i}`).join(', ')} };
const env = Object.fromEntries(Object.entries(bindings).filter(([, value]) => typeof value === 'string'));
const start = async () => {
  delete globalThis.__lasmDefaultExport;
  const lean = await startLean({ createProgram, wasmModule, env, modules });
  const handler = globalThis.__lasmDefaultExport;
  if (handler === undefined) throw new Error('The Lean program did not call Lasm.JS.exportDefault: nothing handles requests');
  return { lean, handler };
};
let current = await start();
const ready = async () => {
  if (current.lean.lasmEdge.stopped) current = await start();
  return current.handler;
};

export default {
  async fetch(request, env, ctx) {
    const handler = await ready();
    return typeof handler === 'function' ? handler(request, env, ctx) : handler.fetch(request, env, ctx);
  },
};
`;
}

export function workersConfig(name) {
  return `# Generated by Lasm (lasm build --target workers) because the project has no
# wrangler configuration. Move it to the project root to customize it.
name = ${JSON.stringify(name)}
main = "worker.mjs"
compatibility_date = "${workersCompatibilityDate}"

[[rules]]
type = "CompiledWasm"
globs = ["**/*.wasm"]
fallthrough = false
`;
}

const workerName = directory => {
  const file = join(directory, 'package.json');
  const name = existsSync(file) ? JSON.parse(readFileSync(file, 'utf8')).name : undefined;
  return String(name ?? basename(directory)).toLowerCase().replace(/^@[^/]+\//, '').replace(/[^a-z0-9-]+/g, '-').replace(/^-+|-+$/g, '').slice(0, 54) || 'lasm-app';
};

// Inputs of the linked edge program besides the Node build: the edge link and
// its glue. The host modules (edge-*.mjs) are copied at delivery, not linked.
const linkSources = ['edge-link.mjs', 'edge-initializers.mjs', 'edge-pre.js', 'edge-library.js', 'lasm_js_edge.c',
  ...['recipe-emscripten-6.0.9-edge.json', 'link.mjs', 'glue.mjs', 'settings.mjs', 'metadata.mjs', 'wasm.mjs', 'python.mjs'].map(file => '../link-driver/' + file)];
const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');

/** The edge program's cache identity: the Node build's signature (its objects
 * and initializer plan), the edge runtime, the edge link and its settings. */
export function edgeProgramKey({ result, edge, suspend = 'jspi' }) {
  // Schema 1 keys (JSPI) are unchanged.
  return sha256(JSON.stringify({ schema: 1, node: result.signature, runtime: edge.identity, settings: edgeLinkSettings, suspend,
    sources: Object.fromEntries(linkSources.map(file => [file, sha256(readFileSync(join(here, file)))])) }));
}

/** Edge programs are cached beside the Node build's cache entry (one per key). */
/** How the target's blocking waits suspend (edge-link.mjs edgeSuspendModes). */
export const edgeTargetSuspend = target => edgeTargets[target]?.suspend ?? 'jspi';
const cacheRoot = result => join(dirname(dirname(result.cached)), 'edge');
function cachedProgram(result, key) {
  const directory = join(cacheRoot(result), key);
  try {
    const meta = JSON.parse(readFileSync(join(directory, 'program.json'), 'utf8'));
    if (meta.key !== key) return null;
    for (const [file, digest] of Object.entries(meta.files)) if (sha256(readFileSync(join(directory, file))) !== digest) return null;
    return { directory, meta };
  } catch { return null; }
}

/** Phase 1 of an edge build: the cached program for an unchanged Node build, or null. */
export async function findEdgeProgram({ result, nodeRuntime, suspend = 'jspi' }) {
  const edge = await edgeRuntime(nodeRuntime);
  const key = edgeProgramKey({ result, edge, suspend });
  return { edge, key, suspend, cached: cachedProgram(result, key) };
}

/** Emscripten's JavaScript link steps reused by content (src/link-driver/link.mjs
 * jsStepCache), in the same machine-wide store as the Node link's. */
function edgeStepCache() {
  const store = join(managedCacheDirectory(), 'objects');
  return {
    get: key => readStoreEntry(join(store, `js-${key}.txt`))?.toString('utf8'),
    set: (key, text) => { try { mkdirSync(store, { recursive: true }); writeStoreEntry(join(store, `js-${key}.txt`), Buffer.from(text)); } catch { /* not cached */ } },
  };
}

/** Dev edge links (src/edge/edge-link.mjs `members`): the record lives beside the cached programs. */
function edgeMembers(root, edge) {
  const file = join(root, '.dev-members.json');
  let record;
  try { record = JSON.parse(readFileSync(file, 'utf8')); if (record.edge !== edge.identity) record = undefined; } catch { /* none yet */ }
  return { record, directory: join(managedCacheDirectory(), 'members', 'edge-' + String(edge.identity).slice(0, 32)),
    save(next) { try { mkdirSync(root, { recursive: true }); writeFileSync(file, JSON.stringify({ edge: edge.identity, ...next })); } catch { /* not recorded */ } } };
}

/** Phase 2 (cache miss): link the program from a build made with keepLinkWork and cache it. */
export function linkCachedEdgeProgram({ result, nodeRuntime, edge, key, sdk, suspend = 'jspi', verbose = false }) {
  if (!result.linkWork) throw new Error('The edge build needs the Node build\'s link inputs (internal error)');
  const root = cacheRoot(result), directory = join(root, key), staging = join(root, '.' + key + '.' + process.pid + '.partial');
  rmSync(staging, { recursive: true, force: true });
  let link;
  // A dev Node build (lasm dev) gets the edge link's dev profile; deployable edge builds are release builds.
  try { link = linkEdgeProgram({ sdk, nodeRuntime, edge, linkWork: result.linkWork, out: join(staging, '.link'), suspend, verbose,
    optimize: result.profile !== 'dev', stepCache: edgeStepCache(), members: result.profile === 'dev' ? edgeMembers(root, edge) : undefined }); }
  catch (error) { rmSync(staging, { recursive: true, force: true }); throw error; }
  copyFileSync(link.program, join(staging, 'program.mjs'));
  copyFileSync(link.wasm, join(staging, 'program.wasm'));
  // LASM_KEEP_LINK_WORK keeps the link's intermediates (its -Map file, for size analysis).
  if (process.env.LASM_KEEP_LINK_WORK) renameSync(join(staging, '.link'), join(staging, 'link-work'));
  else rmSync(join(staging, '.link'), { recursive: true, force: true });
  const meta = { key, suspend: link.suspend, files: Object.fromEntries(['program.mjs', 'program.wasm'].map(file => [file, sha256(readFileSync(join(staging, file)))])) };
  writeFileSync(join(staging, 'program.json'), JSON.stringify(meta, null, 2) + '\n');
  // One cached program per application and suspension: older keys are superseded.
  const suspendOf = entry => { try { return JSON.parse(readFileSync(join(root, entry, 'program.json'), 'utf8')).suspend; } catch { return null; } };
  for (const entry of readdirSync(root)) if (entry !== key && !entry.startsWith('.') && [link.suspend, null].includes(suspendOf(entry)))
    rmSync(join(root, entry), { recursive: true, force: true });
  rmSync(directory, { recursive: true, force: true });
  renameSync(staging, directory);
  return { directory, meta };
}

/** Phase 3: write the target's output (program, host, entry module, config). */
export function writeEdgeOutput({ target, source, projectDirectory, result, edge, program, log = console.error, output, cacheHit = false }) {
  if (!edgeTargets[target]) throw new Error(`Unknown edge target ${target}`);
  const owned = edgeTargets[target].output;
  const destination = resolve(output ?? join(projectDirectory, typeof owned === 'function' ? owned(projectDirectory) : owned));
  if (destination === resolve(projectDirectory) || !relative(destination, source).startsWith('..'))
    throw new Error('The edge output directory must not contain the Lean sources');
  // The output directory belongs to Lasm: replace only an earlier edge build.
  if (existsSync(destination)) {
    let owned = false;
    try { owned = JSON.parse(readFileSync(join(destination, 'build-info.json'), 'utf8')).profile === 'edge'; } catch { /* not ours */ }
    if (!owned) throw new Error(`${destination} exists and is not a Lasm edge build; remove it or move it`);
  }
  const staging = destination + '.lasm-staging';
  rmSync(staging, { recursive: true, force: true });
  const programDirectory = join(staging, 'lasm');
  mkdirSync(programDirectory, { recursive: true });
  // Targets whose bundlers carry only JavaScript get the Wasm as a module instead.
  const inline = edgeTargets[target].inlineWasm;
  // Licences travel with the deployment (src/notices.mjs): THIRD_PARTY_NOTICES.txt,
  // a legal banner on the bundled glue, and the notices inside the Wasm.
  const notices = targetNotices(readFileSync(join(result.output, 'THIRD_PARTY_NOTICES.txt'), 'utf8'), 'edge', { label: edgeTargets[target].label });
  const glue = Buffer.from(noticeBanner(notices, edgeTargets[target].label, 'THIRD_PARTY_NOTICES.txt, also embedded in program.wasm as its lasm.notices section') + readFileSync(join(program.directory, 'program.mjs'), 'utf8'));
  const wasmBytes = withCustomSection(readFileSync(join(program.directory, 'program.wasm')), noticesSectionName, notices);
  writeFileSync(join(programDirectory, 'program.mjs'), glue);
  if (inline) writeFileSync(join(programDirectory, 'program.wasm.mjs'), inlineWasmModule(wasmBytes));
  else writeFileSync(join(programDirectory, 'program.wasm'), wasmBytes);
  for (const file of edgeHostFiles) copyFileSync(join(here, file), join(programDirectory, file));
  const modules = edgeModules(projectDirectory, result.jsBindings ?? []);
  // Lasm's builtin modules (lasm:<name>) the program uses, with those they import.
  const builtins = builtinModuleClosure(modules);
  if (builtins.length) mkdirSync(join(programDirectory, 'modules'));
  for (const name of builtins) copyFileSync(builtinModuleFile(name), join(programDirectory, 'modules', name.slice(builtinPrefix.length) + '.mjs'));
  // The entry module is written after the owned directory is in place.
  let written;
  writeFileSync(join(staging, 'THIRD_PARTY_NOTICES.txt'), notices);
  const info = { schema: 1, target, profile: 'edge', buildProfile: result.profile ?? 'release', experimental: !edgeTargets[target].supported, nodeBuildSignature: result.signature, lean: result.lean,
    edgeRuntime: edge.manifest.files, link: { ...edgeLinkSettings, suspend: program.meta.suspend }, wasm: inline ? 'lasm/program.wasm.mjs' : 'lasm/program.wasm', programKey: program.meta.key, modules,
    files: { 'lasm/program.mjs': sha256(glue), 'lasm/program.wasm': sha256(wasmBytes) } };
  writeFileSync(join(staging, 'build-info.json'), JSON.stringify(info, null, 2) + '\n');
  rmSync(destination, { recursive: true, force: true });
  mkdirSync(dirname(destination), { recursive: true });
  renameSync(staging, destination);
  written = edgeTargets[target].write({ staging: destination, projectDirectory, modules });
  const wasmSize = wasmBytes.length;
  log(`${cacheHit ? 'Reused' : 'Built'} ${relative(process.cwd(), source) || source} for ${edgeTargets[target].label}${edgeTargets[target].supported ? '' : ' (experimental)'}: ${relative(process.cwd(), destination) || destination}`
    + ` (program.wasm ${(wasmSize / 1048576).toFixed(2)} MiB${written.note ? '; ' + written.note(relative(projectDirectory, destination)) : ''})`);
  return { output: destination, info };
}
