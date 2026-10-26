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
table holds 8,192 names) or `index + 2`. A frame is the new decoder shapes
followed by the ops:

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
(`ns`: 1 HTML, 2 SVG, 3 MathML). An attribute is `0 name string`
(`setAttribute`), `1 name string` / `2 name` / `3 name` (property: a string,
false, true), `4 name string` (`style.setProperty`) or `5 event decoderId
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
