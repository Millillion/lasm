**Completion:** ~55% — unchanged since the previous commit.

**Estimated finish:** Not yet estimable; complete suite/API coverage, shipping helper integration and five native platform validations remain unfinished.

**Changed:** [The private loader resolves six function globals](evidence/wasmtime-function-globals-2026-09-25.json), preserving original pointer-equality assertions. All 14,184 SDK console comparisons and fresh ordinary Lean native comparisons pass in Node, Deno and Bun. Six transform controls and nine negative module controls pass. Compilation peaks at 5.33 GiB without resource events; the prior disk refusal and failing pointer controls remain recorded.

**Remaining:** Complete language/API differentials; ship and validate general imports, descriptors and runtime cleanup; finish all six native build/install platforms. Pushes await restored SSH credentials.

**Score basis:** Workflow 80%; Wasm execution 65%; API parity 30%; platform acceptance 50%. Weighted result 57%, rounded to 55%. No remaining gap is demonstrated fundamental.
