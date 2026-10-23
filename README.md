# Lasm

Write ordinary Lean. Compile it ahead of time and run it in Node. Node.js is the
only supported JavaScript runtime.

**Start here: [Getting started](docs/GETTING_STARTED.md)** goes from Node and npm to a
web server with Lean request handlers (Hono or Express), an npm package called from
Lean, and a container deployment, with [recipes per platform](docs/deploy/README.md).
It uses `lasm init` from current source (not yet in a candidate).

**Prerequisites:** stock **Node 26.12.0 with npm 11.20.0** for accepted candidate
`.54` (Phase 3/4 candidates pin **Node 26.12.1**, same npm). Current source (Phase
5.1, not yet in an accepted candidate) accepts **Node 24 or newer with npm**, for
the compiler and for built applications, and is tested on Node 24.22.1 and 26.12.1.
Lasm downloads its matching **Lean 4.35.0**, Lake, and build tools; you do not install
them yourself (the older candidate `.46` used Node 26.10.0 / Lean 4.34.1).
The package is experimental and **has not been published to npm**.

## Get started

On a supported Linux, Mac, or Windows machine, get the tested `.46` tarball in the
[acceptance report](https://github.com/Millillion/lasm/blob/main/docs/NODE_ACCEPTANCE.md)
from a maintainer (repository access may be required). Copy it into an empty directory:

```sh
npm install ./lasm-compiler-0.1.0-experimental.46.tgz
```

Save this complete program as `Main.lean`:

```lean
def main : IO Unit := do
  IO.println s!"Hello from Lean! 2 + 3 = {2 + 3}"
```

Run, build, and deploy:

```sh
npx lasm Main.lean           # Compile and run: Hello from Lean! 2 + 3 = 5
npx lasm build Main.lean     # Create dist/ without running main
node dist/main.mjs          # Run the deployment
```

The first build needs internet access and downloads about 250–275 MB for an
ordinary program (tiered Lean and a minimal compiler toolchain, no Python); Lake
projects and programs importing `Lean` download more. Measured first builds of a
small program took 42–60 seconds on Linux and Apple Silicon and about 3 minutes on
the slower Intel Mac and Windows CI machines. Candidate `.54` passed acceptance and
three consecutive cold installations on all five targets (see
[toolchain slimming](docs/TOOLCHAIN_SLIMMING.md)). Candidate `.46` downloaded
0.9–1.3 GB and took 5–16 minutes. The terminal shows progress
and elapsed time. Later builds reuse verified tools and unchanged outputs. See
[cache locations, requirements, and recovery](docs/NODE_SUPPORT.md).
Candidate `.46` requires rerunning failed downloads. Current source adds bounded
retries, safe resume, crash recovery, offline repair, and bundled installer
dependencies. The hardened candidate also passed installed, offline, deployment,
and proxy/CA acceptance on all six native targets then tested (including Windows
ARM64, since removed), alongside the installer fault
checks, and its repeated-installation gate (three consecutive clean cold
installations on every target) passed on 2026-10-16. See
[installation hardening](docs/INSTALLATION_HARDENING.md) for settings and progress.
New candidates must also pass three consecutive cold installations on every target
before meeting the additional robustness gate; one successful run alone is insufficient.

Copy **all of `dist/`** to a supported machine. Candidates up to the Phase 4
interop candidate require the **same OS, architecture, and Node version**. Current
source (Phase 5.1) runs `dist/` on **Node 24 or newer** on Linux x64 and arm64
(glibc 2.28+) from a build on any supported platform, and on the build machine's
own platform; see [Supported platforms](#supported-platforms). No Lean source, npm
install, build tools, or development cache is needed there. Include your
application's external assets yourself.

An existing Lake project can use local imports normally. To pin Lean, put
`leanprover/lean4:v4.34.1` (candidate `.46`) or `leanprover/lean4:v4.35.0` (current
source) in its `lean-toolchain` file. A package supports exactly one Lean release;
other versions are rejected with `Unsupported Lean toolchain … Supported managed
versions: …` and the pin is left unchanged. Current source has a per-package
[compatibility list](https://github.com/Millillion/lasm/blob/main/docs/COMPATIBILITY.md) (Batteries, Cli, LSpec,
Plausible, Aesop, Qq, leansqlite, UnicodeBasic, MD4Lean, lean-zip, lean4-parser, lean-redis
and others); packages not on it are untested.
After an authorized npm release, installation will be `npm install @lasm/cli`
(or `npx @lasm/cli Main.lean` without installing); the bin stays `lasm`. That
registry command is **not available yet**. Current source, not yet in a candidate,
can take its build tools from exact-pinned `@lasm/…` npm packages instead of
downloading them, and fetches the Lake/`Lean`-import data and Git with your own
npm on first use; this was validated only against a local test registry
([npm distribution](docs/TOOLCHAIN_SLIMMING.md#phase-3-2026-10-16-npm-distribution)).
`LASM_ARTIFACT_SOURCE=npm` forbids direct downloads; `https` ignores the packages.

## CLI reference

These are all commands and options in the ordinary Node application interface:

| Command or option | Example | Effect |
| --- | --- | --- |
| Run (default) | `npx lasm Main.lean` | Build and run Lean `main`. |
| Explicit run | `npx lasm run Main.lean` | Same as the default command. |
| Program arguments | `npx lasm Main.lean -- hello "two words"` | Pass arguments to `main (args : List String)`. |
| Build | `npx lasm build Main.lean` | Write `dist/`; do not run the application. |
| Output directory | `npx lasm build Main.lean --output "app dist"` | Choose the deployment directory. `lasm build Main.lean "app dist"` is an alias. |
| Force rebuilding | `npx lasm build Main.lean --rebuild` | Ignore a cached application build. |
| Detailed diagnostics | `npx lasm Main.lean --verbose` | Show compiler and linker details. |
| Help | `npx lasm --help` | Show usage; `-h` is an alias. |
| New project (current source; not yet in a candidate) | `npx lasm init my-app --template hono` | Create a Lake project in a new or empty directory: `Main.lean`, `App.lean`, lakefile, `lean-toolchain`, `package.json`, `Dockerfile`, `.dockerignore`, `.gitignore`, `README.md`. Templates: `plain` (default; a program), `express` and `hono` (Lean request handlers through `Lasm.JS`), `std-http` (pure-Lean `Std.Http` server). Writes files only; run `npm install` next. `lasm init --help` lists the templates. |
| Cache repair (new source; absent from `.46`) | `npx lasm cache repair` | Offline verification and removal of invalid tools and owned abandoned staging. Refuses an active build; keeps valid tools and unrelated files. |

`--rebuild` and `--verbose` work with both run and build. `--output` is build-only;
arguments after `--` are run-only. The application's exit status is preserved.
There is currently no Lasm install, clean, uninstall, or version subcommand.
Candidate `.46` also accepts a redundant `--target node`; current source removed
that option, and passing it is an error.
The source installer also accepts the [documented download environment settings](docs/INSTALLATION_HARDENING.md#transfers).

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
| Ubuntu 24.04.5 LTS, glibc 2.39 | x86-64 and ARM64 | Candidate `.46` passed native installed-package and copied-deployment acceptance. |
| Other Linux distributions | x86-64 and ARM64 | Unverified as build machines. Candidates need glibc 2.39; current source needs glibc 2.34 (the managed tools' newest symbol). Alpine/musl is unsupported. |
| macOS 15.7.9 (24G830) | x86-64 and ARM64 | Candidate `.46` passed native installed-package and copied-deployment acceptance. |
| Windows Server 2025 Datacenter, 10.0.26100.33438 | x86-64 | Candidate `.46` passed native installed-package and copied-deployment acceptance on `windows-2025`. |
| Windows ARM64 | ARM64 | **Not supported.** Removed on 2026-10-16: neither Lean nor Emscripten publishes Windows ARM64 prebuilts. Current source stops with `Lasm supports Linux and macOS on x86-64 and ARM64, and Windows on x86-64. Windows ARM64 is not supported.` (Candidate `.46` historically passed on `windows-11-arm`.) |
| Other JavaScript runtimes, browsers, Cloudflare Workers | Any | Not supported; Lasm targets Node only. |

Other OS releases and Node/npm/Lean versions are unverified. No engine flags are
needed. Linux requires its ordinary OS libraries and shell, but no developer SDK.
The [acceptance report](https://github.com/Millillion/lasm/blob/main/docs/NODE_ACCEPTANCE.md) identifies exact tested artifacts;
[the plan](https://github.com/Millillion/lasm/blob/main/docs/PLAN.md) records the completed milestone and deferred work.
Lasm supports five targets: Linux and macOS on x86-64 and ARM64, and Windows on
x86-64. The same `.46` archive passed on all five (and historically on Windows
ARM64, which current source no longer supports). These passes use native x86-64
and ARM64 execution.

**Performance:** [BENCHMARKS.md](https://github.com/Millillion/lasm/blob/main/docs/BENCHMARKS.md)
lists cold start, bundle size, memory, HTTP throughput and latency, interop call
latency, build time and install cost for each release candidate, beside plain-Node
references measured on the same runner. The candidate pipeline records them
automatically on Linux x64.

## Supported platforms

Current source (Phase 5.1). A built application (`dist/`) needs **Node 24 or
newer**; Node 22 and older stop with `This application requires Node 24.0.0 or
newer`. Give it **at least 512 MB of memory**. Each platform below is **tested in
CI** with the local runtime, image or emulator named; none is checked with a real
cloud account or deployment. Details, requirements and the full matrix:
[DEPLOYMENT.md](docs/DEPLOYMENT.md); recipes: [docs/deploy](docs/deploy/README.md).

| Platform | Tested in CI with |
| --- | --- |
| Linux x64 and arm64 (glibc 2.28+), Node 24+ | Node 24.0.0, 24.22.1 and 26.12.1 on `ubuntu-24.04` and `ubuntu-24.04-arm` |
| macOS (x64, arm64) | Node 24.22.1 on `macos-15`; installed acceptance with Node 26.12.1 |
| Windows x64 | installed acceptance with Node 26.12.1 (as accepted today) |
| Docker / Kubernetes | `node:24-bookworm-slim`, `node:26-bookworm-slim`, `node:24-bullseye-slim` (glibc 2.31), Ubuntu 22.04/24.04 with Node tarballs; read-only, 512 MB, x64 and arm64 |
| Google Cloud Run, Fly.io, Railway, Render, Heroku | the same container images (container recipes) |
| AWS Lambda (container image) | `public.ecr.aws/lambda/nodejs:24` + AWS Lambda Web Adapter through the Runtime Interface Emulator, x86_64 and arm64; `amazonlinux:2023` |

Every build carries the Linux x64 and arm64 native pieces, so `dist/` built on a
Mac or Windows machine deploys to Linux containers. Not yet supported: Alpine/musl,
Lambda zip packages, Vercel, Netlify, Azure Functions, Cloudflare Workers and
other isolate platforms ([plan](docs/PLAN.md)).

## Lean support and restrictions

**Candidate `.46` and current source builds enforce ahead-of-time execution.**
The older `.34` candidate predates these restrictions; do not use it to enforce
this policy.

Ordinary functions, recursion, closures, inductive types, pattern matching,
type classes, dependent types, and compiled IO are not excluded by this policy.
Imports, macros, elaboration, tactics, deriving, proofs, and `#eval` can run
**during compilation** in managed native Lean. Generated code must meet the same
runtime restrictions as handwritten code. Import names are not banned, but
initializers count as runtime dependencies: a broad `import Lean` can retain the
compiler. Use ordinary Lean `meta import Lean` when it is needed only by macros or
tactics in a module; use narrower imports for runtime data libraries.
For example, accepted candidates reject `import Lean` with `Lean.Json.compress`,
while `import Lean.Data.Json` builds and runs (current source accepts both; see below). **Current source** (not yet in a
candidate) explains each rejection: it prints the chain from your code to the
compiler code and, when a broad import is the cause, the narrower modules your code
uses (here `import Lean.Data.Json.Basic` and `import Lean.Data.Json.Printer`).
Current source also links Lean 4.35's `LeanExport` library (candidates fail with an
undefined `initialize_LeanExport_…` symbol). Its parser, `LeanExport.parseStream`,
builds `Lean.Expr` values, whose constructors call Lean's C++ kernel, so programs
using it are still rejected.
Current source also fixes the following (in candidate `.39500947696`, which passed
installed acceptance; its cold-installation gate is pending; accepted candidates
behave as described in parentheses): deployed programs honor `LEAN_ABORT_ON_NONLINEAR=1`
as native Lean does (ignored); on macOS and Windows a standalone source directory
containing a file such as `init.lean` or `std.lean` no longer hides the standard
`Init`/`Std` libraries (`Cyclic Lean module imports …/Init.lean`); on Windows,
`IO.Process.spawn` with piped stdin/stdout/stderr works (fails with "bad file
descriptor"), DNS lookups and `Std.Net.interfaceAddresses` work (fail),
handle misuse reports the same error as native Lean, and projects in deep directories
build. On Windows a project whose delivered `dist\program.wasm` path would exceed 260
characters still fails to build. Per-platform results:
[language coverage](https://github.com/Millillion/lasm/blob/main/docs/LANGUAGE_COVERAGE.md).

**Lake packages (current source, Phase 3 and its wrap-up; candidate `.39815056197` passed installed acceptance and the cold-installation gate):**

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
  that C natively first; Lasm then downloads a "C tier" once (39–52 MB): Lean's own
  clang, which becomes Lake's default `cc`, its linker and headers, and C library
  headers. No system C compiler is needed. On Linux and Windows nothing else is
  needed either; on macOS the C library headers come from the Xcode Command Line
  Tools SDK (`xcode-select --install`), which Lasm may not redistribute, and the
  build says so when it is missing. C code that calls `dlopen` gets an
  implementation that always fails.
- Prebuilt native libraries (shared libraries or `-l` link options, for example
  libcurl, OpenSSL, libpq, hiredis, BLAS) cannot be linked. When the program's
  code needs one, the build stops and names the library and the package that
  declares it; a library used only during compilation (a tactic's solver) is
  left out.
- Outbound HTTP: accepted candidates make HTTP requests by running the `curl` tool
  with `IO.Process` (where curl is installed), as natively. Current source calls
  Node's own `fetch` through JS/npm interop (below). The experimental
  Millillion/fetch library tested in Phase 3 is superseded, archived and was never released.

**JS/npm interop (current source, Phase 4; not yet in a candidate):** `import Lasm.JS`
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
crosses to Node's main thread). The Express and Hono example with a Lean handler serves
about 4,600–5,200 requests per second with 16 connections on Linux x64, against about
1,300 for `Std.Http` under Lasm. These programs run only under Lasm: natively, every JavaScript operation fails
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
large compatibility fallback** in current source builds.

This restriction does not imply full compatibility for everything else. Console
output, arguments, exit codes, local Lake imports, and selected language/filesystem
fixtures have native-versus-Node tests. **Complete `IO.FS`, `Std.Http`, concurrency,
subprocess/signal/terminal parity, every third-party library, and the full Lean
upstream suite are not release guarantees.** See [IO gaps](https://github.com/Millillion/lasm/blob/main/IO_LIMITATIONS.md)
and [deployment-size evidence](https://github.com/Millillion/lasm/blob/main/docs/BUNDLE_SIZE.md) for the remaining work.
**Long-running `Std.Http` servers are not yet production-ready:** with candidate
`.54`, a server's memory grows with every request until the process is stopped
(see the [Server MVP robustness results](https://github.com/Millillion/lasm/blob/main/docs/SERVER_MVP.md#step-1-milestone-2-robustness-load-faults-soak)).
Native Lean's memory stays flat under the same load.
