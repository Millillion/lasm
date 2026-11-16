# Lasm library API shapes: review for Jordan

> Imported 2026-11-16 as the detail behind entries A1–A46 of
> [API_DECISIONS.md](../API_DECISIONS.md), unchanged otherwise. Answers and
> sign-offs are recorded there.

Written 2026-11-11 against `origin/main` at `121f8f2e` (after 0.7.0), the
branches `lasm-js-node-http` and `lasm-js-cloudflare` (pushed, no PR yet), and
open PRs #210, #212 and #213. It covers every API shape Claude decided in the
`Lasm.*` libraries. Answer by question number (Q1 to Q46).

Status labels:
- **0.7.0**: released in `@lasm/cli` 0.7.0 (or earlier).
- **main**: merged, not released.
- **branch**: pushed, no PR yet.
- **PR #n**: open PR.
- **proposed**: decided or described, but no code in the repository yet.

Sources: `docs/REVIEW.md`, `docs/DECISIONS.md`, `docs/JS_BINDINGS.md`,
`docs/WASI_FASTLY_BINDINGS.md`, `docs/UI.md`, `docs/RPC.md`, `docs/FETCH.md`,
`docs/release/0.7.0-notes.md`, `library/Lasm/**`. Every signature below was
checked against those sources.

---

## 0. Deno (decide first: it affects several sections)

Cloudflare acquired Deno on 2026-10-09 (Forbes, Wikipedia and several news
write-ups agree; exact dates still to check against Deno's own post). The Deno
runtime gets about a year of maintenance releases (to ~Oct 2027), and Deno
Deploy closes about Apr 2027. What depends on Deno in Lasm:

- `Lasm.JS.Deno` (generated `Deno.serve`, 0.7.0).
- `--target deno` and `--target deno-deploy`, which share the `deno/` output.
- `Lasm.KV.deno` (Deno KV; on Deno Deploy it is the platform store).
- Netlify Edge Functions and Supabase Edge Functions, which both run on a
  Deno-based runtime. The closing of Deno Deploy does not affect them
  directly, but the end of runtime maintenance could.
- Conduit's Deno build and Folio's preview server (`Deno.serve`, PR #210).
- CI: Deno 2.9.6 runs in the binding conformance runs (`web-bindings.yml`) and the edge and app suites.

**Q1.** What happens to `--target deno-deploy`?
- (a) Keep it until Deno Deploy closes.
- (b) Deprecate it now and remove it before Apr 2027.
- (c) Remove it now.

**Q2.** What happens to `Lasm.JS.Deno` and `--target deno`?
- (a) Keep them while the runtime is maintained (until about Oct 2027), with
  no new Deno-only work.
- (b) Freeze them at Deno 2.9.6.
- (c) Plan their removal.

**Q3.** Netlify Edge and Supabase Edge depend on the Deno runtime. Should
Claude track them as at-risk targets in the README, or leave them unmarked
until the platforms announce something?

---

## 1. Lasm.JS core

**Status:** 0.7.0. The one exception is `exportDefault [ToJS α]`, which is on
the `lasm-js-cloudflare` branch.

**Example** (from `docs/JS_BINDINGS.md`):

```lean
import Lasm.JS
open Lasm.JS

@[js "node:crypto" "randomUUID"] opaque randomUUID : IO String
@[js "jose" "new SignJWT"] opaque newSignJWT : Data → IO Value
@[js "node:timers/promises" "setTimeout"] opaque sleep : Nat → Async Unit

def main : IO Unit := do
  let jwt ← newSignJWT (obj [("sub", toJS "ada")])
  let jwt ← jwt.callMethod "setProtectedHeader" #[obj [("alg", toJS "HS256")]]
  let token ← jwt.callMethodAwait "sign" #[toJS "a secret of 32 bytes or more!!!".toUTF8] String
  let handler ← Function.ofFn fun _ => do
    sleep 100
    return toJS token
  let _ ← (← global).set "handler" handler
  waitForever
```

**Signatures** (`library/Lasm/JS/Core.lean`):
- `get [ToJS κ] (o : Value) (key : κ) (α := Value) : IO α`
- `set [ToJS κ] [ToJS α] (o : Value) (key : κ) (x : α) : IO Unit`
- `call (f : Value) (args := #[]) (α := Value) (this := .undefined) : IO α`
- `callAwait [MonadJS m] … (α := Data) : m α`
- `callMethod` / `callMethodAwait`, `new`, `await`, `toTask`, `getFields`
- `Function.ofFn (f : Array Data → Async Data) : IO Value`
- `ofFnReply (f : Array Data → Async Function.Reply)`
- `ofFn1 (f : α → Async β)`, `ofFn2`
- `ofSyncFn (f : Array Data → IO Data)`, `ofSyncFn2`
- `exportDefault (v : Value) : IO Unit` (0.7.0). On the branch it becomes
  `exportDefault [ToJS α] (v : α)`.
- `waitForever : IO Unit`, `onEdge : IO Bool`, `stats`

**Shape decisions:**
- **Two value types.** `Value` is a handle to a JavaScript object. `Data` is
  an inductive copy of plain data, with `.ref` for anything that is not plain.
  Rejected: one dynamic type.
- **Bindings.** `@[js "module" "export"] opaque f : A → … → IO R | Async R |
  IO (Task …)`. The glue comes from the Lean type. Rejected: a `.d.ts`
  generator for npm packages, and `js!` inline syntax.
- **The result type picks how a promise is awaited.** `Async R` waits without
  holding a thread. `IO R` blocks the calling thread. `IO (Task …)` does not
  await. Rejected: one form that always blocks.
- **Result types are an explicit trailing argument.** `o.get "rows" (Array Data)`
  defaults to `Value`, or to `Data` for the `…Await` forms. Rejected: type
  inference only.
- **Property keys.** `get` and `set` take any `ToJS` key (#170), so a Symbol or
  a number works. Before, keys were `String` only.
- **Callbacks are made explicitly** with `ofFn` (async; returns a promise) or
  `ofSyncFn` (blocks JavaScript). Rejected: passing Lean functions implicitly.
- **`ofFnReply`.** A handler may reply with a method call that the host makes,
  which saves one round trip.
- **No fire-and-forget `Async` inside `ofSyncFn`.** Waits that cannot work
  there fail at once, by design.
- **`waitForever`** keeps `main` alive on Node and returns at once on the edge.
- **`exportDefault [ToJS α]`** (branch). It lets an `ExportedHandler`
  structure be published directly. Rejected: keeping `Value` and making
  callers convert.

**Inconsistencies:**
- The arity of `Function.ofFn` is wrong. A function it makes reports `length`
  0. `Deno.serve` then calls the handler without its request, and Express does
  not recognise four-argument error handlers. Generated callbacks fix this by
  calling `Object.defineProperty(fn, "length", …)`. Hand-written `ofFn`,
  `ofFn1` and `ofFn2` do not.
- `lasm build` checks every `@[js]` export on Node. A hand-written
  `@[js "globalThis" "Deno.serve"]` binding therefore fails the build. The
  generated bindings avoid this because they look the global up at run time.

**Q4.** Should `Function.ofFn` set `length`? Options:
- (a) `ofFn1` and `ofFn2` set 1 and 2, and `ofFn` takes `(length := 0)`.
  Claude recommends this.
- (b) Leave it as it is and document it.

**Q5.** Should the build-time check skip `globalThis` exports that Node lacks?
- (a) Warn instead of failing.
- (b) Skip `globalThis` exports when the build target is not Node.
- (c) Leave it as it is.

**Q6.** The inline JavaScript and classes proposal
(`docs/proposals/LASM_JS_GAPS.md`, PR #169) has two parts:
`@[js "./ffi/foo.mjs" "f"]` paths relative to the Lean file, and a
`Lasm.JS.Class.define` builder (a real `class extends`, no `eval`). Should
Claude implement them? Cloudflare Durable Objects (§8) need the class builder.

**Q7.** Should `exportDefault` take `[ToJS α]` (branch)? This interacts with
Q19 to Q22.

**Q8.** Please confirm the core shapes already listed in REVIEW.md §1:
- Symbol and number keys (#170).
- No fire-and-forget `Async` in `ofSyncFn`.
- Waits inside synchronous callbacks stay a clear error.

---

## 2. Generated-binding mapping rules (shared by every `Lasm.JS.*` tier)

**Status:** 0.7.0 for the tier 1, browser, Node, Deno and Bun rules. The
richer TypeScript rules for Cloudflare are on the branch.

One generator, `scripts/bindings/generate-web.mjs`, serves every tier. The
Node docs and the Deno, Bun and Cloudflare `.d.ts` files are first lowered to
WebIDL.

**Example** (from `docs/JS_BINDINGS.md`):

```lean
let s ← (← crypto).subtle
let key ← s.importKey .raw (.bufferSource secret)
  (.object (toJS ({ name := "HMAC", hash := .domString "SHA-256" } : HmacImportParams))) false #[.sign]
let mac ← s.sign (.domString "HMAC") key message
let url ← URL.new "/b?x=1" (some "https://example.com/a/")
```

**Shape decisions** (rejected alternatives in parentheses):
- **Interface.** `structure I where val : Value`, and `I extends P` for
  inheritance, with `Coe I P`. (Rejected: classes, or a bare `Value`.)
- **Members.**
  - An attribute is `I.a : IO T`, plus `I.setA` when it is writable.
  - An operation is `I.op (self) …`.
  - A `Promise` result is `Async T`.
  - (Rejected: `get`/`set` by string.)
- **Global objects are `IO` actions**: `(← crypto).subtle`, `← document`.
  (Rejected: pure constants.)
- **Optional arguments.** `(x : Option T := none)`, passed positionally, so
  calls read `Response.new (some body) none`. `none` passes `undefined`.
  (Rejected: a separate overload per arity.)
- **Nullable.** `T?` is `Option T`. A nullable optional member collapses to a
  single `Option`, so an explicit `null` cannot be passed.
- **Dictionary.** A structure. Members that are not `required` are
  `Option := none`, and inherited members are flattened in.
- **Enum.** An inductive, with values in lowerCamelCase: `"no-cors"` is
  `.noCors` and `""` is `.empty`.
- **Union.** An inductive with one constructor per member type, named after
  the type (`BodyInit.usvString`).
  - Each member coerces to the union (`Coe String BodyInit`), so
    `fetch "https://…"` works.
  - A result union is read back when JavaScript kinds tell its members apart.
    Otherwise it is `Value` (when every member is an interface) or `Data`.
  - Inline unions are named after their members
    (`DOMStringOrUint8ArrayOrURL`).
  - (Rejected: `Data` for every union.)
- **Callback.** A handle type `C` made by `C.ofFn` (async) or `C.ofSyncFn`.
  The handle can be removed later. WebIDL `Function` is `JSFunction`.
  (Rejected: passing Lean functions directly, which breaks
  `removeEventListener` and the choice between sync and async.)
- **Overloads.**
  - The first in IDL order keeps the name. Each other one adds `With` and its
    first argument that differs by name: `appendWithBlobValue`,
    `serveWithOptions`, `randomIntWithMin`.
  - When names would still collide, all argument names are added:
    `FileHandle.readWithBufferOptions`.
  - A static member that clashes with an instance member gets a prefix:
    `Response.staticJson`.
  - (Rejected: hand-picked names.)
- **Numbers.**
  - WebIDL integer types map to `Int` or `Nat`, and floating types to `Float`.
  - Node: `{integer}` is `Int` and `{number}` is `Float`.
  - Deno and Bun: `number` is `Float`, unless the doc comment says port, count
    or size, which gives `Nat`.
  - Cloudflare: always `Float`.
- **Bytes.** Buffer types are `ByteArray`, a copy (writes into an argument are
  not seen).
- **Downcasts are unchecked**: `({ val := e.val } : HTMLInputElement)`.
  (Rejected for now: a generated `I.cast?` using `instanceof`.)
- **Not generated:** async iteration, `forEach`, event-handler attributes,
  unnamed getters, `[HTMLConstructor]` constructors, and experimental or
  deprecated members.
- **Plain data or handle.** Plain data the runtime hands over (`NetAddr`,
  `SocketAddress`) is a copied structure. Objects the runtime keeps are
  handles. This is chosen per declaration (`as` in `serve-tier2.mjs`).

**Inconsistencies across tiers:**
- **Callback type names.**

  | Tier | Name |
  | --- | --- |
  | Web | `EventListener` |
  | Deno | `ServeHandler` (an alias in the declaration) |
  | Bun | `ServeOptionsFetch` (owner + member) |
  | Cloudflare | `ExportedHandlerFetchHandler` |
  | Node (branch) | `http.Server.RequestListener` |

  All five are "a request handler".
- **Numbers for the same concept differ.**
  - HTTP status:
    - `ResponseInit.status : Option Nat` (Web)
    - `http.ServerResponse.writeHead (statusCode : Float)` and
      `IncomingMessage.statusCode : IO Float` (Node branch)
    - `UInt16` (Fastly, WASI, Lasm.Fetch)
  - Port:
    - `Nat` (Deno)
    - `DOMStringOrUnsignedShort` (Bun)
    - `Float` (`net.Server.listenWithPort`, Node branch)
  - `limit` and `expirationTtl`: `Float` (Cloudflare)
- **Unchecked casts** appear in every browser example and in Cloudflare
  (`readField KVNamespace env "KV"`).

**Q9.** Overload naming. Should Claude keep the mechanical rule, or add a
small override table for names that read badly? Examples:
- `first0` → `firstRow`
- `randomIntWithMin`
- `appendWithBlobValue`
- `getWithKeys`

Claude recommends an override table, with each entry checked in CI against
the declaration.

**Q10.** Callback type names. Should Claude keep the mechanical names, or add
hand-picked aliases (`Bun.FetchHandler`, `Cloudflare.FetchHandler`)? Claude
recommends `abbrev` aliases that point at the generated types.

**Q11.** Numbers. Options:
- (a) Keep each source's typing.
- (b) Add one cross-tier table of integer members (status codes, ports,
  sizes, counts, TTLs) mapped to `Nat`. Claude recommends this.
- (c) Use `Float` everywhere except WebIDL integers.

**Q12.** Should Claude generate checked downcasts
(`HTMLInputElement.cast? : Value → IO (Option HTMLInputElement)` through
`instanceof`), or keep only the unchecked `{ val := … }`?

---

## 3. Lasm.JS.Web, tier 1

**Status:** 0.7.0 (first shipped in 0.6.1).

**What it covers:** the WinterTC Minimum Common API.
- fetch: `Headers`, `Request`, `Response`, `FormData`, `fetch`
- `URL`, `URLSearchParams`, `URLPattern`
- Streams
- Encoding
- Compression
- Web Crypto
- Timers
- `atob`, `btoa`, `structuredClone`
- console
- WebAssembly
- Performance
- DOM events: `EventTarget`, `AbortController`

**Example** (from `docs/JS_BINDINGS.md`):

```lean
import Lasm.JS.Web
open Lasm.JS Lasm.JS.Web

def main : IO Unit := do
  let digest ← ((← (← crypto).subtle).digest (.domString "SHA-256") "abc".toUTF8).block
  let url ← URL.new "/b?x=1" (some "https://example.com/a/")
  IO.println (← url.href)
  let res ← (fetch (.usvString "https://example.com")).block
  IO.println s!"{← res.status} {(← (← res.headers).get "content-type").getD ""}"
```

**Shape decisions:**
- One module per spec area, so `import Lasm.JS.Web.Fetch` links less.
  (Rejected: one module.)
- No build-time binding check: the deployment's runtime is what counts.
  (Rejected: checking against the build machine's Node.)
- Timers return the timer's number on every target. Node and Bun timers are
  objects, so their results go through `Number(…)`.
- `setTimeout (handler : TimerHandler) (timeout : Option Int := none)`. The
  callback must be made first, with `JSFunction.ofSyncFn`.
- `globalThis` and `self` are not generated: use `Lasm.JS.global`.
- Members not every runtime has are still generated. The availability matrix
  is measured in CI, and the guidance is "test a member on your target".

**Q13.** The templates and Conduit and Folio show that converting between a Lasm.JS.Web
`Request`/`Response` and plain Lean data takes about 20 lines in every app
(`templates/fetch/Main.lean`, `Server/JsServe.lean` in Conduit and Folio).
Should tier 1 stay purely generated (no helpers)? Or should a small
hand-written `Lasm.JS.Web.Convenience` add helpers such as
`Response.text (s) (status)`, `Response.json`, and `Request.bytes`? This
would be a new Lasm API, so it is your call. (Related: §13, request and
routing helpers.)

---

## 4. Browser tier (`Lasm.JS.Web.Browser`) and `Lasm.UI.Mount`

**Status:** 0.7.0. It replaced the hand-written `Lasm.Web`.

**Example** (from `docs/JS_BINDINGS.md` and `test/browser/platform/Main.lean`):

```lean
import Lasm.JS.Web.Browser
open Lasm.JS Lasm.JS.Web

def main : IO Unit := do
  let root ← Mount.root Element
  let doc ← document
  let button ← doc.createElement "button"
  button.setAttribute "aria-label" "count"            -- String coerces to the Trusted Types union
  button.addEventListener "click" (some (← EventListener.ofSyncFn fun e => do
    let m : MouseEvent := { val := e.val }
    button.setTextContent (some s!"({← m.clientX}, {← m.clientY})")))
  discard <| root.appendChild button
  let incoming ← Mount.port "in"
  incoming.subscribe fun d => IO.println d.describe
  Mount.onUnmount do IO.println "bye"
```

**Shape decisions:**
- **Layout.** `Html` holds the tree, the HTML elements, `Window`, `Location`,
  `History` and `Storage` in one module, because these name each other.
  `Geometry`, `Css`, `UiEvents`, `Canvas` and `WebSocket` are separate
  modules. Tier 1 never imports a browser type, so `FormData.new` takes a
  `Value` there.
- **Members exposed to `Window`.** Common `Window` members are globals
  (`document`, not `(← window).document`). `WindowProxy` is `Window`.
- **Scroll methods.** `scroll`, `scrollTo`, `scrollBy` and `scrollIntoView`
  are `Async Unit`. The spec says `Promise`, browsers return `undefined`, and
  `Async` accepts both.
- **No `new` for HTML elements.** Use `createElement` plus an unchecked cast.
- **`Lasm.UI.Mount`** (moved from `Lasm.Web.App`) is hand-written. It binds
  Lasm's loader `lasm:app`:
  - `root (α := Value)`, `flags (α := Data)`, `hydrating`, `target`
  - `port`, `Port.send`, `Port.subscribe (f : Data → IO Unit)`,
    `subscribeAsync`
  - `onMessage`, `onMessageAsync`
  - `onUnmount (f : IO Unit)`
  - `hotState`, `onHotSave`

**What `Lasm.Web` had and nothing replaces** (listed in REVIEW.md):
- unmount cleanup of listeners, timers and sockets
- `Context2D.draw` batching
- `Event.info` (one call for the usual event fields)
- `Crypto.hex`
- `background`

**Inconsistency.** Mount's callbacks take plain Lean functions
(`subscribe fun d => …`, `onUnmount do …`). Every generated API takes a
callback handle made with `ofFn` or `ofSyncFn`.

**Q14.** Unmount cleanup. Should apps remove their own listeners, timers and
sockets (current state)? Or should `Lasm.UI.Mount` offer a tracker
(`Mount.track (cleanup : IO Unit)`) that runs on unmount?

**Q15.** Should Claude accept the loss of batching (`Context2D.draw`,
`Event.info`), with one JavaScript call per method?

**Q16.** Mount callbacks. Keep plain Lean functions (simpler, nothing to
remove), or switch to handles for consistency?

---

## 5. Lasm.JS.Node (generated)

**Status:**
- 0.7.0: fs/promises, path, os, process, buffer, crypto, child_process,
  events, and stream conversion.
- Branch `lasm-js-node-http`: `node:net`, `node:http`, `node:https`, plus
  typed event listeners on every selected class.

**Example, 0.7.0** (from `docs/JS_BINDINGS.md`):

```lean
import Lasm.JS.Node
open Lasm.JS Lasm.JS.Web Lasm.JS.Node

def run : Async Unit := do
  let file ← path.join #[← os.tmpdir, "hello.txt"]
  fsPromises.writeFile file "hi"
  match ← fsPromises.readFile file (some "utf8") with
  | .domString text => IO.println text
  | .uint8Array _ => pure ()
  let key ← crypto.scrypt "password" "salt" 32
  IO.println (← Buffer.toString key (some "hex"))
```

**Example, branch** (from `test/fixtures/js-node/Main.lean`):

```lean
let echo ← http.Server.RequestListener.ofFn fun req res => do
  discard <| res.setHeader "x-method" (← req.method)
  discard <| res.writeHead 200
  discard <| res.«end» (some body)
let server ← http.createServer none (some echo)
discard <| s.onceListening (← net.Server.ListeningListener.ofSyncFn (do ready.resolve ()))
```

**Shape decisions:**
- **Source.** Generated from Node's own docs JSON (`doc/api/*.json`, Node
  24.22.2), lowered to WebIDL. (Rejected: `@types/node`, which your
  2026-11-09 decision named.)
- **Names are the docs' own, lowercase**: `fsPromises.readFile`,
  `child_process.spawn`, `fs.Stats`. (Rejected: `Lasm.JS.Node.Fs.readFile`.)
  An argument named like a namespace gets a `_` suffix
  (`path.basename (path_ : String)`).
- **Results that depend on the encoding are unions.** `readFile` returns
  `Uint8ArrayOrDOMString`. (Rejected: two functions.)
- **Trailing `callback(err, v)` APIs are `Async`** through `util.promisify`
  (`scrypt`, `pbkdf2`, `hkdf`). An optional callback means the synchronous
  form is generated (`randomBytes 32 : IO ByteArray`). `execFile` is its
  promisified `{stdout, stderr}` form.
- **Buffer methods are functions of bytes**: `Buffer.toString bytes enc`.
- **Not in the 0.7.0 cut:**
  - async iteration (`glob`, `watch`, `opendir`)
  - `path.posix` and `path.win32`
  - callback and synchronous duplicates
  - experimental, deprecated and legacy members
- **Events (branch).** Each documented event becomes:
  - typed operations `on<Event>` and `once<Event>` returning the emitter
    (`server.onRequest`, `req.onceResponse`);
  - a listener handle `<Class>.<Event>Listener` with the documented argument
    types.

  (Rejected: only the generic `EventEmitter.on (event : String)` with `Data`
  arguments.)
- **Parent projections (branch).** Where a field name would collide, parents
  are reached with names such as `toHttpServer`.

**Q17.** Should Node's docs be the source instead of `@types/node`? Please
confirm. REVIEW.md lists this as open.

**Q18.** Should Claude merge the `node:http`/`net`/`https` branch (about 2,700
lines of generated Lean)?
- Node serving now goes through `Node.serve` (§6), so it would be for users
  who want raw `node:http`/`net` (TCP servers, outbound `http.request`).
- Claude recommends merging it, with typed `on<Event>` listeners.
- Alternative: drop `http` and keep `net` only.

---

## 6. `Node.serve`, and serverless `exportDefault`

**Status:** proposed. Your decision, being built now, nothing on a branch.

**Example** (the shape you decided, not yet in the repository):

```lean
import Lasm.JS.Node.Serve
open Lasm.JS Lasm.JS.Web

def handle (request : Request) : Async Response := do
  Response.new (some (.usvString s!"{← request.method} {← request.url}")) none

def main : IO Unit := Node.serve { fetch := handle, port := some 3000 }
```

On the function platforms (Netlify Functions, Vercel, Lambda, Azure, GCF) the
program publishes the handler, and the generated platform file calls it
directly:

```lean
def main : IO Unit := exportDefault (← Function.ofFn1 handle)
```

This `exportDefault` form is today's edge form (`templates/fetch/Main.lean`,
PR #213).

**Shape decisions** (from your instructions):
- **`Node.serve`** is a Lasm-provided, hand-written function in
  `Lasm.JS.Node.Serve`, shaped like `Bun.serve`: an options structure whose
  `fetch` is a plain Lean `Request → Async Response`. (Rejected: an npm
  adapter bound in the user's program (`@hono/node-server`, the 0.7.0
  documented path); a project-local `NodeServer.lean` copied by `lasm init`
  (PR #212's candidate); generated `node:http` by hand.)
- **Function platforms.** The program calls `exportDefault`, and Lasm's
  generated platform file converts the platform's event to a `Request` and
  calls the handler. (Rejected: today's shims, which run a Node HTTP server
  inside the function and forward to it; `Lasm.Serverless` proves properties
  of them.)

**Inconsistencies this introduces:**

| Target | How a handler is passed |
| --- | --- |
| Node | `fetch := handle` (a plain Lean function) |
| Bun | `fetch ← Bun.ServeOptionsFetch.ofFn fun request _server => handle request` (a handle; the function also takes the server) |
| Deno | `Deno.serveWithOptions {…} (← Deno.ServeHandler.ofFn fun request _info => …)` (a separate handler argument) |
| Edge, Workers, functions | `exportDefault (← Function.ofFn1 handle)` (untyped) or `ExportedHandlerFetchHandler.ofFn` (Cloudflare branch) |

- There are two ways to serve on Deno and Bun:
  - Lasm's Deno and Bun entries already serve a program's `exportDefault` on
    `$PORT` (`docs/BUN_DENO.md`).
  - The generated `Deno.serve` and `Bun.serve` also work.
- Node would be the only JavaScript runtime where `exportDefault` alone does
  not serve.

**Q19.** Should `Node.serve` take the options structure with a plain Lean
`fetch` (as decided), with `port : Option Nat` and `hostname : Option String`?
Which other options should it have:
- `onListen`
- `signal`
- graceful shutdown on SIGTERM (Lasm.Fetch's `serveNode` closes after open
  requests)
- request body size limits

**Q20.** Should Lasm's Node entry also serve a program's `exportDefault` on
`$PORT`, as the Deno and Bun entries do? Then one program
(`exportDefault handler`) serves on Node, Deno, Bun, the edge and every
function platform, and `Node.serve` is only for explicit control. Claude
recommends yes.

**Q21.** Consistency. Should `exportDefault` get a typed form for the common
case, `exportDefault (fetch : Request → Async Response)`, so programs stop
writing `Function.ofFn1`? And should `Lasm.JS.Bun` and `Lasm.JS.Deno` get
the same plain-function `serve` wrappers as Node? Options:
- (a) Both.
- (b) Only the typed `exportDefault`.
- (c) Neither: keep the generated shapes.

**Q22.** Naming. Should the hand-written function live inside the generated
namespace (`Lasm.JS.Node.serve`, mixed with generated `Lasm.JS.Node.*`), or
in its own namespace (`Lasm.JS.Serve.node`)?

**Q23.** On function platforms, should `Lasm.Serverless`'s proofs about the
shims be rewritten for the new event → `Request` conversion, or dropped with
the shims?

---

## 7. Lasm.JS.Bun and Lasm.JS.Deno

**Status:** 0.7.0 (#203).

**Example** (from `docs/JS_BINDINGS.md`):

```lean
import Lasm.JS.Deno
open Lasm.JS Lasm.JS.Web

def main : IO Unit := do
  let handler ← Deno.ServeHandler.ofFn fun request _info => handle request
  let server ← Deno.serveWithOptions { port := some 8000, hostname := some "127.0.0.1" } handler
  server.finished.block
```

```lean
import Lasm.JS.Bun
open Lasm.JS Lasm.JS.Web

def main : IO Unit := do
  let fetch ← Bun.ServeOptionsFetch.ofFn fun request _server => handle request
  let server ← Bun.serve { fetch, port := some (3000 : Nat), hostname := some "127.0.0.1" }
  IO.println s!"listening on {← (← server.url).href}"
```

**Signatures** (`library/Lasm/JS/{Deno,Bun}/Serve.lean`):

Deno:
- `serve (handler : ServeHandler)`
- `serveWithOptions (options : ServeTcpOptions) (handler)`
- `serveWithTlsOptions (tlsOptions : ServeTcpTlsOptions) (handler)`
- all three return `IO HttpServer`
- `ServeHandler.ofFn (f : Request → ServeHandlerInfo → Async Response)`

Bun:
- `serve (options : ServeOptions) : IO Server`
- `ServeOptions` has a required `fetch : ServeOptionsFetch`,
  `port : Option DOMStringOrUnsignedShort`, and more
- `Server.stop (closeActiveConnections : Option Bool := none) : Async Unit`

**Shape decisions:**
- **Source.** The runtimes' own `.d.ts` at the CI versions (Deno 2.9.6, Bun
  1.4.4), pinned by hash. (Rejected: prose docs, or a TypeScript compiler
  dependency.)
- **Overload naming follows the shared rule.** The TLS alternative becomes
  its own function and structure (`serveWithTlsOptions`,
  `ServeTcpTlsOptions`).
- **Bun's `XOR<…>` options** become one structure with a required `fetch`.
  `port` is the declared `string | number`.
- **Copied or kept.** `NetAddr` and `SocketAddress` are copied structures.
  `HttpServer`, `Server` and `ServeHandlerInfo` are handles.
- **Left out:**
  - Unix sockets
  - WebSockets (`upgrade`, `publish`)
  - Bun's `routes`, `tls` and `development`
  - Deno's handler-in-options overloads
  - `Symbol.dispose`
  - experimental members
- **Run-time lookup.** The generated functions look up `Deno` and `Bun` at
  run time, so a program importing them still builds for Node.

**Inconsistencies:**
- Deno takes the handler as a separate argument. Bun takes it inside the
  options. Both are as declared.
- Bun's `port` is a union (`.unsignedShort port` in Conduit). Deno's is
  `Option Nat`.
- See §6 for the comparison with `Node.serve`.

**Q24.** Bun's `port`. Keep `DOMStringOrUnsignedShort` as declared, or narrow
it to `Option Nat` through the override table (Q9)?

**Q25.** WebSockets on Bun and Deno (`Server.upgrade`, `Deno.upgradeWebSocket`)
are left out. Tandem's server-side WebSocket proposal would need them.
Generate them next, or wait for a concrete app?

---

## 8. Lasm.JS.Cloudflare (in progress)

**Status:** branch `lasm-js-cloudflare`, no PR. It is generated from
`@cloudflare/workers-types` 5.20261019.1 and tested locally under
`wrangler dev` only.

**Example** (from the branch's `docs/JS_BINDINGS.md`):

```lean
import Lasm.JS.Cloudflare
open Lasm.JS Lasm.JS.Web Lasm.JS.Cloudflare

def main : IO Unit := do
  let fetch ← ExportedHandlerFetchHandler.ofFn fun request env ctx => do
    let kv ← IO.ofExcept (readField KVNamespace env "KV")
    let db ← IO.ofExcept (readField D1Database env "DB")
    let path ← (← URL.new (← request.url)).pathname
    let hits := ((← kv.get path).bind String.toNat?).getD 0
    kv.put path (.domString (toString (hits + 1)))
    let rows ← (← (← db.prepare "SELECT name FROM people WHERE id = ?").bind #[toJS (1 : Nat)]).all
    ctx.passThroughOnException
    Response.new (some (.usvString s!"{hits + 1} visits; {rows.results.size} rows")) none
  let scheduled ← ExportedHandlerScheduledHandler.ofFn fun controller env _ => do
    let kv ← IO.ofExcept (readField KVNamespace env "KV")
    kv.put "last-cron" (.domString (← controller.cron))
  exportDefault ({ fetch := some fetch, scheduled := some scheduled } : ExportedHandler)
```

**Shape decisions:**
- **`env` is `Data`**, because the declarations say `Env = unknown`. Bindings
  are read with `readField KVNamespace env "KV"`. (Rejected for now, since
  each is a new API: a typed `Env` structure the program declares, or
  `env.kv "KV"` accessors.)
- **String-literal overloads become separate functions**: `getJson`,
  `getArrayBuffer`, `getStream`. `get` stays text.
- **Same parameter names** fall back to the shared rule, giving
  `D1PreparedStatement.first0` (the declaration's `first()`).
  `DurableObjectStorage.getWithKeys`, `putWithEntries` and `deleteWithKeys`
  follow the same rule.
- **Not generated:**
  - KV batch `get(keys[])`, and `getWithMetadata` of non-text values (the
    lowering cannot name them)
  - D1 `raw({columnNames: true})`
  - SQLite storage
  - WebSocket hibernation
  - stub RPC methods (use `callMethodAwait`)
  - containers
  - the `tail`, `email`, `trace` and similar handlers
- **Types.** Numbers are `Float`, because the declarations never say
  "integer". `Date` is `Data`.
- **Durable Object classes are a few lines of JavaScript** in the project's
  `index.mjs`. They call Lean functions put on `globalThis`.
- **Lasm changes outside the generated code:**
  - `exportDefault [ToJS α]` (Q7).
  - `workers/worker.mjs` now forwards `scheduled` and `queue`, and imports
    `cloudflare:workers` and `cloudflare:sockets`.
- **`ExecutionContext.waitUntil (promise : Value)`** takes a JavaScript
  promise. There is no direct way to hand it a Lean `Async` computation.

**Q26.** `env`. Options:
- (a) `Data` + `readField` (current).
- (b) The program declares `structure Env where KV : KVNamespace; DB : D1Database`
  with `deriving FromJS`, and the handler gets `Env`. This needs a generic
  handler type, which is a Lasm API. Claude recommends (b).
- (c) Generated accessors.

**Q27.** `waitUntil` and `blockConcurrencyWhile` need a Lean `Async` → JS
promise conversion. Should Claude add `Lasm.JS.Async.toPromise : Async α → IO Value`
(new core API)? Or leave the conversion to `Function.ofFn` tricks in the
program?

**Q28.** Durable Objects. Keep the JavaScript class shim until
`Lasm.JS.Class.define` (Q6) exists, or block Durable Objects support on it?

**Q29.** Should Claude merge the branch as it is (with Q9, Q10 and Q11 applied
later)? Then Porter's and Ledger's hand-written D1 bindings move to it after
the next release.

---

## 9. Lasm.WASI.Http

**Status:** 0.7.0 (#202). It is generated from the WASI 0.2.12 WIT: 90
functions plus the export.

**Example** (from `docs/WASI_FASTLY_BINDINGS.md`):

```lean
import Lasm.WASI.Http
open Lasm.WASI.Http Lasm.WASI.Http.Types

def main : IO Unit := IncomingHandler.serve fun request out => do
  let response ← OutgoingResponse.new (← Fields.new)
  let .ok body ← response.body | throw (IO.userError "no body")
  ResponseOutparam.set out (.ok response)
  let .ok stream ← body.write | throw (IO.userError "no stream")
  discard <| stream.blockingWriteAndFlush s!"{repr (← request.method)}\n".toUTF8
  stream.drop
  discard <| OutgoingBody.finish body none
```

**Shape decisions:**
- **Results.** `result<T, E>` is `Except E T` inside `IO`. `IO.Error` means
  only "not a wasi-http host". (Rejected: throwing the WIT errors as
  `IO.Error`.)
- **Resources** are `structure R where handle : UInt32`. They are dropped
  explicitly with `R.drop` and not freed by reference counting. Ownership is
  the WIT's (own versus borrow).
- **Names** follow heck, as wit-bindgen does:
  `ErrorCode.httpRequestUriInvalid`, `Fields.fromList`, `Fields.new`.
  Methods take `self`, so dot notation works (`request.method`).
- **The export** is `IncomingHandler.serve (handler : IncomingRequest → ResponseOutparam → IO Unit)`,
  plus `take` for the raw handles. There is one instance per request.
- **Imports.** Every wasi-http program imports all 90 functions, so one
  component template serves all programs.
- **Limits.** One call's returned lists must fit 2 MiB.
  `blocking-write-and-flush` takes at most 4,096 bytes per call (WASI).
- **Scope.** Only the wasi:http world is bound. Lean `IO` covers cli,
  filesystem and random through preview 1.

**Inconsistency.** Fastly (§10) uses `EIO FastlyStatus` and functions
namespaced by module (`HttpReq.methodGet req`). WASI uses `IO (Except …)`
and dot-notation methods (`request.method`).

**Q30.** Please confirm the WASI mapping rules above. REVIEW.md lists them as
open.

**Q31.** A wasi-http server is about 60 lines of low-level code (the
template's `ServerWasiHttp.lean`, Conduit's `WasiHttpServe.lean` at 118
lines). Should Claude keep it per app, or add one thin hand-written helper?
For example, `Lasm.WASI.Http.respond (out) (status) (headers) (body : ByteArray)`,
which writes in 4,096-byte chunks.

---

## 10. Lasm.Fastly

**Status:** 0.7.0 (#194). It is generated from Viceroy v0.21.1's witx: 244 of
252 functions.

**Example** (from `docs/WASI_FASTLY_BINDINGS.md`):

```lean
import Lasm.Fastly
open Lasm.Fastly

def main : IO Unit := do
  let (req, body) ← HttpReq.bodyDownstreamGet
  let method ← HttpReq.methodGet req
  let agent ← found? (HttpReq.headerValueGet req "user-agent")
  let color ← found? (ConfigStore.get (← ConfigStore.open "settings") "color")
  let resp ← HttpResp.new
  HttpResp.statusSet resp 200
  HttpResp.headerAppend resp "content-type" "text/plain"
  let out ← HttpBody.new
  discard <| HttpBody.write out s!"{method} {agent} {color}\n".toUTF8 .back
  HttpResp.sendDownstream resp out 0
```

**Shape decisions:**
- **Errors.** Every call is `EIO FastlyStatus α`. It lifts into `IO`
  automatically, with the message `Fastly host call failed: <status>`.
  `found?` maps `$none` to `Option.none`. (Rejected: `IO α` with the status
  only in the message, or `IO (Except FastlyStatus α)` everywhere.)
- **Names are the witx's own**, lowerCamelCase, in one namespace per witx
  module: `HttpReq.headerValuesGet`, `KvStore.lookupWaitV2`,
  `Backend.«exists»`. Handles are `RequestHandle`, `BodyHandle`, and so on in
  `Types`, so there is no dot notation. (Rejected: renaming to methods on
  handles.)
- **Bytes and text.** `char8` output is `String` (U+FFFD for invalid UTF-8).
  `u8` is `ByteArray`. A header given in is a `ByteArray`, with a scoped
  `Coe String ByteArray`.
- **Records** become structures with every field defaulted. Output buffers
  retry on `$buflen` up to 64 MiB.
- **Two generator tables come from witx comments**, not witx syntax: which
  record pointers are outputs, and two 16-byte output arrays.
- **Not bound (8):**
  - `send_v2`/`v3` and `pending_req_*_v2`, which need an error type that
    carries `SendErrorDetail`
  - three functions with output records that hold pointers

**Q32.** Should errors stay `EIO FastlyStatus α`? (REVIEW.md lists this as
open.)

**Q33.** Should Claude bind `send_v2`/`v3` with
`EIO (FastlyStatus × SendErrorDetail) α`, or leave them unbound (v1 covers
sending)?

**Q34.** Fastly calls are namespaced by module, with no dot notation
(`HttpReq.methodGet req`), while WASI uses `request.method`. Keep the witx's
module layout, or also generate dot-notation aliases on the handle types
(`req.methodGet`)?

---

## 11. Lasm.UI

**Status:** 0.7.0. The API is unchanged by the browser tier. Only the mount
glue moved, to §4.

**Example** (from `docs/UI.md`):

```lean
import Lasm.UI
open Lasm.UI

inductive Msg where
  | increment
  | decrement

def update : Msg → Int → Int
  | .increment, n => n + 1
  | .decrement, n => n - 1

def view (n : Int) : Html Msg :=
  html! <main>
          <button onClick={Msg.decrement}>-</button>
          <output>{n}</output>
          <button onClick={Msg.increment}>+</button>
        </main>

def main : IO Unit := (App.sandbox 0 update view).run
```

**Shape decisions:**
- **The Elm architecture.** `App Flags Model Msg` has `init`, a pure
  `update : Msg → Model → Model × Cmd Msg`, a pure `view`, `subscriptions`,
  `onUrlChange` and `receive`. There are three entry points:
  - `App.sandbox (init : Model) (update : Msg → Model → Model)`
  - `App.element`
  - the full structure

  (Rejected: components with local state, or React-style hooks.)
- **`Html Msg` is data**: `.text` or `.elem ns tag key attrs children`. Views
  are written with `html!` or a function DSL (`li [class_ …] [text …]`).
  Names that clash with Lean get `_`: `class_`, `main_`, `id_`, `type_`.
- **Handlers do not get the event object.** A `Decoder` names the fields to
  read (an `Applicative`: `Decoder.map2 Msg.clicked Decoder.offsetX Decoder.offsetY`).
  Fields cross in one call.
- **`Cmd` and `Subs` are data** (lists of effects), so tests can inspect what
  `update` asked for. The commands are UI's own and do not use
  `Lasm.JS.Web`:
  - `Http.get url handle`
  - `Cmd.storageSet`, `Cmd.pushUrl`, `Cmd.focus id`, `Cmd.port`
  - `Cmd.io` for anything else
- **UI has its own `Url` type** (`Url.parse`, `segments`, `param?`,
  `Url.build`), separate from Lasm.JS.Web's `URL`.
- **Diffing runs in Lean and is proved** (`diff_correct`). The patch crosses
  in one call. Hot reload keeps the model when it has `ToJS` and `FromJS`.

**Inconsistency.** UI's `Http.get` and `Url` overlap tier 1's `fetch` and
`URL`. This is deliberate: UI's are pure data, testable without a browser,
and its proofs are about them.

**Q35.** Keep UI's own `Http`, `Url` and `Storage` commands as pure data
(Claude recommends this), or replace them with `Cmd.io` plus the generated
bindings?

**Q36.** The `_` suffix names (`class_`, `main_`, `type_`). Keep them, or use
Lean's «guillemets» or a different convention?

---

## 12. Lasm.RPC

**Status:**
- 0.7.0: `Endpoint`, `Endpoint.serve`, `serve'`, `Endpoint.call`, and
  `handler` (a Lasm.Fetch handler).
- PR #213: `handler` is replaced by `dispatch`.

**Example** (from `docs/RPC.md`):

```lean
-- Shared.lean
def addTodo : Endpoint NewTodo Todo := { name := "addTodo", validate := fun r => checkTitle r.title }

-- Server.lean (0.7.0, on Lasm.Fetch)
let routes := [
  addTodo.serve fun req ok => do            -- ok : addTodo.validate req = .ok ()
    return .ok (store req.title ok),
  listTodos.serve' fun _ => do return .ok #[] ]
serve <| handler routes fun req => do return .notFound

-- Client.lean
| .add title, m => (m, addTodo.call { title } .added)
```

**PR #213 (proposed replacement for `handler`):**

```lean
def dispatch (routes : List Route) (method : String) (segments : List String) (body : String) :
    Option (Async Answer)
structure Answer where
  status : UInt16
  headers : Array (String × String)
  body : String
```

**Shape decisions:**
- **`Endpoint Req Res`** is `name` plus `validate : Req → Except String Unit`.
  The URL is `POST /rpc/<name>`, and the wire format is JSON through Lean's
  `ToJson` and `FromJson`.
- **The validation proof is passed in.** The handler gets
  `e.validate r = .ok ()` as an argument. `serve'` is the same without the
  proof.
- **The client is a `Cmd`** (`Endpoint.call e req handle`). An invalid request
  is never sent (`call_invalid`, proved).
- **`Route.run : String → Async (UInt16 × String)`** was already
  transport-free. `dispatch` (PR #213) makes the router transport-free too,
  and returns `none` for paths that are not RPC. The four propositions are
  restated as `dispatch_*`.

**Inconsistency.** RPC serialises with `Lean.ToJson`/`FromJson`. Lasm.JS
crosses values with its own `ToJS`/`FromJS`. A type used in both needs both
derivings.

**Q37.** Should `dispatch` replace `handler` (PR #213)? Should RPC also ship
a one-line adapter for each server kind (for example
`Lasm.RPC.webHandler routes : Request → Async (Option Response)` for the JS
tier), or leave the adapters to apps?

**Q38.** Keep `serve'` (prime) as the name for the proof-free form? The
alternative is `serveNoProof` or `serveSimple`.

---

## 13. Lasm.KV

**Status:** 0.7.0. PR #213 removes its `Lasm.Fetch` import.

**Example** (from `docs/RPC.md`):

```lean
let kv ← Lasm.KV.open "TODOS"      -- the best store the platform has
kv.put "state" json; let s ← kv.get "state"; kv.delete "state"
```

**Shape decisions:**
- **`Store`** has `kind`, `get : String → Async (Option String)`,
  `put : String → String → Async Unit` and `delete`. Values are strings only.
- **`open name` picks a backend by detecting the platform:**

  | Platform | Store |
  | --- | --- |
  | Deno with `openKv` | Deno KV |
  | Workers with a binding named `name` | Workers KV |
  | Fastly | KV Store |
  | anywhere else | memory |

- **Workers bindings come from the `env` that the Workers request handler
  received.**
  - 0.7.0: `Lasm.Fetch.platformEnv` (only `Lasm.Fetch.serve` sets it).
  - PR #213: `Lasm.KV.setWorkersEnv env`, a global the program's fetch
    handler must call.
  - Folio (PR #210) carries its own Workers KV store instead.
- **Earlier decision (2026-11-09).** The Deno and Workers backends were
  scheduled for removal, keeping `Store`, memory and Fastly "pending your KV
  review".

**Q39.** What should `Lasm.KV` become? Options:
- (a) Keep `open`, with `setWorkersEnv` (PR #213).
- (b) Typed constructors taking the platform binding, with `open` keeping
  only memory and Fastly. Claude recommends this.
  - `Lasm.KV.workers (ns : Lasm.JS.Cloudflare.KVNamespace)`
  - `Lasm.KV.deno (kv : Deno.Kv)`
- (c) Delete `Lasm.KV`, and use the generated platform bindings directly.

**Q40.** Should values stay `String` only, or become `ByteArray` (or
generic, through `ToJson`)?

---

## 14. Lasm.Fetch (scheduled for deletion)

**Status:** 0.7.0. It still ships and still works on every target. Deletion
was decided (2026-11-10) but is not yet scheduled to a release. It is still
used on Node by PR #210 (Conduit, Folio: `Lasm.Fetch.serveNode`) and PR #213
(templates), until `Node.serve` lands.

**Example** (from `docs/FETCH.md`):

```lean
import Lasm.Fetch
open Lasm.Fetch

def handle (req : Request) : Async Response := do
  match req.method, req.segments with
  | "GET", [] => return .json "{\"message\":\"Hello from Lean!\"}"
  | "GET", ["hello", name] => return .text s!"Hello, {name}!"
  | "GET", ["upstream"] =>
    let r ← get "https://example.com/"
    return .text s!"example.com answered {r.status}"
  | _, _ => return .notFound

def main : IO Unit := serve handle
```

**What replaces each part:**

| Lasm.Fetch part | Replacement | State |
| --- | --- | --- |
| `serve` on Workers and the edge | `exportDefault` of a Lasm.JS.Web handler | main; templates in PR #213 |
| `serve` on Deno and Bun | `Deno.serve`/`Bun.serve`, or the entries serving `exportDefault` | 0.7.0 |
| `serve`/`serveNode` on Node | `Node.serve` | proposed (§6) |
| `serve` on function platforms | `exportDefault` called by the generated platform file | proposed (§6) |
| `serve` on Fastly | `Lasm.Fastly` (`HttpReq.bodyDownstreamGet`, `HttpResp.sendDownstream`) | 0.7.0 |
| `serve` on wasi-http, Spin | `Lasm.WASI.Http.IncomingHandler.serve` | 0.7.0 |
| `serve` on `--target wasi` (CGI) | Nothing in the library: `templates/fetch/Cgi.lean` reads CGI with Lean `IO` | PR #213 |
| `fetch`/`get`/`post` on JavaScript | `Lasm.JS.Web.fetch` | 0.7.0 |
| `fetch` on Fastly | `HttpReq.send req body "origin"`, `registerDynamicBackend` | 0.7.0 |
| `fetch` on wasi-http | `OutgoingHandler.handle` + `future.subscribe`/`get` | 0.7.0 |
| `Request`/`Response` types, `segments`, `queryParam?`, `header?`, `Response.json`/`text`/… | Nothing in the library. Copied into each app: Conduit and Folio `Server/Web.lean` (about 250 lines each), the fullstack template's `Http.lean` (168 lines) | PR #210, #213 |
| `segments_no_dot_segments` (proof) | Re-proved inside each app's module | PR #210 |
| `respond` (HEAD as GET, 500 on a throw) | Each app's adapter | PR #210, #213 |
| `Assets`, `Assets.wrap`, `embed_dir!` | Nothing in the library. Copied: `Server/Assets.lean` + `Server/Embed.lean` in Conduit and Folio (190 lines each), the template's `Embed.lean` | PR #210, #213 |
| `platformEnv` (the Worker's `env`) | Each app keeps its own; `Lasm.KV.setWorkersEnv` | PR #210, #213 |
| `Lasm.RPC.handler` | `Lasm.RPC.dispatch` | PR #213 |
| Its proved `Request`/`Response` model (`Fetch/Spec.lean`) | "Moves into the test suite as the spec" (2026-11-10) | not done |

**Open gaps** (each was written into apps; no new public API, per your rule):
1. **Embedded assets.** `embed_dir!` and `Assets` are now copied into three
   places. Every target without a file system needs them. This is the largest
   piece an app carries now.
2. **Request and routing helpers.** There are now two to three copies of a
   request model, WHATWG dot-segment path parsing (with its proof), query
   parsing and response helpers.
3. **`platformEnv`.** Nothing sets it without `Lasm.Fetch.serve`, so
   `Lasm.KV` on Workers silently falls back to memory unless the program
   calls `setWorkersEnv` (Q39).
4. **Lasm.KV imports Lasm.Fetch** (for `platformEnv` and `platformCode`).
   PR #213 removes the import.
5. **Outbound fetch across JS and wasi-http.** There is no common call.
   Conduit's PostgREST store takes `send : Web.Request → Async Web.Response`,
   and each target passes its own: `Lasm.JS.Web.fetch`, or
   `WasiHttpServe.fetch` built on `OutgoingHandler`.

**Q41.** Embedded assets. Options:
- (a) Keep them copied in apps (current).
- (b) A small library with no HTTP types and no transport, outside
  `Lasm.Fetch`. Claude recommends this.
  - `Lasm.Embed` (`embed_dir! : Array Asset` with path, content type,
    Brotli copy, immutable flag)
  - a pure `Asset.lookup (path) : Option Asset`
- (c) Move it into the CLI as a build feature.

**Q42.** Request and routing helpers. Options:
- (a) Keep a copy per app (current).
- (b) A pure, transport-free `Lasm.Http.Path` (segments with dot-segment
  resolution and its proof, percent-decoding, query parsing) usable on every
  target.
- (c) Rely on Lasm.JS.Web's `URL` on JavaScript targets and copy for
  Fastly and WASI.

**Q43.** Outbound fetch across JavaScript, wasi-http and Fastly. Accept no
common call (apps pass a `send` function, as Conduit does), or provide one
cross-host `send` signature? Your 2026-11-10 decision rejected a single
cross-target handler; this is the outbound side of the same question.

**Q44.** WASI CGI (`--target wasi`). Lasm.Fetch was its only server. Should
CGI serving stay template-only code (`Cgi.lean`), become a small library,
or be dropped as a server target?

**Q45.** Should Lasm.Fetch's proved `Request`/`Response` model move into the
test suite as a spec (as decided), or be deleted with the library?

**Q46.** When should `Lasm.Fetch` be deleted? Claude proposes the first
release after `Node.serve` and the function-platform `exportDefault` land,
once no template, example or app imports it. Q41 to Q45 decide what, if
anything, survives as a new library.

---

## Summary of status

| Library | Status |
| --- | --- |
| Lasm.JS core | 0.7.0 (`exportDefault [ToJS α]` on a branch) |
| Mapping rules | 0.7.0 (Cloudflare's rules on a branch) |
| Lasm.JS.Web tier 1 | 0.7.0 |
| Browser tier, Lasm.UI.Mount | 0.7.0 |
| Lasm.JS.Node | 0.7.0 (http/net/https on branch `lasm-js-node-http`) |
| Node.serve, serverless `exportDefault` | proposed |
| Lasm.JS.Bun, Lasm.JS.Deno | 0.7.0 |
| Lasm.JS.Cloudflare | branch `lasm-js-cloudflare` |
| Lasm.WASI.Http | 0.7.0 |
| Lasm.Fastly | 0.7.0 |
| Lasm.UI | 0.7.0 |
| Lasm.RPC | 0.7.0 (`dispatch` in PR #213) |
| Lasm.KV | 0.7.0 (`setWorkersEnv` in PR #213) |
| Lasm.Fetch | 0.7.0, scheduled for deletion; app and template migrations in PR #210, #212, #213 |

Deferred, not asked here: where the `Lasm.*` libraries live (in `@lasm/cli`,
or separate `@lasm/*` packages). You deferred that until the APIs are final.
