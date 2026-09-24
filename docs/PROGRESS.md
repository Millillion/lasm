**Completion:** ~50% — unchanged after rounding since the previous commit.

**Estimated finish:** Not yet estimable — low confidence; likely window unknown. Unresolved Deno/Bun runtime behavior and incomplete API auditing prevent a defensible milestone forecast.

**Changed:** Verified [native filesystem/console controls](evidence/application-io-native-controls-2026-09-24.json): five cases each on Linux x64/ARM64 and three on Windows x64, including 50 filesystem assertions; two POSIX-only Windows cases remain inapplicable. Deployed Wasm comparisons remain pending.

**Remaining:** Shipping pipeline and engine parity, including callable bindings; complete standard API audit and repairs; native acceptance across all six platforms.

**Score basis:** Workflow 80%; Wasm execution 50%; API parity 30%; platform acceptance 45%. Weights 25/30/25/20 produce 51.5%, rounded to 50%. Native controls are not Wasm passes.
