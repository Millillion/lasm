**Completion:** ~55% — unchanged since the previous commit.

**Estimated finish:** Not yet estimable — low confidence; likely window unknown. Real helper integration, API repair and native platform acceptance still lack defensible durations.

**Changed:** The [unchanged excluded signal application](evidence/upstream-signal-2026-09-24.json) now matches native in all three installed engines on Linux x64 after repairing Deno's unwanted SIGUSR1 debugger activation. Nine focused controls pass without skips; maximum application memory was 3.45 GiB without resource events. Native signal CI is prepared, not yet validated.

**Remaining:** Shipping engine parity and callable bindings; complete standard API audit and repairs; native acceptance across all six platforms.

**Score basis:** Workflow 80%; Wasm execution 55%; API parity 30%; platform acceptance 45%. Weights 25/30/25/20 give 53%, rounded to 55%. Targeted repairs do not close full API or platform gates; no remaining gap is demonstrated fundamental.
