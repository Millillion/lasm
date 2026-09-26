**Completion:** ~55% — unchanged since the previous commit.

**Estimated finish:** Not yet estimable; complete suite/API coverage, shipping helper integration and five native platform validations remain unfinished.

**Changed:** The [Bun continuation completes all previously unrun application registrations](evidence/lean-4.34.1-upstream-applications-bun-combined-2026-09-26.json). Its 25 passes and one original exclusion bring combined coverage to 96 passes, four exclusions and the preserved `const_fold` failure. All 7,673 original entries and the frozen harness remain unchanged. Peak memory is 5.58 GiB without resource events; minimum free disk is 4.48 GiB. This is combined coverage, not a complete category pass.

**Remaining:** Complete language/API and callable-library parity; ship and validate general imports, descriptors and runtime cleanup; finish all six native build/install platforms.

**Score basis:** Workflow 80%; Wasm execution 65%; API parity 30%; platform acceptance 50%. Weighted result 57%, rounded to 55%. No remaining gap is demonstrated fundamental.
