# Lean IO in Lasm

For Node applications, use ordinary Lean APIs. Console, filesystem, and
`Std.Http.Server` work through Lasm's internal Node runtime; application source
needs no `Lasm.IO` imports. Start with [ordinary Node applications](NODE_APPS.md)
and the [complete Lean server](../examples/lean-server/README.md).

```sh
node lasm-node.js examples/lean-server/Main.lean
```

| Application | Interface | Backend |
| --- | --- | --- |
| A Lean executable in Node | Ordinary `main`, `IO.FS`, console, `Std.Http.Server` | Asyncify, cooperative tasks |
| A Lean library called from JS | `lasm.json` exports; standard Node IO is available to IO exports | Asyncify |
| Existing explicit-capability examples | `Lasm.readBytes`, `writeBytes`, `fetchBytes` | Asyncify or optional JSPI |
| Browser/Worker experiments | Explicit storage/fetch adapters | Legacy interface, Asyncify |

The standard Node runtime has ordinary process-level OS access. The older
capability-limited filesystem/fetch adapter remains a separate compatibility
path; its policies and tests are in [LEGACY_IO.md](LEGACY_IO.md). New Node examples
use standard Lean source. No new public Lean API was introduced for this port.

Standard filesystem errors preserve Lean's structured error variants, message,
OS code, and relevant paths. Text validation and higher-level file operations
remain Lean standard-library code. Handles own host resources by reference
counting, and instance teardown closes remaining resources.

File handles use the host C library through a pinned, bundled Node-API adapter.
This preserves buffered file positions, `fflush`, and real OS file locks. The
package includes prebuilt adapters for Linux, macOS and Windows on x64 and ARM64;
users do not compile native code at installation. Child-process pipes use the
same handle implementation. Ordinary process spawning, output, wait, polling,
PID and termination operations are available.

Node tasks suspend while waiting on asynchronous host work. Scheduling is
cooperative, with one Wasm invocation executing at a time. Standard HTTP parsing
and streaming run in Lean; Node supplies TCP sockets. Filesystem, promise,
mutex, condition-variable, sleep, and timer conformance is checked against native
Lean. Vitest tests the same full server natively and under Node/Wasm.

Coverage is deliberately version-pinned to Lean 4.32.0. This does not implement
all Lean IO, native threading, TLS, DNS, UDP, or all of
`Std.Async`. See the current [unchecked limitations](../IO_LIMITATIONS.md) and
[runtime internals](RUNTIME.md). Only native Linux x64 has been validated so far.
