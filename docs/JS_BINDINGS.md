# Using JavaScript and npm packages from Lean (Lasm.JS)

This guide is written for people **and AI agents** that write bindings. It is
complete: every rule needed to bind an npm package is here, with working examples.

Status: **current source, Phase 4** (candidate `.39891445495` passed five-platform acceptance and the cold-installation gate; awaiting the user's review).
`Async` handlers and bindings (waiting without holding a Lean thread) are
**current source, Phase 5.2, awaiting candidate acceptance**. The design
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
- **Cost: about 25–35 µs per JavaScript call** (measured on Linux x64). Every call crosses from the Lean thread to Node's
  main thread. Make one call per real operation (a query, a sign, an HTTP
  response), not one per tiny step.

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
  - What works inside: JavaScript calls (served inline while the main thread waits)
    and console output.
  - What fails: host operations that complete asynchronously, such as Lean file IO,
    `IO.sleep`, sockets and awaiting promises. They fail with an error that says so.
  - A synchronous callback cannot call another synchronous callback.
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
- **Synchronous callbacks** block Node's event loop. Inside them, host operations
  that complete asynchronously fail.
- **Module loading.** Modules load with `require`: ES modules with top-level await
  cannot be loaded. pnpm/Yarn Plug'n'Play layouts are not supported.
- **Cost per call.** Each call costs about 25–35 µs. An asynchronous callback round
  trip (JavaScript calls Lean, and Lean awaits the answer) costs about 0.27 ms.
  On the 4-CPU benchmark runner, a Hono server with a Lean handler serves about
  9,700 requests per second and Express about 6,300: 0.18× and 0.12× a plain Node
  `http` server, and 15× and 10× Lasm's `Std.Http` server
  ([BENCHMARKS.md](BENCHMARKS.md); measured before `ofFnReply`). Node's main thread,
  which serves every host call, is the limit; use `ofFnReply` and `getFields`.
  Measurements: [JS_INTEROP.md](JS_INTEROP.md).
- **Lasm only.** Programs that use interop run only under Lasm.
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
