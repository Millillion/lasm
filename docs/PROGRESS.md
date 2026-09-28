**Windows x64 byte controls passed — 2026-09-28.** The native Windows CRT now
preserves stdin/stdout/stderr bytes and the embedding Node process's descriptors.
The new checks passed on x64; ARM64 is running them. Eight local checks passed
under a 512-MiB cap, peaking at 68.4 MiB. Candidate `.43`'s original CRLF failure
is preserved; no expected output was normalized.

The next candidate is `.44`. Its version is passed explicitly through packing,
cache retention and every reusable consumer; all 11 workflow input contracts
passed. The unchanged `.43` passed Linux x64/ARM64 and macOS ARM64; macOS x64
is still running. The native ARM64 Lean distribution build continues.

README reviewed: `.37` remains the accepted Linux/macOS release; Windows remains
unsupported. Remaining gates: native controls, repaired installed candidate,
complete ARM64 tools and one candidate across the full matrix. No npm publication.
Completion ETA is not yet estimable.
