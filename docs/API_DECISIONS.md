# API decisions

Status: **started 2026-11-16; completing it is milestone 0.1 of
[ROADMAP.md](../ROADMAP.md)'s Stage 0.** Kept by Claude; signed off by Jordan.

## The rule (Jordan, 2026-11-16)

Before 1.0, a PR that adds or changes a public API may merge without waiting
for Jordan. Every such decision is recorded here, in the same PR, and every
entry needs Jordan's sign-off before Lasm reaches 1.0. Nothing ships in 1.x
with an unsigned API decision. During Stage 0, Jordan signs off per milestone.

"Public API" means everything a user writes against or runs: every `Lasm.*`
library and generated binding, the CLI's commands and flags, project
configuration, what `lasm init` generates, and the layout of the platform
output. Shapes follow what each platform natively expects, with no
context-dependent tricks or loopback adapters (Jordan, 2026-11-11).

## Entry format

Each entry has:
- **Id and area.** The seeded entries keep A1–A56; a refinement of one takes a
  sub-id (A9.1, A9.2, …). New entries take the id of the milestone that owns
  them: `0.1-1`, `0.1-2`, … through `0.7-n` (never a bare A57+). Each
  milestone's new entries go in its own section below.
- **Decision:** the shape, with real code examples in the linked detail.
- **Why**, and the alternatives considered.
- **Where:** the PR and the release it shipped in (or "proposed").
- **Status:** `pending sign-off`, `signed off (date)`, or `changed by Jordan
  (date): …`. The inventory (milestone 0.1) also uses `decided, pending
  sign-off` (a shape that exists and nobody questioned), `open` (undecided)
  and `to remove` (slated for deletion).

The inventory is kept complete by `scripts/api/inventory.mjs`, which the unit
job runs (`test/api-inventory.test.mjs`): it lists every Lean module and
`Lasm…` namespace in `library/`, every CLI command, flag, target and
template, every `LASM_*` environment variable the CLI reads, the builtin
`lasm:*` modules and the npm entry points, and fails when one is not named
here in backticks (a module may be covered by a family glob such as
`Lasm.Fastly.*`). It also rejects malformed, duplicate and A57+ ids.

## Contents by milestone

| Milestone | Seeded questions | Inventory entries |
| --- | --- | --- |
| [0.1 Inventory](#01-inventory) | — | [0.1-1](#01-inventory) |
| [0.2 Serving model, `Lasm.Fetch` deleted](#02-serving-model-and-lasmfetch-deleted) | A19–A23, A41–A46, A53 | [0.2-1 – 0.2-9](#02-serving-model-and-lasmfetch-deleted) |
| [0.3 `Lasm.JS.Web`](#03-lasmjsweb) | A9–A13, A51 | [0.3-1 – 0.3-5](#03-lasmjsweb) |
| [0.4 Node, Bun and Deno](#04-node-bun-and-deno) | A1–A3, A17, A18, A24, A25 | [0.4-1 – 0.4-9](#04-node-bun-and-deno) |
| [0.5 Cloudflare, apps off hand-written bindings](#05-cloudflare-and-the-apps-off-hand-written-bindings) | A26–A29 | [0.5-1 – 0.5-9](#05-cloudflare-and-the-apps-off-hand-written-bindings) |
| [0.6 The `Lasm.*` libraries](#06-the-lasm-libraries) | A4–A8, A14–A16, A30–A40, A47–A50, A52, A54, A56 | [0.6-1 – 0.6-19](#06-the-lasm-libraries) |
| [0.7 The CLI and configuration](#07-the-cli-and-configuration) | A55 | [0.7-1 – 0.7-22](#07-the-cli-and-configuration) |

## Inventory

Seeded on 2026-11-16 from the 46 questions of the
[API shapes review of 2026-11-11](api/SHAPES_REVIEW_2026-11-11.md) and the API
items of [REVIEW.md](REVIEW.md), then completed by milestone 0.1 (the
sections [0.1](#01-inventory) to [0.7](#07-the-cli-and-configuration) below):
every `Lasm.*` namespace, the CLI, configuration, the generated platform
files and output layout, the templates, the npm entry points, and the API
proposals of [Jordan's checklist](../ROADMAP.md#jordans-checklist).

### From the API shapes review (Q1–Q46)

The questions, options and Claude's recommendations, with code, are in the
linked section of the review.

| Id | Area | Decision to sign off | Detail | Status |
| --- | --- | --- | --- | --- |
| A1 | Deno | What happens to `--target deno-deploy`? | [Q1](api/SHAPES_REVIEW_2026-11-11.md#0-deno-decide-first-it-affects-several-sections) | pending sign-off |
| A2 | Deno | What happens to `Lasm.JS.Deno` and `--target deno`? | [Q2](api/SHAPES_REVIEW_2026-11-11.md#0-deno-decide-first-it-affects-several-sections) | pending sign-off |
| A3 | Deno | Should Netlify Edge and Supabase Edge, which depend on the Deno runtime, be marked as at-risk targets? | [Q3](api/SHAPES_REVIEW_2026-11-11.md#0-deno-decide-first-it-affects-several-sections) | pending sign-off |
| A4 | Lasm.JS core | Should `Function.ofFn` set `length`? | [Q4](api/SHAPES_REVIEW_2026-11-11.md#1-lasmjs-core) | pending sign-off |
| A5 | Lasm.JS core | Should the build-time check skip `globalThis` exports that Node lacks? | [Q5](api/SHAPES_REVIEW_2026-11-11.md#1-lasmjs-core) | pending sign-off |
| A6 | Lasm.JS core | Inline JavaScript and classes (LASM_JS_GAPS.md, PR #169): `@[js "./ffi/foo.mjs" "f"]` paths relative to the Lean file, and a `Lasm.JS.Class.define` builder (a real `class extends`, no `eval`). | [Q6](api/SHAPES_REVIEW_2026-11-11.md#1-lasmjs-core) | pending sign-off |
| A7 | Lasm.JS core | Should `exportDefault` take `[ToJS α]` (branch)? | [Q7](api/SHAPES_REVIEW_2026-11-11.md#1-lasmjs-core) | pending sign-off |
| A8 | Lasm.JS core | Confirm the core shapes in REVIEW.md §1: Symbol and number keys (#170); no fire-and-forget `Async` in `ofSyncFn`; waits inside synchronous callbacks stay a clear error. | [Q8](api/SHAPES_REVIEW_2026-11-11.md#1-lasmjs-core) | pending sign-off |
| A9 | Generated-binding mapping rules | Overload naming. Should Claude keep the mechanical rule, or add a small override table for names that read badly? | [Q9](api/SHAPES_REVIEW_2026-11-11.md#2-generated-binding-mapping-rules-shared-by-every-lasmjs-tier) | pending sign-off |
| A10 | Generated-binding mapping rules | Callback type names. Should Claude keep the mechanical names, or add hand-picked aliases (`Bun.FetchHandler`, `Cloudflare.FetchHandler`)? | [Q10](api/SHAPES_REVIEW_2026-11-11.md#2-generated-binding-mapping-rules-shared-by-every-lasmjs-tier) | pending sign-off |
| A11 | Generated-binding mapping rules | How generated bindings type numbers: each source's typing, a cross-tier table of integer members mapped to `Nat` (recommended), or `Float` everywhere but WebIDL integers. | [Q11](api/SHAPES_REVIEW_2026-11-11.md#2-generated-binding-mapping-rules-shared-by-every-lasmjs-tier) | pending sign-off |
| A12 | Generated-binding mapping rules | Generate checked downcasts (`HTMLInputElement.cast? : Value → IO (Option HTMLInputElement)` through `instanceof`), or keep only the unchecked `{ val := … }`? | [Q12](api/SHAPES_REVIEW_2026-11-11.md#2-generated-binding-mapping-rules-shared-by-every-lasmjs-tier) | pending sign-off |
| A13 | Lasm.JS.Web, tier 1 | Should tier 1 stay purely generated, or add a helper for the ~20 lines every app writes to convert a Lasm.JS.Web `Request`/`Response` to and from plain Lean data? | [Q13](api/SHAPES_REVIEW_2026-11-11.md#3-lasmjsweb-tier-1) | pending sign-off |
| A14 | Browser tier | Unmount cleanup. Should apps remove their own listeners, timers and sockets (current state)? | [Q14](api/SHAPES_REVIEW_2026-11-11.md#4-browser-tier-lasmjswebbrowser-and-lasmuimount) | pending sign-off |
| A15 | Browser tier | Should Claude accept the loss of batching (`Context2D.draw`, `Event.info`), with one JavaScript call per method? | [Q15](api/SHAPES_REVIEW_2026-11-11.md#4-browser-tier-lasmjswebbrowser-and-lasmuimount) | pending sign-off |
| A16 | Browser tier | Mount callbacks. Keep plain Lean functions (simpler, nothing to remove), or switch to handles for consistency? | [Q16](api/SHAPES_REVIEW_2026-11-11.md#4-browser-tier-lasmjswebbrowser-and-lasmuimount) | pending sign-off |
| A17 | Lasm.JS.Node | Should Node's docs be the source instead of `@types/node`? | [Q17](api/SHAPES_REVIEW_2026-11-11.md#5-lasmjsnode-generated) | pending sign-off |
| A18 | Lasm.JS.Node | Should Claude merge the `node:http`/`net`/`https` branch (about 2,700 lines of generated Lean)? | [Q18](api/SHAPES_REVIEW_2026-11-11.md#5-lasmjsnode-generated) | pending sign-off |
| A19 | `Node.serve`, and serverless `exportDefault` | Should `Node.serve` take the options structure with a plain Lean `fetch` (as decided), with `port : Option Nat` and `hostname : Option String`? | [Q19](api/SHAPES_REVIEW_2026-11-11.md#6-nodeserve-and-serverless-exportdefault) | pending sign-off |
| A20 | `Node.serve`, and serverless `exportDefault` | Should Lasm's Node entry also serve a program's `exportDefault` on `$PORT`, as the Deno and Bun entries do? | [Q20](api/SHAPES_REVIEW_2026-11-11.md#6-nodeserve-and-serverless-exportdefault) | pending sign-off |
| A21 | `Node.serve`, and serverless `exportDefault` | Consistency. Should `exportDefault` get a typed form for the common case, `exportDefault (fetch : Request → Async Response)`, so programs stop writing `Function.ofFn1`? | [Q21](api/SHAPES_REVIEW_2026-11-11.md#6-nodeserve-and-serverless-exportdefault) | pending sign-off |
| A22 | `Node.serve`, and serverless `exportDefault` | Naming. Should the hand-written function live inside the generated namespace (`Lasm.JS.Node.serve`, mixed with generated `Lasm.JS.Node.*`), or in its own namespace (`Lasm.JS.Serve.node`)? | [Q22](api/SHAPES_REVIEW_2026-11-11.md#6-nodeserve-and-serverless-exportdefault) | pending sign-off |
| A23 | `Node.serve`, and serverless `exportDefault` | On function platforms, should `Lasm.Serverless`'s proofs about the shims be rewritten for the new event → `Request` conversion, or dropped with the shims? | [Q23](api/SHAPES_REVIEW_2026-11-11.md#6-nodeserve-and-serverless-exportdefault) | pending sign-off |
| A24 | Lasm.JS.Bun and Lasm.JS.Deno | Bun's `port`. Keep `DOMStringOrUnsignedShort` as declared, or narrow it to `Option Nat` through the override table (Q9)? | [Q24](api/SHAPES_REVIEW_2026-11-11.md#7-lasmjsbun-and-lasmjsdeno) | pending sign-off |
| A25 | Lasm.JS.Bun and Lasm.JS.Deno | WebSockets on Bun and Deno (`Server.upgrade`, `Deno.upgradeWebSocket`): generate them next, or wait for a concrete app? | [Q25](api/SHAPES_REVIEW_2026-11-11.md#7-lasmjsbun-and-lasmjsdeno) | pending sign-off |
| A26 | Lasm.JS.Cloudflare | Workers `env`: `Data` + `readField` (current), or a program-declared `structure Env` with `deriving FromJS` passed to the handler (needs a generic handler type)? | [Q26](api/SHAPES_REVIEW_2026-11-11.md#8-lasmjscloudflare-in-progress) | pending sign-off |
| A27 | Lasm.JS.Cloudflare | `waitUntil` and `blockConcurrencyWhile` need `Async` → JS promise: add `Lasm.JS.Async.toPromise : Async α → IO Value` (new core API), or leave it to programs? | [Q27](api/SHAPES_REVIEW_2026-11-11.md#8-lasmjscloudflare-in-progress) | pending sign-off |
| A28 | Lasm.JS.Cloudflare | Durable Objects. Keep the JavaScript class shim until `Lasm.JS.Class.define` (Q6) exists, or block Durable Objects support on it? | [Q28](api/SHAPES_REVIEW_2026-11-11.md#8-lasmjscloudflare-in-progress) | pending sign-off |
| A29 | Lasm.JS.Cloudflare | Should Claude merge the branch as it is (with Q9, Q10 and Q11 applied later)? | [Q29](api/SHAPES_REVIEW_2026-11-11.md#8-lasmjscloudflare-in-progress) | pending sign-off |
| A30 | Lasm.WASI.Http | Please confirm the WASI mapping rules above. | [Q30](api/SHAPES_REVIEW_2026-11-11.md#9-lasmwasihttp) | pending sign-off |
| A31 | Lasm.WASI.Http | A wasi-http server is ~60 low-level lines per app: keep it per app, or add one thin helper such as `Lasm.WASI.Http.respond`? | [Q31](api/SHAPES_REVIEW_2026-11-11.md#9-lasmwasihttp) | pending sign-off |
| A32 | Lasm.Fastly | Should errors stay `EIO FastlyStatus α`? | [Q32](api/SHAPES_REVIEW_2026-11-11.md#10-lasmfastly) | pending sign-off |
| A33 | Lasm.Fastly | Should Claude bind `send_v2`/`v3` with `EIO (FastlyStatus × SendErrorDetail) α`, or leave them unbound (v1 covers sending)? | [Q33](api/SHAPES_REVIEW_2026-11-11.md#10-lasmfastly) | pending sign-off |
| A34 | Lasm.Fastly | Fastly calls are namespaced by module (`HttpReq.methodGet req`): keep the witx layout, or also generate dot-notation aliases on the handle types? | [Q34](api/SHAPES_REVIEW_2026-11-11.md#10-lasmfastly) | pending sign-off |
| A35 | Lasm.UI | Keep UI's own `Http`, `Url` and `Storage` commands as pure data (Claude recommends this), or replace them with `Cmd.io` plus the generated bindings? | [Q35](api/SHAPES_REVIEW_2026-11-11.md#11-lasmui) | pending sign-off |
| A36 | Lasm.UI | Keep the `_` suffix names (`class_`, `main_`, `type_`), or use «guillemets» or another convention? | [Q36](api/SHAPES_REVIEW_2026-11-11.md#11-lasmui) | pending sign-off |
| A37 | Lasm.RPC | Should `dispatch` replace `handler` (PR #213), and should RPC ship one-line adapters per server kind (e.g. `Lasm.RPC.webHandler`)? | [Q37](api/SHAPES_REVIEW_2026-11-11.md#12-lasmrpc) | pending sign-off |
| A38 | Lasm.RPC | Keep `serve'` (prime) as the name for the proof-free form, or `serveNoProof` / `serveSimple`? | [Q38](api/SHAPES_REVIEW_2026-11-11.md#12-lasmrpc) | pending sign-off |
| A39 | Lasm.KV | What `Lasm.KV` becomes: keep `open` with `setWorkersEnv` (PR #213), or typed constructors taking the platform binding (recommended)? | [Q39](api/SHAPES_REVIEW_2026-11-11.md#13-lasmkv) | pending sign-off |
| A40 | Lasm.KV | Should values stay `String` only, or become `ByteArray` (or generic, through `ToJson`)? | [Q40](api/SHAPES_REVIEW_2026-11-11.md#13-lasmkv) | pending sign-off |
| A41 | Lasm.Fetch | Embedded assets after Lasm.Fetch: keep them copied in apps, or a small transport-free library (`Lasm.Embed`, recommended)? | [Q41](api/SHAPES_REVIEW_2026-11-11.md#14-lasmfetch-scheduled-for-deletion) | pending sign-off |
| A42 | Lasm.Fetch | Request and routing helpers after Lasm.Fetch: a copy per app, or a pure, transport-free `Lasm.Http.Path` usable on every target? | [Q42](api/SHAPES_REVIEW_2026-11-11.md#14-lasmfetch-scheduled-for-deletion) | pending sign-off |
| A43 | Lasm.Fetch | Outbound fetch across JavaScript, wasi-http and Fastly: no common call (apps pass a `send` function), or one cross-host `send` signature? | [Q43](api/SHAPES_REVIEW_2026-11-11.md#14-lasmfetch-scheduled-for-deletion) | pending sign-off |
| A44 | Lasm.Fetch | WASI CGI (`--target wasi`), whose only server was Lasm.Fetch: template-only code, a small library, or dropped as a server target? | [Q44](api/SHAPES_REVIEW_2026-11-11.md#14-lasmfetch-scheduled-for-deletion) | pending sign-off |
| A45 | Lasm.Fetch | Should Lasm.Fetch's proved `Request`/`Response` model move into the test suite as a spec (as decided), or be deleted with the library? | [Q45](api/SHAPES_REVIEW_2026-11-11.md#14-lasmfetch-scheduled-for-deletion) | pending sign-off |
| A46 | Lasm.Fetch | When to delete `Lasm.Fetch`: proposed, the first release after `Node.serve` and the function-platform `exportDefault` land and nothing imports it. | [Q46](api/SHAPES_REVIEW_2026-11-11.md#14-lasmfetch-scheduled-for-deletion) | pending sign-off |

### From REVIEW.md

| Id | Area | Decision to sign off | Detail | Status |
| --- | --- | --- | --- | --- |
| A47 | Lasm.JS core | Symbol and number keys: `get`/`set` take any `[ToJS κ]` key (#170, 0.6.1). | [REVIEW.md §1](REVIEW.md#high-priority-work-to-define-with-jordan) | pending sign-off |
| A48 | Lasm.JS core | Waits inside synchronous callbacks stay a clear error, by design (#122, 0.5.0). | [REVIEW.md §1](REVIEW.md#high-priority-work-to-define-with-jordan) | pending sign-off |
| A49 | Lasm.JS core | No fire-and-forget `Async` in `ofSyncFn`. | [REVIEW.md §1](REVIEW.md#apis-and-libraries) | pending sign-off |
| A50 | Lasm.JS core | `Lasm.JS.Wire.encode` returns `Except String ByteArray` (#154, 0.6.1, breaking). | [REVIEW.md §1](REVIEW.md#apis-and-libraries) | pending sign-off |
| A51 | Bindings | `Lasm.Web` deleted for the generated `Lasm.JS.Web.Browser`, with `Lasm.UI.Mount` (#193, #197, 0.7.0, breaking). | [REVIEW.md §1](REVIEW.md#the-browser-tier-replaced-lasmweb-2026-11-10-jordans-decision-claudes-choices-to-review) | pending sign-off |
| A52 | Bindings | `Lasm.Fastly` generated from Fastly's witx; the hand-written store calls removed (#194, 0.7.0, breaking). | [REVIEW.md §1](REVIEW.md#host-bindings-lasmfastly-generated-lasmwasi-next-decided-by-jordan-2026-11-10) | pending sign-off |
| A53 | Templates | `lasm init --template fetch` uses `Lasm.Fetch` only on Node; Fastly, wasi:http/Spin and WASI get their own entry modules (#218, 0.8.0). | [REVIEW.md §1](REVIEW.md#apis-and-libraries) | pending sign-off |
| A54 | Libraries | PR #124's drafts (`Lasm.Web.Crypto`, a WebSocket upgrade in `Lasm.Fetch.serve`, `Lasm.Markdown`) not taken; kept on the `api-proposals` branch. | [REVIEW.md §1](REVIEW.md#apis-and-libraries) | pending sign-off |
| A55 | CLI | Proposed, not built: a WASI reactor build (`lasm build … --target wasi --reactor`) for the CLI's glue; under Stage 2's backend this question may change. | [REVIEW.md §2](REVIEW.md#the-cli-surface) | pending sign-off |
| A56 | Packaging | Where the `Lasm.*` libraries live (inside `@lasm/cli` or separate `@lasm/*` packages): deferred by Jordan until the APIs are final. | [REVIEW.md §1](REVIEW.md#major-where-the-lasm-libraries-live-deferred-by-jordan-2026-11-10) | pending decision |

## 0.1 Inventory

| Id | Surface | Current shape, with an example | Status |
| --- | --- | --- | --- |
| 0.1-1 | What counts as public API, and the guard | Everything in the sections below: every module under `library/Lasm` (proof modules included, since programs import them), the CLI, project configuration, generated files, templates, environment variables, builtin modules and npm entry points. Generated bindings are recorded by their source and mapping rules, not member by member. Guard: `node scripts/api/inventory.mjs` (unit test `test/api-inventory.test.mjs`). | decided, pending sign-off |

## 0.2 Serving model, and `Lasm.Fetch` deleted

| Id | Surface | Current shape, with an example | Status |
| --- | --- | --- | --- |
| 0.2-1 | `Lasm.Fetch`, `Lasm.Fetch.Assets`, `Lasm.Fetch.Embed` | Lasm's own HTTP model: `structure Request`/`Response`, `abbrev Handler := Request → Async Response`, `serve`, `serveWith (options : ServeOptions)`, `serveNode`, `jsFetchHandler`, outbound `fetch`/`get`/`post`, response builders (`Response.text`, `.html`, `.json`, `.redirect`, `.streaming`), `Assets.wrap`, and the `embed_dir!` term elaborator. Example: `def main : IO Unit := Lasm.Fetch.serve fun req => pure (.text s!"hi {req.path}")`. Used by the `fullstack` template, Conduit and Folio, and by the `fetch` template on Node. A41–A46. | to remove |
| 0.2-2 | `Lasm.Fetch.Spec`, `Lasm.Fetch.Theorems`, `Lasm.Fetch.Candidates` | The proved `Request`/`Response` model of `Lasm.Fetch` (for example `segments_no_dot_segments`). A45: moves into the test suite as a spec. | to remove |
| 0.2-3 | `Node.serve` (planned `Lasm.JS.Node.Serve`, held PR #222) | Shaped like `Bun.serve`: `Lasm.JS.Node.serve { fetch := handle, port := some 3000 }` with a plain Lean `fetch : Request → Async Response` on `Lasm.JS.Web`'s types. Not on main. A19, A20, A22. | open |
| 0.2-4 | `Lasm.JS.exportDefault` as the entry of edge, Bun, Deno and (planned) function platforms | `exportDefault (v : Value) : IO Unit`; the `fetch` template: `if ← onEdge then exportDefault (← Function.ofFn1 handle) else serveNode`. The generated entry reads it from `globalThis.__lasmDefaultExport`. The `onEdge` branch is context-dependent behavior, which Jordan's rules exclude. A7, A21. | open |
| 0.2-5 | Generated platform entry files | Each one starts Lean once per isolate and calls the program's default export directly: `workers/worker.mjs` (imports `env` from `cloudflare:workers`), `api/lasm.mjs` (`vercel-edge`), `netlify/edge-functions/lasm.mjs` (`netlify-edge`), `bun/main.mjs`, `deno/main.mjs` (`deno`, `deno-deploy`), `supabase/functions/<name>/index.ts`. Header: "Generated by Lasm … Rebuilt on every build; do not edit." | decided, pending sign-off |
| 0.2-6 | Function-platform shims | `src/serverless/lasm-lambda.mjs`, `lasm-vercel.mjs`, `lasm-netlify.mjs`, `lasm-azure.mjs`, `lasm-gcf.mjs` over `lasm-server.mjs`, which starts the Node build on a loopback port (`LASM_SERVER_PORT`, default a free port; `LASM_START_TIMEOUT_MS`, default 30000) and converts each platform event to an HTTP request to it. A loopback adapter; replaced by the generated platform file calling `exportDefault` directly. A23. | to remove |
| 0.2-7 | `Lasm.Serverless`, `Lasm.Serverless.Spec`, `Lasm.Serverless.Theorems`, `Lasm.Serverless.Candidates`, `Lasm.Serverless.Proofs.*` | Proofs about the shims' event mapping (`Lasm.Serverless.Proofs.Mapping`, `Model`). There is no `Lasm.Serverless` module to import, only the namespace. A23: rewrite for the event → `Request` conversion, or drop with the shims. | open |
| 0.2-8 | Per-target entry modules of the `fetch` template | `templates/fetch/Fastly.lean` (`Lasm.Fastly`), `templates/fetch/WasiHttp.lean` (`Lasm.WASI.Http`), written with `--deploy fastly`, `--deploy wasi-http` and `--deploy spin`; the routes are shared through `App.lean`. A53. | decided, pending sign-off |
| 0.2-9 | WASI CGI serving | `templates/fetch/Cgi.lean` (one request per run from CGI variables and stdin) written by `lasm init --template fetch --deploy wasi`, and the `wasi` target's summary "Lasm.Fetch serves one CGI request per run". Jordan, 2026-11-16: `--target wasi` stays for CLI and batch programs (`--template plain --deploy wasi`); HTTP on WASI goes through `wasi-http` only. A44. | to remove |

## 0.3 `Lasm.JS.Web`

| Id | Surface | Current shape, with an example | Status |
| --- | --- | --- | --- |
| 0.3-1 | `Lasm.JS.Web` and `Lasm.JS.Web.*` (tier 1, the WinterTC Minimum Common Web API) | Generated by `scripts/bindings/generate-web.mjs` from `@webref/idl` 3.86.0 (the surface in `scripts/bindings/web-surface.json`): DOM events, messaging, streams, files, encoding, compression, URL, fetch, Web Crypto, performance, timers, console, `WebAssembly`. Mapping (docs/JS_BINDINGS.md, "Standard bindings"): interfaces are handle structures over `Value`, Promise results `Async`, nullable values `Option`, dictionaries structures, unions inductives, callbacks `X.ofFn`/`X.ofSyncFn`. Example: `let res ← fetch (.usvString "https://example.com")`, `SubtleCrypto.digest (self : SubtleCrypto) (algorithm : AlgorithmIdentifier) (data : ByteArray) : Async ByteArray`. | decided, pending sign-off |
| 0.3-2 | `Lasm.JS.Web.Browser` (the browser tier) | The same generator and source, surface `scripts/bindings/browser-surface.json` (`scripts/bindings/web-browser.mjs`): `Lasm.JS.Web.Dom`, `Html`, `Css`, `Geometry`, `UiEvents`, `Canvas`, `WebSocket`, plus all of tier 1. Replaced `Lasm.Web` in 0.7.0 (A51). | decided, pending sign-off |
| 0.3-3 | `Lasm.JS.Web.Support` | Hand-written helpers the generated code calls, all public: `Record α`, `Support.optional`, `Support.args`, `Support.fields`, `Support.arrayBufferBytes`, `Support.typedArray`, `Support.getGlobal`, …. Open: whether they stay public or move to an internal namespace. | open |
| 0.3-4 | Generated-binding mapping rules (all tiers) | Overload names (`serve`, `serveWithOptions`), callback type names, number typing, checked downcasts, and the reviewed override table Jordan decided on 2026-11-16. A9–A12. | open |
| 0.3-5 | `Request`/`Response` conversion helper | Every server converts by hand (about 20 lines, as the `fetch` template's `serveNode` does). A13. | open |
| 0.3-6 | Generated binding modules compiled on first import | `Lasm.JS.Web.*`, `Lasm.JS.Node.*`, `Lasm.JS.Deno.*`, `Lasm.JS.Bun.*` and `Lasm.JS.Cloudflare.*`: a module of these namespaces that is not in `libraryModules` ships as source only. The build compiles it into the managed Lean prefix the first time a program imports it, as `lasm editor` does for a project's imports, with the modules it imports, resolved from the sources (src/lazy-library.mjs). It prints `[lasm] Compiling Lasm.JS.Web.IndexedDB (first use)…` and a total, and runs independent modules in parallel (up to half the cores, and one per 3 GB of memory). Outputs are written to a temporary file and renamed. They carry a stamp with their source identity and output hashes, which the tool cache's verification accepts. Why: the whole generated platform is about 300 MB compiled. Committing that to git on every regeneration, and shipping it in npm (483 → ~800 MB), is not acceptable (main, for Jordan, 2026-11-16). This pulls a slice of milestone 3.2 forward for the generated bindings only. No new flags. Rejected: shipping everything prebuilt (size), and a separate cache directory on `LEAN_PATH` (Lean resolves the `Lasm` package from a single root). PR #PRNUM. | decided, pending sign-off |
| 0.3-7 | Editor support for modules compiled on first import | **Open, must land within Stage 0.** Opening an editor on a file that imports a generated module no build or `lasm editor` has compiled yet shows Lean's missing-`.olean` error. Requirement: the editor compiles the module on demand, or at least says "run `npx lasm editor`". Proposed: a `lake` wrapper in the editor toolchain that compiles a file's missing `Lasm.*` imports before `lake setup-file`, as an executable on every platform. | open |

## 0.4 Node, Bun and Deno

| Id | Surface | Current shape, with an example | Status |
| --- | --- | --- | --- |
| 0.4-1 | `Lasm.JS.Node` and `Lasm.JS.Node.*` | Generated from the Node.js 24.22.2 documentation JSON (`doc/api/*.json`) lowered to WebIDL by `scripts/bindings/node-api.mjs` (`scripts/bindings/node.idl`, surface `scripts/bindings/node-surface.json`), then `generate-web.mjs`: `node:events`, `node:stream`, `node:buffer`, `node:path`, `node:os`, `node:process`, `node:fs/promises`, `node:crypto`, `node:child_process`. Names keep the module object: `Lasm.JS.Node.path.basename (path_ : String) (suffix : Option String := none) : IO String`; Node's number-or-bigint fields are `DoubleOrBigint`. A17 (decided by Jordan: Node's doc JSON). | decided, pending sign-off |
| 0.4-2 | `Lasm.JS.Node.Support` | Hand-written helpers for the generated Node code (`Support.getExport`, `Support.promisified`, `Support.recordOf`), public. | open |
| 0.4-3 | More Node modules | `node:net`, `node:http`, `node:https` (held PR #220, A18), then `node:worker_threads`, `node:zlib`, `node:util`; also `node:sqlite`, which Conduit, Ledger, Porter and Tandem bind by hand (`examples/*/Server/NodeSqlite.lean`). | open |
| 0.4-4 | `Lasm.JS.Bun` and `Lasm.JS.Bun.*` | `Bun.serve` generated from Bun 1.4.4's `bun-types` lowered by `scripts/bindings/serve-api.mjs` (`scripts/bindings/bun.idl`): `serve (options : ServeOptions) : IO Server`, `ServeOptionsFetch.ofFn (f : Request → Server → Async Response)`, `Server.port : IO (Option Nat)`. A24 (`port`'s type). | decided, pending sign-off |
| 0.4-5 | `Lasm.JS.Deno` and `Lasm.JS.Deno.*` | `Deno.serve` generated from Deno 2.9.6's declarations (`scripts/bindings/deno.idl`): `serve (handler : ServeHandler)`, `serveWithOptions (options : ServeTcpOptions) (handler : ServeHandler)`, `serveWithTlsOptions`. Example (Porter): `Deno.serveWithOptions { port := some port, hostname := some hostname } h`. Inconsistent with Bun, whose handler sits inside the options (A9 overload naming). Jordan, 2026-11-16: full Deno support (A1, A2). | decided, pending sign-off |
| 0.4-6 | `--target bun`, `--target deno`, `--target deno-deploy` | Portable builds: `bun/main.mjs` (`bun bun/main.mjs`), `deno/main.mjs` (`deno run -A deno/main.mjs`; Deno Deploy's entrypoint). Jordan, 2026-11-16: fully supported, no at-risk warnings (A1–A3). | decided, pending sign-off |
| 0.4-7 | WebSockets on servers (Tandem's proposals) | A WebSocket upgrade hook for servers; one server-side WebSocket type for Node, Bun and Deno; Lasm's Bun entry passing `websocket` handlers to `Bun.serve`. Today Tandem binds the npm `ws` package by hand (`examples/tandem/Server/NodeWs.lean`). A25. | open |
| 0.4-8 | `bun:sqlite` | Bound by hand in each app (`examples/*/Server/BunSqlite.lean`); no generated binding yet. | open |
| 0.4-9 | Unix sockets and Bun's `routes` | Not generated yet (ROADMAP 0.4). | open |

## 0.5 Cloudflare, and the apps off hand-written bindings

| Id | Surface | Current shape, with an example | Status |
| --- | --- | --- | --- |
| 0.5-1 | `Lasm.JS.Cloudflare` and `Lasm.JS.Cloudflare.*` | Generated from Cloudflare's `workers-types` (KV, D1, R2, Durable Objects, env bindings; held PR #216, not on main). A27–A29. | open |
| 0.5-2 | The Workers `env` | Today: `workers/worker.mjs` imports `env` from `cloudflare:workers` and programs read it untyped (`Lasm.KV.binding`, each app's `JsServe.platformEnv`). Jordan, 2026-11-16 (A26): the program declares `structure Env` with `deriving FromJS` and the handler receives it typed. Also Porter's proposal: a documented way to read Workers environment variables. | open |
| 0.5-3 | Hand-written D1 bindings | `examples/conduit/Server/D1.lean`, `examples/ledger/Server/D1.lean`, `examples/porter/Server/D1.lean`, `examples/tandem/Server/D1.lean`, through `Value.callMethod` (`(← db.callMethod "prepare" #[toJS sql]).callMethod "bind" params`). Replaced by `Lasm.JS.Cloudflare`. | to remove |
| 0.5-4 | Hand-written Web Crypto | `examples/conduit/Server/Crypto.lean` and `examples/porter/Server/Crypto.lean` call `crypto.subtle` through `Value` (SHA-256, PBKDF2, random values, ECDSA, Ed25519, JWK export), although `Lasm.JS.Web.Crypto` is generated (Porter's "shared Web Crypto module" proposal; A54). | to remove |
| 0.5-5 | Per-app serving glue | `examples/*/Server/JsServe.lean` (each binds `@[js "globalThis" …]` and wraps `Bun.serve`/`Deno.serve`/`exportDefault`) and `examples/*/Server/NodeServe.lean`. Replaced by 0.2's `Node.serve` and `exportDefault`. | to remove |
| 0.5-6 | Netlify Blobs | `examples/conduit/Server/NetlifyBlobs.lean` binds the npm package `@netlify/blobs` with `@[js]`, the documented way to use npm packages (no generated binding is planned). | decided, pending sign-off |
| 0.5-7 | Durable Objects | Exporting a Durable Object class from a Workers build (Tandem's proposal); A28 (`Lasm.JS.Class.define`, A6). | open |
| 0.5-8 | Ledger's Workers questions | Brotli on Workers (`encodeBody: "manual"`); a cross-request async lock that works on Workers. | open |
| 0.5-9 | Tandem's WebSocket client | Already on `Lasm.JS.Web.WebSocket` (`examples/tandem/Frontend/Ui.lean`); the ROADMAP 0.5 item about moving it off `Lasm.Web.WebSocket` is done. | decided, pending sign-off |

## 0.6 The `Lasm.*` libraries

| Id | Surface | Current shape, with an example | Status |
| --- | --- | --- | --- |
| 0.6-1 | `Lasm.JS`, `Lasm.JS.Core` (the interop core) | `Value` (opaque handle), `Data` (structured values), `class ToJS`/`FromJS`, `global`, `require (specifier) (α := Value)`, `Value.get`/`set`/`call`/`callMethod`/`callAwait`/`callMethodAwait`/`new`/`await`/`toTask`, `Function.ofFn`/`ofFn1`/`ofFn2`/`ofSyncFn`/`ofSyncFn2`/`ofFnReply` and `Function.Reply`, `Binding`, `Bindable`, `MonadJS`, `isAvailable`, `onEdge`, `exportDefault`, `waitForever`, `stats`, `Wire.encode`/`decode`. Example (`hono` template): `let _ : Value ← app.callMethod method #[toJS path, toJS (← handler f)]`. A4–A8, A47–A50. | decided, pending sign-off |
| 0.6-2 | `@[js "module" "export"]` (`Lasm.JS.Meta`) | `@[js "hono" "new Hono"] opaque newHono : IO Value`; `"default"`, `""` (the module itself), `"a.b"` nested, `"globalThis"` globals, `new X` constructs. Expands to a `def` over `Bindable.bind` plus `lasm_js_record`, read by the build-time binding check. A6 (paths relative to the Lean file, `Lasm.JS.Class.define`). | decided, pending sign-off |
| 0.6-3 | `deriving ToJS, FromJS` | Handlers in `Lasm.JS.Meta` for structures (an object with the field names) and enumerations (constructor names as strings): `structure Todo where … deriving ToJS, FromJS`. | decided, pending sign-off |
| 0.6-4 | `@[lasm_js_record]` | The attribute `@[js]` adds for the binding check; a user-visible attribute name that users never write. Open: make it internal. | open |
| 0.6-5 | `Lasm.JS.Json` | `ToJS`/`FromJS Lean.Json`, `jsonToData`, `dataToJson`. | decided, pending sign-off |
| 0.6-6 | `Lasm.JS.Spec`, `Lasm.JS.Theorems`, `Lasm.JS.Proofs.*` | Propositions and proofs about the interop core (`Lasm.JS.Proofs.Wire`: the wire format round-trips). | decided, pending sign-off |
| 0.6-7 | Builtin JavaScript modules `lasm:app`, `lasm:ui-dom` | `src/lasm-modules/<name>.mjs`, bound like npm modules (`@[js "lasm:app" "root"]`); bundled into the browser loader, copied to `lasm/modules/` on edge builds and `host/lasm-modules/` on Node (docs/BROWSER.md). A user-visible `lasm:` specifier scheme. | decided, pending sign-off |
| 0.6-8 | `Lasm.UI` (`Lasm.UI.App`, `Lasm.UI.Html`, `Lasm.UI.Elements`, `Lasm.UI.Cmd`, `Lasm.UI.Subs`, `Lasm.UI.Url`, `Lasm.UI.Render`, `Lasm.UI.Diff`, `Lasm.UI.Encode`, `Lasm.UI.Model`) | The Elm architecture: `App.sandbox`/`App.element`/`App.run`, `Html Msg`, attributes (`class_`, `onClick`, `onInput`, `on`), `Decoder`, `Cmd` (`Cmd.none`, `delay`, `pushUrl`, `storageSet`, UI's own `Http`), `Subs` (`every`, `onKeyDown`, `port`), `Url.parse`, `render`/`renderPage` for SSR. Example (`web` template): `def main : IO Unit := (App.sandbox 0 update view).run`. `Lasm.UI.Url.percentDecode` returns `Option String` while `Lasm.Fetch.percentDecode` returns `String`. A35, A36. | decided, pending sign-off |
| 0.6-9 | `html!` (`Lasm.UI.Syntax`) | JSX-like syntax: `html! <div class="counter">{text (toString n)}</div>`; the helper terms `lasm_children%` and `lasm_attrs%` are visible syntax too. | decided, pending sign-off |
| 0.6-10 | `Lasm.UI.Mount` and `HotModel` | `Mount.root`, `flags`, `hydrating`, `target`, `port`/`Port.send`/`Port.subscribe`, `onMessage`, `onUnmount`, `hotState`, `onHotSave`; `class HotModel` keeps state across hot reloads. Porter's proposal: document what mounting does with an element's existing children. A14–A16. | decided, pending sign-off |
| 0.6-11 | `Lasm.UI.Proofs`, `Lasm.UI.Proofs.*`, `Lasm.UI.Spec`, `Lasm.UI.Theorems`, `Lasm.UI.Candidates` | Diffing and patch proofs; they also open the namespaces `Lasm.UI.Applier` and `Lasm.UI.Decode`. | decided, pending sign-off |
| 0.6-12 | A selection-preserving text-area `value` in `Lasm.UI` | Tandem's proposal. | open |
| 0.6-13 | `Lasm.RPC` (`Lasm.RPC.Core`, `Lasm.RPC.Server`, `Lasm.RPC.Client`) | `structure Endpoint (Req Res : Type)`, `Endpoint.serve` (with a validation proof), `serve'`, `handler (routes) (fallback : Handler)`, `Endpoint.call` for `Lasm.UI`. Its server side is built on `Lasm.Fetch.Handler`, so it has to move before 0.2 deletes `Lasm.Fetch`. A37, A38. | open |
| 0.6-14 | `Lasm.RPC.Spec`, `Lasm.RPC.Theorems`, `Lasm.RPC.Candidates` | Propositions and proofs of RPC (`decodeRequest_valid`, `call_invalid`). | decided, pending sign-off |
| 0.6-15 | `Lasm.KV`, `Lasm.KV.Spec`, `Lasm.KV.Theorems` | `Lasm.KV.open name` picks Workers KV, Deno KV, Fastly KV (through a hand-written `FastlyKV` over `Lasm.Fastly`) or memory depending on where it runs; string values. Jordan, 2026-11-16: deleted; apps use the generated platform bindings. A39, A40. | to remove |
| 0.6-16 | `Lasm.Fastly` and `Lasm.Fastly.*` | Generated by `scripts/bindings/generate-fastly.mjs` from the witx of Viceroy v0.21.1 (`compute-at-edge-abi`; surface `scripts/bindings/fastly-surface.json`): one module per witx module, errors `EIO FastlyStatus α`, calls namespaced by module (`HttpReq.methodGet req`). Example: `let (req, body) ← HttpReq.bodyDownstreamGet`. A32–A34, A52. | decided, pending sign-off |
| 0.6-17 | `Lasm.WASI.Http`, `Lasm.WASI.Http.Types`, `Lasm.WASI.Http.OutgoingHandler`, `Lasm.WASI.Io.*`, `Lasm.WASI.Clocks.*` | Generated by `scripts/bindings/generate-wasi-http.mjs` from the WASI 0.2.12 WIT of Wasmtime v49.0.4 (`wasi:http/proxy`); mapping in docs/WASI_FASTLY_BINDINGS.md. A30. | decided, pending sign-off |
| 0.6-18 | `Lasm.WASI.Http.IncomingHandler` | Hand-written export: `Lasm.WASI.Http.IncomingHandler.serve fun request out => …` (about 60 lines per app for a server; A31 asks for a thin helper). | decided, pending sign-off |
| 0.6-19 | A `Lasm.Markdown` module, and Porter's totality check | Folio's proposal: a `Lasm.Markdown` library from Folio's renderer, so Conduit can use it (A54); Porter's `test/Axioms.lean` totality check shipped as a reusable Lasm tool. | open |

## 0.7 The CLI and configuration

| Id | Surface | Current shape, with an example | Status |
| --- | --- | --- | --- |
| 0.7-1 | Commands | `lasm Main.lean` (the same as `lasm run`), `lasm build`, `lasm dev`, `lasm init`, `lasm package`, `lasm editor` (`lasm editor [project-directory]`), `lasm cache` (`lasm cache repair`), `lasm --version` (`--version`, also `-v` and `version`), `--help`/`-h` on every command. Unknown commands get a "did you mean" hint. | decided, pending sign-off |
| 0.7-2 | `lasm run` and `lasm build` flags | `--release` (run) and `--dev` (build) choose the profile, `--rebuild`, `--verbose`, `--output DIR` (build; a second positional also names it), `--target` (build), `--suspend` (`none` or `jspi`) and `--bundler` (browser only), `--allow-dev`; application arguments after `--`; `--flag=value` works for every valued flag. Example: `lasm build Main.lean --target workers`. | decided, pending sign-off |
| 0.7-3 | Build targets | `--target` takes `node` (default under Node; `bun`/`deno` under those runtimes), the function platforms `lambda`, `lambda-edge`, `vercel`, `netlify`, `azure`, `gcf`, the edge targets `workers`, `vercel-edge`, `netlify-edge`, `bun`, `deno`, `deno-deploy`, `supabase-edge`, the WASI targets `wasi`, `fastly`, `wasi-http`, and `browser`. Aliases people type (`cloudflare`, `aws`, `spin`, `vite`, …) get a hint. | decided, pending sign-off |
| 0.7-4 | Output layout per target | `node`: `dist/` (`main.mjs`, `program.wasm`, `host/`, production `node_modules`). Function platforms: `dist/` plus `lambda.zip`, `lambda-edge.zip`, `.vercel/output`, `netlify/functions/lasm`, `azure-functions/`, `gcf/`. `workers/` (`worker.mjs`, `lasm/`, `wrangler.toml` when the project has none), `api/lasm.mjs` + `api/_lasm/` (fixed), `netlify/edge-functions/lasm.mjs` + `netlify/lasm/` (fixed), `bun/main.mjs`, `deno/main.mjs`, `supabase/functions/<name>/` (`index.ts`, `deno.json`), `wasi/main.wasm`, `bin/main.wasm` + `pkg/<name>.tar.gz` (`fastly`), `wasi-http/main.wasm`, browser `dist/` (`index.html` with the loader injected, `app.<hash>.js`, the Wasm, `lasm-manifest.json`). The Node build of a platform target stays in `.lake/lasm/applications/`. | decided, pending sign-off |
| 0.7-5 | `--output` per target | Defaults to `dist/` for `node` and the function platforms and to the platform's directory otherwise; refused for `vercel-edge` and `netlify-edge`, whose layout the platform fixes. Folio's proposal: consistent `--output` for `wasi`, `bun` and `deno`. | open |
| 0.7-6 | `lasm dev` | `--target` (one or a comma list, with per-output sources: `--target node=Server.lean,browser=Client.lean`; accepts `node`, `bun`, `deno`, `workers`, `vercel-edge`, `netlify-edge`, `deno-deploy`, `supabase-edge`, `browser`), `--release`, `--dev`, `--no-run`, `--no-watch`, `--port` (default 5173), `--host`, `--output`, `--verbose`; typing `rs` rebuilds. Its usage text omits `--dev`, `--verbose` and (in the target list) `supabase-edge`. | open |
| 0.7-7 | `lasm package` | `lasm package [dist] --target lambda\|lambda-edge\|vercel\|netlify\|azure\|gcf\|browser [--output PATH] [--allow-dev]`; `browser` checks a browser build in place, but the usage line lists only the function platforms. Changes with 0.2-6 when the shims go. | open |
| 0.7-8 | `lasm init` | `lasm init <directory> [--template NAME] [--deploy TARGET]…` (`-t` for `--template`; `--deploy` repeatable). Deploy targets: `lambda` (container image, `Dockerfile.lambda`), `lambda-zip`, `lambda-edge`, `vercel`, `netlify`, `azure`, `gcf`, `workers`, `vercel-edge`, `netlify-edge`, `deno-deploy`, `supabase-edge`, `fastly`, `wasi`, `wasi-http`, `spin`. | decided, pending sign-off |
| 0.7-9 | `--deploy` names against `--target` names | `--deploy lambda` is a container image while `--target lambda` is a .zip (`--deploy lambda-zip`); `spin` exists only as a deploy name (it builds `wasi-http`); `bun` and `deno` are not deploy names (every portable template gets their scripts). | open |
| 0.7-10 | Templates | `plain` (IO only; default), `express`, `hono`, `fastify` (npm servers through hand-written `@[js]` bindings of the npm package, as documented), `std-http` (pure Lean `Std.Http`), `web` (`Lasm.UI` counter), `fetch` (`Lasm.JS.Web` handler; per-target entries, 0.2-8), `fullstack` (`Lasm.RPC` + `Lasm.Fetch` + `Lasm.UI` + `Lasm.KV`; changes with 0.2-1 and 0.6-15); `common` holds the shared `App.lean`. A53. | decided, pending sign-off |
| 0.7-11 | What `lasm init` writes | `lakefile.toml` (`[[lean_lib]] App`, `[[lean_exe]] app`), `lean-toolchain`, `package.json` (`@lasm/cli` pinned; scripts `dev`, `build`, `start`, `build:<target>`, `start:<target>`, `dev:bun`, `build:bun`, `build:deno`, …), `Main.lean`, `App.lean`, `README.md`, `Dockerfile`, `.dockerignore`, `.gitignore`; with `--deploy`, `wrangler.toml`, `vercel.json`, `netlify.toml`, `fastly.toml`, `spin.toml`, `supabase/config.toml`, `Dockerfile.lambda`. | decided, pending sign-off |
| 0.7-12 | Project configuration the CLI reads | A Lake project (`lakefile.toml` or `lakefile.lean`, `lean-toolchain`), `package.json` (its `name` names the Supabase function and Fastly package; npm dependencies are linked), `package.json` `"lasm": { "edge": { "modules": [...], "exclude": [...] } }` (modules an edge entry imports statically), and a project's own `wrangler.toml`/`wrangler.json`/`wrangler.jsonc` and `fastly.toml`, which the build respects. | decided, pending sign-off |
| 0.7-13 | Environment variables a user sets | `LASM_TOOLCHAIN_CACHE` (the managed cache), `LASM_ARTIFACT_SOURCE` (`auto`, `npm`, `https`), `LASM_DOWNLOAD_ATTEMPTS`, `LASM_DOWNLOAD_CONNECT_MS`, `LASM_DOWNLOAD_IDLE_MS`, `LASM_DOWNLOAD_TOTAL_MS` (docs/INSTALLATION_HARDENING.md), `LASM_BUILD_JOBS`, `LASM_EDITOR` (`0` disables the editor setup, `1` forces it on CI), `LASM_DEV_WORKERS`, `LASM_DEV_STDIN`, `LASM_CLI` (the Vite plugin's CLI), `LASM_APPLICATION_RUNTIME` and `LASM_EDGE_RUNTIME` (use a local runtime directory), and `LASM_THREAD_POOL` (0–64, read by built Node apps). Built servers listen on `HOST` and `PORT`; `CI` and `NO_COLOR` are honored. | decided, pending sign-off |
| 0.7-14 | Diagnostic and internal environment variables | Diagnostics: `LASM_DEV_TRACE`, `LASM_KEEP_LINK_WORK`, `LASM_LINK_DEBUG`, `LASM_LINK_DRIVER`, `LASM_INITIALIZATION`, `LASM_INITIALIZATION_KEEP`, `LASM_TEST_LINK_EVIDENCE`, `LASM_TEST_UNOPTIMIZED`. Set by Lasm for its own processes: `LASM_DEV_SERVER`, `LASM_FULL_APP_PATH`, `LASM_FULL_HOST_MODULE`, `LASM_BINDING_PROJECT`, `LASM_BINDING_BUILTINS`. The shims' `LASM_SERVER_PORT` and `LASM_START_TIMEOUT_MS` go with 0.2-6. Open: which are public, and an internal prefix for the rest. | open |
| 0.7-15 | `lasm build <file>.json` | The parser still accepts a binding configuration (`--target applies to Lean applications, not binding configurations`), but the build refuses it with a message about "this Lasm candidate" (the `lasm.json` pipeline retired on 2026-11-03). | to remove |
| 0.7-16 | `lasm --help` | The top-level usage omits `--allow-dev`; `lasm dev` and `lasm package` have the gaps in 0.7-6 and 0.7-7. Part of the error-text review. | open |
| 0.7-17 | Error text and exit codes | Every command's messages and exit status (Jordan's checklist: review the whole `lasm` CLI). Ledger's question: `--target wasi` failing when `dist/` already holds another build. | open |
| 0.7-18 | `@lasm/cli` | The CLI package: bin `lasm` (`npx @lasm/cli init my-app`), `engines.node >=24`; subpath exports `@lasm/cli/vite`, `@lasm/cli/vite/client`, `@lasm/cli/package.json`. The data-only tool packages it fetches (`@lasm/<tool>-<platform>`) are not user API. A56. | decided, pending sign-off |
| 0.7-19 | `@lasm/cli/*` | A wildcard export makes every file of the CLI importable; `@lasm/create` imports `src/init.mjs` through it. Open: narrow the exports. | open |
| 0.7-20 | `@lasm/create` | `npm create @lasm@latest my-app -- --template hono` runs `lasm init` with the exactly pinned `@lasm/cli` (bin `create-lasm`), and prompts for the directory and template on a terminal. Its usage text lists only `plain\|express\|hono\|std-http` and `--deploy lambda`, and its fallback template list is the same stale four. | open |
| 0.7-21 | The Vite plugin (`@lasm/cli/vite`) | `import lasm from '@lasm/cli/vite'; export default { plugins: [lasm()] }` with options `suspend`, `cli`, `release`; `import app from './Main.lean?lasm'` builds with `--target browser --bundler`. | decided, pending sign-off |
| 0.7-22 | The browser loader API (`*.lean?lasm`, `app.<hash>.js`) | `mount(element, { flags, hydrate, jspi, onError, stdout, stderr })`, `mountAll`, `preload`, `appOf`, and the `LasmApp` (`send`, `unmount`, `ports`) and `LasmPort` types (`@lasm/cli/vite/client`). | decided, pending sign-off |
