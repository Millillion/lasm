# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## New

- **Standard web APIs from Lean: `Lasm.JS.Web`.** `import Lasm.JS.Web` gives
  bindings of the WinterTC Minimum Common Web API, the web APIs that Node 24 and
  26, Bun, Deno, Cloudflare Workers, the Vercel, Netlify and Supabase edge
  functions and browsers all have: `fetch`, `Request`, `Response`, `Headers`,
  `FormData`, `URL`, `URLSearchParams`, `URLPattern`, `crypto` and
  `crypto.subtle`, `TextEncoder` and `TextDecoder`, `Blob` and `File`, readable,
  writable and transform streams, compression streams, `AbortController`,
  `EventTarget` and the events, `MessageChannel`, timers, `queueMicrotask`,
  `structuredClone`, `atob` and `btoa`, `performance`, `console` and
  `WebAssembly`. They are generated from the specifications' WebIDL, so names
  and shapes are the standards' own, with Lean types: `Promise` results are
  `Async`, nullable values `Option`s, dictionaries structures, enums inductive
  types, and JavaScript callbacks are made from Lean functions
  (`EventListener.ofSyncFn`, `UnderlyingSourcePullCallback.ofFn`, …). Each spec
  area is its own module (`import Lasm.JS.Web.Fetch`). Guide and mapping rules:
  docs/JS_BINDINGS.md, "Standard bindings". A conformance suite (WPT's URL data,
  Web Crypto test vectors, round trips) runs them on Node, Bun, Deno, Workers and
  Chromium in CI. `Lasm.Web` is unchanged.

## Improvements

- **Lasm.JS reads and writes Symbol-keyed properties.** `Value.get` and `Value.set` take a key of any type with `ToJS`, as JavaScript's `o[key]` does: a `String` (unchanged), a number (`o.get (3 : Nat)`), or a Symbol `Value` (`Symbol.iterator`, `Symbol.for "k"`). An array key is its string, as in JavaScript; `getFields` still takes strings. Source compatible: existing calls compile unchanged. *API change for Jordan's review:* `get [ToJS κ] (o : Value) (key : κ) …` and `set [ToJS κ] [ToJS α] (o : Value) (key : κ) (x : α)`, previously `(key : String)`. See docs/JS_BINDINGS.md, "Property keys".

## Fixes

- **Bun, Deno, Workers and browsers: `Async` loops of any length (#90).** A loop in `Async` (a recursion, `for`, `List.mapM`) of steps that complete at once (synchronous host calls such as `callMethod`, `bun:sqlite` or D1's `prepare(…).bind(…)`, `IO` actions, `pure`) failed after about 2,000 steps on Deno and Workers and 8,000 on Bun with `RangeError: Maximum call stack size exceeded`. Such loops now run at any length on every target; CI runs 1,000,000 steps on Node, Deno, Bun, workerd and in Chromium, Firefox and WebKit. Lasm's link bounds how deeply `Async`'s binds nest (`library/c/lasm_async.c`): every 128 nested steps, the rest of the loop continues as a queued Lean task. Results, effects and errors are unchanged, and no code changes are needed; the `Std.Async.sleep 0` workaround can be removed. No API change ([EDGE.md](../EDGE.md#async-loops-of-steps-that-complete-at-once-issue-90)).
- **Edge targets: a C-stack overflow traps at once instead of overwriting static data (#126).** The edge link (every `--target` built on the edge runtime: Workers, Deno, Bun, Vercel and Netlify Edge, Supabase, the browser) placed Lean's 1 MiB C stack above the program's static data, with nothing between them. A recursion that used up the C stack before the engine's own stack ran out (unoptimized code, or large frames) kept writing below the stack, over that data, and what happened next depended on what it overwrote: usually a trap, sometimes a wrong `call_indirect`, and on Bun a loop that never ended (the `edge-O0-bun` hang in CI). The stack now comes first in linear memory (`--stack-first`, as the WASI target already does), so an overflow runs below address 0 and traps on its first access, and the instance stops with `Stack overflow: the program used all of its 1 MiB C stack (deep recursion?)`. The Node link driver's edge recordings (both the JSPI and the Asyncify link) were updated to match emcc's link byte for byte.

- **Lasm.JS: a string that begins with U+FEFF keeps it.** On every target the
  host decoded the strings Lean sends with `TextDecoder`'s default, which drops
  a leading byte order mark, so `"\uFEFFtest"` reached JavaScript as `"test"`
  (and Lasm.UI text nodes that began with one lost it). Found by the
  Lasm.JS.Web conformance run (WPT's urlencoded-parser case `\uFEFFtest=\uFEFF`).

## Repository

- **Unused code and dependencies removed (no behaviour change).** The repository no longer depends on `binaryen`, `@yarnpkg/cli-dist`, `pnpm` or `miniflare` (about 400 MB less `node_modules` per checkout and CI job), and the Lean 4.32 `lean/` (`Lasm.IO`) and the unused `runtime/host.cpp`, `core.cpp`, `stack.cpp` and `tasks.inc.cpp` are deleted. The published `@lasm/cli` is unchanged.

## Faster

- **Lasm.JS calls on Node cost about 5 µs when a Lean thread makes them one after another (#171).** They cost 22–24 µs before. Neither thread now goes to sleep between consecutive calls. Calls that pass a 20-field object each way are about twice as fast on Node, and a third faster on the edge hosts (measured on Deno). A lone call, or calls while an HTTP server is under load, cost what they did, and HTTP throughput is unchanged. No API changed ([BENCHMARKS.md](../BENCHMARKS.md#lasmjs-call-cost)).
