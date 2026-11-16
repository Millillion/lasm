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
| A1 | Deno | What happens to `--target deno-deploy`? | [Q1](api/SHAPES_REVIEW_2026-11-11.md#0-deno-decide-first-it-affects-several-sections) | pending sign-off |
| A2 | Deno | What happens to `Lasm.JS.Deno` and `--target deno`? | [Q2](api/SHAPES_REVIEW_2026-11-11.md#0-deno-decide-first-it-affects-several-sections) | pending sign-off |
| A3 | Deno | Should Netlify Edge and Supabase Edge, which depend on the Deno runtime, be marked as at-risk targets? | [Q3](api/SHAPES_REVIEW_2026-11-11.md#0-deno-decide-first-it-affects-several-sections) | pending sign-off |
| A4 | Lasm.JS core | Should `Function.ofFn` set `length`? | [Q4](api/SHAPES_REVIEW_2026-11-11.md#1-lasmjs-core) | pending sign-off |
| A5 | Lasm.JS core | Should the build-time check skip `globalThis` exports that Node lacks? | [Q5](api/SHAPES_REVIEW_2026-11-11.md#1-lasmjs-core) | pending sign-off |
| A6 | Lasm.JS core | Inline JavaScript and classes (LASM_JS_GAPS.md, PR #169): `@[js "./ffi/foo.mjs" "f"]` paths relative to the Lean file, and a `Lasm.JS.Class.define` builder (a real `class extends`, no `eval`). | [Q6](api/SHAPES_REVIEW_2026-11-11.md#1-lasmjs-core) | pending sign-off |
| A7 | Lasm.JS core | Should `exportDefault` take `[ToJS α]` (branch)? **Decided:** [milestone 0.5](#a7-exportdefault-tojs-α-implemented-here). | [Q7](api/SHAPES_REVIEW_2026-11-11.md#1-lasmjs-core) | pending sign-off |
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
| A26 | Lasm.JS.Cloudflare | Workers `env`: `Data` + `readField` (current), or a program-declared `structure Env` with `deriving FromJS` passed to the handler (needs a generic handler type)? **Decided:** [milestone 0.5](#a26-workers-env-the-program-declares-env-the-handlers-receive-it-typed). | [Q26](api/SHAPES_REVIEW_2026-11-11.md#8-lasmjscloudflare-in-progress) | pending sign-off |
| A27 | Lasm.JS.Cloudflare | `waitUntil` and `blockConcurrencyWhile` need `Async` → JS promise: add `Lasm.JS.Async.toPromise : Async α → IO Value` (new core API), or leave it to programs? **Decided:** [milestone 0.5](#a27-lasmjsasynctopromise). | [Q27](api/SHAPES_REVIEW_2026-11-11.md#8-lasmjscloudflare-in-progress) | pending sign-off |
| A28 | Lasm.JS.Cloudflare | Durable Objects. Keep the JavaScript class shim until `Lasm.JS.Class.define` (Q6) exists, or block Durable Objects support on it? **Decided:** [milestone 0.5](#a28-durable-objects-stay-a-javascript-class-in-the-project). | [Q28](api/SHAPES_REVIEW_2026-11-11.md#8-lasmjscloudflare-in-progress) | pending sign-off |
| A29 | Lasm.JS.Cloudflare | Should Claude merge the branch as it is (with Q9, Q10 and Q11 applied later)? **Decided:** [milestone 0.5](#a29-lasmjscloudflare-merged-with-the-shared-rules-applied-afterwards). | [Q29](api/SHAPES_REVIEW_2026-11-11.md#8-lasmjscloudflare-in-progress) | pending sign-off |
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

## Milestone 0.5: Lasm.JS.Cloudflare, the apps off hand-written bindings, Lasm.KV deleted

Decided by Claude where Jordan had not (his 2026-11-16 rule: the platform-native
option), built, and recorded here. All entries are pending Jordan's sign-off at the
milestone's end.

### A26 Workers `env`: the program declares `Env`, the handlers receive it typed

- **Decision** (Jordan, 2026-11-16, option (b)): the program declares its bindings as
  a structure with `deriving FromJS`, and every handler gets it typed. The generated
  `ofFn` and `ofSyncFn` of `ExportedHandlerFetchHandler`,
  `ExportedHandlerScheduledHandler` and `ExportedHandlerQueueHandler` take
  `{Env : Type} [FromJS Env]`, and so does `Lasm.JS.Cloudflare.env` (`env` of
  `cloudflare:workers`). The handle types themselves stay unparameterized: they are
  JavaScript functions.

  ```lean
  structure Env where
    KV : KVNamespace     -- [[kv_namespaces]] binding = "KV"
    DB : D1Database      -- [[d1_databases]] binding = "DB"
    GREETING : String    -- [vars]
    deriving FromJS

  let fetch ← ExportedHandlerFetchHandler.ofFn fun request (env : Env) ctx => do
    let hits := ((← env.KV.get "hits").bind String.toNat?).getD 0
    …
  let e : Env ← Lasm.JS.Cloudflare.env
  ```
- **How it is generated:** the tier's `typeParameters` (`cloudflare-tier3.mjs`) names
  `Env`. The lowering writes the type as `typedef any Cloudflare_Env` marked
  `[LasmTypeParameter="Env"]`, and `generate-web.mjs` makes such a typedef a Lean type
  parameter, decoded by `Lasm.JS.Cloudflare.Support.declared`. That function reads a
  plain object as data and first copies an object that is not plain (a proxy) with
  `Object.entries`. A missing binding fails with an error naming the field.
- **Why:** it is what the platform expects. `ExportedHandler<Env>` is generic, and a
  TypeScript Worker declares `interface Env`. Typed fields replace per-request
  `readField KVNamespace env "KV"` lookups that fail only at run time.
- **Alternatives:** (a) `Data` and `readField` (the previous shape; still possible,
  since `Data` is a valid `Env`); (c) generated accessors per binding name (Lasm cannot
  know the program's names).
- **Breaking:** a handler that annotated `env : Data` keeps working. A handler that
  left `env` unannotated and used `readField` on it must now say `(env : Data)` or
  declare an `Env`.
- **Where:** PR #216 (unreleased). **Status:** pending sign-off.

### A27 `Lasm.JS.Async.toPromise`

- **Decision:** a new core function, `Lasm.JS.Async.toPromise [ToJS α] : Async α → IO Value`.
  It starts the computation at once as a Lean task, holding no Lean thread while it
  awaits, and returns a JavaScript promise of `toJS` of its result. The promise
  rejects with an `Error` if the computation throws.

  ```lean
  ctx.waitUntil (← Async.toPromise (env.KV.put "seen" (.domString "1")))
  state.waitUntil (← Async.toPromise (flushLog env))
  ```
- **Why:** `ExecutionContext.waitUntil`, `DurableObjectState.waitUntil` and any API
  typed `Promise<T>` take a promise of work already running. Programs had to write the
  `Function.ofFn` / `call` pair by hand. `blockConcurrencyWhile` needs nothing new:
  it takes a callback, which the generated `DurableObjectStateBlockConcurrencyWhileCallback.ofFn` makes.
- **Alternatives:** leave it to programs (the previous state); type the generated
  `Promise` parameters as `Async α` (it hides a promise that already exists, such as one
  returned by another binding).
- **Where:** PR #216 (unreleased); in Lasm.JS core, agreed with the 0.6 stream through
  main. **Status:** pending sign-off.

### A28 Durable Objects stay a JavaScript class in the project

- **Decision:** a Durable Object is the JavaScript class that the Worker's main module
  exports (`export class Counter extends DurableObject`), a few lines in the project's
  `index.mjs` whose methods call Lean functions published on `globalThis`. Every
  Durable Object API (namespaces, ids, stubs, `DurableObjectState`, storage,
  transactions, alarms) is generated and usable from Lean today. This support does
  not wait for `Lasm.JS.Class.define` (A6).
- **Why:** the class is what Workers natively expects. Lean does not define JavaScript
  classes yet, and a Lasm-generated class shim would be the kind of indirection that
  Jordan's rule excludes. When A6's `Class.define` exists, a program can define the
  class from Lean through it, with no change to these bindings.
- **Alternatives:** block Durable Objects on A6; have Lasm's entry generate the class
  from a naming convention (context-dependent).
- **Where:** PR #216 (unreleased); docs/JS_BINDINGS.md, "Durable Objects: a class in
  JavaScript"; test/fixtures/js-cloudflare/index.mjs. **Status:** pending sign-off.

### A29 Lasm.JS.Cloudflare merged, with the shared rules applied afterwards

- **Decision:** PR #216 merges with its mapping (documented in docs/JS_BINDINGS.md,
  "How the declarations become Lean"). Its shape choices: string-literal overloads become
  named functions (`getJson`, `getArrayBuffer`, `getStream`); same-name overloads
  follow the shared rule (`D1PreparedStatement.first0`); numbers are `Float`; `Date`
  is `Data`. The shared generated-binding rules of A9–A12 (0.3 stream) are applied to
  it when they merge, and every override they add is its own entry.
- **Where:** PR #216. **Status:** pending sign-off.

### A7 `exportDefault [ToJS α]` (implemented here)

- **Decision:** `Lasm.JS.exportDefault [ToJS α] (v : α) : IO Unit`, so an
  `ExportedHandler` is published as it is. A `Value` still works.
- **Where:** PR #216. **Status:** pending sign-off.

### 0.5-1 The Workers entry forwards `scheduled` and `queue`

- **Decision:** the generated `workers/worker.mjs` exports `scheduled` and `queue`
  beside `fetch`. Each calls the method of that name on the object that
  `exportDefault` published, and fails the event with a message when there is none.
  The entry also imports `cloudflare:workers` and `cloudflare:sockets`, so that
  `Lasm.JS.require` finds them.
- **Why:** these are Workers' own handler names (`ExportedHandler`); cron triggers and
  queues otherwise never reach Lean.
- **Where:** PR #216. **Status:** pending sign-off.
