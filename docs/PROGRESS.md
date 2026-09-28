**Native validation in progress — 2026-09-28.** Candidate `.43` packed twice
identically (65.34 MB; SHA-256 `578b16cb…3af428`). Windows x64 installed checks and
both macOS checks are running against those exact bytes. The Linux recheck exposed
an undeclared reusable-workflow input before any test started. The input and
archive selection are corrected; all local reusable call contracts now validate.
This changes maintainer orchestration, not the candidate.

The ARM64 retry passed native archive controls and is provisioning its seed.
It uses two bounded build jobs and verified completed compiler-cache checkpoints;
the prior linking deadline remains recorded separately.

README reviewed: `.37` remains accepted on Linux/macOS; Windows is unsupported.
Next: native installed results, ARM64 compiler distribution, then the complete
matrix. Evidence: [Windows implementation](WINDOWS_TOOLCHAINS.md). No npm publication.
Completion ETA is not yet estimable.
