**Milestone complete — 2026-09-26:** Basic ordinary Lean-on-Node installation and deployment passed on native Linux x86-64 and ARM64 in [CI](https://github.com/Millillion/lasm/actions/runs/36221743804).

Both used the same reproducible candidate (`0b2451cd…9e9e9374`), Node 26.10.0/npm 11.19.1 and managed Lean 4.34.1. Each passed 24 command checks, three startup samples, six recovery controls and three independently copied deployments. All 83 focused controls passed. Peaks were 4.48/4.53 GiB; zero OOM or resource abort on either accepted run.

The exact tested tarball is retained in an unpublished draft and downloaded locally with SHA-256 verification. [Acceptance report](NODE_ACCEPTANCE.md) records identities, measurements, isolation and prior failures. All 25 milestone checklist items are complete.

No npm publication occurred. Broader language/library parity, filesystem/HTTP, other operating systems and engines remain deferred.
