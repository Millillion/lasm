# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Breaking changes

- **`--output` names the deployable directory for edge, WASI and browser targets.** `lasm build Main.lean --target workers --output DIR` (likewise `bun`, `deno`, `deno-deploy`, `supabase-edge`, `wasi`, `wasi-http`, `fastly`, `browser`) now writes that target's directory to `DIR`. Without `--output` each target writes its usual directory in the project (`workers/`, `bun/`, `wasi/`, …), and no Node build is written to `dist/`: the Node build these targets relink stays in the build cache. `vercel-edge` and `netlify-edge` refuse `--output`, since the platform fixes their layout. `node` and the function platforms (`lambda`, `vercel`, …) are unchanged.

  Migration:
  - Drop `--output` from platform builds that used it to move the Node build out of the way (`lasm build Server.lean --target workers --output dist/server` → `lasm build Server.lean --target workers`), or keep it if you want the platform directory there and update your platform config (for example `main` in `wrangler.toml`).
  - If you ran or packaged the `dist/` that a platform build wrote, build it explicitly: `lasm build Main.lean --target node` (or `lasm build Main.lean` under Node).
  - Delete a stale Node build left at a platform `--output`; Lasm refuses to replace it and says so.

## Fixes

- **Edge and browser: a C-stack overflow is reported as one.** When a program exhausts the edge build's 1 MiB C stack (for example deep recursion with large frames), the instance now stops with "Stack overflow detected: Lean exhausted the edge profile's 1 MiB C stack (WebAssembly linear memory)" instead of "memory access out of bounds". The original trap is the error's `cause`. Other traps are unchanged, and there is no cost per call (#115).
