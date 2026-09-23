# Lasm compiler

Lasm is building a managed compiler for ordinary Lean applications deployed in
Node, Deno, and Bun. Native Lean/Lake compiles the application ahead of time;
the deployed application contains WebAssembly, JavaScript loaders, and host
support. Lean source uses ordinary APIs, including `IO.FS` and `Std.Http`.

The [current product plan](docs/PLAN.md) targets full Lean compatibility and
Node/npm-only installation on Linux, macOS, and Windows, each on x64 and ARM64.
**That acceptance goal is not complete.** Nothing has been published to npm.
See [implementation status](docs/APPLICATION_PIPELINE.md),
[remaining IO work](IO_LIMITATIONS.md), and [next steps](NEXT_STEPS.md).

## Application workflow

The primary CLI now connects managed native tools to the full application
runtime. It selects Lean using the ordinary `lean-toolchain` file, defaulting to
the release's pinned version when there is no project pin. The current managed
application version is Lean 4.34.0; unsupported pins fail without being changed.

After installing a complete local compiler candidate:

```sh
lasm Main.lean -- hello
lasm build Main.lean --target node
node dist/main.mjs

lasm build Main.lean --target deno
deno run -A dist/main.mjs

lasm build Main.lean --target bun
bun dist/main.mjs
```

Standalone files and ordinary Lake projects use the same CLI. Lake owns module
dependencies and compiler configuration. Application builds need no Lasm imports,
annotations, or `lasm.json`. Deploy the complete `dist/` directory.
Building a target does not require its execution engine to be installed.

The [ordinary Lean HTTP example](examples/lean-server-latest/README.md) exercises
JSON CRUD, persistent files, concurrent requests, binary bodies, streaming,
cancellation, and graceful shutdown. Its parallel Vitest suite compares deployed
Wasm with native Lean. The primary managed CLI currently has separate Linux x64
acceptance records; it must still pass clean package installation and the full
native platform matrix. Native Windows ARM64 build tools remain unfinished.

## Maintainer development

Work stays on `main`, with unsigned commits pushed to the authorized GitHub
repository. npm publication requires separate authorization. Keep downloaded
tools and generated artifacts under ignored `.cache/` and `.work/` directories.
Follow [AGENTS.md](AGENTS.md): one guarded heavy workload at a time, with base
pages and one worker for full Wasm links. Earlier overlapping workloads caused
host OOM kills.

The application bundle is built with
`scripts/full-lean/build-application-runtime.mjs` and assembled with
`scripts/full-lean/package-application-runtime.mjs`. Maintainer builds can point
`LASM_APPLICATION_RUNTIME` to the verified bundle. Local release candidates are
assembled by `scripts/package-application-release.mjs`; installing users receive
the bundle inside the package. `LASM_TOOLCHAIN_CACHE` can relocate managed tools.

The repository's root `lean-toolchain` still pins the older compiler-development
project. The current HTTP example has its own ordinary Lean 4.34.0 pin. Do not
silently replace a project's toolchain to make a command succeed.

## Preserved earlier work

The previous Lean 4.32.0 cooperative runtime, callable JavaScript/TypeScript
bindings, Express example, browser/Workers adapters, and compiler-in-Wasm research
remain available with their original scope. Their results do not establish
compatibility of the current product. Latest-Lean callable bindings and Express
acceptance remain open work.

- [Callable libraries and Lake integration](docs/DEVELOPER_WORKFLOW.md)
- [Express application with Lean endpoints](examples/express/README.md)
- [Earlier release and installation evidence](docs/RELEASE.md)
- [Unchanged latest upstream suite inventory](docs/UPSTREAM_APPLICATION_TESTS.md)
- [Separate compiler-in-Wasm results](docs/FULL_SUITE_RESULTS.md)
- [Initial discussion and tested design claims](docs/THREAD_REVIEW.md)
