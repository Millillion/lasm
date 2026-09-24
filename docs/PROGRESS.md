**Completion:** ~50% — unchanged after rounding since the previous commit.

**Estimated finish:** Not yet estimable — low confidence; likely window unknown. Unresolved Deno/Bun runtime behavior and incomplete API auditing prevent a defensible milestone forecast.

**Changed:** The [native IO decoder CI](evidence/io-error-ci-passed-2026-09-24.json) passes on Linux x64, Linux ARM64 and Windows x64 after the repair: 221 Linux cases per architecture and 168 Windows cases.

**Remaining:** Shipping pipeline and engine parity, including callable bindings; complete standard API audit and repairs; native acceptance across all six platforms.

**Score basis:** Workflow 80%; Wasm execution 50%; API parity 30%; platform acceptance 45%. Weights 25/30/25/20 produce 51.5%, rounded to 50%. Scores are unchanged; decoder coverage is narrower than complete API/platform acceptance.
