**Bundle-size reduction — 2026-09-26:** Candidate `.34` passed all 49 command checks and eight independent deployments on both native Linux x86-64 and ARM64. Hello is 3.21–3.22 MB, JSON 2.88–2.90 MB, filesystem 3.30–3.31 MB. A thousand unused functions produce identical Wasm. Local HTTP passed 20 tests; 113 focused tests pass.

The 2.39 GB runtime-evaluation fallback also passed, preserving dynamic behavior. It remains deliberately broad and is not a minimized compiler distribution. Both native rechecks stayed below 4.4 GiB with zero OOM or resource abort. The earlier ARM64 resource stop remains recorded; CI-only advice of completed comparison files resolved it without changing product bytes or memory limits.

**Remaining:** Retain the unchanged candidate and finalize evidence. Draft retention hit GitHub's historical-workflow-commit permission rule; retention now targets its own commit and verifies the already successful native reports. No npm publication.
