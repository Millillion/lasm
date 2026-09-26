**First-build DX complete in source — 2026-09-26:** The CLI explains first-time setup, reports download bytes and phases, and emits elapsed-time updates every ten seconds while compilation runs in one worker. Status stays on stderr and stops before application execution.

**Verified:** 74 focused tests passed. A real Lean 4.34.1 build, cached deployment build, plain Node run, and corrected diagnostic check passed on Linux x86-64/Node 26.10.0. Peak was 3.54 GiB; zero OOM/resource aborts. The initial diagnostic-assertion mismatch is preserved in [evidence](evidence/first-build-progress-2026-09-26.json).

The earlier Linux x86-64/ARM64 [milestone candidate](NODE_ACCEPTANCE.md) remains unchanged. New logging checks are wired into CI; repacking and native acceptance of these changes remain for the next candidate. No npm publication. Other Jordan checklist items remain open; ETA not yet estimable.
