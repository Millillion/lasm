# Current IO limitations in Lasm

Snapshot: 2026-09-18, `0.1.0-experimental.3`, Lean `4.32.0`.
Every checkbox below is intentionally empty and describes remaining work, a
known difference, or a validation gap. These are Lasm limitations, not Lean
limitations. This list does not promise that every restriction will be removed.

The implemented Node baseline now includes ordinary console and filesystem APIs,
structured errors, file-handle lifetime, tasks/promises, cooperative synchronization,
timers, and `Std.Http.Server`. An ordinary Lean `main` can run in Node with no
Lasm imports or custom annotations. See [Node applications](docs/NODE_APPS.md)
and [the full Lean server](examples/lean-server/README.md).

## Standard API coverage

- [ ] Complete a declaration-by-declaration compatibility audit; the implemented
  primitives and tested higher-level APIs are not all of Lean IO.
- [ ] Native file locking is unsupported and returns an explicit unsupported
  operation error, including `tryLock`; it never pretends to acquire a lock.
- [ ] Validate devices, pipes, FIFOs, large files, permission combinations, symlink
  races, and every open/seek/metadata edge case across OSs. Current tests focus on
  regular files and common directory operations.
- [ ] Refine exact error mappings and platform-specific errno behavior beyond
  tested missing-file, exclusive-create, invalid-path, and UTF-8 cases.
- [ ] Flush currently uses `fsync` for files, which is stronger and potentially
  slower than native Lean's buffered-stream flush.
- [ ] Standard stream replacement is instance-wide, not native thread-local;
  overlapping `IO.withStdout`/`withStderr` scopes in different tasks can interfere.
- [ ] Expand stdin, terminal, redirected-console, and interactive backpressure tests.
- [ ] Child processes, process/thread IDs, native signals, process pipes, and
  general `IO.Process` operations beyond current-directory/exit helpers are missing.
- [ ] `IO.Process.setCurrentDir` changes only this instance's virtual cwd;
  `IO.appPath` reports the containing Node executable. Audit further native context
  differences before claiming complete process compatibility.
- [ ] Windows named time zones other than UTC return an explicit unsupported
  error. Date/time behavior beyond tested UTC HTTP dates needs broader OS coverage.
- [ ] Native FFI dependencies still need Wasm implementations or internal host
  adapters. Build-time Lake plugins do not supply their runtime native externs.
- [ ] Link errors need a complete mapping from missing externs to affected Lean APIs.

## HTTP and networking

- [ ] TLS, DNS, UDP, WebSockets, and a full outbound HTTP client are outside this
  console/filesystem/HTTP-server milestone. There is no `IO.HTTP` API to port.
- [ ] Node TCP bind is performed when `listen` runs; bind-time errors and bound
  socket address queries therefore differ before listening.
- [ ] Validate IPv6, keepalive details, transport half-close/error behavior,
  connection floods, slow consumers, and timer-boundary races more extensively.
- [ ] The server example is a single-process, loopback demo with an unauthenticated
  shutdown route. Authentication, TLS termination, production deployment, and
  shared storage coordination remain application work.
- [ ] File replacement does not imply transactions, rollback, interprocess
  locking, or crash durability. Separate processes need their own coordination.

## Scheduling and cancellation

- [ ] Lean tasks run cooperatively on one JavaScript thread. There are no native
  worker threads, CPU parallelism, native priority scheduling, or shared heaps.
- [ ] Validate all task-drop/cancellation propagation behavior against the native
  scheduler, beyond explicit cooperative cancellation and tested task/promise
  lifetimes. Do not infer complete scheduling equivalence from server tests.
- [ ] Complete `Std.Async` coverage, including unported process and signal APIs.
- [ ] Standard Node tasks currently require Asyncify. JSPI remains available for
  the legacy custom-host bridge only, with a separate artifact and engine support.
- [ ] `Std.Async` timer durations currently must fit Node's 31-bit millisecond
  timeout range. Ordinary `IO.sleep` supports its full UInt32 range in chunks.
- [ ] CPU-bound Lean code cannot be interrupted by an AbortSignal or a timer;
  isolation in a Worker/process is needed for enforceable execution deadlines.
- [ ] Aborting a standard-IO export from JavaScript discards the whole instance;
  it is not the same as Lean's cooperative task cancellation. Completed or already
  issued host effects are not rolled back.
- [ ] Each instance permits one active external async call; callbacks cannot
  reenter it. Lean's internal concurrent tasks/HTTP connections are supported.
- [ ] Busy instances require their active call to settle before disposal; use a
  normal shutdown path or abort. Long-lived background tasks need application
  lifecycle management.

## Runtime and data boundary

- [ ] Unhandled Lean IO errors reach JS as messages, without a structured public
  JavaScript representation of the original Lean error constructor.
- [ ] JS-callable exports support primitive boundary types only: `Nat`, `Int`,
  `String`, `ByteArray`, `UInt32`, `Bool`, `Unit`. Lean-internal records, arrays,
  callbacks and resources work without automatic JavaScript bindings.
- [ ] Guest/host byte transfers copy memory. There is no zero-copy or shared-memory
  IO contract, and the JS export/legacy bridge has a 16 MiB transfer ceiling.
- [ ] Memory is capped at 256 MiB; each async invocation has fixed 256 KiB C and
  Asyncify stacks. Stack queries track the active fiber, but unchecked C recursion
  is not comprehensively protected or tested for every exhaustion path.
- [ ] Traps, panics, native heartbeat/interrupt traps, and failed ABI conversion
  poison the instance rather than providing native recovery semantics.
- [ ] Complete source-level stack traces and mapped diagnostics are missing;
  standalone build errors may mention the generated cache source path.
- [ ] Warm main caches use source/config/compiler fingerprints, not an integrity
  audit of every installed Lean binary or generated output on every invocation.
  Force a rebuild after manually modifying toolchain installations/artifacts.
- [ ] Legacy custom-host IO inside module initializers is unsupported. Standard
  Node IO initializers need broader conformance testing.

## Legacy custom adapters and other hosts

- [ ] Existing `Lasm.IO` byte/fetch wrappers remain for compatibility. They have
  three fixed operations rather than a general typed JS interop mechanism.
- [ ] Their filesystem adapter is confined to one existing directory, has stricter
  file/symlink policies, and is not a race-proof security sandbox.
- [ ] Their outbound HTTP adapter is GET-only, rejects redirects/non-2xx responses,
  returns bytes without metadata, buffers bounded bodies, and has host-configured
  timeouts. Those restrictions are separate from standard HTTP server support.
- [ ] Legacy host errors use generic user errors and truncated messages; custom
  hosts must implement their own cancellation and external-operation cleanup.
- [ ] Standard Node IO is not available in browsers or Workers. Their portable
  WASI has empty stdin and explicit output callbacks; storage keys are not a
  POSIX filesystem, and CORS/platform limitations still apply.
- [ ] Browser IndexedDB and Worker KV do not offer identical consistency,
  transactions, or native OS semantics.

## Validation still outstanding

- [ ] Repeated new HTTP connections retain a growing chain of accept-loop task
  continuations until server shutdown. Sockets/timers are released and shutdown
  clears the tasks, but this workload does not have a constant task-heap bound.
  Audit native Lean behavior and shorten these chains before claiming long-running
  server memory stability. Keep-alive request workloads have separate plateau tests.
- [ ] Run the prepared package/ordinary-main/HTTP tests on native Linux ARM64,
  macOS Intel and Apple Silicon, and Windows x64 and ARM64.
- [ ] Broaden browser engines and live cloud validation beyond prior Chrome and
  local workerd experiments; no live deployment is authorized here.
- [ ] Add longer endurance, randomized concurrency, fault injection, memory/stack
  exhaustion, and wider library-compatibility tests. Bounded workload stability
  is not a general leak proof or production reliability claim.

Implementation: [IO runtime](runtime/node-io.cpp), [async runtime](runtime/node-async.cpp),
[tasks](runtime/tasks.inc.cpp), [Node primitives](src/node-host.mjs),
[network/timers](src/node-network.mjs), [scheduler](src/scheduler.mjs).
