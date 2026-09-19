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

The v11 FFI example now compiles and links its original C and C++ libraries, then
fails because startup library lookup misses Lake's `LD_LIBRARY_PATH`. The new
prelude honors the host library search path during early loading; its full-example
rerun is pending. The earlier `depRenaming` thread-cleanup failure did not recur in
v11, but a single rerun is not evidence that the intermittent defect is resolved.
The broader v11 Node IO/HTTP run and full v6 Node run remain in progress. Internal
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
of those two files are still pending. Broader runs also exposed HTTP timing and
completion failures; their source tests remain unchanged.

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
