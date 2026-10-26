# Lasm

Write ordinary Lean. Compile it ahead of time and run it in Node. Node.js is the
only supported JavaScript runtime.

**Start here: [Getting started](docs/GETTING_STARTED.md)** goes from Node and npm to a
web server with Lean request handlers (Hono or Express), an npm package called from
Lean, a container deployment and function platforms, with
[recipes per platform](docs/deploy/README.md).

**Prerequisites:** **Node 24 or newer with npm**, for the compiler and for built
applications (tested on Node 24.0.0, 24.22.1 and 26.12.1). Lasm brings its
matching **Lean 4.35.0**, Lake and build tools through npm; you do not install them
yourself. Lasm supports exactly Lean 4.35.0.
**Git, only for Lake projects with dependencies:** Lasm uses the `git` on your PATH
and ships none. Programs and Lake projects without dependencies need no Git. A
project with Git or Reservoir dependencies stops before Lake runs, with the install
command: macOS `xcode-select --install` (or `brew install git`), Debian/Ubuntu
`sudo apt install git`, Fedora/RHEL/Amazon Linux `sudo dnf install git`, Windows
`winget install --id Git.Git -e` (or git-scm.com).

## Get started

```sh
npm create @lasm@latest my-app -- --template hono   # or: npx @lasm/cli init my-app --template hono
cd my-app && npm install && npm run dev
curl http://localhost:3000/hello/Ada               # {"message":"Hello, Ada, from Lean!"}
```

`npm create @lasm` runs `lasm init` of the same `@lasm/cli` version with the
arguments unchanged; templates are `plain`, `express`, `hono`, `fastify` (after 0.2.0, on
branch `dx`) and `std-http`
([CLI reference](#cli-reference)). In an existing directory, install the compiler
with `npm install -D @lasm/cli` (the bin is `lasm`), or run it without installing:
`npx @lasm/cli Main.lean`.

Save this complete program as `Main.lean`:

```lean
def main : IO Unit := do
  IO.println s!"Hello from Lean! 2 + 3 = {2 + 3}"
```

Run, build, and deploy:

```sh
npx lasm Main.lean           # Compile and run: Hello from Lean! 2 + 3 = 5
npx lasm build Main.lean     # Create dist/ without running main
node dist/main.mjs           # Run the deployment
npx lasm build Main.lean --target lambda   # dist/ and an AWS Lambda zip (also vercel, netlify, …)
```

`npm install @lasm/cli` brings Lean and the build tools as exact-pinned `@lasm/…`
npm packages for your platform (about 340 MB on Linux x64), through your own npm
registry, proxy and cache. The Lake/`Lean`-import data and, only for Lake projects
with C code, the C tier (`@lasm/lean-c-<platform>`) are fetched with your npm on
first use. `LASM_ARTIFACT_SOURCE=npm` forbids direct downloads; `https` ignores the
packages and downloads the same verified archives from GitHub releases. The
terminal shows progress and elapsed time; later builds reuse verified tools and
unchanged outputs. See [cache locations, requirements, and recovery](docs/NODE_SUPPORT.md)
and [installation hardening](docs/INSTALLATION_HARDENING.md) for retries, resume,
offline repair, proxies and private CAs.
The first build needs internet access and fetches about 250–275 MB for an ordinary
program; Lake projects and programs importing `Lean` fetch more. On a new machine,
without the download, a first Hono build took 25.7 s (Linux x64), 27.8 s (Linux
arm64), 44.4 s (Windows), 58.7 s (Apple Silicon) and 141.9 s (Intel Mac, a
hardware limit there) on the CI runners; use the dev profile (`npx lasm Main.lean`)
for the edit loop. All measurements:
[build time](docs/BENCHMARKS.md#build-time-where-it-goes-and-the-two-profiles-current-source) (run 40131930601).

Copy **all of `dist/`** to a supported machine: it runs on **Node 24 or newer**
on Linux x64 and arm64 (glibc 2.28+, or musl/Alpine) from a build on any supported
platform, and on the build machine's own platform; see
[Supported platforms](#supported-platforms). No Lean source, npm install, build
tools or development cache is needed there. Include your application's external
assets yourself.

An existing Lake project can use local imports normally. To pin Lean, put
`leanprover/lean4:v4.35.0` in its `lean-toolchain` file. Other versions are rejected
with `Unsupported Lean toolchain … Lasm supports Lean v4.35.0; set lean-toolchain
to leanprover/lean4:v4.35.0` and the pin is left unchanged. A per-package
[compatibility list](https://github.com/Millillion/lasm/blob/main/docs/COMPATIBILITY.md)
covers Batteries, Cli, LSpec, Plausible, Aesop, Qq, leansqlite, UnicodeBasic,
MD4Lean, lean-zip, lean4-parser, lean-redis and others; packages not on it are
untested.

### From a candidate tarball (maintainers)

Release candidates are packed by CI before they reach npm.
On a supported Linux, Mac, or Windows machine, get the tested `.58` tarball (draft release
`node-linux-candidate-40012750099`, run 40012750099) from a maintainer (repository access may be required). Copy it into an empty directory:

```sh
npm install ./lasm-compiler-0.1.0-experimental.58.tgz
```

## Frontends in Lean (Lasm.UI)

**In branch source (`browser`), planned for the next release.** `Lasm.UI` is a
frontend framework for browser apps written entirely in Lean: the Elm
architecture (`init`, a pure `update`, a pure `view`, subscriptions), JSX-like
`html!` markup checked while Lean elaborates, commands (HTTP, timers, storage,
navigation, ports), routing, server-side rendering and hydration. Diffing runs
in Lean and is proved correct against a model of the DOM, keyed moves
included; your own `update` can carry proofs too
([TodoMVC](examples/ui/todomvc/Todo.lean)). Guide and API reference:
[docs/UI.md](docs/UI.md).

```lean
import Lasm.UI
open Lasm.UI

inductive Msg where
  | increment
  | decrement

def update : Msg → Int → Int
  | .increment, n => n + 1
  | .decrement, n => n - 1

def view (n : Int) : Html Msg :=
  html! <main>
          <button onClick={Msg.decrement}>-</button>
          <output>{n}</output>
          <button onClick={Msg.increment}>+</button>
        </main>

def main : IO Unit := (App.sandbox 0 update view).run
```

```sh
lasm build Main.lean --target browser   # dist/: index.html, app.<hash>.js, app.<hash>.wasm
```

## The whole stack in Lean (Lasm.RPC)

**In branch source (`fullstack`).** `lasm init my-app --template fullstack`
creates one Lean project with a server (`Lasm.Fetch`), a browser app
(`Lasm.UI`) and the API between them (`Lasm.RPC`): request and response types
and their validation are declared once in shared code. The browser checks a
request before sending it; the server checks it again and hands the handler
the proof, so a theorem about the validation holds on both sides. The server
renders the first page and the browser app hydrates it; `npm run dev` rebuilds
both, `npm run build` targets Node and `npm run build:workers` Cloudflare
Workers. Guide: [docs/RPC.md](docs/RPC.md).

## CLI reference

These are all commands and options in the ordinary Node application interface:

| Command or option | Example | Effect |
| --- | --- | --- |
| Run (default) | `npx lasm Main.lean` | Build (dev profile, below) and run Lean `main`. `npm run dev` in a `lasm init` `plain` project runs this. |
| Watch, rebuild and restart (after 0.2.0, on branch `dx`) | `npx lasm dev`, `npx lasm dev Main.lean --target workers -- arg` | Watch the Lean sources and the Lake/npm configuration, rebuild after each change (dev profile, one long-lived build worker; about 2 s for an ordinary edit on the Linux CI runner once the first build is done) and restart the program (`--target node`, `bun`, `deno`; default: the runtime running Lasm). A build error is printed with its file, line and source line, and the last good program keeps running. Edge targets (`workers`, `vercel-edge`, `netlify-edge`, `deno-deploy`, `supabase-edge`) only rebuild their output directory, which the platform's own local server (`npx wrangler dev`, `netlify dev`, …) serves; Lasm never starts platform tools or browsers. `--release` builds the release profile, `--no-run` only rebuilds, `rs` + Enter rebuilds and restarts. `npm run dev` in the server templates runs `lasm dev Main.lean`. [Details](docs/DEVELOPER_WORKFLOW.md#lasm-dev). |
| Run a release build | `npx lasm Main.lean --release` | Build and run exactly what `lasm build` deploys. |
| Explicit run | `npx lasm run Main.lean` | Same as the default command. |
| Program arguments | `npx lasm Main.lean -- hello "two words"` | Pass arguments to `main (args : List String)`. |
| Build | `npx lasm build Main.lean` | Write `dist/` (release profile); do not run the application. |
| Dev build | `npx lasm build Main.lean --dev` | Write `dist/` faster, without the size optimizations (dev profile, below). |
| Build for a function platform | `npx lasm build Main.lean --target lambda` | Build `dist/`, then package it for the platform where `lasm package` writes it: `node` (default; `dist/` only), `lambda` (`lambda.zip`), `lambda-edge` (`lambda-edge.zip`), `vercel` (`.vercel/output`), `netlify` (`netlify/functions/lasm`), `azure` (`azure-functions/`), `gcf` (`gcf/`). `--target=vercel` also works. Lasm never installs or starts the platform's own CLI; use it yourself to test and deploy. [Recipes](docs/deploy/README.md). |
| Build for an edge isolate (from 0.2.0) | `npx lasm build Main.lean --target workers` | Build `dist/`, then relink the program single-threaded for edge isolates, with a pure-JS host. Targets: `workers` (`workers/`, Cloudflare Workers), `vercel-edge` (`api/lasm.mjs` and `api/_lasm/`), `netlify-edge` (`netlify/edge-functions/lasm.mjs` and `netlify/lasm/`), `deno-deploy` (`deno/main.mjs`), `supabase-edge` (`supabase/functions/<name>/`: `index.ts`, a `deno.json` pinning the npm imports, the program; Supabase's runtime has no JSPI, so this target suspends blocking waits with Asyncify: a larger program, everything works). The single-threaded edge runtime ships inside `@lasm/cli` (no extra download), and the linked program is cached. `lasm init --template hono --deploy <target>` adds the platform files. Tested in CI with `wrangler dev`, `vercel build` and Vercel's `edge-runtime`, `netlify dev`, the Deno CLI, and Supabase's edge runtime image (`supabase/edge-runtime` v1.77.8 in Docker). Guides: [Workers](docs/deploy/workers.md), [Vercel Edge](docs/deploy/vercel-edge.md), [Netlify Edge](docs/deploy/netlify-edge.md), [Deno Deploy](docs/deploy/deno-deploy.md), [Supabase Edge Functions](docs/deploy/supabase-edge.md); [design and limits](docs/EDGE.md). |
| Build for the browser (from 0.2.0) | `npx lasm build Main.lean --target browser` | Write `dist/` as a static site: `app.<hash>.js` (the loader: streaming Wasm compilation, `mount(element, { flags, hydrate })` returning `{ send, ports, unmount }`, auto-mount of `<div data-lasm-app>`), `app.<hash>.wasm`, brotli and gzip copies, `app.js` (a stable name), `index.html` (yours with the loader injected, or a generated page), your `public/` files, and `lasm-manifest.json`. One build runs in Chrome, Edge, Firefox and Safari; `--suspend jspi` lets blocking Lean waits suspend where the browser has JSPI (by default they stop the app with a message). `--bundler` leaves npm imports for a bundler; in Vite use the CLI's plugin (`import lasm from '@lasm/cli/vite'`, then `import app from './Main.lean?lasm'`). The web platform from Lean: `import Lasm.Web`. `--output` names the directory. Tested headless in Chromium, Firefox and WebKit on Linux and WebKit on macOS. Guides: [BROWSER.md](docs/BROWSER.md), [deploying](docs/deploy/browser.md). |
| Build a WASI module, a wasi-http component or a Fastly Compute service (from 0.3.0) | `npx lasm build Main.lean --target wasi`, `--target wasi-http`, `--target fastly` | No JavaScript. `wasi` writes `wasi/main.wasm`, one `wasi_snapshot_preview1` module: `wasmtime run --dir . wasi/main.wasm`, `wasmer run --volume=.:/ wasi/main.wasm`, or Node's `node:wasi` (arguments, environment, standard streams, exit status, files in preopened directories, clocks, randomness, sleeps, `Std.Async`, cooperative tasks). `wasi-http` writes `wasi-http/main.wasm`, a wasi:http/proxy@0.2 component for `wasmtime serve` and Spin's HTTP trigger. `fastly` writes `bin/main.wasm` and `pkg/<name>.tar.gz` for `fastly compute serve\|deploy` (and `fastly.toml` when missing). No sockets, processes or signals; a C++ runtime exception ends the program with status 134. Tested on wasmtime 49 (`run`, `serve`), wasmer 7.4, `node:wasi`, Spin 4.2 and Viceroy 0.21 ([`wasi.yml`](.github/workflows/wasi.yml)). [WASI](docs/WASI.md), [Fastly guide](docs/deploy/fastly.md). |
| HTTP in pure Lean on every target (from 0.3.0) | `import Lasm.Fetch` … `def main := Lasm.Fetch.serve handle` | `Lasm.Fetch.serve (handler : Request → Async Response)`: the same handler serves Node (`node:http` on `$HOST:$PORT`), Fastly Compute, wasi-http hosts (`wasmtime serve`, Spin), WASI as CGI, the edge targets, Bun and Deno. `Lasm.Fetch.fetch`/`get`/`post` send requests (the platform's `fetch`, Fastly backend requests, wasi:http/outgoing-handler; not in CGI). `Response.streaming` and `serveWith { streamRequestBody := … }` stream bodies. `import Lasm.Fastly` reads Config and Secret Stores and KV Stores. `lasm init --template fetch` creates one, with `--deploy fastly`, `wasi-http`, `spin`, `wasi` or an edge target. [Lasm.Fetch](docs/FETCH.md). |
| Run the compiler and programs on Bun or Deno (from 0.2.0; all five platforms) | `bunx --bun @lasm/cli Main.lean`, `deno run -A npm:@lasm/cli Main.lean`, `bun create @lasm my-app --template hono` | The compiler runs with Bun or Deno as its only JavaScript runtime and produces the same bytes. Under Bun or Deno the default target is that runtime: `--target bun` writes `bun/main.mjs` and `--target deno` writes `deno/main.mjs`, both using the portable (edge) profile. A command-line `main` gets the arguments and exit code, and a `Lasm.JS.exportDefault` handler is served with `Bun.serve`/`Deno.serve`. Without npm, on-demand tool packages come straight from the registry with the same checksums. `lasm init` templates `plain` and `hono` get `dev:bun`, `build:bun`, `build:deno` and `start:*` scripts. Deno skips npm versions younger than 24 hours by default: right after a release, pass `--minimum-dependency-age=0`. [Bun and Deno](docs/BUN_DENO.md). |
| Output directory | `npx lasm build Main.lean --output "app dist"` | Choose the deployment directory. `lasm build Main.lean "app dist"` is an alias. |
| Force rebuilding | `npx lasm build Main.lean --rebuild` | Ignore a cached application build. |
| Detailed diagnostics | `npx lasm Main.lean --verbose` | Show compiler and linker details. |
| Help | `npx lasm --help` | Show usage; `-h` is an alias. |
| New project | `npm create @lasm@latest my-app -- --template hono` or `npx @lasm/cli init my-app --template hono` | Create a Lake project in a new or empty directory: `Main.lean`, `App.lean`, lakefile, `lean-toolchain`, `package.json`, `Dockerfile`, `.dockerignore`, `.gitignore`, `README.md`. Templates: `plain` (default; a program), `express`, `hono` and `fastify` (Lean request handlers through `Lasm.JS`), `std-http` (pure-Lean `Std.Http` server), `fetch` (from 0.3.0: a pure-Lean `Lasm.Fetch` handler for every server target), `web` (a browser counter with `Lasm.UI`: `Main.lean`, `index.html`, `public/style.css`, and `build`/`dev`/`preview` scripts; no Dockerfile). `fastify` (after 0.2.0, branch `dx`): Fastify 5 with Lean route handlers. `--deploy lambda` (server templates) adds `Dockerfile.lambda`, an AWS Lambda container image. `--deploy lambda-zip`, `lambda-edge`, `vercel`, `netlify`, `azure` and `gcf` (repeatable): `npm run build:<target>` scripts (`lasm build --target`), `vercel.json`/`netlify.toml`, and the platform npm package for `azure` and `gcf`. `--deploy workers`, `vercel-edge`, `netlify-edge`, `deno-deploy` and `supabase-edge` (Hono template, and `fetch` except `supabase-edge`; from 0.2.0) add the edge platform files (`supabase-edge`: `supabase/config.toml`) and `build:<target>` scripts. Template `fetch` is a pure-Lean `Lasm.Fetch` handler; `--deploy fastly` adds `fastly.toml`, `--deploy spin` adds `spin.toml` (wagi executor), and `--deploy wasi` (also for `plain`) adds `build:wasi`. Writes files only; run `npm install` next. `-t` is an alias of `--template`; `--template=hono` and `--deploy=lambda` also work. `lasm init --help` lists the templates. |
| New project | `npm create @lasm@latest my-app -- --template hono` or `npx @lasm/cli init my-app --template hono` | Create a Lake project in a new or empty directory: `Main.lean`, `App.lean`, lakefile, `lean-toolchain`, `package.json`, `Dockerfile`, `.dockerignore`, `.gitignore`, `README.md`. Templates: `plain` (default; a program), `express`, `hono` and `fastify` (Lean request handlers through `Lasm.JS`), `std-http` (pure-Lean `Std.Http` server), `web` (a browser counter with `Lasm.UI`: `Main.lean`, `index.html`, `public/style.css`, and `build`/`dev`/`preview` scripts; no Dockerfile). `fastify` (after 0.2.0, branch `dx`): Fastify 5 with Lean route handlers. `--deploy lambda` (server templates) adds `Dockerfile.lambda`, an AWS Lambda container image. `--deploy lambda-zip`, `lambda-edge`, `vercel`, `netlify`, `azure` and `gcf` (repeatable): `npm run build:<target>` scripts (`lasm build --target`), `vercel.json`/`netlify.toml`, and the platform npm package for `azure` and `gcf`. `--deploy workers`, `vercel-edge`, `netlify-edge`, `deno-deploy` and `supabase-edge` (Hono template; from 0.2.0) add the edge platform files (`supabase-edge`: `supabase/config.toml`) and `build:<target>` scripts. Writes files only; run `npm install` next. `-t` is an alias of `--template`; `--template=hono` and `--deploy=lambda` also work. `lasm init --help` lists the templates. |
| Package an existing build | `npx lasm package --target lambda` | For a browser build, `npx lasm package dist --target browser` checks every file against `lasm-manifest.json` (and the `.br`/`.gz` copies) and writes `_headers` (caching and the Wasm type for Netlify and Cloudflare Pages), in place. Package a built server (default `dist/`; any server that listens on `$HOST:$PORT`) for one or more platforms without rebuilding: the same targets and outputs as `lasm build --target`, except `node`. `--output PATH` chooses the output; `lasm package dist2 --target lambda` packages another build. Checks the platform's size limit and leaves out the musl pieces (function platforms use glibc). Files only, no network. Refuses a dev build unless `--allow-dev` is given (then it warns). |
| Cache repair | `npx lasm cache repair` | Offline verification and removal of invalid tools and owned abandoned staging. Refuses an active build; keeps valid tools and unrelated files. |

`--rebuild` and `--verbose` work with both run and build. `--output` and
`--target` are build-only; arguments after `--` are run-only. The application's
exit status is preserved. There is currently no Lasm install, clean, uninstall,
or version subcommand.

**Build profiles.** Both profiles link the same program with the
same settings and libraries, and both are deterministic:

- **release** (`lasm build`, `lasm build --target …`, `lasm Main.lean --release`):
  the full Binaryen size optimization (`wasm-opt -Oz`, metadce and the JavaScript
  dead-code passes). Byte-reproducible and the one to deploy.
- **dev** (`lasm Main.lean`, `lasm dev`, `npm run dev`, `lasm build --dev`): leaves those
  passes out and compiles the program's own modules at `-O1`. It behaves the same,
  builds several seconds faster, and its `program.wasm` is about 15–20 % larger.
  A dev rebuild starts from the project's previous build: its initialization plan
  and the runtime members its link kept (checked by the program's imports, else
  linked in full), so a dev build's bytes can depend on the build before it. `build-info.json` records `"profile"`,
  and the build's summary line says which profile it used. `lasm package` and
  `lasm build --dev --target <platform>` refuse a dev build unless you pass
  `--allow-dev`.

Builds reuse unchanged work: generated C objects, Lasm's initialization-planning
links, and the analysis of the runtime libraries. Tools are fully re-hashed only
when their files' metadata changed since this machine verified them, and
`lasm cache repair` always checks every byte.
The source installer also accepts the [documented download environment settings](docs/INSTALLATION_HARDENING.md#transfers).

Environment variables (all optional; set them before `npx lasm …`):

| Variable | Example | Effect |
| --- | --- | --- |
| `LASM_TOOLCHAIN_CACHE` | `LASM_TOOLCHAIN_CACHE=/data/lasm-cache npx lasm Main.lean` | Move the managed tool cache ([default locations](docs/NODE_SUPPORT.md)). |
| `LASM_BUILD_JOBS` | `LASM_BUILD_JOBS=2 npx lasm build Main.lean` | Threads for Binaryen's optimizer (default: the machine's CPUs, at most 8). The output is the same for any value. |
| `LASM_THREAD_POOL` (built apps; after 0.2.0, branch `dx`) | `LASM_THREAD_POOL=0 node dist/main.mjs` | Lean thread Workers started before `main` (0–64, default 4); further threads start on demand. The function-platform shims (`lasm package`) default to 1: on a fraction of a CPU, pre-started Workers delay the cold start (about 5 %) ([measurements](docs/BENCHMARKS.md#cold-start-on-a-fraction-of-a-cpu)). |
| `LASM_ARTIFACT_SOURCE` | `LASM_ARTIFACT_SOURCE=npm npx lasm Main.lean` | `auto` (default): `@lasm/…` npm tool packages when present, else HTTPS; `npm`: never download directly; `https`: ignore the npm packages. |
| `LASM_DOWNLOAD_ATTEMPTS`, `LASM_DOWNLOAD_CONNECT_MS`, `LASM_DOWNLOAD_IDLE_MS`, `LASM_DOWNLOAD_TOTAL_MS` | `LASM_DOWNLOAD_TOTAL_MS=14400000 npx lasm Main.lean` | Download retries and timeouts ([defaults and ranges](docs/INSTALLATION_HARDENING.md#transfers)). |
| `NODE_USE_ENV_PROXY`, `HTTPS_PROXY`, `NO_PROXY`, `NODE_EXTRA_CA_CERTS` (Node's own) | `NODE_USE_ENV_PROXY=1 HTTPS_PROXY=http://proxy:8080 npx lasm Main.lean` | Proxies and private CAs ([corporate networks](docs/INSTALLATION_HARDENING.md#corporate-networks)). |

Other `LASM_*` variables in the source are maintainer diagnostics, not a supported interface.

The source checkout also retains experimental interfaces. They are **unavailable
in the Node release candidate**: `node bin/lasm.mjs build examples/basic/lasm.json dist`
builds callable bindings from a JSON configuration;
`node lasm-node.js [--rebuild] [--verbose] Main.lean [--] [arguments…]` is a
source-only compatibility launcher. These interfaces have no current release support guarantee.

## Supported environments

These are the machines that **build** with Lasm (the compiler). Where built
applications run is under [Supported platforms](#supported-platforms).

| Environment | Architectures | Current status |
| --- | --- | --- |
| Ubuntu 24.04 LTS (`ubuntu-24.04`, `ubuntu-24.04-arm`) | x86-64 and ARM64 | Candidate `.58` passed native installed-package and copied-deployment acceptance (run 40012750099). |
| Other Linux distributions | x86-64 and ARM64 | Unverified as build machines. The compiler needs glibc 2.34 (the managed tools' newest symbol); Alpine/musl is unsupported as a build machine (built applications run there). |
| macOS 15 (`macos-15-intel`, `macos-15`) | x86-64 and ARM64 | Candidate `.58` passed native installed-package and copied-deployment acceptance. |
| Windows Server 2025 Datacenter (`windows-2025`) | x86-64 | Candidate `.58` passed native installed-package and copied-deployment acceptance. |
| Windows ARM64 | ARM64 | **Not supported.** Removed on 2026-10-16: neither Lean nor Emscripten publishes Windows ARM64 prebuilts. Lasm stops with `Lasm supports Linux and macOS on x86-64 and ARM64, and Windows on x86-64. Windows ARM64 is not supported.` |
| Bun and Deno as the compiler's runtime | Linux, macOS and Windows as above | Supported from 0.2.0 (0.1.x runs on Node only): Bun 1.4.4 and Deno 2.9.6 are tested in CI on all five platforms, from a packed candidate and, after each release, from the registry with no Node or npm on `PATH`. See [Bun and Deno](docs/BUN_DENO.md). |
| Other JavaScript runtimes, browsers, Cloudflare Workers | Any | Not supported as the compiler's host. Built programs run on edge isolates from 0.2.0 (see `--target workers` above). |

Other OS releases and Node/npm/Lean versions are unverified. No engine flags are
needed. Linux requires its ordinary OS libraries and shell, but no developer SDK.
The [acceptance report](https://github.com/Millillion/lasm/blob/main/docs/NODE_ACCEPTANCE.md) identifies exact tested artifacts;
[the plan](https://github.com/Millillion/lasm/blob/main/docs/PLAN.md) records the completed milestone and deferred work.
Lasm supports five targets: Linux and macOS on x86-64 and ARM64, and Windows on
x86-64. The same `.58` archive passed on all five, with native x86-64 and ARM64
execution.

**Performance:** [BENCHMARKS.md](https://github.com/Millillion/lasm/blob/main/docs/BENCHMARKS.md)
lists cold start, bundle size, memory, HTTP throughput and latency, interop call
latency, build time and install cost for each release candidate, beside plain-Node
references measured on the same runner. The candidate pipeline records them
automatically on Linux x64.

## Supported platforms

A built application (`dist/`) needs **Node 24 or
newer**; Node 22 and older stop with `This application requires Node 24.0.0 or
newer`. Give it **at least 512 MB of memory**. Each platform below is **tested in
CI** with the local runtime, image or emulator named; none is checked with a real
cloud account or deployment. Details, requirements and the full matrix:
[DEPLOYMENT.md](docs/DEPLOYMENT.md); recipes: [docs/deploy](docs/deploy/README.md).

| Platform | Tested in CI with |
| --- | --- |
| Linux x64 and arm64 (glibc 2.28+), Node 24+ | Node 24.0.0, 24.22.1 and 26.12.1 on `ubuntu-24.04` and `ubuntu-24.04-arm` |
| macOS (x64, arm64) | x64: Node 24.0.0 and 24.22.1 on `macos-15-intel`; arm64: Node 24.22.1 on `macos-15`; x64 and arm64: installed acceptance with Node 26.12.1 |
| Windows x64 | Node 24.0.0 and 24.22.1 on `windows-2025`; installed acceptance with Node 26.12.1 on `windows-2025` |
| Docker / Kubernetes | `node:24-bookworm-slim`, `node:26-bookworm-slim`, `node:24-bullseye-slim` (glibc 2.31), Ubuntu 22.04/24.04 with Node tarballs; read-only, 512 MB, x64 and arm64, with Docker (Kubernetes manifests are not applied in CI) |
| Google Cloud Run, Fly.io, Railway, Render, Heroku | only the same container images and Dockerfiles (container recipes); the platforms themselves are never deployed to |
| AWS Lambda (container image) | `public.ecr.aws/lambda/nodejs:24` + AWS Lambda Web Adapter through the Runtime Interface Emulator, x86_64 and arm64; `amazonlinux:2023` |
| AWS Lambda (.zip, `nodejs24.x`) | `lasm build --target lambda` zips of every server template in `public.ecr.aws/lambda/nodejs:24` through the Runtime Interface Emulator, x86_64 and arm64, with API Gateway REST/HTTP API, function URL and ALB sample events; AWS SAM CLI `sam local invoke` and `sam local start-api` |
| Lambda@Edge (origin request, x86_64) | the same image and emulator with CloudFront origin-request sample events; CloudFront itself is not emulated |
| Vercel Functions (Node.js 24, x86_64) | Vercel CLI `vercel build` offline; the built function under Vercel's own Node launcher (`@vercel/node`) in `public.ecr.aws/lambda/nodejs:24`. `vercel dev` needs a login and is not used; Vercel's router is not emulated |
| Netlify Functions (v2, x86_64) | Netlify CLI `netlify build --offline` (the deploy zip) and `netlify dev --offline`; the deploy zip in `public.ecr.aws/lambda/nodejs:24` with Netlify's bundled bootstrap |
| Azure Functions (Node.js v4 model, Linux) | Azure Functions Core Tools `func start` |
| Google Cloud Functions (gen2, `nodejs24`) | Functions Framework on Ubuntu 24.04; Google Cloud's buildpacks (`pack`, `google-24` builder) image |
| Alpine/musl containers | `node:24-alpine` and `node:26-alpine`, x64 and arm64, read-only, 512 MB, including `Std.Http` without `tzdata` (bundled UTC zone, one stderr warning) |
| DigitalOcean App Platform (gVisor) | the container images under Docker with gVisor's `runsc`, x64; App Platform itself is never deployed to |

**Browsers (from 0.2.0).** `lasm build --target browser`
output runs in the browsers below, each tested headless in CI (`browser.yml`) on
the web template and the `Lasm.Web` platform suite (every API area, events, fetch
to a local server, WebSocket, canvas, two apps on one page, unmount):

| Browser | Tested in CI with |
| --- | --- |
| Chrome, Edge (Chromium) | Playwright 1.63.0 Chromium 153 on `ubuntu-24.04` |
| Firefox | Playwright 1.63.0 Firefox 155 on `ubuntu-24.04` |
| Safari (WebKit) | Playwright 1.63.0 WebKit 26.6 on `ubuntu-24.04` and `macos-15` |

The app runs single-threaded on the edge runtime (no `SharedArrayBuffer`, no
COOP/COEP headers). Lean code that blocks (`IO.sleep`, `Task.get` on unfinished
work) stops the app with a message unless built with `--suspend jspi` and run in a
browser with JSPI; use `Async`. See [BROWSER.md](docs/BROWSER.md).

Every build carries the Linux x64 and arm64 native pieces, so `dist/` built on a
Mac or Windows machine deploys to Linux containers, including Alpine (musl). Isolate platforms (Cloudflare Workers, Vercel Edge, Netlify Edge, Deno Deploy,
Supabase Edge Functions) are supported from 0.2.0 through `lasm build --target`;
see [EDGE.md](docs/EDGE.md).

## Lean support and restrictions

**Builds enforce ahead-of-time execution.**

Ordinary functions, recursion, closures, inductive types, pattern matching,
type classes, dependent types, and compiled IO are not excluded by this policy.
Imports, macros, elaboration, tactics, deriving, proofs, and `#eval` can run
**during compilation** in managed native Lean. Generated code must meet the same
runtime restrictions as handwritten code. Import names are not banned, but
initializers count as runtime dependencies: a broad `import Lean` can retain the
compiler. Use ordinary Lean `meta import Lean` when it is needed only by macros or
tactics in a module; use narrower imports for runtime data libraries.
For example, both `import Lean` with `Lean.Json.compress` and `import Lean.Data.Json`
build and run (see below). Each rejection is explained: Lasm prints the chain from
your code to the compiler code and, when a broad import is the cause, the narrower modules your code
uses (here `import Lean.Data.Json.Basic` and `import Lean.Data.Json.Printer`).
Lean 4.35's `LeanExport` library links. Its parser, `LeanExport.parseStream`,
builds `Lean.Expr` values, whose constructors call Lean's C++ kernel, so programs
using it are still rejected.
Deployed programs honor `LEAN_ABORT_ON_NONLINEAR=1` as native Lean does; on macOS
and Windows a standalone source directory containing a file such as `init.lean` or
`std.lean` does not hide the standard `Init`/`Std` libraries; on Windows,
`IO.Process.spawn` with piped stdin/stdout/stderr, DNS lookups and
`Std.Net.interfaceAddresses` work, handle misuse reports the same error as native
Lean, and projects in deep directories build. On Windows a project whose delivered `dist\program.wasm` path would exceed 260
characters still fails to build. Per-platform results:
[language coverage](https://github.com/Millillion/lasm/blob/main/docs/LANGUAGE_COVERAGE.md).

**Lake packages:**

- Modules imported only for compilation (tactics, elaborators, attributes, for
  example Aesop, Qq or `import Lean` for macros) no longer keep Lean's compiler
  in the deployment. In particular `import Lean` with `Lean.Json` (and `deriving
  ToJson, FromJson`) now builds and runs; runtime elaboration and evaluation stay
  unavailable. Lasm runs a module's initializers only when the program uses
  something they define, when they register state the program uses, or when they
  are the program's own code doing console, file, process or environment IO or
  calling C. Other initialization side effects of unused modules (for example a
  library printing while it initializes) do not happen, as with Lean's own
  `meta import`. `--verbose` shows how many initializers were skipped.
- C source that a package bundles (`extern_lib`, `moreLinkObjs`, for example
  leansqlite's SQLite) is compiled for Node with Lasm's compiler. Lake still builds
  that C natively first; Lasm then fetches a "C tier" once (39–52 MB; from the
  `@lasm/lean-c-<platform>` npm package in an npm installation, else the
  `lean-4.35.0-tiers-v2` GitHub release): Lean's own
  clang, which becomes Lake's default `cc`, its linker and headers, and C library
  headers. No system C compiler is needed. On Linux and Windows nothing else is
  needed either; on macOS the C library headers come from the Xcode Command Line
  Tools SDK (`xcode-select --install`), which Lasm may not redistribute (Lasm also
  links against that SDK's `libSystem.tbd` instead of shipping Apple's file), and the
  build says so when it is missing. C code that calls `dlopen` gets an
  implementation that always fails.
- Prebuilt native libraries (shared libraries or `-l` link options, for example
  libcurl, OpenSSL, libpq, hiredis, BLAS) cannot be linked. When the program's
  code needs one, the build stops and names the library and the package that
  declares it; a library used only during compilation (a tactic's solver) is
  left out.
- Outbound HTTP: call Node's own `fetch` through JS/npm interop (below); code that
  runs the `curl` tool with `IO.Process` also works where curl is installed. The experimental
  Millillion/fetch library tested in Phase 3 is superseded, archived and was never released.

**JS/npm interop:** `import Lasm.JS`
calls Node built-ins, Node globals such as `fetch`, and npm packages from Lean, and
lets JavaScript call Lean functions (HTTP handlers for Express or Hono, callbacks).
Lasm ships the library: no Lake dependency is needed. Put a `package.json` next to
the lakefile (or next to `Main.lean`) and run `npm install`. `lasm build` copies the
production dependencies into `dist/node_modules`, checks every binding against the
installed packages. Lean 4.35.0 is required. Complete program:

```lean
import Lasm.JS
open Lasm.JS

/-- `await fetch(url, init)` (Node's global fetch) -/
@[js "globalThis" "fetch"] opaque fetch : String → Data → IO Value

def main : IO Unit := do
  let response ← fetch "https://example.com" (obj [])
  IO.println s!"{← response.get "status" Nat}: {(← response.callMethodAwait "text" #[] String).length} characters"
```

`npx lasm Main.lean` runs it. Each JavaScript call costs about 25–35 µs (the Lean thread
crosses to Node's main thread). On the benchmark runner (4-CPU GitHub Linux x64,
candidate `.39891445495`, [BENCHMARKS.md](https://github.com/Millillion/lasm/blob/main/docs/BENCHMARKS.md)) a Hono server with a Lean handler serves about 9,700
requests per second and Express about 6,300, against about 54,000 for a plain Node
`http` server (0.18× and 0.12×) and about 660 for `Std.Http` under Lasm. Node's main
thread is the limit: each request made about four host calls in that measurement;
`Function.ofFnReply` cuts that to two or three (+16–30 % locally). Lean handlers run
in `Async` (Lean's `Std.Async`):
a handler that awaits JavaScript (`callMethodAwait`, a binding declared
`→ Async R`) holds no Lean thread, so any number of requests can wait at once
(1,000 concurrent 100 ms awaits in about 0.3 s on 2 CPUs); awaiting in `IO`, as
in the script above, blocks the calling thread. These programs run only under Lasm: natively, every JavaScript operation fails
with a clear error, and the Lean editor extension does not know `Lasm.JS` yet. The
guide for writing bindings (by hand or by an AI agent), with Express, Hono, `pg`,
`jose` and `fetch` examples, type mappings, errors and exact limitations, is
[JS_BINDINGS.md](https://github.com/Millillion/lasm/blob/main/docs/JS_BINDINGS.md).

The deployed application cannot use the following capabilities:

| Unavailable at runtime | Examples and exact boundary |
| --- | --- |
| Load Lean module data or locate a compiler installation | `Lean.importModules`, `Lean.withImportModules`, module-data readers/writers, `Lean.findSysroot`, `Lean.initSearchPath`; deployed `.olean`/IR loading is unsupported. |
| Evaluate or compile new Lean code | `Lean.Environment.evalConst`, interpreter evaluation, a Lean REPL, runtime source elaboration/compilation, or evaluation of declarations loaded by name. Calling an ordinary compiled function is allowed. |
| Use Lean's compiler/kernel runtime state | Runtime elaboration, kernel proof checking, compiler environments, or language-server machinery requiring Lean's C++ compiler/kernel implementation. Pure Lean data operations are not automatically forbidden, but their reachable dependencies must pass the check. |
| Load executable plugins dynamically | Lean/Wasm plugin loading, `dlopen`/`dlsym` and equivalent loader operations, or runtime Lean symbol lookup. Build-time plugins remain subject to ordinary native Lean and package compatibility. |

The build checks **reachable runtime dependencies**, including imported libraries
and indirect calls, before producing a deployment. A reachable forbidden call is
rejected even if your current input would not take that branch. Dead code removed
by the linker is not a runtime dependency. The check is conservative: live Lean
C++ compiler/kernel code or mutable state is rejected, apart from audited
initialization-independent inline helpers and read-only data. A dependency may
therefore need refactoring to keep compiler operations at build time.

The launcher also rejects missing, stale, or incompatible capability records
before loading the application. This checks the declared build capabilities; it is not
a security sandbox against someone rewriting JavaScript or Wasm. There is **no
large compatibility fallback**.

This restriction does not imply full compatibility for everything else. Console
output, arguments, exit codes, local Lake imports, and selected language/filesystem
fixtures have native-versus-Node tests. **Complete `IO.FS`, `Std.Http`, concurrency,
subprocess/signal/terminal parity, every third-party library, and the full Lean
upstream suite are not release guarantees.** See [IO gaps](https://github.com/Millillion/lasm/blob/main/IO_LIMITATIONS.md)
and [deployment-size evidence](https://github.com/Millillion/lasm/blob/main/docs/BUNDLE_SIZE.md) for the remaining work.
**HTTP servers: use Express or Hono with Lean handlers for production on Node.**
`Std.Http` is supported for pure-Lean code that must also build natively. Under Lasm
it serves about 660 requests per second on the benchmark runner, against about 9,700
for Hono and 6,300 for Express with Lean handlers ([BENCHMARKS.md](https://github.com/Millillion/lasm/blob/main/docs/BENCHMARKS.md)), because every
socket, timer and `Date` operation is a round trip to Node's main thread (about 29
per request, against about 4 for a Lean handler in Express or Hono); details in the
[launch position](https://github.com/Millillion/lasm/blob/main/docs/SERVER_MVP.md#launch-position-2026-10-23).
Candidate `.54` leaked memory on every `Std.Http` request; candidate `.39310029213`
and later fixed it and passed load, fault and soak tests on all five targets.

## Known limitations

A summary; the sections above and the linked pages have the details.

- **Ahead of time only.** Deployed programs cannot elaborate, evaluate or compile
  Lean, load module data or plugins, or use Lean's C++ compiler/kernel (the table
  above). Using Lean as a run-time library beyond pure data (JSON, `Lean.Data.*`)
  is parked ([plan](docs/PLAN.md)).
- **Native code.** Prebuilt native libraries (`-l` options, shared libraries)
  cannot be linked; a package's bundled C source is compiled for Node, and
  `dlopen` always fails. On macOS, C projects need the Xcode Command Line Tools SDK.
- **Platforms.** No Windows ARM64, Alpine/musl build machines (built applications run on Alpine; the compiler needs glibc), browsers, other JavaScript runtimes
  or isolate platforms. On Windows a `dist\program.wasm` path over 260 characters
  fails to build, and a `dist/` built on Windows and copied to Linux other than
  through `docker build` needs `chmod 755 dist/host/native/process/linux-*`
  ([DEPLOYMENT.md](docs/DEPLOYMENT.md)).
- **Node flags.** `node [flags] dist/main.mjs` and `NODE_OPTIONS` work, including
  per-process flags such as `--max-old-space-size` (Lean's threads are Workers,
  which do not accept those; they apply to the whole process anyway). `--jitless`
  cannot work: it disables WebAssembly. Candidates up to `.58` crash on per-process
  flags given on the command line (use `NODE_OPTIONS` with them).
- **Memory.** Give an application at least 512 MB. It reserves about 22 GB of
  virtual address space, so hosts that cap virtual memory (`ulimit -v`,
  `vm.overcommit_memory=2`) refuse it. Node 26's official binary needs
  `libatomic1` on minimal images that install the Node tarball themselves.
- **JS/npm interop.** Each JavaScript call crosses to Node's main thread (about
  25–35 µs). Lean code that awaits a promise in `IO` holds one of Lean's worker
  threads (about one per CPU) while it waits. Handlers run in `Async`, which
  awaits without a thread
  ([JS_BINDINGS.md](docs/JS_BINDINGS.md), [interop soak](docs/INTEROP_SOAK.md)).
  `Lasm.JS` programs fail natively, and the Lean editor extension does not know
  `Lasm.JS`.
- **Big numbers** (`Nat`/`Int` beyond 63 bits) use Lean's own arbitrary-precision
  code instead of GNU MP, so apps contain no LGPL code. Results equal native
  Lean's; speed is close to the earlier GMP runtime up to a few hundred digits,
  then falls behind: at 10,000 digits multiplication is about 5× and `Nat.gcd`
  about 60× slower than with GMP in Wasm (23× and 210× slower than native Lean),
  and at 100,000 digits multiplication about 23×. Heavy multi-thousand-digit
  arithmetic (and `Rat` with huge values) is a poor fit
  ([numbers](docs/BENCHMARKS.md#big-numbers-without-gmp)).
- **`Std.Http`** works but serves about 660 requests per second under Lasm; use
  Express or Hono with Lean handlers for production HTTP.
- **Lake dependencies** use your system Git (and its SSH/credential setup); Lasm
  ships no Git ([system Git](docs/MANAGED_GIT.md)).
- Complete `IO.FS`, concurrency, subprocess/signal/terminal parity, every
  third-party package and the full upstream suite are not release guarantees
  ([language coverage](docs/LANGUAGE_COVERAGE.md)).

## Releases and provenance

0.1.0 was the first npm release; 0.2.0 adds edge targets and Bun/Deno ([notes](docs/release/0.2.0-notes.md)). Lasm's npm packages (`@lasm/cli`, `@lasm/create` and
the `@lasm/…` tool packages) are published only by the
[`release.yml`](.github/workflows/release.yml) GitHub Actions workflow, through npm
trusted publishing with provenance: no npm tokens exist, and each package trusts
only that workflow of this repository. A release is a pull request that bumps the
`package.json` version; it is published only after the `release-checks` status
(the five-platform candidate checks, the edge and Bun/Deno checks, and an npm rehearsal of the exact packages with npm, Bun and Deno)
passed for the released commit. Releases get the tag `v<version>` and a GitHub
release with the notes ([0.1.0](docs/release/0.1.0-notes.md), [0.2.0](docs/release/0.2.0-notes.md)). `npm view @lasm/cli@<version>` shows the
provenance, and `npm audit signatures` in a project verifies it. Details:
[Releasing](docs/RELEASING.md).

## Licenses

Lasm's own source is under the [MIT License](LICENSE) (copyright Jordan Last);
`@lasm/create` is MIT, and `@lasm/cli`'s `license` field is an SPDX expression of
Lasm's MIT and every component it bundles, with their texts in `licenses/`. The
[license audit](docs/LICENSE_AUDIT.md) lists every distributed component, its
license and how each obligation is met.

- **Built `dist/`**. `THIRD_PARTY_NOTICES.txt` starts with Lasm's
  MIT notice and the list of Lean files Lasm changed, then the licenses of what
  `program.wasm`, `program.cjs` and `host/` contain: Lean's runtime and standard
  library (Apache-2.0), Emscripten (MIT OR NCSA), musl, LLVM libc++, libc++abi,
  libunwind and compiler-rt, mimalloc, libuv, koffi and Lasm's host (MIT). The
  runtime is built without GNU MP, so an app contains no copyleft code (runtimes
  of candidates up to `.58` still link GNU MP, and their notices say so).
  `licenses/<package>/` holds the license files of every Lake dependency compiled
  into `program.wasm`, also appended to the notices; with npm interop,
  `node_modules/` holds each package with its own license. Keep these files when
  you distribute a `dist/`.
- **Edge, browser, WASI, Fastly and wasi-http outputs** get the same notices,
  rewritten to say what their files contain, written automatically: a
  `THIRD_PARTY_NOTICES.txt` in every output directory, a short `/*! … */` licence
  banner on the JavaScript a platform bundles (the edge glue, the browser loader),
  the whole notices file inside the Wasm of server-side outputs (a `lasm.notices`
  custom section, so it travels with every deployment), the file in the Fastly
  package, and `THIRD_PARTY_NOTICES.lasm.txt` in Vite builds. What this means for
  your app: [docs/LICENSING.md](docs/LICENSING.md).
- **Tool packages and release archives.** Each `@lasm/…` tool package has an SPDX
  `license` field and the archive's license files in `licenses/`. The exact
  sources of the (L)GPL pieces the Lean archives contain (GNU MP, the GNU C
  Library, GCC's runtime libraries, the Linux UAPI headers, MinGW-w64) and Lean's
  own source are mirrored as assets of the release that publishes them
  ([`lean-4.35.0-tiers-v2`](https://github.com/Millillion/lasm/releases/tag/lean-4.35.0-tiers-v2));
  each archive's NOTICE lists them. Lasm ships no Git and no Apple SDK files.
- The Lean name and logos are trademarks of Lean FRO. Lasm is not affiliated with or endorsed
  by Lean FRO.
