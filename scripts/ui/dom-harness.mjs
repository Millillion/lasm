// Runs a browser build (lasm build --target browser) in Node against happy-dom,
// for tests and measurements that need the real Wasm program and loader but no
// browser (browsers run only in CI). The page's globals (window, document,
// fetch of the build's files, requestAnimationFrame, …) are installed on
// globalThis before the loader is imported; one page per process.
//   const page = await openApp(dist, { url, html })
//   const app = await page.mount('#app', { flags })
import { readFileSync, readdirSync } from 'node:fs';
import { join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { Window } from 'happy-dom';

const types = { '.wasm': 'application/wasm', '.js': 'text/javascript', '.json': 'application/json', '.html': 'text/html' };

export async function openApp(dist, { url = 'https://app.test/', html = '<div id="app"></div>', autoMount = false, server } = {}) {
  const window = new Window({ url, settings: { disableJavaScriptEvaluation: true, disableJavaScriptFileLoading: true, disableCSSFileLoading: true } });
  window.document.body.innerHTML = html;
  const manifest = JSON.parse(readFileSync(join(dist, 'lasm-manifest.json'), 'utf8'));
  // The build's files, served from memory.
  const nodeFetch = globalThis.fetch;
  const fetchFile = async (input, init) => {
    const target = new URL(typeof input === 'string' ? input : String(input.url ?? input), url);
    // Requests for a running server (full-stack apps: /rpc/…) go to it.
    if (server && !target.pathname.match(/\/app\.[0-9a-f]+\.(js|wasm)$/)) return nodeFetch(new URL(target.pathname + target.search, server), init);
    const file = join(dist, decodeURIComponent(target.pathname.split('/').at(-1)));
    const ext = file.slice(file.lastIndexOf('.'));
    return new Response(readFileSync(file), { status: 200, headers: { 'content-type': types[ext] ?? 'application/octet-stream' } });
  };
  const globals = {
    window, document: window.document, location: window.location, history: window.history, navigator: window.navigator,
    localStorage: window.localStorage, sessionStorage: window.sessionStorage,
    requestAnimationFrame: f => window.requestAnimationFrame(f), cancelAnimationFrame: h => window.cancelAnimationFrame(h),
    CustomEvent: window.CustomEvent, Event: window.Event, HTMLElement: window.HTMLElement, Node: window.Node,
    fetch: fetchFile,
  };
  for (const [k, v] of Object.entries(globals)) Object.defineProperty(globalThis, k, { value: v, configurable: true, writable: true });
  window.fetch = fetchFile;
  const entry = manifest.entry ?? readdirSync(dist).find(f => /^app\.[0-9a-f]+\.js$/.test(f));
  const loader = await import(pathToFileURL(join(dist, entry)).href);
  const frame = () => new Promise(resolve => window.requestAnimationFrame(() => resolve()));
  return {
    window, document: window.document, loader, manifest,
    mount: (target, options) => loader.mount(target, options),
    /** Waits for the next animation frame (the app renders on it). */
    frame,
    async settle(frames = 2) { for (let i = 0; i < frames; i++) await frame(); },
    click(selector) {
      const el = window.document.querySelector(selector);
      if (!el) throw new Error(`no element ${selector}`);
      el.dispatchEvent(new window.MouseEvent('click', { bubbles: true, cancelable: true, button: 0 }));
    },
    type(selector, text) {
      const el = window.document.querySelector(selector);
      if (!el) throw new Error(`no element ${selector}`);
      el.value = text;
      el.dispatchEvent(new window.Event('input', { bubbles: true }));
    },
    key(selector, key) {
      const el = window.document.querySelector(selector);
      if (!el) throw new Error(`no element ${selector}`);
      el.dispatchEvent(new window.KeyboardEvent('keydown', { bubbles: true, cancelable: true, key }));
    },
    close: () => window.happyDOM.close(),
  };
}
