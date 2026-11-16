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
| A4 | Lasm.JS core | Should `Function.ofFn` set `length`? | [Q4](api/SHAPES_REVIEW_2026-11-11.md#1-lasmjs-core) | decided in 0.6 ([below](#a4-functionoffn-sets-the-javascript-functions-length)), pending sign-off |
| A5 | Lasm.JS core | Should the build-time check skip `globalThis` exports that Node lacks? | [Q5](api/SHAPES_REVIEW_2026-11-11.md#1-lasmjs-core) | decided in 0.6 ([below](#a5-the-binding-check-warns-about-globals-the-builds-target-provides)), pending sign-off |
| A6 | Lasm.JS core | Inline JavaScript and classes (LASM_JS_GAPS.md, PR #169): `@[js "./ffi/foo.mjs" "f"]` paths relative to the Lean file, and a `Lasm.JS.Class.define` builder (a real `class extends`, no `eval`). | [Q6](api/SHAPES_REVIEW_2026-11-11.md#1-lasmjs-core) | pending sign-off |
| A7 | Lasm.JS core | Should `exportDefault` take `[ToJS α]` (branch)? | [Q7](api/SHAPES_REVIEW_2026-11-11.md#1-lasmjs-core) | pending sign-off |
| A8 | Lasm.JS core | Confirm the core shapes in REVIEW.md §1: Symbol and number keys (#170); no fire-and-forget `Async` in `ofSyncFn`; waits inside synchronous callbacks stay a clear error. | [Q8](api/SHAPES_REVIEW_2026-11-11.md#1-lasmjs-core) | decided in 0.6 ([below](#a8-a47-a48-a49-a50-the-core-shapes-confirmed)), pending sign-off |
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
| A37 | Lasm.RPC | Should `dispatch` replace `handler` (PR #213), and should RPC ship one-line adapters per server kind (e.g. `Lasm.RPC.webHandler`)? | [Q37](api/SHAPES_REVIEW_2026-11-11.md#12-lasmrpc) | dropped with Lasm.RPC in 0.6 ([below](#a37-a38-dropped-with-lasmrpc)), pending sign-off |
| A38 | Lasm.RPC | Keep `serve'` (prime) as the name for the proof-free form, or `serveNoProof` / `serveSimple`? | [Q38](api/SHAPES_REVIEW_2026-11-11.md#12-lasmrpc) | dropped with Lasm.RPC in 0.6 ([below](#a37-a38-dropped-with-lasmrpc)), pending sign-off |
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
| A47 | Lasm.JS core | Symbol and number keys: `get`/`set` take any `[ToJS κ]` key (#170, 0.6.1). | [REVIEW.md §1](REVIEW.md#high-priority-work-to-define-with-jordan) | decided in 0.6 ([below](#a8-a47-a48-a49-a50-the-core-shapes-confirmed)), pending sign-off |
| A48 | Lasm.JS core | Waits inside synchronous callbacks stay a clear error, by design (#122, 0.5.0). | [REVIEW.md §1](REVIEW.md#high-priority-work-to-define-with-jordan) | decided in 0.6 ([below](#a8-a47-a48-a49-a50-the-core-shapes-confirmed)), pending sign-off |
| A49 | Lasm.JS core | No fire-and-forget `Async` in `ofSyncFn`. | [REVIEW.md §1](REVIEW.md#apis-and-libraries) | decided in 0.6 ([below](#a8-a47-a48-a49-a50-the-core-shapes-confirmed)), pending sign-off |
| A50 | Lasm.JS core | `Lasm.JS.Wire.encode` returns `Except String ByteArray` (#154, 0.6.1, breaking). | [REVIEW.md §1](REVIEW.md#apis-and-libraries) | decided in 0.6 ([below](#a8-a47-a48-a49-a50-the-core-shapes-confirmed)), pending sign-off |
| A51 | Bindings | `Lasm.Web` deleted for the generated `Lasm.JS.Web.Browser`, with `Lasm.UI.Mount` (#193, #197, 0.7.0, breaking). | [REVIEW.md §1](REVIEW.md#the-browser-tier-replaced-lasmweb-2026-11-10-jordans-decision-claudes-choices-to-review) | pending sign-off |
| A52 | Bindings | `Lasm.Fastly` generated from Fastly's witx; the hand-written store calls removed (#194, 0.7.0, breaking). | [REVIEW.md §1](REVIEW.md#host-bindings-lasmfastly-generated-lasmwasi-next-decided-by-jordan-2026-11-10) | pending sign-off |
| A53 | Templates | `lasm init --template fetch` uses `Lasm.Fetch` only on Node; Fastly, wasi:http/Spin and WASI get their own entry modules (#218, 0.8.0). | [REVIEW.md §1](REVIEW.md#apis-and-libraries) | pending sign-off |
| A54 | Libraries | PR #124's drafts (`Lasm.Web.Crypto`, a WebSocket upgrade in `Lasm.Fetch.serve`, `Lasm.Markdown`) not taken; kept on the `api-proposals` branch. | [REVIEW.md §1](REVIEW.md#apis-and-libraries) | pending sign-off |
| A55 | CLI | Proposed, not built: a WASI reactor build (`lasm build … --target wasi --reactor`) for the CLI's glue; under Stage 2's backend this question may change. | [REVIEW.md §2](REVIEW.md#the-cli-surface) | pending sign-off |
| A56 | Packaging | Where the `Lasm.*` libraries live (inside `@lasm/cli` or separate `@lasm/*` packages): deferred by Jordan until the APIs are final. | [REVIEW.md §1](REVIEW.md#major-where-the-lasm-libraries-live-deferred-by-jordan-2026-11-10) | pending decision |

## Milestone 0.6: the `Lasm.*` libraries

Decisions of ROADMAP.md's milestone 0.6, each with its shape, code, why, the
alternatives, and where it shipped. New entries are numbered `0.6-1`, `0.6-2`,
…; decisions on an existing question keep its id.

### Lasm.JS core

#### A4: `Function.ofFn` sets the JavaScript function's `length`

**Decision.** Every function maker takes `(length : Nat := 0)`; `ofFn1` sets 1,
`ofFn2` and `ofSyncFn2` set 2. The host sets it with
`Object.defineProperty(f, "length", …)` when it creates the function (op 210's
argument carries it above the kind byte), so it costs no extra host call.

```lean
Function.ofFn (f : Array Data → Async Data) (length : Nat := 0) : IO Value
Function.ofFnReply (f : Array Data → Async Function.Reply) (length : Nat := 0) : IO Value
Function.ofSyncFn (f : Array Data → IO Data) (length : Nat := 0) : IO Value
Function.ofFn1 (f : α → Async β) : IO Value                    -- length 1
Function.ofFn2 (f : α → β → Async γ) : IO Value                -- length 2
Function.ofSyncFn2 (f : α → β → IO γ) : IO Value               -- length 2

-- An Express error handler: Express recognises it by its four parameters.
let onError ← Function.ofFn (length := 4) fun args => do …
```

**Why.** JavaScript callers read `length`: `Deno.serve` calls a handler of
length 0 without its request, and Express treats only a four-parameter
function as an error handler. A JavaScript function declares its parameters,
so the native shape is a function whose `length` is its arity. The default
stays 0 (a variadic function, which `(...args)` also reports), so existing
programs behave the same, except that `ofFn1`/`ofFn2`/`ofSyncFn2` handlers
now report their arity.

**Alternatives.** Leave it at 0 and document it (Q4 b): every API that reads
`length` stays unusable from Lean. Infer the length from `f`: `f` takes an
`Array Data`, so there is nothing to infer from. A separate
`Function.withLength` call: one more host call per function, and easy to
forget.

**Tests.** `test/node-js.test.mjs` and `test/edge-js.test.mjs` (op 210);
`test/fixtures/js-interop` (`lengths: 0 1 2 3`, installed acceptance on
Linux, macOS and Windows). Docs: docs/JS_BINDINGS.md, "Callbacks".

**Where.** PR (this one), next release. **Status:** pending sign-off.

#### A5: the binding check warns about globals the build's target provides

**Decision.** `lasm build`'s binding check still runs on Node. A
`@[js "globalThis" "…"]` export that Node lacks fails a Node build as before,
and is a warning when the build's target is another runtime (`--target deno`,
`bun`, `workers`, `deno-deploy`, `vercel-edge`, `netlify-edge`,
`supabase-edge`, `browser`):

```lean
@[js "globalThis" "Deno.serve"] opaque denoServe : Value → IO Value   -- builds for --target deno
```

```
[lasm] Lasm.JS binding warning: Main.denoServe: globalThis export "Deno.serve" is missing where Lasm checks bindings; it must exist on deno
```

**Why.** A global belongs to the runtime the program targets: Deno's `Deno`,
the browser's `document`. Checking it against Node is checking the wrong
runtime. Other errors (an export that is not a function, a module that is not
installed) stay errors on every target. Option (b) of Q5.

**Alternatives.** (a) Warn on every target: hides a real mistake on Node.
(c) Leave it: hand-written bindings of Deno, Bun, Workers or browser globals
cannot build, which pushes programs to dynamic `global.get` chains. Running
the check on the target runtime: Lasm does not install Deno or a browser to
build.

**Tests.** `test/application-binding-check.test.mjs`,
`test/cli-dispatch.test.mjs`. Docs: docs/JS_BINDINGS.md, "Binding check".

**Where.** PR (this one), next release. **Status:** pending sign-off.

#### A8, A47, A48, A49, A50: the core shapes confirmed

**Decision.** Kept as they are (A8 is the three below, A47–A49):

- **A47.** `get`/`set` take any `[ToJS κ]` key: `o.get "rows"`,
  `o.get (2 : Nat)`, `o.get symbolValue`, as JavaScript's `o[key]` (#170,
  0.6.1).
- **A48.** A wait inside a synchronous callback (`ofSyncFn`) that needs the
  JavaScript event loop fails at once with an error naming the wait (#122,
  0.5.0). JavaScript's caller is blocked on the callback, so the promise
  could never settle; serving other host calls meanwhile would run unrelated
  JavaScript in the middle of the caller.
- **A49.** `ofSyncFn` has no fire-and-forget `Async`: starting background
  work is explicit (`Value.toTask`, a Lean task), so a synchronous callback
  never silently drops a computation.
- **A50.** `Lasm.JS.Wire.encode : Data → Except String ByteArray` (#154,
  0.6.1): a value whose length does not fit the wire's u32 is an error, not a
  wrapped length.

```lean
let tag ← (← global).get "Symbol" >>= (·.callMethod "for" #[toJS "lasm.tag"])
box.set tag "tagged"                                 -- A47
let f ← Function.ofSyncFn fun _ => do
  let p ← lib.callMethod "later" #[]
  p.await String                                     -- A48: fails at once, catchable
```

**Why.** Each is what JavaScript itself does (any property key; run to
completion) or makes a failure explicit instead of silent. **Alternatives**
are in REVIEW.md §1: String-only keys, waits that hang or deadlock, an
implicit background `Async`. **Tests.** `test/fixtures/js-interop` (keys),
`test/fixtures/js-sync-waits`, `test/lasm-js-framing.test.mjs`.

**Where.** Shipped in 0.5.0 and 0.6.1. **Status:** pending sign-off.

### Lasm.RPC

#### 0.6-1: Lasm.RPC is dropped (Jordan, 2026-11-16)

**Decision.** Lasm.RPC is deleted. A Lean app's server and browser share
plain Lean types and talk plain REST over each host's own fetch API
(Lasm.JS.Web's `fetch`, `Request` and `Response`; Lasm.Fastly; Lasm.WASI.Http).
Validation is a subtype the shared module declares, so a handler that needs a
valid value demands it in its type:

```lean
-- Shared.lean
def ValidTitle := { t : String // checkTitle t = .ok () }
structure NewTodo where
  title : String
  deriving ToJson, FromJson

-- Server: the route parses, validates once, and hands on the subtype.
def addTodo (t : ValidTitle) : Async Todo := …
```

**Why.** Every host already has a native way to serve and call HTTP, and
REST with shared types is what those hosts and their tools expect. RPC's one
guarantee, the validation proof reaching the handler, is a subtype, which
needs no library.

**Alternatives.** Keeping Lasm.RPC with a transport-free `dispatch` and
`Lasm.RPC.webHandler` (PR #303, closed unmerged).

**Where.** Decided 2026-11-16. The library is deleted, and Conduit's and
Ledger's frontends move off `Endpoint.call`, once Lasm.UI is decided (their
`call` commands are Lasm.UI commands). **Status:** pending sign-off.

#### A37, A38: dropped with Lasm.RPC

**Decision.** No `dispatch`, `webHandler` or `serve'` naming question
remains: they are dropped with Lasm.RPC ([0.6-1](#06-1-lasmrpc-is-dropped-jordan-2026-11-16)).
PR #303, which built `dispatch` and `webHandler`, was closed unmerged.
**Status:** pending sign-off.
