# Current IO limitations in Lasm

Snapshot: 2026-09-18, Lasm `0.1.0-experimental.2`, Lean `4.32.0`.
These are limitations of Lean programs running through Lasm, not limitations of
Lean itself. Every checkbox is intentionally empty. This inventory covers known
implementation gaps, adapter policies, and validation gaps; it is not a promise
to remove every restriction. An exhaustive per-declaration compatibility audit
is itself still outstanding.

The working baseline is Lean's real `IO` type, ordinary sequencing and error
handling, mutable `IO.Ref` values, and three custom operations:
`Lasm.readBytes`, `Lasm.writeBytes`, and `Lasm.fetchBytes`. Those operations can
suspend and resume through Asyncify or JSPI, including through closures and
consecutive IO calls. Pure or memory-only standard-library helpers may already
work; missing host integration does not mean every function returning `IO` fails.

## Standard Lean API compatibility

- [ ] Standard filesystem entry points such as `IO.FS.readFile`, `readBinFile`,
  `writeFile`, and `writeBinFile` are not connected to Lasm's host capabilities.
  Applications currently use the custom `Lasm.IO` wrappers.
- [ ] Native file handles and their operations are not implemented: open modes,
  partial reads/writes, append, flush, rewind, truncate, file locking, TTY queries,
  and native-handle lifetime management.
- [ ] Directory and metadata APIs are missing: listing/walking directories,
  creating/removing directories and files, rename, hard links, temporary files,
  canonical paths, metadata, symlink metadata, and access-right changes.
- [ ] Standard console and stream integration is missing, including
  `IO.getStdin`, `getStdout`, `getStderr`, their replacement/scoping operations,
  and ordinary `IO.print`/`println`/`eprintln`. The internal panic writer is not
  a general implementation of those APIs.
- [ ] Standard environment and process-information APIs are not bridged:
  environment variables, application path, current directory and its mutation,
  process IDs, and thread IDs. The Node loader supplies empty WASI arguments and
  environment and no filesystem preopens.
- [ ] Standard time and entropy APIs are not provided as a tested host-backed
  surface: monotonic clock queries, asynchronous sleep/timers, and
  `IO.getRandomBytes`. Internal WASI clock support is not equivalent to these APIs.
- [ ] `IO.Process` child-process operations are missing: spawning, redirected
  streams, waiting, exit status, process IDs, termination, and output collection.
- [ ] Lean `IO.Process.exit` and `forceExit` have no public compatibility policy.
  Internal WASI guest exit is contained by the loader; it does not terminate Node.
- [ ] Full coverage of Lean's profiling, heartbeat-accounting, and runtime-control
  helpers has not been established. The runtime includes a selected subset of
  upstream implementations, not the whole native IO runtime.
- [ ] There is no declaration-by-declaration support matrix for the pinned Lean
  IO surface. Unsupported native symbols normally fail at linking; there is no
  complete diagnostic mapping from each missing symbol to a supported alternative.
- [ ] Runtime native externs and libraries need explicit Wasm implementations or
  host adapters. Host-native Lake plugins running during compilation do not imply
  that their runtime IO/FFI code works inside the generated Wasm.

## Custom host interface and data boundary

- [ ] The public host interface has only three fixed operations. Applications can
  replace their implementations, but there is no supported registry for additional
  named operations such as database, crypto, timer, or other npm-library calls.
- [ ] The request protocol carries an operation number, a string key, and bytes;
  it has no general typed request/response schema or resource-handle protocol.
- [ ] Exported IO signatures are limited to the supported primitive boundary
  types: `Nat`, `Int`, `String`, `ByteArray`, `UInt32`, `Bool`, and `Unit`.
  Records, arrays, `Option`, custom error types, callbacks, and native resources
  do not receive automatic JavaScript bindings. This restriction is at the export
  boundary; richer Lean values can be used internally.
- [ ] Requests and responses are buffered and copied across the boundary. There
  is no incremental stream, backpressure, or zero-copy transfer interface.
- [ ] The bridge has a fixed 16 MiB per-key/body/response transfer ceiling; host
  adapters can impose smaller byte limits. Larger operations require a different
  protocol rather than simply increasing the host's `maxBytes` setting.
- [ ] Host failures become generic Lean `IO.userError` values, losing structured
  OS error kinds, codes, paths, HTTP metadata, and original JavaScript stacks.
  The host error message is truncated to 8,192 JavaScript string code units.
- [ ] Unhandled Lean IO errors reach JavaScript as `LeanIOError` messages without
  a structured representation of Lean's original `IO.Error` variant.

## Built-in Node filesystem adapter

- [ ] Access is limited to one configured existing directory. There is no mount
  table, multiple directory capabilities, or API for creating the configured root.
  Omitting the directory intentionally disables filesystem access.
- [ ] Reads require regular files; paths outside the root and NUL paths are
  rejected, and writes to existing terminal symlinks are rejected. There is no
  device, pipe, or general native filesystem access through this adapter.
- [ ] Path checks do not provide isolation against another process racing to
  replace directories or files. The adapter assumes trusted application storage.
- [ ] Writes truncate/replace their destination directly. They do not provide
  atomic replacement, rollback, transactions, or a crash-durability guarantee.
  Cancellation or failure can leave partial data.
- [ ] There is no general coordination for multiple instances/processes accessing
  the same files. The Express example's queue, directory lock, and temporary-file
  replacement are application-specific, not default filesystem behavior.

## Built-in HTTP and networking adapters

- [ ] Outbound HTTP is GET-only. Lean cannot specify a method, request headers,
  request body, or per-request authentication/credential options through this API.
- [ ] Successful HTTP calls return only response bytes, without status, headers,
  or other response metadata. Non-2xx responses become errors rather than
  inspectable response objects.
- [ ] Redirects are rejected and only HTTP/HTTPS URLs are accepted. There is no
  Lean-level redirect policy or alternative URL-scheme support.
- [ ] Response bodies are collected in memory within the byte limit. Reading the
  underlying response in chunks does not expose streaming to Lean; uploads,
  downloads, and bidirectional streams need additional APIs.
- [ ] HTTP timeout is configured on the host adapter, with a ten-second default.
  There are no per-call timeout, connection-pool, proxy, or TLS configuration
  options exposed to Lean. A supplied JavaScript fetch implementation can impose
  its own policy, and omitting it intentionally disables HTTP.
- [ ] Raw TCP/UDP, DNS operations, socket listeners, TLS configuration, and
  WebSockets are not exposed. Host-provided HTTPS fetch already handles TLS;
  that does not provide Lean with a general TLS/socket API.
- [ ] Lean's `Std.Async` networking and `Std.Http` transport/server facilities
  have not been ported or validated as a supported surface. The Express example
  receives requests in JavaScript and calls Lean endpoint logic.

## Async execution, scheduling, and cancellation

- [ ] Each instance allows only one active async export call. Overlapping calls
  and host callbacks that reenter the busy instance are rejected; generic runtime
  queueing and instance pooling are not provided.
- [ ] Standard Lean task scheduling and promises are unsupported, including
  `IO.asTask`, task waits, task state/cancellation, and `IO.Promise`. Suspending a
  custom host call does not implement the native task scheduler.
- [ ] Lean multithreading, shared-heap coordination, and native synchronization
  facilities such as mutexes, condition variables, and concurrent channels have
  not been ported. Independent Wasm instances do not share their Lean `IO.Ref`s.
- [ ] `Std.Async` combinators, selectors, task races, concurrent composition,
  timers, processes, and signals are not supported as a complete library.
  Its task/promise and libuv integration needs a separate implementation strategy.
- [ ] CPU-bound Lean execution runs on the calling JavaScript thread and cannot
  be preempted by `AbortSignal`. There is no general execution deadline, worker
  isolation, or CPU cancellation mechanism in the generated loader.
- [ ] Cancellation is cooperative at host-operation boundaries and can be caught
  as a Lean IO error. A cancelled call is not guaranteed to terminate immediately
  if Lean catches the error and continues computing.
- [ ] Cancelling the guest's wait does not guarantee the underlying custom host
  operation has stopped or settled. Hosts must honor signals and manage remaining
  work; the generic bridge has no host-operation drain protocol. The Express
  example implements its own drain policy.
- [ ] Cancellation cannot undo completed external effects, such as a committed
  file replacement or accepted storage write. Transactional behavior requires a
  separate storage/application contract.
- [ ] Asyncify and JSPI require separate artifacts. There is no automatic backend
  fallback; JSPI requires engine support and was tested with Node 24.13.1's
  experimental flag. Asyncify is the default and works without that flag.

## Initialization, lifetime, and runtime limits

- [ ] Host IO during module initialization is unsupported and fails instance
  creation. This does not prohibit the supported in-memory `IO.Ref` initialization.
- [ ] Busy instances cannot be disposed. Callers must cancel as appropriate,
  await the active call, and handle remaining host work before releasing resources.
- [ ] Guest traps, panics, and failed result conversions discard the entire
  instance. Only ordinary Lean IO errors are recoverable through this interface.
- [ ] Native interrupt/heartbeat exception paths have been changed to fatal Wasm
  traps. They do not provide native Lean's exception-based recovery semantics.
- [ ] Memory/stack limits are fixed by the current build: maximum linear memory
  is 256 MiB, the linear stack is 1 MiB, and Asyncify has a separate 1 MiB unwind
  stack. There is no public configuration API or comprehensive exhaustion testing.
- [ ] `dispose()` drops guest references but does not force JavaScript garbage
  collection or provide a general host-resource finalizer contract. Persistent
  file/socket handles would need explicit ownership and cleanup rules.
- [ ] There is no general Lean `main` runner with argument, environment, standard
  stream, and exit-code conventions. The current interface is exported functions.

## Browser/Workers differences and validation gaps

- [ ] Browser IndexedDB and Worker KV expose byte storage keys, not a POSIX
  filesystem. File handles, directory metadata, permissions, and locking do not
  automatically have equivalent behavior on those hosts.
- [ ] Browser HTTP remains subject to browser permissions and CORS. Native process
  creation, unrestricted local files, and native socket/OS operations cannot be
  promised uniformly across Node, browsers, and cloud Workers.
- [ ] Worker KV has platform-specific consistency and cancellation behavior; it
  is not a transactional database. Separate guest instances do not serialize
  access to shared external storage.
- [ ] The portable WASI adapter has empty stdin, requires explicit stdout/stderr
  callbacks, and does not supply process/thread CPU clocks. Its limited libc
  compatibility does not implement the complete Lean standard IO APIs.
- [ ] Native IO/package validation beyond Linux x64 is still pending. Existing
  browser/cloud evidence covers Chrome and local workerd, not every browser or
  a live cloud deployment; see [NEXT_STEPS.md](NEXT_STEPS.md).
- [ ] Permission-denied and transport-failure cases include injected failures;
  actual OS permission models, filesystem races, and every native IO error mapping
  have not been validated.
- [ ] Current resource tests demonstrate stability for bounded workloads, not a
  general leak proof or long-duration production reliability. Streaming, native
  tasks, new host resources, exhaustion, and broader failure cases need tests.

## Scope of future standard-IO support

Broad source-compatible standard IO on Node is a plausible engineering goal:
implement the relevant Lean runtime primitives using explicit Node capabilities,
and test their results and error semantics against native Lean. Higher-level Lean
wrappers can then use those primitives without requiring application code to call
`Lasm.readBytes` directly. This is a proposed approach, not completed support.

Full task/thread compatibility additionally requires a scheduler, ownership and
synchronization design. Asyncify/JSPI alone only solve suspension across the host
boundary. Exact native behavior for every IO API on every host is not an established
or uniform guarantee; browser/Worker capabilities and native OS differences must
be reflected in the eventual support contract.

The pinned Lean declarations include native handles, processes, task operations,
and runtime hooks; see [Lean 4.32.0 IO source](https://github.com/leanprover/lean4/blob/v4.32.0/src/Init/System/IO.lean).
The scheduler semantics are described in the
[Lean tasks and threads reference](https://lean-lang.org/doc/reference/latest/IO/Tasks-and-Threads/).

Implementation and evidence used for this inventory: [Lean wrappers](lean/Lasm/IO.lean),
[host bridge](runtime/host.cpp), [JavaScript runtime](src/runtime.mjs),
[Node adapter](src/host.mjs), [portable adapters](src/web-host.mjs),
[runtime construction](scripts/build-runtime.mjs), [IO tests](test/io.test.mjs),
[IO behavior](docs/IO.md), [runtime scope](docs/RUNTIME.md), and
[browser/Workers scope](docs/HOSTS.md).
