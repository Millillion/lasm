# Using JavaScript and npm packages from Lean (Lasm.JS)

This guide is written for people **and AI agents** that write bindings. It is
complete: every rule needed to bind an npm package is here, with working examples.

Status: **current source, not yet in an accepted candidate** (Phase 4). The design
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

- **`IO R`**: a returned promise is **awaited**, blocking the calling Lean thread.
  Then the value is converted to `R`.
- **`IO (Task (Except IO.Error R))`**: the promise is not awaited. The task finishes
  when it settles, and no Lean thread is blocked meanwhile. Use `IO.wait`, or
  `await` in `Std.Async`.

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
| `p.await Nat` / `p.toTask Nat` | `await p` (blocking / as a Lean task) |
| `v.describe` | a short description (`function express (2 parameters)`) |
| `obj [("k", toJS 1)]` | `{ k: 1 }` (a `Data` argument) |
| `d.field "k"` | the field `k` of copied data (`undefined` if absent) |

Example (`pg`):

```lean
@[js "pg" "new Pool"] opaque newPool : Data → IO Value

def rows (pool : Value) (sql : String) (params : Array Data) : IO (Array Data) := do
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

## Callbacks: Lean functions called by JavaScript

```lean
Function.ofFn  (f : Array Data → IO Data) : IO Value      -- async: JavaScript gets a function returning a Promise
Function.ofFn1 (f : α → IO β) / Function.ofFn2 (f : α → β → IO γ)   -- typed forms
Function.ofSyncFn (f : Array Data → IO Data) : IO Value   -- synchronous
Function.ofSyncFn2 (f : α → β → IO γ)
```

- **Asynchronous (`ofFn`), the default for handlers.** Each call is queued to the
  Lean side and runs as a Lean task. It may make JavaScript calls and wait for them.
  Its result resolves the promise, and a Lean error rejects it with an `Error`. HTTP
  handlers (Express, Hono) and event listeners use this.
- **Synchronous (`ofSyncFn`), only where JavaScript needs the result immediately**
  (a sort comparator, a `map` function). Node's main thread waits while the Lean
  function runs, about 20 µs per call plus the function, so the event loop is blocked.
  - What works inside: JavaScript calls (served inline while the main thread waits)
    and console output.
  - What fails: host operations that complete asynchronously, such as Lean file IO,
    `IO.sleep`, sockets and awaiting promises. They fail with an error that says so.
  - A synchronous callback cannot call another synchronous callback.
- **Lifetime.** The JavaScript function holds the Lean closure until JavaScript
  garbage-collects the function.

Pass a callback where JavaScript expects a function:

```lean
let handler ← Function.ofFn fun args => do …; return .undefined
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

Express handler (from `Express.lean`):

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

Hono handler (from `Hono.lean`), which returns the `Response` that `c.json` creates:

```lean
@[js "hono" "new Hono"] opaque newHono : IO Value
@[js "@hono/node-server" "serve"] opaque serve : Data → Value → IO Value

  let handler ← Function.ofFn fun args => do
    let .ref c _ := args[0]! | throw (IO.userError "unexpected arguments")
    let path ← (← c.get "req").get "path" String
    c.callMethod "json" #[obj [("path", toJS path)], toJS 200] Data
  let _ ← app.callMethod "all" #[toJS "*", toJS handler]
```

## Checklist for writing a binding (agents)

1. Find the export in the package's docs or `node_modules/<pkg>/package.json`
   (`main`/`exports`), and whether it is a function, a class (use `"new …"`), the
   module itself (`""`) or a global (`"globalThis"`).
2. Choose Lean argument types with `ToJS`. For option objects use `Data` and `obj […]`.
3. Choose the result type. Use `Value` for objects you will call methods on, and
   `Data` or a `deriving FromJS` structure for plain results. Use `IO R` to await
   promises, or `IO (Task (Except IO.Error R))` to not block.
4. For methods and properties of returned objects, use `callMethod`,
   `callMethodAwait`, `get` and `set`.
5. Build with `npx lasm build`. The binding check reports wrong exports. A wrong
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
  `examples/js-crud` serves `GET /health` at about 4,600 (Express) and 5,200 (Hono)
  requests per second with 16 connections on Linux x64. That is about 3.5× Lasm's
  `Std.Http` server and about a fifth of plain Node.
  Measurements: [JS_INTEROP.md](JS_INTEROP.md).
- **Lasm only.** Programs that use interop run only under Lasm.
