**Completion:** ~55% — unchanged since the previous commit.

**Estimated finish:** Not yet estimable — low confidence; likely window unknown. Real helper integration, API repair and native platform acceptance still lack defensible durations.

**Changed:** [Native signal diagnostics](evidence/signal-policy-core-collector-2026-09-24.json) locate both Bun deadlines in the CI runner's core collector, even with zero core-file limits. The workflow now disables collection on its disposable runner and restores the original policy afterward; follow-up validation is pending. The full Bun application campaign continues.

**Remaining:** Shipping engine parity and callable bindings; complete standard API audit and repairs; native acceptance across all six platforms.

**Score basis:** Workflow 80%; Wasm execution 55%; API parity 30%; platform acceptance 45%. Weights 25/30/25/20 give 53%, rounded to 55%. Targeted repairs do not close full API or platform gates; no remaining gap is demonstrated fundamental.
