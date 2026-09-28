# Lasm

Write ordinary Lean. Compile it ahead of time and run it in Node.

**Prerequisites:** stock **Node 26.10.0 and npm**. Lasm downloads its matching
**Lean 4.34.1**, Lake, and build tools; you do not install them yourself.
The package is experimental and **has not been published to npm**.

## Get started

On a supported Linux or Mac machine, get the tested `.37` tarball identified in the
[acceptance report](https://github.com/Millillion/lasm/blob/main/docs/NODE_ACCEPTANCE.md)
from a maintainer (repository access may be required). In an empty directory:

```sh
npm install /path/to/lasm-compiler-0.1.0-experimental.37.tgz
```

Save this complete program as `Main.lean`:

```lean
def main : IO Unit := do
  IO.println s!"Hello from Lean! 2 + 3 = {2 + 3}"
```

Run, build, and deploy:

```sh
npx lasm Main.lean           # Compile and run: Hello from Lean! 2 + 3 = 5
npx lasm build Main.lean     # Create dist/ without running main
node dist/main.mjs          # Run the deployment
```

The first build needs internet access, downloads about 1 GB, occupies several GB,
and can take a few minutes. Progress and elapsed-time updates appear in the
terminal. Later builds reuse verified tools and unchanged outputs. See
[cache locations, requirements, and recovery](docs/NODE_SUPPORT.md).

Copy **all of `dist/`** to a supported machine with the **same OS, architecture,
and Node version**. No Lean source, npm install, build tools, or development cache
is needed there. Build separately on each platform. Include your application's
external assets yourself.

An existing Lake project can use local imports normally. To pin Lean, put
`leanprover/lean4:v4.34.1` in its `lean-toolchain` file. Other Lean versions are
rejected. Broad third-party package compatibility is not yet verified.
After an authorized npm release, installation will be `npm install @lasm/compiler`;
that registry command is **not available yet**.

## CLI reference

These are all commands and options in the ordinary Node application interface:

| Command or option | Example | Effect |
| --- | --- | --- |
| Run (default) | `npx lasm Main.lean` | Build and run Lean `main`. |
| Explicit run | `npx lasm run Main.lean` | Same as the default command. |
| Program arguments | `npx lasm Main.lean -- hello "two words"` | Pass arguments to `main (args : List String)`. |
| Build | `npx lasm build Main.lean` | Write `dist/`; do not run the application. |
| Output directory | `npx lasm build Main.lean --output "app dist"` | Choose the deployment directory. `lasm build Main.lean "app dist"` is an alias. |
| Force rebuilding | `npx lasm build Main.lean --rebuild` | Ignore a cached application build. |
| Detailed diagnostics | `npx lasm Main.lean --verbose` | Show compiler and linker details. |
| Explicit Node target | `npx lasm Main.lean --target node` | Select the default supported engine. |
| Help | `npx lasm --help` | Show usage; `-h` is an alias. |

`--rebuild` and `--verbose` work with both run and build. `--output` is build-only;
arguments after `--` are run-only. The application's exit status is preserved.
There is currently no Lasm install, clean, uninstall, or version subcommand.

The source checkout also retains experimental interfaces. They are **unavailable
in the Node release candidate**: `node bin/lasm.mjs build examples/basic/lasm.json dist`
builds callable bindings from a JSON configuration;
`node bin/lasm.mjs Main.lean --target deno` and `--target bun` select experimental
engines. The root `lasm-node.js`, `lasm-deno.js`, and `lasm-bun.js` are source-only
compatibility launchers. These interfaces have no current release support guarantee.

## Supported environments

| Environment | Architectures | Current status |
| --- | --- | --- |
| Ubuntu 24.04.5 LTS, glibc 2.39, Node 26.10.0 | x86-64 and ARM64 | Candidate `.37` passed native installed-package and copied-deployment acceptance. |
| Other Linux distributions | x86-64 and ARM64 | Unverified; glibc 2.39 or newer is required. Alpine/musl is unsupported. |
| macOS 15.7.9 | x86-64 and ARM64 | Candidate `.37` passed native installed-package and copied-deployment acceptance. |
| Windows 10.0.26100.33438 (`windows-2025` runner) | x86-64 | Candidate `.44` passed native installed-package and copied-deployment checks; Linux/macOS rechecks and archive retention are pending. |
| Windows | ARM64 | Native compiler distribution and installed-package checks are pending; not yet supported. |
| Deno, Bun, browsers, Cloudflare Workers | Any | Not supported by the release candidate. |
| Lambda, Netlify, other serverless services | Any | No deployment adapter or platform acceptance yet. |

Only the pinned Node and Lean versions above are accepted. No engine flags are
needed. Linux requires its ordinary OS libraries and shell, but no developer SDK.
The [acceptance report](https://github.com/Millillion/lasm/blob/main/docs/NODE_ACCEPTANCE.md) identifies exact tested artifacts;
[the plan](https://github.com/Millillion/lasm/blob/main/docs/PLAN.md) records work in progress.
The `.37` quick-start archive above is for Linux/macOS; it does not include Windows.

## Lean support and restrictions

**Candidate `.37` and current source builds enforce ahead-of-time execution.**
The older `.34` candidate predates these restrictions; do not use it to enforce
this policy.

Ordinary functions, recursion, closures, inductive types, pattern matching,
type classes, dependent types, and compiled IO are not excluded by this policy.
Imports, macros, elaboration, tactics, deriving, proofs, and `#eval` can run
**during compilation** in managed native Lean. Generated code must meet the same
runtime restrictions as handwritten code. Import names are not banned, but
initializers count as runtime dependencies: a broad `import Lean` can retain the
compiler. Use ordinary Lean `meta import Lean` when it is needed only by macros or
tactics in a module; use narrower imports for runtime data libraries.

The deployed application cannot use the following capabilities:

| Unavailable at runtime | Examples and exact boundary |
| --- | --- |
| Load Lean module data or locate a compiler installation | `Lean.importModules`, `Lean.withImportModules`, module-data readers/writers, `Lean.findSysroot`, `Lean.initSearchPath`; deployed `.olean`/IR loading is unsupported. |
| Evaluate or compile new Lean code | `Lean.Environment.evalConst`, interpreter evaluation, a Lean REPL, runtime source elaboration/compilation, or evaluation of declarations loaded by name. Calling an ordinary compiled function is allowed. |
| Use Lean's compiler/kernel runtime state | Runtime elaboration, kernel proof checking, compiler environments, or language-server machinery requiring Lean's C++ compiler/kernel implementation. Pure Lean data operations are not automatically forbidden, but their reachable dependencies must pass the check. |
| Load executable plugins dynamically | Lean/Wasm plugin loading, `dlopen`/`dlsym` and equivalent loader operations, or runtime Lean symbol lookup. Build-time plugins remain subject to ordinary native Lean and package compatibility. |

The build checks **reachable runtime dependencies**, including imported libraries
and indirect calls, before producing a deployment. A reachable forbidden call is
rejected even if your current input would not take that branch. Dead code removed
by the linker is not a runtime dependency. The check is conservative: live Lean
C++ compiler/kernel code or mutable state is rejected, apart from audited
initialization-independent inline helpers and read-only data. A dependency may
therefore need refactoring to keep compiler operations at build time.

The launcher also rejects missing, stale, or incompatible capability records
before loading the application. This checks the declared build capabilities; it is not
a security sandbox against someone rewriting JavaScript or Wasm. There is **no
large compatibility fallback** in current source builds.

This restriction does not imply full compatibility for everything else. Console
output, arguments, exit codes, local Lake imports, and selected language/filesystem
fixtures have native-versus-Node tests. **Complete `IO.FS`, `Std.Http`, concurrency,
subprocess/signal/terminal parity, every third-party library, and the full Lean
upstream suite are not release guarantees.** See [IO gaps](https://github.com/Millillion/lasm/blob/main/IO_LIMITATIONS.md)
and [deployment-size evidence](https://github.com/Millillion/lasm/blob/main/docs/BUNDLE_SIZE.md) for the remaining work.
