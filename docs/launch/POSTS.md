# Launch posts (drafts)

Short texts for Show HN and social posts. Every number links back to a CI run in
[BENCHMARKS.md](../BENCHMARKS.md) or the guides; keep them that way when editing.
Replace "0.3.0" wording once it is published.

## Show HN

**Title** (under 80 characters):

> Show HN: Lasm – Lean 4 compiled to WebAssembly for Node, the edge and the browser

**Text:**

> Lasm is a compiler that takes ordinary Lean 4 programs (Lake projects, IO, tasks,
> Std) and builds them ahead of time into WebAssembly for Node, Bun, Deno, edge
> isolates (Cloudflare Workers, Vercel/Netlify Edge, Deno Deploy, Supabase), WASI
> hosts (wasmtime, Spin, Fastly Compute) and browsers. It ships on npm, and Lean
> and the whole toolchain come with it:
>
>     npm create @lasm@latest my-app -- --template hono
>
> Why Lean: you can prove properties of the code you deploy. The full-stack
> template has a server, a browser app and a typed API between them. The
> validation rule for requests is written and proved once. A theorem says the
> browser never sends an invalid request. The server re-checks and passes the
> handler a proof, which the storage function demands in its type. The UI
> framework's DOM diff is proved correct against a DOM model.
>
> What's not proved: the JSON/HTTP transport, the JS that applies DOM patches,
> and Lasm itself. Those are tested in CI on Chromium/Firefox/WebKit, Node,
> workerd and the WASI engines.
>
> Costs, measured on a 4-CPU GitHub runner: a Hono app with Lean handlers cold-starts
> in 357 ms (5.3× plain Node) and serves about 9.5k req/s (0.18× plain Node
> `http`; each JS call from Lean crosses threads, about 47 µs). Edge, WASI and
> browser builds are single-threaded and much smaller: a 245 KiB-gzip Worker, a
> 0.9 MiB WASI module answering in about 1 ms per fresh instance, and a 152 KiB
> brotli counter app. The npm install is 370 MiB, and Lean is pinned to 4.35.0.
>
> Edge, Bun and Deno support is in 0.2.0 on npm. Browser apps, the UI framework,
> RPC, WASI/Fastly and `lasm dev` (about 2 s rebuilds) are in the 0.3.0 branch.
>
> There are no premade npm bindings. You declare each JS function you call with one
> `@[js "pkg" "export"]` line, and the build checks it against the installed
> package. Happy to answer anything about the toolchain (Emscripten, wasm64,
> single-threaded Lean on the edge) or the proofs.

## X / Bluesky / Mastodon (thread)

1. Lean 4 now runs where JavaScript runs. Lasm compiles Lean ahead of time to
   WebAssembly for Node servers, Lambda/Vercel/Netlify functions, Cloudflare Workers
   and other edge isolates, WASI/Fastly, and the browser. One npm install, no
   Lean or C toolchain to set up. `npm create @lasm@latest`
2. The pitch: write the server and the frontend in Lean, and prove things about
   them. In the full-stack template, request validation is proved once and holds
   on both sides of the network. The server's storage function takes the proof
   as an argument.
3. The UI framework (Elm architecture, JSX-like `html!`) has a DOM diff that is
   proved correct against a model of the DOM, keyed moves included. It runs within
   1.2× of hand-written JS on most js-framework-benchmark operations.
4. Honest numbers: a Hono + Lean server cold-starts in 357 ms and does about 9.5k
   req/s (0.18× plain Node). A Worker is 245 KiB gzip. A WASI handler answers in
   about 1 ms. The counter app is 152 KiB brotli. Every number comes from a named
   CI run.
5. 0.1.0 (Node, serverless) and 0.2.0 (edge, Bun, Deno) are on npm. 0.3.0 adds
   the browser, Lasm.UI, Lasm.RPC, WASI/Fastly and a 2 s edit loop.
   github.com/Millillion/lasm

## Lean Zulip (#announce or #general)

> **Lasm: Lean 4 → WebAssembly for Node, the edge and browsers.** Lasm builds
> Lean 4.35.0 Lake projects ahead of time into WebAssembly with Lean's own runtime
> (Emscripten; wasm64 with threads on Node, and a single-threaded build with 64-bit
> code lowered to 32-bit memory for the edge, WASI and browsers). Runtime-capable parts of Lean's upstream suite and 19 ecosystem
> packages (Batteries, Aesop, Qq, LSpec, leansqlite, …) were checked on five
> platforms before 0.1.0. Elaboration, tactics and `#eval` run at build time.
> Deployed programs cannot elaborate or use the kernel, and the build rejects
> reachable uses with an explanation. New in the 0.3.0 branch: `Lasm.UI` (with
> a proved-correct DOM diff: `diff_correct`, no `sorry`, standard axioms only),
> and `Lasm.RPC`, where a validation theorem is used by both the browser and the
> server. Feedback very welcome, especially on what else would be worth proving in
> the framework. https://github.com/Millillion/lasm

## One-liners

- "Lean 4, compiled to WebAssembly, on npm: servers, edge functions and browser
  apps you can prove things about."
- "Prove your API validation once; Lasm makes it hold in the browser and on the
  server."
- "`npm create @lasm@latest`: Lean on Node, Workers, Fastly and the browser."
