# Node, Deno, and Bun

The source launchers run ordinary Lean entry points in the selected JavaScript
engine. `node-shim.js` has been renamed to `lasm-node.js`.

```sh
node lasm-node.js Main.lean argument1
deno run --allow-all lasm-deno.js Main.lean argument1
bun lasm-bun.js Main.lean argument1
```

Compilation currently requires the complete official Lean 4.32.0 toolchain.
The release package includes the Wasm libraries and optimizer; a source checkout
also needs the maintainer setup described in the README. Each engine runs the
JavaScript compiler helpers itself. The current source compilation stage invokes
the installed native Lean compiler. The compiled application's Lean code runs
inside the selected JavaScript engine as WebAssembly.

Deno needs filesystem, subprocess, network, environment, and FFI permissions for
the complete runner; `--allow-all` supplies them. The runtime uses bundled Koffi
Node-API adapters for host C file semantics. These commands grant ordinary local
application access and are not an untrusted-code sandbox.

After building, the same generated directory runs in all three engines:

```sh
node dist/main.mjs argument1
deno run --allow-all dist/main.mjs argument1
bun dist/main.mjs argument1
```

## Verification on Linux x64

On 2026-09-18, Node 24.13.1, Deno 2.9.7, and Bun 1.4.2 passed all six integration
cases in `npm run test:engines`. Each engine exercised source compilation, cached
execution, Unicode and empty arguments, filesystem operations, tasks, exit codes,
ordinary IO errors, concurrent HTTP persistence, binary bodies, streaming, and
graceful shutdown. `IO.appPath` was checked against the actual selected engine.
Separate source-launcher checks also passed with each engine running the portable
JavaScript optimizer. The six-case integration run used the native optimizer
override to reduce maintainer test time.

Set `LASM_DENO` and `LASM_BUN` to override the executable paths, and
`LASM_TEST_ENGINES=node,deno,bun` to select engines. Local pinned cached downloads
are used when available; otherwise the executables are found through `PATH`.

These checks establish application behavior for the current runtime slice.
They do not establish complete Lean compiler, kernel, Lake, LSP, or OS API parity.
The full upstream suite is being prepared separately; existing gaps remain in
[IO_LIMITATIONS.md](../IO_LIMITATIONS.md).

One test-runner difference remains under investigation: Deno's `node:test` mock
timer cleanup leaks between two unchanged host unit tests in a combined run.
The later test passes in a fresh Deno process. The combined result is recorded as
a failure, not a runtime conformance pass or a fundamental limitation.

macOS, Windows, and ARM64 results for these launchers have not been obtained.
