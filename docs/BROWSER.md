# Lean in the browser (Phase 8)

Status: **design, 2026-10-26.** This document is the contract the browser work
is built against. Sections move from *plan* to *measured* as they land.

Goal: a whole frontend written in Lean, DOM and all, so that a full stack
(browser, server, serverless, edge) can be written and formally verified in one
language. The bar is excellence: a loading story a web developer recognises,
small downloads, fast start, fast updates, and a clean typed API.

## Decisions

| Topic | Decision | Why |
| --- | --- | --- |
| Runtime | The **edge runtime** (single-threaded cooperative Lean runtime, wasm64 code lowered to 32-bit memory, pure-JS host, web-standard APIs only). | Already built and verified on V8, JSC and workerd; no threads, no `SharedArrayBuffer`, so no COOP/COEP headers are needed. |
| Suspension | The **sync (no-JSPI) link** by default. `Async`, timers, `fetch`, promises and events work through the event pump; blocking waits (`Task.get` on unfinished work, `IO.sleep`, `Async.block`) stop with a clear message. | Safari has no JSPI; a UI thread must never block anyway. One build runs in Chrome, Edge, Firefox and Safari. `--suspend jspi` stays available. |
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

## Budgets (measured in CI, recorded per release)

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

Lean keeps the previous `Html` tree and node ids; `diff` writes ops into a
`ByteArray` (LEB128 integers, UTF-8 strings, interned tag/attribute names).
The applier keeps an id → `Node` table. Ops: create element/text (with
namespace for SVG), set/remove attribute, set property, set style, add/remove
event listener (by handler id and decoder id), insert before, remove, replace
text, keyed move. Events are delegated: the applier encodes the event fields a
handler's decoder asks for (`target.value`, `checked`, `key`, modifiers, pointer
coordinates, …) and calls Lean's dispatch once; Lean runs `update`, then `view`
and `diff` on the next animation frame.

## Testing

Playwright (pinned) in CI on Linux with Chromium, Firefox and WebKit, and
WebKit on macOS. Suites: template apps, TodoMVC end to end, DOM API coverage,
event decoding, `fetch` to a local server, SSR and hydration, the RPC template
against a local Hono server, size and start budgets, the frame benchmark.
Never run browsers locally on the desktop (no headed browsers, no `open`).

## Layout

- `library/Lasm/Web/…` — web platform bindings.
- `library/Lasm/UI/…` — `Html`, attributes, events, `diff`, the patch encoder,
  `App`, `Cmd`, `Sub`, router, `html!` syntax, SSR, proofs.
- `library/Lasm/RPC.lean` — shared API definitions and adapters.
- `src/edge/` (existing) and `src/browser/` — the browser entry, loader and
  `lasm:ui-dom` applier.
- `packages/vite/` — `@lasm/vite`.
- `templates/web`, `templates/fullstack`.
