# Unreleased

## The CLI (Stage 0, milestone 0.7)

- **Breaking: `lasm build` takes one Lean source; the output is named only with
  `--output`** (docs/API_DECISIONS.md 0.7-2). `lasm build Main.lean dist` now
  fails with `Unexpected argument "dist": lasm build takes one Lean source. Name
  the output with --output.` Migration: `lasm build Main.lean dist` →
  `lasm build Main.lean --output dist`.

- **Breaking: with a function platform, `--output` names the package**
  (0.7-5). `lasm build Main.lean --target lambda --output app.zip` writes
  `app.zip`; before, `--output` named the Node build and the package went to
  its default place. As with the edge, WASI and browser targets since 0.5.0,
  the Node build a package is made from now stays in the build cache
  (`.lake/lasm/`), so `lasm build --target lambda` (`lambda-edge`, `vercel`,
  `netlify`, `azure`, `gcf`) no longer writes `dist/`. Migration: drop
  `--output` to keep the default package place, or pass the package's path;
  to also keep a Node build, run `lasm build Main.lean` (writes `dist/`) and
  `lasm package --target lambda`.

- **Breaking: `lasm version` is gone; `lasm --version` and `lasm -v` print the
  version** (0.7-1). Migration: `lasm version` → `lasm --version`.

- **One help text** (0.7-1): `lasm --help` prints the same usage whether or not
  the CLI is a release candidate, with every command, the targets of
  `lasm build` and `lasm package`, and what `--output` names.

- **The same option rules in every command** (0.7-23): `lasm dev` refuses `--dev`
  with `--release` (`Choose one of --dev and --release`) and a repeated
  `--target`, `--port`, `--host` or `--output` (`Specify --port only once`), as
  `lasm build` does; `lasm init` refuses a repeated `--template`. An unknown
  `lasm dev --target`, `lasm init --template` or `lasm init --deploy` value
  names the closest one, as `lasm build --target` does:
  `lasm dev --target worker` → `… not "worker" (did you mean --target workers?)`.
  Migration: give each option once.

- `lasm dev --help` lists `--verbose`, `--dev` and the `supabase-edge` target
  (0.7-6).

- `npm create @lasm` with no directory prints a usage line that no longer lists
  only four templates; `npx @lasm/cli init --help` lists them all.
