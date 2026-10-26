# Announcement draft: Lean for the JavaScript and WebAssembly world

> Draft for the launch-week blog post. Numbers are from CI runs named in
> [BENCHMARKS.md](../BENCHMARKS.md) and the guides; update the "0.3.0" wording
> when it is published. Facts to re-check before posting are marked **[check]**.

---

**Lasm compiles Lean 4 to WebAssembly so you can write real servers, serverless
functions, edge functions and browser frontends in Lean, and prove things about the
code you deploy.**

Lean is a programming language and a proof assistant. Its programs are ordinary
functional programs with a fast compiler, and its proofs are checked by the same
tool, about the same code. Until now, though, running Lean meant running a native
Lean binary on a machine you control. Most software people ship today runs
somewhere else: a Node server in a container, a Lambda function, a Cloudflare
Worker, a browser tab.

Lasm closes that gap. It takes an ordinary Lean 4.35.0 project and builds it ahead
of time into WebAssembly plus a small JavaScript host, and it ships as an npm
package, so the only thing you install is Node:

```sh
npm create @lasm@latest my-app -- --template hono
cd my-app && npm install && npm run dev
curl http://localhost:3000/hello/Ada     # {"message":"Hello, Ada, from Lean!"}
```

Lean, Lake and the whole WebAssembly toolchain arrive as exact-pinned npm packages
for your platform. You do not install Lean, a C compiler or Emscripten.

## What you can build

**Servers on Node (0.1.0).** Hono, Express and (0.3.0) Fastify apps whose request
handlers are Lean functions. `import Lasm.JS` calls any npm package or Node API from
Lean through one declaration per function:

```lean
@[js "marked" "parse"] opaque renderMarkdown : String → IO String
```

The build checks every such binding against the installed package, and handlers
run in Lean's `Async`, so awaiting a database query holds no thread.

**Serverless functions (0.1.0).** `lasm build --target lambda` (or `lambda-edge`,
`vercel`, `netlify`, `azure`, `gcf`) builds and packages in one step.

**Edge functions (0.2.0).** `--target workers`, `vercel-edge`, `netlify-edge`,
`deno-deploy` and `supabase-edge` relink the program with a single-threaded Lean
runtime and a pure-JavaScript host. The Hono template is a 1.40 MiB Worker
(245 KiB gzip), and Lean starts in about 50 ms on Node and Deno and 19 ms on Bun
(CI run 40128600109). The compiler itself also runs on Bun and Deno.

**Pure-WebAssembly hosts (0.3.0).** `--target wasi`, `wasi-http` and `fastly` emit
standard modules with no JavaScript at all: wasmtime, wasmer, Spin and Fastly
Compute. A `Lasm.Fetch` handler is a 0.90 MiB module and answers in about a
millisecond on Fastly's Viceroy and `wasmtime serve`, with a fresh instance per
request (CI run 40293231963).

**Browser apps (0.3.0).** `--target browser` produces a static site. `Lasm.Web`
binds the DOM and web APIs, and `Lasm.UI` is an Elm-architecture framework with
JSX-like `html!` markup checked while Lean elaborates:

```lean
def view (n : Int) : Html Msg :=
  html! <main>
          <button onClick={Msg.decrement}>-</button>
          <output>{n}</output>
          <button onClick={Msg.increment}>+</button>
        </main>
```

The counter template is 152 KiB brotli in total and draws its first frame 30 ms
after the module loads in Chromium (CI run 40288509500). On the
js-framework-benchmark operations, `Lasm.UI` stayed within 1.7× of hand-written
JavaScript on every operation and within 1.2× on most (CI run 40302274897).

## The part only Lean can do: the whole stack, verified

`--template fullstack` (0.3.0) is one Lean project with a server, a browser app and
the API between them. The request types and the rules a request must satisfy are
declared once, in a module both sides import, and proved once:

```lean
theorem checkTitle_ok {title : String} (h : checkTitle title = .ok ()) :
    0 < (clean title).length ∧ (clean title).length ≤ maxTitle
```

`Lasm.RPC` makes that theorem hold on both sides of the network. The browser
checks a request before sending it, and there is a theorem saying an invalid one
is never sent. The server checks it again, because it cannot trust the client,
and hands the handler the proof that the check passed. So server code can demand
it in its types:

```lean
def Store.add (s : Store) (title : String) (_ : checkTitle title = .ok ()) : Store × Todo
```

You cannot call that without a proof, and the only way to get one at run time is
from the validation the client also ran. The server renders the first page from
the same view code the browser runs, and the browser hydrates it. The same
`Server.lean` builds for Node, Cloudflare Workers, the other edge platforms, Bun,
Deno and Fastly.

Underneath, `Lasm.UI`'s DOM diff is proved correct: applying the patch it computes
to a model of the DOM gives exactly the new view, keyed moves included
(`Lasm.UI.Proofs.diff_correct`, about 1,260 lines, no `sorry`, checked in CI).

**What is not proved.** The theorems cover the Lean code. The JSON encoding and HTTP
between client and server, the JavaScript that applies patches to the real DOM,
Lasm's compiler and runtime, and the browsers themselves are tested, not proved.
Lean's own compiler is trusted, as in any Lean program. We think this is the
honest boundary: your application logic and the framework's core algorithm are
verified, and the plumbing is tested across Chromium, Firefox and WebKit, Node,
workerd and the WASI engines in CI.

## The honest numbers

Lean on Node runs as WebAssembly with Lean's threads on Node Workers. That has
costs, and we measure them on every release on the same free GitHub runner
(4-CPU Linux x64):

- **Cold start:** a Hono app answers its first request 357 ms after process start,
  5.3× a plain Node `http` server. It is CPU-bound (about 0.55–0.65 s of CPU), so on
  a Lambda-sized 0.29 vCPU share it is about 1.9 s (CI run 40289814978). The edge
  and browser builds have no threads and start in tens of milliseconds.
- **Throughput:** a Hono server with Lean handlers serves about 9,550 requests per
  second, 0.18× plain Node `http` on the same runner, because each JavaScript call
  from Lean crosses threads (about 47 µs). Pure-Lean `Std.Http` on Node is far
  slower (about 650 req/s); use a Node framework or `Lasm.Fetch` for production.
- **Size and memory:** a Hono app's `program.wasm` is 167 KiB brotli, its `dist/`
  8.5 MiB plus `node_modules`; it idles at 212 MiB RSS. Give it 512 MB.
- **Install:** `@lasm/cli` is a 63 MiB download, 370 MiB installed, and the tool
  cache after the first build is 2.5 GB. The first build fetches about 250–275 MB
  once.
- **Edit loop:** `lasm dev` (0.3.0) rebuilds and restarts after a one-function edit
  in about 1.8 s on Linux, 3 s on Apple Silicon and 4 s on Windows CI runners.

## Limits you should know

- **Ahead of time only.** A deployed program cannot elaborate or evaluate new
  Lean, load `.olean` files or use Lean's kernel at run time. Proofs, tactics and
  macros all run while compiling, as usual.
- **Lean 4.35.0 exactly**, and no prebuilt native libraries (C source that a
  package bundles is compiled for you).
- **Single-threaded** on the edge, Bun/Deno, WASI and in the browser; no sockets
  or processes there.
- **Editor support takes one command:** the `Lasm.*` libraries ship inside Lasm,
  so `npx lasm editor` (which `lasm dev` also runs) links Lasm's Lean as an elan
  toolchain for the project; then VS Code's Lean extension resolves
  `import Lasm.UI` with hovers and completion.
- **No premade npm bindings.** You write one `@[js]` line per JavaScript function
  you call. It is quick by hand, and an AI agent does it well; the
  [binding guide](../JS_BINDINGS.md) is written for both.
- **Tested, not deployed.** Every platform is tested in CI with its own local
  runtime, image or emulator (wrangler dev, the Lambda Runtime Interface Emulator,
  Viceroy, Supabase's edge-runtime image, …). Our CI never deploys to a real cloud
  account.

## Try it

```sh
npm create @lasm@latest my-app -- --template hono       # a server (0.1.0+)
npm create @lasm@latest my-app -- --template fullstack  # the verified stack (0.3.0)
```

Read the [README](../../README.md), [Getting started](../GETTING_STARTED.md) and
the [documentation index](../README.md). Lasm is MIT-licensed, and built apps
contain no copyleft code. Issues and questions:
https://github.com/Millillion/lasm/issues.

Lasm is not affiliated with or endorsed by the Lean FRO; Lean is their trademark.
