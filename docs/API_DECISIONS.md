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
| A7 | Lasm.JS core | Should `exportDefault` take `[ToJS α]` (branch)? | [Q7](api/SHAPES_REVIEW_2026-11-11.md#1-lasmjs-core) | decided 2026-11-16 ([milestone 0.2](#milestone-02-the-serving-model-and-lasmfetch-deleted), #222); pending sign-off |
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
| A19 | `Node.serve`, and serverless `exportDefault` | Should `Node.serve` take the options structure with a plain Lean `fetch` (as decided), with `port : Option Nat` and `hostname : Option String`? | [Q19](api/SHAPES_REVIEW_2026-11-11.md#6-nodeserve-and-serverless-exportdefault) | decided 2026-11-16 ([milestone 0.2](#milestone-02-the-serving-model-and-lasmfetch-deleted), #222); pending sign-off |
| A20 | `Node.serve`, and serverless `exportDefault` | Should Lasm's Node entry also serve a program's `exportDefault` on `$PORT`, as the Deno and Bun entries do? | [Q20](api/SHAPES_REVIEW_2026-11-11.md#6-nodeserve-and-serverless-exportdefault) | decided 2026-11-16 ([milestone 0.2](#milestone-02-the-serving-model-and-lasmfetch-deleted), #222); pending sign-off |
| A21 | `Node.serve`, and serverless `exportDefault` | Consistency. Should `exportDefault` get a typed form for the common case, `exportDefault (fetch : Request → Async Response)`, so programs stop writing `Function.ofFn1`? | [Q21](api/SHAPES_REVIEW_2026-11-11.md#6-nodeserve-and-serverless-exportdefault) | decided 2026-11-16 ([milestone 0.2](#milestone-02-the-serving-model-and-lasmfetch-deleted), #222); pending sign-off |
| A22 | `Node.serve`, and serverless `exportDefault` | Naming. Should the hand-written function live inside the generated namespace (`Lasm.JS.Node.serve`, mixed with generated `Lasm.JS.Node.*`), or in its own namespace (`Lasm.JS.Serve.node`)? | [Q22](api/SHAPES_REVIEW_2026-11-11.md#6-nodeserve-and-serverless-exportdefault) | decided 2026-11-16 ([milestone 0.2](#milestone-02-the-serving-model-and-lasmfetch-deleted), #222); pending sign-off |
| A23 | `Node.serve`, and serverless `exportDefault` | On function platforms, should `Lasm.Serverless`'s proofs about the shims be rewritten for the new event → `Request` conversion, or dropped with the shims? | [Q23](api/SHAPES_REVIEW_2026-11-11.md#6-nodeserve-and-serverless-exportdefault) | decided 2026-11-16 ([milestone 0.2](#milestone-02-the-serving-model-and-lasmfetch-deleted), #222); pending sign-off |
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
| A41 | Lasm.Fetch | Embedded assets after Lasm.Fetch: keep them copied in apps, or a small transport-free library (`Lasm.Embed`, recommended)? | [Q41](api/SHAPES_REVIEW_2026-11-11.md#14-lasmfetch-scheduled-for-deletion) | decided by Jordan 2026-11-16 ([milestone 0.2](#milestone-02-the-serving-model-and-lasmfetch-deleted)); pending sign-off |
| A42 | Lasm.Fetch | Request and routing helpers after Lasm.Fetch: a copy per app, or a pure, transport-free `Lasm.Http.Path` usable on every target? | [Q42](api/SHAPES_REVIEW_2026-11-11.md#14-lasmfetch-scheduled-for-deletion) | decided by Jordan 2026-11-16 ([milestone 0.2](#milestone-02-the-serving-model-and-lasmfetch-deleted)); pending sign-off |
| A43 | Lasm.Fetch | Outbound fetch across JavaScript, wasi-http and Fastly: no common call (apps pass a `send` function), or one cross-host `send` signature? | [Q43](api/SHAPES_REVIEW_2026-11-11.md#14-lasmfetch-scheduled-for-deletion) | decided by Jordan 2026-11-16 ([milestone 0.2](#milestone-02-the-serving-model-and-lasmfetch-deleted)); pending sign-off |
| A44 | Lasm.Fetch | WASI CGI (`--target wasi`), whose only server was Lasm.Fetch: template-only code, a small library, or dropped as a server target? | [Q44](api/SHAPES_REVIEW_2026-11-11.md#14-lasmfetch-scheduled-for-deletion) | decided by Jordan 2026-11-16 ([milestone 0.2](#milestone-02-the-serving-model-and-lasmfetch-deleted)); pending sign-off |
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
| A53 | Templates | `lasm init --template fetch` uses `Lasm.Fetch` only on Node; Fastly, wasi:http/Spin and WASI get their own entry modules (#218, 0.8.0). | [REVIEW.md §1](REVIEW.md#apis-and-libraries) | superseded by 0.2-3 ([milestone 0.2](#milestone-02-the-serving-model-and-lasmfetch-deleted)) |
| A54 | Libraries | PR #124's drafts (`Lasm.Web.Crypto`, a WebSocket upgrade in `Lasm.Fetch.serve`, `Lasm.Markdown`) not taken; kept on the `api-proposals` branch. | [REVIEW.md §1](REVIEW.md#apis-and-libraries) | pending sign-off |
| A55 | CLI | Proposed, not built: a WASI reactor build (`lasm build … --target wasi --reactor`) for the CLI's glue; under Stage 2's backend this question may change. | [REVIEW.md §2](REVIEW.md#the-cli-surface) | pending sign-off |
| A56 | Packaging | Where the `Lasm.*` libraries live (inside `@lasm/cli` or separate `@lasm/*` packages): deferred by Jordan until the APIs are final. | [REVIEW.md §1](REVIEW.md#major-where-the-lasm-libraries-live-deferred-by-jordan-2026-11-10) | pending decision |

## Milestone 0.2: the serving model, and `Lasm.Fetch` deleted

Decided by Claude on 2026-11-16 under Jordan's rules (platform-native shapes;
Node servers use `Node.serve`, shaped like `Bun.serve`; function platforms use
`exportDefault`, called directly by the generated platform file). Every entry
here is **pending sign-off**.

### A19: `Node.serve`'s options (#222)

**Decision.** `Lasm.JS.Node.serve : ServeOptions → IO Unit`, in the module
`Lasm.JS.Node.Serve`, hand-written (not generated, not a Node API) on the
builtin module `lasm:node-serve` (`node:http`, no npm package).

```lean
import Lasm.JS.Node.Serve
open Lasm.JS Lasm.JS.Web

def handle (request : Request) : Async Response := do
  Response.new (some (.usvString s!"{← request.method} {← request.url}")) none

def main : IO Unit := Node.serve { fetch := handle, port := some 3000 }
```

```lean
structure ServeOptions where
  fetch : Request → Async Response                     -- a plain Lean function
  port : Option Nat := none                            -- $PORT, else 3000 (Bun)
  hostname : Option String := none                     -- "0.0.0.0" (Bun)
  signal : Option AbortSignal := none                  -- Deno.serve's
  onListen : Option (Server → IO Unit) := none         -- Deno.serve's
  error : Option (IO.Error → Async Response) := none   -- Bun's
structure Server where hostname : String; port : Nat; url : String; val : Value
def Server.stop (server : Server) (closeActiveConnections := false) : Async Unit  -- Bun's
def Server.finished (server : Server) : Async Unit                                  -- Deno's
```

- **Options kept:** `onListen` and `signal` (Deno's names; Bun has none), and
  a graceful stop on SIGTERM and SIGINT (requests in progress finish; a second
  signal closes them), as Lasm.Fetch's Node server did, because containers and
  process managers stop servers with SIGTERM.
- **Not added:** a request body size limit (`maxRequestBodySize` in Bun).
  Node's `node:http` has none either; a handler that needs one reads the body
  as a stream. It can be added later under Bun's name without breaking.
- **Why:** Jordan's direction (2026-11-11): one options record with `fetch`
  inside, Bun's names where Bun has the option.
- **Alternatives:** `@hono/node-server` bound in each program (the 0.7.0
  path); a `NodeServer.lean` copied by `lasm init` (PR #212's candidate);
  serving with the generated `node:http` by hand (about 25 lines buffered,
  100–150 production-grade, per #220).
- **Where:** PR #222; release: the next one after 0.8.0.

**A19.1: `Node.serve` blocks until the server stops.** Bun's `serve` returns
the `Server` at once. Lean's runtime ends when `main` returns (it finalizes
its task manager and exits), so a returning `serve` would make every program
end with `server.finished.block`. The blocking form keeps the one-line
`def main := Node.serve { fetch := handle }`; the handle reaches the program
through `onListen`. Alternative: Bun's non-blocking `serve : ServeOptions →
IO Server`.

**A19.2: names.** Bun's `error`, not `onError`; `Server.url` is a `String`,
not Bun's `URL`; `$HOST` is not read (Bun reads only `$PORT`, and binds every
IPv4 address).

### A20: Lasm's Node entry does not serve `exportDefault` (#222)

**Decision: no.** On Node, `exportDefault` only records the value; a program
that serves HTTP on Node calls `Node.serve`. Deno and Bun serve a module's
`export default { fetch }` natively (`deno serve`, `bun run`), so Lasm's Deno
and Bun entries keep doing that. Node has no such convention, and serving a
default export on `$PORT` there would be Lasm-specific behavior that depends
on how the program was started, which Jordan's rules exclude.
**Alternative:** serve `exportDefault` on `$PORT` on Node too, so one program
runs everywhere (the review's earlier recommendation).

### A21: a typed `exportDefault`; no plain-function wrappers for Bun and Deno (#222)

**Decision: option (b).** `exportDefault` takes a Lean fetch handler directly:

```lean
class DefaultExport (α : Type) where toDefaultExport : α → IO Value
instance : DefaultExport Value                                  -- a Hono app, `{ fetch }`
instance [FromJS α] [ToJS β] : DefaultExport (α → Async β)      -- Function.ofFn1
def Lasm.JS.exportDefault [DefaultExport α] (x : α) : IO Unit

def main : IO Unit := exportDefault handle   -- handle : Request → Async Response
```

`Lasm.JS.Bun` and `Lasm.JS.Deno` keep their generated shapes
(`Bun.ServeOptionsFetch.ofFn`, `Deno.ServeHandler.ofFn`): they are the
runtimes' own APIs, and a Lasm wrapper beside them would be a second way to
do the same thing. **Alternatives:** (a) also plain-function `serve` wrappers
for Bun and Deno; (c) keep `exportDefault (← Function.ofFn1 handle)`.

**A21.1: handlers that need the platform's context.** The function form gets
only the request. Workers' `env` and `ctx` and Netlify's `context` go through
the `Value` form today; the typed Workers `env` (a program's `structure Env`
with `deriving FromJS`) is milestone 0.5's (A26).

### A7: `exportDefault`'s argument (#222)

**Decision:** the class `DefaultExport` above, not `[ToJS α]`. `ToJS` of a
Lean function is not defined (a function needs `Function.ofFn1`, an `IO`
step), and a class with two instances keeps `exportDefault v` for any
`Value` while adding the handler form. **Alternative:** `[ToJS α]` with a
`ToJS` instance for functions, which would hide an allocation in a pure
conversion.

### A22: `Node.serve` lives in `Lasm.JS.Node`, module `Lasm.JS.Node.Serve` (#222)

**Decision:** the namespace `Lasm.JS.Node` (so `open Lasm.JS` gives
`Node.serve`, as `Bun.serve` and `Deno.serve`), in its own module
`Lasm.JS.Node.Serve`, imported explicitly: the generated `import
Lasm.JS.Node` does not include it. The generated `node:http` binding (#220)
names its classes `http.Server` and `net.Server`, so `Node.Server` and
`Node.ServeOptions` do not collide. **Alternative:** `Lasm.JS.Serve.node`,
which separates hand-written from generated code but reads unlike
`Bun.serve`.

### A23: `Lasm.Serverless`'s proofs are rewritten, not dropped (#222)

**Decision:** the shims stay (each platform's event still has to become a
`Request`), so their model and the 20 propositions stay, restated for the
direct call: the model mirrors `lasm-function.mjs` (formerly
`lasm-server.mjs`) and `lasm-lambda.mjs` function for function, and the
serverless-http fuzz oracle still runs it on every input. Only the loopback
part (forwarding to a server on a port) is gone. **Alternative:** drop the
proofs with the loopback shims.

### 0.2-1: function platforms run only programs that publish a handler (#222)

**Decision:** `lasm package` and `lasm build --target
netlify|vercel|lambda-zip|lambda-edge|azure|gcf` generate a file that calls
the program's `exportDefault` handler in-process (Netlify `export default
async (request, context)`, Vercel and GCF `(req, res)`, Lambda events, Azure
`HttpResponseInit`). There is no HTTP server, port or loopback. Under that
file, `exportDefault` hands the handler to the platform file and does not
return, because the Lean runtime ends with `main`. A program that brings its
own server (Express, Fastify, `Std.Http`, `Node.serve`) runs on Lambda only
as a container image behind the AWS Lambda Web Adapter (`--deploy lambda`),
which is that platform's own way to run a server. **Alternative:** keep the
loopback adapter (`lasm-server.mjs`), which Jordan rejected on 2026-11-11.

### 0.2-3: templates serve with one entry module per serving model

**Decision.** `lasm init --template fetch` and `--template hono` write the
handler once and one small program per way of serving it, with no
`Lasm.JS.onEdge` branch:

| File | fetch | hono | Built by |
| --- | --- | --- | --- |
| `Handler.lean` / `Routes.lean` | `Handler.handle : Request → Async Response` | `Routes.app : IO Value` (the Hono app) | (imported) |
| `Main.lean` | `Node.serve { fetch := Handler.handle }` | `@hono/node-server`'s `serve`, Hono's own Node adapter | `npm run build`, `dev`, `start`, the Dockerfile, `--deploy lambda` |
| `Export.lean` | `exportDefault Handler.handle` | `exportDefault (← Routes.app)` | `build:bun`, `build:deno`, every edge and function-platform `build:<target>` |
| `Fastly.lean`, `WasiHttp.lean` | the same routes on `Lasm.Fastly` and `Lasm.WASI.Http` (unchanged) | – | `build:fastly`, `build:wasi-http` |

```lean
-- Main.lean (fetch)
import Handler
import Lasm.JS.Node.Serve
open Lasm.JS
def main : IO Unit := Node.serve { fetch := Handler.handle }

-- Export.lean (fetch)
import Handler
import Lasm.JS
open Lasm.JS
def main : IO Unit := exportDefault Handler.handle
```

**Why:** each platform gets what it natively expects (a server on Node, a
default export elsewhere), and no program changes behavior with where it
runs. **Alternatives:** one `Main.lean` that branches on `onEdge` (0.8.0's
templates; context-dependent); `Main.lean` as the default export and a
separate `Node.lean` (the Node build is the default one, so it keeps the
name `Main.lean`). **Where:** this PR. Supersedes A53.

### 0.2-4: the function platforms take the templates that publish a handler

**Decision.** `--deploy lambda-zip|lambda-edge|vercel|netlify|azure|gcf`
accept the hono and fetch templates only (they build `Export.lean`). The
express, fastify and std-http templates bring their own server, so on AWS they
keep `--deploy lambda`, the container image behind the AWS Lambda Web
Adapter, which runs a server as Lambda's own tooling intends; `lasm init`
refuses the others with the targets the template supports. **Alternatives:**
port express and fastify to a handler (they are Node servers by design);
keep a loopback adapter (rejected by Jordan, 2026-11-11). **Where:** this PR.

### A44: the WASI CGI server mode is dropped (Jordan, 2026-11-16)

**Decision:** HTTP on WASI goes through wasi-http only. `--target wasi`
stays for command-line and batch programs. `lasm init --template fetch` no
longer accepts `--deploy wasi` and has no `Cgi.lean`; `--deploy wasi` is the
plain template's. The CGI glue and its fuzz target go with `Lasm.Fetch`
(0.2's deletion PR). **Alternatives:** CGI as template-only code (0.8.0) or a
small library.

### A41–A43: no new namespaces replace Lasm.Fetch's helpers (Jordan, 2026-11-16)

- **A41, embedded assets:** apps embed their own (Conduit's and Folio's
  `Server/Embed.lean` and `Server/Assets.lean`, the fullstack template's
  `Embed.lean`). No `Lasm.Embed`.
- **A42, request and routing helpers:** apps route in a few lines of pure
  Lean; on JavaScript hosts they read the URL with `Lasm.JS.Web`'s `URL` and
  `URLSearchParams`, as the templates do. No `Lasm.Http.Path`.
- **A43, outbound requests:** each host's own API: `Lasm.JS.Web.fetch` on
  JavaScript, `OutgoingHandler.handle` on wasi-http, `HttpReq.send` on
  Fastly. No cross-host `send`.

**Why:** Jordan's direction (2026-11-16): no Lasm-specific layer between a
program and its host. **Alternatives:** the review's options (b) and (c) for
each (a small transport-free library, or a CLI feature).
