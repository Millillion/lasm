## The CLI (Stage 0, milestone 0.7)

- **Breaking: `@lasm/cli` exports only its public entry points**
  (docs/api/decisions/0.7.md, 0.7-19): `@lasm/cli/vite`, `@lasm/cli/vite/client`,
  `@lasm/cli/package.json` and the new `@lasm/cli/lean`. The wildcard export is
  gone, so `@lasm/cli/src/…` imports no longer resolve. `@lasm/cli/lean`'s
  `lasmLean(source)` returns Lasm's own `lean` and `lake`, the Lean version and
  Lean's library directory, for checking a project's proofs with the Lean the
  build uses. Migration: `import('@lasm/cli/src/managed-lean.mjs')` and
  `provisionLean(file, { modules: 'extended', progress })` →
  `import('@lasm/cli/lean')` and `lasmLean(file, { progress })`.
