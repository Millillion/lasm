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

### Milestone 0.4: Deno (Lasm.JS.Deno)

Decided by Claude under Jordan's direction calls of 2026-11-16 ("Deno: full
support", "Lasm.KV is deleted: apps use the generated platform bindings
directly", "decide the smaller questions yourself, platform-native").
Detail and the full mapping: [JS_BINDINGS.md, "Standard bindings for
Deno"](JS_BINDINGS.md#standard-bindings-for-deno-lasmjsdeno).

#### A2.1 Lasm.JS.Deno is the whole Deno namespace

- **Decision:** `import Lasm.JS.Deno` gives every function, constant and class
  of the stable `Deno` namespace of Deno 2.9.6, and every type they use,
  generated from Deno's own declarations (`lib.deno.ns.d.ts`,
  `lib.deno_net.d.ts`) by `scripts/bindings/ts-auto.mjs`; the selection is an
  exclude table (`scripts/bindings/deno-tier2.mjs`). Modules follow the
  declarations' `@category`: `Lasm.JS.Deno.Runtime`, `.Permissions`, `.Io`,
  `.Fs`, `.Subprocess`, `.Net`, `.Serve`, `.WebSockets`, `.Fetch`, `.Kv`.
  Names are Deno's (`Deno.readFile`, `Deno.Command.new`, `FsFile.seek`).
  ```lean
  import Lasm.JS.Deno
  open Lasm.JS Lasm.JS.Web

  def run : Async Unit := do
    let dir ← Deno.makeTempDir none
    Deno.writeTextFile (.domString s!"{dir}/a.txt") (.domString "hi") none
    let text ← Deno.readTextFile (.domString s!"{dir}/a.txt") none
    for e in ← (← Deno.readDir (.domString dir)).values do IO.println e.name
    let out ← (← Deno.Command.new (.domString "printf") (some { args := some #["%s", text] })).output
    let l ← Deno.listen { hostname := some "127.0.0.1", port := some 0 }
    IO.println s!"{out.code} {(← l.addr).port}"
  ```
- **Why:** Jordan's call (full Deno support; `--target deno` and
  `--target deno-deploy` stay fully supported). Generating the namespace
  (rather than a hand-picked list, as 0.7.0's `Deno.serve` cut) means every
  new Deno version's additions are decided by the lowering, not missed.
  Alternatives: a curated list per module (rejected: hand-maintained, misses
  APIs); a TypeScript compiler dependency for the lowering (rejected: a large
  dependency for a declaration syntax the reader already handles).
- **Where:** PR #307; unreleased.
- **Status:** pending sign-off.

#### A25.1 WebSockets on Deno: generated now

- **Decision:** `Deno.upgradeWebSocket` (`Lasm.JS.Deno.WebSockets`) is
  generated; its result `WebSocketUpgrade` holds the `Response` to return and
  the socket (Lasm.JS.Web's `WebSocket`: `{ val := up.socket : WebSocket }`).
  ```lean
  let handler ← Deno.ServeHandler.ofFn fun req _ => do
    let up ← Deno.upgradeWebSocket req none
    let socket : WebSocket := { val := up.socket }
    let echo ← Function.ofSyncFn fun args => do
      match (args[0]? : Option Data) with
      | some (.ref event _) => do let _ : Value ← socket.val.callMethod "send" #[← event.get "data" Data]; return .undefined
      | _ => return .undefined
    socket.val.set "onmessage" (toJS echo)
    return up.response
  ```
- **Why:** the platform-native WebSocket server on Deno; Tandem's server-side
  WebSocket need. Alternative: wait for a concrete app (rejected: Jordan wants
  full Deno support now). `socket` is a `Value` because `WebSocket` lives in the
  browser tier's module, which Lasm.JS.Deno does not import.
- **Where:** PR #307; unreleased. (Bun's WebSockets: the Bun PR.)
- **Status:** pending sign-off.

#### 0.4-10 Deno KV and Deno.cron are generated although Deno marks them unstable

- **Decision:** from `lib.deno.unstable.d.ts` only Deno KV (`openKv`, `Kv`,
  `AtomicOperation`, `KvU64`, `KvListIterator`, the key, entry, selector and
  mutation types) and `Deno.cron` are lowered; the rest of that file is not.
  On the Deno CLI they need Deno's own flags (`deno run -A --unstable-kv
  --unstable-cron deno/main.mjs`); Deno Deploy provides them. Lasm adds no flag
  to its output: the program's user runs Deno with the flags their program needs.
  ```lean
  let kv ← Deno.openKv none
  discard <| kv.set #["users", "ada"] (toJS "Ada") none
  let e ← kv.get #["users", "ada"] none            -- e.value : Data, e.versionstamp : Option String
  let op ← (← kv.atomic).check #[{ key := #["users", "ada"], versionstamp := e.versionstamp }]
  let r ← (← op.set #["users", "ada"] (toJS "Ada L.") none).commit   -- r.ok : Bool
  for entry in ← (← kv.list { «prefix» := some #["users"] } none).values do IO.println entry.versionstamp
  ```
- **Why:** an override of the rule "experimental or unstable is never lowered"
  (Jordan, 2026-11-16: full Deno support including KV; `Lasm.KV` is deleted, so
  apps use Deno KV directly). Alternatives: keep KV behind `Lasm.KV` (rejected
  by Jordan); generate the whole unstable file (rejected: WebGPU, QUIC and
  other APIs Deno itself does not commit to); a `deno.json` with
  `"unstable": ["kv"]` in `deno/` (rejected: Deno reads the configuration from
  the working directory, not the module's, so it would not apply as run).
- **Where:** PR #307; unreleased.
- **Status:** pending sign-off.

#### 0.4-11 How TypeScript declarations become Lean (ts-auto rules)

- **Decision:** the rules of [JS_BINDINGS.md, "How Deno's declarations become
  Lean"](JS_BINDINGS.md#how-denos-declarations-become-lean), among them:
  an interface with a required method or a `Promise` property, a class, or an
  interface extending one is a handle; plain data is a copied structure; **a
  union of object types is one structure** whose members are optional where an
  alternative lacks them (`KvEntryMaybe`, `KvListSelector`,
  `PermissionDescriptor`, `KvMutation`); other unions are inductives named
  after their alias, else their members (`DOMStringOrURL`), in Lasm.JS.Deno's
  own namespace, with `Coe` from each member (`Deno.readFile "a.txt"`); a
  generic declaration is one type per instantiation (`Conn`, `ConnUnixAddr`;
  an alias's name where one exists: `TcpListener`); a generic method's
  parameter is its default (`unknown` → `Data`); interface properties are
  read-only except function-typed ones (`onchange`); a TypeScript enum is its
  number; `Date` is `Data`; a `symbol` alternative is dropped; an all-capitals
  enum value is a lower-case constructor (`Signal.sigterm`, `.aaaa`).
  ```lean
  let st ← (← Deno.permissions).query { name := .read, path := some (.domString "/tmp") }  -- one structure for 8 descriptor types
  Deno.kill (← Deno.pid) (some (.signal .sigterm))
  let e ← kv.get #["k"] none
  if e.versionstamp.isNone then IO.println "absent"                                    -- KvEntry | {null…} as one structure
  ```
- **Why:** each is what the declaration means for a Lean caller, decided once
  for every Deno (and later Bun) member. A union of object types as one
  structure is what Deno returns (an object that always has the members, some
  null) and what Lean can build and read without a JavaScript discriminant;
  unions in Deno's own namespace keep Lasm.JS.Deno from importing Lasm.JS.Node.
  Alternatives: an inductive per union of objects (rejected: a result cannot be
  told apart by its JavaScript kind, so it would read as `Data`); `Float`-only
  numbers everywhere (kept for now except ports, pending A11).
- **Where:** PR #307; unreleased. Shared rules A9–A12 (0.3) apply on top when
  they land.
- **Status:** pending sign-off.

#### 0.4-12 The override tables of deno-tier2.mjs

- **Decision:** four reviewed tables complete the mechanical rules:
  - **names** of overloads: `listenUnix`, `connectUnix`, `serveWithUnixOptions`,
    `resolveDnsCaa`, `resolveDnsMx`, `resolveDnsNaptr`, `resolveDnsSoa`,
    `resolveDnsSrv`, `resolveDnsTxt` (the mechanical rule would name them by
    their parameter types, or twice);
  - **split**: `Deno.serve(options: ServeTcpOptions | (ServeTcpOptions &
    TlsCertifiedKeyPem), handler)` is `serveWithOptions` and
    `serveWithTlsOptions` (as in 0.7.0);
  - **intersections** named `ServeTcpTlsOptions`, `ListenTcpOptions`,
    `ListenUnixOptions`, `ListenTlsCertifiedOptions`;
  - **overrides**: `Kv.getMany` and `Kv.watch` take `Array KvKey` (the
    declaration maps a tuple of keys to a tuple of entries, a mapped type).
  ```lean
  let l ← Deno.listenUnix { path := "/tmp/app.sock", transport := .unix }
  let mx ← Deno.resolveDnsMx "example.com" .mx none
  let entries ← kv.getMany #[#["a"], #["b"]] none
  ```
- **Why:** A9's "mechanical rule plus a small reviewed table", each entry an
  API decision. Alternatives: the mechanical names
  (`connectWithUnixConnectOptions`; rejected as unreadable).
- **Where:** PR #307; unreleased.
- **Status:** pending sign-off.

#### 0.4-13 What Lasm.JS.Deno leaves out (superseded by 0.4-38 onwards: one entry per exclusion)

- **Decision:** not generated, each with its reason in `deno-tier2.mjs` and the
  header of `deno.idl`: FFI (`Deno.dlopen`, `UnsafePointer`: computed types, no
  FFI on Deno Deploy); `Deno.test` and `Deno.bench` (`deno test` does not run
  Lasm's output); `Deno.errors` (an error reaches Lean as an `IO.Error` naming
  the class); `Deno.telemetry` (OpenTelemetry providers typed `any`); in-place
  buffer `read`/`write` of `FsFile`, `Conn`, `stdin`, `stdout`, `stderr` (Lean
  bytes are copies: use the streams); `readDirSync` (a synchronous iterator
  object); `Kv.commitVersionstamp` (a Symbol); `UpgradeWebSocketOptions.socket`
  (a `node:net` socket); the handler-inside-options `serve` forms; the general
  `resolveDns(query, RecordType)`; the iterator protocol's own `next`/`return`;
  `PermissionStatus`'s typed `addEventListener`; Symbol-keyed members; and
  whatever Deno marks `@experimental`, `UNSTABLE` or `@deprecated` (VSOCK,
  QUIC, WebTransport, `Deno.spawn`) except 0.4-10.
- **Why:** only what makes no sense from Lean compiled to Wasm, cannot be
  expressed, or duplicates a generated member. Alternative: generate FFI as
  `Value`-typed functions (rejected: unusable without the computed types).
- **Where:** PR #307; unreleased.
- **Status:** pending sign-off.

#### 0.4-14 Async iterables: values, iterator, next

- **Decision:** a declaration that is or returns an `AsyncIterable<T>`
  (`Deno.readDir`, `Kv.list`, `FsWatcher`, `TcpListener`) has
  `values : Async (Array T)` (every value, to the end) and
  `iterator : IO It` with `It.next : Async (Option T)` (one at a time;
  `none` at the end). An `AsyncIterable<T>` result without its own interface
  is a generated `<T>AsyncIterable` (`DirEntryAsyncIterable`).
  ```lean
  let names := (← (← Deno.readDir (.domString ".")).values).map (·.name)
  let it ← (← Deno.listen {}).iterator
  if let some conn ← it.next then conn.close           -- the first connection
  ```
- **Why:** `for await` is the only way to read these APIs; `values` matches
  Lasm.JS.Web's sync iterables (which collect into an array), and `next` serves
  the endless ones (a listener, a watcher). Alternatives: leave async iteration
  unmapped (as Lasm.JS.Web does; rejected: `readDir`, `Kv.list` and listeners
  would be unusable).
- **Where:** PR #307; unreleased. Lasm.JS.Web's async iterables are unchanged
  (0.3's question).
- **Status:** pending sign-off.

#### 0.4-15 Deno.serve's module: Unix sockets, one rename

- **Decision:** `Deno.serveWithUnixOptions (options : ServeUnixOptions)
  (handler : ServeHandlerUnixAddr) : IO HttpServerUnixAddr` is new; the TLS
  key format enum is `ServeTcpTlsOptionsKeyFormat` (was
  `TlsCertifiedKeyPemKeyFormat`; the intersection's own name); `NetAddr` lives
  in `Lasm.JS.Deno.Net` (still imported by `Lasm.JS.Deno.Serve`).
  ```lean
  let handler ← Deno.ServeHandlerUnixAddr.ofFn fun req _ => handle req
  let server ← Deno.serveWithUnixOptions { path := "/tmp/http.sock" } handler
  ```
- **Why:** Unix sockets were outside 0.7.0's HTTP cut, not unexpressible; the
  rename follows the mechanical naming. Migration note in
  docs/release/next-notes.md.
- **Where:** PR #307; unreleased (breaking: one rename).
- **Status:** pending sign-off.

### Milestone 0.4: Bun (Lasm.JS.Bun)

Decided by Claude under Jordan's direction calls of 2026-11-16 (generate everything
the declarations contain, exclude only what cannot work from Wasm, web types are
Lasm.JS.Web's). Detail and the mapping: [JS_BINDINGS.md, "Standard bindings for
Bun"](JS_BINDINGS.md#standard-bindings-for-bun-lasmjsbun).

#### 0.4-16 Lasm.JS.Bun is the whole Bun namespace and bun:sqlite

- **Decision:** `import Lasm.JS.Bun` gives every function, constant and class of the
  `Bun` namespace of Bun 1.4.4 and of `bun:sqlite`, with every type they use,
  generated from `packages/bun-types` by `ts-auto.mjs` (the rules of 0.4-11, plus:
  `XOR<A, B>` is the union A | B, so `Bun.serve`'s options are one structure;
  `Pick`/`Omit<T, …>` are `T`; tuples are arrays; a union of number literals is a
  number; another module's type is `Data`; keyword-argument overloads add their
  keywords to the name; a nested namespace's declaration is prefixed with it,
  `UdpSocket`). Modules: `Lasm.JS.Bun.Core`, `.Serve`, `.Shell`, `.Sqlite`, `.Sql`,
  `.Redis`, `.S3`. `bun:sqlite` is loaded with `require` on Bun (src/edge/edge-js.mjs).
  Member types TypeScript computes are stated in the reviewed override table of
  `bun-tier2.mjs` (`Subprocess.stdout`, `Database.query`, `Server.upgrade`'s
  options, `Bun.env`, `Bun.hash`, …), each with its reason.
  ```lean
  let db ← Bun.Database.new (some ":memory:") none
  discard <| db.run "create table t (name text)"
  discard <| (← db.query "insert into t values (?)").run #[#[toJS "ada"]]
  let rows ← (← db.query "select name from t").all
  let out ← Bun.spawnSync { cmd := #["printf", "%s", "hi"] }
  let z ← Bun.gzipSync (.domString "text") none
  ```
- **Why:** Jordan, 2026-11-16: generate everything bun-types contains, drive the
  generator by an exclusion table. Alternatives: the 0.7.0 cut (`Bun.serve` only).
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### A24.1 Bun's port stays `string | number`

- **Decision:** `ServeOptions.port : Option DOMStringOrUnsignedShort`, as declared
  (`port := some (.unsignedShort 3000)`, or a `Nat` or `String` through its `Coe`
  instances); no override.
- **Why:** platform-native: Bun accepts both. Alternative: `Option Nat` through the
  override table (rejected: the override table is for awkward names, Jordan 2026-11-16).
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### A25.2 WebSockets on Bun: generated now

- **Decision:** `ServeOptions.websocket` (`WebSocketHandler`: `message`, `open`,
  `close`, `drain`, `ping`, `pong`, `error`), `Server.upgrade`, `Server.publish`,
  `ServerWebSocket` (`send`, `subscribe`, `publish`, `close`, …).
  ```lean
  let message ← Bun.WebSocketHandlerMessage.ofFn fun ws msg => discard <| ws.send (match msg with
    | .domString s => .domString s | .uint8Array b => .uint8Array b) none
  let fetch ← Bun.ServeOptionsFetch.ofFn fun req server => do
    if ← server.upgrade req none then Response.new none none else Response.new (some (.usvString "hi")) none
  let server ← Bun.serve { fetch, websocket := some { message }, port := some (.unsignedShort 3000) }
  ```
- **Why:** the platform-native WebSocket server on Bun (Tandem's need).
  `ServeOptions.fetch` is now optional (a server of `routes` alone has none);
  a `ServeOptionsFetch` still coerces to `Option`.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-17 Lasm.JS.Bun leaves out the @category Bundler declarations

- **Decision:** not generated.
- **Why:** Bun.build, plugins and the transpiler configure Bun's bundler, which builds JavaScript; Lasm builds the program.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-18 Lasm.JS.Bun leaves out the @category FFI declarations

- **Decision:** not generated.
- **Why:** native libraries through pointers (bun:ffi): computed TypeScript types.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-19 Lasm.JS.Bun leaves out `$`

- **Decision:** not generated.
- **Why:** the shell is a tagged template literal (`$`ls ${dir}``): its escaping comes from the template's TemplateStringsArray, which Lean cannot make; Bun.spawn runs commands.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-20 Lasm.JS.Bun leaves out `sql`

- **Decision:** not generated.
- **Why:** the default SQL client is a tagged template literal (sql`select …`), as $; Bun.SQL's methods (unsafe, …) run queries.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-21 Lasm.JS.Bun leaves out `fetch`

- **Decision:** not generated.
- **Why:** the web fetch (Lasm.JS.Web.fetch), declared again on Bun.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-22 Lasm.JS.Bun leaves out `plugin`

- **Decision:** not generated.
- **Why:** registers bundler plugins for Bun's module loader (JavaScript source transforms).
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-23 Lasm.JS.Bun leaves out `markdown.react`

- **Decision:** not generated.
- **Why:** renders to React elements (JSX).
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-24 Lasm.JS.Bun leaves out `TranspilerOptions.macro`

- **Decision:** not generated.
- **Why:** bundler macros (JavaScript modules run at transpile time).
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-25 Lasm.JS.Bun leaves out `unsafe.arrayBufferToString(buffer: Uint16Array)`

- **Decision:** not generated.
- **Why:** reads a UTF-16 Uint16Array in place; the Uint8Array overload takes bytes.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-26 Lasm.JS.Bun leaves out `Glob.scanSync`

- **Decision:** not generated.
- **Why:** returns a synchronous iterator object (not an array); scan gives the same paths.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-27 Lasm.JS.Bun leaves out `CookieMap.entries`

- **Decision:** not generated.
- **Why:** returns a synchronous iterator object; toJSON gives the cookies.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-28 Lasm.JS.Bun leaves out `CookieMap.keys`

- **Decision:** not generated.
- **Why:** as entries.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-29 Lasm.JS.Bun leaves out `CookieMap.values`

- **Decision:** not generated.
- **Why:** as entries.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-30 Lasm.JS.Bun leaves out `Statement.iterate`

- **Decision:** not generated.
- **Why:** returns a synchronous iterator object; all gives the rows.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-31 Lasm.JS.Bun leaves out `Statement.as`

- **Decision:** not generated.
- **Why:** maps rows to instances of a JavaScript class (a constructor type).
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-32 Lasm.JS.Bun leaves out `S3File.unlink`

- **Decision:** not generated.
- **Why:** the same function as delete (declared as its type).
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-33 Lasm.JS.Bun leaves out `Database.transaction`

- **Decision:** not generated.
- **Why:** wraps a JavaScript function in a transaction and returns a callable object (generic over its arguments); run BEGIN and COMMIT with Database.run.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-34 Lasm.JS.Bun leaves out `cron.parse`

- **Decision:** not generated.
- **Why:** typed with template literal types (cron expressions); Bun.cron takes the expression as a string.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-35 Lasm.JS.Bun leaves out deprecated members

- **Decision:** members Bun's declarations mark @deprecated (`Bun.shrink`, `Database.exec`, `RedisClient.hmset`, `RedisClient.substr`, `Bun.postgres`, `S3Options.highWaterMark`, `MatchedRoute.scriptSrc`) are not generated.
- **Why:** each has a replacement Bun names in its declaration, which is generated.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-36 Lasm.JS.Bun leaves out Bun.ModuleGraph and Bun.WebView

- **Decision:** not generated.
- **Why:** both are @experimental; ModuleGraph describes Bun's bundler graph (Lasm builds the program) and WebView drives a browser window, which a server process run by Lasm has none of.
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-37 Lasm.JS.Bun leaves out call signatures and Symbol-keyed members

- **Decision:** a call or construct signature of an object type (`Bun.cron(…)`, `SQL.NameTransform`) and a Symbol-keyed member (`[Symbol.dispose]`, `[Symbol.iterator]`) are not generated; the object's other members are.
- **Why:** Lean calls such an object with Lasm.JS's `Value.call`; `using` and `for … of` have no Lean counterpart (the iterators' contents are read with `all`, `toJSON` or `values`).
- **Where:** the Bun PR; unreleased.
- **Status:** pending sign-off.

#### 0.4-38 Lasm.JS.Deno generates Deno's experimental and unstable APIs that work

- **Decision:** declarations Deno marks @experimental or UNSTABLE are generated (Deno.spawn, spawnAndWait, spawnAndWaitSync; VSOCK serve, listen and connect; QUIC: QuicEndpoint, connectQuic, upgradeWebTransport; datagrams: listenDatagram; the rest of lib.deno.unstable.d.ts with Deno KV and cron), except the categories and members below; @deprecated ones are not (their replacements are). The Deno CLI runs them with Deno's own --unstable-* flags. Supersedes the "experimental never" rule of 0.4-10 and the grouped list of 0.4-13.
- **Why:** Jordan, 2026-11-16: generate everything the declarations contain, exclude only what cannot work from Wasm, each exclusion its own entry.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-39 Lasm.JS.Deno leaves out the @category Bundler declarations

- **Decision:** not generated.
- **Why:** Deno.bundle builds JavaScript bundles with Deno's bundler; Lasm builds the program.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-40 Lasm.JS.Deno leaves out the @category Linter declarations

- **Decision:** not generated.
- **Why:** Deno.lint's plugin API, for lint rules that `deno lint` runs on JavaScript source.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-41 Lasm.JS.Deno leaves out the @category GPU declarations

- **Decision:** not generated.
- **Why:** a native window surface for WebGPU (UnsafeWindowSurface), which a program run by Lasm has no window for.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-42 Lasm.JS.Deno leaves out the @category Jupyter declarations

- **Decision:** not generated.
- **Why:** Deno.jupyter works only inside Deno's Jupyter kernel, which does not run Lasm's output.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-43 Lasm.JS.Deno leaves out the @category FFI declarations

- **Decision:** not generated.
- **Why:** native libraries through pointers (Deno.dlopen, UnsafePointer): their signatures are computed TypeScript types (conditional and mapped), and Deno Deploy has no FFI.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-44 Lasm.JS.Deno leaves out the @category Testing declarations

- **Decision:** not generated.
- **Why:** Deno.test and Deno.bench register tests for `deno test` and `deno bench`, which do not run Lasm's output (a Lasm program runs with deno run).
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-45 Lasm.JS.Deno leaves out `errors`

- **Decision:** not generated.
- **Why:** the error classes (Deno.errors.NotFound, …), for instanceof checks: a JavaScript error reaches Lean as an IO.Error whose message starts with the class name.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-46 Lasm.JS.Deno leaves out `telemetry`

- **Decision:** not generated.
- **Why:** OpenTelemetry provider objects (typed any) for an OpenTelemetry JavaScript API package bound with @[js]; Lean code passes them on, as Lasm.JS.global gives them.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-47 Lasm.JS.Deno leaves out `FsFile.read`

- **Decision:** not generated.
- **Why:** reads into the caller's buffer in place; Lean bytes are copies (read the `readable` stream, or readFile).
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-48 Lasm.JS.Deno leaves out `FsFile.readSync`

- **Decision:** not generated.
- **Why:** reads into the caller's buffer in place; Lean bytes are copies (read the `readable` stream, or readFile).
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-49 Lasm.JS.Deno leaves out `FsFile.write`

- **Decision:** not generated.
- **Why:** writes part of a buffer and returns how much; use the `writable` stream, or writeFile.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-50 Lasm.JS.Deno leaves out `FsFile.writeSync`

- **Decision:** not generated.
- **Why:** writes part of a buffer and returns how much; use the `writable` stream, or writeFile.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-51 Lasm.JS.Deno leaves out `Conn.read`

- **Decision:** not generated.
- **Why:** reads into the caller's buffer in place; Lean bytes are copies (read the `readable` stream, or readFile).
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-52 Lasm.JS.Deno leaves out `Conn.write`

- **Decision:** not generated.
- **Why:** writes part of a buffer and returns how much; use the `writable` stream, or writeFile.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-53 Lasm.JS.Deno leaves out `stdin.read`

- **Decision:** not generated.
- **Why:** reads into the caller's buffer in place; Lean bytes are copies (read the `readable` stream, or readFile).
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-54 Lasm.JS.Deno leaves out `stdin.readSync`

- **Decision:** not generated.
- **Why:** reads into the caller's buffer in place; Lean bytes are copies (read the `readable` stream, or readFile).
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-55 Lasm.JS.Deno leaves out `stdout.write`

- **Decision:** not generated.
- **Why:** writes part of a buffer and returns how much; use the `writable` stream, or writeFile.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-56 Lasm.JS.Deno leaves out `stdout.writeSync`

- **Decision:** not generated.
- **Why:** writes part of a buffer and returns how much; use the `writable` stream, or writeFile.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-57 Lasm.JS.Deno leaves out `stderr.write`

- **Decision:** not generated.
- **Why:** writes part of a buffer and returns how much; use the `writable` stream, or writeFile.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-58 Lasm.JS.Deno leaves out `stderr.writeSync`

- **Decision:** not generated.
- **Why:** writes part of a buffer and returns how much; use the `writable` stream, or writeFile.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-59 Lasm.JS.Deno leaves out `serve(options: ServeVsockOptions & ServeInit<Deno.VsockAddr>)`

- **Decision:** not generated.
- **Why:** the same operation as serveWithVsockOptions with the handler inside the options: one Lean function per operation.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-60 Lasm.JS.Deno leaves out `serve(options: ServeUnixOptions & ServeInit<Deno.UnixAddr>)`

- **Decision:** not generated.
- **Why:** the same operation as serveWithUnixOptions with the handler inside the options: one Lean function per operation.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-61 Lasm.JS.Deno leaves out `serve(options: (ServeTcpOptions | ServeTcpOptions & TlsCertifiedKeyPem) & ServeInit<Deno.NetAddr>)`

- **Decision:** not generated.
- **Why:** the same operation as serveWithOptions and serveWithTlsOptions with the handler inside the options: one Lean function per operation.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-62 Lasm.JS.Deno leaves out `readDirSync`

- **Decision:** not generated.
- **Why:** returns a synchronous iterator object (not an array) of the entries readDir gives.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-63 Lasm.JS.Deno leaves out `FsWatcher.return`

- **Decision:** not generated.
- **Why:** the iterator protocol's return(): close() ends the watcher.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-64 Lasm.JS.Deno leaves out `UpgradeWebSocketOptions.socket`

- **Decision:** not generated.
- **Why:** a node:net Socket (Deno's Node compatibility), for upgrading a Node HTTP request: Lasm.JS.Node's domain.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-65 Lasm.JS.Deno leaves out `resolveDns(query: string, recordType: RecordType, options?: ResolveDnsOptions)`

- **Decision:** not generated.
- **Why:** the per-record-type overloads (resolveDns, resolveDnsCaa, …) give every record type with its typed result.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-66 Lasm.JS.Deno leaves out `Kv.commitVersionstamp`

- **Decision:** not generated.
- **Why:** returns a Symbol placeholder for a versionstamp in a key, which Lean cannot hold as a key part (a KvKeyPart has no Symbol alternative here).
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-67 Lasm.JS.Deno leaves out `PermissionStatus.addEventListener`

- **Decision:** not generated.
- **Why:** typed with keyof PermissionStatusEventMap; the EventTarget parent's addEventListener (Lasm.JS.Web) is the same call.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-68 Lasm.JS.Deno leaves out `PermissionStatus.removeEventListener`

- **Decision:** not generated.
- **Why:** as addEventListener.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-69 Lasm.JS.Deno leaves out `KvListIterator.next`

- **Decision:** not generated.
- **Why:** the iterator protocol's next(): KvListIterator is an `async iterable` (values, iterator).
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

#### 0.4-70 Lasm.JS.Deno leaves out Symbol-keyed members and the iterator protocol's own methods

- **Decision:** `[Symbol.dispose]`, `[Symbol.asyncDispose]` and `[Symbol.asyncIterator]` are not generated as members (the last is the async iterable of 0.4-14).
- **Why:** `using` has no Lean counterpart; `close`, `shutdown` and the async iterables cover them.
- **Where:** the Bun PR (Deno follow-up); unreleased.
- **Status:** pending sign-off.

