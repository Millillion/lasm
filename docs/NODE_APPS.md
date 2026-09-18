# Ordinary Lean applications in Node

Lasm's Node runner supports ordinary Lean entry points and standard console,
filesystem, and HTTP server APIs. Application source does not import Lasm or
use custom bindings. This is an experimental, version-pinned runtime port, not
coverage of every Lean OS API.

## Run a file or Lake project

After installing the local compiler tarball into a Node project:

```sh
npx lasm run Main.lean
npx lasm run Main.lean -- argument1 "argument two"
npx lasm build Main.lean dist
node dist/main.mjs argument1 "argument two"
```

In this repository, the same runner is `node node-shim.js Main.lean`.
For a complete server, run:

```sh
node node-shim.js examples/lean-server/Main.lean
```

A standalone file can be as small as:

```lean
def main (args : List String) : IO Unit := do
  IO.println s!"Hello from Lean: {args}"
  IO.FS.writeFile "greeting.txt" "Hello, λ!\n"
  IO.println (← IO.FS.readFile "greeting.txt")
```

Supported entry types are `IO Unit`, `IO UInt32`, `List String → IO Unit`, and
`List String → IO UInt32`. In Lean's `module` mode, make `main` public, as for a
native executable. `Unit` exits successfully; `UInt32` sets Node's exit status
(subject to the host OS's exit-code range). Unhandled Lean IO errors print a
message and exit 1. `IO.Process.exit`/`forceExit` end the guest and set the runner's
status; an embedded guest cannot terminate its containing Node process.

The runner discovers Lake automatically, including custom source directories and
path/Git dependencies. Lake still owns dependencies, options, and compile-time
plugins. Standalone files need no Lake configuration or `lasm.json`. The compiler
makes its private entry adapter under `.lake/lasm`; it does not rewrite your source.
A missing native runtime dependency fails linking instead of silently succeeding.

The first run compiles and links, which can take a minute or more from this source
checkout. Unchanged runs reuse the built output. Changes to Lean sources, local
path dependencies, Lake files/manifests, the toolchain pin, and Lasm implementation
invalidate the cache. Use `lasm run --rebuild Main.lean` to force a build, or
`--verbose` to show compiler progress. A full installed Lean 4.32.0 distribution
and Node 24+ are needed to build. No Lean, Lake, C compiler, or npm dependencies
are needed to run a copied `dist` directory with Node.

## Source compatibility and implementation

`IO.FS.readFile` remains Lean's standard implementation. It calls lower-level
standard file primitives. Lasm provides their ordinary `lean_io_*` extern symbols
in its Wasm runtime, forwarding the actual OS work to private Node imports.
Node errors are reconstructed as Lean `IO.Error` constructors. Lean keeps its
own control flow, object representation, reference counting, and error handling.

`Std.Http.Server` is compiled from the unmodified pinned standard library. Its
HTTP parser, protocol state machine, streaming, routing callbacks, and async
combinators run in Wasm. Standard TCP primitives use Node `net`; file primitives
use Node `fs` and the host C library through bundled Koffi bindings for native
buffering, line reads, file locks, and process pipes. Endpoint handlers run in Lean.

Asyncify suspends a Lean invocation on a host Promise. Every suspended task has
its own C and Asyncify stacks. A cooperative scheduler runs one Wasm invocation
at a time and returns control to Node's event loop between batches. This allows
many connections and file operations to wait concurrently. It does not provide
parallel CPU execution or preempt a long computation.

## Current support

| Surface | Implemented and exercised |
| --- | --- |
| Console | `IO.print`/`println`/`eprintln`, stdin/stdout/stderr streams, buffer redirection |
| Files | Text/binary files, modes, partial reads, append, flush, rewind, truncate, shared/exclusive locks, handle lifetime |
| Paths | Metadata, directory creation/listing/removal, rename, hard links, temporary files/directories, canonical paths |
| Tasks | Promises, spawn/map/bind/waits, cooperative explicit cancellation, mutexes, condition variables |
| Async | Sleep/timers and the selectors/channels/cancellation used by `Std.Http.Server` |
| HTTP server | HTTP/1.1, concurrent requests, binary/chunked bodies, response streams, limits, disconnects, graceful shutdown |
| Process context | Arguments, environment lookup, instance working directory, exit status, clocks and entropy |
| Child processes | Spawn, output, wait/poll, PID, kill, environment overrides, redirected and inherited pipes |

See [the example](../examples/lean-server/README.md) and the current unchecked
[limitations](../IO_LIMITATIONS.md). The implementation is tested on Linux x64.
The six native OS/architecture CI targets are prepared, but have not run.
The [upstream audit](UPSTREAM_RESULTS.md) separates observed matches from missing
APIs, adaptation failures, resource limits, and behavior differences.

Node applications have ordinary process-level filesystem/network access. Relative
paths resolve against the supplied working directory; `IO.Process.setCurrentDir`
changes this instance's directory. It does not change other Node code's cwd.
`System.Platform` reports Node's operating system with Wasm's 32-bit pointer
width, so ordinary Lean path operations follow the host's path conventions.
The older capability-limited `Lasm.IO` adapter is separate and remains available
for existing library/browser/Worker experiments.

## Embedding and lifecycle

Built executables also expose `index.mjs`:

```js
import createModule from './dist/index.mjs';
const controller = new AbortController();
const app = await createModule({ args: ['3000', './data'], cwd: process.cwd() });
try {
  const code = await app.runMain({ signal: controller.signal });
  process.exitCode = code;
} finally {
  app.dispose();
}
```

Optional `stdio.stdout`/`stderr` callbacks receive byte arrays and may return
Promises for standard Lean output. Fatal libc panic diagnostics use synchronous
WASI callbacks. One external call runs per instance; Lean's internal tasks and
connections run concurrently within it. `stats()` exposes memory, pending fibers,
waiting tasks, queue length, and host resource count for diagnostics.

Prefer the application's normal shutdown protocol. An external JS abort of a
standard-IO call discards the entire instance and closes its files/listeners;
it is distinct from Lean's cooperative task/cancellation APIs. Already-issued
host side effects are not rolled back. Dispose only after the active call settles.
CPU-bound code still needs a Worker/process for an enforceable external deadline.
