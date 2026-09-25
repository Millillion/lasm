**Completion:** ~55% — unchanged since the previous commit.

**Estimated finish:** Not yet estimable; complete suite/API coverage, shipping helper integration and five native platform validations remain unfinished.

**Changed:** The [standalone Wasmtime preview](evidence/wasmtime-standalone-preview-2026-09-25.json) passes 39 copied-deployment comparisons and 27 descriptor checks across Node, Deno and Bun, plus 46 focused checks. Source and build tools are denied during deployment. Exits, buffers, binary output, workers and long-running mains match native Lean. Deployment peaks at 1.35 GiB without resource events. Managed CLI integration, environment limits and deleted-directory recovery remain open; installed Bun still fails `const_fold`.

**Remaining:** Complete language/API and callable-library parity; ship and validate general imports, descriptors and runtime cleanup; finish all six native build/install platforms.

**Score basis:** Workflow 80%; Wasm execution 65%; API parity 30%; platform acceptance 50%. Weighted result 57%, rounded to 55%. No remaining gap is demonstrated fundamental.
