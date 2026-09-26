**Milestone:** Basic Lean-on-Node installation and deployment on native Linux x86-64 and ARM64. In progress; the earlier full-program percentage does not apply.

**Estimated finish:** Not yet estimable; the new candidate and both native installed-workflow results remain unverified.

**Changed:** Added a Linux-only CI runtime build and a checksum-addressed handoff for installed-package acceptance. It uses a standard public runner and the existing serialized cache budget guard (8 GiB ceiling, below the included 10 GiB). Node/Lean version checks can now run independently of deferred engines. Syntax and whitespace checks passed; the new source build and installed candidate are not yet validated. Deferred implementations and earlier evidence remain preserved.

**Remaining:** Package and exercise the exact basic CLI/README workflow on Linux x86-64; prove the same Node/npm-only installation and deployment on native Linux ARM64; produce the measured support contract and acceptance report.
