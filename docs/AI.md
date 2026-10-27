# Lasm for AI agents

Rules and facts that keep an agent from going wrong when it writes, builds or
deploys Lean with Lasm. The [README](../README.md) has the complete reference;
[llms.txt](../llms.txt) is the link index.

## Facts to rely on

- **Lean 4.35.0 exactly.** `lean-toolchain` must be `leanprover/lean4:v4.35.0`.
  Do not install Lean or elan to build; `lasm` provisions everything through npm.
- **Install:** `npm install -D @lasm/cli` (bin `lasm`) or `npx @lasm/cli …`.
  New projects: `npm create @lasm@latest NAME -- --template T [--deploy D]…`
  (the `--` matters with npm). `npx @lasm/cli init --help` lists templates and
  targets of the installed version.
- **Builds:** `lasm Main.lean` = dev build and run; `lasm build Main.lean` =
  release `dist/`; `--target T` for platforms (README "Platforms" table).
  `lasm dev` watches and restarts. All are deterministic, and release builds are
  byte-reproducible.
- **Lake projects** work as usual (local modules, Reservoir/Git dependencies). Pure
  modules without `Lasm.*` imports also build natively with `lake build`.
- **`Lasm.*` libraries ship inside Lasm** (`Lasm.JS`, `Lasm.Fetch`, `Lasm.UI`,
  `Lasm.Web`, `Lasm.RPC`, `Lasm.KV`, `Lasm.Fastly`). Never add them as Lake
  dependencies. For the editor, run `npx lasm editor`.

## Rules

1. **Ahead of time only.** No run-time `evalConst`, `importModules`, elaboration,
   REPLs or plugin loading in deployed code. Tactics, macros, `deriving` and `#eval`
   are fine; they run during the build. A broad `import Lean` can pull in the
   compiler: use `meta import Lean` for macro-only use, or narrower imports
   (`Lean.Data.Json`). The build explains any rejection with a call chain.
2. **JavaScript interop:** declare each function with
   `@[js "module" "export"] opaque f : A → IO R` (or `→ Async R` for promises).
   Use the module `"globalThis"` for globals, `"new X"` for constructors, and `""`
   for a module's own value. `npm install` the package next to the lakefile. A
   wrong name fails the build with `Lasm.JS binding check failed`. There are no
   premade binding packages: write the lines you need
   ([JS_BINDINGS.md](JS_BINDINGS.md), including its agent checklist).
3. **Handlers run in `Async`.** Await JavaScript with `callMethodAwait` or `Async`
   bindings inside handlers. Awaiting in `IO` blocks a Lean thread.
4. **Minimize JS calls.** Each one costs about 24 µs. Read many fields at once
   (`getFields`) and return replies with `Function.Reply` rather than calling back.
5. **Pick the HTTP layer by target.** For Node in production, use Hono, Express or
   Fastify with Lean handlers, or `Lasm.Fetch`. For edge, Fastly, WASI and Spin, use
   `Lasm.Fetch` (or Hono with `--deploy workers`). `Std.Http` works on Node only and
   is slow.
6. **Single-threaded targets** (edge, Bun/Deno, WASI, browser) have no sockets,
   processes or signals, and no files except on WASI. Tasks are cooperative. In the
   browser, blocking waits stop the app unless it is built with `--suspend jspi`;
   prefer `Async`.
7. **Never run platform CLIs on the user's behalf without being asked**
   (`wrangler deploy`, `vercel`, `fastly compute deploy`). Lasm only builds;
   deployment is the platform's tool.
8. **Proofs are checked by the build.** A broken proof is a build error. Don't
   leave `sorry` in shipped code; Lasm's own proofs contain none
   (`node scripts/ui/lean-tests.mjs` checks them in a checkout).
9. **Report bugs** with `npx lasm --version` output:
   https://github.com/Millillion/lasm/issues/new?template=bug.yml

## Where to look first

| Task | Read | Copy from |
| --- | --- | --- |
| A complete real-world API (auth, SQL, pure-Lean core) | [examples/conduit/README.md](../examples/conduit/README.md) | [examples/conduit](../examples/conduit) |
| Server with npm framework | [GETTING_STARTED](GETTING_STARTED.md) | `--template hono`, [examples/js-crud](../examples/js-crud) |
| Pure-Lean HTTP on any target | [FETCH.md](FETCH.md) | `--template fetch`, [examples/fetch](../examples/fetch) |
| Browser UI | [UI.md](UI.md) | `--template web`, [examples/ui](../examples/ui) |
| Full stack with proofs | [RPC.md](RPC.md) | `--template fullstack` |
| Bindings to an npm package | [JS_BINDINGS.md](JS_BINDINGS.md) | [examples/js-fetch](../examples/js-fetch) |
| Deploying | [deploy/README.md](deploy/README.md) | `--deploy <target>` |
