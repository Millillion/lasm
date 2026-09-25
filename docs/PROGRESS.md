**Completion:** ~55% — unchanged since the previous commit.

**Estimated finish:** Not yet estimable — low confidence; likely window unknown. Shipping helper integration, full API parity and native platform acceptance lack defensible durations.

**Changed:** [Fresh `.25` cold installation passes](evidence/lean-4.34.1-cold-install-2026-09-25.json) with only Node/npm and an empty tool cache on Linux x64. Managed Lean 4.34.1 compilation, cached direct execution and separately isolated deployment match native controls. Peak memory is 5.85 GiB without resource events. A separate archival resource abort was diagnosed and repaired under its unchanged cap; all evidence is retained. Broader IO/HTTP comparisons follow. Pushes await restored SSH credentials.

**Remaining:** Complete latest-release suite/API coverage; shipping engine parity and callable bindings; six-platform native acceptance.

**Score basis:** Workflow 80%; Wasm execution 65%; API parity 30%; platform acceptance 50%. Weighted result 57%, rounded to 55%. No remaining gap is demonstrated fundamental.
