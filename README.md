# Lasm

**Lean 4 for the JavaScript and WebAssembly world.** Write servers, serverless
functions, edge functions and browser frontends in Lean, compile them ahead of time
to WebAssembly, and prove things about the code you actually ship.

Lasm is a compiler and toolchain on npm. It builds ordinary Lean 4.35.0 (Lake
projects, dependencies, `IO`, tasks, `Std`) into a `dist/` for the platform you
choose. You install only a JavaScript runtime; Lasm brings Lean, Lake and its build
tools as npm packages. No Lean, C compiler or Emscripten to set up.

## Platforms

Releases: **0.1.0**, **0.2.0**, **0.3.0**, **0.3.1** and **0.3.2** are on npm ([0.3.0 notes](docs/release/0.3.0-notes.md), [0.3.1](docs/release/0.3.1-notes.md), [0.3.2](docs/release/0.3.2-notes.md)).
Every row is tested in CI with the platform's own local runtime, image or emulator;
by project policy CI never deploys to a real cloud account
([how each is tested](#supported-platforms)).

**Develop on** (where the `lasm` compiler runs):

| | Supported | Since |
| --- | --- | --- |
| Operating systems | Linux x64 and arm64 (glibc 2.34+), macOS x64 and arm64, Windows x64 | 0.1.0 |
| Node | 24 or newer (tested 24.0.0, 24.22.1, 26.12.1) | 0.1.0 |
| Bun, Deno (as the only runtime, no Node needed) | Bun 1.4.4, Deno 2.9.6 tested | 0.2.0 |

Windows ARM64 and Alpine/musl are not build machines (built apps run on Alpine).

**Deploy to** (`lasm build --target …`):

| Kind | Platforms | Target | Since |
| --- | --- | --- | --- |
| Node servers and programs | Any Linux, macOS or Windows host with Node 24+; Docker/Kubernetes, Cloud Run, Fly.io, Railway, Render, Heroku, DigitalOcean | `node` (default) | 0.1.0 |
| Serverless functions | AWS Lambda (zip or container image), Lambda@Edge, Vercel Functions, Netlify Functions, Azure Functions, Google Cloud Functions | `lambda`, `lambda-edge`, `vercel`, `netlify`, `azure`, `gcf` | 0.1.0 |
| Edge functions | Cloudflare Workers, Vercel Edge, Netlify Edge, Deno Deploy, Supabase Edge Functions | `workers`, `vercel-edge`, `netlify-edge`, `deno-deploy`, `supabase-edge` | 0.2.0 |
| Bun and Deno servers and programs | Bun 1.3.14+, Deno 2.x | `bun`, `deno` | 0.2.0 |
| Fastly Compute | Fastly (tested with Viceroy) | `fastly` | 0.3.0 |
| WASI | wasmtime, wasmer, Node's `node:wasi` | `wasi` | 0.3.0 |
| wasi-http | `wasmtime serve`, Spin | `wasi-http` | 0.3.0 |
| Browsers | Chrome, Edge, Firefox, Safari: a static site, or a Vite app (`@lasm/cli/vite`) | `browser` | 0.3.0 |

Node builds have Lean's full runtime (threads, files, processes, sockets). The
edge, Bun/Deno, WASI and browser builds run Lean single-threaded, without sockets
or processes (and without files, except on WASI); the rest of Lean works.

## 60-second start

You need Node 24+ with npm (or Bun or Deno, [see here](docs/BUN_DENO.md)).

```sh
npm create @lasm@latest my-app -- --template hono
cd my-app && npm install && npm run dev
curl http://localhost:3000/hello/Ada        # {"message":"Hello, Ada, from Lean!"}
```

The first build on a new machine fetches Lean and the build tools once (about
250–275 MB; the first build including that took 24 s on the Linux CI runner).
`npm run build` writes `dist/`, which needs only Node (`node dist/main.mjs`); or
build for a platform: `npx lasm build Main.lean --target workers`. With 0.3.0,
`npm run dev` is `lasm dev`, which rebuilds and restarts in about 2 s per edit.

A single file needs no project. Save this complete program as `Main.lean`:

```lean
def main : IO Unit := do
  IO.println s!"Hello from Lean! 2 + 3 = {2 + 3}"
```

`npx @lasm/cli Main.lean` builds and runs it (`Hello from Lean! 2 + 3 = 5`).

| Template (`--template …`) | What you get | Since |
| --- | --- | --- |
| `plain` (default) | A Lean command-line program | 0.1.0 |
| `hono`, `express` | A Hono or Express server with Lean request handlers (`Lasm.JS`); Hono also deploys to the edge, Bun and Deno | 0.1.0 |
| `std-http` | An HTTP server in pure Lean (`Std.Http`); also builds natively | 0.1.0 |
| `fastify` | A Fastify 5 server with Lean route handlers | 0.3.0 |
| `fetch` | One pure-Lean HTTP handler (`Lasm.Fetch`) for Node, the edge, Bun, Deno, Fastly, WASI and Spin | 0.3.0 |
| `web` | A browser app in Lean (`Lasm.UI`) | 0.3.0 |
| `fullstack` | A server, a browser app and a typed API between them, validation proved once for both sides | 0.3.0 |

`--deploy <target>` (repeatable) adds a platform's files and `npm run build:<target>`.
Next: [Getting started](docs/GETTING_STARTED.md) (a server, an npm package called
from Lean, a container, a function platform) and the
[documentation index](docs/README.md).

## The whole stack in Lean, verified

`npm create @lasm@latest my-app -- --template fullstack` (**0.3.0**) creates
one Lean project with a server (`Lasm.Fetch`), a browser app (`Lasm.UI`) and the API
between them (`Lasm.RPC`). The rule a request must satisfy is written and proved
once, in `Shared.lean`, which both sides import
([templates/fullstack](templates/fullstack)):

```lean
-- Shared.lean
@[irreducible] def checkTitle (title : String) : Except String Unit :=
  let n := (clean title).length
  if n = 0 then .error "Write something first."
  else if n > maxTitle then .error s!"Keep it under {maxTitle} characters."
  else .ok ()

/-- Proved once, holds in the browser and on the server. -/
theorem checkTitle_ok {title : String} (h : checkTitle title = .ok ()) :
    0 < (clean title).length ∧ (clean title).length ≤ maxTitle := by
  unfold checkTitle at h
  by_cases h0 : (clean title).length = 0
  · simp [h0] at h
  · by_cases h1 : (clean title).length > maxTitle
    · simp [h0, h1] at h
    · omega

def addTodo : Endpoint NewTodo Todo := { name := "addTodo", validate := fun r => checkTitle r.title }
```

```lean
-- Server.lean: storing a todo demands the proof that its title passed the check,
-- and `addTodo.serve` hands the handler that proof (`ok`) after re-validating.
def Store.add (s : Store) (title : String) (_ : checkTitle title = .ok ()) : Store × Todo :=
  let t := { id := s.next, title := clean title, done := false }
  ({ todos := s.todos.push t, next := s.next + 1 }, t)

  addTodo.serve fun req ok => do
    let (s, t) := (← load kv).add req.title ok
    save kv s
    return .ok t
```

```lean
-- Client.lean: a theorem about the browser app: it never sends an invalid title.
theorem add_invalid (m : Model) (e : String) (h : checkTitle m.draft = .error e) :
    (update .add m).2.effects = [.msg (.added (.error (.invalid e)))] :=
  addTodo.call_invalid { title := m.draft } Msg.added "" e h
```

The server renders the first page from the shared view and the browser app hydrates
it. The same `Server.lean` builds for Node, Workers, the other edge platforms, Bun,
Deno and Fastly. `Lasm.UI`'s DOM diff is itself proved correct against a model of
the DOM (`Lasm.UI.Proofs.diff_correct`, keyed moves included).

**What is proved, and what is tested.** Proved in Lean: your theorems (above),
`Lasm.RPC`'s guarantees (the server's handler only runs on requests that pass
`validate`; the client never sends one that fails it) and the correctness of
`Lasm.UI`'s diff against its DOM model. Not proved, tested in CI instead: the
JSON encoding and HTTP transport between client and server, the JavaScript that
applies patches to the real DOM, the Lasm compiler and runtime themselves, and
the browsers. Lean's own compiler is trusted, as in any Lean program. Details:
[UI.md](docs/UI.md#what-is-proved), [RPC.md](docs/RPC.md#what-is-proved).

## Measured numbers

All numbers come from CI on free GitHub runners (4-CPU AMD EPYC, Linux x64), with
the run named; full tables, method and caveats in [BENCHMARKS.md](docs/BENCHMARKS.md).

| What | Number | Source |
| --- | --- | --- |
| Node: Hono + Lean handler, cold start to first HTTP response | 357 ms (plain Node `http`: 5.3× faster) | candidate 0.1.0-experimental.40282965569 |
| Node: same, on a fraction of a CPU (1 / 0.58 / 0.29 vCPU) | 532 ms / 948 ms / 1,909 ms | run 40289814978 |
| Node: Hono + Lean handler, throughput / p99 | 9,550 req/s / 7.3 ms (plain Node `http`: 53,700 req/s) | candidate 0.1.0-experimental.40282965569 |
| Node: Hono app `program.wasm` (brotli) / whole `dist/` | 167 KiB / 8.5 MiB plus 1.4 MiB `node_modules` | same |
| Node: memory, Hono app idle / under load | 212 MiB / 389 MiB RSS | same |
| Cloudflare Workers: Hono app bundle | 1.40 MiB (245 KiB gzip; limit 64 MiB) | workers run 40128600109 |
| Edge runtime start (instantiate, initialize, `main`) on Node / Deno / Bun | 51 / 48 / 19 ms | workers run 40128600109 |
| Browser: counter app, total transfer | 152 KiB brotli (Wasm + loader) | browser run 40288509500 |
| Browser: counter, module evaluated to first frame (Chromium, warm) | 30 ms | browser run 40288509500 |
| Browser: js-framework-benchmark operations vs. hand-written JS | within 1.7× on every operation, most within 1.2× | browser run 40302274897 |
| WASI: `Lasm.Fetch` handler module, `--target wasi` / `wasi-http` | 0.90 MiB / 0.94 MiB (about 230–245 KB gzip) | wasi run 40293231963 |
| Fastly (Viceroy) / `wasmtime serve`: per request, fresh instance each | 1.17 ms / 1.04 ms median | wasi run 40293231963 |
| `lasm dev`: rebuild after a one-function edit, Hono template project | 1.8 s Linux x64, 1.8 s Linux arm64, 2.9–3.2 s Apple Silicon, 4.0 s Windows | runs 40289712451, 40296021942, 40298630380 |
| `lasm dev --target browser`: rebuild after a view edit | 1.6–1.7 s | browser run 40310922142 |
| `npm install @lasm/cli`: download / installed | 63 MiB / 370 MiB | candidate 0.1.0-experimental.40282965569 |
| First build including the one-time tool download | 24 s (tool cache afterwards: 2.5 GB) | same |

**Read these honestly.** Lean on Node pays for WebAssembly and its threads: a cold
start is CPU-bound (about 0.55–0.65 s of CPU), so it is 5–8× a plain Node process
and grows on small serverless CPU shares; each JavaScript call from Lean costs about
45–50 µs, so a Hono server with Lean handlers serves 0.18× the requests of plain
Node `http` on the same runner. Pure-Lean `Std.Http` on Node is much slower (649
req/s); use Hono, Express, Fastify or `Lasm.Fetch` for production HTTP. The edge
and browser builds are smaller and start faster (no threads). Arithmetic on
numbers with thousands of digits is slower than native Lean (no GMP).

## Known limitations

- **Ahead of time only.** A deployed program cannot elaborate, evaluate or compile
  Lean, load `.olean` module data or plugins, or use Lean's C++ compiler/kernel at
  run time ([exact list](#lean-support-and-restrictions)). Proofs, tactics,
  macros and `#eval` run while compiling, as usual.
- **Lean 4.35.0 exactly.** Other `lean-toolchain` versions are rejected with a
  message.
- **Editor support needs one step.** `Lasm.*` libraries ship inside Lasm, so the
  Lean editor resolves `import Lasm.UI` (and the rest) only after `npx lasm editor`
  (0.3.0; `lasm dev` and `lasm build` also run it) links Lasm's Lean as an
  elan toolchain for the project ([editor setup](docs/GETTING_STARTED.md#editor)).
- **Node:** at least 512 MB of memory per app; about 22 GB of virtual address
  space reserved; no prebuilt native libraries (`-l`, shared libraries); a
  package's bundled C source is compiled for you.
- **Edge, Bun/Deno, browser, WASI:** single-threaded Lean; no sockets, processes or
  signals; no files except on WASI. In the browser, blocking waits stop the app
  unless built with `--suspend jspi` for a browser with JSPI; use `Async`.
- **No premade bindings.** Lasm ships no wrappers for npm packages: you declare the
  functions you call with one `@[js "package" "export"]` line each (by hand or with
  an AI agent; [JS_BINDINGS.md](docs/JS_BINDINGS.md)). `Lasm.Web` covers the core
  web platform.
- **Platforms:** no Windows ARM64 and no Alpine/musl build machines (built apps run
  on Alpine). Hosted platforms are tested with their local tools, never with a
  real account.

The full list with exact boundaries is in the reference below.

## Documentation

- **Start:** [Getting started](docs/GETTING_STARTED.md) ·
  [All documentation](docs/README.md)
- **Guides:** [servers and npm interop](docs/JS_BINDINGS.md) ·
  [serverless and containers](docs/deploy/README.md) · [edge](docs/EDGE.md) ·
  [Bun and Deno](docs/BUN_DENO.md) · [browser](docs/BROWSER.md) and
  [Lasm.UI](docs/UI.md) · [full stack (Lasm.RPC)](docs/RPC.md) ·
  [Lasm.Fetch](docs/FETCH.md) · [WASI and Fastly](docs/WASI.md) ·
  [the edit loop](docs/DEVELOPER_WORKFLOW.md#lasm-dev)
- **Evidence:** [benchmarks](docs/BENCHMARKS.md) · [where apps run](docs/DEPLOYMENT.md) ·
  [language coverage](docs/LANGUAGE_COVERAGE.md) · [compatible Lean packages](docs/COMPATIBILITY.md) ·
  [decisions](docs/DECISIONS.md)

---

# Reference

Everything below is the precise contract: every command and option, supported
machines and platforms, and exactly what a deployed Lean program cannot do.

## CLI reference

Install in a project with `npm install -D @lasm/cli` (the bin is `lasm`), or run
without installing: `npx @lasm/cli Main.lean`. `npm create @lasm` runs `lasm init`
of the same `@lasm/cli` version with the arguments unchanged. With the `Main.lean`
from the [quick start](#60-second-start):

```sh
npx lasm Main.lean                          # build (dev profile) and run: Hello from Lean! 2 + 3 = 5
npx lasm build Main.lean                    # write dist/ (release profile)
npx lasm --version                          # version, Lean, runtime and platform (for bug reports)
node dist/main.mjs                          # run the deployment: only Node is needed
npx lasm build Main.lean --target lambda    # dist/ and an AWS Lambda zip
```

| Command or option | Example | Effect |
| --- | --- | --- |
| Run (default) | `npx lasm Main.lean` | Build (dev profile) and run Lean `main`. `npm run dev` in a `plain` project runs this. |
| Explicit run | `npx lasm run Main.lean` | Same as the default command. |
| Run a release build | `npx lasm Main.lean --release` | Build and run exactly what `lasm build` deploys. |
| Program arguments | `npx lasm Main.lean -- hello "two words"` | Pass arguments to `main (args : List String)`. |
| Watch, rebuild, restart (0.3.0) | `npx lasm dev`, `npx lasm dev Main.lean --target workers -- arg` | Watch the Lean sources and the Lake/npm configuration, rebuild after each change (dev profile, one long-lived build worker) and restart the program (`--target node`, `bun`, `deno`; default: the runtime running Lasm). A build error is printed with its file, line and source line; the last good program keeps running. Edge targets only rebuild their output directory, which the platform's own local server serves (Lasm never starts platform tools or browsers). `--target browser` serves the app with live reload (`--port`, `--host`, `--no-watch`); several outputs build together: `--target node=Server.lean,browser=Client.lean`. `--release` builds the release profile, `--no-run` only rebuilds, `rs` + Enter rebuilds and restarts. [Details](docs/DEVELOPER_WORKFLOW.md#lasm-dev). |
| Build | `npx lasm build Main.lean` | Write `dist/` (release profile); do not run the application. |
| Dev build | `npx lasm build Main.lean --dev` | Write `dist/` faster, without the size optimizations. |
| Output directory | `npx lasm build Main.lean --output "app dist"` | Choose the deployment directory. `lasm build Main.lean "app dist"` is an alias. |
| Function platforms | `npx lasm build Main.lean --target lambda` | Build `dist/`, then package it: `node` (default; `dist/` only), `lambda` (`lambda.zip`), `lambda-edge` (`lambda-edge.zip`), `vercel` (`.vercel/output`), `netlify` (`netlify/functions/lasm`), `azure` (`azure-functions/`), `gcf` (`gcf/`). `--target=vercel` also works. Lasm never installs or starts the platform's CLI. [Recipes](docs/deploy/README.md). |
| Edge isolates (0.2.0) | `npx lasm build Main.lean --target workers` | Relink single-threaded with a pure-JS host: `workers` (`workers/`), `vercel-edge` (`api/lasm.mjs`, `api/_lasm/`), `netlify-edge` (`netlify/edge-functions/lasm.mjs`, `netlify/lasm/`), `deno-deploy` (`deno/main.mjs`), `supabase-edge` (`supabase/functions/<name>/`; Asyncify, since Supabase's runtime has no JSPI). The edge runtime ships inside `@lasm/cli`. Guides: [Workers](docs/deploy/workers.md), [Vercel Edge](docs/deploy/vercel-edge.md), [Netlify Edge](docs/deploy/netlify-edge.md), [Deno Deploy](docs/deploy/deno-deploy.md), [Supabase](docs/deploy/supabase-edge.md); [design and limits](docs/EDGE.md). |
| Bun and Deno (0.2.0) | `bunx --bun @lasm/cli Main.lean`, `deno run -A npm:@lasm/cli Main.lean`, `bun create @lasm my-app --template hono` | The compiler runs with Bun or Deno as its only JavaScript runtime and produces the same bytes. Under Bun or Deno the default target is that runtime: `--target bun` writes `bun/main.mjs`, `--target deno` writes `deno/main.mjs` (portable profile). Deno skips npm versions younger than 24 hours: right after a release, pass `--minimum-dependency-age=0`. [Bun and Deno](docs/BUN_DENO.md). |
| Browser (0.3.0) | `npx lasm build Main.lean --target browser` | Write `dist/` as a static site: `app.<hash>.js` (the loader: `mount(element, { flags, hydrate })`, auto-mount of `<div data-lasm-app>`), `app.<hash>.wasm`, brotli and gzip copies, `app.js`, `index.html` (yours with the loader injected, or a generated page), your `public/` files and `lasm-manifest.json`. `--suspend jspi` lets blocking waits suspend where the browser has JSPI. `--bundler` leaves npm imports for a bundler; in Vite: `import lasm from '@lasm/cli/vite'`, then `import app from './Main.lean?lasm'`. Web APIs from Lean: `import Lasm.Web`. Guides: [BROWSER.md](docs/BROWSER.md), [UI.md](docs/UI.md), [deploying](docs/deploy/browser.md). |
| WASI, wasi-http, Fastly (0.3.0) | `npx lasm build Main.lean --target wasi` (or `wasi-http`, `fastly`) | No JavaScript. `wasi` writes `wasi/main.wasm` (`wasi_snapshot_preview1`: `wasmtime run --dir . wasi/main.wasm`, wasmer, `node:wasi`); `wasi-http` writes `wasi-http/main.wasm`, a wasi:http/proxy@0.2 component (`wasmtime serve`, Spin); `fastly` writes `bin/main.wasm` and `pkg/<name>.tar.gz` (`fastly compute serve`/`deploy`). No sockets, processes or signals. [WASI.md](docs/WASI.md), [Fastly](docs/deploy/fastly.md). |
| HTTP in pure Lean (0.3.0) | `import Lasm.Fetch` … `def main := Lasm.Fetch.serve handle` | One `Request → Async Response` handler serves Node (`$HOST:$PORT`), the edge targets, Bun, Deno, Fastly, wasi-http and WASI as CGI; `Lasm.Fetch.fetch` sends requests; `Response.streaming` streams. [FETCH.md](docs/FETCH.md). |
| Force rebuilding | `npx lasm build Main.lean --rebuild` | Ignore a cached application build. |
| Detailed diagnostics | `npx lasm Main.lean --verbose` | Show compiler and linker details. |
| Help | `npx lasm --help`, `npx lasm init --help` | Show usage; `-h` is an alias. |
| New project | `npm create @lasm@latest my-app -- --template hono` or `npx @lasm/cli init my-app --template hono` | Create a Lake project in a new or empty directory (`Main.lean`, `App.lean`, lakefile, `lean-toolchain`, `package.json`, `README.md`, `.gitignore`, and for servers a `Dockerfile` and `.dockerignore`). Templates: see [Quick start](#60-second-start). `--deploy` (repeatable) adds a platform's files and `npm run build:<target>`: `lambda` (`Dockerfile.lambda`, a container image), `lambda-zip`, `lambda-edge`, `vercel`, `netlify`, `azure`, `gcf`; `workers`, `vercel-edge`, `netlify-edge`, `deno-deploy` (templates `hono`, `fetch`, `fullstack`), `supabase-edge` (`hono`); `fastly`, `wasi-http`, `spin` (`fetch`, `fullstack`), `wasi` (`fetch`, `plain`). The `fetch` and `fullstack` templates and their targets are 0.3.0. Writes files only; run `npm install` next. `-t` is an alias of `--template`; `--template=hono` also works. |
| Package an existing build | `npx lasm package --target lambda` | Package a built server (default `dist/`) for a function platform without rebuilding: the same targets and outputs as `lasm build --target`, except `node`. `--output PATH` chooses the output. Checks the platform's size limit. Refuses a dev build unless `--allow-dev`. For a browser build, `npx lasm package dist --target browser` checks every file against `lasm-manifest.json` and writes `_headers`. |
| Editor support (0.3.0) | `npx lasm editor` | Make the Lean editor (VS Code's Lean 4 extension, any Lean language server client) resolve `import Lasm.*` in this Lake project: links Lasm's Lean 4.35.0 with its library as the elan toolchain `lasm-4.35.0-…` and sets it as the directory's elan override (`elan override unset` undoes it). `lasm init` (when Lasm's Lean is already installed), `lasm dev` and `lasm build` do the same, printing one line per project, except on CI or with `LASM_EDITOR=0`. [Editor setup](docs/GETTING_STARTED.md#editor). |
| Cache repair | `npx lasm cache repair` | Offline verification and removal of invalid tools and abandoned staging. Refuses an active build. |

`--rebuild` and `--verbose` work with run and build. `--output` and `--target` are
build-only; arguments after `--` are run-only. The application's exit status is
preserved. There is no install, clean, uninstall or version subcommand.

**Build profiles.** Both link the same program with the same libraries and are
deterministic. **release** (`lasm build`, `lasm Main.lean --release`): the full
Binaryen size optimization; byte-reproducible; the one to deploy. **dev**
(`lasm Main.lean`, `lasm dev`, `lasm build --dev`): leaves those passes out and
compiles your modules at `-O1`; it behaves the same, builds several seconds faster,
and its `program.wasm` is about 15–20 % larger. A dev rebuild starts from the
project's previous build, so its bytes can depend on that build. `build-info.json`
records `"profile"`. `lasm package` and `lasm build --dev --target <platform>`
refuse a dev build unless you pass `--allow-dev`.

**Environment variables** (all optional):

| Variable | Example | Effect |
| --- | --- | --- |
| `LASM_TOOLCHAIN_CACHE` | `LASM_TOOLCHAIN_CACHE=/data/lasm-cache npx lasm Main.lean` | Move the managed tool cache ([default locations](docs/NODE_SUPPORT.md)). |
| `LASM_BUILD_JOBS` | `LASM_BUILD_JOBS=2 npx lasm build Main.lean` | Threads for Binaryen's optimizer (default: the CPUs, at most 8). The output is the same for any value. |
| `LASM_EDITOR` | `LASM_EDITOR=0 npx lasm build Main.lean` | `0`: `lasm init`, `lasm dev` and `lasm build` leave the editor setup alone ([editor setup](docs/GETTING_STARTED.md#editor)). |
| `LASM_THREAD_POOL` (built apps; 0.3.0) | `LASM_THREAD_POOL=0 node dist/main.mjs` | Lean thread Workers started before `main` (0–64, default 1). [Measurements](docs/BENCHMARKS.md#cold-start-on-a-fraction-of-a-cpu). |
| `LASM_ARTIFACT_SOURCE` | `LASM_ARTIFACT_SOURCE=npm npx lasm Main.lean` | `auto` (default): `@lasm/…` npm tool packages when present, else HTTPS; `npm`: never download directly; `https`: ignore the npm packages. |
| `LASM_DOWNLOAD_ATTEMPTS`, `LASM_DOWNLOAD_CONNECT_MS`, `LASM_DOWNLOAD_IDLE_MS`, `LASM_DOWNLOAD_TOTAL_MS` | `LASM_DOWNLOAD_TOTAL_MS=14400000 npx lasm Main.lean` | Download retries and timeouts ([defaults and ranges](docs/INSTALLATION_HARDENING.md#transfers)). |
| `NODE_USE_ENV_PROXY`, `HTTPS_PROXY`, `NO_PROXY`, `NODE_EXTRA_CA_CERTS` (Node's own) | `NODE_USE_ENV_PROXY=1 HTTPS_PROXY=http://proxy:8080 npx lasm Main.lean` | Proxies and private CAs ([corporate networks](docs/INSTALLATION_HARDENING.md#corporate-networks)). |

Other `LASM_*` variables in the source are maintainer diagnostics, not a supported
interface.

**Installation.** `npm install @lasm/cli` brings Lean and the build tools as
exact-pinned `@lasm/…` npm packages for your platform through your own registry,
proxy and cache. The Lake/`Lean`-import data and, only for Lake projects with C
code, the C tier (`@lasm/lean-c-<platform>`) are fetched with your npm on first use.
The terminal shows progress; later builds reuse verified tools and unchanged
outputs. On a new machine, without the download, a first Hono build took 25.7 s
(Linux x64), 27.8 s (Linux arm64), 44.4 s (Windows), 58.7 s (Apple Silicon) and
141.9 s (Intel Mac) on the CI runners
([build time](docs/BENCHMARKS.md#build-time-where-it-goes-and-the-two-profiles-current-source), run 40131930601).
Cache locations and recovery: [NODE_SUPPORT.md](docs/NODE_SUPPORT.md),
[INSTALLATION_HARDENING.md](docs/INSTALLATION_HARDENING.md).
**Git** is needed only for Lake projects with Git or Reservoir dependencies; Lasm
uses the `git` on your `PATH` and says how to install it when it is missing.

**Existing Lake projects** build with `npx lasm build Main.lean` from the project
directory. Pin `leanprover/lean4:v4.35.0` in `lean-toolchain`; other versions are
rejected with `Unsupported Lean toolchain … Lasm supports Lean v4.35.0`. A
[per-package compatibility list](docs/COMPATIBILITY.md) covers Batteries, Cli,
LSpec, Plausible, Aesop, Qq, leansqlite, UnicodeBasic, MD4Lean, lean-zip,
lean4-parser, lean-redis and others; packages not on it are untested.

## JS/npm interop (Lasm.JS)

`import Lasm.JS` calls Node built-ins, globals such as `fetch`, and npm packages from
Lean, and lets JavaScript call Lean functions (Express, Hono and Fastify handlers,
callbacks). Put a `package.json` next to the lakefile (or `Main.lean`) and run
`npm install`; `lasm build` copies the production dependencies into
`dist/node_modules` and checks every binding against the installed packages
(a misspelled export stops the build with `Lasm.JS binding check failed`).
A complete program:

```lean
import Lasm.JS
open Lasm.JS

/-- `await fetch(url, init)` (Node's global fetch) -/
@[js "globalThis" "fetch"] opaque fetch : String → Data → IO Value

def main : IO Unit := do
  let response ← fetch "https://example.com" (obj [])
  IO.println s!"{← response.get "status" Nat}: {(← response.callMethodAwait "text" #[] String).length} characters"
```

Each JavaScript call crosses from a Lean thread to Node's main thread (about
45–50 µs on the benchmark runner). Handlers run in `Async`: awaiting JavaScript in
them (`callMethodAwait`, a binding declared `→ Async R`) holds no Lean thread, so any
number of requests can wait at once; awaiting in `IO` blocks the calling thread.
`Lasm.JS` programs run only under Lasm (natively every JavaScript operation fails
with a clear error). The guide for writing bindings, with Express, Hono, `pg`,
`jose` and `fetch` examples, type mappings, errors and limits:
[JS_BINDINGS.md](docs/JS_BINDINGS.md).

**HTTP on Node:** use Hono, Express or Fastify with Lean handlers (or `Lasm.Fetch`,
0.3.0) for production. `Std.Http` works and passes the same load, fault and
soak tests as native Lean, but serves about 650 requests per second under Lasm,
against about 9,550 for Hono and 6,130 for Express with Lean handlers, because every
socket, timer and `Date` operation is a round trip to Node's main thread
([SERVER_MVP.md](docs/SERVER_MVP.md#launch-position-2026-10-23)).

## Supported environments

Machines that **build** with Lasm (the compiler):

| Environment | Architectures | Status |
| --- | --- | --- |
| Ubuntu 24.04 LTS | x86-64, ARM64 | Installed-package and copied-deployment acceptance in CI; the reference platform. |
| Other Linux distributions | x86-64, ARM64 | Unverified as build machines; the tools need glibc 2.34. Alpine/musl is not a build machine (built apps run there). |
| macOS 15 | x86-64, ARM64 | Installed-package and copied-deployment acceptance in CI. Lake projects with C code need the Xcode Command Line Tools SDK. |
| Windows Server 2025 / Windows x64 | x86-64 | Installed-package and copied-deployment acceptance in CI. |
| Windows ARM64 | ARM64 | **Not supported**: neither Lean nor Emscripten publishes Windows ARM64 prebuilts. |
| Bun 1.4.4 and Deno 2.9.6 as the compiler's runtime (0.2.0) | all of the above | Tested in CI on all five platforms, also with no Node or npm on `PATH` ([BUN_DENO.md](docs/BUN_DENO.md)). |

Node 24 or newer (tested: 24.0.0, 24.22.1, 26.12.1). No engine flags. Exact tested
artifacts: [NODE_ACCEPTANCE.md](docs/NODE_ACCEPTANCE.md).

## Supported platforms

A Node `dist/` needs **Node 24 or newer** (Node 22 and older stop with `This
application requires Node 24.0.0 or newer`) and **at least 512 MB of memory**. It
runs on Linux x64 and arm64 (glibc 2.28+, or musl/Alpine) from a build on any
supported platform, and on the build machine's own platform. Copy all of `dist/`; no
Lean source, npm install or build tools are needed there. Each platform below is
**tested in CI** with the local runtime, image or emulator named; none with a real
cloud account. Full matrix: [DEPLOYMENT.md](docs/DEPLOYMENT.md).

| Platform | Tested in CI with |
| --- | --- |
| Linux x64 and arm64 (glibc 2.28+), Node 24+ | Node 24.0.0, 24.22.1 and 26.12.1 on `ubuntu-24.04` and `ubuntu-24.04-arm` |
| macOS (x64, arm64) | Node 24.0.0 and 24.22.1 on `macos-15-intel`; Node 24.22.1 on `macos-15`; installed acceptance with Node 26.12.1 |
| Windows x64 | Node 24.0.0 and 24.22.1 on `windows-2025`; installed acceptance with Node 26.12.1 |
| Docker / Kubernetes | `node:24-bookworm-slim`, `node:26-bookworm-slim`, `node:24-bullseye-slim`, Ubuntu 22.04/24.04; read-only, 512 MB, x64 and arm64 (Kubernetes manifests are not applied in CI) |
| Google Cloud Run, Fly.io, Railway, Render, Heroku | the same container images and Dockerfiles; the platforms themselves are never deployed to |
| AWS Lambda (container image) | `public.ecr.aws/lambda/nodejs:24` + AWS Lambda Web Adapter through the Runtime Interface Emulator, x86_64 and arm64; `amazonlinux:2023` |
| AWS Lambda (.zip, `nodejs24.x`) | every server template's `--target lambda` zip in `public.ecr.aws/lambda/nodejs:24` through the Runtime Interface Emulator, x86_64 and arm64, with API Gateway REST/HTTP, function URL and ALB events; `sam local invoke` and `sam local start-api` |
| Lambda@Edge (origin request, x86_64) | the same image and emulator with CloudFront origin-request events |
| Vercel Functions (Node.js 24) | `vercel build` offline; the function under `@vercel/node` in `public.ecr.aws/lambda/nodejs:24` |
| Netlify Functions (v2) | `netlify build --offline` and `netlify dev --offline`; the deploy zip in `public.ecr.aws/lambda/nodejs:24` |
| Azure Functions (Node.js v4 model, Linux) | Azure Functions Core Tools `func start` |
| Google Cloud Functions (gen2, `nodejs24`) | Functions Framework on Ubuntu 24.04; Google Cloud's buildpacks image |
| Alpine/musl containers | `node:24-alpine`, `node:26-alpine`, x64 and arm64, read-only, 512 MB |
| DigitalOcean App Platform (gVisor) | the container images under gVisor's `runsc`, x64 |
| Cloudflare Workers (0.2.0) | `wrangler dev` 4.152.0 (workerd), with the Free plan's budgets gated |
| Vercel Edge (0.2.0) | `vercel build` offline and Vercel's `edge-runtime` |
| Netlify Edge (0.2.0) | `netlify build --offline` and `netlify dev --offline` |
| Deno Deploy (0.2.0) | Deno 2.9.6 running `deno/main.mjs` |
| Supabase Edge Functions (0.2.0) | Supabase's `edge-runtime` v1.77.8 image in Docker |
| Bun and Deno programs (0.2.0) | Bun 1.4.4 and Deno 2.9.6 on all five platforms |
| WASI, wasi-http, Spin, Fastly (0.3.0) | wasmtime 49.0.4 (`run`, `serve`), wasmer 7.4.2, Node's `node:wasi`, Spin 4.2.2, Viceroy 0.21.1 ([`wasi.yml`](.github/workflows/wasi.yml)) |
| Browsers (0.3.0) | Playwright 1.63.0: Chromium 153 and Firefox 155 on `ubuntu-24.04`; WebKit 26.6 on `ubuntu-24.04` and `macos-15` ([`browser.yml`](.github/workflows/browser.yml)) |

A `dist/` built on Windows and copied to Linux other than through `docker build`
needs `chmod 755 dist/host/native/process/linux-*`. Node's `--jitless` cannot work
(it disables WebAssembly). Hosts that cap virtual memory (`ulimit -v`,
`vm.overcommit_memory=2`) refuse the Node build, which reserves about 22 GB of
address space. Node 26's official binary needs `libatomic1` on minimal images that
install the tarball themselves.

## Lean support and restrictions

**Builds enforce ahead-of-time execution.** Ordinary functions, recursion,
closures, inductive types, pattern matching, type classes, dependent types and
compiled IO are supported. Imports, macros, elaboration, tactics, deriving, proofs
and `#eval` run **during compilation** in managed native Lean. Initializers count
as runtime dependencies: a broad `import Lean` can retain the compiler; use
`meta import Lean` when only macros or tactics need it, and narrower imports for
runtime data libraries (`import Lean` with `Lean.Json`, and `deriving ToJson,
FromJson`, build and run). Each rejection is explained: Lasm prints the chain from
your code to the compiler code and, when a broad import is the cause, the narrower
modules your code uses. Deployed programs honor `LEAN_ABORT_ON_NONLINEAR=1` as
native Lean does. Per-platform results: [language coverage](docs/LANGUAGE_COVERAGE.md).

The deployed application cannot use:

| Unavailable at runtime | Examples and exact boundary |
| --- | --- |
| Load Lean module data or locate a compiler installation | `Lean.importModules`, `Lean.withImportModules`, module-data readers/writers, `Lean.findSysroot`, `Lean.initSearchPath`; deployed `.olean`/IR loading. |
| Evaluate or compile new Lean code | `Lean.Environment.evalConst`, interpreter evaluation, a Lean REPL, runtime elaboration/compilation, evaluation of declarations loaded by name. Calling an ordinary compiled function is allowed. |
| Use Lean's compiler/kernel runtime state | Runtime elaboration, kernel proof checking, compiler environments, language-server machinery needing Lean's C++ compiler/kernel. Pure Lean data operations are allowed if their reachable dependencies pass the check. `LeanExport.parseStream` builds `Lean.Expr` values through the kernel and is rejected. |
| Load executable plugins dynamically | Lean/Wasm plugin loading, `dlopen`/`dlsym` (C code calling `dlopen` gets an implementation that always fails), runtime Lean symbol lookup. |

The build checks **reachable runtime dependencies**, including imported libraries
and indirect calls; a reachable forbidden call is rejected even if your input would
not take that branch, and dead code removed by the linker does not count. The
launcher also rejects missing, stale or incompatible capability records before
loading the application (a consistency check, not a security sandbox). There is no
large compatibility fallback.

**Lake packages.** Modules imported only for compilation (tactics, elaborators,
for example Aesop, Qq or `import Lean` for macros) do not keep Lean's compiler in
the deployment. Lasm runs a module's initializers only when the program uses
something they define or register, or when they are the program's own code doing
IO or calling C (`--verbose` shows how many were skipped). C source that a package
bundles (`extern_lib`, `moreLinkObjs`, for example leansqlite's SQLite) is compiled
with Lean's own clang, fetched once as the C tier (39–52 MB); no system C compiler
is needed (macOS needs the Xcode Command Line Tools SDK for C library headers).
Prebuilt native libraries (shared libraries, `-l` options: libcurl, OpenSSL,
libpq, BLAS) cannot be linked; the build names the library and the package.

**Not release guarantees.** Console output, arguments, exit codes, local Lake
imports and selected language/filesystem fixtures have native-versus-Node tests,
and before 0.1.0 Lean's runtime-capable upstream suite and 19 ecosystem projects
ran on all five platforms with zero regressions against the previous accepted
candidate ([0.1.0 gate](docs/release/0.1.0-gate.md)). Complete `IO.FS`, concurrency,
subprocess/signal/terminal parity, every third-party library and the full upstream
suite are not guaranteed ([IO gaps](IO_LIMITATIONS.md)). **Big numbers** (`Nat`/`Int`
beyond 63 bits) use Lean's own arbitrary-precision code instead of GNU MP, so apps
contain no LGPL code; results equal native Lean's, but at 10,000 digits
multiplication is about 5× and `Nat.gcd` about 60× slower than with GMP in Wasm
([numbers](docs/BENCHMARKS.md#big-numbers-without-gmp)). **Lake dependencies** use
your system Git ([system Git](docs/MANAGED_GIT.md)).

## Releases and provenance

0.1.0 was the first npm release ([notes](docs/release/0.1.0-notes.md)); 0.2.0 adds
edge targets and Bun/Deno ([notes](docs/release/0.2.0-notes.md)); 0.3.0 adds the
browser, `Lasm.UI`, full-stack apps, WASI/Fastly and the editor support
([notes](docs/release/0.3.0-notes.md)); 0.3.1 puts the starter code under MIT-0 and
adds bug-report pointers ([notes](docs/release/0.3.1-notes.md)); 0.3.2 fixes
`Std.Internal.UV` sockets, timers and signals ([notes](docs/release/0.3.2-notes.md)). Lasm's npm
packages (`@lasm/cli`, `@lasm/create` and the `@lasm/…` tool packages) are
published only by the [`release.yml`](.github/workflows/release.yml) workflow,
through npm trusted publishing with provenance: no npm tokens exist. A release is a
pull request that bumps the `package.json` version and is published only after the
`release-checks` status (five-platform candidate checks; edge, Bun/Deno, browser,
Lasm.UI, WASI/Fastly, fullstack, unit and dev-loop checks; and an npm rehearsal of
the exact packages) passed for the released
commit. Found a bug? `npx lasm --version` gives the version line the
[bug report form](https://github.com/Millillion/lasm/issues/new?template=bug.yml) asks for. `npm view @lasm/cli@<version>` shows the provenance, and `npm audit
signatures` in a project verifies it. Details: [RELEASING.md](docs/RELEASING.md).

## Licenses

Lasm's own source is under the [MIT License](LICENSE) (copyright Jordan Last).
The starter code — everything `lasm init` and `npm create @lasm` put in a new
project, `templates/`, `examples/` and the code samples in this README and
`docs/` — is also under [MIT No Attribution](LICENSE-MIT-0) (MIT-0), in every
version: it is yours, no attribution needed. `@lasm/create` is MIT, and
`@lasm/cli`'s `license` field is an SPDX expression of Lasm's MIT, MIT-0 and
every component it bundles, with their texts in `licenses/`. The
[license audit](docs/LICENSE_AUDIT.md) lists every distributed component, its
license and how each obligation is met.

- **Built `dist/`.** `THIRD_PARTY_NOTICES.txt` starts with Lasm's MIT notice and
  the list of Lean files Lasm changed, then the licenses of what the build contains:
  Lean's runtime and standard library (Apache-2.0), Emscripten (MIT OR NCSA), musl,
  LLVM libc++, libc++abi, libunwind and compiler-rt, mimalloc, libuv, koffi and
  Lasm's host (MIT). Apps contain no copyleft code. `licenses/<package>/` holds the
  license files of every Lake dependency compiled into `program.wasm`; with npm
  interop, `node_modules/` holds each package with its own license. Keep these
  files when you distribute a `dist/`.
- **Edge, browser, WASI, Fastly and wasi-http outputs** get the same notices,
  rewritten to say what their files contain, written automatically: a
  `THIRD_PARTY_NOTICES.txt` in every output directory, a short `/*! … */` licence
  banner on the JavaScript a platform bundles (the edge glue, the browser loader),
  the whole notices file inside the Wasm of server-side outputs (a `lasm.notices`
  custom section, so it travels with every deployment), the file in the Fastly
  package, and `THIRD_PARTY_NOTICES.lasm.txt` in Vite builds. What this means for
  your app: [docs/LICENSING.md](docs/LICENSING.md).
- **Tool packages and release archives.** Each `@lasm/…` tool package has an SPDX
  `license` field and the archive's license files. The exact sources of the (L)GPL
  pieces the Lean archives contain (GNU MP, the GNU C Library, GCC's runtime
  libraries, the Linux UAPI headers, MinGW-w64) and Lean's own source are mirrored
  as assets of the release that publishes them
  ([`lean-4.35.0-tiers-v2`](https://github.com/Millillion/lasm/releases/tag/lean-4.35.0-tiers-v2)).
  Lasm ships no Git and no Apple SDK files.
- The Lean name and logos are trademarks of Lean FRO. Lasm is not affiliated with
  or endorsed by Lean FRO.
