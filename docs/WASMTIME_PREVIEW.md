# Standalone Wasmtime application preview

This investigation is paused under the [current Node milestone](PLAN.md).
The [last bounded operation completed successfully](evidence/wasmtime-module-data-repair-2026-09-26.json):
Node, Deno and Bun each pass the unchanged isolated module import and seven
runtime evaluations under the original 90-second deadline. Encoding binary
worker messages as buffers fixes the Deno response stall. Forty-three focused
checks and the native descriptor controls also pass, including eight new
`openat` error-precedence cases per engine. Earlier timeout results below remain
historical failures. Further helper, extreme-stack and engine work is deferred;
it is not required for the basic Node installation milestone.

The Linux x64 preview now runs a copied Lean 4.34.1 application in stock Node
26.10.0, Deno 2.9.7 and Bun 1.4.2 with its source, build tools and original
artifacts denied by Landlock. All 45 native/deployed comparisons pass across
the initial application and supplementary lifecycle and environment fixtures.
See [the exact evidence and retained failures](evidence/wasmtime-standalone-preview-2026-09-25.json).
The [baseline CPU follow-up](evidence/wasmtime-baseline-lifecycle-2026-09-25.json)
adds 27 fresh lifecycle comparisons with explicit CPU settings, including
completed recovery from a deleted working directory.
The [unchanged `const_fold` benchmark also passes](evidence/wasmtime-const-fold-2026-09-26.json)
in three fresh private runs and three isolated copied deployments. Original
argument `15`, expected output and the 4 GiB Lean stack setting remain intact.
The diagnostic runs verify a 4,295,098,368-byte guest computation stack, including
Lean's 128 KiB buffer, followed by thread exit and cleanup. Actual shared memory
grows beyond 4 GiB; deployment peaks at 1.20 GiB resident memory. This does not
claim a dense 4 GiB memory workload.

This is a maintainer preview. Automatic provisioning and backend selection in
the managed `lasm` CLI remain unfinished. The existing installed Bun backend
still [fails the original `const_fold` test](evidence/lean-4.34.1-upstream-applications-bun-interrupted-2026-09-25.json).

A [module-data checkpoint](evidence/wasmtime-module-data-checkpoint-2026-09-26.json)
now imports the deployed `Init` metadata and evaluates seven calls to
`Nat.nextPowerOfTwo` in an isolated Node application, matching native Lean.
Packaging verifies and copies the metadata inventory and redistribution notices.
The helper resolves main-module functions and data and implements the exercised
native open, read, stat, seek and close imports. Descriptor controls pass in all
three engines; 42 focused unit checks and native symbol controls with undefined
behavior checking also pass. Batched export indexing reduced measured startup
from 21.05 seconds per instance to 0.30 seconds for a main and child pair.
Deno's isolated application still times out after 90 seconds; a separate
300-second duration control also times out. Bun's module-data application has
not yet been attempted. Both failures remain recorded, and neither encountered
a resource abort. Main-module symbol support does not implement side-module
loading or the complete descriptor/API surface.

The diagnostic runner and copied applications share the same runtime. Lean
executes on guest pthreads; the main JavaScript thread handles asynchronous IO,
process operations and working-directory changes. A completed application
flushes live C file buffers and exits its owned process. This entry point does
not provide a reusable embedding or disposal API.

The private packaging script accepts a completed, verified native compilation.
It emits `main.mjs`, a native code cache, the Wasmtime library, a Node-API driver,
host adapters and redistribution notices. Execution needs the selected stock
engine and the complete deployment directory. The library uses a relative
lookup path, and the loader checks the cache and native-library identities.
These locally generated caches contain native machine code; hashes establish
the recorded identities, not trust in an outside producer.
Compilation and loading now share an explicit `x86_64-unknown-linux-gnu` target
with optional build-host CPU feature inference disabled. Schema 2 manifests
record that baseline; older native-inferred caches require recompilation.
Packaging also rejects changed or missing engine-configuration and import-transform
identities. Actual deployment on a different physical CPU remains unverified.

Validation includes 46 focused checks, 27 raw-descriptor comparisons, three
shared-runtime native comparisons, three deliberate oracle-mismatch controls,
and 45 copied deployments. Filesystem denial controls run independently
in each engine. Raw descriptor coverage includes binary bytes, closed/read-only
descriptors, full devices, short writes, broken pipes, blocked writes and normal
versus forced buffer flushing. Lifecycle checks cover ordinary and forced exits,
UInt32 exit conversion, uncaught errors, binary output, dedicated workers,
working directories and execution beyond the diagnostic runner's 45-second
deadline. The native interpreter loads initializers through an import-only
wrapper; the Lean application and compiled native control stay unchanged.
Original assertions remain strict. All successful guards release without
resource events; deployment peaks at 1.77 GiB and compilation at 5.34 GiB.

[Empty and 1.2 MiB process environments now match native Lean](evidence/wasmtime-standalone-environment-2026-09-25.json)
in all three engines. The loader accepts empty snapshots and removes its former
1 MiB cap while retaining checked sizes, entry counts, termination and guest
memory ranges. Six valid snapshots, seven malformed snapshots and 16 guest
boundary checks also pass with undefined-behavior checking enabled. The original
six target failures and two supplementary harness failures remain recorded.

- [x] Complete deleted-working-directory recovery. The revised supplementary
  fixture records native's error constructor, recovers through `..`, verifies
  the original directory and succeeds in all three engines. Its native controls
  must reach the intended exit code, preventing an early error from counting as
  recovery. The earlier fixture and its narrower evidence remain recorded.
- [x] Finish empty/large-environment comparisons.
- [x] Remove the experimental loader's empty-environment rejection and 1 MiB
  environment limit while preserving range and allocation checks.
- [x] Select the explicit baseline CPU target consistently for compilation and
  loading, with actual SIMD/shared-memory64 execution and cache reload controls.
- [x] Run the original large-stack benchmark through the baseline helper and
  copied standalone deployments in all three engines. The first parallel
  harness attempt reset the native stack setting and failed before helper
  execution; its retained result and corrected native controls are recorded.
- [ ] Verify deployment across different physical CPUs.
- [ ] Complete general imports, WASI descriptors, runtime lifetime and Lean
  module-data support. The current loader resolves the pinned console globals;
  this is not proof of arbitrary dynamic imports.
- [ ] Provision and build the helper through the managed CLI and installed npm
  package, then rerun the unchanged Bun suite through that shipping path.
- [ ] Complete native validation on all six OS/architecture combinations and
  full standard-library/API coverage.

None of these unfinished items has been established as a fundamental limitation.
