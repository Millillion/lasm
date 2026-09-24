**Completion:** ~55% — unchanged since the previous commit.

**Estimated finish:** Not yet estimable — low confidence; likely window unknown. Full helper integration, API repair and native platform acceptance still lack defensible durations.

**Changed:** [Real Lean allocator and guest copies pass above 4 GiB in every engine](evidence/wasmtime-real-lean-high-allocation-2026-09-24.json), including two allocation/free cycles and arithmetic after reclamation. Sparse windows keep physical memory low; the guard released at 223 MiB with no resource events. The original pthread benchmark remains open. Pushes await restored SSH credentials.

**Remaining:** Shipping engine parity and callable bindings; complete standard API audit and repairs; native acceptance across all six platforms.

**Score basis:** Workflow 80%; Wasm execution 55%; API parity 30%; platform acceptance 50%. Weights 25/30/25/20 give 54%, rounded to 55%. Component probes and prepared CI are not full acceptance; no remaining gap is demonstrated fundamental.
