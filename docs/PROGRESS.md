**Completion:** ~55% — unchanged since the previous commit.

**Estimated finish:** Not yet estimable; complete suite/API coverage, shipping helper integration and five native platform validations remain unfinished.

**Changed:** The [standalone preview now uses an explicit baseline CPU target](evidence/wasmtime-baseline-lifecycle-2026-09-25.json). All 27 fresh lifecycle comparisons pass across Node, Deno and Bun, including completed deleted-directory recovery. CPU/cache, stale-input rejection and existing environment/import controls pass. Deployment peaks at 1.22 GiB without resource events. Different physical CPUs remain unverified; the shipping Bun `const_fold` failure remains open.

**Remaining:** Complete language/API and callable-library parity; ship and validate general imports, descriptors and runtime cleanup; finish all six native build/install platforms.

**Score basis:** Workflow 80%; Wasm execution 65%; API parity 30%; platform acceptance 50%. Weighted result 57%, rounded to 55%. No remaining gap is demonstrated fundamental.
