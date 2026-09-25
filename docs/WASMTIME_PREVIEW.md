# Standalone Wasmtime application preview

The Linux x64 preview now runs a copied Lean 4.34.1 application in stock Node
26.10.0, Deno 2.9.7 and Bun 1.4.2 with its source, build tools and original
artifacts denied by Landlock. All 45 native/deployed comparisons pass across
the initial application and supplementary lifecycle and environment fixtures.
See [the exact evidence and retained failures](evidence/wasmtime-standalone-preview-2026-09-25.json).

This is a maintainer preview. Automatic provisioning and backend selection in
the managed `lasm` CLI remain unfinished. The existing installed Bun backend
still [fails the original `const_fold` test](evidence/lean-4.34.1-upstream-applications-bun-interrupted-2026-09-25.json).

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

- [ ] Complete deleted-working-directory recovery: the current fixture matches
  native's error but exits before reaching relative recovery.
- [x] Finish empty/large-environment comparisons.
- [x] Remove the experimental loader's empty-environment rejection and 1 MiB
  environment limit while preserving range and allocation checks.
- [ ] Select a portable native CPU target and verify deployment across CPUs;
  current caches infer this build host's features.
- [ ] Complete general imports, WASI descriptors, runtime lifetime and Lean
  module-data support. The current loader resolves the pinned console globals;
  this is not proof of arbitrary dynamic imports.
- [ ] Provision and build the helper through the managed CLI and installed npm
  package, then rerun the unchanged Bun suite through that shipping path.
- [ ] Complete native validation on all six OS/architecture combinations and
  full standard-library/API coverage.

None of these unfinished items has been established as a fundamental limitation.
