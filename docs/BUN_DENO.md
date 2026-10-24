# Bun and Deno (Phase 7.5)

Status: **experimental, unreleased** (planned for 0.2.0, 2026-10-24). It is tested
on Linux only so far. macOS and Windows CI waits for the 0.1.0 gate. The Node
build and its full profile are unchanged.

Lasm runs on Bun and Deno in two ways:

1. **The compiler runs on them.** `lasm` works with Bun or Deno as its only
   JavaScript runtime, with no Node or npm installed.
2. **Built programs run on them**, with the portable profile. This is the edge
   profile from [EDGE.md](EDGE.md): single-threaded Lean, a pure-JS host,
   and no files, sockets or processes.

The full profile (threads, files, processes, koffi, wasm64) stays Node-only.

## The compiler on Bun and Deno

```sh
bunx --bun @lasm/cli Main.lean          # once published; --bun even when Node is installed
bunx --bun @lasm/cli build Main.lean
deno run -A npm:@lasm/cli Main.lean
deno run -A npm:@lasm/cli build Main.lean
```

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

**Measured** (Linux x64, Bun 1.4.4, Deno 2.9.6; pure-Lean example and Hono
template): builds under Bun and Deno give a `program.wasm` byte-identical to
Node's, for both the Node build and the edge link.

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

## Not done yet

- **macOS and Windows** (the compiler under Bun and Deno on all five
  platforms). This waits until the 0.1.0 gate allows macOS and Windows CI on
  this branch.
- **Installing the published packages with `bun install` and `deno install`**
  (platform `optionalDependencies`, `bun create lasm`). This needs the 0.2.0
  packages on a registry. Nothing is published from this branch.
- **Standard input** in the portable profile.
