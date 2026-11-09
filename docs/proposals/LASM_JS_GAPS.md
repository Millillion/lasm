# Proposal: inline JavaScript and JavaScript classes in Lasm.JS

Status: written 2026-11-09 for Jordan's review. Nothing here is implemented.
It covers two of Lasm.JS's known weaknesses:

1. You cannot write JavaScript inline in a Lean program.
2. You cannot define a JavaScript class in Lean, or subclass one.

Both are API design decisions, so this document sets out the options and
recommends one for each. Jordan decides. (Lasm.JS's other weaknesses are
handled in their own PRs: Symbol-keyed properties, the `Async` depth limit of
issue #90, and the per-call cost.)

## Constraints every option must meet

- **No `eval` and no `new Function` at run time.** The edge link uses
  `-sDYNAMIC_EXECUTION=0` (src/edge/edge-link.mjs). Cloudflare Workers (workerd)
  refuses code generated from strings ("Code generation from strings disallowed
  for this context"). A browser page under a strict Content-Security-Policy
  (no `'unsafe-eval'`) does the same. So any JavaScript that a user writes must
  exist as module source **at build time** and be bundled like any other module.
- **Every target resolves modules statically.** Today a module reaches each
  target this way:
  - **Node:** `require` from the deployment's `node_modules` (src/node-js.mjs `load`).
  - **Deno, Bun, Workers and the other edge targets:** a static module map.
    The generated entry module has one `import * as mN from "…"` per module,
    taken from the `@[js]` bindings plus `package.json` `lasm.edge.modules`
    (src/edge/edge-build.mjs `edgeModules`, `moduleMap`).
  - **Browser:** bundled into the loader (src/browser/browser-build.mjs).
  - **Lasm's own `lasm:<name>` builtin modules** (src/edge/builtin-modules.mjs)
    go through all three paths. A design that produces an ordinary ES module
    file can reuse this machinery unchanged. WASI has no JavaScript, so neither
    feature applies there.
- **The binding check** (src/application-binding-check.mjs) reads the `@[js]`
  records from the .olean files. It loads each module in a separate Node
  process and checks that each export is a function. Generated modules have to
  be loadable by that check, or the check has to skip them on purpose.
- **Per-call cost.** On Node, each Lean → JavaScript call is a host call from a
  Lean thread to the main thread (about 25–35 µs). Each JavaScript → Lean call
  is an event or, for synchronous callbacks, a shared-memory hand-off (about
  20 µs). Inline JavaScript does not change this. A class whose methods are Lean
  functions pays the JavaScript → Lean cost on **every method call**.
- **The API rules** (Jordan's review of developer-facing APIs): add as little API as
  possible, make it Lean-idiomatic, avoid a new syntax form unless it is clearly
  best, and keep the conversions typed (`ToJS`/`FromJS`) rather than stringly.

## 1. Inline JavaScript

### The problem today

Calling an npm export or a global is easy:
`@[js "node:path" "join"] opaque join : String → String → IO String`. Trouble
starts when the JavaScript you need is **not** an existing function. Examples:

- an expression such as `x instanceof Foo`, `typeof x`, `a ?? b` or
  `new Uint8Array(buf, off, len)`;
- a small adapter, for example "call `res.writeHead` and then `res.end`" in one
  host call, or a comparator for `Array.prototype.sort`;
- getting at the `Symbol.iterator` protocol, or doing a `for await` over a stream.

There are two workarounds today:

- **A chain of dynamic calls.** `(← global).get "Reflect"`, then
  `callMethod "apply" …`. It is slow (one host call per step) and unreadable.
- **A local npm package.** You write `ffi/index.mjs`, add
  `"my-ffi": "file:./ffi"` to `package.json`, run `npm install`, and bind it
  with `@[js "my-ffi" "writeAndEnd"]`. This works on every target (npm `file:`
  packages are a supported layout, docs/JS_BINDINGS.md "How npm packages are
  found"). It is also what the binding check and the edge module map already
  understand. But it is several steps of ceremony, and nothing ties the
  JavaScript to the Lean file that uses it.

A relative specifier (`@[js "./ffi.mjs" "f"]`) is not a supported form. On Node
it would resolve against the deployment's `package.json`, and the file is not
copied. On the edge targets, the entry module would import it relative to
itself.

### Prior art

| System | Form | How it ships | Notes |
| --- | --- | --- | --- |
| **wasm-bindgen** (Rust) | `#[wasm_bindgen(module = "/js/foo.js")] extern "C" { fn f(); }` and `#[wasm_bindgen(inline_js = "export function f() {…}")]` | The snippet is copied into the generated package as an ES module | Paths are rooted at the crate. Snippets must be standalone ES modules (no `import`). `inline_js` is meant mainly for macro authors, and hand-written code should prefer `module`. Some output targets are not supported. [Guide: JS snippets](https://wasm-bindgen.github.io/wasm-bindgen/reference/js-snippets.html) |
| **ReScript** | `%raw(\`…\`)` (an expression) and `%%raw(\`…\`)` (top-level code) | Pasted as-is into the generated `.js` | Untyped: you annotate the binding's type yourself and the compiler trusts it. [Embed raw JavaScript](https://rescript-lang.org/docs/manual/embed-raw-javascript) |
| **Kotlin/JS** | `js("typeof o")`, which returns `dynamic` | Parsed at compile time and emitted inline | The argument must be a compile-time constant string. `external` declarations describe existing JavaScript. [JS interop](https://kotlinlang.org/docs/js-interop.html) |
| **PureScript** | `foreign import f :: Int -> Int`, with a **foreign module** `Main.js` beside `Main.purs` that `export`s `f` | The bundler includes the foreign module | No inline form. The FFI file sits next to its source file by convention. [FFI](https://github.com/purescript/documentation/blob/master/guides/FFI.md) |
| **Gleam** | `@external(javascript, "./ffi.mjs", "f") pub fn f(x: Int) -> Int` | The `.mjs` file in `src/` is copied with the compiled output | The path is relative to the Gleam module. The types are trusted. [Externals](https://tour.gleam.run/advanced-features/externals/) |

Every system that has to run under a CSP or on an edge isolate either emits the
JavaScript into a module at build time (wasm-bindgen, ReScript, Kotlin) or
keeps it in a side file next to the source (PureScript, Gleam). None of them
evaluates strings at run time.

### Options

**A. Project-relative module files in `@[js]` (no new API).**
`@[js "./ffi/stream.mjs" "writeAndEnd"] opaque writeAndEnd : Value → Data → IO Unit`.
`lasm build` resolves a specifier that starts with `./` or `../` against the
directory of the Lean source file that declares the binding. (The .olean
records the declaring module, and Lake knows its source path.) It copies the
file, plus any relative files it imports, into the output, exactly as builtin
`lasm:` modules are copied:

- `host/user-modules/` for Node;
- `lasm/modules/` plus an entry in the module map for the edge targets;
- the loader bundle for the browser.

The binding check loads the file directly.

- **Cost.** Build work only. It is the Gleam and PureScript model, and
  wasm-bindgen's `module =`. It has no runtime cost and needs no new syntax.
  Users write real `.mjs` files, so they get editor support, linting and tests.
- **Risk.** The specifier changes meaning: a relative path used to fail. Lean
  sources compiled from the prefix (the library) never use one, so nothing
  breaks.

**B. A module written in the Lean file: `js_module` (one new command).**

```lean
js_module Ffi "
export function writeAndEnd(res, body) { res.writeHead(200); res.end(body); }
"
@[js Ffi "writeAndEnd"] opaque writeAndEnd : Value → Data → IO Unit
```

The command stores the text in the module's environment extension (as `@[js]`
records are stored today). `lasm build` writes it out as a generated
`lasm-inline/<Module>/<Name>.mjs`, and from there it is option A.

- **Cost.** It adds one command and one `@[js]` argument form (an identifier
  instead of a string). This is wasm-bindgen's `inline_js`.
- **Weakness.** The JavaScript is a Lean string, so it has no highlighting, no
  lint and no syntax check until the binding check loads it. That check does
  parse it, so syntax errors still fail the build.

**C. An inline expression: `js% "a ?? b"` with typed holes.**
For example, `js% "typeof {x}" : IO String`, where `{x}` uses `ToJS` and the
result uses `FromJS`. An elaborator lifts each occurrence into a generated
module function (`export const e0 = (x) => typeof x;`) and expands to a call of
that function.

- **Cost.** This is Kotlin's `js()` and ReScript's `%raw` with types. It is the
  most convenient form for one-liners. It is also the most new surface: a term
  elaborator, hole syntax, its own scoping rules, and error positions inside
  strings. Each occurrence still costs a full host call, so it encourages many
  tiny calls, which is the slow pattern on Node.
- **Dependency.** It needs B (or A) underneath anyway.

**D. Runtime `eval` / `new Function`.** Rejected: it fails on Workers, under a
browser CSP, and with `DYNAMIC_EXECUTION=0`. It is listed only so that the
reason it is excluded is on record.

**E. Keep the `file:` package and document it better.** No change. This is the
baseline that A improves on.

### Recommendation

**A now, B later if users ask for it, not C or D.**

- A adds no API. It only makes an existing argument (`@[js "MODULE" …]`)
  accept a path. It matches the two closest functional-language precedents
  (PureScript, Gleam), keeps the JavaScript in real files with real tooling,
  and costs nothing at run time.
- B is a small, separate addition on top of A. Its value is the single-file
  example and agents writing short adapters. Decide on it after A has been
  used.
- C's convenience is not worth its surface, and it encourages the slow
  pattern. On Node, Lasm's lever is fewer host calls, which an adapter module
  gives.

## 2. Defining and subclassing JavaScript classes

### The problem today

Lean can call `new C(…)` (`Value.new`, `@[js "pg" "new Pool"]`), read
properties, and make functions (`Function.ofFn`, `ofSyncFn`). It cannot produce
a **class**, which is a constructor function with a prototype, methods that see
`this`, and possibly `extends Base` with `super(…)`. Some APIs insist on one:

- **Browser:** `customElements.define("my-el", class extends HTMLElement {…})`
  only accepts a class. `connectedCallback` and `attributeChangedCallback` are
  called synchronously by the DOM. This matters for Lasm.Web and Lasm.UI
  interop with web components.
- **Node:** subclasses of `stream.Transform` / `Readable` (`_transform`,
  `_read`), of `EventEmitter`, and of `Error` (so that `instanceof` works for
  callers).
- **Cloudflare Workers:** Durable Objects and RPC entrypoints must be
  **exported classes** of the Worker's entry module:
  `export class Counter extends DurableObject {…}`, named in `wrangler.toml`.
  The platform finds the class by export name, so it has to exist when the
  module loads. No runtime builder can satisfy that. It needs build-time output.
- Frameworks that take a class (NestJS-style controllers, Lit elements).

Today the user writes the class in JavaScript, in a `file:` package as above,
and has its methods delegate to Lean functions passed in:

```js
export function makeCounter(onIncrement) {
  return class Counter extends EventEmitter { increment(n) { return onIncrement(this, n); } };
}
```

Then they bind `makeCounter` and pass `← Function.ofSyncFn …`. This works, but
every class needs hand-written JavaScript.

### Two facts that shape the design

- **Methods JavaScript calls synchronously must be synchronous Lean.** A DOM
  lifecycle callback, a `_transform` that returns a value, or a getter cannot
  wait for a promise. So methods are `ofSyncFn`-like, with all the limits of
  synchronous callbacks on Node (docs/JS_BINDINGS.md: they block the event loop
  and cannot wait for anything that needs Node). Methods that return a promise
  can be `ofFn`. A class API has to let each method choose.
- **`this` is not passed today.** `Function.ofFn` produces a
  `function (...args)` and passes only `args`. A method needs its receiver.

### Prior art

| System | Form | Notes |
| --- | --- | --- |
| **Scala.js** | Non-native JS classes: `class Foo extends js.Object { val x = 1; def m(): Int = … }`. It can extend native or non-native JS classes. `js.constructorOf[Foo]` gives the constructor, and `@JSExportTopLevel` exports it to JavaScript. | `val`/`var` become fields, `def m()` becomes a prototype method, a `def` without parentheses becomes a getter, and `x_=` becomes a setter. Overloads are resolved at run time. [Non-native JS classes](https://www.scala-js.org/doc/interoperability/sjs-defined-js-classes.html) |
| **Kotlin/JS** | `open external class Foo` describes the JavaScript class, and `class Bar : Foo()` subclasses it in Kotlin. `@JsExport` exports Kotlin classes to JavaScript. | Overloaded functions and functions with default parameters in the base class cannot be overridden. [JS interop](https://kotlinlang.org/docs/js-interop.html), [Kotlin from JS](https://kotlinlang.org/docs/js-to-kotlin-interop.html) |
| **wasm-bindgen** | `#[wasm_bindgen] pub struct Foo` with `#[wasm_bindgen] impl Foo { #[wasm_bindgen(constructor)] pub fn new() … }` generates a JavaScript class wrapping the Rust value. | It cannot `extends` a JavaScript class: subclassing is done in a JavaScript snippet. [Exporting a struct](https://wasm-bindgen.github.io/wasm-bindgen/reference/attributes/on-rust-exports/constructor.html) |
| **ReScript / PureScript / Gleam** | No class definitions. You write the class in raw JavaScript or an FFI module. | This is effectively Lasm's status today. |

Only the two systems that compile a whole object-oriented language to
JavaScript (Scala.js, Kotlin) define classes natively. The systems for
functional languages leave classes to JavaScript files.

### Options

**A. Status quo plus file modules.** You write the class in a `.mjs` file
(made easy by option 1A) and bind a factory that takes Lean functions. There
is no new API. It covers every case, including Durable Objects: re-export the
class from a file named in `package.json`.

**B. A runtime class builder in a builtin module (a small library API).**

```lean
structure Class.Spec where
  name : String
  extends? : Option Value := none
  constructor : Option (Value → Array Data → IO Unit) := none       -- runs after super(...args)
  methods : Array (String × Class.Method) := #[]
inductive Class.Method
  | sync (f : Value → Array Data → IO Data)       -- this, args
  | async (f : Value → Array Data → Async Data)   -- returns a promise
  | getter (f : Value → IO Data)
def Class.define (s : Class.Spec) : IO Value      -- the constructor
```

It is implemented by a function in a new builtin module `lasm:class`. That
function builds the class with JavaScript `class extends (Base ?? Object)`
syntax at build time (no `eval`), names it with `Object.defineProperty(C,
'name', …)`, and installs prototype methods that call the Lean functions with
`this` first. It works on every target (Node, the edge targets, the browser),
which covers custom elements, streams, `EventEmitter` and `Error` subclasses.
It does not cover platform-exported classes (Durable Objects).

- **Cost.** One structure, one inductive type and one function. Every method
  call is a JavaScript → Lean call (about 20 µs on Node for `sync`). Lean holds
  the instance as a `Value`, and per-instance Lean state lives in a
  `Std.HashMap` keyed by a field, or in a JavaScript field that holds a handle.
- **Needs** a `this` parameter for Lean functions called from JavaScript. That
  is an internal flag on op 210, not a user API.

**C. Sugar over B: `deriving JSClass` or `@[js_class]` on a structure and its
methods.** It is Scala.js-like: Lean declarations marked as methods generate a
`Class.Spec`. It is nicer to read, but it is a larger elaborator surface
(fields versus getters, `super`, sync versus async per method). It only makes
sense once B has settled.

**D. Build-time exported classes (for platforms that look classes up by export
name).** Example: `@[js_export_class "Counter" extends "cloudflare:workers"
"DurableObject"]` on a `Class.Spec` value. `lasm build` emits
`export class Counter extends DurableObject { constructor(ctx, env) {
super(ctx, env); … } }` into the generated entry module, with methods
forwarding to the Lean spec once the program has started. This is the only
option that makes Durable Objects and Workers RPC entrypoints possible in pure
Lean. It is target-specific (Workers first), and it ties in with
`exportDefault`.

**E. Proxy-based fake classes.** `new Proxy(function(){}, { construct … })`
with no real class. Rejected: `customElements.define` and `extends` checks need
a real constructor with a proper prototype chain, and `instanceof` and
`super` misbehave.

### Recommendation

**B, with D as a follow-up for Workers; A remains the escape hatch, and not C
yet.**

- B is the smallest addition that turns "write JavaScript for every class"
  into a Lean definition. It works on every JavaScript target, needs no
  `eval`, and keeps sync versus async explicit per method, which the semantics
  require.
- D is needed only for exported platform classes. It should be designed
  together with the Workers entry module, when Durable Objects or RPC become a
  goal.
- C is sugar. Revisit it after B has users.

## Summary for review

| Weakness | Recommended | New API | Rejected |
| --- | --- | --- | --- |
| Inline JavaScript | 1A: `@[js "./file.mjs" "f"]` resolved and bundled by `lasm build` | none (a new accepted argument form) | run-time `eval`; `js%` expressions |
| Classes | 2B: `Lasm.JS.Class.define` (a `Class.Spec` with sync/async/getter methods), via a builtin `lasm:class` module; later 2D for Workers' exported classes | one structure, one inductive, one function | Proxy fakes; deriving sugar for now |
