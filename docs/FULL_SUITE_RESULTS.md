# Full upstream Lean suite

Pinned Lean: **4.32.0**, commit
`8c9756b28d64dab099da31a4c09229a9e6a2ef35`.

The complete registered native control suite passed **3,891 / 3,891 tests** on
Linux x64 on 2026-09-19 UTC. The clean run took 2,341.39 seconds with two CTest
workers. All **7,267 original test and documentation-example files** matched their
recorded hashes before and after execution. See the
[machine-readable evidence](evidence/full-native-2026-09-19.json).

The parallel harness supplies a 600-second deadline, source-search paths pointing
to the isolated matching Lean source tree, and an override for the release's
embedded private archive-tool path. Tests, upstream drivers, and expected-output
files are unchanged. The first run's six environment failures, the successful
six-test rerun, and the subsequent clean full run are retained separately under
`.work/full-suite-native`.

This native result establishes the reference behavior. It is **not a full-suite
pass inside Node, Deno, or Bun**. The full WebAssembly compiler now starts in all
three engines. Node also elaborates a theorem with `omega`, evaluates large
natural numbers and 64-bit `USize`, runs an ordinary main with tasks, and generates
C and serialized modules using the full compiler. An initial full Node suite
attempt was interrupted after collecting repeated defects in the superseded
build; it is not a completed suite run. Its
[partial evidence](evidence/full-node-initial-attempt-2026-09-19.json) is retained,
including a tracked `produced.out` file overwritten by an upstream Lake test
driver during that failed attempt. No upstream source or expected output was
edited to obtain a pass. The separate application
runtime checks and earlier selected runtime audit retain their original scope.

Forty-eight prerequisite executions pass (including ten shutdown stress repetitions per engine): Wasm32 threads, 64-bit values with lowered memory
accesses, asynchronous host calls from four concurrent Wasm threads, pthread stacks plus host memory writes above 2 GiB, detached-thread shutdown without spurious stderr,
side-module data/function-pointer relocation, and shared-memory growth observed by a blocked worker, each in
Node 24.13.1, Deno 2.9.7, and Bun 1.4.2. These are build prerequisites, not upstream
test-suite passes. See [the prerequisite evidence](evidence/full-engine-prerequisites-2026-09-19.json).

The repaired frozen Node build passes **6/6 unchanged upstream IO tests**:
`IO_test`, `tempfile`, `sync_shared_mutex`, `async_select_timer`,
`async_tcp_server_client`, and `async_udp_sockets`. All 7,267 original file hashes
remain unchanged for that run. See [the IO smoke evidence](evidence/full-node-io-smoke-2026-09-19.json).
This verifies the actual Lean scheduler and ordinary TCP/UDP/timer APIs in Node;
it is still only a subset. The real compiled Lake entry point now starts in all three engines. The Node
compiler and Leanc also generate and execute an ordinary Lean program through
the Wasm C toolchain without spurious runtime or compiler diagnostics. These
checks do not establish broader tool compatibility. A new complete Node run uses
frozen build `wasm64-v6`, three CTest workers, and a documented 900-second deadline.
The initial registration error in the generated harness is retained separately;
no test ran during that error.

Further full-runtime work adds DNS, system information/environment, signals, and
actual OS thread IDs. Seven focused JavaScript regression tests pass; direct host
checks cover all three engines. The unchanged DNS and system-information tests
also passed in Node build v8. These host checks are not a full Lean suite result.

The first eight-test Deno run on frozen v11 passed only system information:
seven tests failed because a blocked worker's JavaScript memory view lagged
behind shared Wasm memory growth. A debug copy recorded an 835,057,472-byte
destination against a stale 779,747,328-byte view; refreshing the memory exposed
882,638,848 bytes and allowed the original DNS test to finish. The v12 build uses
Emscripten's optional growable-buffer mode, with its fallback for engines without
that API. Full test reruns are required; the small growth probe alone also passed
with the old setting and is not a complete reproduction of the compiler failure.

The v11 FFI example compiled and linked its original C and C++ libraries, then
failed because startup library lookup missed Lake's `LD_LIBRARY_PATH`. The new
prelude honors the host library search path during early loading; the subsequent
v15 run advanced to a separate C++ ABI failure described below. The earlier `depRenaming` thread-cleanup failure did not recur in
v11, but a single rerun is not evidence that the intermittent defect is resolved.
The broader v11 Node IO/HTTP run finished at **46/49**: FFI, DNS, and HTTP early
streaming failed. The full v6 Node run remains in progress. Internal
DNS deadlines and long Lake-script harness deadlines have also failed; none is
classified as fundamental.

Upstream excludes five additional tests as flaky/nondeterministic. An opt-in
parallel harness registers their unchanged drivers separately. The first native
control passed four and failed `pkg/test_extern`: inherited shell `pipefail`
exited on its intentional failing build before its expected-output comparison.
A documented parallel wrapper lets that original comparison run; the clean
adjusted native control passed **5/5**, with all 7,267 original hashes unchanged.
See [the extra-test evidence](evidence/native-excluded-2026-09-19.json). Results from
these extra tests are separate from the standard 3,891 registrations.

The subsequent v12 Deno run passed **6/8** (DNS, timers, system information,
TCP, UDP, and shared mutexes). The memory-copy failure is absent from that run.
`IO_test` and `tempfile` instead exposed Node-compatibility differences in directory
enumeration. The host now uses asynchronous POSIX `scandir` without sorting and
copies raw filename bytes; direct native-order/invalid-UTF-8 checks pass in all
three engines, along with six other filesystem/lock regressions. Full Lean reruns
of those two files subsequently passed **2/2 in Deno and 2/2 in Bun** on v13.
The Bun v12 eight-test run also passed the other six tests. These are split
subset results, not clean full-suite passes. Broader runs also exposed HTTP timing and
completion failures; their source tests remain unchanged.

The additional v12 Node tests passed **3/5**: dedicated signal handling,
`sync_mutex`, and `user_ext` passed; channel selection exhausted the engine's
worker stack and `test_extern` timed out during dynamic loading. The v15 repair
run passed the original Lake `ltar` test and DNS; FFI advanced to a C++ exception
tag import failure, and the HTTP early-streaming deadline failed again. See
[the recorded subset results](evidence/full-runtime-subsets-2026-09-19.json).

The archive failure came from generic-allocator constructor sizes: the compactor
reserved aligned space but recorded an unaligned size in serialized headers.
The reviewed runtime patch records the actual padded extent. Supplementary
probes now pass in all three engines: network-interface records/order match
native Lean, serialized objects with small scalar fields and large naturals
survive a byte-identical `leantar` round trip, and native Lean imports those
Wasm-generated modules. See [the differential evidence](evidence/interface-compact-parity-2026-09-19.json).
An initial synthetic trace-format error and a 300-second timeout under contention
are retained as failed probe attempts; neither changed an upstream test.

The v17 Node runtime regression passed **5/8** unchanged upstream tests:
`compile/534`, `compile/wait_dedicated`, `elab/grind_11081`, the normally excluded
`elab/async_select_channel`, and `pkg/test_extern`. Restoring native task-manager
joins fixes dedicated-task shutdown. Waiting through Emscripten's futex API
instead of raw `Atomics.wait` allows its pthread mailbox to synchronize loaded
libraries even while a Lean worker awaits host IO. A minimized old-build probe
waited 1,949 ms for unrelated two-second IO; the repaired probe progresses before
that IO completes in all three engines.

Both original stack-overflow diagnostic tests then passed on Node v19. The
interpreter's `const_fold` run still exhausted its configured 16 MiB C stack;
raising only `LEAN_STACK_SIZE_KB` does not enlarge the compiler's main pthread.
The v20 build therefore makes the main reservation configurable and defaults to
64 MiB. The unchanged `const_fold` driver now passes in Node, including both AOT
and interpreted execution. Deno also needs `--v8-flags=--stack-size=61440`:
its worker option raises the OS reservation without raising V8's separate budget.
That flag makes the exact generated benchmark executable pass. Its complete
upstream rerun remains pending. Bun uses a fixed 4 MiB Linux worker stack in the
pinned source and still fails this benchmark; alternative execution/compilation
strategies have not been exhausted. None of these stack settings edits a test.

The maintained prerequisite suite now passes **54/54 executions** across all three
engines, including the concurrent host-IO/dynamic-loading reproduction and C++
exceptions thrown by a dynamically loaded library and caught by its caller.
The compiler retains the C/C++ runtime ABI, arithmetic helpers, and exception tag
for plugins loaded after startup. Optional profiling archive members are not
rooted in uninstrumented programs. See [the ABI and RPC evidence](evidence/full-engine-abi-rpc-2026-09-19.json).
The v19 original FFI run passed precompilation, but failed C++ FFI on `__multi3`
and reverse FFI on empty CMake shared-library placeholders. The v23 rerun passed
the unchanged C/C++ FFI example and `pkg/test_extern` (**2/3**). Reverse FFI now
links but fails at startup because the Wasm loader ignored its embedded `rpath`.
The executable adapter now records those paths and expands `$ORIGIN`, `${ORIGIN}`,
and macOS loader-path tokens. Linux prerequisite comparisons pass **24/24**:
six native controls and eighteen Node/Deno/Bun executions, including Unicode
paths and environment-path precedence. The unchanged original reverse-FFI driver
then passed on Node v24 in 225.10 seconds. The same two-test run still failed
HTTP streaming; all 7,267 original hashes remained unchanged.
See [the loader evidence](evidence/runtime-loader-paths-2026-09-19.json).

Application linking now retains its actual entry point and linked shared-library
imports instead of the entire compiler's export set. The unchanged `compile/534`
program produces a 1.5 MiB Wasm executable and passes its upstream driver. The
old build unnecessarily linked approximately 185 MiB into each application.

The v20 Node regression passed **8/11**. HTTP early streaming and `instances`
still fail. `pkg/test_extern` regressed because Leanc forwarded the larger main
stack setting into a side-module link; v23 explicitly uses no private side-module
stack. The v20 Deno regression passed **3/8**, with four engine-stack failures
and that same side-module link error. All 7,267 original hashes remained unchanged
in each run. The traced streaming derivative (kept separately under `.work`) still
missed early response bytes; enlarging the preinitialized worker pool alone did
not resolve it. Native `instances` used approximately 3.44 GiB RSS and passed;
the full Wasm build's memory failure remains under investigation.

Complete Deno and Bun runs on frozen v23 now cover **3,896 registrations each**
(the standard 3,891 plus five explicitly identified exclusions). They use one
CTest worker per engine, a 1,800-second harness deadline, and a shared file lock
for unchanged fixed-port TCP/UDP tests. They have not completed. The earlier full
Node v6 baseline also remains in progress; fixes in later snapshots do not alter
its results retroactively.

The v24 allocator experiment passed **10/12** selected original Node tests,
including both stack diagnostics, AOT/interpreted `const_fold`, filesystem,
channel selection, and dedicated-task shutdown. Replacing the system allocator
with the SDK's mimalloc did not fix `instances`. Forcing only two Lean compiler
workers also regressed the HTTP test: all 22 cases timed out. A native control
with `-j2` likewise fails 21 cases, whereas the unchanged file passes with both
`-j4` and `-j8`. New facades therefore use four workers and explicit ordinary
`-j`/`-s` shell options; later user options retain precedence. The next compiler
build also preinitializes eight pthread workers. These are harness resource
settings, not test edits or evidence of a fundamental scheduling difference.

The six packaged application integration tests passed again in all three engines,
this time using the bundled JavaScript optimizer (**6/6**, 1,416.46 seconds).
They cover source launchers, Unicode/empty arguments, filesystem round trips,
tasks/errors, warm caches, concurrent HTTP persistence, binary bodies, streaming,
and shutdown. This remains a separate application-runtime result.

The v25 native-memory64 experiment failed both selected original Node tests:
HTTP passed its first 21 cases but timed out on early streaming; `instances`
stalled until the 1,800-second harness deadline. Its original-source hashes were
unchanged. A minimized reproduction isolated the latter stall to the host bridge:
Node 24.13.1 truncates a cloned shared typed array's byte offset above 4 GiB.
An independent `structuredClone` control reproduces this without Lean or
Emscripten; Deno 2.9.7 preserves the same offset correctly. Sending the numeric
offset and reconstructing the view in the receiving
thread repairs the bridge. Synchronous requests, response copies, and asynchronous
completion from several threads pass **5/5** checks: above 2 GiB in all three
engines, and above 4 GiB in Node and Deno. The original `instances` rerun passed
in Node in **190.81 seconds**, with all 7,267 original hashes unchanged. This
uses a separate, recorded JavaScript-only derivative of frozen v25; the Wasm
compiler bytes are identical. Deno's corresponding rerun also passed
(199.27 seconds), with all original hashes unchanged.
The **54/54** ABI/thread/dynamic-loading prerequisite checks also pass after this
bridge repair; earlier and repaired runs are both retained.
See [the host-memory evidence](evidence/host-rpc-highmemory-2026-09-19.json).

The lower-memory Lean allocator experiment also exposed a build-cache defect:
upstream `leanmake` did not rebuild generated C after changing the runtime headers.
The build now tracks those headers and compiler inputs as an explicit prerequisite.
A regression using the actual generated make rules verifies both rebuilding after
a header change and retaining the cached object when inputs are unchanged.
The full allocator rebuild completed, including 2,432 generated C objects, and
its Node version smoke test passed. Frozen v26's allocator behavior still needs
the targeted memory and serialization checks. See
[the cache evidence](evidence/build-cache-2026-09-19.json).

Bun's uncaught pthread stack errors lose their Wasm frames during error transfer.
The prelude now preserves Lean's stack-overflow diagnostic for that failure path.
A deliberate recursion probe exits with the exact native diagnostic and status
in **3/3 engines**; the original Bun stack tests still need rerunning. See
[the diagnostic evidence](evidence/stack-diagnostics-2026-09-19.json).

The v27 unchanged HTTP rerun still fails case 22's early-streaming window. A
parallel derivative multiplies every millisecond interval by ten, including the
producer delay, consumer polling interval, connection timeouts, and watchdog
polling cadence. All request/response bytes, functional assertions, polling
counts, and relative timing ratios are unchanged; its 36 changed lines and input
hash are recorded. That derivative passes all 22 cases in native Lean and Node.
Deno still fails the early-streaming case; the separate Linux stack-adjusted Bun
run times out on cases 1 and 18. A factor-50 native control passes; its engine
comparisons are pending. These runs overlapped other work before resource
isolation was added, so fresh low-contention comparisons remain necessary.
It is **not** counted as a pass of the original timing-sensitive file, and does
not establish that every HTTP scheduling difference is resolved. See
[the timing evidence](evidence/http-scaled-timing-2026-09-19.json).

The old full Node v6 and Deno/Bun v23 runs were interrupted by desktop OOM
failures. Earlier references to them being in progress are historical; they are
not still running and have no complete result. The Deno/Bun trees retain all
7,267 original hashes. Node retains 7,266; its Lake `kinds` driver overwrote the
originally empty `produced.out` scratch file with `dynlib`. That alteration is
recorded and preserved, not silently repaired. New runs use one workload at a time,
one CTest job, and the proactive resource guard. Resource-aborted runs are
reported separately from Lean failures. See [the diagnosis](RESOURCE_FAILURES.md)
and [the recorded partial results](evidence/resource-protection-2026-09-19.json).

The first guarded v26 `instances` retry stopped at the proactive memory budget;
it is not a conformance result. A separate eight-worker derivative retained the
same Wasm bytes and completed the original test at **5.55 GiB** peak, but failed
with an unexpected `_private` module lookup. Both attempts preserved all original
test hashes. The reduced-worker native-allocator build then passed **17/17**
primitive/control executions across native Lean, Node, Deno, and Bun: interface
enumeration, small scalar fields, large naturals, archive round trips, and native
imports of Wasm-produced modules. Its guarded sequence peaked at **6.46 GiB**;
no OOM, swap, or memory-throttling event occurred. These checks narrow the
allocator investigation but do not establish full compatibility. See
[the allocator and resource evidence](evidence/reduced-worker-allocator-2026-09-20.json).

Two bounded engine investigations narrow the remaining memory/stack work:

- The unchanged generated `const_fold` executable passes in Bun when a Linux-only
  diagnostic helper reserves 64 MiB OS worker stacks **and** JSC's stack budget
  is raised. Stock Bun, a 3 MiB JSC-only setting, and an OS-reservation-only setting
  fail. The helper is not installed globally or used in the stock full-suite run;
  portable integration remains open. See [the stack evidence](evidence/bun-stack-isolation-2026-09-19.json).
- Native Wasm memory64 supports sparse pthread stacks and host access above
  4 GiB in Node and Deno. Stock Bun disables that feature. Enabling its experimental
  flag exposes a worker-transfer defect: the shared memory loses its 64-bit
  address type. A separate 64 KiB reproduction with no Lean or Emscripten passes
  in Node and Deno; in Bun, fresh worker memory works and cloned memory fails.
  This does not establish a fundamental limit. See [the memory64 evidence](evidence/native-memory64-2026-09-19.json).

The native-allocator capacity comparison now isolates an unchecked allocation:
the same native-memory64 Wasm passes `instances` with an 8 GiB guest limit and
fails with a 4 GiB limit. The module reader used a null `malloc` result as a file
destination, corrupting Wasm address zero. The runtime patch checks that buffer
and the compactor's initial/growing allocations, including capacity overflow.
The checked 4 GiB build now reports `INTERNAL PANIC: out of memory`; this is still
an upstream test failure. The checked native-memory64 8 GiB build passes the
unchanged test in **50.41 seconds**. All four capacity/comparison runs preserve
all 7,267 upstream hashes and record zero host OOM or throttling events. The
largest guarded run, including suite preparation, peaked at **7.16 GiB**. See
[the allocation evidence](evidence/region-allocation-2026-09-20.json). This fixes
one corrupting failure path; it does not establish complete low-memory handling
or remove the lowered-memory64 address-space ceiling.

The checked native-allocator build then passed **11/11** selected unchanged Node
regressions: filesystem, TCP/UDP, timers, network interfaces, HTTP hang/streaming
checks, and four previous stack failures. The complete HTTP file passed in
19.81 seconds, including the previously failing early-streaming case. Peak host
memory was 3.24 GiB. Deno passed **11/12**, including `instances`, but still failed
HTTP early streaming; its run including suite preparation peaked at 7.10 GiB.
Both runs preserved all upstream hashes with zero OOM or throttling events.
These are subset results and one successful Node timing run, not proof of timing
stability or full engine parity. See [the guarded regressions](evidence/guarded-runtime-regressions-2026-09-20.json).

The corresponding Bun campaign passed **11/11**, each test in its own guarded
process tree. This uses lowered memory64 with a 4 GiB guest limit and the explicit
Linux stack adjustment; it is **not a stock Bun result**. Its original HTTP file
passed in 76.60 seconds, including early streaming. All 7,267 hashes stayed
unchanged in each test; peak host usage was 4.05 GiB, with no resource aborts,
OOM, or throttling. The run also exercised the checkpointed supervisor on actual
upstream tests. Bun's native-memory64 transfer defect and portable stack
integration remain open.

A quiet Deno timing comparison subsequently passed **2/3** repetitions of the
original HTTP file; the remaining run again missed only case 22's early window.
Native Lean passed the original control. The factor-10 parallel derivative
passed in both native Lean and Deno, retaining all 22 functional cases and all
relative timing ratios. Peak memory was 3.10 GiB with no OOM or throttling.
This demonstrates intermittent timing sensitivity; it does not establish a
fundamental scheduler limitation or count the derivative as an unchanged-suite
pass. See [the repeated timing evidence](evidence/http-timing-deno-2026-09-20.json)
and `scripts/full-lean/probe-http-timing.mjs` for reproduction.

The fresh 3,896-registration Node campaign stopped near its beginning: the
`deps` and `ffi` Lake examples hit the proactive aggregate memory budget, and
the next launch exposed a transient-unit cleanup race. These are **two resource
aborts and one harness launch failure**, with no Lean conformance result from
those three attempts. All original hashes remained intact and no host OOM
occurred. Guard cleanup is repaired; a separate worker-pool comparison is in
progress. See [the budget evidence](evidence/lake-memory-budget-2026-09-20.json).

- [x] Complete clean native control run with original-source integrity checks.
- [x] Full compiler startup in Node, Deno, and Bun.
- [ ] Complete unchanged suite inside Node.
- [ ] Complete unchanged suite inside Deno.
- [ ] Complete unchanged suite inside Bun.
- [ ] Resolve all nonfundamental differences and substantiate remaining limits.

No claim that the remaining differences are fundamental has been established.
The current work includes ordinary implementation defects in build settings,
runtime ABI declarations, interpreter symbol retention, and host API coverage.

Reproduction and experimental build details are in
[the full-suite harness documentation](../scripts/full-lean/README.md).
