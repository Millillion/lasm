// The browser loader of a Lasm app (lasm build --target browser; docs/BROWSER.md).
// Bundled with the program's glue, the host and Lasm's builtin modules into
// app.<hash>.js (src/browser/bundle.mjs). Evaluating it starts compiling the
// Wasm (streamed while it downloads); mount() starts one Lean instance on an
// element; elements marked data-lasm-app are mounted automatically.
import { name, wasmUrl, modules, suspend, autoMount } from './config.mjs';
import createProgram from './program.mjs';
import { startLean } from './edge-start.mjs';

const mark = (label, detail) => { try { performance.mark(label, detail === undefined ? undefined : { detail }); } catch { /* no User Timing */ } };
mark('lasm:evaluated', { name });
const evaluatedAt = performance.now();

let compiling = null;
/** Starts (once) and returns the compilation of the app's WebAssembly. The
 * download and compilation overlap (WebAssembly.compileStreaming); a server
 * that sends the wrong MIME type gets the buffered path instead. */
export function preload() {
  return compiling ??= (async () => {
    const url = wasmUrl();
    const response = await fetch(url, { credentials: 'same-origin' });
    if (!response.ok) throw new Error(`Lasm app ${name}: ${url} answered HTTP ${response.status} ${response.statusText}`.trimEnd());
    const type = response.headers.get('content-type') ?? '';
    const module = typeof WebAssembly.compileStreaming === 'function' && /^application\/wasm\b/i.test(type)
      ? await WebAssembly.compileStreaming(response)
      : await WebAssembly.compile(await response.arrayBuffer());
    mark('lasm:compiled', { name });
    return module;
  })();
}
// Compilation starts as soon as the module is evaluated.
if (typeof fetch === 'function' && typeof document !== 'undefined') preload().catch(() => { /* reported by mount */ });

const apps = new WeakMap();
const parseFlags = text => {
  if (text === null || text === undefined || text === '') return undefined;
  try { return JSON.parse(text); } catch (error) { throw new Error(`Lasm app ${name}: data-lasm-flags is not JSON (${error.message})`); }
};

/**
 * Starts the Lean program on `target` (an element or a selector): its
 * initializers and `main` run, with the element as `Lasm.Web.App.root`.
 * options: flags (any JSON-like value: Lasm.Web.App.flags), hydrate (adopt
 * server-rendered content: Lasm.Web.App.hydrating), jspi (let blocking waits
 * suspend where the browser has JSPI; default from the build's --suspend),
 * onError(error) (the instance stopped), stdout/stderr (line sinks; default
 * console.log / console.error).
 * Resolves to { element, name, send(message), ports, unmount(), stopped }
 * once main has returned; rejects if main fails.
 */
export async function mount(target, options = {}) {
  const element = typeof target === 'string' ? document.querySelector(target) : target;
  if (!element || typeof element.nodeType !== 'number') throw new TypeError(`Lasm app ${name}: mount needs an element or a selector that matches one (${String(target)})`);
  if (apps.has(element)) throw new Error(`Lasm app ${name}: this element already has a mounted app; unmount it first`);
  const record = { app: null };
  apps.set(element, record);
  const { flags, hydrate = false, jspi = suspend === 'jspi', onError, stdout = line => console.log(line), hotState } = options;
  const errors = [];
  const stderr = line => { errors.push(line); if (errors.length > 20) errors.shift(); (options.stderr ?? (l => console.error(l)))(line); };
  let lean;
  try {
    const wasmModule = await preload();
    const started = performance.now();
    lean = await startLean({ createProgram, wasmModule, modules, jspi, stdout, stderr, args: [],
      context: { target: 'browser', root: element, flags, hydrate: !!hydrate, hotState, report: error => (onError ?? (e => console.error(e)))(error) } });
    mark('lasm:mounted', { name, startMs: performance.now() - started });
  } catch (error) {
    apps.delete(element);
    lean?.lasmDispose?.();
    throw new Error(`Lasm app ${name} failed to start: ${error?.message ?? error}`, { cause: error });
  }
  const code = Number(lean.lasmExitCode ?? 0);
  if (lean.lasmEdge.stopped || code !== 0) {
    lean.lasmDispose();
    apps.delete(element);
    const reason = lean.lasmEdge.stopped?.message ?? (errors.at(-1) || `main returned ${code}`);
    throw new Error(`Lasm app ${name} failed to start: ${reason}`);
  }
  lean.lasmEdge.onStop(error => onError?.(error));
  const embedder = lean.lasmContext.app;
  let unmounted = false;
  const app = Object.freeze({
    element, name,
    /** Delivers a message to the handler Lean registered (Lasm.Web.App.onMessage). */
    send: message => embedder ? embedder.deliver(message) : Promise.reject(new Error(`Lasm app ${name} does not receive messages (it does not use Lasm.Web.App)`)),
    /** ports.<name>.send(value) (to Lean) and ports.<name>.subscribe(fn) (from Lean). */
    ports: embedder ? embedder.ports : Object.freeze({}),
    get stopped() { return unmounted || !!lean.lasmEdge.stopped; },
    /** The state the app saves for a hot reload (Lasm.Web.App.onHotSave); mount({ hotState }) restores it. */
    hotSave: () => embedder?.hotSave(),
    /** The options this app was mounted with. */
    options: Object.freeze({ ...options }),
    /** Runs Lean's unmount handlers, removes the app's listeners, timers and
     * sockets, ends the instance and (unless clear is false) empties the element. */
    unmount({ clear = true } = {}) {
      if (unmounted) return;
      unmounted = true;
      try { lean.lasmDispose(); } finally {
        lean.lasmEdgeHost.js.stop(new Error(`Lasm app ${name} was unmounted`));
        lean.lasmEdge.close(`Lasm app ${name} was unmounted`);
        apps.delete(element);
        if (clear) element.replaceChildren();
      }
    },
  });
  record.app = app;
  return app;
}

/** The app mounted on `element`, if any. */
export const appOf = element => apps.get(element)?.app ?? null;

/** Mounts every element under `root` marked data-lasm-app (empty, or this
 * app's name), with data-lasm-flags (JSON) and data-lasm-hydrate. Each element
 * receives a lasm:mounted (detail: the app) or lasm:error (detail: the error) event. */
export function mountAll(root = document) {
  const selected = [...root.querySelectorAll('[data-lasm-app]')].filter(element => {
    const wanted = element.getAttribute('data-lasm-app');
    return (wanted === '' || wanted === name) && !apps.has(element);
  });
  return Promise.all(selected.map(async element => {
    try {
      const app = await mount(element, { flags: parseFlags(element.getAttribute('data-lasm-flags')), hydrate: element.hasAttribute('data-lasm-hydrate') });
      element.dispatchEvent(new CustomEvent('lasm:mounted', { detail: app }));
      return app;
    } catch (error) {
      console.error(error);
      element.dispatchEvent(new CustomEvent('lasm:error', { detail: error }));
      return null;
    }
  }));
}

if (autoMount && typeof document !== 'undefined') {
  const run = () => { mountAll(); };
  if (document.readyState === 'loading') document.addEventListener('DOMContentLoaded', run, { once: true });
  else run();
}

/** Startup timings of this page's copy of the app (milliseconds since the loader was evaluated). */
export const timings = () => ({ evaluatedAt });

export { name };
export default Object.freeze({ name, mount, mountAll, preload, appOf });
