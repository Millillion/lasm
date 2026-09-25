**Completion:** ~55% — unchanged since the previous commit.

**Estimated finish:** Not yet estimable; complete suite/API coverage, shipping helper integration and five native platform validations remain unfinished.

**Changed:** [Corrected stale IO documentation](evidence/io-backend-scope-review-2026-09-25.json): managed executables already use guest pthreads; cooperative scheduling and Asyncify constraints apply to the earlier callable backend. Existing Lean 4.34.1 comparisons are linked with their original scope. This is a documentation correction, with no new runtime acceptance claimed. The fresh Bun campaign and standalone-helper validation remain in progress.

**Remaining:** Complete language/API and callable-library parity; ship and validate general imports, descriptors and runtime cleanup; finish all six native build/install platforms.

**Score basis:** Workflow 80%; Wasm execution 65%; API parity 30%; platform acceptance 50%. Weighted result 57%, rounded to 55%. No remaining gap is demonstrated fundamental.
