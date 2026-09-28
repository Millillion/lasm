**Native Windows ARM64 tools connected — 2026-09-28.** Run `36397277364`
completed Lean 4.34.1 compilation, native execution, relocation and retention.
The build took 169.8 minutes with a 2.54-GiB peak. Streaming audits checked all
15 native binaries and matching notices; anonymous retrieval verified the public
778-MB archive. Local audit/download peaks were 87.1/35.5 MiB under 512-MiB caps.
The completed compiler cache is retained separately.

The source catalog now connects that compiler and its required source/notices
companion. Candidate `.45` is configured to test one identical archive on Linux,
macOS and Windows, each x64/ARM64. Artifact validation, workflow structure, syntax
and whitespace checks passed. README retains `.44` as the accepted five-target
release and clearly marks the pending source changes.

Remaining gates: pack `.45`, pass all six native installed/deployment checks,
retain its receipt and update the support contract. Broader API parity is deferred.
No npm publication. Completion ETA is not yet estimable.
