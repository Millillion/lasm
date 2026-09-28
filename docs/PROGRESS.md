**Windows ARM64 SDK repaired and distributed — 2026-09-28.** Native run
`36426171536` passed original-failure reproduction, all eight manifest/checksum
checks, Unicode C++ thread/exception execution in both Wasm widths, reproducible
packing, fresh Unicode cache/project relocation, and offline reuse. It took
17.5 minutes and peaked at 329.3 MiB under the 4-GiB cap.

The independent streaming audit verified all 27 native programs, 149 unchanged
notices, and exact agreement with locally predicted repaired hashes. The new
174,800,072-byte tool prerelease also passed anonymous checksum verification.
Only its eight manifests and declared PE headers changed; original sections and
COFF data remain intact.

Candidate `.46` now selects this SDK. Remaining: run and retain one exact package
through all six native installed/deployment targets, then update acceptance docs.
README still identifies `.44` as the accepted five-target archive. No npm
publication. Final timing remains unverified on ARM64; completion ETA is not yet
estimable.
