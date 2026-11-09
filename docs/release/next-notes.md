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

## Fixes

- **Lasm.JS: a string that begins with U+FEFF keeps it.** On every target the
  host decoded the strings Lean sends with `TextDecoder`'s default, which drops
  a leading byte order mark, so `"\uFEFFtest"` reached JavaScript as `"test"`
  (and Lasm.UI text nodes that began with one lost it). Found by the
  Lasm.JS.Web conformance run (WPT's urlencoded-parser case `\uFEFFtest=\uFEFF`).
