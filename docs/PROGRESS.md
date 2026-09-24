**Completion:** ~55% — unchanged since the previous commit.

**Estimated finish:** Not yet estimable — low confidence; likely window unknown. Real helper integration, API repair and native platform acceptance still lack defensible durations.

**Changed:** [Installed signal comparisons](evidence/application-signal-policy-2026-09-24.json) now pass all 48 native/compiled comparisons across three engines on Linux x64, plus 45 focused controls. Four retained differences are repaired; peak memory was 3.45 GiB with no resource events. The full Bun application campaign has started.

**Remaining:** Shipping engine parity and callable bindings; complete standard API audit and repairs; native acceptance across all six platforms.

**Score basis:** Workflow 80%; Wasm execution 55%; API parity 30%; platform acceptance 45%. Weights 25/30/25/20 give 53%, rounded to 55%. Targeted repairs do not close full API or platform gates; no remaining gap is demonstrated fundamental.
