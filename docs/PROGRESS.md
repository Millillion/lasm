**Both Windows byte controls passed — 2026-09-28.** Native x64 and ARM64 passed
byte-exact standard/file IO and complete online/offline isolation. Byte tests
peaked at 132.4/133.2 MiB under 512-MiB caps; eight local checks peaked at
68.4 MiB. The `.43` CRLF failure is preserved; expectations remain unchanged.

Candidate `.44` packed twice identically: 65,337,349 bytes, SHA-256
`999389fdd7c27e3ef346977ece892456dd6367b961ff107657b1242bc56cd146`.
Its complete Windows x64 install test is running. The unchanged `.43` passed
Linux x64/ARM64 and macOS ARM64; verified reports are committed. macOS x64 and
the native ARM64 Lean distribution build continue.

README reviewed: `.37` remains the accepted Linux/macOS release; Windows remains
unsupported. Remaining gates: native controls, repaired installed candidate,
complete ARM64 tools and one candidate across the full matrix. No npm publication.
Completion ETA is not yet estimable.
