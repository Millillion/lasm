## The CLI (Stage 0, milestone 0.7)

- **Every command words its errors the same way** (docs/api/decisions/0.7.md,
  0.7-17): an unknown name is `Unknown <kind> "x" (did you mean …?). Choose
  one of: …` in `lasm build`, `lasm dev`, `lasm package` and `lasm init`
  (`lasm dev --target`, `lasm init --deploy` and `lasm package --target`
  changed); `lasm init --deploy` without a value says `--deploy requires a
  value`; `lasm dev Main.txt` says `Expected a Lean source file (Main.lean), not
  Main.txt`, as `lasm build` does. Exit status: 0, 1 for every Lasm error, or
  the program's own status under `lasm run`. Migration: none,
  unless a script matched the old texts.
