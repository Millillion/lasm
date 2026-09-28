**Three `.43` platforms passed — 2026-09-28.** Linux x64/ARM64 and macOS ARM64
passed the exact candidate, including eight independent deployments each. macOS
x64 remains in progress. Windows x64's corrected traversal passed native junction
and isolation controls and reached installed application tests.

The ARM64 Lean build continues. Packaging now preserves upstream `LICENSES`.
A notice-only repair route can complete the already-running bootstrap's archive
without recompiling: five local controls passed, including byte/mode/hardlink
preservation and bad-checksum rejection, at 18.2 MiB. The repaired archive must
pass fresh native Lean/Lake checks before retention; it is not yet validated.

README reviewed: `.37` remains the accepted Linux/macOS release; Windows remains
unsupported. Remaining gates: native results, complete ARM64 distribution, then
one candidate across the full matrix. No npm publication. Completion ETA is not
yet estimable.
