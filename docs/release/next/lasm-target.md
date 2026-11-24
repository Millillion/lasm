## Lasm.target

- **New: `Lasm.target : Lasm.Target`** (`import Lasm.Target`): the `--target` the program is built for, on every target including WASI, wasi-http and Fastly. `Target` has one constructor per target (`.node`, `.lambda`, … `.netlifyEdge`, … `.wasiHttp`, `.browser`) and `Target.name` gives the CLI name. The build stamps it in at link time; `lasm run` and a plain `lasm build` report `.node` (docs/api/decisions/0.6.md, 0.6-20; PR #388).
- **Breaking: `Lasm.JS.onEdge` is deleted.** Migration: `if ← onEdge then …` becomes `if Lasm.target == .workers then …` (or a `match Lasm.target`), with `import Lasm.Target`.
- **Breaking: `lasm package` is removed** (docs/api/decisions/0.7.md, 0.7-7). Migration: use `lasm build <Main.lean> --target X`.
