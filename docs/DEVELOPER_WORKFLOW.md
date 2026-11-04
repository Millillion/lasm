# The edit loop: `lasm dev` and Lake projects

Start with an ordinary `main` in a standalone file or a Lake project (Lean 4.35.0).
`lasm Main.lean` builds and runs it once; `lasm dev` (0.3.0) watches, rebuilds and
restarts; `lasm build Main.lean` writes the deployable `dist/` (`node dist/main.mjs`,
or another `--target`). No `lasm.json` and no Lake dependency on Lasm is needed:
`Lasm.*` libraries ship with the compiler. Every command and option is in the
[README's CLI reference](../README.md#cli-reference).

## lasm dev

`lasm dev [Main.lean]` (0.3.0; `npm run dev` in the server
templates) is the edit loop:

```text
$ npm run dev
[lasm dev] Watching 7 files in . (events); target node, dev profile. Ctrl+C stops.
[lasm dev] Building Main.lean
[lasm dev] Built in 9.7 s (Lean 1.4s · C 2.1s · link 5.7s · output 0.5s)
Listening on http://0.0.0.0:3000 (Hono)
[lasm dev] App.lean changed; rebuilding
[lasm dev] Built in 1.9 s (Lean 1.0s · C 0.1s · link 0.6s · output 0.2s)
Listening on http://0.0.0.0:3000 (Hono)
[lasm dev] App.lean changed; rebuilding
App.lean:6:2: error: Type mismatch
    6 |   (42 : Nat)
      |   ^
…
[lasm dev] Build failed after 0.4 s; the last good build keeps running. Fix the error and save.
```

- **What it watches**: every `.lean` file of the project (outside `.lake`,
  `node_modules`, `dist`, `build` and dot directories), `lakefile.toml`/`.lean`,
  `lean-toolchain`, `lake-manifest.json`, `package.json` and `package-lock.json`.
  Recursive file events where the platform has them, else a 1 s poll. A save
  that does not change a file's content does not rebuild.
- **How it builds**: the dev profile in one long-lived build worker, so loaded
  code, verified tools and in-memory caches carry over. A rebuild reuses the
  previous build's initialization plan and links only the runtime library
  members that build kept (accepted when the program imports nothing new; else
  it links in full and records the new set). Lake's module queries and the
  Lasm.JS binding check are reused while imports, the Lake configuration and
  the npm packages are unchanged.
- **What it runs**: `--target node` (default under Node) restarts
  `node dist/main.mjs` after each good build (SIGTERM, then SIGKILL after 5 s);
  `bun` and `deno` run the portable build with that runtime. Edge targets
  (`workers`, `vercel-edge`, `netlify-edge`, `deno-deploy`, `supabase-edge`)
  rebuild their output directory only (edge dev profile: Binaryen lowers
  memory64 but does not optimize); run the platform's own local server
  yourself. Lasm never starts platform CLIs and never opens a browser.
  `--target browser` runs the browser target's dev server (static files and
  live reload, `src/browser/browser-dev.mjs`; docs/BROWSER.md) once that
  target is part of the release.
- **Options**: `--release` (release profile), `--no-run`, `--verbose`,
  `-- args` for `main`; browser: `--port`, `--host`, `--output`, `--no-watch`;
  `rs` + Enter rebuilds.

Measurements: [BENCHMARKS.md, "Edit loop"](BENCHMARKS.md#edit-loop-lasm-dev).

The earlier Lean 4.32 callable-library path (`lasm build lasm.json`) was removed on
2026-11-03; the published CLI had already refused it (docs/DECISIONS.md).
