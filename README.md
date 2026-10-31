# Lasm

Lasm compiles Lean 4 to WebAssembly. You write your app in Lean, prove what matters
about it, and run it on Node.js, Bun, Deno, Cloudflare Workers, Vercel, Netlify,
Deno Deploy, Supabase, AWS Lambda, Azure Functions, Google Cloud Functions, Fastly
Compute, WASI runtimes and the browser.

```sh
npm create @lasm@latest my-app -- --template hono
cd my-app && npm install && npm run dev
```

The flagship example, [Conduit](#flagship-example-conduit-with-294-proved-theorems),
is the RealWorld app written entirely in Lean, with 294 proved theorems. It passes
RealWorld's official API and browser test suites on Node, Workers and Bun.

If Lasm is useful to you, I'd appreciate your [sponsorship](https://github.com/sponsors/lastmjs) ([more below](#support-lasm)).

## Where it runs, and the evidence

Every platform below is tested in CI, using the platform's own
runtime, container image or local emulator. CI never deploys to a real cloud
account, so "tested" means the platform's local tooling, not production
([full details](#supported-platforms)).

| Platform | Build with `--target` | Tested in CI with | Since |
| --- | --- | --- | --- |
| Node.js 24+ (Linux, macOS, Windows; Docker, Kubernetes, Cloud Run, Fly.io, Railway, Render, Heroku) | `node` (default) | Node 24 and 26 on Linux (x64, arm64), macOS (x64, arm64) and Windows x64; Docker images, read-only, 512 MB | 0.1.0 |
| Bun / Deno | `bun` / `deno` | Bun 1.4.4 and Deno 2.9.6 on the same five platforms | 0.2.0 |
| Cloudflare Workers | `workers` | `wrangler dev` (workerd), Free-plan budgets enforced | 0.2.0 |
| Vercel Functions / Vercel Edge | `vercel` / `vercel-edge` | `vercel build` offline; Lambda Node 24 image; Vercel's `edge-runtime` | 0.1.0 / 0.2.0 |
| Netlify Functions / Netlify Edge | `netlify` / `netlify-edge` | `netlify build` and `netlify dev`, offline | 0.1.0 / 0.2.0 |
| Deno Deploy | `deno-deploy` | Deno 2.9.6 | 0.2.0 |
| Supabase Edge Functions | `supabase-edge` | Supabase's `edge-runtime` image | 0.2.0 |
| AWS Lambda (.zip or container) / Lambda@Edge | `lambda` / `lambda-edge` | `public.ecr.aws/lambda/nodejs:24` via the Runtime Interface Emulator, x86_64 and arm64; `sam local` | 0.1.0 |
| Azure Functions | `azure` | Azure Functions Core Tools `func start` | 0.1.0 |
| Google Cloud Functions (gen2) | `gcf` | Functions Framework; Google Cloud's buildpacks image | 0.1.0 |
| Fastly Compute | `fastly` | Viceroy 0.21.1 | 0.3.0 |
| WASI / wasi-http / Spin | `wasi` / `wasi-http` | wasmtime 49 (`run`, `serve`), wasmer 7.4, `node:wasi`, Spin 4.2 | 0.3.0 |
| Browsers | `browser` (or the Vite plugin) | Playwright: Chromium, Firefox and WebKit (Linux and macOS) | 0.3.0 |

Node builds have Lean's full runtime (threads, files, processes, sockets). The
other targets run Lean single-threaded, without sockets or processes (and without
files, except on WASI); the rest of Lean works.

## Quick facts

| Fact | Value |
| --- | --- |
| Current version | `@lasm/cli` 0.3.6 ([release notes](docs/release/)); `npm view @lasm/cli version` |
| Install | `npm install -D @lasm/cli` (bin: `lasm`), or no install: `npx @lasm/cli …`; new project: `npm create @lasm@latest` |
| Lean | exactly **4.35.0** (`lean-toolchain`: `leanprover/lean4:v4.35.0`); Lasm installs it, and you need no elan to build |
| Develop on | Linux x64/arm64 (glibc 2.34+), macOS x64/arm64, Windows x64 |
| Compiler runs on | Node ≥ 24 (tested 24.0.0, 24.22.1, 26.12.1); Bun 1.4.4 and Deno 2.9.6 (tested, as the only runtime) |
| Output | `dist/` with `program.wasm` + a JS launcher (Node); or a platform package (`--target …`) |
| Node apps run on | Node ≥ 24, Linux x64/arm64 (glibc 2.28+ or musl) from any build machine, plus the build machine's own OS; ≥ 512 MB memory |
| JS/npm interop | `import Lasm.JS`; one `@[js "pkg" "export"]` line per function you call; no premade bindings ([guide](docs/JS_BINDINGS.md)) |
| Frameworks in Lean | `Lasm.Fetch` (HTTP, every server target), `Lasm.UI` (browser, Elm architecture, proved diff), `Lasm.RPC` (typed client/server API), `Lasm.Web` (DOM and web APIs), `Lasm.KV` |
| Not available at run time | elaboration, `#eval`-style evaluation, loading `.olean`, Lean's kernel ([exact list](#lean-support-and-restrictions)); all of these work at build time |
| License | MIT (Lasm); templates, examples and README code samples also MIT-0 |
| Repository / issues | https://github.com/Millillion/lasm · [report a bug](https://github.com/Millillion/lasm/issues/new?template=bug.yml) (include `npx lasm --version`) |

## Start here

| I want to build… | Run | Then look at |
| --- | --- | --- |
| A command-line program | `npm create @lasm@latest my-tool` | [examples/hello](examples/hello), [examples/wasi-cli](examples/wasi-cli) |
| A REST API on Node with an npm framework | `npm create @lasm@latest my-api -- --template hono` (or `express`, `fastify`) | [examples/js-crud](examples/js-crud) (Postgres + JWT, Express and Hono) |
| A server in pure Lean (no npm) | `npm create @lasm@latest my-api -- --template fetch` (any target) or `--template std-http` (Node, also native Lean) | [examples/fetch](examples/fetch); the `std-http` template |
| A serverless function (Lambda, Vercel, Netlify, Azure, GCF) | `npm create @lasm@latest my-fn -- --template hono --deploy lambda-zip` (or `vercel`, `netlify`, `azure`, `gcf`, `lambda-edge`) | [docs/deploy](docs/deploy/README.md) |
| An edge function (Workers, Vercel/Netlify Edge, Deno Deploy, Supabase) | `npm create @lasm@latest my-edge -- --template hono --deploy workers` (or `fetch`) | [examples/edge-pure](examples/edge-pure), [docs/EDGE.md](docs/EDGE.md) |
| A Fastly, WASI or Spin service | `npm create @lasm@latest my-svc -- --template fetch --deploy fastly` (or `wasi-http`, `spin`, `wasi`) | [examples/fetch](examples/fetch), [docs/WASI.md](docs/WASI.md) |
| A browser app | `npm create @lasm@latest my-web -- --template web` | [examples/ui](examples/ui) (counter, TodoMVC with proofs, feature demo, benchmark) |
| A complete real-world app (API, browser frontend, SQL, auth) with proofs, on Node, Workers or Bun | `cd examples/conduit && npm install && npm run build && npm start` | [examples/conduit](examples/conduit), the flagship (below) |
| A full-stack app with a verified API | `npm create @lasm@latest my-app -- --template fullstack` | [templates/fullstack](templates/fullstack) |
| To call npm packages or `fetch` from Lean | add `import Lasm.JS` and one `@[js]` line per function | [examples/js-fetch](examples/js-fetch), [JS bindings](#calling-javascript-and-npm-from-lean) |
| To run on Bun or Deno | `bun create @lasm my-app --template hono` / `deno run -A npm:@lasm/create my-app --template hono` | [docs/BUN_DENO.md](docs/BUN_DENO.md) |

Every example has a README with a one-command run; [examples/README.md](examples/README.md)
lists them all.

## Flagship example: Conduit, with 294 proved theorems

[examples/conduit](examples/conduit) is [Conduit](https://github.com/gothinkster/realworld),
the RealWorld app (a Medium clone), written entirely in Lean: the REST API, the
server-rendered browser app and the proofs.

- **294 theorems** about the code that actually runs, checked with no `sorry` and
  only Lean's standard axioms (`npm run proofs`; [PROOFS.md](examples/conduit/PROOFS.md)
  lists each one in plain English). They cover authorization (only authors change
  their articles and comments), follows and favorites, slugs that never collide,
  pagination that never skips or repeats, validation shared by client and server
  (the app never sends what the server would reject), JSON round trips and
  Markdown link safety. The endpoints are written against a `Store` of functions,
  and the proofs run that same code on a model of the tables.
- **What is trusted, not proved:** that each SQL statement does what its model
  says, the JSON text layer, concurrency between requests, and Lean, Lasm and the
  JavaScript runtime. Conformance to the whole RealWorld spec is tested, not
  proved.
- **API:** the official RealWorld API suite passes unmodified (13 of 13 files,
  154 requests) on Node (`node:sqlite`), Cloudflare Workers (D1) and Bun
  (`bun:sqlite`). Each target has one hand-written `@[js]` binding module.
- **Frontend:** `Lasm.UI` on RealWorld's official templates, with server-side
  rendering, hydration and Markdown parsed in Lean. The official Playwright
  end-to-end suite passes with no retries on Node with Chromium, Firefox and
  WebKit, and on Workers and Bun with Chromium.

All of this runs in CI ([conduit.yml](.github/workflows/conduit.yml), run 40615274657,
with `@lasm/cli` 0.3.4).

```sh
cd examples/conduit
npm install                                   # @lasm/cli, Hurl and Playwright (the official suites' runners)
npm run build && npm start                    # http://localhost:3000: the app and its API on Node
npm run proofs                                # check all 294 theorems
npm test                                      # the official API suite (also test:workers, test:bun)
npx playwright install chromium && npm run test:e2e   # the official end-to-end suite
npm run build:workers && npx wrangler dev     # Cloudflare Workers with local D1
npm run build:bun && npm run start:bun        # Bun with bun:sqlite
```

## 60-second start

A single file needs no project. Save this complete program as `Main.lean`:

```lean
def main : IO Unit := do
  IO.println s!"Hello from Lean! 2 + 3 = {2 + 3}"
```

```sh
npx @lasm/cli Main.lean          # builds and runs: Hello from Lean! 2 + 3 = 5
npx @lasm/cli build Main.lean    # writes dist/; run it with: node dist/main.mjs
```

The first build on a new machine fetches Lean and the build tools once (about
250–275 MB; 19 s for that first build on the Linux CI runner). Later dev builds of a
one-line change take about 1–2 s.

## Recipes

Each recipe is complete: create, develop, build, deploy. Lasm never installs or
starts a platform's own CLI (`wrangler`, `vercel`, `fastly`, …); you run those.
`npm run dev` is `lasm dev`: it rebuilds about 2 s after each save and restarts
the server, and keeps the last good build running when there is a type error.

**Node server (Hono; also `express`, `fastify`, `std-http`, `fetch`).**

```sh
npm create @lasm@latest my-api -- --template hono
cd my-api && npm install
npm run dev                                   # http://localhost:3000/hello/Ada
npm run build && npm start                    # dist/ needs only Node 24+
docker build -t my-api . && docker run -p 8080:8080 my-api   # the generated Dockerfile
```

**AWS Lambda / Vercel / Netlify / Azure / Google Cloud Functions.**

```sh
npm create @lasm@latest my-fn -- --template hono --deploy lambda-zip   # or vercel, netlify, azure, gcf, lambda-edge
cd my-fn && npm install
npm run build:lambda                          # dist/ and lambda.zip (handler lasm-lambda.handler)
# deploy lambda.zip with the AWS console, aws CLI or SAM; recipes: docs/deploy/lambda.md
```

**Cloudflare Workers (and Vercel Edge, Netlify Edge, Deno Deploy, Supabase).**

```sh
npm create @lasm@latest my-edge -- --template hono --deploy workers
cd my-edge && npm install
npm run build:workers                         # workers/ (wrangler.toml came from lasm init)
npx wrangler dev                              # local workerd; npx wrangler deploy to publish
```

**Fastly Compute, WASI, Spin.**

```sh
npm create @lasm@latest my-svc -- --template fetch --deploy fastly --deploy spin
cd my-svc && npm install
npm run build:fastly && fastly compute serve  # Viceroy on http://127.0.0.1:7676
npm run build:wasi-http && spin up            # or: wasmtime serve wasi-http/main.wasm
```

**Browser app.**

```sh
npm create @lasm@latest my-web -- --template web
cd my-web && npm install
npm run dev                                   # http://127.0.0.1:5173, live reload
npm run build                                 # dist/: a static site for any host or CDN
```

**Full stack (server + browser + verified API).**

```sh
npm create @lasm@latest my-app -- --template fullstack
cd my-app && npm install
npm run dev                                   # one URL: http://127.0.0.1:3000
npm run build && npm start                    # Node; also build:workers, build:bun, build:deno
```

**Editor.** Run `npx lasm editor` once per project; `lasm init`, `lasm dev` and
`lasm build` also do it. The Lean editor (VS Code's Lean 4 extension) then resolves
`import Lasm.*` ([details](docs/GETTING_STARTED.md#editor)).

## The whole stack in Lean, verified

The `fullstack` template is one Lean project with a server (`Lasm.Fetch`), a
browser app (`Lasm.UI`) and the API between them (`Lasm.RPC`). The rule a request
must satisfy is written and proved once, in `Shared.lean`, which both sides import
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

**Where proofs live and how they are checked.**

| Proof | Where | Checked by |
| --- | --- | --- |
| Your theorems (like `checkTitle_ok`, `add_invalid`) | your `.lean` files | every `lasm build`/`lasm dev` (Lean elaborates them; a broken proof is a build error); pure modules also with `lake build` |
| `Lasm.RPC`: the handler only runs on requests that pass `validate` (`Endpoint.decodeRequest_valid`); the client never sends one that fails it (`Endpoint.call_invalid`) | [library/Lasm/RPC](library/Lasm/RPC) | compiled into Lasm's library on every build |
| `Lasm.UI`: the DOM diff is correct against a DOM model, keyed moves included (`diff_correct`, `mount_correct`, `session_correct`) | [library/Lasm/UI/Proofs](library/Lasm/UI/Proofs) (about 1,260 lines, no `sorry`, standard axioms only) | `node scripts/ui/lean-tests.mjs` in a checkout (CI: `ui.yml`) |
| Conduit: 294 theorems about authorization, follows, favorites, slugs, pagination, shared validation, JSON round trips and Markdown link safety | [examples/conduit/Proofs](examples/conduit/Proofs), listed in [PROOFS.md](examples/conduit/PROOFS.md) | `npm run proofs` in `examples/conduit` (no `sorry`, standard axioms only; CI `conduit.yml`) |
| TodoMVC: every reachable model is valid | [examples/ui/todomvc/Todo.lean](examples/ui/todomvc/Todo.lean) | `lasm build`; CI `ui.yml` |

Not proved, tested in CI instead: the JSON/HTTP transport between client and
server, the JavaScript that applies patches to the real DOM, the Lasm compiler and
runtime, and the browsers. Lean's own compiler is trusted, as in any Lean program
([UI.md](docs/UI.md#what-is-proved), [RPC.md](docs/RPC.md#what-is-proved)).

## Calling JavaScript and npm from Lean

Declare each JavaScript function you call with one line; the Lean type says how
values convert. A complete program (Node's global `fetch`):

```lean
import Lasm.JS
open Lasm.JS

/-- `await fetch(url, init)` (Node's global fetch) -/
@[js "globalThis" "fetch"] opaque fetch : String → Data → IO Value

def main : IO Unit := do
  let response ← fetch "https://example.com" (obj [])
  IO.println s!"{← response.get "status" Nat}: {(← response.callMethodAwait "text" #[] String).length} characters"
```

The rules for writing bindings:

- `@[js "module" "export"] opaque name : A → B → IO R` binds `module.export`. The
  module is an npm package (`"marked"`), a Node built-in (`"node:fs"`), or
  `"globalThis"` for globals. `"new Hono"` calls a constructor, and `""` is the
  module's own value.
- End the type in `IO R` for a value returned at once and in `Async R` for a
  promise. An `Async` binding is awaited without holding a Lean thread.
- Use `String`, `Nat`, `Int`, `Float`, `Bool`, `ByteArray`, `Array`, `List`, `Option`,
  tuples, `Data` (any JS data) or `Value` (a JS object reference: `get`, `callMethod`, `callMethodAwait`).
  Your own structures convert with `deriving ToJS, FromJS`.
- `Function.ofFn` / `Function.ofFnReply` turn Lean functions into JS callbacks.
  Framework handlers use them (see the `hono`, `express` and `fastify` templates).
- `npm install` the package next to the lakefile. `lasm build` checks every binding
  against the installed package (`Lasm.JS binding check failed: … export "x" is
  missing`) and copies production dependencies into `dist/node_modules`.
- Each call crosses from a Lean thread to Node's main thread (about 24 µs), so
  prefer one coarse call over many small ones.

Full guide, with Express, Hono, `pg`, `jose` and `fetch` examples and an agent
checklist: [docs/JS_BINDINGS.md](docs/JS_BINDINGS.md).

## Measured numbers

All numbers are from CI on a free GitHub runner (4-CPU AMD EPYC, Linux x64),
candidate 0.1.0-experimental.40494203854 (2026-10-27) unless another run is named.
Full tables, method and caveats: [BENCHMARKS.md](docs/BENCHMARKS.md).

| What | Number |
| --- | --- |
| Node: Hono + Lean handler, cold start to first HTTP response | 159 ms (plain Node `http`: 4.1× faster) |
| Node: Hono + Lean handler, throughput / p99 latency | 24,911 req/s / 4.2 ms (plain Node `http`: 103,134 req/s, so 0.24×) |
| Node: Express + Lean handler, throughput | 18,678 req/s |
| Node: Hono app `program.wasm` (brotli) / `dist/` | 166 KiB / 8.5 MiB plus 1.4 MiB `node_modules` |
| Node: memory, Hono app idle / under load | 148 MiB / 329 MiB RSS |
| Lean → JS call round trip (p50) | 24 µs |
| Cloudflare Workers: Hono app bundle | 1.40 MiB, 245 KiB gzip (limit 64 MiB; workers run 40128600109) |
| Browser: counter app total transfer / first frame (Chromium) | 152 KiB brotli / 30 ms (browser run 40288509500) |
| Browser: js-framework-benchmark vs hand-written JS | within 1.7× on every operation, most within 1.2× (browser run 40302274897) |
| WASI: `Lasm.Fetch` module / per request on Fastly's Viceroy | 0.90 MiB / 1.17 ms with a fresh instance per request (wasi run 40293231963) |
| Build: clean Hono build / dev rebuild after a one-line change | 4.7 s / 2.0 s |
| `npm install @lasm/cli`: download / installed; tool cache after the first build | 71 MiB / 403 MiB; 2.5 GB |

Lean on Node pays for WebAssembly and its threads. A cold start is CPU-bound, so it
grows on small serverless CPU shares, and every JavaScript call crosses threads.
Pure-Lean `Std.Http` on Node is slow (1,290 req/s), so use Hono, Express, Fastify
or `Lasm.Fetch` for production HTTP. Arithmetic on numbers with thousands of digits
is slower than native Lean (no GMP).

## Known limitations

- **Ahead of time only.** A deployed program cannot elaborate, evaluate or compile
  Lean, load module data or plugins, or use Lean's C++ compiler/kernel at run time
  ([exact list](#lean-support-and-restrictions)). Proofs, tactics, macros and
  `#eval` run while compiling, as usual.
- **Lean 4.35.0 exactly.** Other `lean-toolchain` versions are rejected with a
  message.
- **Node:** give an app at least 512 MB; it reserves about 22 GB of virtual address
  space. Prebuilt native libraries (`-l`, shared libraries) cannot be linked; a
  package's bundled C source is compiled for you.
- **Edge, Bun/Deno, browser, WASI:** single-threaded Lean; no sockets, processes or
  signals; no files except on WASI. In the browser, blocking waits stop the app
  unless it is built with `--suspend jspi` for a browser with JSPI; use `Async`.
- **No premade bindings** for npm packages; `Lasm.Web` covers the core web platform.
- **Editor:** `Lasm.*` imports resolve in the editor after `npx lasm editor` (above).
- **Platforms:** no Windows ARM64 and no Alpine/musl build machines (built apps run
  on Alpine). Hosted platforms are tested with their local tools, never with a real
  account.

## Documentation

- **Start:** [Getting started](docs/GETTING_STARTED.md) ·
  [All documentation](docs/README.md) · [For AI agents](docs/AI.md) · [llms.txt](llms.txt)
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

## Support Lasm

If Lasm is useful to you or you want to see it succeed, I'd appreciate your
sponsorship: [github.com/sponsors/lastmjs](https://github.com/sponsors/lastmjs).
It supports me and the work on Lasm and the other [Millillion](https://millillion.org)
projects. My first goal is $250 a month, enough for one dedicated Claude Code account
for Lasm. You can also help by starring the repo, trying it, and
[reporting what breaks](https://github.com/Millillion/lasm/issues/new/choose).

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
| Version | `npx lasm --version` | Print `lasm 0.3.6 (@lasm/cli; Lean 4.35.0; Node 26.12.1; linux-x64)`; `-v` is an alias. |
| New project | `npm create @lasm@latest my-app -- --template hono` or `npx @lasm/cli init my-app --template hono` | Create a Lake project in a new or empty directory (`Main.lean`, `App.lean`, lakefile, `lean-toolchain`, `package.json`, `README.md`, `.gitignore`, and for servers a `Dockerfile` and `.dockerignore`). Templates: see [Start here](#start-here). `--deploy` (repeatable) adds a platform's files and `npm run build:<target>`: `lambda` (`Dockerfile.lambda`, a container image), `lambda-zip`, `lambda-edge`, `vercel`, `netlify`, `azure`, `gcf`; `workers`, `vercel-edge`, `netlify-edge`, `deno-deploy` (templates `hono`, `fetch`, `fullstack`), `supabase-edge` (`hono`); `fastly`, `wasi-http`, `spin` (`fetch`, `fullstack`), `wasi` (`fetch`, `plain`). The `fetch` and `fullstack` templates and their targets are 0.3.0. Writes files only; run `npm install` next. `-t` is an alias of `--template`; `--template=hono` also works. |
| Package an existing build | `npx lasm package --target lambda` | Package a built server (default `dist/`) for a function platform without rebuilding: the same targets and outputs as `lasm build --target`, except `node`. `--output PATH` chooses the output. Checks the platform's size limit. Refuses a dev build unless `--allow-dev`. For a browser build, `npx lasm package dist --target browser` checks every file against `lasm-manifest.json` and writes `_headers`. |
| Editor support (0.3.0) | `npx lasm editor` | Make the Lean editor (VS Code's Lean 4 extension, any Lean language server client) resolve `import Lasm.*` in this Lake project: links Lasm's Lean 4.35.0 with its library as the elan toolchain `lasm-4.35.0-…` and sets it as the directory's elan override (`elan override unset` undoes it). `lasm init` (when Lasm's Lean is already installed), `lasm dev` and `lasm build` do the same, printing one line per project, except on CI or with `LASM_EDITOR=0`. [Editor setup](docs/GETTING_STARTED.md#editor). |
| Cache repair | `npx lasm cache repair` | Offline verification and removal of invalid tools and abandoned staging. Refuses an active build. |

`--rebuild` and `--verbose` work with run and build. `--output` and `--target` are
build-only; arguments after `--` are run-only. The application's exit status is
preserved. `npx lasm --version` (`-v`) prints the version, Lean release, JavaScript
runtime and platform (include it in bug reports). There is no install, clean or
uninstall subcommand.

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
`Std.Internal.UV` sockets, timers and signals ([notes](docs/release/0.3.2-notes.md)); 0.3.3 was never
published, and its changes shipped in 0.3.4 ([notes](docs/release/0.3.4-notes.md)); 0.3.5 updates the README and the Conduit example ([notes](docs/release/0.3.5-notes.md)); 0.3.6 fixes Vercel Edge deployments ([notes](docs/release/0.3.6-notes.md)). Lasm's npm
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
