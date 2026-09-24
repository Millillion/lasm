**Completion:** ~55% — up from ~50% at the previous commit; the weighted score rose from 51.5% to 53%, crossing the five-point rounding boundary.

**Estimated finish:** Not yet estimable — low confidence; likely window unknown. Remaining engine integration, API repair and platform milestones still lack defensible durations.

**Changed:** The installed [Deno compiled-application campaign](evidence/upstream-applications-deno-r1-2026-09-24.json) completed: 97 passed, four upstream-disabled, zero failures; original sources remain intact with no resource events. [Native filesystem controls](evidence/filesystem-errors-native-2026-09-24.json) also pass on three platforms.

**Remaining:** Shipping engine parity and callable bindings; complete standard API audit and repairs; native acceptance across all six platforms.

**Score basis:** Workflow 80%; Wasm execution 55% (previously 50%); API parity 30%; platform acceptance 45%. Weights 25/30/25/20 give 53%, rounded to 55%. This credits one application category on Linux x64, not native compiler passes.
