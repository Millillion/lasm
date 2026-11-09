// The browser loader (src/browser/loader.mjs) in-process: it runs only inside
// built pages, so here its bundled imports (the configuration, the glue and
// startLean) are stand-ins (test/fixtures/loader-stand-ins/), the page is a
// small stand-in document and fetch answers with a tiny Wasm module. Checks
// preload, mount and its options, failures, the app handle, unmount, mountAll
// and auto-mount.
import assert from 'node:assert/strict';
import { test, afterEach } from 'node:test';
import { registerHooks } from 'node:module';

const standIn = new URL('./fixtures/loader-stand-ins/index.mjs', import.meta.url).href;
registerHooks({
  resolve(specifier, context, next) {
    if ((context.parentURL ?? '').includes('/src/browser/loader.mjs') && ['./config.mjs', './program.mjs', './edge-start.mjs'].includes(specifier))
      return { url: standIn, shortCircuit: true };
    return next(specifier, context);
  },
});
const { state, configure } = await import(standIn);
const createProgram = (await import(standIn)).default;

// The smallest valid Wasm module.
const wasm = new Uint8Array([0, 97, 115, 109, 1, 0, 0, 0]);
const realFetch = globalThis.fetch;
let fetches = [];
function serve({ status = 200, statusText = 'OK', type = 'application/wasm' } = {}) {
  fetches = [];
  globalThis.fetch = async (url, init) => { fetches.push({ url: String(url), init }); return new Response(status === 200 ? wasm : 'missing', { status, statusText, headers: type ? { 'content-type': type } : {} }); };
}

class Element extends EventTarget {
  constructor(attributes = {}) { super(); this.nodeType = 1; this.attributes = attributes; this.children = ['server-rendered']; }
  getAttribute(name) { return Object.hasOwn(this.attributes, name) ? this.attributes[name] : null; }
  hasAttribute(name) { return Object.hasOwn(this.attributes, name); }
  replaceChildren(...nodes) { this.children = nodes; }
}
function page(elements = [], readyState = 'complete') {
  const listeners = [];
  return {
    readyState, listeners, elements,
    querySelector: selector => elements.find(e => e.attributes.id === selector.replace(/^#/, '')) ?? null,
    querySelectorAll(selector) { assert.equal(selector, '[data-lasm-app]'); return elements.filter(e => e.hasAttribute('data-lasm-app')); },
    addEventListener(type, fn, options) { listeners.push({ type, fn, options }); },
  };
}

/** A stand-in Lean instance as startLean returns it. */
function instance({ exitCode = 0, stopped = null, embedder = null, jspi = false } = {}) {
  const lean = {
    disposed: 0, stops: [], closes: [], onStops: [],
    lasmExitCode: exitCode,
    lasmEdge: { stopped, jspi, onStop(fn) { lean.onStops.push(fn); }, close(message) { lean.closes.push(message); } },
    lasmStopCause: error => new Error(`cause: ${error?.message ?? error}`),
    lasmDispose() { lean.disposed++; },
    lasmEdgeHost: { js: { stop(error) { lean.stops.push(error.message); } } },
    lasmContext: { app: embedder },
  };
  return lean;
}

let fresh = 0;
async function loader(config = {}, document) {
  configure(config);
  state.starts = [];
  if (document === undefined) delete globalThis.document; else globalThis.document = document;
  return import(new URL(`../src/browser/loader.mjs?${fresh++}`, import.meta.url).href);
}
afterEach(() => { globalThis.fetch = realFetch; delete globalThis.document; });

test('loader: preload fetches and compiles the Wasm once, streaming when the type is right', async () => {
  serve();
  const { preload, timings, name } = await loader({ name: 'shop' });
  assert.equal(name, 'shop');
  assert.equal(fetches.length, 0, 'no document: nothing starts at evaluation');
  const first = preload();
  assert.equal(preload(), first, 'one compilation');
  const module = await first;
  assert.ok(module instanceof WebAssembly.Module);
  assert.deepEqual(fetches, [{ url: 'https://app.test/app.0123456789ab.wasm', init: { credentials: 'same-origin' } }]);
  assert.equal(typeof timings().evaluatedAt, 'number');
  assert.ok(performance.getEntriesByName('lasm:evaluated').some(e => e.detail?.name === 'shop'));
  assert.ok(performance.getEntriesByName('lasm:compiled').some(e => e.detail?.name === 'shop'));

  // The streaming path for application/wasm; the buffered path for a wrong type.
  const { compileStreaming, compile } = WebAssembly;
  const used = [];
  WebAssembly.compileStreaming = async response => { used.push('streaming'); return compileStreaming(response); };
  WebAssembly.compile = async bytes => { used.push(['buffered', bytes.byteLength]); return compile(bytes); };
  try {
    serve({ type: 'application/wasm' });
    await (await loader()).preload();
    // Parameters: compileStreaming would reject the response, so the buffered path (a regression test).
    serve({ type: 'application/wasm; charset=binary' });
    await (await loader()).preload();
    serve({ type: 'application/octet-stream' });
    await (await loader()).preload();
    serve({ type: null });
    await (await loader()).preload();
    serve({ type: 'text/plain; x=application/wasm' });
    await (await loader()).preload();
    // Without compileStreaming (older browsers): buffered.
    delete WebAssembly.compileStreaming;
    serve();
    await (await loader()).preload();
  } finally { WebAssembly.compileStreaming = compileStreaming; WebAssembly.compile = compile; }
  assert.deepEqual(used, ['streaming', ['buffered', 8], ['buffered', 8], ['buffered', 8], ['buffered', 8], ['buffered', 8]]);
});

test('loader: an HTTP error names the app, the URL and the status', async () => {
  serve({ status: 404, statusText: 'Not Found', type: 'text/plain' });
  await assert.rejects((await loader({ name: 'shop' })).preload(), { message: 'Lasm app shop: https://app.test/app.0123456789ab.wasm answered HTTP 404 Not Found' });
  serve({ status: 500, statusText: '', type: 'text/plain' });
  await assert.rejects((await loader({ name: 'shop' })).preload(), { message: 'Lasm app shop: https://app.test/app.0123456789ab.wasm answered HTTP 500' });
});

test('loader: with a document, compilation starts at evaluation; a failure there is left for mount', async () => {
  serve({ status: 404, statusText: 'Not Found' });
  const { mount } = await loader({}, page());
  assert.equal(fetches.length, 1);
  await new Promise(r => setTimeout(r, 10));
  await assert.rejects(mount(new Element()), /^Error: Lasm app demo failed to start: Lasm app demo: .* answered HTTP 404 Not Found$/);
});

test('loader: mount starts Lean on the element with its options; the app handle', async () => {
  serve();
  const delivered = [];
  const embedder = { deliver: async message => { delivered.push(message); return 'ok'; }, ports: { counter: 'port' }, hotSave: () => ({ count: 3 }) };
  const lean = instance({ embedder, jspi: true });
  state.startLean = async () => lean;
  const element = new Element({ id: 'app' });
  const { mount, appOf } = await loader({ name: 'shop', suspend: 'jspi', modules: { 'lasm:app': { x: 1 } } }, page([element]));
  const errors = [];
  const app = await mount('#app', { flags: { user: 'ada' }, hydrate: 1, hotState: { count: 2 }, onError: error => errors.push(error.message), stdout: () => {} });
  const [start] = state.starts;
  assert.equal(start.createProgram, createProgram);
  assert.ok(start.wasmModule instanceof WebAssembly.Module);
  assert.deepEqual(start.modules, { 'lasm:app': { x: 1 } });
  assert.equal(start.jspi, true, 'jspi follows the build\'s --suspend');
  assert.deepEqual(start.args, []);
  assert.deepEqual({ ...start.context, report: undefined }, { target: 'browser', root: element, flags: { user: 'ada' }, hydrate: true, hotState: { count: 2 }, report: undefined });
  start.context.report(new Error('reported'));
  assert.deepEqual(errors, ['reported']);
  assert.ok(performance.getEntriesByName('lasm:mounted').some(e => e.detail?.name === 'shop' && typeof e.detail.startMs === 'number'));

  assert.ok(Object.isFrozen(app));
  assert.equal(app.element, element);
  assert.equal(app.name, 'shop');
  assert.equal(app.ports, embedder.ports);
  assert.equal(await app.send('hello'), 'ok');
  assert.deepEqual(delivered, ['hello']);
  assert.deepEqual(app.hotSave(), { count: 3 });
  assert.equal(app.jspi, true);
  assert.equal(app.stopped, false);
  assert.ok(Object.isFrozen(app.options));
  assert.deepEqual(app.options.flags, { user: 'ada' });
  assert.equal(appOf(element), app);
  assert.equal(appOf(new Element()), null);
  // A stop of the instance reaches onError with its cause.
  lean.onStops[0](new Error('trap'));
  assert.deepEqual(errors, ['reported', 'cause: trap']);
  await assert.rejects(mount(element), { message: 'Lasm app shop: this element already has a mounted app; unmount it first' });

  // Unmount: disposes, stops the instance, empties the element (once).
  app.unmount();
  assert.equal(lean.disposed, 1);
  assert.deepEqual(lean.stops, ['Lasm app shop was unmounted']);
  assert.deepEqual(lean.closes, ['Lasm app shop was unmounted']);
  assert.deepEqual(element.children, []);
  assert.equal(app.stopped, true);
  assert.equal(appOf(element), null);
  app.unmount();
  assert.equal(lean.disposed, 1);
  // Mounted again, unmounted without clearing.
  element.children = ['kept'];
  const again = await mount(element, { stdout: () => {} });
  again.unmount({ clear: false });
  assert.deepEqual(element.children, ['kept']);
});

test('loader: options and defaults: jspi, Firefox, stdout and stderr sinks, errors without onError', async () => {
  serve();
  const lean = instance();
  state.startLean = async () => lean;
  const { mount } = await loader({ suspend: 'none' });
  const logs = [], errs = [];
  const { log, error } = console;
  console.log = line => logs.push(line); console.error = line => errs.push(line);
  try {
    const app = await mount(new Element());
    const [start] = state.starts;
    assert.equal(start.jspi, false);
    assert.deepEqual({ ...start.context, report: undefined, root: undefined }, { target: 'browser', root: undefined, flags: undefined, hydrate: false, hotState: undefined, report: undefined });
    start.stdout('out line'); start.stderr('err line');
    start.context.report('no handler');
    assert.deepEqual(logs, ['out line']);
    assert.deepEqual(errs, ['err line', 'no handler']);
    lean.onStops[0](new Error('quiet'));  // no onError: nothing thrown
    assert.equal(app.jspi, false);
    // No embedder: send rejects, ports are empty.
    await assert.rejects(app.send(1), { message: 'Lasm app demo does not receive messages (it does not use Lasm.Web.App)' });
    assert.deepEqual(app.ports, {});
    assert.ok(Object.isFrozen(app.ports));
    assert.equal(app.hotSave(), undefined);
    await mount(new Element(), { jspi: true });
    assert.equal(state.starts[1].jspi, true, 'mount({ jspi }) overrides the build');
  } finally { console.log = log; console.error = error; }
  const sink = [];
  await mount(new Element(), { stderr: line => sink.push(line) });
  state.starts[2].stderr('to the sink');
  assert.deepEqual(sink, ['to the sink']);
  // Firefox: no JSPI (docs/BROWSER.md).
  const navigator = Object.getOwnPropertyDescriptor(globalThis, 'navigator');
  Object.defineProperty(globalThis, 'navigator', { value: { userAgent: 'Mozilla/5.0 (X11; Linux x86_64; rv:155.0) Gecko/20100101 Firefox/155.0' }, configurable: true });
  try {
    const { mount: firefoxMount } = await loader({ suspend: 'jspi' });
    await firefoxMount(new Element());
    assert.equal(state.starts[0].jspi, false);
    Object.defineProperty(globalThis, 'navigator', { value: { userAgent: 'Mozilla/5.0 Chrome/140.0 Safari/537.36' }, configurable: true });
    await firefoxMount(new Element());
    assert.equal(state.starts[1].jspi, true);
    Object.defineProperty(globalThis, 'navigator', { value: {}, configurable: true });
    await firefoxMount(new Element());
    assert.equal(state.starts[2].jspi, true);
  } finally { Object.defineProperty(globalThis, 'navigator', navigator); }
});

test('loader: mount failures: no element, a start that throws, main failing or stopping', async () => {
  serve();
  const { mount, appOf } = await loader({ name: 'shop' }, page([]));
  for (const target of [null, '#missing', { nodeType: '1' }, 42])
    await assert.rejects(mount(target), error => error instanceof TypeError && error.message === `Lasm app shop: mount needs an element or a selector that matches one (${String(target)})`);
  const element = new Element();
  let partial;
  state.startLean = async options => { partial = instance(); options.stderr('boot'); throw new Error('instantiate failed'); };
  await assert.rejects(mount(element, { stderr: () => {} }), error => {
    assert.equal(error.message, 'Lasm app shop failed to start: instantiate failed');
    assert.equal(error.cause.message, 'instantiate failed');
    return true;
  });
  assert.equal(appOf(element), null);
  state.startLean = async () => { throw 'a string'; };
  await assert.rejects(mount(element), { message: 'Lasm app shop failed to start: a string' });
  // main returned non-zero: the last stderr line, else the code.
  let lean;
  state.startLean = async options => { lean = instance({ exitCode: 3 }); for (let i = 0; i < 25; i++) options.stderr(`line ${i}`); return lean; };
  await assert.rejects(mount(element, { stderr: () => {} }), { message: 'Lasm app shop failed to start: line 24' });
  assert.equal(lean.disposed, 1);
  state.startLean = async () => (lean = instance({ exitCode: '2' }));
  await assert.rejects(mount(element), { message: 'Lasm app shop failed to start: main returned 2' });
  state.startLean = async () => (lean = instance({ exitCode: undefined, stopped: new Error('unreachable executed') }));
  await assert.rejects(mount(element), { message: 'Lasm app shop failed to start: cause: unreachable executed' });
  assert.equal(lean.disposed, 1);
  // After each failure the element can be mounted.
  state.startLean = async () => instance();
  assert.equal((await mount(element)).element, element);
  void partial;
});

test('loader: mountAll mounts this app\'s marked elements with their flags; events report each result', async () => {
  serve();
  state.startLean = async () => instance();
  const mine = new Element({ 'data-lasm-app': '', 'data-lasm-flags': '{"n":1}', 'data-lasm-hydrate': '' });
  const named = new Element({ 'data-lasm-app': 'shop' });
  const other = new Element({ 'data-lasm-app': 'blog' });
  const broken = new Element({ 'data-lasm-app': 'shop', 'data-lasm-flags': '{bad' });
  const empty = new Element({ 'data-lasm-app': '', 'data-lasm-flags': '' });
  const unmarked = new Element({});
  const events = [];
  for (const element of [mine, named, other, broken, empty, unmarked]) {
    element.addEventListener('lasm:mounted', event => events.push(['mounted', element, event.detail.element]));
    element.addEventListener('lasm:error', event => events.push(['error', element, event.detail.message]));
  }
  const document = page([mine, named, other, broken, empty, unmarked]);
  const { mountAll } = await loader({ name: 'shop' }, document);
  const errors = [];
  const { error } = console;
  console.error = e => errors.push(e);
  let apps, second;
  try { apps = await mountAll(); second = await mountAll(); } finally { console.error = error; }
  assert.equal(apps.length, 4);
  assert.deepEqual(apps.map(app => app?.element ?? null), [mine, named, null, empty]);
  assert.deepEqual(state.starts.map(s => [s.context.root, s.context.flags, s.context.hydrate]), [[mine, { n: 1 }, true], [named, undefined, false], [empty, undefined, false]]);
  assert.deepEqual(events.filter(e => e[0] === 'mounted').map(e => e[1]), [mine, named, empty]);
  assert.ok(events.filter(e => e[0] === 'mounted').every(e => e[1] === e[2]));
  const failure = events.find(e => e[0] === 'error');
  assert.equal(failure[1], broken);
  assert.match(failure[2], /^Lasm app shop: data-lasm-flags is not JSON \(.+\)$/);
  // Mounted elements are skipped the next time (the broken one is tried again); a root narrows the search.
  assert.deepEqual(second, [null]);
  assert.equal(errors.length, 2);
  assert.ok(errors.every(e => /data-lasm-flags is not JSON/.test(e.message)));
  const inner = new Element({ 'data-lasm-app': '' });
  assert.equal((await mountAll(page([inner]))).length, 1);
});

test('loader: auto-mount runs at evaluation, or once the document has loaded', async () => {
  serve();
  state.startLean = async () => instance();
  const ready = new Element({ 'data-lasm-app': '' });
  await loader({ autoMount: true }, page([ready]));
  await new Promise(r => setTimeout(r, 20));
  assert.equal(state.starts.length, 1);
  assert.equal(state.starts[0].context.root, ready);
  const later = new Element({ 'data-lasm-app': '' });
  const loading = page([later], 'loading');
  await loader({ autoMount: true }, loading);
  await new Promise(r => setTimeout(r, 20));
  assert.equal(state.starts.length, 0);
  assert.equal(loading.listeners.length, 1);
  assert.equal(loading.listeners[0].type, 'DOMContentLoaded');
  assert.deepEqual(loading.listeners[0].options, { once: true });
  loading.listeners[0].fn();
  await new Promise(r => setTimeout(r, 20));
  assert.equal(state.starts.length, 1);
  // Not auto-mounting: nothing is mounted.
  await loader({ autoMount: false }, page([new Element({ 'data-lasm-app': '' })]));
  await new Promise(r => setTimeout(r, 20));
  assert.equal(state.starts.length, 0);
});

test('loader: its default export, and no User Timing', async () => {
  serve();
  const loaded = await loader({ name: 'x' });
  assert.ok(Object.isFrozen(loaded.default));
  assert.deepEqual(Object.keys(loaded.default), ['name', 'mount', 'mountAll', 'preload', 'appOf']);
  assert.equal(loaded.default.mount, loaded.mount);
  assert.equal(loaded.default.name, 'x');
  const { mark } = performance;
  performance.mark = () => { throw new Error('no User Timing'); };
  try {
    const quiet = await loader({ name: 'y' });
    await quiet.preload();
  } finally { performance.mark = mark; }
});

test('loader: more MIME types; no fetch at evaluation; no navigator; a start that throws nothing useful; the start time', async () => {
  const { compileStreaming, compile } = WebAssembly;
  const used = [];
  WebAssembly.compileStreaming = async response => { used.push('streaming'); return compile(await response.arrayBuffer()); };
  WebAssembly.compile = async bytes => { used.push('buffered'); return compile(bytes); };
  try {
    for (const type of [' \tapplication/wasm \t', 'xapplication/wasm', 'application/wasmx', 'application/wasm x']) {
      serve({ type });
      await (await loader()).preload();
    }
  } finally { WebAssembly.compileStreaming = compileStreaming; WebAssembly.compile = compile; }
  assert.deepEqual(used, ['streaming', 'buffered', 'buffered', 'buffered']);
  // A page without fetch at evaluation: compilation waits for preload, which then works.
  delete globalThis.fetch;
  const late = await loader({}, page());
  serve();
  assert.ok(await late.preload() instanceof WebAssembly.Module);
  // No navigator at all (a worker-like host): JSPI as configured.
  state.startLean = async () => instance();
  const navigator = Object.getOwnPropertyDescriptor(globalThis, 'navigator');
  Object.defineProperty(globalThis, 'navigator', { value: undefined, configurable: true });
  try {
    const { mount } = await loader({ suspend: 'jspi' });
    await mount(new Element());
    assert.equal(state.starts[0].jspi, true);
  } finally { Object.defineProperty(globalThis, 'navigator', navigator); }
  // startLean throwing undefined or null.
  const { mount } = await loader({ name: 'n' });
  for (const thrown of [undefined, null]) {
    state.startLean = async () => { throw thrown; };
    await assert.rejects(mount(new Element()), { message: `Lasm app n failed to start: ${thrown}` });
  }
  // The mounted mark's start time is how long startLean took.
  state.startLean = async () => { await new Promise(r => setTimeout(r, 30)); return instance(); };
  await mount(new Element());
  const [mounted] = performance.getEntriesByName('lasm:mounted').filter(e => e.detail?.name === 'n');
  assert.ok(mounted.detail.startMs >= 25 && mounted.detail.startMs < 5000, String(mounted.detail.startMs));
});
