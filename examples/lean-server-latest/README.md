# Ordinary Lean HTTP server on the current application runtime

This Lake project uses Lean 4.34, `Std.Http`, `Std.Async`, `Std.Mutex`, JSON and
ordinary `IO.FS`. It implements persistent todos, revision checks, validation,
binary echo, streamed events and graceful shutdown. No Lasm Lean imports or
annotations are required.

The managed primary CLI is still being integrated. Maintainers currently build
this example with `scripts/full-lean/build-aot-server.mjs` inside the resource
guard and the base-pages launcher. Deploy the resulting complete
`application/deployed/` directory, and run its `main.mjs` with stock Node. Only
Node is needed to run that output; the build harness still uses maintainer tool paths.

The parallel Vitest suite retains the existing server example's twenty native
and Wasm HTTP behavior checks. `LASM_AOT_HTTP_MANIFEST` points to the generated
`application/build-result.json`; `LASM_AOT_HTTP_ENGINE` names the stock Node executable.
Run one suite at a time under the resource guard. The original cooperative
runtime's in-process resource-accounting tests remain separate; this suite does
not claim that additional endurance coverage.

This parallel harness allows 90 seconds for cold startup and 180 seconds for
the restart test. Startup durations are recorded; all
request deadlines and HTTP behavior assertions are unchanged. The original
example suite has not been edited.

This is a local demonstration server: its shutdown endpoint is deliberately
unauthenticated. Application authentication and deployment policy are outside
this example.
