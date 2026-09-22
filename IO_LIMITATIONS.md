# Current IO limitations in Lasm

Snapshot: 2026-09-22 UTC, `0.1.0-experimental.3`, Lean `4.32.0`.
Every checkbox below is intentionally empty and describes remaining work, a
known difference, or a validation gap. These are Lasm limitations, not Lean
limitations. This list does not promise that every restriction will be removed.

The implemented Node baseline now includes ordinary console and filesystem APIs,
structured errors, file-handle lifetime, tasks/promises, cooperative synchronization,
timers, and `Std.Http.Server`. An ordinary Lean `main` can run in Node with no
Lasm imports or custom annotations. See [Node applications](docs/NODE_APPS.md)
and [the full Lean server](examples/lean-server/README.md).
The [upstream audit](docs/UPSTREAM_RESULTS.md) records all 620 selected runtime
candidates, including every failure or unfinished compatibility gate. Lean's full
native compiler/LSP/Lake test suite has not been ported to this Node runtime.
The full-suite effort now has a [parallel upstream CTest harness](scripts/full-lean/README.md)
with all 3,891 registrations and original-source integrity checks. Its complete
native control passed 3,891/3,891 tests with all 7,267 original file hashes
unchanged; see [the full-suite results](docs/FULL_SUITE_RESULTS.md). The full Wasm
compiler and JavaScript conformance runs remain in progress. Application checks now
also pass in [Deno and Bun](docs/JS_ENGINES.md); full-suite conformance in all three
engines remains unverified. There are currently two execution paths: the packaged
application runtime still uses a cooperative Wasm32 scheduler; the experimental
full compiler preserves native 64-bit Lean values and runs Lean's real scheduler
on Wasm pthreads. New DNS, UDP, system, signal, and thread-ID host implementations
do not by themselves establish conformance of either complete path. No remaining implementation gap is being reclassified
as fundamental merely because it needs further work.

Earlier guarded full-runtime subsets passed 11/11 checks in Node and in Bun
with an explicit Linux stack adjustment. Deno passed 11/12, with an intermittent
early-streaming failure. These covered ordinary
filesystem, TCP/UDP, timers, HTTP, and previous stack regressions; they do not
close the full-suite or cross-platform gates. See the
[recorded configurations and results](docs/evidence/guarded-runtime-regressions-2026-09-20.json).
A subsequent profile identified repeated full export-dictionary scans in dynamic
symbol lookup. Removing those scans preserves loader behavior and now passes
three repetitions of the original HTTP regression in each engine, without
changing its timings. The earlier failures remain recorded; broader scheduling,
load, and suite conformance still need validation. See
[the loader repair evidence](docs/evidence/symbol-lookup-2026-09-21.json).

## Standard API coverage

- [ ] Complete a declaration-by-declaration compatibility audit; the implemented
  primitives and tested higher-level APIs are not all of Lean IO. The pinned
  inventory now lists 193 `IO.FS` and 1,938 `Std.Http` declarations. All 20 direct
  `IO.FS` externs have implementations; this is not complete behavioral coverage.
  The [compiled dependency audit](docs/compatibility/API_DEPENDENCIES.md) now
  follows all 2,131 inventory roots through 8,980 IR/declaration nodes. Native Lean
  and the frozen full Node compiler produce identical graphs, including checked
  paths for `readFile`, `createDirAll`, and HTTP serving. The graph identifies 227
  extern declarations using 217 C symbols. Generated types/projections without
  standalone IR, dynamic callbacks, primitive internals, and behavioral coverage
  remain separate audit concerns; graph agreement does not close this checkbox.
- [ ] Validate devices, pipes, FIFOs, large files, permission combinations, symlink
  races, and every open/seek/metadata edge case across OSs. Current tests focus on
  regular files and common directory operations. `Handle.truncate` now preserves
  the native call sequence even when querying the stream position fails; Linux
  regular-file and pipe comparisons match native Lean in all three packaged and
  full engines. See [the truncate evidence](docs/evidence/truncate-errors-2026-09-21.json).
  Line reads now clear EOF after an unterminated final line, preserve partial-read
  errors, and consume the same bytes when an earlier stream error remains set.
  Byte reads also retain native Lean's different EOF/error-check order. Six
  ordinary Lean cases match native in all three packaged and full engines;
  independent C controls and existing filesystem regressions pass too. This is
  Linux x64 evidence, not complete device or platform coverage; see
  [the stream-state comparisons](docs/evidence/getline-state-2026-09-21.json).
- [ ] Refine exact error mappings and platform-specific errno behavior beyond
  tested missing-file, exclusive-create, invalid-path, and UTF-8 cases.
  POSIX `IO.FS.realPath` now calls libc asynchronously and lets Lean decode the
  returned filename bytes. This fixes Bun's symlink/parent traversal and empty
  path behavior, plus malformed-UTF-8 differences in all three engines. Seventeen
  ordinary Lean cases match native Linux in full and packaged runtimes; 24
  unchanged upstream filesystem/module tests and 12 packaged checks pass. Native
  macOS/Windows validation and broader path coverage remain open; see
  [the realPath evidence](docs/evidence/realpath-2026-09-21.json).
  POSIX `IO.Process.setCurrentDir` now uses native errno/message values and
  validates search permission for the packaged instance cwd. Seven ordinary
  Lean cases match native Linux in Node, Deno, and Bun, in both packaged and
  full-compiler paths; see [the directory-error comparison](docs/evidence/cwd-errors-2026-09-21.json).
  POSIX process strings and `setCurrentDir` now use native C-string truncation
  at embedded NULs; `getEnv` returns `none` for NUL-containing names, while
  filesystem primitives retain their explicit rejection. Targeted ordinary
  Lean comparisons match native Linux; see [the NUL comparisons](docs/evidence/process-nul-2026-09-21.json).
  Linux cwd identity now survives directory and ancestor renames/deletion in
  both execution paths. Twelve ordinary Lean controls match native behavior in
  all three engines. Per-instance isolation, pending FIFO opens, cancellation,
  and descriptor cleanup also have passing host checks; see
  [the directory-identity evidence](docs/evidence/cwd-tracking-2026-09-21.json).
  Non-Linux cwd identity, permission-change races, long relative paths, and
  operation without a mounted `/proc` remain open, alongside other string-boundary
  and platform cases.
- [ ] Complete working-directory permission inheritance in every execution
  context. The full compilers now match native Linux for a named cwd whose
  search permission is revoked, including the different behavior of inherited,
  explicit relative, and absolute child directories. Node and Bun also pass a
  deleted-and-revoked host control. A bundled native Linux launcher now also
  fixes that combined Deno case. Supplementary ordinary Lean programs match
  native Linux in all three full compilers for both named and deleted directories
  with revoked search permission. Fresh full-compiler workers also start after
  directory removal: Node preloads its private cwd fallback; Deno uses a private
  factory with a separate filesystem context. The Deno factory requires Linux
  `unshare(CLONE_FS)`; if a sandbox denies it, ordinary workers still work but
  this removed-cwd fallback remains unavailable. Embedded instance directories
  that differ from the host process cwd also need a complete inheritance design.
  These are implementation gaps, not established fundamental limitations. The
  [earlier permission comparisons](docs/evidence/cwd-permissions-2026-09-21.json)
  retain the original Deno failure; later results are recorded in the
  [native launcher and worker evidence](docs/evidence/native-launcher-cwd-2026-09-21.json).
- [ ] Account for the pinned native Lean defect where
  `IO.Process.getCurrentDir` crashes after cwd deletion: its ENOENT decoder
  dereferences a null filename. Lasm returns a structured error safely; the
  separate native crash and three-engine safety checks are recorded in the
  directory-identity evidence. This intentional difference is an upstream bug,
  not a fundamental JavaScript limitation. `IO.currentDir` has a different native
  error and Lasm now preserves that distinction.
- [ ] Expand stdin, terminal, redirected-console, and interactive backpressure tests.
  Ordinary redirected stdout now uses native FILE buffering; stderr remains
  unbuffered. Explicit flushes, normal shutdown, and the implicit stdout flush
  before a child inherits stdin match native Linux in Node, Deno, and Bun full
  compilers. Small full-pipe controls also verify that flush and disposal leave
  the JavaScript event loop available. Terminal behavior, already nonblocking
  descriptors, and cross-platform process-exit behavior remain open. Standalone
  runners now distinguish `IO.Process.exit` from `IO.Process.forceExit`: ordinary
  exit flushes native C streams before engine shutdown, while forced exit uses
  native `_Exit` before JavaScript teardown can flush streams. Ordinary
  Lean exit/status/console/open-file comparisons match native Linux in the
  packaged and full Node, Deno, and Bun runtimes; see
  [the exit comparison](docs/evidence/process-exit-2026-09-21.json). The subsequent broad campaign
  exposed an engine shutdown race in the direct libc exit path; the repaired
  engine-coordinated path passes all three affected upstream tests in each
  engine and 33 packaged checks. See
  [the shutdown repair](docs/evidence/engine-exit-shutdown-2026-09-21.json).
- [ ] Complete embedded forced-exit buffer discard on Windows and validate the
  macOS implementation natively. Linux cleanup now purges unflushed native
  streams after their pending operations settle, preserving the host process.
  All three engines match native Lean's return, ordinary-exit, and forced-exit
  file behavior; 63 file, console, lifecycle, and exit regressions pass with no
  skips. Queued stdout writes and repeated disposal are covered. Windows still
  flushes on embedded forced exit; macOS has an unverified `fpurge` branch.
  Pending native reads still require their operation to finish before cleanup.
  See [the preserved before/after comparison](docs/evidence/embedded-force-exit-2026-09-22.json).
- [ ] Validate the private Node worker diagnostic adapter on supported Node
  versions and operating systems. Node's default forwarding can change shared
  stdout/stderr pipes to nonblocking mode. Descriptor-backed forwarding now
  preserves flags, diagnostics, and unreferenced-worker shutdown on Node 24.13.1
  Linux x64. Matching Node's ordinary lifetime requires checked private stream
  flags; an unfamiliar layout reports an unsupported-adapter error. This
  implementation dependency needs broader validation and is not a fundamental
  JavaScript limitation. The console comparison, 21 unchanged upstream passes,
  worker controls, and 22 passing Lean-server Vitest checks are recorded in
  [the console evidence](docs/evidence/console-buffering-2026-09-21.json).
- [ ] Broaden native child-process, process-group, pipe, signal and thread-ID
  parity tests, especially Windows quoting and process termination. Ordinary
  spawn/output/wait/poll/PID/kill operations and file-backed pipes are implemented.
  Linux comparisons now cover killing reaped children, native process-group
  errors, groups that outlive their leader, and exiting with a dropped live
  child. Both packaged applications and full compilers match native Lean in
  Node, Deno, and Bun on those controls. Windows termination semantics and
  native macOS validation remain open; see
  [the lifecycle evidence](docs/evidence/process-lifetime-2026-09-21.json).
  Absolute and relative child working directories containing `symlink/..` now
  also match native Linux in both execution paths and all three engines; see
  [the cwd comparisons](docs/evidence/process-cwd-2026-09-21.json). POSIX
  `chdir`/`exec` failures now return a real child with native diagnostics and
  exit status 255. Ordinary Lean comparisons also cover literal environments,
  PATH/executable-text behavior, and recovery via an absolute child cwd after
  removal of the parent directory, in both execution paths and all three engines.
  Private file-worker startup now handles that removed-cwd case without changing
  OS cwd; four blocked FIFO readers still permit their dependent writes.
  Concurrent rename/removal/permission races, non-Linux cwd identity, and native duplication
  of unflushed parent output on failed forks remain open. The private launcher
  also adds engine startup overhead. See [the retained process comparisons](docs/evidence/process-spawn-2026-09-21.json).
  `IO.getTID` is now implemented using the executing worker's actual OS thread ID;
  direct checks pass in Node, Deno, and Bun on Linux x64. Full Lean validation is
  still in progress.
- [ ] Embedded application modules use an instance cwd, while standalone mains
  and the full compiler propagate cwd changes. Packaged applications still report
  their containing executable as `IO.appPath`; the full compiler supplies the
  selected Lean/tool entry point. Complete native process-context comparisons.
- [ ] Validate ordinary platform queries and `System.FilePath` on native Windows,
  macOS, and ARM64 hosts. The full compiler now routes its Windows/macOS queries
  to the JavaScript host, matching the packaged application builder. Nine
  controlled host-value comparisons pass across Node, Deno, and patched Bun;
  the original implementation failed the six simulated Windows/macOS cases.
  Rebuilt full compilers also report the correct Linux host and `wasm64` target
  in Node, Deno, and released Bun with the existing Linux stack adjustment.
  Six unchanged upstream regressions pass in each engine. These local checks do not establish
  native Windows/macOS filesystem conformance; see
  [the platform evidence](docs/evidence/host-platform-2026-09-21.json).
  Guest library metadata now also reflects the actual build: the full Emscripten
  compiler retains upstream's zero libuv version, and packaged WASI mains report
  zero native libuv/OpenSSL versions. The missing OpenSSL metadata primitive no
  longer prevents ordinary `Lean.Runtime` imports. Twenty-one unchanged upstream
  registrations, seven package tests and three released-engine package controls
  pass. This describes guest libraries, not a guarantee about host API coverage;
  see [the metadata repair](docs/evidence/runtime-library-metadata-2026-09-22.json).
- [ ] Windows named time zones other than UTC return an explicit unsupported
  error. Date/time behavior beyond tested UTC HTTP dates needs broader OS coverage.
- [ ] Complete native Windows, macOS, and ARM64 wall-clock comparisons. On Linux
  x64, the private clock bridge now preserves pinned native Lean's microsecond
  precision; the old `Date.now()` adapter exposed only milliseconds. Full Node,
  Deno, and local rebuilt Bun comparisons pass, as do packaged mains in released
  Node, Deno, and Bun. Clock errors now reach ordinary Lean `IO.Error` handling.
  Twelve unchanged upstream time, HTTP, and file-locking registrations pass.
  Integer conversion tests cover negative epochs and Windows FILETIME rounding,
  but do not validate those native OS ABIs. See
  [the clock comparisons and retained attempts](docs/evidence/wall-clock-2026-09-22.json).
- [ ] Native FFI dependencies still need Wasm implementations or internal host
  adapters. Build-time Lake plugins do not supply their runtime native externs.
  A full-compiler loader gap for ordinary compiled Lean plugins is repaired:
  their internal Lean function imports now use the in-Wasm symbol registry.
  Six unchanged regressions pass in native Lean and Node, including the three
  previously failing plugins. Small real plugin controls pass across all three
  engines; full Deno/Bun regression validation remains in progress. See
  [the plugin repair evidence](docs/evidence/lean-plugin-symbols-node-2026-09-22.json).
- [ ] Extend missing-extern diagnostics to dependency libraries outside the pinned
  Lean/Std environment. The upstream audit now maps 954 declaration/symbol pairs
  and associates observed link failures with affected declarations.

## HTTP and networking

- [ ] Complete DNS, UDP, TCP, and HTTP behavioral validation across all engines.
  DNS and UDP host implementations now exist; selected original tests pass in
  Node. This does not establish complete networking parity. There is no `IO.HTTP`
  API; identify the actual Lean library before making TLS/WebSocket support claims.
  Fourteen additional unchanged HTTP registrations now pass in the full Node
  compiler, including incremental parsing, parser fuzzing, RFC compliance,
  dispatch, headers, framing, trailers and URIs. This expands observed coverage;
  it does not complete the API or other-engine validation. See
  [the 296-test Node checkpoint](docs/evidence/node-broad-v144-split-optimization-checkpoint296-2026-09-22.json).
- [ ] Implement remaining UV loop configuration/aliveness primitives. Network
  interface enumeration now matches native Lean's records and ordering in Node,
  Deno, and Bun on Linux x64; other OSs still require validation.
- [ ] Complete TCP bind parity on Windows and validate the POSIX implementation
  on macOS. Linux x64 now reserves the socket during ordinary Lean `bind`, retains
  the same port through listen/connect, and matches native bind/name/keepalive
  errors in Node, Deno, and Bun. IPv4/IPv6, delayed address-in-use errors, small
  reads, readiness checks, and response-after-half-close pass additional
  differential fixtures. This does not establish every networking edge case or
  cross-platform parity; Windows still uses deferred binding. See
  [the binding comparisons](docs/evidence/tcp-binding-2026-09-21.json).
- [ ] Validate IPv6, keepalive details, transport half-close/error behavior,
  connection floods, slow consumers, and timer-boundary races more extensively.
  IPv6 wildcard dual-stack acceptance and response-after-client-half-close now
  have passing Linux tests; outbound connections retain configured socket options.
- [ ] The server example is a single-process, loopback demo with an unauthenticated
  shutdown route. Authentication, TLS termination, production deployment, and
  shared storage coordination remain application work.
- [ ] File replacement does not imply transactions, rollback, interprocess
  locking, or crash durability. Separate processes need their own coordination.

## Scheduling and cancellation

- [ ] Integrate and validate the full compiler's real Lean scheduler/pthreads in
  the packaged application path, which still runs tasks cooperatively on one
  JavaScript thread.
- [ ] Complete full-compiler subprocess and language-server memory validation.
  A private loader index removes the eager JavaScript scan of all 261,062
  function-table entries in each worker. Three unchanged Node cancellation
  tests now pass within the existing memory guard, using the same Wasm and four
  Lean workers. Broader server/project workloads and full-suite completion
  remain open; see [the comparisons](docs/evidence/function-table-index-2026-09-21.json).
- [ ] Validate all task-drop/cancellation propagation behavior against the native
  scheduler, beyond explicit cooperative cancellation and tested task/promise
  lifetimes. Do not infer complete scheduling equivalence from server tests.
- [ ] Main shutdown drains runnable and running cooperative tasks. Native Lean
  stops its ordinary worker pool before joining dedicated workers, so a dedicated
  task that spawns more ordinary work after shutdown begins can behave differently.
- [ ] Complete `Std.Async` coverage. Process, signal, UDP and system host primitives
  now exist; the full runtime also retains native `Std.BaseSharedMutex`. Selected
  checks pass, but the entire scheduler, cancellation, and signal test suites have
  not passed in all three engines. Passing HTTP tests does not cover these libraries.
- [ ] Standard Node tasks currently require Asyncify. JSPI remains available for
  the legacy custom-host bridge only, with a separate artifact and engine support.
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
- [ ] Memory is capped at 1 GiB; each async invocation has fixed 256 KiB C and
  Asyncify stacks. Stack queries track the active fiber, but unchecked C recursion
  is not comprehensively protected or tested for every exhaustion path.
  Upstream `elab/12676.lean` exhausts memory and `compile_bench/const_fold.lean`
  exceeds the packaged runtime stack. Raising its heap limit did not fix the
  former. The separate full Node compiler now passes `elab/12676.lean` at a
  measured 2.24 GiB workload peak; that repair still needs packaged integration.
- [ ] `USize` and `ISize` are 32-bit in Wasm32, unlike native 64-bit Lean builds.
  Width-sensitive application results therefore differ. The full lowered-memory64
  target preserves 64-bit widths but currently has a 4 GiB address-space ceiling;
  the alternative native-memory64 target passes the original `instances` test in
  Node and Deno with an 8 GiB guest maximum. Released Bun still has shared-memory
  transfer defects. A local ASAN debug build with a small engine patch now passes
  18 cloning controls, 15 neighboring worker tests, and the original memory64
  probe. The full compiler also passes the unchanged upstream `IO_test` on that
  build. See [the local engine repair](docs/evidence/bun-memory64-local-fix-2026-09-21.json)
  and [isolated full-runtime IO result](docs/evidence/bun-memory64-io-2026-09-21.json).
  An earlier patched release build passed ordinary upstream IO,
  cancellation, and HTTP controls, but `instances` failed: Bun's WebKit fork
  deliberately caps ArrayBuffers and Wasm memory at 4 GiB while some Bun buffer
  paths retain 32-bit lengths. A one-page capacity query confirms this cap without
  attempting large memory growth. That implementation restriction was
  not fundamental; see [the release and capacity evidence](docs/evidence/bun-memory64-release-2026-09-21.json).
  A separate three-byte buffer probe confirmed a Bun offset-narrowing issue:
  `StringDecoder.text` wraps offsets at 4 GiB and differs on negative indexing.
  Node and Deno agree on all 40 controls; released and locally patched Bun
  each differed on the same three cases. This is engine evidence for the remaining
  buffer audit, not an observed Lean test failure; see
  [the small-buffer comparisons](docs/evidence/buffer-width-2026-09-21.json).
  A subsequent local release/ASAN patch fixes decoder length truncation, relative
  offsets, and state reset. It matches all 40 small-buffer comparisons and six
  4 GiB boundary checks; 22 added decoder cases and 37 worker/memory controls
  pass. One unchanged Bun test expects behavior that differs from Node; its
  failure and a separate native comparison are retained. The ASAN forced-GC
  case needs a documented longer harness deadline. That patch did not remove the
  capacity limit or complete the wider buffer audit; see
  [the decoder repair evidence](docs/evidence/bun-decoder-width-2026-09-21.json).
  A subsequent matching WebKit source build raises the local Bun capacity to
  8 GiB. It passes the unchanged `instances` test and four upstream filesystem,
  cancellation, and HTTP controls; all 7,267 original source hashes remain intact.
  Large-buffer correctness checks also pass, but the numeric-index probe did not
  demonstrate FTL execution above 4 GiB. That coverage failure is retained.
  This opt-in Linux build uses host ICU 74.2 and the explicit stack adjustment;
  it is not released Bun or a package default. Its WebKit changes still lack ASAN
  and other-OS validation. See [the capacity evidence](docs/evidence/bun-memory64-capacity-2026-09-22.json).
  Full-suite completion and packaged full-runtime integration remain open.
- [ ] Audit every host transfer path above 4 GiB. Independent probes show that
  Node 24.13.1 truncates high source offsets in `Buffer.copy` and shared-view
  cloning. Deno 2.9.7 rejects that copy and truncates offsets in `Buffer.toString`
  and `Buffer.fill`. Lasm's existing typed-array slice/set and numeric-offset
  reconstruction paths pass the minimized checks in all three engines; these
  engine failures are not observed failures of that bridge. Nine subsequent
  full host-bridge controls pass in Node, Deno, and patched Bun, with request
  bytes, response bytes, and wake-up signals above 2 GiB and 4 GiB, including
  concurrent pthread callers. Broader coverage remains necessary; see
  [the actual bridge checks](docs/evidence/host-bridge-capacity-2026-09-22.json)
  and the capacity evidence for the retained engine failures.
- [x] Widen the experimental full-runtime host transfer-length protocol.
  The original ABI failed 36 of 72 synthetic checks: success lengths at 2 GiB
  crossed the error sign bit and input sizes above 4 GiB narrowed. Pointer-sized
  counts and signed 64-bit response lengths now pass all 72 checks, including
  error responses, in Node, Deno, and the local Bun build. Nine actual bridge
  controls also pass. The packaged Wasm32 ABI retains its existing widths.
  See [the transfer repair evidence](docs/evidence/host-transfer-width-2026-09-22.json).
- [ ] Measure and reduce large-payload IO allocation overhead. The wide-count
  regression uses synthetic lengths without large buffers; the high-address
  bridge controls move small payloads. Real responses still clone across a
  worker port and copy through a temporary C++ vector before constructing Lean
  data. Initial ordinary-Lean reads through 256 MiB now pass. Short-read worker
  responses now carry only returned bytes: a three-byte result or EOF previously
  cloned the entire requested 64 MiB allocation in every engine. The identical
  Lean controls pass before and after; measured 64 MiB request peaks fall from
  1.89 to 1.63 GiB in Node, 2.16 to 1.84 GiB in Deno, and 2.40 to 1.90 GiB in
  local rebuilt Bun. These are individual runs, not a statistical benchmark.
  Nine packaged controls and eighteen unchanged upstream registrations pass.
  The native read still reserves its requested capacity; larger payloads and
  remaining response/C++/Lean copies need further measurements under the same
  guard. See [the short-read evidence](docs/evidence/short-read-allocation-2026-09-22.json).
  This remains an implementation and validation gap, not an established
  fundamental restriction.
- [x] Avoid Deno's per-byte traversal of full-runtime message payloads. Private
  messages now carry ArrayBuffers plus numeric view bounds. The same ordinary
  Lean 64 MiB read falls from a 5.23 GiB workload peak to 1.99 GiB in Deno, with
  byte-identical Wasm. Native Lean and all three engines pass the 1/16/64 MiB
  comparisons and subsequent 256 MiB reads; the latter engine peaks stay below
  2.92 GiB. These are local measurements, not a multi-GiB IO guarantee. Response
  cloning and C++/Lean copies remain. See
  [the transport evidence](docs/evidence/deno-message-envelope-2026-09-22.json).
- [ ] A pending C read cannot be safely interrupted by disposing the Wasm
  instance. Blocking file calls now use independent host workers, so reads do
  not fill the shared N-API pool and prevent their dependent writes from running.
  A synchronized four-reader FIFO regression passes in the full Node, Deno,
  and Linux stack-adjusted Bun runtimes; broader device and platform coverage
  remains open. Idle workers are released promptly; active calls still consume
  OS thread resources. The full runtime also finalizes buffered files without blocking the
  host event loop: an ordinary Lean FIFO regression matches native Lean in Node,
  Deno, and the Linux stack-adjusted Bun configuration. Normal packaged
  finalization now also suspends safely, including task-local stream cleanup:
  two ordinary-Lean FIFO fixtures match native Lean in stock Node, Deno, and Bun
  on Linux x64. Synchronous disposal/fatal teardown and interrupted in-flight
  native operations still require separate lifetime and cancellation work.
  See [the FIFO evidence](docs/evidence/fifo-finalizer-2026-09-20.json).
  The packaged implementation and its C-stack restoration correction are recorded
  in [the cooperative finalizer evidence](docs/evidence/cooperative-finalizers-2026-09-21.json).
  The shared-pool deadlock and its separate fix are recorded in
  [the worker evidence](docs/evidence/fifo-workers-2026-09-20.json).
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

- [ ] Extend the HTTP endurance tests beyond the verified keep-alive, aborted
  stream, and 330 fresh-connection workload. Unique nested task continuations are
  now fused, eliminating the observed accept-loop chain growth in that regression.
  This bounded workload is not a general memory-leak proof.
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

Recent fixes (2026-09-18): real shared/exclusive locks, C-library buffered file
handles and flush/truncate behavior, reads beyond 16 MiB, native line decoding,
expanded errno families, independent standard streams for suspended tasks,
UInt64 asynchronous timers, and ordinary child processes/pipes. The initial eight
selected upstream filesystem/console files matched native Lean on Linux x64.
Additional differential fixtures verify OS symlink/dot-segment resolution,
directory enumeration order, invalid paths, native error messages, stdin EOF,
environment overrides, process termination and simultaneous 1 MiB output pipes.
Remaining platform and semantic checks above are still open.

The upstream-driven fixes also preserve static 64-bit scalar fields on Wasm32
(including Lean Name/Expr hashes), execute synchronous cancellation callbacks
inline, wait for outstanding tasks at ordinary main shutdown, route `timeit` and
`allocprof` through Lean's current stderr, and preserve native uncaught-error text.
See [the upstream results](docs/UPSTREAM_RESULTS.md),
[testing workflow](docs/UPSTREAM_TESTS.md), and
[regression/package evidence](docs/evidence/2026-09-18-io-conformance.json) for
reproducible commands, source/API inventories, and the limits of these comparisons.
