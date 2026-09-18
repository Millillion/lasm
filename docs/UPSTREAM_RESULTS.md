# Lean 4.32.0 compatibility audit

Generated 2026-09-18T22:04:32.388Z. Host: linux-x64, Node v24.13.1.
Pinned upstream commit: `8c9756b28d64dab099da31a4c09229a9e6a2ef35`.
**Every selected runtime candidate has an observation. This does not mean every candidate built or passed.**

Lean has its own [test suite](https://github.com/leanprover/lean4/blob/v4.32.0/tests/README.md).
The actual CMake registration inventory contains **3891 tests**.
The source inventory contains 4236 Lean files, including
auxiliary files and disabled tests; these are different units of counting.

| Source classification | Files |
| --- | ---: |
| native-tooling | 3106 |
| auxiliary-source | 501 |
| runtime-main | 96 |
| upstream-disabled | 9 |
| runtime-commands | 524 |

The adapter selects runtime commands in the elaboration piles and ordinary main
programs in the compile piles. This is a selected runtime audit, not execution of
the entire native compiler, kernel, LSP, Lake, C-linkage and shell test suite in
Node. Other benchmark/test-driver piles have not been adapted.

## Runtime observations

620 of 620 candidates recorded.

| Latest recorded result | Files |
| --- | ---: |
| matched-native | 336 |
| wasm-failed | 5 |
| build-failed | 249 |
| needs-upstream-driver | 1 |
| build-timeout | 19 |
| matched-native-with-errors | 4 |
| output-mismatch | 5 |
| native-baseline-failed | 1 |

These observations span exploratory builds and explicit rechecks from different
compiler revisions. They are not a clean sweep of one final revision. Source
hashes, artifact hashes, compiler fingerprints, earlier observations and exact
failure categories are retained in the [machine-readable report](compatibility/lean-4.32.0-results.json).
The [workflow](UPSTREAM_TESTS.md) documents native baselines, normalization,
deadlines, command execution markers, and reproduction commands.

**HTTP:** 20/20 files match native Lean,
covering 609 adapted runtime commands. These include
parsing, framing, headers, bodies, URI handling, protocol regressions and fuzz
inputs. Network transport is additionally tested by the full Lean server example.
A passing command can contain many assertions; it is not declaration or branch
coverage, nor a proof of all possible scheduling interleavings.

**Filesystem/console:** 8/8 selected files match native Lean
(50 adapted commands and 1 ordinary main).
All 20 direct IO.FS externs have host implementations. Higher-level
functions use the actual pinned Lean library. Source inventories list 193 IO.FS
and 1,938 Std.Http declarations, including generated constructors and eliminators.
This establishes implementation locations, not complete behavioral equivalence.

Separate [regression and fresh-package evidence](evidence/2026-09-18-io-conformance.json)
records the core runtime, full Lean HTTP application, Express example, browser,
workerd, JSPI and installed-package checks. The package was built and tested on
native Linux x64; the source audit above spans multiple exploratory revisions.

## Remaining gaps

The [root limitations checklist](../IO_LIMITATIONS.md) is still open. Concrete
examples include the Wasm32 USize/ISize width, heap/stack exhaustion, cooperative
scheduling and shutdown differences, some blocking native-stream operations,
TCP bind timing, missing wider async/system APIs, and native validation on macOS,
Windows and Linux ARM64. Large lists exhaust memory; a deep-recursion benchmark
exceeds the stack; panic and overflow termination differ from native executions.

An output mismatch is not automatically an API defect. Random output, concurrent
trace order, and width-sensitive expectations are retained visibly as mismatches.
An adapter/build failure is not evidence that the original Lean API failed at
runtime. Expected errors that match native Lean are counted separately.

The audit observed 102 unresolved native symbols;
44 map to IO/Std declarations. Some observations precede fixes.
See each artifact's history and the [954 declaration/symbol mappings](compatibility/lean-4.32.0-externs.json)
before treating an earlier unresolved symbol as a current limitation.

No non-Linux native runner results are implied by the package's six-platform build
matrix. The prepared CI workflow still needs execution on those hosts.
