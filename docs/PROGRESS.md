**Windows output mismatch fixed in source — 2026-09-28.** Candidate `.43` built
and ran Hello on Windows x64, but CRT text mode changed LF to CRLF. Native Lean
uses binary standard streams. Lasm now configures its owned descriptors the same
way, preserving the embedding process's modes. Eight local checks passed under
a 512-MiB cap, peaking at 68.4 MiB. Native Windows controls and a new packed
candidate remain required; expected outputs remain byte-exact.

The unchanged `.43` candidate passed Linux x64/ARM64 and macOS ARM64; macOS x64
is still running. Native ARM64 Lean compilation also continues; its distribution
needs the prepared notice repair and fresh native relocation checks.

README reviewed: `.37` remains the accepted Linux/macOS release; Windows remains
unsupported. Remaining gates: native controls, complete ARM64 tool distribution,
then one candidate across the full matrix. No npm publication. Completion ETA
is not yet estimable.
