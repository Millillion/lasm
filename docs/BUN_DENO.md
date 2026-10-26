# Bun and Deno (Phase 7.5)

Status: **supported from 0.2.0** on all five platforms (Linux x64 and arm64,
macOS x64 and arm64, Windows x64), with Bun 1.4.4 and Deno 2.9.6 tested in CI.
Releases before 0.2.0 (0.1.x) run the compiler on Node only. The Node build and
its full profile are unchanged.

Lasm runs on Bun and Deno in two ways:

1. **The compiler runs on them.** `lasm` works with Bun or Deno as its only
   JavaScript runtime, with no Node or npm installed.
2. **Built programs run on them**, with the portable profile. This is the edge
   profile from [EDGE.md](EDGE.md): single-threaded Lean, a pure-JS host,
   and no files, sockets or processes.

The full profile (threads, files, processes, koffi, wasm64) stays Node-only.

## The compiler on Bun and Deno

```sh
bunx --bun @lasm/cli Main.lean          # --bun: Bun runs Lasm even when Node is installed
bunx --bun @lasm/cli build Main.lean
deno run -A npm:@lasm/cli Main.lean
deno run -A npm:@lasm/cli build Main.lean
bun create @lasm my-app --template hono  # @lasm/create, like npm create @lasm
deno run -A npm:@lasm/create my-app --template hono
```

**Deno and new releases.** Deno 2.9 ignores npm versions published in the last
24 hours (its default minimum dependency age). For the first day after a Lasm
release, `deno run npm:@lasm/cli` resolves to the previous release (or to none)
unless you pass `--minimum-dependency-age=0` (also to `deno install`), or
set `"minimumDependencyAge"` in `deno.json`. Bun has no such default.

In a project made by `lasm init` (templates `plain` and `hono`):

| | Bun | Deno |
| --- | --- | --- |
| Install | `bun install` | `deno install` |
| Run (dev build) | `bun run dev:bun` (`bun x --bun lasm Main.lean --`) | `deno task dev` (Deno runs `lasm` itself) |
| Build | `bun run build:bun` → `bun/` | `deno task build:deno` → `deno/` |
| Start the build | `bun run start:bun` (`bun bun/main.mjs`) | `deno task start:deno` (`deno run -A deno/main.mjs`) |

**The default target is the compiler's runtime.** Under Bun, `lasm build`
means `--target bun`, and `lasm Main.lean` builds that target and runs it with
Bun. Under Deno, it means `--target deno`. `--target node` still builds
`dist/` for Node.

**How it works.** The pipeline is the same. Lasm runs a few JavaScript tools in
child processes: Emscripten's tools in the link, Lake's environment probe and
the `Lasm.JS` binding check. They run on the compiler's own runtime
([`src/js-runtime.mjs`](../src/js-runtime.mjs)). Deno gets
`run --allow-all --no-lock --unstable-detect-cjs`, because Emscripten bundles
a UMD module (terser).

**Tool downloads.** Tools come from the same pinned archives with the same
SHA-256 checks:

- Platform packages installed by `bun install` or `deno install` are used
  directly.
- On-demand packages are fetched with `npm pack` when npm exists.
- Under Bun or Deno with no npm, the pinned tarball comes straight from the
  registry (`npm_config_registry`, else registry.npmjs.org). It is checked
  against its pinned sha512, then the archive against its SHA-256.
- Anything missing falls back to the verified HTTPS download, as on Node.

**Measured:**

- Locally (Linux x64; pure-Lean example and Hono template), builds under Bun
  and Deno give a `program.wasm` byte-identical to Node's, for both the Node
  build and the edge link.
- CI: run 40143173720, job `hosts`, on ubuntu-24.04 and ubuntu-24.04-arm
  ([results](evidence/compiler-hosts-40143173720.json)). It builds the pure
  example under Node, Bun 1.4.4 and Deno 2.9.6. All outputs are identical,
  across both architectures too. Bun and Deno serve the build, and a
  command-line program passes under both.
- Cold build of the pure example: Bun 68 s and Deno 82 s on x64; 58 s and
  72 s on arm64.

## Programs on Bun and Deno: `--target bun` and `--target deno`

`lasm build Main.lean --target bun` writes `bun/`. `--target deno` writes
`deno/`. `--target deno-deploy` writes the same `deno/`.

| Path | Contents |
| --- | --- |
| `main.mjs` | The generated entry. |
| `lasm/program.wasm`, `program.mjs` | The program, linked single-threaded with JSPI. |
| `lasm/edge-*.mjs` | The pure-JS host. |
| `build-info.json`, `THIRD_PARTY_NOTICES.txt` | Build record and notices. |

`main.mjs` behaves like this:

- **A command-line program.** Lean's `main` gets the arguments. Its `UInt32`
  result, or `IO.Process.exit`, is the exit code. Standard output and error
  are written byte for byte.
- **A server.** If `main` publishes a handler with `Lasm.JS.exportDefault`
  (the Hono template does this when `Lasm.JS.onEdge` is true), the program
  serves it. Bun uses `Bun.serve` on `PORT` (default 3000). Deno uses
  `Deno.serve` on `PORT` (default 8000). A stopped instance is replaced on
  the next request.

Bare imports (`hono`) resolve from the project's `node_modules`. Modules are
chosen as for Workers: bindings are imported automatically, and
`"lasm": { "edge": { "modules", "exclude" } }` in `package.json` adds or
removes them.

**What works:** see [EDGE.md: Edge profile](EDGE.md#edge-profile-lean-features).
That covers pure Lean, tasks (cooperative), `Std.Async`, blocking waits (JSPI),
`Lasm.JS`, clocks, `Std.Time` (UTC) and environment variables.

**What does not:** files beyond a read-only UTC zone, standard input,
sockets and `Std.Http` servers, processes, threads, and the Express template.
For those, use `--target node`.

**Engines:** JSPI is needed. Bun 1.3.14 and newer have it, as do Deno 2.x and
Node 26. Node 24 does not, so `node bun/main.mjs` fails there with
`WebAssembly.Suspending is not a constructor`.

**Measured** (Linux x64, 2026-10-24; every check route, including
stop-and-restart):

| App | Bun 1.4.4: first response, per request | Deno 2.9.6: first response, per request | Output |
| --- | --- | --- | --- |
| Hono template | 169 ms, 0.62 ms | 160 ms, 0.72 ms | 1.50 MiB |
| `examples/edge-pure` | 196 ms, 0.82 ms | 172 ms, 0.92 ms | 1.84 MiB |

## Tested in CI

Every push to `phase-7` that touches the compiler runs these on free GitHub
runners (`ubuntu-24.04`, `ubuntu-24.04-arm`, `macos-15`, `macos-15-intel`,
`windows-2025`):

- **`workers.yml`, job `platforms`** (all five): a candidate packed from the
  commit and installed with npm. The pure example is built under Node, Bun and
  Deno (the Node build, every edge target from Node, and the default target
  under Bun and Deno), the Bun and Deno builds are served by Bun and Deno, a
  command-line program runs with `lasm Main.lean -- …` under both, and the Hono
  template from `lasm init` is built with `bun run build:bun` and
  `deno task build:deno` and served. Job `compare` requires the same
  `program.wasm` on every platform and under every runtime.
- **`workers.yml`, job `hosts`** (Linux x64 and arm64): the same builds from the
  source checkout.
- **`bun-deno-published.yml`** (all five; after each release and daily): the
  published `@lasm/cli` and `@lasm/create` installed and run with Bun and Deno
  only, with Node and npm removed from `PATH`: `bun add`, `bun x --bun lasm
  build`, `bunx --bun @lasm/cli Main.lean`, `bun create @lasm`, `bun run
  build:bun`; `deno install`, `deno run -A npm:@lasm/cli`, `deno run -A
  npm:@lasm/create`, `deno task build:deno`; each build served. It skips while
  no release is on the registry, and for a release before 0.2.0 it checks only
  the installs.

Results: `workers.yml` run 40277505987 passed every job on all five targets
(2026-10-26), including the cross-platform byte comparison. The first
`bun-deno-published.yml` run (40277505832) skipped cleanly on all five: only
the 0.0.0 placeholders were on the registry.

## Not supported

- **Standard input** in the portable profile.
- **The full profile** (threads, files, sockets, processes, koffi, wasm64) on
  Bun or Deno: use `--target node`.
