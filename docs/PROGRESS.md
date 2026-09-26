**Bundle-size reduction completed — 2026-09-26:** Candidate `.34` reduces Hello from 180.5 MB to 3.21–3.22 MB through linker reachability and architecture-specific packaging. JSON is 2.88–2.90 MB; filesystem 3.30–3.31 MB; local HTTP 4.18 MB. A thousand unused functions produce identical Wasm.

Both native Linux x86-64 and ARM64 passed 49 command checks and eight isolated deployments with the same archive. All 113 focused tests and 20 local HTTP checks pass. Native peaks stayed below 4.4 GiB with zero OOM. The earlier ARM64 resource stop remains recorded; CI-only cache advice resolved it.

The exact candidate is retained in an unpublished draft and its local download is SHA-256 verified. See [BUNDLE_SIZE.md](BUNDLE_SIZE.md). No npm publication. The 2.39 GB runtime-evaluation fallback remains broad, not a minimized compiler distribution. Cache reduction and other unchecked Jordan priorities remain future work.
