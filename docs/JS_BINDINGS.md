# Using JavaScript and npm packages from Lean (Lasm.JS)

This guide is written for people **and AI agents** that write bindings. It is
complete: every rule needed to bind an npm package is here, with working examples.

Status: **current source, Phase 4** (candidate `.39891445495` passed five-platform acceptance and the cold-installation gate; awaiting the user's review).
`Async` handlers and bindings (waiting without holding a Lean thread) are
**current source, Phase 5.2**: candidate `.58` passed five-platform acceptance,
the interop examples, the templates and the interop soak; awaiting the release
gate. The design
and measurements are in [JS_INTEROP.md](JS_INTEROP.md).

## What it is

`import Lasm.JS` lets a Lean program compiled by Lasm call Node built-ins (`node:*`),
Node globals (`fetch`) and npm packages, and lets JavaScript call Lean functions.

- **Lasm only.** These programs run only when compiled by Lasm and run on Node.js. A
  natively built program fails every JavaScript operation with
  `Lasm.JS: JavaScript interop is only available in programs compiled by Lasm…`.
  Keep pure logic in modules that do not import `Lasm.JS` so you can test it natively.
- **Lean 4.35.0.** `Lasm.JS` ships with Lasm and is compiled into Lasm's managed
  Lean the first time it is used. There is no Lake dependency to add. Programs that
  import it use Lasm's larger Lean download (the "extended" tier, which includes
  Lean's elaborator), as Lake projects already do.
- **Cost: about 5 µs per JavaScript call when a Lean thread makes calls one
  after another, 20–30 µs for a lone call or while other Lean threads call too**
  (measured on Linux x64; [BENCHMARKS.md](BENCHMARKS.md#lasmjs-call-cost)). Every
  call crosses from the Lean thread to Node's main thread. Make one call per real
  operation (a query, a sign, an HTTP response), not one per tiny step.

## Quick start

A project directory:

```
lean-toolchain     leanprover/lean4:v4.35.0
package.json       {"private": true, "dependencies": {"jose": "6.2.12"}}
Main.lean
```

`Main.lean`:

```lean
import Lasm.JS
open Lasm.JS

@[js "node:crypto" "randomUUID"] opaque randomUUID : IO String
@[js "jose" "new SignJWT"] opaque newSignJWT : Data → IO Value

def main : IO Unit := do
  IO.println s!"id {← randomUUID}"
  let jwt ← newSignJWT (obj [("sub", toJS "ada")])
  let jwt ← jwt.callMethod "setProtectedHeader" #[obj [("alg", toJS "HS256")]]
  let token ← jwt.callMethodAwait "sign" #[toJS "a secret of 32 bytes or more!!!".toUTF8] String
  IO.println s!"token {token}"
```

```sh
npm install              # installs jose into node_modules
npx lasm Main.lean       # build and run
npx lasm build Main.lean # dist/ includes dist/node_modules (production dependencies only)
node dist/main.mjs
```

The same works in a Lake project: put `package.json` next to the lakefile.

This script waits for JavaScript in `IO`, which blocks the calling thread: fine
for a script. **Servers write their handlers and promise-returning bindings in
`Async`**, where waiting holds no thread ([Waiting for JavaScript](#waiting-for-javascript-async)).

## How npm packages are found and deployed

- **package.json location.** `package.json` sits next to the lakefile (Lake
  project) or next to the main `.lean` file (standalone program).
- **Resolution.** `lasm build` resolves `dependencies` and `optionalDependencies`
  from that directory's `node_modules` exactly as Node does, including nested
  `node_modules` and peer dependencies. It copies the closure into
  `dist/node_modules` with the same layout. `devDependencies` are not deployed.
- **Missing packages.** A missing required package stops the build with
  `npm dependency X (needed by …) is not installed … Run npm install`.
- **Supported layouts.** npm's layout is supported, including local `file:` packages.
  pnpm's symlinked layout is not.
- **Module formats.** Modules load with Node's `require`: CommonJS, and ES modules
  without top-level await (Node 26 `require(esm)`).
- **Native addons** (`.node` files) are copied. They work only on the platform that
  built them, which is also true of every Lasm deployment.

## Bindings: `@[js "module" "export"]`

```lean
@[js "MODULE" "EXPORT"] opaque leanName : A₁ → A₂ → … → IO R
```

This defines `leanName`. Lasm generates the conversion glue from the Lean type, so
there is nothing else to write. Each argument is converted with `ToJS`. The result
is converted with `FromJS`.

| You want to call | MODULE | EXPORT | Example |
| --- | --- | --- | --- |
| A named export | the package or `node:` name | its name | `@[js "node:path" "join"] opaque join : String → String → IO String` |
| A nested export | as above | dotted path | `@[js "node:path" "posix.join"] opaque posixJoin : String → String → IO String` |
| The module itself (a function) | the package | `""` | `@[js "express" ""] opaque express : IO Value` |
| The default export | the package | `"default"` | `@[js "some-esm" "default"] opaque f : String → IO Data` |
| A class (with `new`) | the package | `"new ClassName"` | `@[js "pg" "new Pool"] opaque newPool : Data → IO Value` |
| A global function | `"globalThis"` | its name | `@[js "globalThis" "fetch"] opaque fetch : String → Data → IO Value` |

Result types:

- **`Async R`**: for functions that return a promise (a query, `fetch`, a
  timer), the default in servers. The promise is **awaited without holding a
  Lean thread**: the rest of the `Async` computation continues when it settles.
  Then the value is converted to `R`.
- **`IO R`**: for functions that return a value at once (`randomUUID`,
  `express()`, `path.join`), and in scripts. A returned promise is awaited by
  **blocking** the calling Lean thread.
- **`IO (Task (Except IO.Error R))`**: the promise is not awaited. The task finishes
  when it settles, and no Lean thread is blocked meanwhile.

Arguments can be any type with `ToJS`, including `Data` and `Value`. Pass a JavaScript
function (callback) as a `Value` created with `Function.ofFn` (see below).

**Binding check.** `lasm build` loads each bound module from the project's
`node_modules` and checks that the export exists and is a function. A broken
binding stops the build:

```
Lasm.JS binding check failed:
  App.newPool: pg export "Pol" is missing
```

The check also warns when the Lean binding passes more arguments than the function
declares. Passing fewer is normal: JavaScript functions often have optional
trailing parameters.

## Values and dynamic calls

`Value` is a JavaScript value (any object, function, promise, class instance) held
for Lean. It is released when Lean drops it. `Data` is a JavaScript value copied into
Lean:

```lean
inductive Data
  | undefined | null | bool (b : Bool) | number (n : Float) | string (s : String)
  | bigint (i : Int) | bytes (b : ByteArray) | array (items : Array Data)
  | object (fields : Array (String × Data))
  | ref (value : Value) (description : String)   -- anything that is not plain data
```

Plain objects, arrays, primitives, `Uint8Array` and bigint are copied. Everything
else (functions, promises, class instances, `Map`, `Date`, …) arrives as `ref`.

The result type `α` is the last argument and defaults to `Value` (`Data` for the
`…Await` forms):

| Lean | JavaScript |
| --- | --- |
| `require "pg"` | `require('pg')` |
| `global` | `globalThis` |
| `o.get "key"` / `o.get "key" Nat` | `o.key` |
| `o.getFields #["a", "b"]` | `{a: o.a, b: o.b}` in **one** call (use it to read an HTTP request) |
| `o.set "key" x` | `o.key = x` |
| `o.get sym` / `o.set sym x` (`sym : Value`, a Symbol) / `o.get (3 : Nat)` | `o[sym]` / `o[sym] = x` / `o[3]` |
| `f.call #[a, b]` / `f.callAwait #[a, b] String` | `f(a, b)` / `await f(a, b)` |
| `o.callMethod "m" #[a]` / `o.callMethodAwait "m" #[a] Data` | `o.m(a)` / `await o.m(a)` |
| `C.new #[a]` | `new C(a)` |
| `p.await Nat` / `p.toTask Nat` | `await p` / `p` as a Lean task |

The `…Await` forms and `await` work in `Async` (no thread held while waiting)
and in `IO` (the calling thread blocks); Lean picks the form from the `do`
block they are in.
| `v.describe` | a short description (`function express (2 parameters)`) |
| `obj [("k", toJS 1)]` | `{ k: 1 }` (a `Data` argument) |
| `d.field "k"` | the field `k` of copied data (`undefined` if absent) |

Example (`pg`):

```lean
@[js "pg" "new Pool"] opaque newPool : Data → IO Value

def rows (pool : Value) (sql : String) (params : Array Data) : Async (Array Data) := do
  let result ← pool.callMethodAwait "query" #[toJS sql, .array params] Value  -- pg Result (a class instance)
  result.get "rows" (Array Data)                                               -- plain row objects
```

### Property keys: strings, numbers, Symbols

`get` and `set` take a key of any type with `ToJS`, as JavaScript's `o[key]`
does: a `String`, a number, or a JavaScript value such as a Symbol. An array
key is its string (`o[["a", "b"]]` is `o["a,b"]`); `getFields` takes strings.

```lean
let symbolClass ← (← global).get "Symbol"
let tag ← symbolClass.callMethod "for" #[toJS "app.tag"]   -- Symbol.for("app.tag")
box.set tag "tagged"                                       -- box[tag] = "tagged"
let s ← box.get tag String
let iterator ← (← items.get (← symbolClass.get "iterator")).call (this := toJS items)
let first ← iterator.callMethod "next" #[] Data             -- {value, done}
```

## Conversions: `ToJS` and `FromJS`

| Lean | JavaScript (`toJS`) | Read back (`FromJS`) |
| --- | --- | --- |
| `String` | string | string |
| `Bool` | boolean | boolean |
| `Float` | number | number |
| `Nat`, `Int` | number (bigint above 2^53 − 1) | integral number or bigint |
| `UInt8`…`UInt64` | number | in-range integral number |
| `ByteArray` | `Uint8Array` | `Uint8Array` (and Node `Buffer`) |
| `Array α`, `List α` | array | array |
| `Option α` | `null` for `none` | `null` or `undefined` read as `none` |
| `α × β` | `[a, b]` | two-element array |
| `Unit` | `undefined` | anything |
| `Lean.Json` | plain data | plain data (bigint → number; `Uint8Array` and refs rejected) |
| `Data` | as is | as is |
| `Value` | the value | any value (reference) |

**Deriving.** `deriving ToJS, FromJS` works on:

- **structures without parameters**, which map to objects with the same field names.
  An `Option` field may be missing.
- **enumerations** (constructors without fields), which map to the constructor name
  as a string.

```lean
structure Todo where
  id : Nat
  title : String
  done : Bool
  note : Option String     -- may be absent or null
  deriving ToJS, FromJS

inductive Level where | low | high deriving ToJS, FromJS   -- "low" / "high"
```

Write other instances by hand: `instance : ToJS T := ⟨fun t => …⟩` and
`instance : FromJS T := { fromJS := fun d => …, typeName := "T" }`.

**Type mismatches name the binding, the expected Lean type and the JavaScript value:**

```
Lasm.JS binding App.jwtVerify (jose jwtVerify): expected Lean type String, received JavaScript object {payload, protectedHeader}
Lasm.JS get "rows": expected Lean type Array (App.Todo), received JavaScript array of length 2 (an element is not App.Todo: field title: expected String, received null)
```

## Waiting for JavaScript: `Async`

Lean has about one worker thread per CPU. Code that waits for a JavaScript
promise in `IO` blocks one of them until the promise settles, so a server whose
handlers wait in `IO` serves only about as many slow requests (database queries,
outbound HTTP, timers) at once as the machine has CPUs; the rest queue.

`Async` (Lean's `Std.Async.Async`, in scope after `open Lasm.JS`) waits
without a thread: the rest of the computation continues when the promise
settles, as after `await` in JavaScript. Rules:

- **Handlers run in `Async`**: `Function.ofFn`, `ofFnReply`, `ofFn1` and `ofFn2`
  take `Async` functions. A `fun args => do …` handler is an `Async` `do` block.
- **Awaiting in `Async` holds no thread**: `callAwait`, `callMethodAwait`,
  `Value.await`, and bindings declared `→ Async R`. Write your own functions
  that wait (a query helper) as `… → Async R`.
- **`IO` actions run in `Async` unchanged**: `IO.println`, `get`, `callMethod`,
  `IO.Ref`, bindings declared `→ IO R`. They run on the current thread, so an
  `IO R` binding that returns a promise still blocks: declare it `Async R`.
- **`try … catch`, `throw`, `for`, `let mut` and `return`** work as in `IO`.
- **From `IO`** (a script's `main`, server startup), run an `Async` computation
  and wait for it with `.block`: `let reply ← (request url).block`.
- **Loops of any length**: an `Async` loop (a recursion, `for`, `List.mapM`) of
  steps that complete at once, such as synchronous calls, `IO` actions and `pure`,
  runs on every target without overflowing the stack; CI runs 1,000,000 such
  steps on Node, Deno, Bun, workerd and browsers. Before #90's fix such a loop
  failed after about 2,000 steps on Deno and Workers and 8,000 on Bun.
- **To wait for time**, bind a JavaScript timer:
  `@[js "node:timers/promises" "setTimeout"] opaque sleep : Nat → Async Unit`.
  `IO.sleep` and `IO.wait` block a thread.

```lean
@[js "node:timers/promises" "setTimeout"] opaque sleep : Nat → Async Unit
@[js "globalThis" "fetch"] opaque fetch : String → Data → Async Value

def status (url : String) : Async Nat := do
  let response ← fetch url (obj [])
  response.get "status" Nat

  let handler ← Function.ofFn fun _ => do
    sleep 100                                   -- no Lean thread held
    return toJS (← status "https://example.com")  -- nor here
```

Measured (Linux x64, Hono, the soak's `GET /slow/100` handler awaiting a 100 ms
timer, process pinned to 2 CPUs, default `LEAN_NUM_THREADS`): 1,000 concurrent
requests finish in 0.27–0.30 s, with no new threads; the same handler waiting
in `IO` took 8.7 s ([INTEROP_SOAK.md](INTEROP_SOAK.md#concurrent-waiting-handlers)).

## Callbacks: Lean functions called by JavaScript

```lean
Function.ofFn  (f : Array Data → Async Data) : IO Value      -- JavaScript gets a function returning a Promise
Function.ofFnReply (f : Array Data → Async Function.Reply) : IO Value -- the reply may be a method call the host makes
Function.ofFn1 (f : α → Async β) / Function.ofFn2 (f : α → β → Async γ)   -- typed forms
Function.ofSyncFn (f : Array Data → IO Data) : IO Value      -- synchronous
Function.ofSyncFn2 (f : α → β → IO γ)
```

- **Asynchronous (`ofFn`), the default for handlers.** Each call is queued to the
  Lean side and runs as a Lean task in `Async`. It may make JavaScript calls and
  await them; while it awaits it holds no Lean thread, so any number of calls can
  wait at once. Its result resolves the promise, and a Lean error rejects it with
  an `Error`. HTTP handlers (Express, Hono) and event listeners use this.
- **Synchronous (`ofSyncFn`), only where JavaScript needs the result immediately**
  (a sort comparator, a `map` function). Node's main thread waits while the Lean
  function runs, about 20 µs per call plus the function, so the event loop is blocked.
  - What works inside: JavaScript calls (served inline while the main thread waits),
    console output, and waiting for a Lean task that needs nothing from Node (a
    computation). Starting a timer, a DNS lookup, a socket read or `Value.toTask`
    is fine too: it finishes after the callback returns.
  - What fails at once: waiting for anything that needs Node's main thread, which
    is waiting for the callback. How it fails depends on the wait:
    - *An error the callback can catch:* a JavaScript promise (`Value.await`, the
      `…Await` forms) and Lean file IO.
    - *It ends the whole callback:* waiting for a Lean task (`IO.wait`,
      `Task.get`, `.block`, a `toTask`'s task) that makes host calls, or for a
      timer, DNS lookup or socket read started in the callback. JavaScript gets
      the error, and the memory the callback was using leaks.
  - A synchronous callback cannot call another synchronous callback.
  - On the single-threaded targets (Deno, Bun, Workers, browsers) the callback
    runs on the JavaScript stack. Waiting for a Lean task works there when its
    work needs no JavaScript event: the wait runs the task, including its
    synchronous JavaScript calls (`(loop).block` of an `Async` loop of
    `callMethod`s, say). Waiting for a JavaScript event fails at once with an error
    that names the cause: a promise, a timer, `fetch` or `Std.Async.sleep`.
  - Why these waits cannot be made to work, on any target: JavaScript runs a
    function to completion. A promise settles, and its reactions run, only after
    the JavaScript code that called the callback has returned, and that code is
    waiting for the callback's result. Suspending the WebAssembly stack (JSPI)
    cannot help: it cannot suspend through the caller's JavaScript frames, and
    the caller needs its result synchronously. On Node, Node's main thread could
    in principle serve other Lean threads' host calls while it waits, so that a
    task that calls JavaScript could finish. It would then run JavaScript for
    unrelated Lean threads (another request's handler) in the middle of the
    caller's synchronous code, which JavaScript code does not expect, and it
    cannot tell the callback's own tasks from unrelated ones. So these waits
    keep failing at once with a clear error. Use `Function.ofFn` when the
    callback must wait.
- **Replying with a method call (`ofFnReply`), for HTTP handlers.** A handler
  usually ends by calling `res.json(body)` (Express) or returning `c.json(body)`
  (Hono). Returning `Function.Reply.callMethod res "json" #[body]` instead lets the host make
  that call as part of the reply, which saves one round trip to Node's main thread;
  the promise resolves with the method's result (Hono's `Response`) or rejects if
  it throws. `Function.Reply.value d` answers with a value, as `ofFn` does. Read the request
  fields you need in one call with `req.getFields #["params", "body"]`. Together
  these took the `lasm init` Express template from 4.3 to 2.3 host calls per
  request and from 4,600 to 6,000 requests per second (Hono: 4.4 to 3.4 calls,
  5,750 to 6,650) on one local Linux x64 host with 16 connections.
- **Lifetime.** The JavaScript function holds the Lean closure until JavaScript
  garbage-collects the function.

Pass a callback where JavaScript expects a function:

```lean
let handler ← Function.ofFn fun args => do …; return .undefined   -- the do block is `Async`
let _ ← app.callMethod "use" #[toJS handler]
```

A server's `main` must not return while JavaScript serves requests: end it with
`Lasm.JS.waitForever`.

## Errors

- **A JavaScript exception or rejected promise** becomes an `IO.userError` with
  `Name: message`, prefixed by the binding when it came from one:
  `Lasm.JS binding fail (local-lib fail): RangeError: boom`.
- **A Lean error in a callback** rejects the JavaScript promise with
  `new Error(message)`.
- **Released or invalid handles** report `Invalid or released Lasm.JS value handle`.
  This cannot happen through the API: Lean keeps each handle alive while a call uses it.

## Standard bindings: `Lasm.JS.Web`

`import Lasm.JS.Web` gives typed bindings of the **WinterTC Minimum Common Web
API** ([min-common-api.proposal.wintertc.org](https://min-common-api.proposal.wintertc.org/),
draft of 31 July 2026), the web APIs that every JavaScript target Lasm supports
has: Node 24 and 26, Bun, Deno, Cloudflare Workers, the Vercel, Netlify and
Supabase edge functions, and browsers. Status: **current source, not yet
released** (tier 1 of the standard bindings; later tiers are `Lasm.JS.Node`,
`Lasm.JS.Deno`, `Lasm.JS.Bun` and `Lasm.JS.Cloudflare`, one surface per platform).

```lean
import Lasm.JS.Web
open Lasm.JS Lasm.JS.Web

def main : IO Unit := do
  let digest ← ((← (← crypto).subtle).digest (.domString "SHA-256") "abc".toUTF8).block
  IO.println s!"{digest.size} bytes"
  let url ← URL.new "/b?x=1" (some "https://example.com/a/")
  IO.println (← url.href)                                 -- https://example.com/a/b?x=1
  let res ← (fetch (.usvString "https://example.com")).block
  IO.println s!"{← res.status} {(← (← res.headers).get "content-type").getD ""}"
```

They are **generated, not written by hand**, from the WebIDL of the
specifications, so names, argument order and shapes are the standards' own;
only Lean typing is added. Programs that need an npm package keep writing their
own `@[js]` bindings (above). In a browser, `import Lasm.JS.Web.Browser` adds
the DOM, the HTML elements, the window, user-interface events, canvas 2D and
WebSocket ([The browser tier](#the-browser-tier-lasmjswebbrowser)), which
replace the hand-written `Lasm.Web`.

### What is covered

One module per spec area; `import Lasm.JS.Web` imports all of them, and a program
may import only the ones it uses (`import Lasm.JS.Web.Fetch`), which links less.

| Module | Interfaces and globals | Spec |
| --- | --- | --- |
| `Lasm.JS.Web.Dom` | `EventTarget`, `Event`, `CustomEvent`, `AbortController`, `AbortSignal`, `DOMException` | DOM, Web IDL |
| `Lasm.JS.Web.Messaging` | `MessageChannel`, `MessagePort`, `MessageEvent`, `ErrorEvent`, `PromiseRejectionEvent` | HTML |
| `Lasm.JS.Web.Streams` | `ReadableStream` and its readers, controllers and BYOB request, `WritableStream` and its writer and controller, `TransformStream` and its controller, `ByteLengthQueuingStrategy`, `CountQueuingStrategy` | Streams |
| `Lasm.JS.Web.File` | `Blob`, `File` | File API |
| `Lasm.JS.Web.Encoding` | `TextEncoder`, `TextDecoder`, `TextEncoderStream`, `TextDecoderStream` | Encoding |
| `Lasm.JS.Web.Compression` | `CompressionStream`, `DecompressionStream` | Compression |
| `Lasm.JS.Web.Url` | `URL`, `URLSearchParams`, `URLPattern` | URL, URL Pattern |
| `Lasm.JS.Web.Fetch` | `Headers`, `Request`, `Response`, `FormData`; `fetch` | Fetch, XMLHttpRequest |
| `Lasm.JS.Web.Crypto` | `Crypto`, `CryptoKey`, `SubtleCrypto` and every algorithm dictionary; `crypto` | Web Cryptography |
| `Lasm.JS.Web.Performance` | `Performance`; `performance` | High Resolution Time |
| `Lasm.JS.Web.Timers` | `setTimeout`, `clearTimeout`, `setInterval`, `clearInterval`, `queueMicrotask` | HTML |
| `Lasm.JS.Web.Global` | `atob`, `btoa`, `structuredClone`, `reportError`, `navigator.userAgent` | HTML |
| `Lasm.JS.Web.Console` | the `console` namespace | Console |
| `Lasm.JS.Web.Wasm` | the `WebAssembly` namespace and its `Module`, `Instance`, `Memory`, `Table`, `Global`, `Tag`, `Exception`, `CompileError`, `LinkError`, `RuntimeError` | WebAssembly JS and Web APIs |

Every member of these interfaces in the listed specs is generated, including
partials from those specs (`URL.createObjectURL` from the File API) and members
the specs added recently (`Blob.textStream`, `Response.textStream`). The
Minimum Common API does not promise every member everywhere:
**test a member on your target**; the CI run below records which members each
runtime lacks. Not generated: `globalThis` and `self` (use `Lasm.JS.global`),
and the global `onerror`, `onunhandledrejection` and `onrejectionhandled`
handlers (the global object is an `EventTarget` only in browsers).

### Where each member exists (measured)

The conformance run (below) also looks up every generated member on each
runtime. On 2026-11-09 (`web-bindings.yml` run 42586336122: Node 26.13.0 and
24.22.2, Bun 1.4.4, Deno 2.9.6, workerd from wrangler 4.152.0, Chromium of
Playwright 1.63.0) every interface, global and namespace member existed
everywhere except these. "Not on the prototype" can also mean the runtime
defines the attribute on each instance instead (workerd does for `CryptoKey`,
`DOMException.code`, `MessageEvent` and `Request`; those calls work there).

| Member | Missing, or not on the prototype |
| --- | --- |
| `PromiseRejectionEvent` | Node 26 and 24, Bun (workerd's cannot be constructed) |
| `ErrorEvent` | Node 24 |
| `reportError` | Node 26 and 24 |
| `Navigator` (the interface; `navigator.userAgent` works) | Bun |
| `ReadableStream.from` | Chromium |
| `Request.textStream`, `Response.textStream` | Node 24, Workers |
| `Blob.textStream` | Bun, Workers |
| `WebAssembly.Memory` `toFixedLengthBuffer`, `toResizableBuffer` | Node 24 |
| `WebAssembly.compileStreaming`, `instantiateStreaming` | Workers |
| `Request` `duplex`, `isHistoryNavigation`, `isReloadNavigation` | Bun, Deno, Workers |
| `Request.destination` | Deno, Workers |
| `Request.keepalive`, `Performance.now` (on the prototype) | Bun |
| `Event.initEvent`, `CustomEvent.initCustomEvent`, `MessageEvent.initMessageEvent` (legacy) | Deno, Workers; `initCustomEvent` also Node |
| `MessageChannel` `port1`, `port2` (on the prototype) | Node, Workers |

Workers also forbid compiling WebAssembly at run time and do not implement
`URL.createObjectURL`. The runtimes' own deviations from the specs that the
checks found are listed, with reasons, in
[`test/fixtures/js-web/known.json`](../test/fixtures/js-web/known.json)
(Deno's, Bun's and Chromium's URL parsers on some WPT cases, Bun's header order
and content types, workerd's urlencoded form decoding).

### Cost

- **Wasm size: nothing for what is not called.** The same program through
  `Lasm.JS.Web` (all of it imported) and through `Lasm.JS` alone: 684,604 and
  739,253 bytes of Wasm on Node, 554,125 and 554,601 on the edge runtime
  (`--target deno`); the linker drops unused bindings.
- **Build time: about 3 to 8 seconds more** for a new project with warm tools
  (Lean loads and the link sees 16 more modules): Node 12.4 → 15.6 s and
  19.2 → 26.4 s, the edge runtime 8.6 → 12.9 s and 14.0 → 22.4 s on two CI
  runs. Importing only the modules a program uses (`Lasm.JS.Web.Url`) costs less.
- **Package size:** the compiled library (`library/prebuilt`) grows from 41.0
  to 60.9 MB (14.3 MB of `.olean` files, 5.3 MB of generated C), 4.4 MB
  compressed: about 5 % of the installed `@lasm/cli` (430 MB for 0.5.1). First builds copy it as
  before; nothing is compiled on the user's machine.
  The browser tier (below) adds 20.1 MB more (61.0 → 81.1 MB: 13.9 MB of
  `.olean` files, 5.6 MB of generated C, 4.4 MB compressed with gzip), most of
  it `Lasm.JS.Web.Html` (7.0 MB `.olean`, 3.2 MB C).

### How a WebIDL declaration becomes Lean

| WebIDL | Lean |
| --- | --- |
| `interface I` | `structure I where val : Value`, a handle to the JavaScript object (`ToJS`, `FromJS`, `Nonempty`). In a namespace: `WebAssembly.Module`. |
| `interface I : P` | `structure I extends P`: `P`'s functions apply to an `I` (`signal.addEventListener …` on an `AbortSignal`), and `Coe I P` passes an `I` where a `P` is expected (an `HTMLInputElement` to `appendChild`'s `Node`). The other way, a handle of a more specific interface is made from the same object: `({ val := e.val } : HTMLInputElement)`, unchecked (like a TypeScript cast). |
| `constructor(…)` | `I.new … : IO I`. Not for `[HTMLConstructor]` (HTML elements: their constructor builds only custom elements): use `document.createElement`. |
| `attribute T a` | `I.a (self) : IO T`; unless `readonly`, also `I.setA (self) (value : T) : IO Unit`. A `Promise` attribute (`reader.closed`) is `Async T`. |
| operation `R op(…)` | `I.op (self) … : IO R`; `static` ones take no `self` (`URL.canParse`). A static operation that shares its name with an instance one gets the prefix `static`: `Response.staticJson` (`Response.json(data)`) beside `response.json`. |
| `Promise<T>` result | `Async T` (awaited without holding a Lean thread; `.block` from `IO`) |
| overloads | the first in IDL order keeps the name; each other adds `With` and its first argument that differs by name: `FormData.append` (string) and `FormData.appendWithBlobValue`, `URLPattern.new` and `URLPattern.newWithOptions`, `WebAssembly.instantiate` and `WebAssembly.instantiateWithModuleObject` |
| `optional T x` | `(x : Option T := none)`; `none` passes nothing (`undefined`), so the spec's default applies. `optional any x` is `(x : Data := .undefined)`. |
| `T... xs` (variadic) | `(xs : Array T := #[])` |
| `T?` (nullable) | `Option T`; `none` is `null` (or `undefined`). A nullable result that is a `Value` (`getContext`'s `RenderingContext?`) is requested as data, so that `null` is `none`: a reference-mode result would be a reference to `null` (`Support.optionalValue`). |
| `DOMString`, `USVString`, `ByteString`, `CSSOMString` | `String` |
| `boolean`; `byte`, `short`, `long`, `long long`, `bigint`; `octet`, `unsigned …`; `float`, `double` (also `unrestricted`) | `Bool`; `Int`; `Nat`; `Float` |
| `BufferSource`, `ArrayBufferView`, typed arrays, `ArrayBuffer` | `ByteArray` (a copy; see limits). A union of typed arrays (`ImageDataArray`) too. A result that may be a typed array other than `Uint8Array` (`ImageData.data`, a `Uint8ClampedArray`) is copied as its bytes with up to four more host calls; an argument of such a type (`new ImageData(data, …)`'s `Uint8ClampedArray`) is made from the bytes in JavaScript, three more host calls. |
| `sequence<T>`, `FrozenArray<T>` | `Array T` |
| `record<K, V>` | `Record V` (`⟨#[("name", v), …]⟩`, `Lasm.JS.Web.Record`) |
| `any`, `object` | `Data` |
| `undefined` result | `Unit` |
| `dictionary D` | `structure D`, members that are not `required` are `Option`s defaulting to `none`, which leaves them out; inherited members are flattened in |
| `enum E` | `inductive E`, one constructor per value in lowerCamelCase: `"no-cors"` is `.noCors`, `""` is `.empty` |
| `typedef (A or B) U`, or an inline union | `inductive U` with one constructor per member type, named after the type: `BodyInit.usvString`, `.blob`, `.readableStream`, `.bufferSource`. Inline unions are named after their members: `AddEventListenerOptionsOrBoolean`. Read back from JavaScript (a result) when the members are told apart by their JavaScript kind (string, number, boolean, bytes, array, plain object, other object): `FormData.get` gives `.usvString` or `.file`, `generateKey` `.cryptoKey` or `.cryptoKeyPair`. Otherwise a result union is a `Value` when every member is an interface, generated or not (`ReadableStream.getReader`, `HTMLCanvasElement.getContext`: wrap it, `{ val := v : ReadableStreamDefaultReader }`), and `Data` else. Each member type that no other member shares coerces to the union (`Coe String BodyInit`): `fetch "https://example.com"`, `element.setAttribute "title" "x"` (a `(TrustedHTML or … or DOMString)`). |
| `callback`, `callback interface` | a handle `structure C where val : Value` made from a Lean function by `C.ofFn` (asynchronous, `… → Async R`: returns a promise at once, the Lean code runs as a task) or `C.ofSyncFn` (synchronous, `… → IO R`: JavaScript waits for the result). The same handle can be added and removed (`removeEventListener`). `Function` is `JSFunction` (`Array Data → Async Data`), so that it does not hide `Lasm.JS.Function`. |
| `iterable<K, V>` | `entries`, `keys` and `values`, collected into arrays (`headers.entries : IO (Array (String × String))`) |
| `iterable<V>` | `values`, collected into an array (`nodeList.values : IO (Array Node)`) |
| unnamed `getter`, `setter`, `deleter` (`DOMStringMap`'s properties, a `Window`'s named elements) | not generated (no method to call; `Storage.getItem` and other named ones are) |
| `stringifier` | `I.toString` |
| `const T C = v` | `def I.C : T := v` (`DOMException.ABORT_ERR`) |
| a type outside tier 1 (`WindowProxy`, `HTMLFormElement`, `TrustedScript`) | `Value` in arguments, `Data` in results |

Choose `ofFn` or `ofSyncFn` by what the caller does with the callback: a
listener that calls `preventDefault`, a queuing strategy's `size` and any
callback whose result JavaScript uses at once must be synchronous (`ofSyncFn`);
a stream's `pull`, `write` or `transform` (which return a promise) and timer
callbacks that wait for more JavaScript should be asynchronous (`ofFn`). The
rules for each are those of `Lasm.JS.Function.ofFn` and `ofSyncFn`
([Callbacks](#callbacks-lean-functions-called-by-javascript)).

```lean
-- A stream from a Lean source, through a Lean transform
let start ← UnderlyingSourceStartCallback.ofSyncFn fun c => do
  let ctl : ReadableStreamDefaultController := { val := c }   -- the controller union is a Value
  ctl.enqueue (.string "hello"); ctl.close; return .undefined
let upper ← TransformerTransformCallback.ofFn fun chunk c =>
  c.enqueue (.string (match chunk with | .string t => t.toUpper | _ => ""))
let source ← ReadableStream.new (toJS ({ start := some start } : UnderlyingSource))
let ts ← TransformStream.new (toJS ({ transform := some upper } : Transformer))
let out ← source.pipeThrough { readable := ← ts.readable, writable := ← ts.writable }
-- HMAC-SHA-256
let s ← (← crypto).subtle
let key ← s.importKey .raw (.bufferSource secret) (.object (toJS ({ name := "HMAC", hash := .domString "SHA-256" } : HmacImportParams))) false #[.sign]
let mac ← s.sign (.domString "HMAC") key message
```

Arguments the specs type `object` (a stream's underlying source, Web Crypto's
algorithm parameters) are `Data`: write the dictionary the spec's prose names
(`UnderlyingSource`, `HmacImportParams`, …; all are generated) and pass it with
`toJS`.

### Limits of the mapping (exact)

- **Bytes are copies.** A `ByteArray` argument reaches JavaScript as a new
  `Uint8Array`, and a result is copied back. Writes into an argument are not
  seen by Lean: `TextEncoder.encodeInto` returns `{read, written}` but its
  destination is a copy; `crypto.getRandomValues` and BYOB reads return the
  filled bytes, so use the result. `WebAssembly.Memory.buffer` is a snapshot.
- **`ArrayBuffer` results cost one more host call** (copied through
  `new Uint8Array(buffer)`): `digest`, `sign`, `encrypt`, `arrayBuffer()`.
  `bytes()` returns a `Uint8Array` and needs none.
- **Nullable optional members are collapsed:** `BodyInit? body` in a dictionary
  is `Option BodyInit`, so an explicit `null` cannot be passed (`none` leaves the
  member out, which the specs treat alike in every tier-1 dictionary but
  `RequestInit.signal`, where `null` detaches a signal copied from the input).
- **Strings are Unicode scalar values.** A Lean `String` cannot hold a lone
  surrogate; JavaScript strings containing one arrive with U+FFFD in its place.
- **Enums follow the current spec.** An enum lists the values of the pinned
  WebIDL (`CompressionFormat.brotli`, `KeyUsage.encapsulateKey`); a runtime
  that does not know a value rejects it, and a value the pinned WebIDL lacks
  fails to decode.
- **Some results take one more host call.** An interface result is read as a
  reference (Bun returns `navigator` as a plain object, which would otherwise be
  copied), at no extra cost; a dictionary result that holds a `record` is copied
  through `structuredClone` first (`URLPattern.exec`: Node's `groups` objects
  are not plain).
- **Timers return numbers.** `setTimeout` and `setInterval` return the timer's
  number (`Number(timeout)` on Node and Bun, whose timers are objects), one more
  host call; `clearTimeout` takes it on every target.
- **Not generated:** async iteration (`for await` over a `ReadableStream`: use a
  reader) and `forEach` of iterables (use `entries`).
- **No build-time binding check.** Unlike `@[js]` bindings, the standard
  bindings are not checked by `lasm build` against the build machine's Node:
  the deployment's runtime is what counts (a browser, a Worker). A member the
  runtime lacks fails when called, with an error naming it (`Lasm.JS binding
  Lasm.JS.Web.URLPattern.new (globalThis URLPattern): …` or `… has no method
  "textStream"`).

### How they are generated

[`scripts/bindings/generate-web.mjs`](../scripts/bindings/generate-web.mjs)
reads the WebIDL of the pinned `@webref/idl` (w3c/webref's curated IDL, parsed
with `webidl2`; both development dependencies, never installed by users) for the
list in [`scripts/bindings/web-tier1.mjs`](../scripts/bindings/web-tier1.mjs) and
writes `library/Lasm/JS/Web/*.lean` (marked generated) and `Lasm/JS/Web.lean`
(the same run writes Lasm.JS.Node, below).
The generated calls are built on Lasm.JS core: `Lasm.JS.Binding.invoke` for
constructors, static operations and globals (resolved from `globalThis` once
and cached by the host), `Value.callMethod`, `get` and `set` for members, and a
few hand-written helpers in `library/Lasm/JS/Web/Support.lean`. To update:
bump `@webref/idl` in `package.json`, run the generator, regenerate
`library/prebuilt` (`library-prebuilt.yml`), and commit.
[`web-bindings.yml`](../.github/workflows/web-bindings.yml) fails when the
committed files differ from the generator's output.

**Tests.** [`test/fixtures/js-web`](../test/fixtures/js-web) is one program of
property checks over WPT's URL parser data (`urltestdata.json`) and
`application/x-www-form-urlencoded` cases, Lean's UTF-8 encoder and validator
as the oracle of `TextEncoder`/`TextDecoder`, WPT's invalid UTF-8 sequences,
published Web Crypto vectors (FIPS 180, RFC 4231, the GCM spec, RFC 3602,
RFC 6070, RFC 5869) and generated inputs (round trips of base64, structured
cloning, compression, AES-GCM, ECDSA and query strings). `web-bindings.yml`
builds it with a packed candidate for Node 26 and 24, Bun, Deno, Workers
(workerd, local) and headless Chromium and runs it on each
([TESTING.md](TESTING.md#standard-bindings)).

### The browser tier: `Lasm.JS.Web.Browser`

In a browser (`lasm build --target browser`, [BROWSER.md](BROWSER.md)),
`import Lasm.JS.Web.Browser` adds the web APIs of a page to tier 1, generated
the same way from the same pinned `@webref/idl`
([`scripts/bindings/web-browser.mjs`](../scripts/bindings/web-browser.mjs)).
Status: **current source, not yet released**.

```lean
import Lasm.JS.Web.Browser
open Lasm.JS Lasm.JS.Web

def main : IO Unit := do
  let doc ← document
  let some body ← doc.body | return
  let button ← doc.createElement "button"
  button.setTextContent (some "0")
  button.setAttribute "aria-label" "count"            -- a String coerces to the Trusted Types union
  let clicks ← IO.mkRef 0
  -- A synchronous listener (ofSyncFn), so it may call preventDefault.
  button.addEventListener "click" (some (← EventListener.ofSyncFn fun e => do
    let m : MouseEvent := { val := e.val }               -- the event a click listener gets
    clicks.modify (· + 1)
    button.setTextContent (some s!"{← clicks.get} ({← m.clientX}, {← m.clientY})")))
  discard <| body.appendChild button                     -- an Element is a Node (Coe)
  let input : HTMLInputElement := { val := (← doc.createElement "input").val }
  input.setValue "typed"
  (← localStorage).setItem "last" (← input.value)
  let canvas : HTMLCanvasElement := { val := (← doc.createElement "canvas").val }
  let some c ← canvas.getContext "2d" | return
  let ctx : CanvasRenderingContext2D := { val := c }
  ctx.setFillStyle "rebeccapurple"
  ctx.fillRect 0 0 10 10
```

| Module | Interfaces and globals | Spec |
| --- | --- | --- |
| `Lasm.JS.Web.Geometry` | `DOMRectReadOnly`, `DOMRect`, `DOMRectList` | Geometry Interfaces |
| `Lasm.JS.Web.Css` | `CSSStyleDeclaration`, `CSSStyleProperties`, `MediaQueryList`, `MediaQueryListEvent` | CSSOM, CSSOM View |
| `Lasm.JS.Web.Html` | the tree: `Node`, `Document`, `DocumentType`, `DocumentFragment`, `ShadowRoot`, `Element`, `Attr`, `NamedNodeMap`, `CharacterData`, `Text`, `Comment`, `NodeList`, `HTMLCollection`, `DOMTokenList`, `DOMStringMap`, `MutationObserver`, `MutationRecord`; the elements: `HTMLElement`, `HTMLAnchorElement`, `HTMLButtonElement`, `HTMLDialogElement`, `HTMLDivElement`, `HTMLFormElement`, `HTMLHeadElement`, `HTMLImageElement`, `HTMLInputElement`, `HTMLLabelElement`, `HTMLOptionElement`, `HTMLSelectElement`, `HTMLTemplateElement`, `HTMLTextAreaElement`, `HTMLFormControlsCollection`, `HTMLOptionsCollection`, `RadioNodeList`, `ValidityState`, `FileList`; the window: `Window`, `Location`, `History`, `Storage`; the globals `window`, `document`, `location`, `history`, `localStorage`, `sessionStorage`, `requestAnimationFrame`, `cancelAnimationFrame`, `getComputedStyle`, `matchMedia` | DOM, HTML, CSSOM View, File API |
| `Lasm.JS.Web.UiEvents` | `UIEvent`, `MouseEvent`, `WheelEvent`, `KeyboardEvent`, `InputEvent`, `FocusEvent`, `CompositionEvent`, `PointerEvent`, `SubmitEvent`, `HashChangeEvent`, `PopStateEvent`, `StorageEvent` | UI Events, Pointer Events, CSSOM View, HTML |
| `Lasm.JS.Web.Canvas` | `HTMLCanvasElement`, `CanvasRenderingContext2D`, `CanvasGradient`, `CanvasPattern`, `Path2D`, `TextMetrics`, `ImageData` | HTML |
| `Lasm.JS.Web.WebSocket` | `WebSocket`, `CloseEvent` | WebSockets |

**Why this layout.** The document tree, the HTML elements and the window
name each other (`Document.body` is an `HTMLElement`, `Node.ownerDocument` a
`Document`, `Window.document` a `Document`, `Document.defaultView` a `Window`),
so they are one module, `Html`; the areas around it that only point into it
are their own modules, imported alone when that is all a program uses
(`import Lasm.JS.Web.WebSocket` on any target that has WebSocket). Tier 1 is
never changed by this tier: a browser interface a tier-1 member names stays
`Value` or `Data` there (`FormData.new` takes the form as a `Value`:
`FormData.new (some form.val)`), so `import Lasm.JS.Web` on a server loads
nothing of the DOM (`test/web-bindings.test.mjs` checks that no tier-1 module
imports a browser one).

**What differs from tier 1.**

- Members are those exposed to `Window` (tier 1 takes those exposed to workers),
  with the partials of the specs read (`Element.getBoundingClientRect` and
  `MouseEvent.offsetX` from CSSOM View, `Window.getComputedStyle` from CSSOM).
- Event handler IDL attributes (`onclick`, `onmessage`) are not generated:
  `addEventListener` does the same and can be removed.
- `Window` does not repeat tier 1's globals (`setTimeout`, `fetch`, `crypto`).
  The common `Window` members are also globals (`document`, not
  `(← window).document`), as they are in JavaScript.
- `WindowProxy` is `Window`.
- `scroll`, `scrollTo`, `scrollBy` and `scrollIntoView` (of `Element` and
  `Window`) are `Async Unit`: CSSOM View now types them as returning
  `Promise<ScrollResult>`, but shipping browsers return `undefined`; an
  `Async Unit` awaits either (`scripts/bindings/web-browser.mjs`,
  `undefinedPromises`).
- HTML elements have no `new` (their `[HTMLConstructor]` only builds custom
  elements); create them with `document.createElement` and make the handle
  of the element's interface from it, as above. The cast is not checked.
- Listeners and other callbacks act on the page directly, with nothing removed
  for you: remove what an app adds (`removeEventListener`,
  `cancelAnimationFrame`, `WebSocket.close`) when it no longer needs it, in a
  mounted app in `Lasm.UI.Mount.onUnmount` ([BROWSER.md](BROWSER.md)). The
  mount glue (`Mount.root Element`, flags, ports) is `Lasm.UI.Mount`.
- They replace the hand-written `Lasm.Web` (removed 2026-11-10);
  [release/0.7.0-notes.md](release/0.7.0-notes.md) maps each of its functions.

**Cost** (`web-bindings.yml --sizes`, run of 2026-11-10 on PR #193: the same
program through `Lasm.JS` alone, `Lasm.JS.Web`, and `Lasm.JS.Web.Browser`).
Wasm: nothing for what is not called: 463,710, 463,167 and 463,167 bytes for
the browser; 560,999, 560,456 and 560,456 for the edge runtime; 739,755,
685,060 and 685,520 for Node. Build time of a new project with warm tools: the
browser tier's imports add about 7 seconds (browser 11.9 → 18.2 → 25.1 s, edge
10.9 → 17.6 → 24.3 s, Node 15.6 → 20.5 → 26.4 s); a program that imports only
the modules it uses pays less. The compiled library grows by 20.1 MB (see
[Cost](#cost)).

**Where each member exists (measured).** The platform suite's availability
probe looked up every generated member on 2026-11-10 (`browser.yml` run
42847975929: Chromium 153, Firefox 155, WebKit 26.6 of Playwright 1.63.0). All
interfaces and globals exist everywhere except `CSSStyleProperties` in Chromium
(its style objects are `CSSStyleDeclaration`s; the generated functions work on
them). `Window`'s attributes and operations are properties of the global object
itself, not of `Window.prototype`, so the probe lists them all (they work).
Missing in all three, because the pinned specs are ahead of the engines: the
HTML insertion methods `appendHTML`, `prependHTML`, `beforeHTML`, `afterHTML`,
`replaceWithHTML` and their `…Unsafe` forms, `getBoxQuads` and the
`convert…FromNode` methods, `HTMLElement.scrollParent`, `Window.fetchLater`;
some members are missing in one or two engines (Chromium 8, Firefox 13, WebKit
28: for example `moveBefore`, `setHTML`, `customElementRegistry`,
`ImageData.pixelFormat`, `WheelEvent.momentum`; the full lists are each
engine's `bindingsMissing` in the run's `browser-results-*` artifacts). Test a
member on the engines you target.

**Tests.** [`test/browser/platform/Bindings.lean`](../test/browser/platform/Bindings.lean)
is part of the platform suite that `browser.yml` runs on Chromium, Firefox and
WebKit: property checks with their Lean propositions in comments, over
generated inputs against Lean models (the children of a node against a list
under random inserts, removals and replacements; attributes and
`classList` against association lists; `localStorage` and `sessionStorage`
against a map; `Text.length` against Lean's UTF-16 count; HTML's text
serialization; value sanitization of inputs and text areas; event init
dictionaries read back; dispatch, bubbling and cancelling; canvas pixels
after `fillRect` and `putImageData`, `isPointInPath` against a rectangle,
the ignored values of `lineWidth` and `globalAlpha`; a WebSocket echo of text
and binary frames), and an availability probe that records the generated
members each engine lacks.

## Standard bindings for Node: `Lasm.JS.Node`

`import Lasm.JS.Node` gives typed bindings of Node's server-essential modules
that the web APIs do not cover, as documented for **Node.js 24.22.2** (Node 24
LTS, the oldest Node Lasm supports). Status: **current source, not yet
released** (tier 2 of the standard bindings, first part).

```lean
import Lasm.JS.Node
open Lasm.JS Lasm.JS.Web Lasm.JS.Node

def run : Async Unit := do
  let file ← path.join #[← os.tmpdir, "hello.txt"]
  fsPromises.writeFile file "hi"                       -- a String coerces to the path and data unions
  match ← fsPromises.readFile file (some "utf8") with
  | .domString text => IO.println text                        -- hi
  | .uint8Array _ => pure ()
  let key ← crypto.scrypt "password" "salt" 32
  IO.println (← Buffer.toString key (some "hex"))
  let out ← child_process.execFile "git" (some #["--version"])
  IO.println (match out.stdout with | .domString s => s | _ => "")

def main : IO Unit := run.block
```

Names are Node's own, as its docs write them: `fsPromises.readFile`,
`path.join`, `os.cpus`, `process.cwd`, `crypto.createHash`,
`child_process.spawn`, `buffer.isUtf8`, `Buffer.from`; classes are handle
types (`FileHandle`, `fs.Stats`, `fs.Dirent`, `Hash`, `Hmac`, `ChildProcess`,
`EventEmitter`, `stream.Readable`, `stream.Writable`), and options objects are
structures (`fsPromises.ReadFileOptions`, `child_process.SpawnOptions`).

### What is covered

| Module | Members | Node module |
| --- | --- | --- |
| `Lasm.JS.Node.Fs` | every stable member of the promises API (`fsPromises.*`: `readFile`, `writeFile`, `appendFile`, `readdir`, `mkdir`, `mkdtemp`, `stat`, `lstat`, `rm`, `rename`, `copyFile`, `cp`, `symlink`, `readlink`, `realpath`, `open`, …), `FileHandle`, `fs.Stats`, `fs.Dirent` | `node:fs/promises`, `node:fs` |
| `Lasm.JS.Node.Path` | every member of `path` | `node:path` |
| `Lasm.JS.Node.Os` | every member of `os` | `node:os` |
| `Lasm.JS.Node.Process` | `process.argv`, `env`, `exit`, `exitCode`, `cwd`, `chdir`, `platform`, `arch`, `pid`, `ppid`, `version`, `versions`, `execPath`, `execArgv`, `title`, `uptime`, `memoryUsage`, `kill` | `node:process` |
| `Lasm.JS.Node.Buffer` | `Buffer.from` (string and encoding), `alloc`, `byteLength`, `compare`, `concat`, `isEncoding`, and as functions of bytes `Buffer.toString`, `equals`, `compare`; `buffer.isUtf8`, `isAscii`, `transcode`, `kMaxLength` | `node:buffer` |
| `Lasm.JS.Node.Crypto` | `crypto.createHash`, `createHmac`, `hash`, `randomBytes`, `randomInt`, `randomUUID`, `timingSafeEqual`, `getHashes`, and `scrypt`, `pbkdf2`, `hkdf` as `Async` (through `util.promisify`); `Hash`, `Hmac` | `node:crypto` |
| `Lasm.JS.Node.ChildProcess` | `child_process.spawn`, `child_process.execFile` (as `Async`, its documented promisified form: `{stdout, stderr}`), `ChildProcess` (`pid`, `exitCode`, `signalCode`, `killed`, `kill`, `stdin`, `stdout`, `stderr`) | `node:child_process` |
| `Lasm.JS.Node.Events` | `EventEmitter` (`on`, `once`, `off`, `emit`, `listenerCount`, `eventNames`, `removeAllListeners`), `events.once` (`Async`) | `node:events` |
| `Lasm.JS.Node.Stream` | `stream.Readable.toWeb`, `fromWeb`, `stream.Writable.toWeb`, `fromWeb`: a child's `stdout` becomes a web `ReadableStream` (read with Lasm.JS.Web) | `node:stream` |

Not generated, with the reason (each listed in
[`node-tier2.mjs`](../scripts/bindings/node-tier2.mjs)):

- **`node:http`, `node:net`: not generated.** A server is a request listener
  called for each request with an `IncomingMessage` (a Node `Readable`) and a
  `ServerResponse` (a `Writable`) whose methods are called many times per
  request, and the docs type the listener's arguments, the events and their
  arguments in prose. Servers on JavaScript targets are Lasm.JS.Web
  `Request → Async Response` handlers; on Node they are served through an npm
  adapter bound with `@[js]` (`@hono/node-server`), and outbound HTTP is
  Lasm.JS.Web's `fetch` on every target.
- `fsPromises.glob`, `watch` and `opendir` (async iteration, as in Lasm.JS.Web),
  `statfs`, `mkdtempDisposable` (explicit resource management); `FileHandle`'s
  `createReadStream`, `createWriteStream` (Node stream classes: use
  `readableWebStream`), `readLines`, `readv` and `writev` (in-place buffers).
- `path.posix`, `path.win32` (the same functions again).
- Members marked Experimental, Deprecated or Legacy in the docs
  (`filehandle.pull`, `fsPromises.lchmod`, `buffer.atob`), and the callback and
  synchronous forms of what has a promise form (`fs.readFile`, `fs.readFileSync`).

### How Node's docs become Lean

Node's docs are lowered to WebIDL, then generated by the same generator and
rules as Lasm.JS.Web ([above](#how-a-webidl-declaration-becomes-lean)):

| Node's docs | WebIDL | Lean |
| --- | --- | --- |
| `fsPromises.readFile(path[, options])` | `readFile(… path, optional … options)` in `namespace fsPromises` | `fsPromises.readFile (path) (options := none)` |
| `{string}`, `{integer}`, `{number}`, `{boolean}`, `{bigint}` | `DOMString`, `long long`, `double`, `boolean`, `bigint` | `String`, `Int`, `Float`, `Bool`, `Int` |
| `{Buffer}`, `{TypedArray}`, `{DataView}`, `{Uint8Array}` | `Uint8Array` | `ByteArray` (a copy) |
| `{string\|Buffer\|URL}` | `(DOMString or Uint8Array or URL)` | `DOMStringOrUint8ArrayOrURL`: `.domString "a.txt"`, `.uint8Array b`, `.url u`, or the value itself through tier 1's `Coe` instances (`fsPromises.readFile "a.txt"`) |
| `{null}`, `{undefined}` in a type | nullable | `Option` |
| `{Object}` with documented members (`options`) | `dictionary` | a structure, named after the method and parameter (`fsPromises.ReadFileOptions`) |
| `{Object}` without them, and classes outside this cut (`KeyObject`, `Date`, `fs.ReadStream`) | `object` | `Data` |
| `{Function}` | `Function` | `JSFunction` (`ofFn`, `ofSyncFn`) |
| a class (`Class: FileHandle`) | `interface` | a handle type; `Extends: EventEmitter` gives `structure ChildProcess extends EventEmitter` |
| `Returns: {Promise} Fulfills with undefined upon success.` | `Promise<undefined>` | `Async Unit` |
| `Fulfills with the {fs.Stats} object` | `Promise<fs.Stats>` | `Async fs.Stats` |
| an optional trailing `callback` (`randomBytes(size[, callback])`) | left out | the synchronous form: `crypto.randomBytes 32 : IO ByteArray` |
| a required trailing `callback(err, value)` (`scrypt(…, callback)`) | `Promise<value>` | `Async ByteArray`, called through `util.promisify` |
| `[min, ]max` (an optional parameter before a required one) | two overloads | `crypto.randomInt max`, `crypto.randomIntWithMin min max` |
| `buf.toString([encoding])` (a Buffer method) | an operation on bytes | `Buffer.toString (bytes) (encoding := none)`, called with the bytes as `this` |
| a `Buffer` result | `Uint8Array` | `ByteArray` |

Where the docs give a type only in prose, [`node-tier2.mjs`](../scripts/bindings/node-tier2.mjs)
states it in WebIDL and quotes the sentence (the lowering fails if the sentence
is gone): `readFile` fulfills with `(Uint8Array or DOMString)` ("Fulfills with
the contents of the file", a string when an encoding is given), `mkdir` with
`DOMString?`, `events.once` with the event's arguments, `execFile`'s promise with
`{stdout, stderr}`, `process.env` is a `record<DOMString, DOMString>`. One
correction states what Node returns against its docs: `os.uptime` is `Float`
(Node returns fractional seconds; the docs say `{integer}`).

The rest of the mapping is tier 1's (`generate-web.mjs` generates both tiers; Lasm.JS.Web's output is unchanged), including its limits (bytes are copies,
nullable optional members are collapsed). Two rules are Node's: an argument named
like a namespace gets a `_` (`path.basename (path_ : String)`, so that `path`
still names the namespace), and a union of a namespaced type lives in that
namespace (`fsPromises.ReadFileOptionsOrDOMString`). A `record` result (`process.env`) is read through `Object.entries`, one more host call: Node's `process.env` is not a plain object and Deno's is a Proxy. Overloads that would get
one name each add all their argument names (`FileHandle.readWithOptions`,
`FileHandle.readWithBufferOptions`).

### Where it runs

On Node 24 and 26 everything is native. On Bun and Deno, Lasm's builds load
`node:` modules through `process.getBuiltinModule`, so the members their Node
compatibility implements work there; the conformance run records which checks
each fails ([`test/fixtures/js-node/known.json`](../test/fixtures/js-node/known.json))
and which generated members each lacks. Workers, the other edge platforms and
browsers are not targets of `Lasm.JS.Node`.

On 2026-11-10 (`web-bindings.yml` run 42846454581: Node 26.13.0 and 24.22.2,
Bun 1.4.4, Deno 2.9.6) every generated function, class and static member exists
on all four (the availability probe found none missing), and all 5,535 checks
passed on Node 26, Node 24 and Bun; on Deno all but one, `filehandle.write(string)`,
which gives the bytes written where the docs give the string.

### Cost

- **Wasm size: nothing for what is not called.** The same program (a path join
  and a SHA-256 digest) through `Lasm.JS.Node` and through `Lasm.JS` alone:
  691,534 and 738,526 bytes of Wasm on Node, 567,224 and 559,715 on the edge
  runtime (`--target deno`).
- **Build time: about 4 to 9 seconds more** for a new project with warm tools:
  Node 13.0 → 16.8 s and 18.2 → 24.6 s, the edge runtime 8.8 → 13.9 s and
  12.9 → 21.7 s (two CI runs).
- **Package size:** the compiled library (`library/prebuilt`) grows from 61.0
  to 70.8 MB (7.0 MB of `.olean` files), 2.2 MB compressed. Nothing is
  compiled on the user's machine.

### Pinned version and drift

The docs are fetched from `nodejs.org/dist/v24.22.2/docs/api/<module>.json` and
checked against SHA-256 hashes in
[`node-api.lock.json`](../scripts/bindings/node-api.lock.json);
[`node-api.mjs`](../scripts/bindings/node-api.mjs) writes the lowering
([`node.idl`](../scripts/bindings/node.idl), committed) and
[`node-api-26.json`](../scripts/bindings/node-api-26.json), the lowered members
that differ in the Node 26.13.0 docs. On 2026-11-10 those are: `buffer.isLatin1`
(Node 26 only), `fsPromises.rmdir`'s `recursive` option (removed in 26), and
`emitter.eventNames()`, typed `{string[]|symbol[]}` in 24 and `{string[]}` in
26 (the bindings follow 24). `web-bindings.yml` fails when `node.idl`, the
comparison or the generated modules differ from what the pinned docs give. To
move to newer docs: change `version` (and `compareVersion`) in `node-tier2.mjs`,
run `node scripts/bindings/node-api.mjs --update-lock`, then
`node scripts/bindings/generate-web.mjs`, regenerate `library/prebuilt`
(`library-prebuilt.yml`) and review the diff of `node.idl`.

**Tests.** [`test/fixtures/js-node`](../test/fixtures/js-node) is one program of
property checks: Lean as the oracle of hex, base64 (RFC 4648), Latin-1, UTF-8
encoding and validation (`ByteArray.validateUTF8` for `buffer.isUtf8`), byte
order (`Buffer.compare`) and path operations over generated inputs; published
vectors (FIPS 180, RFC 1321, RFC 4231, RFC 6070, RFC 7914, RFC 5869); files in a
fresh temporary directory; child processes, events and stream conversion.
`web-bindings.yml` runs it on Node 26 and 24, Bun and Deno.

## Servers on JavaScript runtimes: `Lasm.JS.Deno`, `Lasm.JS.Bun` and Node

A server on a JavaScript runtime is one Lean function from a web `Request` to a
`Response` (Lasm.JS.Web's types), handed to the runtime's own server:

| Runtime | Server | Lean |
| --- | --- | --- |
| Cloudflare Workers and the edge platforms | `export default {fetch}` | `Lasm.JS.exportDefault` |
| Deno | `Deno.serve` | `import Lasm.JS.Deno` (generated, below) |
| Bun | `Bun.serve` | `import Lasm.JS.Bun` (generated, below) |
| Node | none of its own takes a `Request`: an npm adapter, such as `@hono/node-server`'s `serve({fetch})` | an `@[js]` binding to the package ([Node](#node-an-npm-adapter)) |

Outbound HTTP is Lasm.JS.Web's `fetch` everywhere. Status: **current source, not
yet released** (tier 2 of the standard bindings, second part).

```lean
import Lasm.JS.Deno
open Lasm.JS Lasm.JS.Web

def handle (request : Request) : Async Response := do
  Response.new (some (.usvString s!"{← request.method} {← request.url}")) none

def main : IO Unit := do
  let handler ← Deno.ServeHandler.ofFn fun request _info => handle request
  let server ← Deno.serveWithOptions { port := some 8000, hostname := some "127.0.0.1" } handler
  server.finished.block       -- main returns (and Deno exits) when the server closes
```

```lean
import Lasm.JS.Bun
open Lasm.JS Lasm.JS.Web

def main : IO Unit := do
  let stopping : IO.Promise Unit ← IO.Promise.new
  let fetch ← Bun.ServeOptionsFetch.ofFn fun request _server => do
    if (← (← URL.new (← request.url)).pathname) == "/stop" then stopping.resolve ()
    handle request
  let server ← Bun.serve { fetch, port := some (3000 : Nat), hostname := some "127.0.0.1" }
  IO.println s!"listening on {← (← server.url).href}"
  (Std.Async.await stopping : Async Unit).block   -- serve until a request for /stop
  server.stop.block                               -- then let open requests finish
```

On Deno and Bun, `main` must not return while the server runs: Lasm's Deno and
Bun entries exit with `main`'s result when it returns (unless the program
published a handler with `exportDefault`, which those entries serve on `PORT`
themselves). Wait for `server.finished` (Deno), or for a promise your shutdown
path resolves.

### What is covered

| Module | Members | Declared in |
| --- | --- | --- |
| `Lasm.JS.Deno.Serve` | `Deno.serve(handler)` as `serve`; `Deno.serve(options, handler)` as `serveWithOptions` (`ServeTcpOptions`: `port`, `hostname`, `signal`, `onListen`, `onError`, `reusePort`, `tcpBacklog`, `automaticCompression`, `transport`) and, with `cert` and `key`, `serveWithTlsOptions` (`ServeTcpTlsOptions`); `ServeHandler` (`Request → ServeHandlerInfo → Async Response`); `HttpServer` (`finished`, `shutdown`, `addr`, `ref`, `unref`); `ServeHandlerInfo` (`remoteAddr`, `completed`); the structure `NetAddr` (`transport`, `hostname`, `port`) | Deno 2.9.6, `cli/tsc/dts/lib.deno.ns.d.ts`, `lib.deno_net.d.ts` |
| `Lasm.JS.Bun.Serve` | `Bun.serve(options)` as `serve`; `ServeOptions` (`fetch`, `port`, `hostname`, `error`, `idleTimeout`, `maxRequestBodySize`, `reusePort`, `ipv6Only`, `id`); `ServeOptionsFetch` (`Request → Server → Async Response`); `Server` (`stop`, `url`, `port`, `hostname`, `protocol`, `requestIP`, `timeout`, `fetch`, `reload`, `pendingRequests`, `closeIdleConnections`, `ref`, `unref`, `development`, `id`); the structure `SocketAddress` (`address`, `port`, `family`) | Bun 1.4.4, `packages/bun-types/serve.d.ts`, `bun.d.ts` |

`import Lasm.JS.Deno` and `import Lasm.JS.Bun` import their module (and the
Lasm.JS.Web modules it uses: `Dom`, `Fetch`, `Url`).

Not generated, with the reason (each listed in
[`serve-tier2.mjs`](../scripts/bindings/serve-tier2.mjs) and at the top of
[`deno.idl`](../scripts/bindings/deno.idl) and [`bun.idl`](../scripts/bindings/bun.idl)):

- **Experimental or unstable** (the declaration says `@experimental` or
  `UNSTABLE`; never generated): Deno's VSOCK overloads (`ServeVsockOptions`),
  Bun's `http1`, `http2` and `http3` options.
- **Outside the server entry points:** Unix domain sockets (Deno's
  `ServeUnixOptions` overloads, Bun's `unix`); WebSockets (`Server.upgrade`,
  `publish`, `subscriberCount`, `pendingWebSockets`, the `websocket` handlers);
  Bun's `routes` (a Lean handler routes in Lean), `tls` (it takes Bun's file
  objects) and `development` (Bun's dev server for HTML bundles).
- **Another form of a generated operation:** Deno's overloads that take the
  handler inside the options (`ServeInit`), and `[Symbol.asyncDispose]` /
  `[Symbol.dispose]` (`await using`, which Lean does not have: `shutdown`,
  `stop`).
- `ServeDefaultExport` (`export default {fetch}`): Lasm's Deno and Bun entries
  already serve `Lasm.JS.exportDefault`.

### How the declarations become Lean

[`serve-api.mjs`](../scripts/bindings/serve-api.mjs) reads the declaration
files (a small reader of TypeScript's declaration syntax: namespaces,
interfaces, type aliases, function overloads, and the types below) and lowers
what `serve-tier2.mjs` selects to WebIDL; `generate-web.mjs` then generates Lean
with Lasm.JS.Web's rules ([above](#how-a-webidl-declaration-becomes-lean)), as for
Lasm.JS.Node. Every member of a selected declaration and every overload of a
selected function is either lowered or excluded with a reason: the lowering
fails on one that is neither, so a new version's additions get a decision.

| TypeScript | WebIDL | Lean |
| --- | --- | --- |
| an interface of an object the runtime keeps (`HttpServer`, `Server`, `ServeHandlerInfo`) | `interface`, its properties `readonly attribute`s | a handle type; `server.finished : Async Unit`, `server.shutdown : Async Unit` |
| an interface of plain data the runtime hands over (`NetAddr`, `SocketAddress`) | `dictionary` | a structure, copied: `(← server.addr).port : Nat`. Plain objects reach a callback copied, so a handle type could not hold them |
| an interface Lean passes (options) | `dictionary`; a property without `?` is `required` | a structure; `none` leaves a member out |
| a method of an options object (`fetch(req, server)`) | a callback member | `ServeOptionsFetch.ofFn (f : Request → Server → Async Response)` |
| a function type (`type ServeHandler = (request, info) => …`) | `callback` named after the alias, or the member (`ServeOptionsOnError`) | `.ofFn` (asynchronous) and `.ofSyncFn` |
| a `this` parameter | left out | — |
| a callback's parameters | its arity is the JavaScript function's `length` (Lasm.JS's own functions have length 0, and `Deno.serve` calls a handler of length 0 without its request) | `ServeHandler.ofFn` sets it |
| `Response \| Promise<Response>`, `MaybePromise<Response>` | `Promise<Response>` | the handler is `Async`; it returns a promise |
| `void` beside a value in a callback's result (Bun's `error`) | left out | return a `Response` |
| `string`, `boolean`, `number`, `void`, `unknown` | `DOMString`, `boolean`, `double`, `undefined`, `any` | `String`, `Bool`, `Float`, `Unit`, `Data` |
| `number` that the doc comment calls a port, count or size | `unsigned short`, `unsigned long`, `unsigned long long` (quoting the doc comment; the lowering fails if the words go) | `Nat` |
| `T \| undefined`, `T \| null` | `T?` (an optional member drops `undefined`) | `Option T` |
| `"tcp" \| "udp"` | `enum NetAddrTransport` | `inductive NetAddrTransport \| tcp \| udp` |
| `"0.0.0.0" \| "localhost" \| (string & {})` | `DOMString` | `String` |
| `string \| number` (Bun's `port`) | `(DOMString or unsigned short)` | `DOMStringOrUnsignedShort`, or a `String` or `Nat` through its `Coe` instances |
| a generic parameter (`Addr`, `WebSocketData`) | its one instantiation (`Addr` = `NetAddr`; a second fails the lowering) | — |
| `ServeTcpOptions \| (ServeTcpOptions & TlsCertifiedKeyPem)` as a parameter | one overload per alternative; the intersection a dictionary inheriting the first | `serveWithOptions`, `serveWithTlsOptions` |
| overloads of one function | Lasm.JS.Web's overload naming: the first keeps the name, the others add their first differing argument | `serve`, `serveWithOptions`, `serveWithTlsOptions` |

The generated functions look the runtime's global up when called, so a program
that imports `Lasm.JS.Deno` still builds (and runs its other code) on Node. A
hand-written `@[js "globalThis" "Deno.serve"]` binding would not: `lasm build`
checks every `@[js]` export on Node, where `Deno` does not exist.

The functions of the runtime's global object are at the top of the module's
namespace (`Lasm.JS.Deno.serve`, called as `Deno.serve` after `open Lasm.JS`), and
every doc comment quotes the member's TypeScript declaration before its WebIDL.

### Node: an npm adapter

Node has no server that takes a web `Request`, and Lasm adds no API for one:
install an adapter and bind it with `@[js]`. `@hono/node-server` (MIT) is one:
its `serve({fetch, port, hostname}, listening)` calls `fetch` with a `Request`
and sends the `Response` it resolves to.

```sh
npm install @hono/node-server hono    # hono is its peer dependency
```

```lean
import Lasm.JS                -- the @[js] attribute
import Lasm.JS.Web
open Lasm.JS Lasm.JS.Web

/-- `serve(options, listeningListener)` of @hono/node-server; returns the Node server. -/
@[js "@hono/node-server" "serve"] opaque nodeServe : Data → Value → IO Value

def main : IO Unit := do
  let fetch ← Function.ofFn1 handle                     -- Request → Async Response, as above
  let listening ← Function.ofFn fun _ => do IO.println "listening on 3000"; return .undefined
  let _server ← nodeServe (obj [("fetch", toJS fetch), ("port", toJS 3000)]) listening
  waitForever
```

The same `handle` then runs on Node, Deno (`Deno.serve`), Bun (`Bun.serve`) and
Workers (`exportDefault`). A program built for several targets lists the adapter
in `package.json`'s `"lasm": {"edge": {"exclude": ["@hono/node-server"]}}`, so
that the Deno, Bun and edge builds leave it out (as the `hono` template does).

### Where it runs, tests and cost

[`test/fixtures/js-serve`](../test/fixtures/js-serve) is one program run on Node,
Bun and Deno: each serves `App.handle` with its own server (Deno.serve with
options, the defaults and TLS; Bun.serve; @hono/node-server on Node) on
127.0.0.1, and requests it with Lasm.JS.Web's `fetch`. Its properties: an echo of
generated Unicode bodies returns them with their content type; a computed JSON
answer for generated inputs; status codes for unknown paths, bad input and a
throwing handler (the server's error handler, or the runtime's 500); ten
concurrent slow requests finish together (`Async` handlers hold no thread); the
address, `onListen`, `info.remoteAddr`, `info.completed`, `requestIP`,
`pendingRequests`, `server.fetch`, `reload`, the signal, `shutdown` and `stop` do
what their declarations say; and every generated member exists on the live
objects. Then [`test-serve.mjs`](../scripts/bindings/test-serve.mjs) builds
[`Serve.lean`](../test/fixtures/js-serve/Serve.lean) for each runtime, starts it
on a free port, requests it from another process and shuts it down through
`/shutdown` (exit status 0). `web-bindings.yml` runs both.

On 2026-11-10 (`web-bindings.yml` run 42918093803: Node 26.13.0, Bun 1.4.4,
Deno 2.9.6, Linux x64) every check passed on Node (30) and Deno (75), and on Bun
all but one of 51: `server.fetch(request)` calls the handler without its server
argument, which the declaration says it passes
([`known.json`](../test/fixtures/js-serve/known.json)). Every generated member
exists on the live objects of both runtimes. End to end, all 9 checks passed on
each of the three servers.

- **Wasm size: about the same.** A one-route server through `Lasm.JS.Deno` or
  `Lasm.JS.Bun`, against the same server with a hand-written call of
  `Deno.serve` (the Lasm.JS.Web modules they import in both): 722,930 and
  721,381 bytes of Wasm against 763,171 on Node; 601,746 and 600,131 against
  585,764 on the edge runtime (`--target deno`), 2.7% more.
- **Build time: no measurable change** for a new project with warm tools
  (Node 21.1 s for the baseline, 18.2 and 19.8 s; the edge runtime 17.9 s, 16.4
  and 16.7 s).
- **Package size:** the compiled library (`library/prebuilt`) grows by 2.6 MB
  (1.9 MB of `.olean` files), 0.6 MB compressed.

### Pinned versions and drift

The declaration files are fetched from `raw.githubusercontent.com` at the
release tags (`denoland/deno` `v2.9.6`; `oven-sh/bun` `bun-v1.4.4`, whose
`packages/bun-types` files are byte-identical to the npm package `bun-types`
1.4.4) and checked against SHA-256 hashes in
[`serve-api.lock.json`](../scripts/bindings/serve-api.lock.json). They are the
versions of Deno and Bun that CI runs. `web-bindings.yml` fails when
`deno.idl`, `bun.idl` or the generated modules differ from what the pinned files
give. To move to newer versions: change `version` and `tag` in
`serve-tier2.mjs`, run `node scripts/bindings/serve-api.mjs --update-lock`, then
`node scripts/bindings/generate-web.mjs`; decide every new member or overload
the lowering reports, regenerate `library/prebuilt` (`library-prebuilt.yml`) and
review the diff of the IDL files.

## Worked examples (all built and run by CI)

- [examples/js-crud](../examples/js-crud) is one Lean API on **Express**
  (`Express.lean`) and on **Hono** (`Hono.lean`, `@hono/node-server`), with Postgres
  through **pg** and JWT through **jose** (`App.lean`).
  - Routes: `POST /login`, `GET/POST /todos` (Bearer token), `GET /health`.
  - Run it: `npm install`, then `DATABASE_URL=postgres://… npx lasm Express.lean`.
- [examples/js-fetch](../examples/js-fetch) is outbound HTTP with Node's global
  **fetch**: `npx lasm Main.lean -- https://example.com`.
- [test/fixtures/js-interop](../test/fixtures/js-interop) exercises every API, with
  its expected output.

Express handler (from `Express.lean`; the handler is `Async`, so its awaits hold no thread):

```lean
@[js "express" ""] opaque express : IO Value
@[js "express" "json"] opaque jsonBodies : IO Value

  let app ← express
  let _ ← app.callMethod "use" #[toJS (← jsonBodies)]
  let handler ← Function.ofFn fun args => do
    let (.ref req _, .ref res _) := (args[0]!, args[1]!) | throw (IO.userError "unexpected arguments")
    let body ← req.get "body" Data
    let _ ← (← res.callMethod "status" #[toJS 200]).callMethod "json" #[obj [("echo", body)]]
    return .undefined
  let _ ← app.callMethod "use" #[toJS handler]
```

Hono handler (from `Hono.lean`), which returns the `Response` that `c.json` creates
(`callMethodAwait` in it holds no thread while the body is read):

```lean
@[js "hono" "new Hono"] opaque newHono : IO Value
@[js "@hono/node-server" "serve"] opaque serve : Data → Value → IO Value

  let handler ← Function.ofFn fun args => do
    let .ref c _ := args[0]! | throw (IO.userError "unexpected arguments")
    let body ← (← c.get "req").callMethodAwait "json" #[] Data
    c.callMethod "json" #[obj [("echo", body)], toJS 200] Data
  let _ ← app.callMethod "all" #[toJS "*", toJS handler]
```

## Checklist for writing a binding (agents)

1. Find the export in the package's docs or `node_modules/<pkg>/package.json`
   (`main`/`exports`), and whether it is a function, a class (use `"new …"`), the
   module itself (`""`) or a global (`"globalThis"`).
2. Choose Lean argument types with `ToJS`. For option objects use `Data` and `obj […]`.
3. Choose the result type. Use `Value` for objects you will call methods on, and
   `Data` or a `deriving FromJS` structure for plain results. If the function
   returns a promise, end the type in `Async R` (awaited without holding a
   thread; use it in handlers and other `Async` code). If it returns a value at
   once, `IO R`.
4. Write handlers and helpers that wait for JavaScript as `Async` functions
   (`def query … : Async (Array Row)`); call them with `←` from handlers.
5. For methods and properties of returned objects, use `callMethod`,
   `callMethodAwait`, `get` and `set`.
6. Build with `npx lasm build`. The binding check reports wrong exports. A wrong
   result type fails at run time with the binding name, the expected Lean type and
   the value received.

## Limitations (exact)

- **Lean versions and tiers.** Lean 4.35.0 only. Programs importing `Lasm.JS` need
  the extended Lean tier, which Lasm downloads automatically.
- **No editor support yet.** Native Lean (`lake build`, the Lean editor extension)
  does not know `Lasm.JS`, so the editor marks `import Lasm.JS` as unknown. Lasm
  builds and runs these programs normally.
- **Deriving** covers only structures without parameters and enumerations.
- **Synchronous callbacks** block Node's event loop. Inside them, waiting for
  anything that needs Node (a promise, file IO, a task that makes host calls, a
  timer or socket started there) fails at once. On the single-threaded targets,
  waiting for a JavaScript event fails the same way, while waiting for Lean work
  that needs no event works. These waits cannot be made to work
  ([Callbacks](#callbacks-lean-functions-called-by-javascript)).
- **Module loading.** Modules load with `require`: ES modules with top-level await
  cannot be loaded. pnpm/Yarn Plug'n'Play layouts are not supported.
- **Cost per call.** Each call costs about 5 µs when a Lean thread makes calls
  one after another, and 20–30 µs for a lone call or under load (other Lean
  threads calling too). An asynchronous callback round
  trip (JavaScript calls Lean, and Lean awaits the answer) costs about 0.27 ms.
  On the 4-CPU benchmark runner, a Hono server with a Lean handler serves about
  9,700 requests per second and Express about 6,300: 0.18× and 0.12× a plain Node
  `http` server, and 15× and 10× Lasm's `Std.Http` server
  ([BENCHMARKS.md](BENCHMARKS.md); measured before `ofFnReply`). Node's main thread,
  which serves every host call, is the limit; use `ofFnReply` and `getFields`.
  Measurements: [JS_INTEROP.md](JS_INTEROP.md).
- **Lasm only.** Programs that use interop run only under Lasm.
- **No inline JavaScript, no classes defined in Lean.** JavaScript that is not an
  existing export goes in a module of its own (a local `file:` npm package), and a
  class (`extends HTMLElement`, a Durable Object) is written in JavaScript with
  methods that call Lean functions. Options and recommendations:
  [proposals/LASM_JS_GAPS.md](proposals/LASM_JS_GAPS.md).
- **Waiting in `IO` holds a thread.** Lean code that waits for JavaScript in
  `IO` (an `IO R` binding returning a promise, `callAwait` or `Value.await` in
  an `IO` function, `IO.wait`, `IO.sleep`) blocks a Lean worker thread, and
  there is about one per CPU, so at most that many such waits run at once
  (`LEAN_NUM_THREADS` raises it at about 9 MB per worker). Waiting in `Async`
  (handlers, `Async` bindings) holds no thread. CPU-bound Lean work in handlers
  still runs on those workers.
- **Function length.** A JavaScript function made by `Function.ofFn` reports
  `length` 0. APIs that inspect it do not recognize it: Express treats only
  four-parameter middleware as an error handler, so write Express error handlers
  in JavaScript or catch errors inside the Lean handler. An uncaught Lean error
  rejects the handler's promise, which Express 5 and Hono answer with 500.
- **Diagnostics.** `Lasm.JS.stats` returns a JSON string with the live counts:
  `values` (JavaScript values Lean holds), `pendingCalls` (JavaScript calls of
  Lean functions awaiting their reply), `functionsLive` (Lean functions that
  JavaScript has not yet garbage-collected), and totals. The interop soak uses
  them to check for leaks.
