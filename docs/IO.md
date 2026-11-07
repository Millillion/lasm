# Lean IO in Lasm

For executable applications, use ordinary Lean APIs: `main`, `IO.FS`, console
streams and `Std.Http.Server`. Application source needs no `Lasm.IO` imports.
The managed CLI builds the application ahead of time, for Node by default:

```sh
node bin/lasm.mjs examples/lean-server/Main.lean
```

Select Lean with the ordinary `lean-toolchain` file. Lasm currently supports
**Lean 4.35.0** (the only entry in [`src/toolchains.json`](../src/toolchains.json));
unsupported pins fail without modifying the project. See the
[application pipeline](APPLICATION_PIPELINE.md) and
[Node acceptance](NODE_ACCEPTANCE.md) for tested platforms.

## Backends

Every target starts from the same Node build: the program's compiled objects
are relinked against one of two Lean runtimes.

| Target | Runtime | IO available | Guide |
| --- | --- | --- | --- |
| Node (default) | Full Lean runtime: wasm64 with 64-bit memory (`-sMEMORY64=1`, 8 GiB maximum), Lean's real task scheduler on guest pthreads, private host adapters | Files, console, processes, sockets, DNS, signals, timers, environment | This page, [NODE_SUPPORT.md](NODE_SUPPORT.md) |
| Edge isolates, Bun, Deno (`--target workers`, `bun`, `deno`, …) | Edge runtime: single-threaded cooperative Lean runtime, wasm64 code lowered to 32-bit memory, pure-JS host on web-standard APIs | Console, environment bindings, clocks, random bytes, `Async`, timers; a read-only VFS for time zones; no file system, processes or sockets (use `fetch` through `Lasm.JS`) | [EDGE.md](EDGE.md), [BUN_DENO.md](BUN_DENO.md) |
| Browser (`--target browser`) | The edge runtime, as an ES-module loader and Wasm file | As on the edge, plus the web platform through `Lasm.Web` and `Lasm.UI` | [BROWSER.md](BROWSER.md), [UI.md](UI.md) |
| WASI, Fastly (`--target wasi`, `fastly`, `wasi-http`) | The edge runtime with a C host for WASI preview 1 (or the component model), wasm64 code lowered to 32-bit memory | `IO.FS` inside preopened directories, console, environment, clocks; no sockets, processes or signals in preview 1; `Lasm.JS` fails with a clear message | [WASI.md](WASI.md) |

On the edge, Bun/Deno and browser targets, blocking waits (`Task.get` on
unfinished work, `IO.sleep`, `Async.block`) suspend with JSPI where the engine
has it; engines without JSPI use an Asyncify link (Supabase) or, in the browser
by default, stop the instance with a clear message. The Node build never needs
either.

## The Node host

The standard host adapters have ordinary process-level OS access. No new
public Lean API was introduced for ordinary IO.

Text validation, higher-level file operations, HTTP parsing and HTTP dispatch
remain Lean library code. Private adapters implement the underlying filesystem,
socket, process, timer and other host operations. Error conversion preserves
Lean's structured variants, messages, OS codes and paths in the tested cases.

File handles use the host C library through a pinned, bundled foreign-function
adapter (koffi). This supplies buffered file positions, `fflush`, and OS file
locks. Child-process pipes use the same handle implementation. Deployment
includes the required host support; it must not depend on source files or
build tools.

Managed executables use Lean's real task scheduler and guest pthreads. The
JavaScript host can process asynchronous IO while a guest thread waits.

The tests do not establish complete `IO.FS`, `Std.Http`, `Std.Async`, or
cross-platform compatibility. See [the current limitations](../IO_LIMITATIONS.md)
and [the API audit](compatibility/API_SURFACE_4_34.md) (recorded for Lean 4.34).
