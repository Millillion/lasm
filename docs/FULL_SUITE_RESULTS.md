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
three engines. Basic theorem elaboration/evaluation runs in Node; broader imports
and full host integration are still under investigation. The separate application
runtime checks and earlier selected runtime audit retain their original scope.

Nine prerequisite probes pass: Wasm32 threads, 64-bit values with lowered memory
accesses, and asynchronous host calls from four concurrent Wasm threads, each in
Node 24.13.1, Deno 2.9.7, and Bun 1.4.2. These are build prerequisites, not upstream
test-suite passes.

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
