**Completion:** ~55% — unchanged since the previous commit.

**Estimated finish:** Not yet estimable — low confidence; likely window unknown. Full helper integration, API repair and native platform acceptance still lack defensible durations.

**Changed:** [Real guest pthread creation, TLS, execution, exit and join pass in all engines](evidence/wasmtime-real-lean-pthreads-2026-09-24.json), including two 4 GiB stacks and allocation reuse. Earlier controls still pass; peak memory is 254 MiB without resource events. Verified worker prerequisites raise the execution assessment; full benchmark acceptance remains open. Pushes await restored SSH credentials.

**Remaining:** Shipping engine parity and callable bindings; complete standard API audit and repairs; native acceptance across all six platforms.

**Score basis:** Workflow 80%; Wasm execution 60%; API parity 30%; platform acceptance 50%. Weights 25/30/25/20 give 55.5%, rounded to 55%. Component probes and prepared CI are not full acceptance; no remaining gap is demonstrated fundamental.
