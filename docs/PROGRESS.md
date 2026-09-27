**Windows path-alias defect corrected — 2026-09-27.** Candidate `.38` installed and provisioned native Lean, then rejected `Init.lean`: Node retained a DOS short-path alias while Lean returned the full path. Application source discovery now canonicalizes existing Windows paths through the OS. A filesystem-alias regression joins Linux and Windows CI; `.39` will validate the product change. The `.38` failure is preserved.

Both Windows architectures passed all prerequisite controls. The native ARM64 SDK archive audit passed below 70 MB peak memory; native Lean is still building. The audit uses read-only local streaming with unchanged CI permissions.

README reviewed against CLI, prerequisites and runtime restrictions: retained `.37` remains the accepted Linux/Mac candidate; Windows remains unsupported pending installed acceptance. Next: `.39` Windows x64 acceptance and ARM64 distribution/installation. No npm publication. Completion ETA is not yet estimable.
