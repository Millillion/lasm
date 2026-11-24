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
| Your own JavaScript file | its path, from this Lean file | its name | `@[js "./ffi/stream.mjs" "writeAndEnd"] opaque writeAndEnd : Value → Data → IO Unit` |

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

### Your own JavaScript files

When the JavaScript you need is not an existing function (an expression such
as `x instanceof Foo`, two calls made in one host call, a comparator), write
it in an ES module file of your project and bind it with a path relative to
the Lean file:

```js
// ffi/stream.mjs, next to Server.lean
export function writeAndEnd(res, body) { res.writeHead(200); res.end(body); }
```

```lean
-- Server.lean
@[js "./ffi/stream.mjs" "writeAndEnd"] opaque writeAndEnd : Value → Data → IO Unit
```

- The path starts with `./` or `../` and names an ES module ending in `.mjs`,
  beside or below the Lean files' source root (the directory of a standalone
  program's main file, or the Lake library's source directory).
- `lasm build` ships the file, and every file it imports by a relative path
  (`import { x } from './lib.mjs'`), with the program on every target: under
  `host/project-modules/` for Node, `lasm/project-modules/` for the edge
  targets, Bun and Deno, and `project-modules/` beside the browser loader. A
  file it imports from npm (`import pg from 'pg'`) is resolved from the
  project's `node_modules` on Node and the edge targets, and needs Vite
  (`@lasm/cli/vite`) in the browser, as npm bindings do.
- The same file named from two Lean files is one module instance.
- The binding check loads the file as it loads npm modules, so a missing file
  or export stops the build. Nothing is evaluated from strings at run time, so
  project files work under Cloudflare Workers and a strict Content-Security-Policy.

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

The check runs on Node. A global that Node lacks (`@[js "globalThis" "Deno.serve"]`,
`@[js "globalThis" "document.title"]`) fails a Node build, and only warns when the
build's target is another runtime (`--target deno`, `bun`, `workers`, `browser`,
…), which brings its own globals.

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
Function.ofFn  (f : Array Data → Async Data) (length := 0) : IO Value      -- JavaScript gets a function returning a Promise
Function.ofFnReply (f : Array Data → Async Function.Reply) (length := 0) : IO Value -- the reply may be a method call the host makes
Function.ofFn1 (f : α → Async β) / Function.ofFn2 (f : α → β → Async γ)   -- typed forms (length 1 and 2)
Function.ofSyncFn (f : Array Data → IO Data) (length := 0) : IO Value      -- synchronous
Function.ofSyncFn2 (f : α → β → IO γ)                                       -- length 2
```

`length` is the JavaScript function's `length`, the number of parameters it
declares. Most callers ignore it; some read it. `Deno.serve` calls a handler
of length 0 without its request, and Express treats a handler of length 4 as
an error handler:

```lean
let onError ← Function.ofFn (length := 4) fun args => do   -- (err, req, res, next)
  discard <| (← decodeAs Value "res" args[2]!).callMethod "status" #[toJS 500]
  return .undefined
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

## JavaScript classes: `Lasm.JS.Class.define`

Some APIs take a class, not a function: `customElements.define`, subclasses
of `Error`, `EventTarget` or Node's streams, frameworks that call `new` on
what you pass. `Lasm.JS.Class.define` (`import Lasm.JS.Class`) makes a real
`class Name extends Base` from Lean, without `eval`, so it works on every
JavaScript target:

```lean
import Lasm.JS.Class
open Lasm.JS

def errorClass : IO Value := do (← global).get "Error"   -- the class itself; a binding would call it

def notFound : IO Value := do
  Class.define {
    name := "NotFound"
    extends? := some (← errorClass)                    -- super(...args) runs first
    constructor := some fun self _ => self.set "status" (404 : Nat)
    methods := #[("describe", .sync fun self _ => do
      return toJS s!"{← self.get "message" String} ({← self.get "status" Nat})")]
    getters := #[("retryable", fun _ => return .bool false)] }
-- In JavaScript: const e = new NotFound("no such page"); e instanceof Error; e.describe()
```

- Each constructor, method and getter is a Lean function of the instance
  (`self`, JavaScript's `this`) and the call's arguments.
- `.sync` methods and getters follow `Function.ofSyncFn`'s rules (JavaScript
  waits for them, and they cannot wait for JavaScript); `.async` methods
  return a promise and follow `Function.ofFn`'s. Choose per method: a DOM
  lifecycle callback or a method whose result is used at once is `.sync`.
- `statics` sets properties of the class itself (`observedAttributes`).
- Each call of a method is a JavaScript → Lean call (about 20 µs on Node).
  Per-instance state lives on the instance (`self.set`), or in Lean keyed by
  a field.
- Classes a platform finds by export name (Cloudflare Durable Objects,
  Workers RPC entrypoints) must exist when the module loads, before Lean
  runs: `define` cannot make those.

## The target a program is built for: `Lasm.target`

`Lasm.target : Lasm.Target` (`import Lasm.Target`) is the `--target` the
program is built for: `.node`, `.lambda`, … `.workers`, `.bun`, `.deno`, …
`.wasi`, `.fastly`, `.wasiHttp`, `.browser`, one constructor per target of
`lasm build --target`, and `Target.name` (or `toString`) gives the CLI's
name (`Target.netlifyEdge.name = "netlify-edge"`). It is part of Lasm's
core, not of Lasm.JS: it works on WASI, wasi-http and Fastly too.

```lean
import Lasm.Target

def main : IO Unit := do
  match Lasm.target with
  | .workers => IO.println "on Cloudflare Workers"
  | t => IO.println s!"built for {t}"
```

- The build stamps it in when it links the program, the same way on every
  target, so it is a plain value, fixed for the whole run.
- `lasm run`, `lasm build` and `lasm dev` without `--target` build for `node`
  (under Bun or Deno, the CLI's default target is that runtime).
- A function platform's build is linked for its platform: `lasm package`
  packages a build for its own target only.
- A program that serves differently per target still uses one entry module per
  serving model ([0.2-4](api/decisions/0.2.md)): the build checks every binding
  a program links against its target, reachable or not.

`waitForever` needs no target: each host decides whether it blocks (Node,
WASI) or returns at once (the edge targets and the browser, whose platform owns
the program's lifetime).

## Errors

- **A JavaScript exception or rejected promise** becomes an `IO.userError` with
  `Name: message`, prefixed by the binding when it came from one:
  `Lasm.JS binding fail (local-lib fail): RangeError: boom`.
- **A Lean error in a callback** rejects the JavaScript promise with
  `new Error(message)`.
- **Released or invalid handles** report `Invalid or released Lasm.JS value handle`.
  This cannot happen through the API: Lean keeps each handle alive while a call uses it.

## Standard bindings: `Lasm.JS.Web`

`Lasm.JS.Web` is the **whole web platform**: every interface, namespace,
dictionary and member of the WebIDL in the pinned `@webref/idl` (w3c/webref's
curated IDL of every web spec). It is generated as it is, with no list of
APIs, from more than 300 specs and about 1,150 interfaces. Status: **released in 0.9.0**
(decision 0.3-1, Jordan, 2026-11-16).

There is **one module per spec**, named from the spec's shortname by the
mechanical rule (UpperCamel):
- `fetch` → `Lasm.JS.Web.Fetch`
- `dom` → `Lasm.JS.Web.Dom`
- `html` → `Lasm.JS.Web.Html`
- `url` → `Lasm.JS.Web.Url`
- `hr-time` → `Lasm.JS.Web.HrTime`
- `IndexedDB` → `Lasm.JS.Web.IndexedDB`
- `webgpu` → `Lasm.JS.Web.Webgpu`

All of them are in the namespace `Lasm.JS.Web`, so a module changes only what
you import, never the names you write. The later tiers are `Lasm.JS.Node`,
`Lasm.JS.Deno`, `Lasm.JS.Bun` and [`Lasm.JS.Cloudflare`](#cloudflare-workers-lasmjscloudflare), one surface per platform.

**Compiled on first import.** A few modules ship compiled (those the
templates and examples use: DOM, HTML, Fetch, URL, WebSockets and what they
import). Every other module ships as source, and the first build that imports
it compiles it once into Lasm's cache: `[lasm] Compiling
Lasm.JS.Web.IndexedDB (first use)…` (decision 0.3-6). In a Lake project,
Lake builds it, in the editor too ([GETTING_STARTED.md](GETTING_STARTED.md#editor),
decision 0.3-7). For that reason there is no umbrella `import Lasm.JS.Web`: it
would compile every spec (0.3-18).

**Forgot an import?** The build says which: a name a generated module defines,
used without its import, gets the import to add under Lean's error (decision 0.3-20):

```
Main.lean:4:12: error: Unknown identifier `fetch`
hint: fetch is defined in Lasm.JS.Web.Fetch; add: import Lasm.JS.Web.Fetch
```

```lean
import Lasm.JS.Web.Fetch
import Lasm.JS.Web.Url
import Lasm.JS.Web.Webcrypto
open Lasm.JS Lasm.JS.Web

def main : IO Unit := do
  let digest ← ((← (← crypto).subtle).digest (.domString "SHA-256") "abc".toUTF8).block
  IO.println s!"{digest.size} bytes"
  let url ← URL.new "/b?x=1" (some "https://example.com/a/")
  IO.println (← url.href)                                 -- https://example.com/a/b?x=1
  let res ← (fetch (.usvString "https://example.com")).block
  IO.println s!"{← res.status} {(← (← res.headers).get "content-type").getD ""}"
```

In a browser, the same bindings give the DOM:

```lean
import Lasm.JS.Web.Dom
import Lasm.JS.Web.Html
import Lasm.UI.Mount
open Lasm.JS Lasm.JS.Web

def main : IO Unit := do
  let doc ← document                                      -- Window's members are globals
  let button ← doc.createElement "button"
  button.setTextContent (some "0")
  button.addEventListener "click" (some (← EventListener.ofSyncFn fun e => do
    if let some m ← MouseEvent.cast? e.val then          -- checked downcast (A12)
      button.setTextContent (some s!"({← m.clientX}, {← m.clientY})")))
  discard <| (← Lasm.UI.Mount.root Element).appendChild button
```

The bindings are **generated, not written by hand**, so names, argument order
and shapes are the standards' own; only Lean typing is added. Programs that
need an npm package keep writing their own `@[js]` bindings (above).

### Where a declaration goes

Each module holds:
- the interfaces and namespaces its spec defines;
- the dictionaries, callbacks and typedef'd unions its spec defines (an enum
  goes to the first module that uses it);
- the members its spec adds to other specs' interfaces, through partials or
  mixins: `Navigator.geolocation` is in `Lasm.JS.Web.Geolocation`, and
  `Element.animate` is in the Web Animations module.

**Each spec's handle types** (`structure Element where val : Value`, with
their instances) and enums are in `Lasm.JS.Web.Types.<Spec>`. A types module
imports only its parents' types modules. The specs name each other's
interfaces everywhere (DOM and HTML, Fetch and Streams), so this keeps each
spec its own module, and a program importing `Lasm.JS.Web.Fetch` builds and
links no HTML.

**Merged modules.** Specs that need each other's dictionaries form one module,
named after them. Today there are two: `WebAnimationsAndWebAnimations2`, and
`SecurePaymentConfirmationAndWebauthn`.

**`Window` is the global object of a page.** Its members, with those of its
mixins (`WindowOrWorkerGlobalScope`'s `fetch`, `setTimeout` and `crypto` among
them), are top-level functions on `globalThis`: `document`, `fetch`,
`setTimeout`, `indexedDB`. They are also methods of a `Window` handle, for
another window (an iframe's `contentWindow`, the result of `open`). The other
global scopes (`DedicatedWorkerGlobalScope`, `ServiceWorkerGlobalScope`) are
interfaces like any other.

**Every member carries its `[Exposed]`** in its doc comment.

**What is not generated** (each item has an API decision):
- a `[HTMLConstructor]` constructor, which only builds a custom element subclass;
- unnamed getters and setters, which have no method to call;
- async iteration and `forEach` (use a reader, or `entries`);
- an iterable of `ArrayBuffer`s (`MediaKeyStatusMap`'s key IDs), whose entries
  would each need their own copy (0.3-15).

A dictionary that contains itself (Service Workers' `RouterCondition`) has
`Data` at the member that closes the cycle (0.3-14).

### Availability per target: checked by `lasm build`

A web API exists on some targets and not on others: `document` exists in
browsers, `indexedDB` in browsers and Deno. **`lasm build --target X` refuses
a program that calls a `Lasm.JS.Web` function that X does not provide**
(decision 0.3-10):

```
error: This program uses web APIs that --target workers does not provide:
  Lasm.JS.Web.document (api.Window.document) is not available on --target workers (Cloudflare Workers (runtime-compat data of 2025-12-01)). It is available on browsers (Chromium 153, Firefox 155, Safari 26.6).
```

**The data is used as it is:**
- [`@mdn/browser-compat-data`](https://github.com/mdn/browser-compat-data)
  (pinned in `package.json`) for:
  - browsers (Chromium 153, Firefox 155 and Safari 26.6, all three);
  - Node 24;
  - Deno 2.9, which also covers `deno-deploy` and `supabase-edge`;
- [unjs/runtime-compat](https://github.com/unjs/runtime-compat)'s data (pinned
  by commit in
  [`scripts/bindings/web-availability.mjs`](../scripts/bindings/web-availability.mjs))
  for Bun, Cloudflare Workers (workerd), Vercel Edge (edge-light) and Netlify
  Edge.

**Function platforms** (`lambda`, `vercel`, `netlify`, …) run on Node.

**Feature detection: the availability guard** (decision 0.3-11). Where a
target lacks an API, use its guard, `X?`: it is JavaScript's `'gpu' in
navigator`, checked when the program runs, and it gives the typed value where
the platform has the API and `none` where it does not:

```lean
import Lasm.JS.Web.Html
import Lasm.JS.Web.Webgpu
open Lasm.JS Lasm.JS.Web

def describeGpu : IO String := do
  if let some gpu ← (← navigator).gpu? then
    return s!"WebGPU, preferred format {(← gpu.getPreferredCanvasFormat).val}"
  else
    return "no WebGPU: drawing with the 2D canvas"
```

- **Which bindings have one.** Every binding that some supported runtime lacks
  and that a program reaches on its own: a global (`fetchLater?`), a namespace
  member, a static member (`URL.parse?`), a constructor (`URLPattern.new?`),
  or an instance member that some runtimes of its interface lack
  (`Navigator.gpu?`). The members of an interface only a guard gives (GPU's,
  GPUAdapter's, …) need none: the program has such a value only where the
  guard found the API.
- **What `lasm build --target` allows.** A guard is never refused. Neither is a
  member of an interface the target lacks that the program gets only through a
  guard: `gpu.getPreferredCanvasFormat` above builds for `--target node`, and
  runs the `else` branch there. The same calls without the guard are refused.
- **Checks:** the guard runs `Reflect.has` on the object (`'gpu' in
  navigator`), or on each step of a global's path (`'parse' in URL`).

**How an API is looked up.** The most specific path the data lists decides
(`api.Element.append`, then `api.Element`). A path the data does not list is
treated as unavailable.

**Wrong data** is corrected by a reviewed entry in
[`scripts/bindings/availability-overrides.json`](../scripts/bindings/availability-overrides.json).
Each entry has its reason, the link of its upstream report, and an API
decision. There is no flag to skip the check.

**How it works.** Every generated binding is `@[macro_inline]` data, with no
code of its own (decision 0.3-12). At each call site it expands to the generic
Lasm.JS call, wrapped in `Internal.api "<its full Lean name>"`, which also
names the binding in any error it raises. So the program's generated C holds
that name as a string literal.
[`src/web-availability.mjs`](../src/web-availability.mjs) finds those names
and looks each up in `library/Lasm/JS/Web/availability.json`, which the
generator writes from the data. A guard's name ends in `?`
(`"Lasm.JS.Web.Navigator.gpu?"`), and its binding records are renamed too, so
the C of a guarded call never holds the unguarded name. The table also records
the interface each binding returns and the interfaces each runtime lacks, from
which the check finds what only a guard gives.

### How a WebIDL declaration becomes Lean

The rules shared by every generated tier (overload names, callback type names,
numbers, checked downcasts) and the reviewed override table are in
[BINDING_RULES.md](BINDING_RULES.md).

| WebIDL | Lean |
| --- | --- |
| `interface I` | `structure I where val : Value`, a handle to the JavaScript object (`ToJS`, `FromJS`, `Nonempty`). In a namespace: `WebAssembly.Module`. |
| `interface I : P` | `structure I extends P`: `P`'s functions apply to an `I` (`signal.addEventListener …` on an `AbortSignal`), and `Coe I P` passes an `I` where a `P` is expected (an `HTMLInputElement` to `appendChild`'s `Node`). The other way, a handle of a more specific interface is checked with `I.cast? (v : Value) : IO (Option I)` (`instanceof`; `HTMLInputElement.cast? e.val`), or made unchecked from the same object, `({ val := e.val } : HTMLInputElement)` (like a TypeScript cast). |
| `constructor(…)` | `I.new … : IO I`. Not for `[HTMLConstructor]` (HTML elements: their constructor builds only custom elements): use `document.createElement`. |
| `attribute T a` | `I.a (self) : IO T`; unless `readonly`, also `I.setA (self) (value : T) : IO Unit`. A `Promise` attribute (`reader.closed`) is `Async T`. |
| operation `R op(…)` | `I.op (self) … : IO R`; `static` ones take no `self` (`URL.canParse`). A static operation that shares its name with an instance one gets the prefix `static`: `Response.staticJson` (`Response.json(data)`) beside `response.json`. |
| `Promise<T>` result | `Async T` (awaited without holding a Lean thread; `.block` from `IO`) |
| overloads | the first in IDL order keeps the name; each other adds `With` and its first argument that differs by name: `URLPattern.new` and `URLPattern.newWithOptions`, `WebAssembly.instantiate` and `WebAssembly.instantiateWithModuleObject`. A name that reads badly is replaced through the reviewed override table: `FormData.append` (string) and `FormData.appendBlob` ([BINDING_RULES.md](BINDING_RULES.md#a9-overload-names)) |
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
| `enum E` | `structure E where val : String`, with a match pattern per value in lowerCamelCase: `"no-cors"` is `.noCors`, `""` is `.empty` (0.3-17) |
| `typedef (A or B) U`, or an inline union | `inductive U` with one constructor per member type, named after the type: `BodyInit.usvString`, `.blob`, `.readableStream`, `.bufferSource`. Inline unions are named after their members: `AddEventListenerOptionsOrBoolean`. Read back from JavaScript (a result) when the members are told apart by their JavaScript kind (string, number, boolean, bytes, array, plain object, other object): `FormData.get` gives `.usvString` or `.file`, `generateKey` `.cryptoKey` or `.cryptoKeyPair`. Otherwise a result union is a `Value` when every member is an interface, generated or not (`ReadableStream.getReader`, `HTMLCanvasElement.getContext`: wrap it, `{ val := v : ReadableStreamDefaultReader }`), and `Data` else. Each member type that no other member shares coerces to the union (`Coe String BodyInit`): `fetch "https://example.com"`, `element.setAttribute "title" "x"` (a `(TrustedHTML or … or DOMString)`). |
| `callback`, `callback interface` | a handle `structure C where val : Value` made from a Lean function by `C.ofFn` (asynchronous, `… → Async R`: returns a promise at once, the Lean code runs as a task) or `C.ofSyncFn` (synchronous, `… → IO R`: JavaScript waits for the result). The same handle can be added and removed (`removeEventListener`). `Function` is `JSFunction` (`Array Data → Async Data`), so that it does not hide `Lasm.JS.Function`. |
| `iterable<K, V>` | `entries`, `keys` and `values`, collected into arrays (`headers.entries : IO (Array (String × String))`) |
| `iterable<V>` | `values`, collected into an array (`nodeList.values : IO (Array Node)`) |
| unnamed `getter`, `setter`, `deleter` (`DOMStringMap`'s properties, a `Window`'s named elements) | not generated (no method to call; `Storage.getItem` and other named ones are) |
| `stringifier` | `I.toString` |
| `const T C = v` | `def I.C : T := v` (`DOMException.ABORT_ERR`) |
| a type no spec of `@webref/idl` defines | `Value` in arguments, `Data` in results |

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
  `Uint8Array`, and a result is copied back, so writes into an argument are
  not seen by Lean:
  - `TextEncoder.encodeInto` returns `{read, written}`, but its destination is
    a copy;
  - `crypto.getRandomValues` and BYOB reads return the filled bytes, so use the
    result;
  - `WebAssembly.Memory.buffer` is a snapshot.
- **`ArrayBuffer` results cost one more host call** (copied through
  `new Uint8Array(buffer)`): `digest`, `sign`, `encrypt`, `arrayBuffer()`.
  `bytes()` returns a `Uint8Array` and needs none.
- **Nullable optional members are collapsed.** `BodyInit? body` in a
  dictionary is `Option BodyInit`, so an explicit `null` cannot be passed:
  `none` leaves the member out.
- **Strings are Unicode scalar values.** A Lean `String` cannot hold a lone
  surrogate, so a JavaScript string containing one arrives with U+FFFD in its
  place.
- **Enums are strings with named values** (decision 0.3-17):
  `structure RequestMode where val : String`, with one match pattern per value
  of the pinned WebIDL (`.noCors`). A `match` needs a final `| _ =>`, and a
  value the pinned WebIDL lacks still reads (`⟨"new-value"⟩`). A runtime that
  does not know a value rejects it.
- **Some results take one more host call:**
  - an interface result is read as a reference, at no extra cost (Bun returns
    `navigator` as a plain object, which would otherwise be copied);
  - a dictionary result that holds a `record` is copied through
    `structuredClone` first (`URLPattern.exec`: Node's `groups` objects are not
    plain).
- **Timers return numbers.** `setTimeout` and `setInterval` return the timer's
  number, at the cost of one more host call (`Number(timeout)` on Node and Bun,
  whose timers are objects). `clearTimeout` takes the number on every target.
- **The engines, not the specs, for a few results.** `scroll`, `scrollTo`,
  `scrollBy` and `scrollIntoView` (of `Element` and `Window`) are `Async Unit`.
  CSSOM View now types them as returning `Promise<ScrollResult>`, but the
  engines return `undefined`; an `Async Unit` awaits either (0.3-13).
- **HTML elements have no `new`.** Their `[HTMLConstructor]` builds only custom
  elements. Create them with `document.createElement`, then make the handle:
  checked with `HTMLInputElement.cast? e.val`, or unchecked with
  `{ val := e.val }`.
- **Listeners act on the page directly.** Remove what an app adds when it no
  longer needs it. In a mounted app, pass `Lasm.UI.Mount.signal` (an
  `AbortSignal` that aborts on unmount) where the platform takes a signal, or
  use `Mount.onUnmount` ([BROWSER.md](BROWSER.md)).

### How they are generated

[`scripts/bindings/generate-web.mjs`](../scripts/bindings/generate-web.mjs)
reads every spec of the pinned `@webref/idl`, parsed with `webidl2`. Both are
development dependencies that users never install. It writes:
- `library/Lasm/JS/Web/*.lean`, one module per spec;
- `library/Lasm/JS/Web/Types/*.lean`, the handle types and enums of each spec;
- `modules.json`, the import order;
- `availability.json`.

The same run writes Lasm.JS.Node, Deno and Bun, below.
[`scripts/bindings/web-rules.mjs`](../scripts/bindings/web-rules.mjs) holds
only what the IDL cannot say:
- WebAssembly's error classes, which the JS API spec leaves to prose;
- `WindowProxy` is `Window`;
- the scroll promises above;
- the exclusions.

The rules every generator shares are in [BINDING_RULES.md](BINDING_RULES.md).

The generated calls are built on Lasm.JS core:
- `Lasm.JS.Binding.invoke`, for constructors, static operations and globals;
- `Value.callMethod`, `get` and `set`, for members;
- a few hand-written helpers in `library/Lasm/JS/Web/Support.lean`.

**To update:**
1. Bump `@webref/idl` (or `@mdn/browser-compat-data`, or the runtime-compat
   commit) in `package.json`.
2. Run the generator.
3. Regenerate `library/prebuilt` (`library-prebuilt.yml`).
4. Commit.

[`web-bindings.yml`](../.github/workflows/web-bindings.yml) fails when the
committed files differ from the generator's output.

**Tests.**
- [`test/fixtures/js-web`](../test/fixtures/js-web) is one program of property
  checks:
  - WPT's URL parser data and `application/x-www-form-urlencoded` cases;
  - Lean's UTF-8 encoder and validator, as the oracle of `TextEncoder` and
    `TextDecoder`;
  - WPT's invalid UTF-8 sequences;
  - published Web Crypto vectors;
  - generated inputs.

  `web-bindings.yml` builds and runs it on Node 26 and 24, Bun, Deno, Workers
  (workerd, local) and headless Chromium.
- [`test/browser/platform`](../test/browser/platform) runs the DOM, HTML,
  CSSOM, canvas, WebSocket, Range, `DOMParser`/`XMLSerializer` and
  `CSS.escape` checks against Lean models on Chromium, Firefox and WebKit
  ([TESTING.md](TESTING.md#standard-bindings)).
- Both probe every generated member on their runtimes and report what is
  missing.

### Cost

COST_PLACEHOLDER

## Standard bindings for Node: `Lasm.JS.Node`

`Lasm.JS.Node` gives typed bindings of **every Node core module**, one Lean module each
(`import Lasm.JS.Node.Fs`, `import Lasm.JS.Node.Http`), generated
from Node's own documentation as it is (Jordan, 2026-11-16): the 45 documentation
files of Node's modules at **Node.js 24.22.2** (Node 24 LTS, the oldest Node Lasm
supports), plus what only the **Node.js 26.13.0** docs document, marked "Node.js 26
and later". Web standard APIs that Node also provides (`URL`, `EventTarget`, `Blob`,
`MessagePort`, `TextEncoder`, `crypto.subtle`, `performance.now`, …) are
`Lasm.JS.Web`'s and are not generated again. Status: **current source, not yet
released**.

```lean
import Lasm.JS.Node.Fs
import Lasm.JS.Node.Path
import Lasm.JS.Node.Os
import Lasm.JS.Node.Crypto
import Lasm.JS.Node.Buffer
import Lasm.JS.Node.ChildProcess
import Lasm.JS.Node.Zlib     -- outside the compiled core set: compiled on first import
open Lasm.JS Lasm.JS.Web Lasm.JS.Node

def run : Async Unit := do
  let file ← path.join #[← os.tmpdir, "hello.txt"]
  fsPromises.writeFile file "hi"                       -- a String coerces to the path and data unions
  match ← fsPromises.readFile file (some "utf8") with
  | .domString text => IO.println text                        -- hi
  | .uint8Array _ => pure ()
  let gz ← zlib.gzipSync (.domString "hi")                     -- the synchronous forms are generated too
  IO.println (← zlib.gunzip (.uint8Array gz)).size              -- and the callback forms as Async
  let key ← crypto.scrypt "password" "salt" 32
  IO.println (← Buffer.toString key (some "hex"))
  let out ← child_process.execFile "git" (some #["--version"])
  IO.println (match out.stdout with | .domString s => s | _ => "")

def main : IO Unit := run.block
```

Names are Node's own, as its docs write them: `fsPromises.readFile`,
`fs.readFileSync`, `path.join`, `os.cpus`, `process.cwd`, `crypto.createHash`,
`child_process.spawn`, `zlib.gzip`, `dns.lookup`, `dnsPromises.resolve4`,
`worker_threads.isMainThread`, `util.format`, `v8.getHeapStatistics`; classes are
handle types (`FileHandle`, `fs.Stats`, `Hash`, `ChildProcess`, `EventEmitter`,
`stream.Readable`, `net.Socket`, `http.Server`, `tls.TLSSocket`, `Http2Session`,
`DatabaseSync`, `vm.Script`, `WASI`), and options objects are structures
(`fsPromises.ReadFileOptions`, `child_process.SpawnOptions`). Documented events are
typed listeners: `server.onRequest`, `socket.onData`, `child.onceExit`
([Events](#events-typed-listeners)). A complete program:
[examples/node-core](../examples/node-core).

### What is covered

One Lean module per documentation file, each with everything that file documents.

**Imports.** A program imports each module it uses (`import Lasm.JS.Node.Fs`,
`import Lasm.JS.Node.Http`); there is no umbrella module, as for every generated host
(0.4-39). The core set ships compiled: `Events`, `Stream`, `Buffer`, `Path`, `Os`,
`Process`, `Fs`, `Crypto`, `ChildProcess`, and the modules they use (`AsyncHooks`,
`Net`, `Readline`). Every other module is compiled into Lasm's tool cache the first time
a program imports it ([lazy library](HOW_LASM_WORKS.md)). Measured on 2026-11-16 (Linux x64, one
core, `lean -c`, with the `@[macro_inline]` emitter of 0.3), the first import costs 0.3
to 3.5 s per module: `Http2` 3.5 s, `Http` 2.6 s, `Test` 2.3 s, the others under 1.5 s;
all 33 lazy modules together 26.1 s (16.3 MB of `.olean`, 3.5 MB of C). Later builds
reuse the compiled modules. The compiled core set is 14 modules (with the hand-written
`Support` and `Serve`): 17.4 s, 13.7 MB of `.olean` and 2.8 MB of C in `library/prebuilt`.
[`node-modules.json`](../scripts/bindings/node-modules.json) lists them in import
order and [`node-surface.json`](../scripts/bindings/node-surface.json) every
generated class, namespace and member.

| Lean module | Node module | Lean module | Node module |
| --- | --- | --- | --- |
| `Lasm.JS.Node.Assert` | `node:assert` | `Lasm.JS.Node.PerfHooks` | `node:perf_hooks` (Node's own: histograms, `monitorEventLoopDelay`, `performance.timerify`, …) |
| `Lasm.JS.Node.AsyncHooks`, `.AsyncContext` | `node:async_hooks` | `Lasm.JS.Node.Process` | `node:process` |
| `Lasm.JS.Node.Buffer` | `node:buffer` | `Lasm.JS.Node.Punycode` | `node:punycode` (Deprecated) |
| `Lasm.JS.Node.ChildProcess` | `node:child_process` | `Lasm.JS.Node.Querystring` | `node:querystring` |
| `Lasm.JS.Node.Cluster` | `node:cluster` | `Lasm.JS.Node.Readline` | `node:readline`, `node:readline/promises` |
| `Lasm.JS.Node.Console` | `node:console` (the `Console` class) | `Lasm.JS.Node.Repl` | `node:repl` |
| `Lasm.JS.Node.Crypto` | `node:crypto` | `Lasm.JS.Node.Sea` | `node:sea` |
| `Lasm.JS.Node.Dgram` | `node:dgram` | `Lasm.JS.Node.Sqlite` | `node:sqlite` |
| `Lasm.JS.Node.DiagnosticsChannel` | `node:diagnostics_channel` | `Lasm.JS.Node.Stream` | `node:stream` |
| `Lasm.JS.Node.Dns` | `node:dns`, `node:dns/promises` | `Lasm.JS.Node.StreamIter` | `node:stream/iter` (Experimental) |
| `Lasm.JS.Node.Domain` | `node:domain` (Deprecated) | `Lasm.JS.Node.StringDecoder` | `node:string_decoder` |
| `Lasm.JS.Node.Events` | `node:events` | `Lasm.JS.Node.Test` | `node:test` |
| `Lasm.JS.Node.Fs` | `node:fs`, `node:fs/promises` (the promises, callback and synchronous APIs) | `Lasm.JS.Node.Timers` | `node:timers/promises`, `Timeout`, `Immediate` |
| `Lasm.JS.Node.Http` | `node:http` | `Lasm.JS.Node.Tls` | `node:tls` |
| `Lasm.JS.Node.Http2` | `node:http2` | `Lasm.JS.Node.TraceEvents` | `node:trace_events` |
| `Lasm.JS.Node.Https` | `node:https` | `Lasm.JS.Node.Tty` | `node:tty` |
| `Lasm.JS.Node.Inspector` | `node:inspector` | `Lasm.JS.Node.Url` | `node:url` (the legacy API and Node's helpers: `fileURLToPath`, `pathToFileURL`, …) |
| `Lasm.JS.Node.Module` | `node:module` | `Lasm.JS.Node.Util` | `node:util` |
| `Lasm.JS.Node.Net` | `node:net` | `Lasm.JS.Node.V8` | `node:v8` |
| `Lasm.JS.Node.Os` | `node:os` | `Lasm.JS.Node.Vm` | `node:vm` |
| `Lasm.JS.Node.Path` | `node:path` | `Lasm.JS.Node.Wasi` | `node:wasi` |
| `Lasm.JS.Node.WorkerThreads` | `node:worker_threads` | `Lasm.JS.Node.Zlib` | `node:zlib` |

**How the containers are found.** Every `Class:` section of a documentation file is a
class (`Class: fs.Stats` is `fs.Stats`), with the members its docs give it, wherever
they are documented (`stream.Readable` for consumers and for implementers is one
class). Every documented member owned by a module-level name is in that name's
namespace (`fs.readFile` in `fs`, `fsPromises.open` in `fsPromises`, `dnsPromises.lookup`
in `dnsPromises`); a namespace that is an export of its module is called through it
(`performance.timerify` of `node:perf_hooks`, `fs.realpath.native`). An object the docs
describe without a `Class:` heading (`tracing.enable()` of a `Tracing` object) is a class
named in `node-tier2.mjs` `instances`. Two classes of the same name in different modules
are named with their module (`cluster.Worker`, `worker_threads.Worker`).

**Web standards are Lasm.JS.Web's.** A class whose name is a web standard interface
of the pinned `@webref/idl` (`URL`, `URLSearchParams`, `URLPattern`, `EventTarget`,
`Event`, `CustomEvent`, `Blob`, `File`, `WebSocket`, `MessageChannel`,
`MessagePort`, `BroadcastChannel`, `Lock`, `LockManager`, `TextEncoder`,
`TextDecoder`, `PerformanceEntry`, `PerformanceMark`, `PerformanceMeasure`,
`PerformanceObserver`, `PerformanceObserverEntryList`, `PerformanceResourceTiming`),
a web standard namespace (`console`), and the members of Node's objects that a web
interface defines (`crypto.randomUUID`, `crypto.getRandomValues`, `crypto.subtle` of
`Crypto`; `performance.now`, `mark`, `measure`, … of `Performance`) are not generated
again: use `Lasm.JS.Web`'s. Node's own classes that share a web name are listed in
`node-tier2.mjs` `notWeb` (`cluster.Worker`, `worker_threads.Worker`, `vm.Module`).
Node classes that extend a web class (`NodeEventTarget`, `PerformanceNodeTiming`)
are generated without that parent.

**Stability.** Every member is generated whatever its stability in the docs; the doc
comment of a member marked Deprecated (0), Experimental (1) or Legacy (3) says so
(`**Experimental** in the Node.js 24.22.2 docs`). Experimental members can need a
Node flag or be missing.

**Node 24 and Node 26.** The bindings are the Node 24.22.2 docs; a member, class or
namespace that only the Node 26.13.0 docs document is added, with `**Node.js 26 and
later**` in its doc comment (`buffer.isLatin1`, `Buffer.stringLength`,
`fs.openAsBlobSync`, …). Where the two document the same member differently, the
bindings follow Node 24; [`node-api-26.json`](../scripts/bindings/node-api-26.json)
lists every difference.

**What the docs give only in prose.** A type the docs write only in prose (215
members on 2026-11-16) is `any` (`Data` in Lean) unless `node-tier2.mjs` `prose`
states it, quoting the sentence (the lowering fails if the sentence is gone); a type
name that no generated class or web standard defines is `any` too.
[`node-coverage.json`](../scripts/bindings/node-coverage.json) lists all of them,
with the web classes left to Lasm.JS.Web, the parents dropped and the name clashes.

**Not generated** (each with its reason, `node-coverage.json` `excluded` and
`computedKeys`; docs/api/decisions/0.4.md 0.4-38):

- `Buffer`'s instance properties (`buf.length`, `buf.buffer`, `buf.byteOffset`,
  `buf.parent`, `buf.poolSize`) and the methods that write into the buffer in place
  and do not return it (`buf.write`, `buf.writeUInt32BE` and the other `write…`
  methods): a `Buffer` is a `ByteArray` in Lean, a copy, so the property describes a
  view of memory Lean does not have and the write would be lost (`ByteArray.size`
  is the length; `Buffer.fromWithString`, `Buffer.alloc`, `buf.fill` work).
- Members with a computed key (`buf[index]`, `[Symbol.asyncDispose]()`,
  `[Symbol.asyncIterator]()`): not named members (use `Value.get` with the key).
- `inspector.Session`'s `'<inspector-protocol-method>'` event: a placeholder for every
  protocol event (use `session.onInspectorNotification`).
- `options.detached` and `options.stdio` of `child_process.md`: two of
  `child_process.spawn`'s options, documented under their own headings; they are
  members of `child_process.SpawnOptions`.

### How Node's docs become Lean

Node's docs are lowered to WebIDL, then generated by the same generator and
rules as Lasm.JS.Web ([above](#how-a-webidl-declaration-becomes-lean)):

| Node's docs | WebIDL | Lean |
| --- | --- | --- |
| `fsPromises.readFile(path[, options])` | `readFile(… path, optional … options)` in `namespace fsPromises` | `fsPromises.readFile (path) (options := none)` |
| `{string}`, `{integer}`, `{number}`, `{boolean}`, `{bigint}` | `DOMString`, `long long`, `double`, `boolean`, `bigint` | `String`, `Int`, `Float`, `Bool`, `Int`; a `{number}` named in the integer table (`keylen`, `fd`, `pid`, …) is `Nat` or `Int` ([BINDING_RULES.md](BINDING_RULES.md#a11-numbers)) |
| `{Buffer}`, `{TypedArray}`, `{DataView}`, `{Uint8Array}` | `Uint8Array` | `ByteArray` (a copy) |
| `{string\|Buffer\|URL}` | `(DOMString or Uint8Array or URL)` | `DOMStringOrUint8ArrayOrURL`: `.domString "a.txt"`, `.uint8Array b`, `.url u`, or the value itself through Lasm.JS.Web's `Coe` instances (`fsPromises.readFile "a.txt"`) |
| `{null}`, `{undefined}` in a type | nullable | `Option` |
| `{Object}` with documented members (`options`) | `dictionary` | a structure, named after the method and parameter (`fsPromises.ReadFileOptions`) |
| `{Object}` without them, `{Date}`, `{Map}`, `{RegExp}` | `object` | `Data` |
| a Node class (`{KeyObject}`, `{fs.ReadStream}`), named with or without its module (`{Socket}` for `net.Socket`) | the class | its handle type |
| a web standard class (`{URL}`, `{Blob}`, `{MessagePort}`) | the web interface | `Lasm.JS.Web`'s type |
| `{Function}` | `Function` | `JSFunction` (`ofFn`, `ofSyncFn`) |
| a class (`Class: FileHandle`) | `interface` | a handle type; `Extends: EventEmitter` gives `structure ChildProcess extends EventEmitter` |
| `Returns: {Promise} Fulfills with undefined upon success.` | `Promise<undefined>` | `Async Unit` |
| `Fulfills with the {fs.Stats} object` | `Promise<fs.Stats>` | `Async fs.Stats` |
| an optional trailing `callback` (`randomBytes(size[, callback])`) | left out | the synchronous form: `crypto.randomBytes 32 : IO ByteArray` |
| a required trailing `callback(err, value)` (`scrypt(…, callback)`) | `Promise<value>` | `Async ByteArray`, called through `util.promisify` |
| a required trailing callback with more values (`fs.read(fd, …, callback)`: `(err, bytesRead, buffer)`) or arguments the docs do not list | `Function` | a `JSFunction` argument, as documented (`Function.ofFn`) |
| a type given only in prose, or a type name nothing defines (`{Tracing}` aside) | `any` | `Data` (listed in `node-coverage.json`) |
| a member marked Deprecated, Experimental or Legacy | the member, `LasmStability` | generated, its doc comment says so |
| a member only the Node 26 docs document | the member, `LasmSince="26.13.0"` | generated, its doc comment says **Node.js 26 and later** |
| `[min, ]max` (an optional parameter before a required one) | two overloads | `crypto.randomInt max`, `crypto.randomIntWithMin min max` |
| `buf.toString([encoding])` (a Buffer method) | an operation on bytes | `Buffer.toString (bytes) (encoding := none)`, called with the bytes as `this` |
| a `Buffer` result | `Uint8Array` | `ByteArray` |
| `Event: 'request'` with `request {http.IncomingMessage}`, `response {http.ServerResponse}` | `callback http.Server.RequestListener = undefined (…)` and `onRequest`, `onceRequest` | `server.onRequest (← http.Server.RequestListener.ofFn fun req res => …)` ([Events](#events-typed-listeners)) |
| a listener parameter the docs add to an event (`requestListener`, `connectListener`) | that event's callback | `http.createServer none (some listener)` |
| `new net.Socket([options])` (a heading only in the JSON) | `constructor(…)`, checked against the documented parameters | `net.Socket.new (options := none)` |
| overloads documented under one heading (`server.listen()`: `listen(options)`, `listen(path)`, `listen([port[, host]])`) | one operation each | `listen options`, `listenWithPath`, `listenWithPort (some 0) (some "127.0.0.1")` |
| `Returns: {this}` | the class | `IO net.Socket` (the object itself) |

Where the docs give a type only in prose, [`node-tier2.mjs`](../scripts/bindings/node-tier2.mjs)
states it in WebIDL and quotes the sentence (the lowering fails if the sentence
is gone): `readFile` fulfills with `(Uint8Array or DOMString)` ("Fulfills with
the contents of the file", a string when an encoding is given), `mkdir` with
`DOMString?`, `events.once` with the event's arguments, `execFile`'s promise with
`{stdout, stderr}`, `process.env` is a `record<DOMString, DOMString>`. One
correction states what Node returns against its docs: `os.uptime` is `Float`
(Node returns fractional seconds; the docs say `{integer}`).

The rest of the mapping is Lasm.JS.Web's (`generate-web.mjs` generates both), including its limits (bytes are copies,
nullable optional members are collapsed). Two rules are Node's: an argument named
like a namespace gets a `_` (`path.basename (path_ : String)`, so that `path`
still names the namespace), and a union of a namespaced type lives in that
namespace (`fsPromises.ReadFileOptionsOrDOMString`). A `record` result (`process.env`) is read through `Object.entries`, one more host call: Node's `process.env` is not a plain object and Deno's is a Proxy. Overloads that would get
one name each add all their argument names (`FileHandle.readWithOptions`,
`FileHandle.readWithBufferOptions`).

### Events: typed listeners

Every stable event a selected class documents (`Event: 'request'`, with its
arguments' types) becomes a callback type named after it in the class's
namespace, `http.Server.RequestListener`, made from a Lean function with
`ofFn` (asynchronous) or `ofSyncFn`, and two methods, `onRequest` and
`onceRequest`, which call `emitter.on('request', listener)` and
`emitter.once(…)` and return the emitter, as those do. Subclasses have their
parents' events through the structure's `extends` (`http.IncomingMessage` has
`stream.Readable`'s `onData`, `onEnd`, `onError`). An argument the docs list
without a name (`net.Server`'s `'connection'`: `{net.Socket}`) is `value`;
arguments the docs give only in prose are stated in `node-tier2.mjs`
(`eventProse`, with a quoted sentence: `net.Socket`'s `'lookup'`,
`net.Server`'s `'drop'`; `ChildProcess`'s `'exit'` and `'close'` give `code`
and `signal` as `Option`s, since the docs say each is `null` in one case). The
untyped `EventEmitter.on (name) (JSFunction)` stays for anything else.

```lean
import Lasm.JS.Node.Net
open Lasm.JS Lasm.JS.Web Lasm.JS.Node

def main : IO Unit := do
  -- a TCP echo server: every socket writes back what it reads
  let onConnection ← net.Server.ConnectionListener.ofSyncFn fun sock => do
    discard <| sock.onData (← net.Socket.DataListener.ofSyncFn fun d => do
      discard <| sock.write (match d with | .uint8Array b => .uint8Array b | .domString s => .domString s))
    discard <| sock.onEnd (← net.Socket.EndListener.ofSyncFn (do discard <| sock.«end»))
  let server ← net.createServer none (some onConnection)
  discard <| server.listenWithPort (some 7000) (some "127.0.0.1")
  waitForever
```

- **Order.** An asynchronous listener (`ofFn`) runs as a Lean task, so two
  calls of it may run concurrently: use `ofSyncFn` where the order of events
  matters (a socket's `'data'` chunks), as above.
- **Errors.** A listener made with `ofFn` that throws rejects its promise,
  which Node reports as an unhandled rejection (by default the process exits).
  An `'error'` event with no listener throws, as in JavaScript.
- **`end` is a Lean keyword**: the methods are written `sock.«end»`,
  `res.«end» (some body)`.
- Event names are not members of the object, so the availability probe does
  not look for them; `node-surface.json` lists them per class (`events`).

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
- **Package size:** `library/prebuilt` holds only the core set (13.7 MB of
  `.olean` files and 2.8 MB of C, before compression); the other 33 modules ship
  as Lean source and are compiled on first import (see [Imports](#what-is-covered-1)).
  All of Lasm.JS.Node compiled is 30.0 MB of `.olean` and 6.3 MB of C with the
  `@[macro_inline]` emitter, against 52.3 MB and 19.6 MB with the previous one
  (2026-11-16).

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
fresh temporary directory; child processes, events and stream conversion;
and on 127.0.0.1: an HTTP echo server (`http.createServer`) requested with
`http.request` over generated bodies (up to 200 kB), methods, paths and headers,
ten concurrent requests, `http.get`, a 404 from `writeHead`; a web `Request`
built from an `IncomingMessage` and a `Response` written to a `ServerResponse`
(requested with `fetch`); and a TCP echo server (`net.createServer`,
`net.connect`) round-tripping generated chunks (up to six of 64 kB), with
addresses, `getConnections`, `setEncoding`, `net.isIP` and `BlockList`.
`web-bindings.yml` runs it on Node 26 and 24, Bun and Deno.
Measured (web-bindings run 43214713325, `node-conformance`): 5,571 checks
pass on Node 26.13.0, Node 24.22.2 and Bun 1.4.4; on Deno 2.9.6, 5,570 pass
and one fails as a known runtime gap (`FileHandle.write string`: Deno's
`filehandle.write(string)` gives the bytes, not the string;
`test/fixtures/js-node/known.json`). Generated members the runtimes do not
have (reported, not failures): `net.BlockList`'s `addAddresses`, `addCIDR`,
`addCIDRs`, `clear`, `removeAddress`, `removeCIDR`, `removeRange`,
`removeSubnet` and `net.BoundSocket` on Bun and Deno;
`net.Socket.getTypeOfService` and `setTypeOfService` on Deno.

## Servers on JavaScript runtimes: `Lasm.JS.Deno`, `Lasm.JS.Bun` and Node

A server on a JavaScript runtime is one Lean function from a web `Request` to a
`Response` (Lasm.JS.Web's types), handed to the runtime's own server:

| Runtime | Server | Lean |
| --- | --- | --- |
| Cloudflare Workers and the edge platforms | `export default {fetch}` | `Lasm.JS.exportDefault handle` |
| Function platforms on Node (Netlify, Vercel, AWS Lambda and Lambda@Edge, Azure Functions, Google Cloud Functions) | the platform's handler export | `Lasm.JS.exportDefault handle` ([below](#function-platforms-exportdefault)) |
| Deno | `Deno.serve` | `import Lasm.JS.Deno.Serve` (generated, below) |
| Bun | `Bun.serve` | `import Lasm.JS.Bun.Serve` (generated, below) |
| Node | none of its own takes a `Request`: Lasm provides `Node.serve`, shaped like `Bun.serve` | `import Lasm.JS.Node.Serve` ([Node](#serving-http-on-node-nodeserve)) |

Outbound HTTP is Lasm.JS.Web's `fetch` everywhere. Status: **current source, not
yet released** (tier 2 of the standard bindings, second part).

```lean
import Lasm.JS.Deno.Serve
open Lasm.JS Lasm.JS.Web

def handle (request : Request) : Async Response := do
  Response.new (some (.usvString s!"{← request.method} {← request.url}")) none

def main : IO Unit := do
  let handler ← Deno.ServeHandler.ofFn fun request _info => handle request
  let server ← Deno.serveWithOptions { port := some 8000, hostname := some "127.0.0.1" } handler
  server.finished.block       -- main returns (and Deno exits) when the server closes
```

```lean
import Lasm.JS.Bun.Serve
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
| `Lasm.JS.Deno.Serve` | `Deno.serve(handler)` as `serve`; `Deno.serve(options, handler)` as `serveWithOptions` (`ServeTcpOptions`: `port`, `hostname`, `signal`, `onListen`, `onError`, `reusePort`, `tcpBacklog`, `automaticCompression`, `transport`) and, with `cert` and `key`, `serveWithTlsOptions` (`ServeTcpTlsOptions`); on a Unix socket, `serveWithUnixOptions` (`ServeUnixOptions`: `path`; `HttpServerUnixAddr`, `ServeHandlerUnixAddr`); `ServeHandler` (`Request → ServeHandlerInfo → Async Response`); `HttpServer` (`finished`, `shutdown`, `addr`, `ref`, `unref`); `ServeHandlerInfo` (`remoteAddr`, `completed`); the structure `NetAddr` (`transport`, `hostname`, `port`; in `Lasm.JS.Deno.Net`). The rest of the namespace: [Lasm.JS.Deno](#standard-bindings-for-deno-lasmjsdeno) | Deno 2.9.6, `cli/tsc/dts/lib.deno.ns.d.ts`, `lib.deno_net.d.ts` |
| `Lasm.JS.Bun.Serve` | `Bun.serve(options)` as `serve`; `ServeOptions` (`fetch`, `port`, `hostname`, `error`, `idleTimeout`, `maxRequestBodySize`, `reusePort`, `ipv6Only`, `id`); `ServeOptionsFetch` (`Request → Server → Async Response`); `Server` (`stop`, `url`, `port`, `hostname`, `protocol`, `requestIP`, `timeout`, `fetch`, `reload`, `pendingRequests`, `closeIdleConnections`, `ref`, `unref`, `development`, `id`); the structure `SocketAddress` (`address`, `port`, `family`) | Bun 1.4.4, `packages/bun-types/serve.d.ts`, `bun.d.ts` |

`import Lasm.JS.Deno.Serve` and `import Lasm.JS.Bun.Serve` import the server
modules (and the modules they use). Neither namespace has an umbrella module
(docs/api/decisions/0.4.md, 0.4-21): import the modules whose members you call.

Not generated, with the reason (each listed in
[`serve-tier2.mjs`](../scripts/bindings/serve-tier2.mjs) and at the top of
[`deno.idl`](../scripts/bindings/deno.idl) and [`bun.idl`](../scripts/bindings/bun.idl)):

- **Experimental or unstable** (the declaration says `@experimental` or
  `UNSTABLE`; never generated): Deno's VSOCK overloads (`ServeVsockOptions`),
  Bun's `http1`, `http2` and `http3` options.
- **Outside the server entry points (Bun):** Unix domain sockets (Bun's `unix`;
  Deno's are `serveWithUnixOptions`); WebSockets (`Server.upgrade`,
  `publish`, `subscriberCount`, `pendingWebSockets`, the `websocket` handlers;
  Deno's are `Deno.upgradeWebSocket`, in [Lasm.JS.Deno](#standard-bindings-for-deno-lasmjsdeno));
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
| a callback's parameters | its arity is the JavaScript function's `length` (`Function.ofFn`'s default is 0, and `Deno.serve` calls a handler of length 0 without its request) | `ServeHandler.ofFn` sets it |
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
that imports `Lasm.JS.Deno.Serve` still builds (and runs its other code) on Node. A
hand-written `@[js "globalThis" "Deno.serve"]` binding builds for `--target deno`
(the binding check, which runs on Node, only warns there) but not for Node.

The functions of the runtime's global object are at the top of the module's
namespace (`Lasm.JS.Deno.serve`, called as `Deno.serve` after `open Lasm.JS`), and
every doc comment quotes the member's TypeScript declaration before its WebIDL.

### Serving HTTP on Node: `Node.serve`

Node has no server that takes a web `Request`, so Lasm provides one:
`Node.serve` in `Lasm.JS.Node.Serve`. It is **provided by Lasm**: hand-written,
not generated, and not a Node API. Its shape is `Bun.serve`'s: one options
record with `fetch` inside, and Bun's option names where Bun has the option.
Underneath it is Node's `node:http`; Lasm's builtin module `lasm:node-serve`
([`src/lasm-modules/node-serve.mjs`](../src/lasm-modules/node-serve.mjs))
translates requests and responses. There is no npm dependency.

```lean
import Lasm.JS.Node.Serve
open Lasm.JS Lasm.JS.Web

def handle (request : Request) : Async Response := do
  Response.new (some (.usvString s!"{← request.method} {← request.url}")) none

def main : IO Unit :=
  Node.serve { fetch := handle, port := some 3000, hostname := some "127.0.0.1" }
```

`Node.serve` returns only after the server stops. The Lean runtime ends when
`main` returns, so this call is what keeps the program running. The server
stops on `Server.stop`, when `signal` is aborted, or on SIGTERM or SIGINT. A
stop lets requests in progress finish; a second signal closes them. The
`Server` handle goes to `onListen`:

| Shape | Meaning |
| --- | --- |
| `Node.serve : ServeOptions → IO Unit` | serves until the server stops |
| `fetch : Request → Async Response` | the handler (required; a Lean function, no `ofFn` step) |
| `port : Option Nat` | default `$PORT`, else 3000 (as Bun); `some 0` lets the system choose |
| `hostname : Option String` | default `0.0.0.0` (as Bun) |
| `signal : Option AbortSignal` | aborting it stops the server (Deno.serve's `signal`) |
| `onListen : Option (Server → IO Unit)` | called once listening (Deno.serve's `onListen`); by default `Listening on <url>` is printed |
| `error : Option (IO.Error → Async Response)` | the response when `fetch` throws (Bun's `error`); by default a 500, with the error printed on stderr |
| `Server.hostname : String`, `Server.port : Nat`, `Server.url : String` | the listening address (Bun's `hostname`, `port`, `url`) |
| `Server.stop (closeActiveConnections := false) : Async Unit` | stops accepting connections and resolves once the server has closed (Bun's `stop`) |
| `Server.finished : Async Unit` | resolves once the server has closed (Deno's `finished`) |

What it guarantees (tested in
[`test/node-serve.test.mjs`](../test/node-serve.test.mjs) and
[`test/fixtures/js-serve`](../test/fixtures/js-serve)):

- The URL comes from the Host header only when that header is a plain
  `host[:port]`. A forged Host such as `x/admin#` gets the listening address
  instead, so it cannot move the path or the query. This is the same rule the
  function-platform shims use.
- Several Cookie lines become one Cookie field, joined with `; `, as a browser
  sends them. Hop-by-hop fields are not passed on.
- Request and response bodies stream both ways, with backpressure. When a
  client goes away, `request.signal` is aborted and the response body is
  cancelled.
- Each Set-Cookie is sent on its own header line.
- HEAD responses and the null-body statuses (101, 204, 205, 304) send no body.
- An empty body is sent as `content-length: 0`, and no content type is added.
  (`@hono/node-server` adds `text/plain` for an empty byte body.)
- When the handler throws, `error`'s response is sent, else a 500.

A program built for several targets can import `Lasm.JS.Node.Serve`
everywhere. The module loads on Bun, Deno and the edge platforms, and fails
only when `Node.serve` is called there.

An npm adapter such as `@hono/node-server` still works through an `@[js]`
binding (`test/fixtures/js-serve` keeps such a section). A Hono app is served
with Hono's own adapter in the same way.

### Function platforms: `exportDefault`

On Netlify (Functions v2), Vercel (Node functions), AWS Lambda and Lambda@Edge,
Azure Functions and Google Cloud Functions, a program publishes its handler
with `Lasm.JS.exportDefault`, as it does on Workers. The file that
`lasm build --target …` generates calls the handler directly. There is no
HTTP server, no port and no loopback.

```lean
def main : IO Unit := exportDefault handle   -- handle : Request → Async Response
```

`exportDefault` takes a Lean function `α → Async β` (a fetch handler) and makes
it a JavaScript function with `Function.ofFn1`. It also takes any JavaScript
`Value`, such as a Hono app or an object with a `fetch` method. Behavior by
target:

- On an edge build, it records the handler and returns.
- Under a function platform's entry
  ([`src/serverless/lasm-function.mjs`](../src/serverless/lasm-function.mjs)),
  it hands the handler over and does not return. The Lean runtime ends when
  `main` returns, so `main` stays and serves the calls.
- Elsewhere on Node, it records the value and returns.

The generated platform files:

| Target | Export | Calls |
| --- | --- | --- |
| `netlify` | `export default async (request, context) => …` | `handler(request, context)`; Cookie lines that Netlify joined with commas are rejoined with `; `; an empty body becomes no body (#82) |
| `vercel`, `cloud-functions` | `(req, res)` | the Node request as a web `Request` (`lasm:node-serve`), and the `Response` streamed back |
| `lambda`, `lambda-edge` | `handler(event)` | each event shape mapped to a `Request` and back, with the existing Host, cookie, base64 and `__proto__` rules |
| `azure-functions` | `app.http('lasm', …)` | the `Request`, and the `Response` as `HttpResponseInit` (Set-Cookie through `cookies`, #80) |

A program that brings its own HTTP server (Express, or `Node.serve`) cannot
run on these platforms. There, a program has to publish a handler.

### Where it runs, tests and cost

[`test/fixtures/js-serve`](../test/fixtures/js-serve) is one program run on Node,
Bun and Deno: each serves `App.handle` with its own server (Deno.serve with
options, the defaults and TLS; Bun.serve; Node.serve and @hono/node-server on Node) on
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
`/shutdown` (exit status 0; Node.serve on Node). `web-bindings.yml` runs both.
Node.serve's own guarantees (forged Host, cookies, streaming both ways with
backpressure, client aborts, HEAD, empty bodies, errors, stop, signals) are
checked over real sockets by `test/node-serve.test.mjs` (`unit.yml`).

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
- **Package size: sources only.** Neither namespace is prebuilt
  (docs/api/decisions/0.4.md, 0.4-20): their modules ship as Lean source and
  compile into Lasm's managed Lean prefix the first time a program imports them,
  then are reused.

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

## Standard bindings for Deno: `Lasm.JS.Deno`

`Lasm.JS.Deno` is **the whole `Deno` namespace** of Deno 2.9.6, generated
from Deno's own TypeScript declarations (`cli/tsc/dts/lib.deno.ns.d.ts`,
`lib.deno_net.d.ts`, and Deno KV and `Deno.cron` from `lib.deno.unstable.d.ts`):
every function, constant and class, and every type they use. Status: **released
in 0.9.0** (Stage 0, milestone 0.4; docs/API_DECISIONS.md 0.4-5,
0.4-7, 0.4-9, 0.4-10 to 0.4-15). It runs with `--target deno` and `--target deno-deploy`.
A program imports the modules whose members it calls (`import Lasm.JS.Deno.Kv`);
there is no `import Lasm.JS.Deno` (0.4-21). The modules ship as source and compile
on the first build that imports them (0.4-20).

```lean
import Lasm.JS.Deno.Fs
import Lasm.JS.Deno.Subprocess
import Lasm.JS.Deno.Kv
open Lasm.JS Lasm.JS.Web

def run : Async Unit := do
  let dir ← Deno.makeTempDir none
  Deno.writeTextFile (.domString s!"{dir}/a.txt") (.domString "hi") none   -- or just "…": the unions have Coe instances
  IO.println (← Deno.readTextFile (.domString s!"{dir}/a.txt") none)       -- hi
  for e in ← (← Deno.readDir (.domString dir)).values do                     -- an async iterable, read to the end
    IO.println s!"{e.name} {e.isFile}"
  let out ← (← Deno.Command.new (.domString "git") (some { args := some #["--version"] })).output
  IO.println s!"{out.code} {String.fromUTF8! out.stdout}"
  let kv ← Deno.openKv none                                                  -- Deno KV
  discard <| kv.set #["users", "ada"] (toJS "Ada Lovelace") none
  let e ← kv.get #["users", "ada"] none
  IO.println s!"{e.versionstamp}"
  for entry in ← (← kv.list { «prefix» := some #["users"] } none).values do
    IO.println s!"{entry.key.size} {entry.versionstamp}"

def main : IO Unit := run.block
```

The Deno CLI needs Deno's own flags for KV and cron (`deno run -A --unstable-kv
deno/main.mjs`); Deno Deploy provides both without flags.
[examples/deno-kv](../examples/deno-kv) is a todo API on Deno KV served with
`Deno.serve`, built and checked over HTTP by CI.

### What is covered

| Module | Members |
| --- | --- |
| `Lasm.JS.Deno.Runtime` | `env` (`Env`: `get`, `set`, `delete`, `has`, `toObject`), `args`, `pid`, `ppid`, `build`, `version`, `noColor`, `exitCode`, `mainModule`, `exit`, `cwd`, `chdir`, `execPath`, `hostname`, `osRelease`, `osUptime`, `loadavg`, `memoryUsage`, `systemMemoryInfo`, `uid`, `gid`, `addSignalListener`, `removeSignalListener`, `refTimer`, `unrefTimer` |
| `Lasm.JS.Deno.Permissions` | `permissions` (`Permissions`: `query`, `request`, `revoke` and their `Sync` forms), `PermissionStatus`, `PermissionDescriptor` |
| `Lasm.JS.Deno.Io` | `stdin`, `stdout`, `stderr` (`readable`/`writable` streams, `setRaw`, `isTerminal`, `close`), `consoleSize`, `inspect` |
| `Lasm.JS.Deno.Fs` | `readFile`, `readTextFile`, `writeFile`, `writeTextFile`, `open`, `create`, `stat`, `lstat`, `readDir`, `mkdir`, `makeTempDir`, `makeTempFile`, `remove`, `rename`, `copyFile`, `link`, `symlink`, `readLink`, `realPath`, `chmod`, `chown`, `truncate`, `utime`, `umask`, `watchFs`, each with its `Sync` form; `FsFile` (`readable`, `writable`, `seek`, `stat`, `truncate`, `sync`, `lock`, `utime`, …), `FsWatcher` |
| `Lasm.JS.Deno.Subprocess` | `Command` (`new`, `output`, `outputSync`, `spawn`), `ChildProcess` (`stdin`, `stdout`, `stderr`, `pid`, `status`, `output`, `kill`, `ref`, `unref`), `kill` |
| `Lasm.JS.Deno.Net` | `listen` (TCP), `listenUnix`, `listenTls`, `connect`, `connectUnix`, `connectTls`, `startTls`, `resolveDns` (one function per record type: `resolveDnsMx`, …), `networkInterfaces`; `TcpListener`, `UnixListener`, `TlsListener` (async iterables of connections), `TcpConn`, `UnixConn`, `TlsConn` |
| `Lasm.JS.Deno.Serve` | `serve`, `serveWithOptions`, `serveWithTlsOptions`, `serveWithUnixOptions` (above) |
| `Lasm.JS.Deno.WebSockets` | `upgradeWebSocket` (a `WebSocketUpgrade` of the response and the socket, a Lasm.JS.Web `WebSocket`: `{ val := up.socket : WebSocket }`) |
| `Lasm.JS.Deno.Fetch` | `createHttpClient` (`HttpClient`: pass it as `fetch`'s `client`) |
| `Lasm.JS.Deno.Kv` | Deno KV: `openKv`, `Kv` (`get`, `getMany`, `set`, `delete`, `list`, `atomic`, `enqueue`, `listenQueue`, `watch`, `close`), `AtomicOperation` (`check`, `mutate`, `set`, `delete`, `sum`, `min`, `max`, `enqueue`, `commit`), `KvU64`, `KvListIterator`; `cron` |

97 functions and constants, 41 classes and handle types (190 members) and 171
supporting types. Each module is generated from the declarations with that
`@category` (a type used by an earlier module lives there).

Not generated, with the reason (each in
[`deno-tier2.mjs`](../scripts/bindings/deno-tier2.mjs) and listed at the top of
[`deno.idl`](../scripts/bindings/deno.idl)):

- **Marked `@deprecated`** (their replacements are generated). Declarations
  Deno marks `@experimental` or `UNSTABLE` are generated (VSOCK, QUIC,
  `Deno.listenDatagram`, `Deno.spawn`, Deno KV, `Deno.cron`; Jordan, 2026-11-16,
  API_DECISIONS 0.4-16); the Deno CLI runs them with its `--unstable-*` flags.
- **Bundler, Linter, GPU, Jupyter**: `Deno.bundle`, `Deno.lint`'s plugin API, a
  WebGPU window surface and `Deno.jupyter` work only in Deno's own tools or with a
  window.
- **FFI** (`Deno.dlopen`, `UnsafePointer`, …): signatures computed by
  TypeScript's type system, and Deno Deploy has no FFI. **`Deno.test` and
  `Deno.bench`**: they register tests for `deno test`, which does not run Lasm's
  output. **`Deno.errors`**: error classes for `instanceof`; a JavaScript error
  reaches Lean as an `IO.Error` whose message starts with the class name.
  **`Deno.telemetry`**: OpenTelemetry provider objects typed `any`.
- **In-place buffers**: `read(p)` and `write(p)` of `FsFile`, `Conn`, `stdin`,
  `stdout` and `stderr` read into or write part of a caller's buffer; Lean bytes
  are copies. Read the `readable` stream and write the `writable` one.
- `readDirSync` (a synchronous iterator object; `readDir` gives the same entries),
  `Kv.commitVersionstamp` (a Symbol placeholder), `UpgradeWebSocketOptions.socket`
  (a `node:net` socket), the handler-inside-options forms of `serve`, the
  general `resolveDns(query, recordType: RecordType)` (the per-type functions
  return typed records), the iterator protocol's own `next` and `return` (the
  async iterables have `iterator` and `values`), `PermissionStatus`'s
  `addEventListener` (its `EventTarget` parent's is the same call), and every
  Symbol-keyed member (`[Symbol.dispose]`: `using`, which Lean does not have).

### How Deno's declarations become Lean

[`ts-auto.mjs`](../scripts/bindings/ts-auto.mjs) lowers the namespace to WebIDL
with the declaration reader of `serve-api.mjs` and these rules (each in
API_DECISIONS 0.4-11); `generate-web.mjs` then generates Lean as for the other
tiers ([above](#how-a-webidl-declaration-becomes-lean)).

| TypeScript | WebIDL | Lean |
| --- | --- | --- |
| a function, a constant (`const pid: number`), a class | an operation or attribute of the namespace; an `interface` with constructors and statics | `Deno.readFile`, `Deno.pid : IO Float`, `Deno.Command.new`, `Deno.FsFile` |
| an interface with a required method or a `Promise` property, a class, an interface extending one | `interface` (properties `readonly`, except a class's writable fields and an interface's function-typed property, such as `onchange`) | a handle type |
| an interface of plain data (`FileInfo`, `DirEntry`, `NetAddr`, options) | `dictionary` | a structure, copied |
| a union of object types (`KvEntryMaybe`, `KvListSelector`, `PermissionDescriptor`, `KvMutation`) | one `dictionary`: each member's type is the union of its types, optional where an alternative lacks it | one structure: `entry.versionstamp : Option String` |
| a union of other types (`string \| URL`) | a `typedef` named after the alias, else after its members (`DOMStringOrURL`), in Lasm.JS.Deno's namespace | an inductive with `Coe` instances (`Deno.readFile "a.txt"` works) |
| `AsyncIterable<T>` result (`readDir`), `extends AsyncIterable<T>` (`FsWatcher`, `TcpListener`), `[Symbol.asyncIterator]` (`KvListIterator`) | `async iterable<T>` (on a generated `DirEntryAsyncIterable`, or the interface itself) | `values : Async (Array T)` (to the end), `iterator : IO It` and `It.next : Async (Option T)` (one at a time) |
| a generic declaration (`Conn<A>`, `ServeHandler<Addr>`) | one definition per instantiation: the declared defaults (`Addr` = `NetAddr`) give the plain name, an alias its name (`TcpListener`), others add their arguments (`ConnUnixAddr`) | separate types |
| a generic method's parameter (`get<T = unknown>`) | its default, else `unknown` | `Data` |
| overloads | the first keeps the name; the others add `With` and their first parameter that differs by name, else by type; a reviewed table names the rest (`listenUnix`, `connectUnix`, `resolveDnsMx`, `serveWithUnixOptions`) | separate functions |
| `"SIGTERM" \| "SIGINT" \| …` | `enum Signal` | `.sigterm`: an all-capitals value is a lower-case constructor |
| a TypeScript `enum` (`SeekMode`) | its number (`unsigned long`) | `Nat` |
| `Date`, `object`, `unknown` | `object`, `any` | `Data` |
| `Uint8Array<ArrayBuffer>` and the other byte views | `Uint8Array` | `ByteArray` (a copy) |
| `{ [k: string]: T }`, `Record<string, T>` | `record<DOMString, T>` | `Record T` |
| `readonly T[]`, `Iterable<T>` | `sequence<T>` | `Array T` |
| a `symbol` alternative of a union (`KvKeyPart`) | dropped | — |
| `never` (`exit`) | `undefined` | `IO Unit` |

Four small tables in `deno-tier2.mjs` complete the mechanical rules, every entry
reviewed (API_DECISIONS 0.4-12): **names** of overloads, **split** (a parameter
that is a union of option types becomes one overload per alternative:
`serveWithOptions`, `serveWithTlsOptions`), **intersections** (names of
`A & B` option types: `ListenTcpOptions`, `ServeTcpTlsOptions`) and **overrides**
(member types TypeScript computes with mapped tuples: `Kv.getMany` and `Kv.watch`
take an array of keys).

### Tests

[`test/fixtures/js-deno`](../test/fixtures/js-deno) runs on Deno in
`web-bindings.yml` (`deno-conformance`), with the Lean model as oracle: the
environment as a map (set, get, has, delete, `toObject` over generated
Unicode values); files and bytes round-tripped for generated contents, sizes,
append, truncate, `createNew`, copy, rename, links, permissions; a directory as
the set of names written to it (`readDir`, its iterator); `FsFile` seek, streams,
locks; subprocess output for generated arguments, exit codes, environment,
working directory, piped stdin and signals; a TCP echo of generated bytes and a
Unix-socket exchange; a WebSocket echo through `Deno.serve` and
`upgradeWebSocket`; Deno KV against a sorted map (get and set of generated
values, `getMany`, `list` by prefix, range, `reverse` and `limit`, key parts of
every kind, atomic checks on current and stale versionstamps, `sum` of `KvU64`s
modulo 2^64, `mutate`, the queue); and every generated function on `Deno` and
member on a live object. [`test/fixtures/js-serve`](../test/fixtures/js-serve)
also serves on a Unix socket. The drift check of `serve-api.mjs` covers the
three declaration files.

## Standard bindings for Bun: `Lasm.JS.Bun`

`Lasm.JS.Bun` is **the whole `Bun` namespace and `bun:sqlite`** of Bun
1.4.4, generated from Bun's own TypeScript declarations (`packages/bun-types` at
`bun-v1.4.4`: `bun.d.ts`, `serve.d.ts`, `sqlite.d.ts`, `sql.d.ts`, `redis.d.ts`,
`s3.d.ts`, `shell.d.ts`, `security.d.ts`, `fetch.d.ts`, `wasm.d.ts`) by the same
generator and rules as [Lasm.JS.Deno](#how-denos-declarations-become-lean). Web
types Bun declares again (`Request`, `Response`, `WebSocket`, `Blob`, streams) are
Lasm.JS.Web's. Status: **released in 0.9.0** (Stage 0, milestone
0.4; docs/API_DECISIONS.md 0.4-4, 0.4-7, 0.4-8, A24.1, 0.4-17.x). A program
imports the modules whose members it calls (`import Lasm.JS.Bun.Sqlite`); there is
no `import Lasm.JS.Bun` (0.4-21). The modules ship as source and compile on the
first build that imports them (0.4-20).

```lean
import Lasm.JS.Bun.Core
import Lasm.JS.Bun.Serve
import Lasm.JS.Bun.Sqlite
open Lasm.JS Lasm.JS.Web

def main : IO Unit := do
  let db ← Bun.Database.new (some ":memory:") none                      -- bun:sqlite
  discard <| db.run "create table t (name text)"
  discard <| (← db.query "insert into t values (?)").run #[#[toJS "ada"]]
  IO.println (← (← db.query "select name from t").all).size              -- 1
  let out ← Bun.spawnSync { cmd := #["git", "--version"] }
  IO.println s!"{out.exitCode} {out.stdout.map String.fromUTF8!}"
  let message ← Bun.WebSocketHandlerMessage.ofFn fun ws msg => discard <| ws.send (match msg with
    | .domString s => .domString s | .uint8Array b => .uint8Array b) none
  let fetch ← Bun.ServeOptionsFetch.ofFn fun req server => do
    if ← server.upgrade req none then Response.new none none
    else Response.new (some (.usvString "hello")) none
  let server ← Bun.serve { fetch, port := some (.unsignedShort 3000), websocket := some { message } }
  IO.println s!"listening on {← (← server.url).href}"
```

| Module | Members |
| --- | --- |
| `Lasm.JS.Bun.Core` | `Bun.file`, `Bun.write`, `Bun.spawn`, `Bun.spawnSync`, `Bun.listen`, `Bun.connect`, `Bun.udpSocket`, `Bun.dns`, `Bun.password`, `Bun.CryptoHasher`, `Bun.hash`, `Bun.Glob`, `Bun.Cookie`, `Bun.CookieMap`, `Bun.gzipSync` and the other compression functions, `Bun.escapeHTML`, `Bun.stringWidth`, `Bun.semver`, `Bun.TOML`, `Bun.YAML`, `Bun.JSON5`, `Bun.JSONL`, `Bun.XML`, `Bun.markdown`, `Bun.color`, `Bun.which`, `Bun.sleep`, `Bun.env`, `Bun.argv`, `Bun.version`, `Bun.Image`, `Bun.Archive`, `Bun.Terminal`, `Bun.Transpiler`, `Bun.secrets`, `Bun.CSRF`, `Bun.FileSystemRouter`, … |
| `Lasm.JS.Bun.Serve` | `Bun.serve` (`ServeOptions`: `fetch`, `routes`, `websocket`, `port`, `unix`, `tls`, …), `Server` (`upgrade`, `publish`, `reload`, `stop`, …), `ServerWebSocket`, `WebSocketHandler` |
| `Lasm.JS.Bun.Shell` | the shell's types (`$` itself is excluded below) |
| `Lasm.JS.Bun.Sqlite` | `bun:sqlite`: `Database`, `Statement` |
| `Lasm.JS.Bun.Sql` | `Bun.SQL` (Postgres, MySQL, SQLite clients) |
| `Lasm.JS.Bun.Redis` | `Bun.RedisClient`, `Bun.redis` |
| `Lasm.JS.Bun.S3` | `Bun.S3Client`, `Bun.s3`, `S3File` |

173 functions and constants, 61 classes and handle types (647 members) and 527
supporting types. A declaration's module is its `@category`, else its file.
`bun:sqlite` is loaded on Bun with `require("bun:sqlite")`.

Excluded, each with its reason in [`bun-tier2.mjs`](../scripts/bindings/bun-tier2.mjs),
at the top of [`bun.idl`](../scripts/bindings/bun.idl) and in API_DECISIONS: the
shell `$` and the default `sql` client (tagged template literals, whose escaping
comes from a `TemplateStringsArray` Lean cannot make), `Bun.build`, `Bun.plugin`
and transpiler macros (Bun's bundler), `Bun.fetch` (Lasm.JS.Web's `fetch`),
`markdown.react` (React elements), synchronous iterators (`Glob.scanSync`,
`Statement.iterate`, `CookieMap.entries`), `Database.transaction` (a callable
object), `Statement.as` (a JavaScript class), deprecated and experimental members
(`Bun.ModuleGraph`, `Bun.WebView`), call signatures and Symbol-keyed members.

What Bun's declarations needed beyond Deno's rules (API_DECISIONS 0.4-4):
`XOR<A, B>` (exactly one of two option shapes) is the union of A and B, so
`Bun.serve`'s options are one structure with every member optional where one
shape lacks it; `Pick<T, …>` and `Omit<T, …>` are `T`; tuples are arrays; a union
of number literals is a number; a type of another module (`import("node:tls")`)
is `Data`; overloads told apart by keyword arguments (Redis's `"WITHSCORES"`) add
the keywords to the name (`zrandmemberWithscores`); a nested namespace's
declaration is named with it (`udp.Socket` is `UdpSocket`); members TypeScript
computes with conditional or indexed types are stated in a reviewed override table
(`Subprocess.stdout`, `Database.query`, `Server.upgrade`'s options).

[`test/fixtures/js-bun`](../test/fixtures/js-bun) runs on Bun in `web-bindings.yml`
(`bun-conformance`): HTML escaping against a Lean model, gzip round trips of
generated bytes, the FIPS 180-2 SHA-256 vector, password hashes, semver order, file
round trips of generated bytes, subprocess output for generated arguments and exit
codes, `bun:sqlite` rows against a list, a WebSocket echo through `Bun.serve`, a TCP
echo through `Bun.listen` and `Bun.connect`, and every generated member on the live
objects. [examples/bun-sqlite](../examples/bun-sqlite) is a todo API on
`bun:sqlite`, built and checked over HTTP by CI.

## Cloudflare Workers: `Lasm.JS.Cloudflare`

`Lasm.JS.Cloudflare.*` (`import Lasm.JS.Cloudflare.Kv`, `.D1`, `.Workers`, …,
one module per area) gives typed bindings of the runtime APIs of Cloudflare
Workers, **generated from Cloudflare's own TypeScript declarations**
(`@cloudflare/workers-types` 5.20261019.1, the declarations of the workerd that
CI's wrangler 4.152.0 runs). Status: **released in 0.9.0** (tier
3 of the standard bindings). It covers what a Worker's `env` holds and what its
handlers receive:

- the bindings: Workers KV, D1, R2, Durable Objects, Queues;
- the handlers beside `fetch`: `scheduled` (cron triggers) and `queue` (queue
  batches), and their `ExecutionContext` (`waitUntil`, `passThroughOnException`);
- the Cache API (`caches`) and TCP sockets (`connect` of `cloudflare:sockets`);
- `env` of `cloudflare:workers` (the bindings outside a handler).

Lasm.JS.Web's `Request`, `Response`, `Headers` and streams are their web types.

```lean
import Lasm.JS              -- deriving FromJS
import Lasm.JS.Cloudflare.Kv
import Lasm.JS.Cloudflare.D1
import Lasm.JS.Cloudflare.Workers
import Lasm.JS.Cloudflare.Handlers
open Lasm.JS Lasm.JS.Web Lasm.JS.Cloudflare

/-- The Worker's bindings and variables, as wrangler.toml declares them. -/
structure Env where
  KV : KVNamespace     -- [[kv_namespaces]] binding = "KV"
  DB : D1Database      -- [[d1_databases]] binding = "DB"
  GREETING : String    -- [vars] GREETING = "…"
  deriving FromJS

def main : IO Unit := do
  let fetch ← ExportedHandlerFetchHandler.ofFn fun request (env : Env) ctx => do
    let path ← (← URL.new (← request.url)).pathname
    let hits := ((← env.KV.get path).bind String.toNat?).getD 0
    -- waitUntil takes a promise: Async.toPromise starts the write and returns its promise
    ctx.waitUntil (← Async.toPromise (env.KV.put path (.domString (toString (hits + 1)))))
    let rows ← (← (← env.DB.prepare "SELECT name FROM people WHERE id = ?").bind #[toJS (1 : Nat)]).all
    Response.new (some (.usvString s!"{env.GREETING}: {hits + 1} visits; {rows.results.size} rows")) none
  let scheduled ← ExportedHandlerScheduledHandler.ofFn fun controller (env : Env) _ => do
    env.KV.put "last-cron" (.domString (← controller.cron))
  exportDefault ({ fetch := some fetch, scheduled := some scheduled } : ExportedHandler)
```

Build with `lasm build Main.lean --target workers`. The generated
`workers/worker.mjs` forwards `fetch`, `scheduled` and `queue` to the object
`exportDefault` published (a handler without `scheduled` or `queue` fails those
events, saying so).

**`env` is the program's own type** (API_DECISIONS A26). The declarations make it
generic (`ExportedHandler<Env>`), and the program declares what `Env` holds, as a
TypeScript Worker declares `interface Env`. In Lean that is a structure with
`deriving FromJS`, whose fields are named as the bindings and variables are named
in `wrangler.toml`. Every handler's `ofFn` and `ofSyncFn` take the type as a
parameter (`{Env : Type} [FromJS Env]`), and so does `env` of `cloudflare:workers`
(`let e : Env ← Lasm.JS.Cloudflare.env`). A missing binding fails the handler with
an error that names the field. `Data` is still a valid `Env`: it reads the whole
object.

**Promises from Lean** (A27): `waitUntil`, and other APIs that take a promise of
work still running, get one from `Lasm.JS.Async.toPromise : Async α → IO Value`. It
starts the computation at once and returns its promise.

### What is covered

**Every declaration of Cloudflare's own in `@cloudflare/workers-types`** (838 of
them; API_DECISIONS 0.5-11). [`cloudflare-classify.mjs`](../scripts/bindings/cloudflare-classify.mjs)
tells them apart from the web platform's, which are Lasm.JS.Web's (`Request`,
streams, `WebSocket`), and Node's. Each declaration goes to the module of its
area, listed in [`cloudflare-modules.json`](../scripts/bindings/cloudflare-modules.json)
in import order:

| Module | Area |
| --- | --- |
| `Lasm.JS.Cloudflare.Kv`, `.D1`, `.R2`, `.Queues` | Workers KV, D1, R2, Queues (with the queue handler) |
| `Lasm.JS.Cloudflare.Workers` | the fetch and scheduled handlers, `ExecutionContext`, `env` of `cloudflare:workers` |
| `Lasm.JS.Cloudflare.Handlers` | `ExportedHandler`, every handler together |
| `Lasm.JS.Cloudflare.Cache`, `.Sockets` | the Cache API (until Lasm.JS.Web has it), `connect` of `cloudflare:sockets` |
| `Lasm.JS.Cloudflare.DurableObjects`, `.Containers` | Durable Objects (storage, SQLite, alarms, facets, WebSocket hibernation), Containers |
| `Lasm.JS.Cloudflare.Tail`, `.Email` | Tail Workers, trace events, `TailStream`, tracing; Email Workers and sending email |
| `Lasm.JS.Cloudflare.Ai` | Workers AI and every model's inputs and outputs, AI Gateway, AI Search, AutoRAG, Agent memory, Markdown conversion |
| `Lasm.JS.Cloudflare.Stream`, `.Services` | Cloudflare Stream; rate limiting, Secrets Store, Artifacts, Flagship, Pipelines and the other bindings |
| `Lasm.JS.Cloudflare.Vectorize`, `.Hyperdrive`, `.Images`, `.Workflows`, `.Rpc`, `.BrowserRun`, `.Analytics`, `.HtmlRewriter`, `.Cf` | Vectorize, Hyperdrive, Images and Media, Workflows, service bindings, RPC, Worker loaders and dispatch namespaces, Browser Rendering, Analytics Engine, HTMLRewriter, the `cf` properties of requests |

**Import the modules of the areas the Worker uses** (API_DECISIONS 0.5-16:
there is no umbrella `Lasm.JS.Cloudflare`). A Worker links the modules it
imports. `Lasm.JS.Cloudflare.Support`, `.Kv`, `.D1` and `.Workers` ship
compiled; every other module compiles the first time a program imports it
(docs/HOW_LASM_WORKS.md, "Lasm's library"). Workers AI's catalog takes about
25 seconds then. A Worker that uses KV and D1 imports `Lasm.JS.Cloudflare.Kv`,
`.D1` and `.Workers`, which import no other Cloudflare module. Its smallest form
publishes the fetch function itself (`exportDefault fetch`), because
`ExportedHandler` names every handler and so imports their modules.

Not generated, by class (API_DECISIONS 0.5-12; each listed at the top of
[`cloudflare.idl`](../scripts/bindings/cloudflare.idl)):

- **Symbol-keyed members** (`[Symbol.iterator]()`, `[Symbol.dispose]()`): use
  `Lasm.JS.Value.get` with the Symbol.
- **Keys that are not identifiers** (`AiModels`' `"@cf/…"` model names, a map
  that exists only in the types): read through `Data`.
- **Private and protected class members**, and **constructors of abstract
  classes** (`WorkerEntrypoint`, `DurableObject` of `cloudflare:workers`: they
  are subclassed, A28).
- **Index signatures beside named members**: the named members are generated,
  and other keys go through `Data`.
- **Type-level helpers** (`Rpc.Stub<T>`, conditional and mapped types, and
  `AiModelList[Name]["inputs"]` for a generic `Name`) are read as `Data` where
  they are used. `Ai.run model inputs` therefore takes and returns `Data`, and each
  model's typed inputs and outputs (`Ai_Cf_Openai_Whisper_Input`, …) convert to and
  from it with `toJS` and `FromJS`.
- **Deprecated** declarations (the declaration says `@deprecated`,
  `@experimental` or `UNSTABLE`).

### How the declarations become Lean

[`cloudflare-api.mjs`](../scripts/bindings/cloudflare-api.mjs) fetches the npm
package, checks `index.d.ts` against its SHA-256 hash, and lowers what
`cloudflare-tier3.mjs` selects to WebIDL with `serve-api.mjs`'s lowering
(Lasm.JS.Deno's rules, above) and these rules for richer declarations;
`generate-web.mjs` then generates Lean with Lasm.JS.Web's rules. Every member
and overload of a selected declaration is lowered or excluded with a reason,
or the lowering fails.

| TypeScript | WebIDL | Lean |
| --- | --- | --- |
| `declare abstract class D1Database` | `interface` (its constructor and statics are not lowered) | a handle type |
| `get body(): ReadableStream` (a getter) | `readonly attribute` | `body.body : IO ReadableStream` |
| `readonly httpMetadata?: R2HTTPMetadata` | a nullable attribute | `IO (Option R2HTTPMetadata)` |
| a generic parameter (`Key extends string = string`, `Message = unknown`) | its default (`unknown` when it has none), or the tier's `typeArgs` | `String`; `Data` |
| a type the program declares (the handlers' `Env`, `Cloudflare.Env`; the tier's `typeParameters`) | `typedef any Cloudflare_Env` marked `[LasmTypeParameter="Env"]` | a type parameter `{Env : Type} [FromJS Env]`, read with `Support.declared` |
| overloads of a method | each lowered or excluded by its parameter list | Lasm.JS.Web's overload naming |
| a parameter of one string literal type (`get(key, type: "json")`) | the string passed as a constant (`[LasmConstant]`), the overload named with it (`[LasmOverloadName]`) | `KVNamespace.getJson kv key` |
| `Map<string, V>` | `record<DOMString, V>`, the member marked `[LasmMap]` | `Record V`, read with `Array.from` |
| `Record<string, V>` | `record<DOMString, V>` | `Record V` |
| `Partial<D>` of an options type whose members are all optional | `D` | `D` |
| `{ columnNames?: false }` (an object literal type) | a dictionary named after its owner, member and parameter | `D1PreparedStatementRawOptions` |
| `{…} \| {…}` and `A & ({…} \| {…})` (`KVNamespaceListResult`, `R2Objects`, `R2Range`) | one dictionary: a member in every alternative keeps its optionality, the others are optional | a structure |
| `T & Record<string, unknown>` | `T` | — |
| `ArrayBuffer \| ArrayBufferView` | `BufferSource` | `ByteArray` |
| a union | a typedef of the host (`Cloudflare_DOMStringOrBufferSource`) | an inductive in `Lasm.JS.Cloudflare`, with `Coe` from each member |
| `"a" \| "b"` (an alias, or inline) | an enum named after its alias (`QueueContentType`) or member | an inductive |
| a type alias not selected (`D1SessionBookmark`) | its definition | — |
| `Date`, `unknown`, and a union holding them | `any` | `Data` (a `Date` is a reference) |
| `never`, or `undefined` as a member's type | the member left out | — |
| `...values: unknown[]` | `any... values` | `(values : Array Data := #[])` |
| `toString()`, `toJSON()` | `toString_` with `[LasmName]` | `DurableObjectId.toString` |
| `declare const caches`, `export const env` (of `cloudflare:workers`), `connect` (of `cloudflare:sockets`) | a namespace per module (`[LasmModule]`) | `Lasm.JS.Cloudflare.caches`, `env`, `connect` |
| `[a, b]` (a tuple) | `sequence<T>` (one element type), else `sequence<any>` | `Array T` |
| a template literal type, `keyof T` | `DOMString` | `String` |
| `typeof C`, a conditional type, `List[Name]["f"]` for a generic `Name` | `any` | `Data` |
| `T["f"]` (a member's type) | that member's type | — |
| `Omit<T, K>`, `Pick<T, K>`, `Partial<T>`, `Required<T>`, `A & B` of object types | a dictionary of the resulting members, named after its owner and member | a structure |
| `string & NonNullable<unknown>` (a branded string) | `DOMString` | `String` |
| a class's `constructor(…)`, `static` members | `constructor(…)`, `static` | `X.new`, `X.member` |
| a member holding a class (`Span: typeof Span`) | `[LasmLeanName="SpanClass"]` | `Tracing.SpanClass` |
| a destructured parameter (`{ type, payload }: {…}`) | an argument named `options` | `(options : …)` |
| two dictionaries or enums of one module with the same members | the later a `[LasmAlias] typedef` of the first | `abbrev Later := First` |

Numbers are `Float`, as workers-types declares them, except the members that
the shared integer table names (A11.1, `scripts/bindings/overrides.json`: `size`,
`length`, `limit`, `port`, `expirationTtl`, …), which are `Nat`.

### Durable Objects: a class in JavaScript

Workers natively expects a Durable Object to be a JavaScript class that the
Worker's main module exports (`export class Counter extends DurableObject`), and
Lasm keeps it that way (API_DECISIONS A28). Lean does not define JavaScript
classes, so the class is a few lines of JavaScript in the project. Its methods
call Lean functions that the program publishes; the program's `main` runs first,
in the same isolate. The project's own `wrangler.toml` names a main module that
re-exports Lasm's entry:

```js
// index.mjs (wrangler.toml: main = "index.mjs", [[durable_objects.bindings]] class_name = "Counter")
import { DurableObject } from 'cloudflare:workers';
import worker from './workers/worker.mjs';
export default worker;
export class Counter extends DurableObject {
  fetch(request) { return globalThis.counterFetch(request, this.ctx, this.env); }
}
```

```lean
let counter ← Function.ofFn fun args => do
  let request ← decodeAs Request "request" (args[0]?.getD .undefined)
  let state ← decodeAs DurableObjectState "state" (args[1]?.getD .undefined)
  let storage ← state.storage
  let n := match (← storage.get "n") with | .number x => x | _ => 0
  storage.put "n" (toJS (n + 1))
  return toJS (← Response.new (some (.usvString s!"{n + 1}")) none)
(← Lasm.JS.global).set "counterFetch" counter
```

A Worker reaches the object through its namespace binding, a field of its `Env`
(`COUNTER : DurableObjectNamespace`):
`(← env.COUNTER.getByName "a").fetch (.usvString "https://do/")`. Inside the
object, `state.blockConcurrencyWhile` takes a Lean function
(`DurableObjectStateBlockConcurrencyWhileCallback.ofFn`), and `state.waitUntil`
takes a promise (`Async.toPromise`).

### Where it runs, tests and cost

Only on Workers (`--target workers`): the bindings are looked up on the objects
the runtime hands over, so a program that imports `Lasm.JS.Cloudflare.*` builds
for any target, but the calls work only in a Worker.

[`test/fixtures/js-cloudflare`](../test/fixtures/js-cloudflare) is one Worker
(with a Durable Object class in `index.mjs` and every binding in its
`wrangler.toml`) built with a packed candidate and served by `wrangler dev`
with **local emulation only**: workerd, and Miniflare's local KV, D1, R2,
Durable Objects and Queues. No Cloudflare account is used. The runner triggers
its cron handler (`wrangler dev --test-scheduled`), starts a TCP echo server
for the sockets, then requests `/`, which runs the checks. Its properties: KV
round trips of generated strings and bytes (text, JSON, `ArrayBuffer`, stream),
metadata, `list` paging through exactly the keys under a prefix in key order,
`expirationTtl`; D1 inserts read back by `all`, `first` and `raw`, a failing
`batch` rolled back; R2 objects read back whole and by generated ranges, their
MD5 checksum the bytes' MD5, a wrong SHA-256 rejected, a failed condition
answered without a body, `list` with a delimiter and pages, multipart uploads
whose result is the parts' concatenation; every queued message (one at a time
and in a batch) delivered once to the queue handler, a retried one with
`attempts` 2; the cron handler's `cron` and time, and its `waitUntil` work;
Cache API `match` after `put` and nothing after `delete`; a TCP echo of
generated bytes; a Durable Object counter that counts 1 to n through
`getByName` and `get(idFromName)`, and its storage (round trips, `list` order,
transactions committed and rolled back, alarms, `blockConcurrencyWhile`);
`env` of `cloudflare:workers` the handler's bindings; and every generated member
present on the live objects. `web-bindings.yml` runs it (`cloudflare-conformance`).

Measured (web-bindings run 43215378780, `cloudflare-conformance`, wrangler
4.152.0's local workerd 1.20261019.1): 321 checks pass and one fails as a
known emulation gap (`available CacheContext`: local `wrangler dev` leaves
`ExecutionContext.cache` undefined, since the cache purge context is a
deployed zone's; `test/fixtures/js-cloudflare/known.json`). No generated
member is missing on the live objects. Size (`test/fixtures/js-cloudflare-size`): a Worker
that reads a KV key through `Lasm.JS.Cloudflare` builds a 610,093-byte
WebAssembly module (776,809 bytes of output), 13,625 bytes more than the same
Worker written with hand-written `Lasm.JS` calls (596,468; 763,178).

### Pinned version and drift

`index.d.ts` of `@cloudflare/workers-types` is fetched from the npm registry at
the pinned version and checked against its SHA-256 hash in
[`cloudflare-api.lock.json`](../scripts/bindings/cloudflare-api.lock.json).
The version is the one generated from the workerd that CI's wrangler runs.
`web-bindings.yml` fails when `cloudflare.idl` or the generated modules differ
from what the pinned file gives. To move to a newer version: change `version`
(and `workerd`, `wrangler`) in `cloudflare-tier3.mjs` and `WRANGLER_VERSION`
in `web-bindings.yml`, run `node scripts/bindings/cloudflare-api.mjs
--update-lock`, then `node scripts/bindings/generate-web.mjs`; decide every new
member or overload the lowering reports, regenerate `library/prebuilt`
(`library-prebuilt.yml`) and review the diff of `cloudflare.idl`.

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
- **Diagnostics.** `Lasm.JS.stats` returns a JSON string with the live counts:
  `values` (JavaScript values Lean holds), `pendingCalls` (JavaScript calls of
  Lean functions awaiting their reply), `functionsLive` (Lean functions that
  JavaScript has not yet garbage-collected), and totals. The interop soak uses
  them to check for leaks.
