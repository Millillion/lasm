**Completion:** ~50% — unchanged after rounding since the previous commit.

**Estimated finish:** Not yet estimable — low confidence; likely window unknown. Unresolved Deno/Bun runtime behavior and incomplete API auditing prevent a defensible milestone forecast.

**Changed:** The [first helper experiment](evidence/wasmtime-helper-first-attempt-2026-09-24.json) verified official downloads and compiled the C helper, then stopped at an invalid FFI declaration before guest execution. Corrected the buffer declaration; follow-up CI is pending. Deno's separate application campaign continues.

**Remaining:** Shipping pipeline and engine parity, including callable bindings; complete standard API audit and repairs; native acceptance across all six platforms.

**Score basis:** Workflow 80%; Wasm execution 50%; API parity 30%; platform acceptance 45%. Weights 25/30/25/20 produce 51.5%, rounded to 50%. Probe preparation is not application acceptance.
