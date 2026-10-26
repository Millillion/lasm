# The edit loop: `lasm dev` and Lake projects

Start with an ordinary `main` in a standalone file or a Lake project (Lean 4.35.0).
`lasm Main.lean` builds and runs it once; `lasm dev` (0.3.0) watches, rebuilds and
restarts; `lasm build Main.lean` writes the deployable `dist/` (`node dist/main.mjs`,
or another `--target`). No `lasm.json` and no Lake dependency on Lasm is needed:
`Lasm.*` libraries ship with the compiler. Every command and option is in the
[README's CLI reference](../README.md#cli-reference).

## lasm dev

`lasm dev [Main.lean]` (0.3.0; `npm run dev` in the server
templates) is the edit loop:

```text
$ npm run dev
[lasm dev] Watching 7 files in . (events); target node, dev profile. Ctrl+C stops.
[lasm dev] Building Main.lean
[lasm dev] Built in 9.7 s (Lean 1.4s · C 2.1s · link 5.7s · output 0.5s)
Listening on http://0.0.0.0:3000 (Hono)
[lasm dev] App.lean changed; rebuilding
[lasm dev] Built in 1.9 s (Lean 1.0s · C 0.1s · link 0.6s · output 0.2s)
Listening on http://0.0.0.0:3000 (Hono)
[lasm dev] App.lean changed; rebuilding
App.lean:6:2: error: Type mismatch
    6 |   (42 : Nat)
      |   ^
…
[lasm dev] Build failed after 0.4 s; the last good build keeps running. Fix the error and save.
```

- **What it watches**: every `.lean` file of the project (outside `.lake`,
  `node_modules`, `dist`, `build` and dot directories), `lakefile.toml`/`.lean`,
  `lean-toolchain`, `lake-manifest.json`, `package.json` and `package-lock.json`.
  Recursive file events where the platform has them, else a 1 s poll. A save
  that does not change a file's content does not rebuild.
- **How it builds**: the dev profile in one long-lived build worker, so loaded
  code, verified tools and in-memory caches carry over. A rebuild reuses the
  previous build's initialization plan and links only the runtime library
  members that build kept (accepted when the program imports nothing new; else
  it links in full and records the new set). Lake's module queries and the
  Lasm.JS binding check are reused while imports, the Lake configuration and
  the npm packages are unchanged.
- **What it runs**: `--target node` (default under Node) restarts
  `node dist/main.mjs` after each good build (SIGTERM, then SIGKILL after 5 s);
  `bun` and `deno` run the portable build with that runtime. Edge targets
  (`workers`, `vercel-edge`, `netlify-edge`, `deno-deploy`, `supabase-edge`)
  rebuild their output directory only (edge dev profile: Binaryen lowers
  memory64 but does not optimize); run the platform's own local server
  yourself. Lasm never starts platform CLIs and never opens a browser.
  `--target browser` runs the browser target's dev server (static files and
  live reload, `src/browser/browser-dev.mjs`; docs/BROWSER.md) once that
  target is part of the release.
- **Options**: `--release` (release profile), `--no-run`, `--verbose`,
  `-- args` for `main`; browser: `--port`, `--host`, `--output`, `--no-watch`;
  `rs` + Enter rebuilds.

Measurements: [BENCHMARKS.md, "Edit loop"](BENCHMARKS.md#edit-loop-lasm-dev).

The rest of this guide describes the earlier Lean 4.32 callable-library path.
It remains available while latest-Lean bindings are implemented.
A Lasm application can start as a Node project or a Lean project. The common
layout places a Lake project under `lean/`, alongside `package.json` and the
JavaScript host. Lake owns Lean elaboration, dependency resolution, and compiler
options. Lasm consumes Lake's generated C and produces a Wasm-backed ESM module.

```text
my-app/
  package.json
  server.mjs
  lean/
    lean-toolchain
    lakefile.toml
    lake-manifest.json
    App.lean
    lasm.json
  dist/
```

Lasm finds the nearest ancestor `lakefile.lean` or `lakefile.toml` above the
configuration file. Set `"lake": "../project"` in `lasm.json` to select another
Lake project, or `"lake": false` for the original standalone source mode. Lake
builds with the exact supported Lean toolchain; Lasm prevents automatic toolchain
upgrades. Keep `lean-toolchain` and `lake-manifest.json` under version control.

After installing the local compiler tarball described in [RELEASE.md](RELEASE.md),
an application's `package.json` can contain:

```json
{
  "type": "module",
  "scripts": {
    "build": "lasm build lean/lasm.json dist/lean",
    "start": "node server.mjs"
  }
}
```

Ordinary Node `IO.FS`, console, and `Std.Http.Server` need no special Lean
dependency. Only existing programs using the legacy `Lasm.IO` byte/fetch helpers
need the bundled Lean API as a Lake path dependency:

```toml
name = "myApp"

[[require]]
name = "lasm"
path = "../node_modules/@lasm/compiler/lean"

[[lean_lib]]
name = "App"
```

Use `public import Lasm.IO` from a module-system Lean file. Ordinary Lake path
dependencies and Git dependencies work through Lake. Native metaprograms and
plugins run during Lake's host elaboration; executable native externs still need
Wasm implementations. Lasm does not turn arbitrary native libraries into portable
ones. Unsupported runtime symbols fail during linking.

Package and library `leanOptions`, `moreLeanArgs`, custom `srcDir`, and dependency
configuration are handled by Lake. `lasm.json` can supply Lake configuration
options as strings:

```json
{
  "module": "App",
  "lakeOptions": { "mySetting": "value" },
  "exports": {
    "answer": {
      "declaration": "App.answer",
      "parameters": ["Nat"],
      "result": "Nat"
    }
  }
}
```

Lasm reconfigures Lake for each build so changed `-K` values take effect; Lake
then decides which module artifacts need rebuilding. The generated bindings
still make Lean check every export signature. Initializer discovery understands
Lake's package-qualified symbols as well as standalone symbols.

Lasm caches generated wrappers and Wasm objects under the configuration
directory's `.lake/lasm/`. `LASM_CACHE_DIR` can select a different cache directory.
Lake separately writes its normal dependency build artifacts, including under
the bundled Lean API's directory in `node_modules`; those dependency directories
must be writable during a build. A packaged build
uses prebuilt standard-library modules when available and compiles additional
reachable modules from the installed matching Lean source on demand.

The Express example is a real Lake project. Its `App` library depends on the
separate `boardDomain` package under `examples/express/lean/domain`, which in turn
depends on the bundled `lasm` Lean API. Its 57 Vitest tests exercise that build.
The Lake acceptance tests also create a locked local Git dependency, build in
directories with spaces, and verify that changed compiler configuration changes
an exported runtime value.

The build integration uses the pinned version's documented
[Lake command interface](https://lean-lang.org/doc/reference/latest/Build-Tools-and-Distribution/Lake/),
including `lake query +Module:c` and the environment provided by `lake env`.
