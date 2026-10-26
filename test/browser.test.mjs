// The browser target (docs/BROWSER.md): Lasm's builtin modules (lasm:<name>),
// the loader bundle, the generated page and the CLI options. The Wasm program
// in real browsers is tested by .github/workflows/browser.yml.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, writeFileSync, readFileSync, mkdirSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { pathToFileURL } from 'node:url';
import { builtinModuleNames, builtinModuleFile, builtinModuleClosure } from '../src/edge/builtin-modules.mjs';
import { bundleModules, compactModule, emscriptenModule } from '../src/browser/bundle.mjs';
import { browserBundle, browserConfigModule, defaultIndexHtml, injectIndexHtml, browserAppName } from '../src/browser/browser-build.mjs';
import { parseLasmArguments } from '../src/cli-arguments.mjs';
import { workersEntry, vercelEdgeEntry, netlifyEdgeEntry, portableEntry } from '../src/edge/edge-build.mjs';
import { linkedLibraryModules, libraryModules } from '../src/lasm-library.mjs';

test('builtin modules: lasm:<name> is src/lasm-modules/<name>.mjs', () => {
  const names = builtinModuleNames();
  for (const name of ['app', 'web']) assert.ok(names.includes(name), name);
  assert.match(builtinModuleFile('lasm:web'), /lasm-modules[\\/]web\.mjs$/);
  assert.throws(() => builtinModuleFile('lasm:nope'), /Unknown Lasm builtin JavaScript module "lasm:nope". Builtin modules: .*lasm:web/);
  assert.throws(() => builtinModuleFile('lasm:../x'), /Unknown Lasm builtin/);
  assert.deepEqual(builtinModuleClosure(['hono', 'lasm:web', 'lasm:app']), ['lasm:web', 'lasm:app']);
});

test('builtin modules: relative imports between builtins are followed', () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-builtins-'));
  writeFileSync(join(directory, 'a.mjs'), "import { b } from './b.mjs';\nexport const a = () => b();\n");
  writeFileSync(join(directory, 'b.mjs'), 'export const b = () => 1;\n');
  assert.deepEqual(builtinModuleClosure(['lasm:a'], directory), ['lasm:b', 'lasm:a']);
});

test('builtin modules: every builtin module uses web-standard JavaScript only', () => {
  for (const name of builtinModuleNames()) {
    const text = readFileSync(builtinModuleFile('lasm:' + name), 'utf8');
    assert.doesNotMatch(text, /from ['"]node:|require\(|\bprocess\.|\bBuffer\b/, name);
  }
});

test('edge entries import builtin modules from the output', () => {
  assert.match(workersEntry(['hono', 'lasm:web']), /import \* as m1 from "\.\/lasm\/modules\/web\.mjs";/);
  assert.match(workersEntry(['lasm:web']), /const modules = \{ "lasm:web": m0 \};/);
  assert.match(vercelEdgeEntry(['lasm:web']), /from "\.\/_lasm\/lasm\/modules\/web\.mjs"/);
  assert.match(netlifyEdgeEntry(['lasm:web']), /from "\.\.\/lasm\/lasm\/modules\/web\.mjs"/);
  assert.match(portableEntry('deno', ['lasm:web']), /from "\.\/lasm\/modules\/web\.mjs"/);
});

test('library modules: only those a program initializes, and their imports', () => {
  const library = { 'Lasm.JS.Core': '', 'Lasm.JS.Json': 'initialize_Lasm_JS_Core(', 'Lasm.JS.Meta': 'initialize_Lasm_JS_Core(',
    'Lasm.JS': 'initialize_Lasm_JS_Core( initialize_Lasm_JS_Json( initialize_Lasm_JS_Meta(' };
  const libraryText = module => library[module] ?? '';
  const read = text => text;
  assert.deepEqual(linkedLibraryModules(['initialize_Lasm_JS('], { read, libraryText }), libraryModules.filter(m => m.startsWith('Lasm.JS')));
  assert.deepEqual(linkedLibraryModules(['initialize_Lasm_JS_Core('], { read, libraryText }), ['Lasm.JS.Core']);
  assert.deepEqual(linkedLibraryModules(['nothing'], { read, libraryText }), []);
});

test('bundler: modules become scopes; the entry keeps its exports', async () => {
  const bundle = bundleModules({
    './main.mjs': "import { twice } from './lib/math.mjs';\nimport helper from './lib/helper.mjs';\nimport * as ns from './lib/math.mjs';\nexport const run = () => twice(helper()) + ns.one;\nexport default run;\n",
    './lib/math.mjs': "export const one = 1;\nconst hidden = 2;\nexport function twice(x) { return x * hidden; }\n",
    './lib/helper.mjs': "import { one } from './math.mjs';\nexport default () => one + 20;\n",
  }, './main.mjs', { header: '// test' });
  const directory = mkdtempSync(join(tmpdir(), 'lasm-bundle-'));
  writeFileSync(join(directory, 'b.mjs'), bundle);
  const m = await import(pathToFileURL(join(directory, 'b.mjs')).href);
  assert.equal(m.run(), 43);
  assert.equal(m.default(), 43);
  assert.equal(bundle.match(/const __lasm\d+ = /g).length, 2, 'each module once');
  assert.throws(() => bundleModules({ './m.mjs': "export * from './x.mjs';\n" }, './x.mjs'), /no module/);
  assert.throws(() => bundleModules({ './m.mjs': "import x from './y.mjs';\n", './y.mjs': 'export * from "./z.mjs";\n' }, './m.mjs'), /unsupported export/);
  assert.throws(() => bundleModules({ './m.mjs': "import x from 'pkg';\n" }, './m.mjs'), /only relative imports/);
  const external = bundleModules({ './m.mjs': "import * as p from './p.mjs';\nexport const x = p;\n", './p.mjs': "import * as pkg from 'pkg';\nexport const y = pkg;\n" }, './m.mjs', { external: s => s === 'pkg' });
  assert.match(external, /^import \* as __lasmExternal0 from "pkg";$/m);
});

test('bundler: comment lines and indentation go; template literals stay intact', () => {
  assert.equal(compactModule('// a\n  const x = 1; // keep\n/**\n * doc\n */\n\n  y();\n'), 'const x = 1; // keep\ny();');
  const template = 'const t = `\n  // not a comment\n`;\n';
  assert.equal(compactModule(template), template);
});

test('bundler: Emscripten glue has exactly one export', () => {
  assert.equal(emscriptenModule('async function Module(a={}){var importPattern=1;return import.meta.url}export default Module;'),
    'async function Module(a={}){var importPattern=1;return import.meta.url}\nexport default Module;');
  assert.throws(() => emscriptenModule('var x;'), /no final export default/);
  assert.throws(() => emscriptenModule('import x from "y";function M(){}export default M;'), /static import/);
});

test('loader bundle: one module with the app name, the hashed Wasm URL and the builtins', async () => {
  const glue = 'async function Module(moduleArg={}){return moduleArg}export default Module;';
  const bundle = browserBundle({ programGlue: glue, name: 'demo', wasmFile: 'app.0123456789ab.wasm', modules: ['lasm:app', 'lasm:web'], suspend: 'none', autoMount: false });
  assert.match(bundle, /new URL\("\.\/app\.0123456789ab\.wasm", import\.meta\.url\)/);
  assert.doesNotMatch(bundle, /^import /m, 'no imports left');
  const directory = mkdtempSync(join(tmpdir(), 'lasm-loader-'));
  writeFileSync(join(directory, 'app.mjs'), bundle);
  const loader = await import(pathToFileURL(join(directory, 'app.mjs')).href);
  assert.equal(loader.name, 'demo');
  for (const name of ['mount', 'mountAll', 'preload', 'appOf']) assert.equal(typeof loader[name], 'function', name);
  assert.equal(loader.default.mount, loader.mount);
  await assert.rejects(loader.mount(null), /mount needs an element/);
  assert.match(browserConfigModule({ name: 'x', wasmFile: 'a.wasm', modules: ['lasm:web', 'https://esm.sh/x'], suspend: 'jspi' }),
    /import \* as m0 from "\.\/modules\/web\.mjs";\nimport \* as m1 from "https:\/\/esm\.sh\/x";/);
});

test('index.html: generated with preload hints, or the project page with the loader injected', () => {
  const files = { entry: 'app.0123456789ab.js', wasm: 'app.ba9876543210.wasm', name: 'demo<x>' };
  const page = defaultIndexHtml(files);
  assert.match(page, /<link rel="modulepreload" href="\.\/app\.0123456789ab\.js">/);
  assert.match(page, /<link rel="preload" href="\.\/app\.ba9876543210\.wasm" as="fetch" type="application\/wasm" crossorigin>/);
  assert.match(page, /<div id="app" data-lasm-app><\/div>/);
  assert.match(page, /<title>demo&lt;x&gt;<\/title>/);
  const injected = injectIndexHtml('<html><head><title>Mine</title></head><body><main data-lasm-app></main></body></html>', files);
  assert.match(injected, /<title>Mine<\/title>\s+<!-- Generated by Lasm[^>]*-->\s+<link rel="modulepreload"[^>]*>\s+<link rel="preload"[^>]*>\s+<script type="module" src="\.\/app\.0123456789ab\.js"><\/script>\s+<\/head>/);
  assert.throws(() => injectIndexHtml('<html><body></body></html>', files), /no <\/head>/);
});

test('app name: package.json name without scope, else the directory', () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-name-'));
  mkdirSync(join(directory, 'my app'));
  assert.equal(browserAppName(join(directory, 'my app')), 'my-app');
  writeFileSync(join(directory, 'package.json'), JSON.stringify({ name: '@me/counter' }));
  assert.equal(browserAppName(directory), 'counter');
});

test('CLI: --target browser and --suspend', () => {
  const options = parseLasmArguments(['build', 'Main.lean', '--target', 'browser', '--suspend', 'jspi']);
  assert.equal(options.target, 'browser');
  assert.equal(options.suspend, 'jspi');
  assert.equal(options.output, 'dist');
  assert.throws(() => parseLasmArguments(['build', 'Main.lean', '--suspend', 'jspi']), /--suspend applies to lasm build --target browser/);
  assert.throws(() => parseLasmArguments(['build', 'Main.lean', '--target', 'browser', '--suspend', 'asyncify']), /--suspend requires one of: none, jspi/);
});

test('lasm:app: ports, messages and unmount handlers per instance', async () => {
  const app = await import('../src/lasm-modules/app.mjs');
  assert.throws(() => app.root(), /only available in an app mounted by the browser loader/);
  const disposers = [];
  const context = { target: 'browser', root: { nodeType: 1 }, flags: { n: 2 }, hydrate: true, onDispose: fn => disposers.push(fn) };
  const instance = app.lasmInstance(context);
  assert.equal(instance.root(), context.root);
  assert.deepEqual(instance.flags(), { n: 2 });
  assert.equal(instance.hydrating(), true);
  // Messages sent before Lean registers its handler are delivered once it does.
  const early = context.app.deliver('early');
  const seen = [];
  instance.onMessage(message => { seen.push(message); });
  await early;
  await context.app.deliver('late');
  assert.deepEqual(seen, ['early', 'late']);
  // Ports: JavaScript → Lean (listen) and Lean → JavaScript (subscribe).
  const port = instance.port('count');
  const received = [];
  const unsubscribe = context.app.ports.count.subscribe(value => received.push(value));
  port.emit(1);
  unsubscribe();
  port.emit(2);
  assert.deepEqual(received, [1]);
  const toLean = [];
  await context.app.ports.count.send('queued');
  port.listen(value => { toLean.push(value); });
  await context.app.ports.count.send('direct');
  assert.deepEqual(toLean, ['queued', 'direct']);
  assert.deepEqual(Object.keys(context.app.ports), ['count']);
  let unmounted = 0;
  instance.onUnmount(() => { unmounted++; });
  for (const fn of disposers) fn();
  assert.equal(unmounted, 1);
  await assert.rejects(context.app.deliver('after'), /unmounted/);
});

test('lasm:web: listeners and timers of an app are removed when it unmounts', async () => {
  const web = await import('../src/lasm-modules/web.mjs');
  const disposers = [];
  const instance = web.lasmInstance({ onDispose: fn => disposers.push(fn) });
  const target = new EventTarget();
  let clicks = 0, fired = false;
  instance.listen(target, 'click', () => { clicks++; });
  const once = instance.listen(target, 'click', () => { clicks += 10; }, { once: true });
  target.dispatchEvent(new Event('click'));
  target.dispatchEvent(new Event('click'));
  assert.equal(clicks, 12);
  once.remove();
  instance.setTimeout(() => { fired = true; }, 5);
  for (const fn of disposers) fn();
  target.dispatchEvent(new Event('click'));
  assert.equal(clicks, 12, 'listener removed');
  await new Promise(resolve => setTimeout(resolve, 20));
  assert.equal(fired, false, 'timer cleared');
  assert.equal(web.parseUrl('/x?a=1', 'https://example.com/base').href, 'https://example.com/x?a=1');
  assert.equal(web.parseUrl('not a url'), null);
  assert.throws(() => web.document(), /Lasm.Web: document needs a browser \(document is not defined here\)/);
});

test('lasm:web: an app instance has every export of the module', async () => {
  const web = await import('../src/lasm-modules/web.mjs');
  const instance = web.lasmInstance({ onDispose() {} });
  assert.deepEqual(Object.keys(web).filter(name => name !== 'lasmInstance' && !(name in instance)), []);
  const id = instance.setTimeout(() => {}, 1000);
  assert.equal(typeof id, 'number', 'numeric timer ids on every host');
  instance.clearTimeout(id);
});

test('every lasm:web and lasm:app binding of Lasm.Web names an export', async () => {
  const { readdirSync } = await import('node:fs');
  const exports = { 'lasm:web': await import('../src/lasm-modules/web.mjs'), 'lasm:app': await import('../src/lasm-modules/app.mjs') };
  const directory = new URL('../library/Lasm/Web/', import.meta.url);
  let count = 0;
  for (const file of readdirSync(directory).filter(f => f.endsWith('.lean'))) {
    for (const [, module, name] of readFileSync(new URL(file, directory), 'utf8').matchAll(/@\[js "(lasm:[a-z-]+)" "([^"]+)"\]/g)) {
      count++;
      assert.equal(typeof exports[module][name], 'function', `${file}: ${module} ${name}`);
    }
  }
  assert.ok(count > 80, `${count} bindings`);
});

test('compact initializers: kept units run once, in the original chain order', async () => {
  const { initializationSchedule, compactInitializerWrappers } = await import('../src/edge/edge-initializers.mjs');
  // initialize_Main -> A (skipped) -> [K1 (kept), B (skipped) -> K2 (kept)], K2 -> K1
  const calls = { initialize_Main: ['initialize_A'], initialize_A: ['initialize_K1', 'initialize_B'], initialize_B: ['initialize_K2'],
    initialize_K2: ['initialize_K1'], initialize_K1: [] };
  const keep = new Set(['initialize_Main', 'initialize_K1', 'initialize_K2']);
  assert.deepEqual(initializationSchedule('initialize_Main', calls, keep), ['initialize_K1', 'initialize_K2']);
  const c = compactInitializerWrappers({ schema: 1, closure: Object.keys(calls), keep: [...keep], calls });
  assert.match(c, /__wrap_initialize_A\(uint8_t\) __attribute__\(\(alias\("lasm_initializer_skip"\)\)\);/);
  assert.match(c, /res = __wrap_initialize_K1\(builtin\);[^\n]*\n  res = __wrap_initialize_K2\(builtin\);[^\n]*\n  return __real_initialize_Main\(builtin\);/);
  assert.throws(() => compactInitializerWrappers({ schema: 1, closure: ['bad name'], keep: [], calls: {} }), /Unexpected initializer name/);
});

test('lasm dev --target browser: arguments', () => {
  assert.deepEqual(parseLasmArguments(['dev', '--target', 'browser']), { command: 'dev', target: 'browser', release: false, watch: true, port: 5173, host: '127.0.0.1', input: 'Main.lean' });
  assert.equal(parseLasmArguments(['dev', 'App.lean', '--target=browser', '--release', '--no-watch', '--port', '8080']).port, 8080);
  assert.throws(() => parseLasmArguments(['dev', 'Main.lean']), /needs --target browser/);
  assert.deepEqual(parseLasmArguments(['dev', '--help']), { command: 'dev-help' });
});

test('static server: MIME types, precompressed files, caching, live reload', async () => {
  const { startStaticServer } = await import('../src/browser/static-server.mjs');
  const { brotliCompressSync } = await import('node:zlib');
  const root = mkdtempSync(join(tmpdir(), 'lasm-static-'));
  writeFileSync(join(root, 'index.html'), '<html><body>hi</body></html>');
  writeFileSync(join(root, 'app.0123456789ab.wasm'), Buffer.from([0, 97, 115, 109]));
  writeFileSync(join(root, 'app.0123456789ab.wasm.br'), brotliCompressSync(Buffer.from([0, 97, 115, 109])));
  const server = await startStaticServer(root, { liveReload: true });
  try {
    const wasm = await fetch(server.url + 'app.0123456789ab.wasm', { headers: { 'accept-encoding': 'br' } });
    assert.equal(wasm.headers.get('content-type'), 'application/wasm');
    assert.equal(wasm.headers.get('content-encoding'), 'br');
    assert.match(wasm.headers.get('cache-control'), /immutable/);
    assert.deepEqual([...new Uint8Array(await wasm.arrayBuffer())], [0, 97, 115, 109]);
    const page = await fetch(server.url + 'some/route');
    assert.match(await page.text(), /EventSource\('\/__lasm\/events'\)/, 'SPA fallback with the reload client');
    // A raw request path that tries to leave the root stays inside it (URL normalization).
    const { request } = await import('node:http');
    const body = await new Promise((resolve, reject) => request(server.url + 'x', { path: '/../../etc/passwd' }, r => { let t = ''; r.on('data', c => t += c).on('end', () => resolve(t)); }).on('error', reject).end());
    assert.doesNotMatch(body, /root:/);
  } finally { await server.close(); }
});
