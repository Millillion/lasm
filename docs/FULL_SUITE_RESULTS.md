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

Twelve prerequisite probes pass: Wasm32 threads, 64-bit values with lowered memory
accesses, asynchronous host calls from four concurrent Wasm threads, and pthread
stacks plus host memory writes above 2 GiB, each in
Node 24.13.1, Deno 2.9.7, and Bun 1.4.2. These are build prerequisites, not upstream
test-suite passes. See [the prerequisite evidence](evidence/full-engine-prerequisites-2026-09-19.json).

The repaired frozen Node build passes **6/6 unchanged upstream IO tests**:
`IO_test`, `tempfile`, `sync_shared_mutex`, `async_select_timer`,
`async_tcp_server_client`, and `async_udp_sockets`. All 7,267 original file hashes
remain unchanged for that run. See [the IO smoke evidence](evidence/full-node-io-smoke-2026-09-19.json).
This verifies the actual Lean scheduler and ordinary TCP/UDP/timer APIs in Node;
it is still only a subset. Lake startup and the external C compiler adapter
remain under investigation, as do broader runtime and full-suite failures.

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
