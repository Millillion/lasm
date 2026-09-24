**Completion:** ~50% — initial provisional snapshot; no previous scored commit.

**Estimated finish:** Not yet estimable — low confidence; likely window unknown. Unresolved Deno/Bun runtime behavior and incomplete API auditing prevent a defensible milestone forecast.

**Changed:** Established this scoring baseline using the verified installed workflow and [155 Node LSP client passes](evidence/upstream-lsp-node-2026-09-24.json), without counting their native servers as Wasm execution.

**Remaining:** Shipping pipeline and engine parity, including callable bindings; complete standard API audit and repairs; native acceptance across all six platforms.

**Score basis:** Workflow 80%; Wasm execution 45%; API parity 25%; platform acceptance 40%. Weights 25/30/25/20 produce 47.75%, rounded to 50%. These are evidence-informed milestone estimates, not test-pass percentages or completed acceptance.
