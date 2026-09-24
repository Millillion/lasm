**Completion:** ~55% — unchanged since the previous commit.

**Estimated finish:** Not yet estimable — low confidence; likely window unknown. Real helper integration, API repair and native platform acceptance still lack defensible durations.

**Changed:** [Unchanged excluded-concurrency controls](evidence/upstream-excluded-concurrency-2026-09-24.json) match native behavior in three repetitions each on Node and Deno. Bun exposes a real stack gap; a separate Linux diagnostic passes with larger worker stacks and engine budget. Bundled integration remains pending. Peak memory was 3.59 GiB without resource events.

**Remaining:** Shipping engine parity and callable bindings; complete standard API audit and repairs; native acceptance across all six platforms.

**Score basis:** Workflow 80%; Wasm execution 55%; API parity 30%; platform acceptance 45%. Weights 25/30/25/20 give 53%, rounded to 55%. Targeted repairs do not close full API or platform gates; no remaining gap is demonstrated fundamental.
