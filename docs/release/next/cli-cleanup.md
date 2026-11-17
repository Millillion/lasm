## The CLI (Stage 0, milestone 0.7)

- **Breaking: `lasm build lasm.json` is refused as not a Lean source**
  (`Expected a Lean source file (Main.lean), not lasm.json`), like any other
  non-`.lean` input (0.7-15). The `lasm.json` pipeline was retired on
  2026-11-03; only its stale message is gone. No migration: such builds already
  failed.

- `lasm package --help` lists the `browser` target (0.7-7). `npm create @lasm`
  no longer reads the CLI's files for its template list (0.7-20). The README's
  environment variables list `LASM_DEV_SERVER`, which `lasm dev` sets (0.7-14).
