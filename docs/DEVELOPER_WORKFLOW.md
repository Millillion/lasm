# Node applications with normal Lake projects

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

For Lean IO, declare the bundled Lean API as a Lake path dependency:

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
