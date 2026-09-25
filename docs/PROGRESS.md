**Completion:** ~55% — unchanged since the previous commit.

**Estimated finish:** Not yet estimable; complete latest-release API/suite coverage and five native platform validations remain unfinished.

**Changed:** [Installed `.31` preserves Linux working-directory bytes](evidence/lean-4.34.1-raw-working-directory-2026-09-25.json): 18 relocated Node/Deno/Bun cases match 36 native controls, and 23 regression checks pass. The repair covers startup, both cwd APIs, relative filesystem operations, Deno worker cleanup and signal initialization. Earlier failures remain recorded. Peak memory is 3.57 GiB without resource events.

**Remaining:** Complete language/API differentials; integrate and validate the shipping helper; finish all six native build/install platforms. Pushes await restored SSH credentials.

**Score basis:** Workflow 80%; Wasm execution 65%; API parity 30%; platform acceptance 50%. Weighted result 57%, rounded to 55%. No remaining gap is demonstrated fundamental.
