**Windows x64 passed — 2026-09-28.** Candidate `.44` passed Node/npm-only cold
installation, local Lake imports, offline reuse, recovery/invalidation, runtime
restrictions and eight copied deployments. Native outputs match exactly. Hello
deploys in 3,042,522 bytes; peak committed memory was 2.62 GiB within the guard.
Evidence: run `36389214996`.

The same archive is running Linux (`36392920262`) and macOS (`36392911964`)
regressions on both architectures. ARM64 Lean is still compiling. The public
native ARM64 SDK passed a fresh consumer; the source/notices companion is public
and checksum-verified, awaiting the compiler's dependency identity check.

README reviewed and updated: `.37` remains the available Linux/macOS archive;
Windows x64 `.44` passed, ARM64 remains unverified. Remaining gates: finish `.44`
regressions/retention, distribute native ARM64 Lean, then accept one candidate
across all six targets. No npm publication. Completion ETA is not yet estimable.
