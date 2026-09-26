**Bundle-size reduction — 2026-09-26:** Candidate `.34` passed 49 command checks and eight independent deployments on both native Linux x86-64 and ARM64. Hello is 3.21–3.22 MB, JSON 2.88–2.90 MB, filesystem 3.30–3.31 MB. A thousand unused functions produce identical Wasm. Local HTTP passed 20 tests; 113 focused tests pass.

The 2.39 GB runtime-evaluation fallback also passed. It is not a minimized compiler distribution. Both native rechecks stayed below 4.4 GiB with zero OOM or resource abort. The earlier ARM64 resource stop remains recorded; CI-only cache advice resolved it without changing product bytes or memory limits.

**Remaining:** Retain the candidate and finalize evidence. Retention now targets its own commit and supports the runner's newer GitHub CLI when parsing captured logs. Native checks are complete and will not rerun. No npm publication.
