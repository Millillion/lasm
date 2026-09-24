**Completion:** ~50% — unchanged after rounding since the previous commit.

**Estimated finish:** Not yet estimable — low confidence; likely window unknown. Unresolved Deno/Bun runtime behavior and incomplete API auditing prevent a defensible milestone forecast.

**Changed:** The [small helper probe passes](evidence/wasmtime-helper-smoke-2026-09-24.json) in stock Node/Deno/Bun: memory64, shared-memory worker access, exceptions and JS callbacks; peak 148 MiB. Added pending concurrent-wait and legacy-exception probes. Full Lean integration remains unverified; the Deno application campaign continues.

**Remaining:** Shipping pipeline and engine parity, including callable bindings; complete standard API audit and repairs; native acceptance across all six platforms.

**Score basis:** Workflow 80%; Wasm execution 50%; API parity 30%; platform acceptance 45%. Weights 25/30/25/20 produce 51.5%, rounded to 50%. Synthetic helper success is not Lean acceptance.
