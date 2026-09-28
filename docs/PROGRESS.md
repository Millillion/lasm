**Native Unicode failure reproduced — 2026-09-28.** Candidate `.45` passed Linux
x64/ARM64 and Apple Silicon; Intel Mac and Windows x64 results are still being
collected. Windows ARM64 failed its cold build on a Unicode path, without a
resource abort. The native Lean distribution itself remains verified.

Focused run `36420742640` reproduced the SDK defect independently: identical
Wasm bytes pass under ASCII paths and fail under Unicode paths. The proposed
per-executable UTF-8 manifest repair stopped at its PE preservation assertion,
before repaired execution. Detailed before/after section identities are now
logged to distinguish metadata changes from changes to executable code/data.
No repaired SDK has been accepted or published; original bytes and failures are
preserved. README still marks Windows ARM64 unsupported.

Remaining: resolve and validate the SDK repair, distribute audited bytes, and
accept one exact npm candidate on all six targets. No npm publication.
Completion ETA is not yet estimable.
