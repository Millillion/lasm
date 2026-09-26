**Milestone:** Basic Lean-on-Node installation and deployment on native Linux x86-64 and ARM64. In progress; the earlier full-program percentage does not apply.

**Estimated finish:** Not yet estimable; the new candidate and both native installed-workflow results remain unverified.

**Changed:** The 65 MB local candidate packs reproducibly. Installed `npm`/`npx` checks passed for Hello World, build-only output, arguments, exit codes and a local Lake import, using existing verified tools. Kernel-denied offline reuse and a separately copied Node deployment also passed; output matches native Lean. The 42 focused checks passed. No OOM or resource abort occurred. Detailed evidence is in [the warm-install report](evidence/node-linux-warm-install-2026-09-26.json); it does not establish cold installation or ARM64 acceptance.

**Remaining:** Package and exercise the exact basic CLI/README workflow on Linux x86-64; prove the same Node/npm-only installation and deployment on native Linux ARM64; produce the measured support contract and acceptance report.
