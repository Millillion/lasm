**Completion:** ~50% — unchanged after rounding since the previous commit.

**Estimated finish:** Not yet estimable — low confidence; likely window unknown. Unresolved Deno/Bun runtime behavior and incomplete API auditing prevent a defensible milestone forecast.

**Changed:** Prepared a [bounded managed-helper experiment](evidence/wasmtime-helper-preflight-2026-09-24.json) for Bun's memory64/shared-memory gaps. JavaScript/Python syntax and CI structure pass; C compilation and execution remain pending. The existing Deno application suite continues separately.

**Remaining:** Shipping pipeline and engine parity, including callable bindings; complete standard API audit and repairs; native acceptance across all six platforms.

**Score basis:** Workflow 80%; Wasm execution 50%; API parity 30%; platform acceptance 45%. Weights 25/30/25/20 produce 51.5%, rounded to 50%. Probe preparation is not application acceptance.
