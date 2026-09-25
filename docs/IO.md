# Lean IO in Lasm

For executable applications, use ordinary Lean APIs: `main`, `IO.FS`, console
streams and `Std.Http.Server`. Application source needs no `Lasm.IO` imports.
The managed CLI builds the application ahead of time for Node, Deno or Bun:

```sh
node bin/lasm.mjs examples/lean-server/Main.lean --target node
```

| Application | Interface | Backend |
| --- | --- | --- |
| A managed Lean executable | Ordinary `main`; `--target node\|deno\|bun` | Full Lean runtime with guest pthreads and private host adapters |
| A callable Lean library using the earlier compiler | `lasm.json` exports; standard Node IO is available to IO exports | Asyncify with cooperative tasks |
| Existing explicit-capability examples | `Lasm.readBytes`, `writeBytes`, `fetchBytes` | Asyncify or optional JSPI |
| Browser/Worker experiments | Explicit storage/fetch adapters | Legacy interface, Asyncify |

Select Lean with the ordinary `lean-toolchain` file. The current acceptance
target is Lean 4.34.1; that is distinct from the package's validated default and
the earlier callable backend's Lean 4.32.0 evidence. See the
[application pipeline](APPLICATION_PIPELINE.md) for exact versions and tested
platforms. Compatibility launchers such as `lasm-node.js` use this managed CLI.

The standard host adapters have ordinary process-level OS access. The older
capability-limited filesystem/fetch adapter remains a separate compatibility
path; its policies and tests are in [LEGACY_IO.md](LEGACY_IO.md). Browser work
is deferred. No new public Lean API was introduced for ordinary IO.

Text validation, higher-level file operations, HTTP parsing and HTTP dispatch
remain Lean library code. Private adapters implement the underlying filesystem,
socket, process, timer and other host operations. Error conversion preserves
Lean's structured variants, messages, OS codes and paths in the tested cases.

File handles use the host C library through a pinned, bundled Node-API adapter.
This supplies buffered file positions, `fflush`, and OS file locks.
Child-process pipes use the same handle implementation. Deployment includes
the required host support; it must not depend on source files or build tools.

Managed executables use Lean's real task scheduler and guest pthreads. The
JavaScript host can process asynchronous IO while a guest thread waits. The
earlier callable backend still schedules tasks cooperatively and limits each
instance to one active external asynchronous call. Its Asyncify and disposal
constraints should not be confused with the executable backend.

Fresh Lean 4.34.1 [filesystem/console comparisons](evidence/lean-4.34.1-installed-io-2026-09-25.json)
and [the ordinary HTTP server's Vitest checks](evidence/lean-4.34.1-installed-http-three-engines-2026-09-25.json)
pass in all three stock engines on Linux x64. These do not establish complete
`IO.FS`, `Std.Http`, `Std.Async`, or cross-platform compatibility. Native
acceptance on the other five OS/architecture combinations remains unfinished.
See [the current limitations](../IO_LIMITATIONS.md) and
[the API audit](compatibility/API_SURFACE_4_34.md). The earlier callable runtime
is described in [RUNTIME.md](RUNTIME.md).
