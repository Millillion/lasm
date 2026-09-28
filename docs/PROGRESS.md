**Windows ARM64 Unicode repair — 2026-09-28.** Candidate `.45` passed the other
five targets; Windows ARM64 failed the cold Unicode-path build without a resource
abort. Native Lean itself remains verified. No six-target candidate is accepted.

Diagnostic run `36422260090` showed that Windows preserves every section byte
while moving only discardable relocation/debug metadata when the manifest grows.
The preservation check now resolves debug names, verifies the relocated directory,
and keeps code/data addresses, bytes and loader settings fixed. Seven regression
checks pass locally; native repaired execution remains unverified.

The SDK workflow can repackage the original verified archive, requiring original
failure, repaired Unicode execution, unchanged files, reproducible archives,
fresh Unicode cache/project relocation and offline reuse before retaining a draft.
Fresh source bootstraps apply the same repair and Unicode controls. README still
marks ARM64 unsupported.

Remaining: native repair/distribution, then one exact candidate on all six targets.
No npm publication. Completion ETA is not yet estimable.
