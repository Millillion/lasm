**Completion:** ~55% — unchanged since the previous commit.

**Estimated finish:** Not yet estimable — low confidence; likely window unknown. Real helper integration, API repair and native platform acceptance still lack defensible durations.

**Changed:** [Deno listener controls](evidence/deno-native-listener-gap-2026-09-24.json) reproduce the SIGUSR1 interoperability gap for listeners registered before or after Lean; paired SIGUSR2 controls pass. This narrows an existing open issue without closing it. The repaired source CI build has passed dependency verification and reached runtime compilation.

**Remaining:** Shipping engine parity and callable bindings; complete standard API audit and repairs; native acceptance across all six platforms.

**Score basis:** Workflow 80%; Wasm execution 55%; API parity 30%; platform acceptance 45%. Weights 25/30/25/20 give 53%, rounded to 55%. Targeted repairs do not close full API or platform gates; no remaining gap is demonstrated fundamental.
