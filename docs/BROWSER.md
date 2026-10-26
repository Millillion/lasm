# Lean in the browser (Phase 8)

Status: **the platform half is in branch source and measured in CI
(2026-10-26):** `lasm build --target browser`, the loader and mount API,
builtin `lasm:*` modules, `Lasm.Web`, `@lasm/vite`, `lasm init --template web`
and the browser CI. `Lasm.UI` (Html, diff, patch protocol, `html!`, SSR,
proofs) is built against it on branch `browser-ui`. This document is the
contract; sections are marked *measured* as they land.

Goal: a whole frontend written in Lean, DOM and all, so that a full stack
(browser, server, serverless, edge) can be written and formally verified in one
language. The bar is excellence: a loading story a web developer recognises,
small downloads, fast start, fast updates, and a clean typed API.

## Decisions

| Topic | Decision | Why |
| --- | --- | --- |
| Runtime | The **edge runtime** (single-threaded cooperative Lean runtime, wasm64 code lowered to 32-bit memory, pure-JS host, web-standard APIs only). | Already built and verified on V8, JSC and workerd; no threads, no `SharedArrayBuffer`, so no COOP/COEP headers are needed. |
| Suspension | **Sync behaviour** by default (measured: the recorded JSPI link run without JSPI; see Measured below). `Async`, timers, `fetch`, promises and events work through the event pump; blocking waits (`Task.get` on unfinished work, `IO.sleep`, `Async.block`) stop with a clear message. | Safari has no JSPI; a UI thread must never block anyway. One build runs in Chrome, Edge, Firefox and Safari. `--suspend jspi` stays available. |
| Exceptions | Legacy Wasm EH (what the edge build emits). | Supported by every evergreen engine including Safari 15.2+. |
| Output | `lasm build --target browser` → `dist/`: `index.html` (only if the project has none), `app.<hash>.js` (ES-module loader, a few KiB), `app.<hash>.wasm`, precompressed `.br`/`.gz` siblings, `lasm-manifest.json`. | Content hashes allow immutable caching; precompressed files serve from any static host or CDN. |
| Loading | `WebAssembly.compileStreaming(fetch(url))` started at module evaluation, in parallel with `<link rel="modulepreload">` and `<link rel="preload" as="fetch" crossorigin>`. Fallback to `arrayBuffer` + `compile` when the server sends the wrong MIME type. | Compilation overlaps download; no blocking on the parser. |
| Mount API | `import { mount } from './app.<hash>.js'; const app = await mount(element, { flags })` returns `{ unmount(), send(msg), ports }`. Also auto-mount: `<div data-lasm-app></div>` + `<script type="module" src="app.<hash>.js">`. Several apps can mount on one page. | Works in a plain page, inside React/Vue/Svelte apps, and in CMS pages. |
| Bundlers | `@lasm/vite` plugin: `import app from './Main.lean?lasm'` in dev and build; dev server rebuilds on save and hot-reloads, preserving the model when its type is unchanged. esbuild/webpack/Rollup consume `dist/` as plain ES modules and assets. | Vite is the default frontend toolchain; nothing else needs special support. |
| DOM model | **The Elm architecture (`Lasm.UI`)**: `init`, pure `update : Msg → Model → Model × Cmd Msg`, pure `view : Model → Html Msg`, `subscriptions`. Diffing runs **in Lean** and emits a compact binary patch stream; a small JS applier (`lasm:ui-dom`) applies it, one boundary crossing per frame (requestAnimationFrame batching). | Pure `update`/`view` are exactly what Lean can prove theorems about; one crossing per frame avoids per-node call overhead. |
| Imperative escape hatch | `Lasm.Web`: typed bindings for the web platform (DOM nodes and events, `fetch`, timers, `requestAnimationFrame`, storage, `history`/`location`, `URL`, `FormData`, WebSocket, `crypto`, `console`, canvas 2D basics) on `Lasm.JS`. `Lasm.UI` interoperates through ports and `Cmd`s. | Core platform bindings, not premade npm bindings; anything else uses `@[js]` bindings as on Node. |
| Markup | Both a function DSL (`div [class_ "x", onClick .inc] [text "hi"]`) and a JSX-like `html!` syntax (`<div class="x" onClick={.inc}>hi</div>`), with tag/attribute checking at elaboration. | Familiar to web developers; still plain Lean terms. |
| SSR | `Html.render : Html Msg → String` runs anywhere (server, edge, Node); `mount` with `{ hydrate: true }` adopts server-rendered DOM. | Fast first paint and SEO for full-stack apps. |
| Full stack | `Lasm.RPC`: shared Lean API types and functions; the server mounts them on Hono/Fastify/edge fetch handlers, the browser calls them through generated typed clients over `fetch` (JSON via `ToJson`/`FromJson` derivations). Template `fullstack`. | One language, one set of types, end to end. |
| Verification story | Ship proofs, not claims: the TodoMVC example proves invariants of `update`; `Lasm.UI` proves its diff correct against a pure DOM model (`apply (diff a b) (render a) = render b`). | The pitch is formal verification of the whole stack. |

## Measured (browser CI run 40283097537, source `609d391`, 2026-10-26)

[`browser.yml`](../.github/workflows/browser.yml) builds the web template
(`lasm init --template web`), the [`Lasm.Web` platform suite](../test/browser/platform/Main.lean)
and a Vite app, and runs them headless in pinned Playwright 1.63.0. Every check
passed on **Chromium 153** and **Firefox 155** (`ubuntu-24.04`) and **WebKit 26.6**
(`macos-15`, and `ubuntu-24.04`): 3 counter checks and 60 platform checks per
engine (all `Lasm.Web` areas, clicks, typing, keys with modifiers,
`preventDefault`, pointer offsets, form submission with `FormData`, `fetch`
(text, JSON, bytes, headers, 404, form bodies, timeouts and aborts) to the local
server, WebSocket echo (text and binary), canvas pixels, history, storage,
crypto digests, the console, ports and messages, a second app on the page,
unmount, and a blocking wait stopping its instance).

| Measure | Value |
| --- | --- |
| Web template (counter, `Lasm.Web`), transfer | **129.1 KiB brotli** (wasm 109.9 KiB + loader 19.2 KiB), 164.9 KiB gzip, 549 KiB uncompressed |
| Platform suite (every `Lasm.Web` module), transfer | 185.3 KiB brotli |
| Start, module evaluated → first frame, counter, warm (HTTP-cached files) | **38 ms Chromium**, 62 ms Firefox, 45 ms WebKit macOS |
| First build / unchanged rebuild, counter (Linux runner) | 62 s / 3.9 s |
| Dev rebuild after editing one view expression | 11.8 s (budget 2 s: not met; the Node build stage dominates) |
| Same source, local and CI | byte-identical `app.<hash>.wasm` and `.js` |

**How the link is shared.** The browser uses the edge program linked with the
recorded JSPI link (the same cached link as `--target workers`): its Wasm has no
JSPI transformation, only its glue wraps one import (`lasm_edge_wait`) and two
exports in `WebAssembly.Suspending`/`promising`. Inside the module those become
identities when the engine has no JSPI or the loader runs without it (the
default), so blocking waits stop the instance with a message, as a sync link
would. `--suspend jspi` lets them suspend where the browser has JSPI. This
replaces the planned separate sync link (which would have needed a second
recorded link mode for under 1 KB of saving).

**Size work so far.** Edge and browser links regenerate the initializer
wrappers without call chains ([edge-initializers.mjs](../src/edge/edge-initializers.mjs)):
the web template keeps 6 of 2,807 module initializers, and the chains of the
skipped ones were 460 KB of pre-optimization code. Counter: 167.3 → 129.1 KiB
brotli. The loader drops comment lines and indentation of Lasm's own modules.
Programs link only the `Lasm.*` library modules they import.

## Budgets (measured in CI, recorded per release)

`scripts/browser/evidence.mjs` checks them on every run: the counter transfer
and the Chromium start are enforced; the rebuild time is recorded.


| Metric | Budget |
| --- | --- |
| Counter app, total transfer (brotli) | ≤ 160 KiB |
| TodoMVC, total transfer (brotli) | ≤ 200 KiB |
| Start (module evaluated → first frame), wasm cached, CI Chromium | ≤ 60 ms |
| 1,000-row create / update every 10th row (js-framework-benchmark style) | within 2× vanilla JS |
| Incremental rebuild after editing one `view` function (dev profile) | ≤ 2 s on the Linux runner |

## Builtin JavaScript modules (`lasm:*`)

**In branch source (2026-10-26).** Lasm ships its own JavaScript modules for the
Lean libraries that need a JavaScript side (`lasm:web` for `Lasm.Web`,
`lasm:app` for the mounted app, `lasm:ui-dom` for `Lasm.UI`'s patch applier):

- **Name and file.** `lasm:<name>` is the ES module
  [`src/lasm-modules/<name>.mjs`](../src/lasm-modules/). Names are lower case
  (`[a-z][a-z0-9-]*`). A builtin module uses web-standard APIs only (no Node
  built-ins, no `Buffer`, no `process`), and imports only other builtin modules,
  by relative path on a line of its own (`import { x } from './web.mjs';`).
- **Lean side.** Bind it like any module: `@[js "lasm:ui-dom" "apply"] opaque
  apply : Value → ByteArray → IO Unit`, or `Lasm.JS.require "lasm:ui-dom"`.
  Bindings declared in Lasm's own library (`library/Lasm/…`) are read from the
  library's module data when a program links that library module, so they are
  checked at build time and resolved statically like the program's own.
- **Resolution, per target.** Browser builds bundle the module (and the
  builtins it imports) into the loader `app.<hash>.js`. Edge and portable builds
  (`workers`, `vercel-edge`, `netlify-edge`, `deno`, `bun`, `deno-deploy`)
  copy it to `lasm/modules/<name>.mjs` and import it from the generated entry.
  Node builds copy every builtin to `host/lasm-modules/`. The build-time binding
  check loads it from `src/lasm-modules/`, so every export a binding names must
  exist there (as a function) even if it only works in a browser.
- **Per-app state.** A module that keeps state per app (a node table, listeners)
  exports `lasmInstance(context)`; each Lean instance then sees the object it
  returns instead of the shared module. `context` is `{ target, root, flags,
  hydrate, report(error), onDispose(fn) }`: `target` is `'browser'` or `'edge'`,
  `root` the mounted element (browser), `onDispose` registers cleanup run on
  unmount or when the instance stops. Several apps on one page therefore never
  share builtin-module state.
- **Unknown names** fail the build with the list of builtins.

## Patch protocol (`lasm:ui-dom`)

**In branch source (2026-10-26).** Lasm.UI ([UI.md](UI.md)) keeps the live
tree (the last view with node ids) in Lean; `diff` (proved correct against a
DOM model, [UI.md](UI.md#what-is-proved)) produces a patch, which
[Encode.lean](../library/Lasm/UI/Encode.lean) writes as one `ByteArray` per
frame. The applier [`lasm:ui-dom`](../src/lasm-modules/ui-dom.mjs) (one
instance per mounted app, about 300 lines) keeps an id → `Node` table; the
mount element is node 0.

Integers are unsigned LEB128; strings are a byte length and UTF-8 bytes.
Names (tags, attribute, property, style and event names) are interned across
frames: `0` + string (appended to the table), `1` + string (not added; the
table holds 8,192 names) or `index + 2`. Attribute, property and style values
of at most 40 bytes are interned the same way in a second table (4,096
values). A frame is the new decoder shapes followed by the ops:

| Op | Encoding | DOM |
| --- | --- | --- |
| insert | `1 parent before node` (`before`: 0 appends, else id + 1) | build the subtree, `insertBefore` |
| move | `2 parent id before` | `insertBefore` of an existing child |
| remove | `3 id` | `remove()`, ids of the subtree forgotten |
| clear | `4 parent` | `textContent = ""` |
| text | `5 id string` | `data = string` |
| attributes | `6 id count attrop*` | as below |
| decoder | `7 decoderId pathCount (segmentCount string*)*` | defines the event fields a handler reads |

A node is `0 id string` (text) or `ns id tag attrCount attr* childCount node*`
(`ns`: 1 HTML, 2 SVG, 3 MathML). An attribute is `0 name value`
(`setAttribute`), `1 name value` / `2 name` / `3 name` (property: a string,
false, true), `4 name value` (`style.setProperty`) or `5 event decoderId
flags` (a listener; flags 1 `preventDefault`, 2 `stopPropagation`); `8`–`11`
followed by a name remove an attribute, property, style or listener.

Events are delegated: the applier listens on the mount element (capture
phase) for each event type in use, walks from the target to the root, and for
each element with a listener for the type (only the target for non-bubbling
events) applies the static options and reads the decoder's paths from the
event (`currentTarget` is that element). It then makes **one** synchronous
call into Lean with the ids from the root to the target and, per handler, its
depth and values. Lean runs `update` (and commands) at once; if the model
changed it asks for a frame, and on the next `requestAnimationFrame` one call
returns the patch. Hydration (`mount(el, { hydrate: true })`) applies the
first frame by adopting the existing children in order (comment nodes are
dropped; a node whose kind, tag or namespace differs is replaced).

## Loader and mount API (measured)

```js
import { mount, mountAll, preload, appOf, name } from './app.<hash>.js'; // or './app.js'
const app = await mount(document.querySelector('#app'), {
  flags: { user: 'ada' },     // Lasm.Web.App.flags
  hydrate: false,             // Lasm.Web.App.hydrating (adopt server-rendered DOM)
  jspi: false,                // default from --suspend
  onError: error => {},       // the instance stopped (a trap, a blocking wait)
});
app.ports.saved.subscribe(value => {});   // Lean: (← App.port "saved").send v
await app.ports.load.send(42);            // Lean: (← App.port "load").subscribe f
await app.send({ kind: 'refresh' });      // Lean: App.onMessage f
app.unmount();                            // Lean: App.onUnmount; listeners, timers, sockets removed
```

- Evaluating the module starts the Wasm download and compilation
  (`compileStreaming` when the server sends `application/wasm`, else buffered).
- `<div data-lasm-app>` (empty, or the app's name) is mounted automatically, with
  `data-lasm-flags` (JSON) and `data-lasm-hydrate`; the element then receives a
  `lasm:mounted` or `lasm:error` event.
- Each mount is its own Lean instance (its own memory), sharing the compiled
  module: several apps on one page are independent.
- User Timing marks: `lasm:evaluated`, `lasm:compiled`, `lasm:mounted`.

## Lasm.Web (measured)

`import Lasm.Web` ([library/Lasm/Web/](../library/Lasm/Web/)). Handles are typed
(`Element extends Node extends EventTarget`, `Document`, `Window`, `Event`,
`Response`, `WebSocket`, …); every operation is one call into `lasm:web`.

| Module | Contents |
| --- | --- |
| `Dom` | `document`, `window`, `createElement`/`NS`, text nodes, fragments, `getElementById`, `querySelector(All)`, append/insert/remove/replace, text, attributes, `data-*`, classes, styles, `innerHTML`, `value`/`checked`, any property (`prop`, `setProp`), focus, `rect` |
| `Events` | `target.on "click" fun e => …` (synchronous: `preventDefault` works), options (capture, passive, once), `Listener.remove`, `Event.info` (key, code, modifiers, pointer, wheel, `target.value`/`checked` in one call), custom events, `dispatchEvent` |
| `Timers` | `setTimeout`, `setInterval`, `requestAnimationFrame`, `queueMicrotask`, `nextFrame : Async Float`, `now` |
| `Fetch` | `fetch url { method, headers, body := .json d / .text / .bytes / .form / .params, signal }`, `Response.info/text/json/bytes/header`, `fetchText`, `fetchJson`, `AbortController`, `AbortSignal.timeout` |
| `Url` | `Url.parse` (with a base), `SearchParams`, `encodeURIComponent`, `FormData` (from a form, files) |
| `Storage` | `localStorage`, `sessionStorage`: get, set, remove, clear, keys |
| `History` | `location`, `Location.assign/replace/reload`, `History.pushState/replaceState/back/go/state`, `onPopState`, `onHashChange` |
| `WebSocket` | `connect`, `send`, `sendBytes`, `close`, `onOpen/onMessage/onClose/onError`, `readyState` |
| `Crypto` | `randomBytes`, `randomUUID`, `digest`, `sha256`, `hex` |
| `Console` | `Console.log/info/warn/error/debug` with JavaScript values |
| `Canvas` | `Element.context2d`, batched `Context2D.draw #[.fillStyle …, .fillRect …]`, `measureText`, `imageData`, `putImageData` |
| `App` | `root`, `flags`, `hydrating`, `port`, `onMessage`, `onUnmount`, `hotState`/`onHotSave` (Vite hot reload) |

`Lasm.Web.background (work : Async Unit)` starts `Async` work from a handler.
`IO.println` writes to the console; `IO.getRandomBytes` uses `crypto`.

## Vite (`@lasm/vite`, measured: `vite build` in CI)

```js
// vite.config.js
import lasm from '@lasm/vite';
export default { plugins: [lasm()] };
// main.js
import app from './Main.lean?lasm';
await app.mount(document.getElementById('app'));
```

`Main.lean?lasm` is built with `lasm build --target browser --bundler` (dev
builds under `vite`, release under `vite build`). Vite emits the Wasm as a hashed
asset and resolves npm modules the bindings name. Saving a `.lean` file rebuilds
and remounts the app in place, passing it the state it saved
(`App.onHotSave`/`App.hotState`). The package is in the npm release set
(`scripts/npm-dist/packages.mjs`).

## Testing

Playwright (pinned) in CI on Linux with Chromium, Firefox and WebKit, and
WebKit on macOS. Suites: template apps, TodoMVC end to end, DOM API coverage,
event decoding, `fetch` to a local server, SSR and hydration, the RPC template
against a local Hono server, size and start budgets, the frame benchmark.
Never run browsers locally on the desktop (no headed browsers, no `open`).

## Layout

- `library/Lasm/Web/…` — web platform bindings.
- `library/Lasm/UI/…` — `Html`, attributes, events, `diff`, the patch encoder,
  `App`, `Cmd`, `Subs`, router, `html!` syntax, SSR, proofs.
- `library/Lasm/RPC.lean` — shared API definitions and adapters.
- `src/edge/` (existing) and `src/browser/` — the browser entry, loader and
  `lasm:ui-dom` applier.
- `packages/vite/` — `@lasm/vite`.
- `templates/web`, `templates/fullstack`.
