**Native ARM64 build passed; retention retry needed — 2026-09-28.**
Run `36380911268` built and relocated native Windows ARM64 Lean/Lake, verified
15 executable/DLL identities, and passed execution/C generation. Peak memory was
2.53 GiB without a resource abort. A compiler-cache draft request failed; the
following distribution-retention step was skipped, so neither archive survived.

Retention now targets existing `main`, checks actual draft storage before building,
and saves a successful distribution independently before the cache. The retry
also includes upstream notices. README reviewed: ARM64 remains unsupported until
distribution and installed acceptance pass.

Candidate `.44` passed Windows x64, both Linux architectures and macOS ARM64;
Intel macOS and combined retention remain pending. Then finish native ARM64
distribution and accept one candidate across all six targets. No npm publication.
Completion ETA is not yet estimable.
