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
- **Id and area** (A1, A2, …; the library, binding tier or CLI area).
- **Decision:** the shape, with real code examples in the linked detail.
- **Why**, and the alternatives considered.
- **Where:** the PR and the release it shipped in (or "proposed").
- **Status:** `pending sign-off`, `signed off (date)`, or `changed by Jordan
  (date): …`.

## Inventory

Seeded on 2026-11-16 from the 46 questions of the
[API shapes review of 2026-11-11](api/SHAPES_REVIEW_2026-11-11.md) and the API
items of [REVIEW.md](REVIEW.md). This is a seed, not the complete inventory:
milestone 0.1 lists every public surface (all `Lasm.*` namespaces, the CLI,
configuration, generated platform files and templates) and gives each its
entries.

### From the API shapes review (Q1–Q46)

The questions, options and Claude's recommendations, with code, are in the
linked section of the review.

| Id | Area | Decision to sign off | Detail | Status |
| --- | --- | --- | --- | --- |
| A1 | Deno | What happens to `--target deno-deploy`? | [Q1](api/SHAPES_REVIEW_2026-11-11.md#0-deno-decide-first-it-affects-several-sections) | decided by Jordan (2026-11-16): keep `--target deno-deploy` fully supported, with no at-risk warning ([milestone 0.4](#milestone-04-node-bun-and-deno)) |
| A2 | Deno | What happens to `Lasm.JS.Deno` and `--target deno`? | [Q2](api/SHAPES_REVIEW_2026-11-11.md#0-deno-decide-first-it-affects-several-sections) | decided by Jordan (2026-11-16): full support, `Lasm.JS.Deno` generated in full including Deno KV ([milestone 0.4](#milestone-04-node-bun-and-deno)) |
| A3 | Deno | Should Netlify Edge and Supabase Edge, which depend on the Deno runtime, be marked as at-risk targets? | [Q3](api/SHAPES_REVIEW_2026-11-11.md#0-deno-decide-first-it-affects-several-sections) | decided by Jordan (2026-11-16): not marked at risk ([milestone 0.4](#milestone-04-node-bun-and-deno)) |
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
| A17 | Lasm.JS.Node | Should Node's docs be the source instead of `@types/node`? | [Q17](api/SHAPES_REVIEW_2026-11-11.md#5-lasmjsnode-generated) | decided by Jordan (2026-11-16): Node's own doc JSON ([milestone 0.4](#milestone-04-node-bun-and-deno)) |
| A18 | Lasm.JS.Node | Should Claude merge the `node:http`/`net`/`https` branch (about 2,700 lines of generated Lean)? | [Q18](api/SHAPES_REVIEW_2026-11-11.md#5-lasmjsnode-generated) | decided (2026-11-16): merged in #220, pending sign-off ([milestone 0.4](#milestone-04-node-bun-and-deno)) |
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

## Milestone 0.4: Node, Bun and Deno

Entries of [ROADMAP.md](../ROADMAP.md)'s milestone 0.4. Full rules and examples:
[JS_BINDINGS.md](JS_BINDINGS.md#standard-bindings-for-node-lasmjsnode).

### A1–A3: Deno stays fully supported

- **Decision (Jordan, 2026-11-16):** full Deno support. `--target deno` and
  `--target deno-deploy` stay fully supported with no at-risk warnings (none
  existed in the CLI or README; none are added), Netlify Edge and Supabase
  Edge are not marked at risk, and `Lasm.JS.Deno` is generated in full,
  including Deno KV (apps use it directly once `Lasm.KV` is deleted).
- **Why:** people use Deno now, and the effect of Cloudflare's acquisition is
  unknown. **Alternatives:** keep until Deno Deploy closes, freeze at 2.9.6,
  or plan removal (Q1–Q3).
- **Where:** this milestone's Deno PRs. **Status:** decided by Jordan.

### A17: Lasm.JS.Node is generated from Node's own docs

- **Decision (Jordan, 2026-11-16):** the source is Node's machine-readable
  documentation (`https://nodejs.org/dist/v<version>/docs/api/<module>.json`,
  hashes pinned in `scripts/bindings/node-api.lock.json`), lowered to WebIDL by
  `scripts/bindings/node-api.mjs`, then `generate-web.mjs`.

  ```lean
  import Lasm.JS.Node
  open Lasm.JS Lasm.JS.Web Lasm.JS.Node

  def run : Async Unit := do
    let file ← path.join #[← os.tmpdir, "hello.txt"]
    fsPromises.writeFile file "hi"
    let key ← crypto.scrypt "password" "salt" 32
    IO.println (← Buffer.toString key (some "hex"))
  ```
- **Why:** the docs are Node's own statement of the API, with stability
  levels (Experimental, Deprecated and Legacy members are never generated),
  `added:` versions and per-member prose that the lowering quotes and checks.
  **Alternative:** `@types/node` (community-maintained; no stability marks;
  overloaded TypeScript shapes that do not map to Lean one to one).
- **Where:** #192 (0.7.0); unchanged since. **Status:** decided by Jordan
  (2026-11-16).

### A18: `node:net`, `node:http` and `node:https` are generated and merged

- **Decision:** merge PR #220. `Lasm.JS.Node.Net`, `.Http` and `.Https` give
  every stable member of `net` (`createServer`, `connect`, `Server`, `Socket`,
  `BlockList`, `SocketAddress`, `BoundSocket`), `http` (`createServer`,
  `request`, `get`, `Server`, `IncomingMessage`, `ServerResponse`,
  `ClientRequest`, `OutgoingMessage`, `Agent`) and `https`, from the same docs
  and generator. This is not a serving path: Node servers use `Node.serve`
  (milestone 0.2, `Lasm.JS.Node.Serve`); these are for raw TCP servers and
  outbound `http.request`. The namespaces do not collide with
  `Lasm.JS.Node.Serve` (`Node.serve` is a separate module under the same
  root; the generated names are the docs' lowercase ones: `http.createServer`).

  ```lean
  let echo ← http.Server.RequestListener.ofFn fun req res => do
    discard <| res.setHeader "x-method" (← req.method)
    discard <| res.writeHead 200
    discard <| res.«end» (some body)
  let server ← http.createServer none (some echo)
  ```
- **Why:** Jordan's direction is complete generated bindings per platform, and
  users who need a raw socket or Node's HTTP client should not hand-bind them.
  **Alternatives:** drop `http` and keep `net` only; keep the branch held.
- **Where:** #220 (unreleased). **Status:** pending sign-off.

### 0.4-1: documented events are typed listeners

- **Decision:** each stable documented event of a generated class becomes a
  listener type with the event's documented argument types
  (`http.Server.RequestListener`, made with `ofFn` or `ofSyncFn`) and two
  operations, `on<Event>` and `once<Event>`, that call `emitter.on` /
  `emitter.once` with the event's name and return the emitter. Arguments the
  docs give only in prose are stated in `node-tier2.mjs` `eventProse`, quoting
  the sentence. Listener parameters (`requestListener`, `connectListener`)
  take that event's listener type.

  ```lean
  discard <| server.onceListening (← net.Server.ListeningListener.ofSyncFn (do ready.resolve ()))
  discard <| child.onceExit (← ChildProcess.ExitListener.ofFn fun code signal => …)
  ```
- **Why:** the event names and argument types are part of the documented API;
  a typed listener catches a misspelled event or a wrong argument type at
  compile time. **Alternative:** only the generic `EventEmitter.on (event :
  String)` with `Data` arguments (still available).
- **Where:** #220 (unreleased). **Status:** pending sign-off.

### 0.4-2: parent projections named in full where they collide

- **Decision:** a class whose ancestors' automatic Lean parent projections
  would collide gets the parent's full name (`https.Server.toHttpServer`).
- **Why:** Lean's automatic name (`toServer`) is ambiguous between
  `net.Server` and `http.Server`. **Alternative:** renaming the classes.
- **Where:** #220 (unreleased). **Status:** pending sign-off.

### 0.4-3: explicit instance names on generated Node types

- **Decision:** instances of generated `Lasm.JS.Node` types have explicit
  names (`instFromJSFsStats`). Nothing refers to the automatic names.
- **Why:** Lean's automatic instance names collided across namespaced types
  (`fs.Stats`, `net.Server`). **Alternative:** none that keeps both types.
- **Where:** #220 (unreleased). **Status:** pending sign-off.

### 0.4-4: Lasm.JS.Node is every Node core module, generated as the docs give it

- **Decision (Jordan's direction, 2026-11-16: the generated sources as they are):**
  `Lasm.JS.Node` is generated from all 45 documentation files of Node's own
  modules (the table in [JS_BINDINGS.md](JS_BINDINGS.md#what-is-covered-1)), one
  Lean module per file, with no hand-picked subset: `node-api.mjs` finds the
  containers itself (every `Class:` section; every module-level owner of
  documented members, `fs`, `fsPromises`, `dnsPromises`, …). The promises,
  callback and synchronous forms of `node:fs` are all generated.

  ```lean
  let gz ← zlib.gzipSync (.domString "hi")
  let back ← zlib.gunzip (.uint8Array gz)          -- Async ByteArray
  let entries ← fs.readdirSync (.domString ".")
  let h ← crypto.createHash "sha256"
  ```
- **Why:** one rule for the whole source; nothing to review per member; users
  get the API Node documents. **Alternatives:** the hand-picked "server
  essentials" of 0.7.0 (retired); `@types/node` (A17).
- **Where:** this milestone's Node PR (unreleased). **Status:** pending sign-off.

### 0.4-5: stability marks and Node 26 members

- **Decision:** members marked Deprecated, Experimental or Legacy are generated
  and say so in their doc comment (`**Experimental** in the Node.js 24.22.2
  docs`). The bindings follow the Node 24.22.2 docs (the oldest supported Node);
  what only the Node 26.13.0 docs document is added with `**Node.js 26 and
  later**` in its doc comment (`buffer.isLatin1`, `Buffer.stringLength`). The
  conformance run fails on Node when a generated member is missing, except
  Experimental ones and, on Node 24, the Node 26 additions.
- **Why:** the source as it is; a user on Node 26 can use Node 26's API, and
  the marks say where it is not portable. **Alternatives:** stable members only
  (0.7.0's rule); Lean `@[deprecated]` attributes (warnings on every use of a
  deprecated Node API, noisy for members Node keeps working); one binding set
  per Node version.
- **Where:** this milestone's Node PR. **Status:** pending sign-off.

### 0.4-6: web standards stay in Lasm.JS.Web

- **Decision:** a Node class whose name is a web standard interface (`URL`,
  `EventTarget`, `Blob`, `MessagePort`, `TextEncoder`, `PerformanceObserver`,
  …), the `console` namespace, and the members of Node objects that a web
  interface defines (`crypto.randomUUID`, `crypto.getRandomValues`,
  `crypto.subtle`; `performance.now`, `mark`, `measure`, …) are not generated in
  `Lasm.JS.Node`; Node types that name them use `Lasm.JS.Web`'s types.
  Exceptions, Node's own classes that share a web name, are listed
  (`cluster.Worker`, `worker_threads.Worker`, `vm.Module`). **Breaking:**
  `Lasm.JS.Node.crypto.randomUUID` is gone; use `(← Lasm.JS.Web.crypto).randomUUID`.
- **Why:** host namespaces hold only each host's non-web APIs (Jordan,
  2026-11-16); one type per web API across every target. **Alternative:**
  generate Node's own documentation of them too (two types for one object).
- **Where:** this milestone's Node PR. **Status:** pending sign-off.

### 0.4-7: callbacks, overload names and prose types

- **Decision:** a required trailing `callback(err, value)` is `Async value`
  through `util.promisify` (as in 0.7.0); a required callback with more values or
  undocumented arguments is a `JSFunction` argument, as documented; an optional
  trailing callback is left out (its synchronous form). Overloads take the
  shared overload naming (`Buffer.fromWithString`, `Buffer.fromWithArrayBuffer`;
  **breaking:** `Buffer.from` of a string is now `Buffer.fromWithString`, since
  `Buffer.from` has four documented forms). A type the docs give only in prose
  is `any` (`Data`) unless `node-tier2.mjs` `prose` states it with a quoted
  sentence (zlib's convenience methods: `Async ByteArray` and `IO ByteArray`).
  Two classes of one name in different modules are named with their module.
- **Why:** mechanical rules, no per-member choices; a prose statement is the
  docs' own words. **Alternatives:** `util.promisify` for every callback (it
  drops all values but the first, or needs `util.promisify.custom`); failing the
  lowering on prose types (0.7.0, which forced a subset).
- **Where:** this milestone's Node PR. **Status:** pending sign-off; the shared
  rules (A9–A12, docs/BINDING_RULES.md) supersede these names once they land.

### 0.4-8: the node-core example and the Node conformance gate

- **Decision:** `examples/node-core` (a file report: `fsPromises`, `crypto`,
  `zlib`, `path`, `os`, `process` only) is built and run by `web-bindings.yml`
  on Node 26 and Node 24, and `test/fixtures/js-node` probes every generated
  member on Node 26, Node 24, Bun and Deno.
- **Why:** every API ships with an example exercised in CI (Jordan's rule).
- **Where:** this milestone's Node PR. **Status:** pending sign-off.

### 0.4-9: what Lasm.JS.Node does not generate, and why

- **Decision:** only what cannot work from Lean compiled to Wasm, or is not a
  named member:
  - `Buffer`'s instance properties (`buf.length`, `buf.buffer`,
    `buf.byteOffset`, `buf.parent`, `buf.poolSize`) and its methods that write
    into the buffer in place without returning it (`buf.write`,
    `buf.writeUInt32BE` and the other `write…` methods): a `Buffer` is a Lean
    `ByteArray`, a copy, so the property describes memory Lean does not hold
    and the write would be lost.
  - Members with computed keys (`buf[index]`, `[Symbol.asyncDispose]()`):
    not named members (`Value.get` with the key reaches them).
  - `inspector.Session`'s `'<inspector-protocol-method>'` event: a placeholder
    for every protocol event.
  - `options.detached`, `options.stdio` in `child_process.md`: spawn's options,
    documented under their own headings (members of `SpawnOptions`).
- **Why:** Jordan, 2026-11-16: exclusions only where something cannot work
  from Wasm, each recorded with its reason. **Alternative:** generating the
  Buffer members against a copy (they would silently do nothing).
- **Where:** this milestone's Node PR; the list is generated into
  `scripts/bindings/node-coverage.json`. **Status:** pending sign-off.
