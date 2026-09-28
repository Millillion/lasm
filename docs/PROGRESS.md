**Windows cold and Lake phases passed — 2026-09-28.** Candidate `.44` printed
byte-exact Hello output, reused its cache, and built/ran the local Lake project.
Hello deployment: 3,042,522 bytes. The run then failed preparing the independent
native C oracle, before offline and copied-deployment checks. Its 1.47-GiB peak
was below the resource stop.

A maintainer-only sysroot correction is prepared; a native differential must
confirm the old launch failure and successful compilation of identical C. The
product archive is unchanged. Linux and macOS x64/ARM64 all passed `.43`.
Native ARM64 Lean compilation continues.

README reviewed: `.37` remains the accepted Linux/macOS release; Windows remains
unsupported. Remaining gates: native oracle control, complete Windows acceptance,
ARM64 tool distribution, then one candidate across the full matrix. No npm
publication. Completion ETA is not yet estimable.
