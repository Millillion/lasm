**Windows ARM64 direct manifest addition — 2026-09-28.** Candidate `.45` passed
five targets; ARM64 remains blocked by the original SDK Unicode-path bug.

Run `36424279691` rejected the Windows resource-update approach before repaired
execution because the original COFF table was not uniquely preserved. No archive
was produced. The replacement appends one resource section without moving any
original section or COFF data. All eight checksum-verified originals passed local
whole-file/header, section, address and symbol-table preservation checks, adding
1 KiB each. Peak memory was 83.2 MiB under a 512-MiB guard. Nine regression tests
pass. Native Windows checksum/resource readback and execution remain required.

Remaining: validate and distribute the repaired SDK, then accept one exact npm
candidate on all six targets. README continues to mark ARM64 unsupported. No npm
publication. Completion ETA is not yet estimable.
