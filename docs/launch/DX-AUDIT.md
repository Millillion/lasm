# Launch DX audit (2026-10-26)

A newcomer's walk through every `lasm init` template with the CLI from the
`launch` branch (merged up to `479edb9`), following the README and
[GETTING_STARTED](../GETTING_STARTED.md) as written. Each step ran from a clean
directory, one heavy build at a time under the repository's bounded runner
(`scripts/full-lean/run-bounded.mjs`, 8 GiB cap, one build job), with `CI=1` and
no browser or platform CLI. The maintainer host already had Lasm's tool cache, so
first builds below exclude the one-time download (CI measures that: 24 s on the
Linux runner, [BENCHMARKS.md](../BENCHMARKS.md)).

How the source CLI stood in for the npm package: `lasm init` from the worktree,
then the project's dev dependency pointed at the worktree (`file:`), with the
retained Node and edge runtimes supplied through `LASM_APPLICATION_RUNTIME` and
`LASM_EDGE_RUNTIME` (what the published package carries in `targets/`).

Severity: **high** = a newcomer is likely to hit it and lose time or trust;
**medium** = confusing or noisy but recoverable; **low** = polish.

## Results per template

| Template | `npm install` | First `npm run dev` until listening | Edit → rebuilt and restarted | Notes |
| --- | --- | --- | --- | --- |
| `plain` | 0.3 s | 16 s (build and run, `Hello, Ada, from Lean!`) | — (`lasm Main.lean`, not a watcher) | `npm run build` 14 s, `dist/` 8.5 MB, `npm start -- Bob` works |
| `express` | 1.7 s | 25 s | — | `/hello/Ada` correct |
| `hono` | 1.1 s | 24 s | 2.4 s (`Built in 2.4 s`) | Watcher stops after a rename-save (H1) |
| `fastify` | 2.3 s | 25 s | 3.7 s; type error shown with file, line and caret in 0.5 s; last good server kept answering | |
| `std-http` | 0.3 s | 26 s | — | |
| `fetch` (0.3.0) | 0.3 s | 23 s | 2.7 s | `--target wasi`: 0.76 MiB module; JSON not escaped (M5) |
| `web` (0.3.0) | 0.3 s | about 30 s | 4.6 s (first edit) | Type error shown; server prints `127.0.0.1`, README says `localhost` |
| `fullstack` (0.3.0) | 0.3 s | 49 s (two programs) | 5.4–7.7 s for a `Shared.lean` edit (both outputs) | SSR page, `addTodo` valid (200) and blank (400 `Write something first.`), `npm run build` 80 s, `npm start`, `build:workers` 37 s all work |

All edit timings are on the maintainer host with one build job; CI's numbers
(1.6–1.8 s steady state on the Linux runner) are in BENCHMARKS.md. A deliberate
type error and a misspelled `@[js]` binding were tried on top of the templates
(see below).

## Findings

### High

- **H1 (src: `src/dev.mjs` `watchProject`). `lasm dev` stops seeing a file after
  one atomic save.** Editors and tools that save by writing a temporary file and
  renaming it over the original (Vim's default `backupcopy=auto` in many setups,
  JetBrains "safe write", `sed -i`, many formatters and AI coding tools) trigger one
  rebuild; every later change to that file, including in-place writes, is ignored
  until `lasm dev` restarts. Reproduced with Node 24.13.1 on Linux: Node's
  `fs.watch(dir, { recursive: true })` reports the first rename and then nothing for
  that path; a non-recursive `fs.watch` on the directory keeps reporting. Fix
  options: watch each project directory non-recursively (re-arming on directory
  events), or keep the recursive watcher and fall back to content snapshots
  (`snapshot`/`changedFiles` already exist) on every event and on a 1 s poll.
  This undercuts the launch's "2 s edit loop" claim for a large share of editors.
- **H2 (docs, fixed). GETTING_STARTED said `@lasm/cli` was not on npm** and told
  readers to get a candidate tarball from a maintainer. Rewritten for the published
  0.1.0/0.2.0 with 0.3.0 marks; the tarball section is gone.
- **H3 (docs, fixed). README contradicted the release.** "Node.js is the only
  supported JavaScript runtime", "no browsers, other JavaScript runtimes or isolate
  platforms" in Known limitations, `fastify` "after 0.2.0, on branch `dx`", a
  duplicated "New project" row and a maintainer tarball section. Rewritten (see
  README).
- **H4 (design, report). No editor support for `Lasm.*` imports.** Every 0.3.0
  template's `Main.lean`/`Client.lean`/`Server.lean` imports `Lasm.UI`,
  `Lasm.Fetch` or `Lasm.RPC`, which ship inside Lasm, so the Lean VS Code extension
  shows an unknown-import error on line 1 of the file a newcomer opens first, and
  no hover, completion or go-to-definition for the framework. Documented as a
  limitation in the README. Suggested fix: have `lasm init` (and `lasm dev`) expose
  the shipped library to Lake, for example a `require` of a path dependency inside
  `node_modules/@lasm/cli/library` with prebuilt `.olean`s for Lean 4.35.0, so
  `lake env`/the language server resolve `Lasm.*` (the `Lasm.JS` operations would
  still fail at run time natively, as they do now).

### Medium

- **M1 (src: `src/dev.mjs`). Every first `npm run dev` builds twice.** Lake writes
  `lake-manifest.json` during the first build; the watcher sees it and rebuilds and
  restarts the server (`[lasm dev] lake-manifest.json changed; rebuilding`), about
  2–5 s after the server first said it was listening. Seen on every server template
  and the full-stack template. Ignore changes whose content the build itself
  produced (compare a snapshot taken after the build).
- **M2 (src: `src/dev.mjs` multi-output). Two URLs in the full-stack dev output.**
  `lasm dev` prints `Open http://127.0.0.1:3000/` (the proxy), and then the server
  program prints its own `Listening on http://127.0.0.1:34641` (the internal port),
  which is the last line a newcomer sees. Label or suppress the program's line in
  one-URL mode, or print the `Open …` line after the program is listening.
- **M3 (src: `src/dev.mjs`). "Reloaded 53.5 s after the change"** for a change
  that rebuilt in 5.4 s: `changeAt` was set by an earlier event (the build's own
  `lake-manifest.json` write, M1) and carried into a later report.
- **M4 (src: `lasm Main.lean` run path). Raw Lake output on a type error outside
  `lasm dev`.** `npm run dev` in the `plain` template (`lasm Main.lean`) prints
  `✖ [3/5] Building App`, a 600-character `trace: .> LEAN_PATH=… lean … --json`
  command line with cache paths, the error, `Some required targets logged
  failures` and `error: build failed`. `lasm dev` already has
  `formatLeanDiagnostics` (file:line, source line, caret); use it for `lasm run`
  and `lasm build` too.
- **M5 (src: `templates`/`src/init.mjs`, fetch template). The `fetch` template
  builds JSON by string interpolation**: `GET /hello/NAME` returns
  ``s!"\{\"message\":\"{App.greet name}\"}"``, so a name containing `"` or `\`
  (`/hello/%22`) yields invalid JSON. For a launch about correctness, the template
  should use `Lean.Json` (`(Json.mkObj [("message", greet name)]).compress`) as the
  full-stack template does.
- **M6 (src). Slow steps without progress.** `--target wasi` printed
  `Linking for WASI…` and nothing else for most of a 67 s build (the Node build
  before it has stage progress). The first full-stack `lasm dev` build took 49–64 s
  with one `Building Server.lean` line (non-TTY). Give the WASI/edge/browser link
  stages the same elapsed-time status line as the Node stages.
- **M7 (src: `lasm build` input check). A misspelled input gives a raw `ENOENT`**:
  `lasm build Mian.lean` prints `ENOENT: no such file or directory, stat '/…/Mian.lean'`.
  Suggest: `Mian.lean not found in /…/app. Lean files here: Main.lean, App.lean.`
- **M8 (src: CLI parsing). A misspelled command is misreported**: `lasm biuld
  Main.lean` says `Unexpected positional arguments. Put application arguments
  after --.` It should say `Unknown command "biuld" (did you mean build?)` when the
  first word is not a `.lean` file.
- **M9 (docs, fixed). `docs/deploy/README.md`** still called Supabase "planned for
  0.2.0", had no row for browser apps, Fastly or WASI, and was titled for Node
  servers only. `docs/deploy/supabase-edge.md` said "in branch source, planned for
  0.2.0". Fixed.
- **M10 (docs, fixed). BROWSER.md's measured table** still showed a 12.9 s dev
  rebuild with "budget not met"; marked superseded with the 1.6–1.7 s numbers.

### Low

- **L1 (fixed).** Error messages pointed at repository-relative paths a user does
  not have (`see docs/JS_BINDINGS.md`, `docs/WASI.md`, `docs/deploy/lambda.md` in a
  generated Dockerfile comment); they now link to GitHub. The WASI build summary
  also had nested parentheses.
- **L2 (fixed).** `lasm --help` listed `lasm package --target` without `browser`.
- **L3 (fixed).** The generated README of the `fetch` template said "the Hono app is
  served with `Bun.serve`"; the Bun/Deno command comments were misaligned; "copy it
  to a machine with the same OS and architecture" contradicted the README (Linux x64
  and arm64 work from any build machine).
- **L4.** `Created app-x (template x) in app-x:` repeats the directory; the template
  order differs between `lasm --help` and `lasm init --help`.
- **L5.** `info: app_x: no previous manifest, creating one from scratch` (Lake) is
  printed on every first build; it reads like a warning. Filter it.
- **L6.** `lasm dev --target browser` uses the `[lasm]` prefix and no
  `Built in … (Lean · C · link)` summary, unlike server `lasm dev` (`[lasm dev]`).
- **L7.** The web dev server prints `http://127.0.0.1:5173/`; the template README
  says `http://localhost:5173`. Both work on most systems; say the same thing.
- **L8.** `--deploy workers supports the hono or fetch or fullstack template, not
  express` (grammar; tests pin the string). Unknown target `cloudflare` could
  suggest `workers`.
- **L9.** The Workers build ends with `your wrangler.toml must use main =
  "workers/worker.mjs" and the CompiledWasm rule` even when the template's
  `wrangler.toml` already does.
- **L10.** Under `CI=1` (no TTY), every stage prints its own `— 0s elapsed` line;
  CI logs get dozens of them per build.

## What worked well

- `lasm init` output is clear and its "Next:" block is exactly right.
- Template servers answered on the first try, including `$PORT`, and stopped
  cleanly.
- The misspelled-binding error is excellent: both a missing export and a missing
  package in one message, with the fix.
- `lasm dev`'s type-error display (file:line, the source line, a caret, "the last
  good build keeps running") is the best part of the edit loop.
- The full-stack template did what its README says end to end: server-rendered
  page, RPC validation on the server (400 with the shared message), release build,
  `npm start`, and a Workers build.

## Reproduce

The scripts used are small shell wrappers around `npm run dev`, `curl` and
in-place edits; the essential one for H1:

```sh
mkdir w && cd w && echo a > A.lean
node -e "require('fs').watch('.', {recursive: true}, (e, n) => console.log(e, n))" &
sed -i s/a/b/ A.lean   # reported
sed -i s/b/c/ A.lean   # not reported
echo d >> A.lean       # not reported either
```
