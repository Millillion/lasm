# Lean package compatibility (Phase 3)

Each package is checked by a small Lake project in
[`scripts/ecosystem/projects`](../scripts/ecosystem/projects): the project is built
and run natively with Lean 4.35.0 (the oracle), then built with an installed Lasm
candidate and its deployment run three times in Node. **pass** means every
deployment run printed exactly native's output with the same exit status (`fetch`
compares exit status, because its transport differs by design: Node's `fetch` under
Lasm, libcurl or the curl tool natively).

Candidate: **`0.1.0-experimental.39677808414`** (source `a6a546e`, SHA-256 `12d799e8…36d4`,
release `node-linux-candidate-39677808414`; five-platform installed acceptance run
[39677808414](https://github.com/Millillion/lasm/actions/runs/39677808414); cold-installation gate passed 2026-10-22, report in run [39749093869](https://github.com/Millillion/lasm/actions/runs/39749093869)), Node 26.12.1, Lean 4.35.0,
standard GitHub runners (Ubuntu 24.04, macOS 15, Windows Server 2025). Runs:
[linux-x64](https://github.com/Millillion/lasm/actions/runs/39678226497),
[linux-arm64](https://github.com/Millillion/lasm/actions/runs/39678238485),
[darwin-arm64](https://github.com/Millillion/lasm/actions/runs/39678250290),
[darwin-x64](https://github.com/Millillion/lasm/actions/runs/39678262291),
[win32-x64](https://github.com/Millillion/lasm/actions/runs/39678273637), Tier C
[linux-x64](https://github.com/Millillion/lasm/actions/runs/39678285205) and
[linux-arm64](https://github.com/Millillion/lasm/actions/runs/39678297280).
Evidence: [lean-4.35.0-ecosystem-2026-10-21.json](evidence/lean-4.35.0-ecosystem-2026-10-21.json).

## Results

| Project | linux-x64 | linux-arm64 | darwin-x64 | darwin-arm64 | win32-x64 |
| --- | --- | --- | --- | --- | --- |
| aesop-qq | pass | pass | pass | pass | pass |
| batteries | pass | pass | pass | pass | pass |
| cli | pass | pass | pass | pass | pass |
| extern-lib | pass | pass | pass | pass | pass |
| fetch | pass | pass | pass | pass | pass |
| initialize | pass | pass | pass | pass | pass |
| json | pass | pass | pass | pass | pass |
| json-import-lean | pass | pass | pass | pass | pass |
| lean-redis | pass | pass | pass | pass | pass |
| lean-regex | native-fail | native-fail | resource-stop | resource-stop | native-fail |
| lean-zip | pass | pass | pass | resource-stop | native-fail |
| leancopilot | native-fail | lasm-build-fail | — | — | — |
| leansqlite | pass | pass | pass | pass | pass |
| lspec | pass | pass | pass | pass | pass |
| mathlib-deps | pass | pass | pass | pass | pass |
| mathlib-subset | pass | pass | — | — | — |
| md4lean | pass | pass | pass | pass | pass |
| native-tactic | pass | pass | pass | pass | pass |
| plausible | pass | pass | pass | pass | pass |
| prebuilt-library | expected | expected | expected | expected | expected |
| unicode-parser | pass | pass | pass | pass | pass |

Tier C projects ran on Linux only (measured experiments). **resource-stop**: the
build stopped at the resource guard's proactive limit (2.80 GiB on the 7 GiB macOS
arm64 runner, 5.6 GiB on macOS x64), not a package or Lasm result.

Status meanings: **pass**; **expected** (the build stops with the intended message);
**native-fail** (the package does not build or run natively with Lean 4.35.0 on that
platform: upstream); **resource-stop** (the guard stopped a build); **lasm-build-fail** /
**lasm-run-fail** (see Failures).

## What each project exercises

| Project | Packages (exact revisions in its `lakefile`) | What runs in Node |
| --- | --- | --- |
| batteries | Batteries `v4.35.0` | BinaryHeap, UnionFind, BinomialHeap, List/String helpers |
| cli | Cli (lean4-cli) `v4.35.0` | subcommands, flags, variadic arguments, help and errors |
| lspec | LSpec `d8eb3e0`, Plausible `v4.35.0` | passing and failing test suites |
| plausible | Plausible `v4.35.0` | seeded property checks, a counterexample, generators |
| aesop-qq | Aesop, Qq `v4.35.0` | runtime code beside Aesop proofs and a Qq-built term; neither is linked |
| mathlib-deps | ProofWidgets4, import-graph, LeanSearchClient at Mathlib v4.35.0's revisions | Lake resolves and builds them (ProofWidgets' widget JavaScript with npm); `ProofWidgets.Html` data at run time |
| json | core `Lean.Data.Json` + `deriving ToJson, FromJson` | render, pretty-print, parse, decode, errors |
| json-import-lean | the same with `import Lean` | as `json` |
| initialize | local modules | an `initialize` registry filled by another module, printing during initialization, a constant |
| extern-lib | local `extern_lib` C | a static function-pointer table compiled for Wasm |
| native-tactic | local `extern_lib` + `precompileModules` | C called by an elaborator during the build (LeanCopilot/lean-smt style); not needed at run time |
| prebuilt-library | `moreLinkArgs := #["-lcurl"]` | Lasm names libcurl and the package |
| leansqlite | leansqlite `v4.35.0` (bundled SQLite) | create, insert, query, reopen a database file |
| unicode-parser | UnicodeBasic `6e48aca`, lean4-parser `12206aa` (bundled C tables) | Unicode names, categories, case mapping; a parser |
| md4lean | MD4Lean `31907cc` (bundled md4c) | Markdown to HTML, CommonMark and GitHub dialects |
| lean-zip | lean-zip `2f7a63f` (bundled C helpers) | gzip/zlib round trips at four levels, CRC-32, Adler-32 |
| lean-regex | lean-regex `32af6f3` (`subDir = "regex"`) | `re!` and runtime-parsed regexes |
| lean-redis | lean-redis `91685c1` (pure Lean on Std.Async TCP) | a client session against a local Redis-protocol server, end to end over TCP |
| fetch | [Millillion/fetch](https://github.com/Millillion/fetch) `4a0c2f9` (unreleased) | 17 HTTP cases per transport against a local server, plus HTTPS (example.com) and the plain `curl` subprocess pattern |
| mathlib-subset (Tier C) | Mathlib `v4.35.0` (cache) | prime factors, primes, sorting |
| leancopilot (Tier C) | LeanCopilot `v4.35.0` | its native CTranslate2 library loads during elaboration; a trivial program |

## Failures and classification

Every Tier A and Tier B package that builds natively passes on every platform it
builds on: **no Lasm-caused failure remains**.

| Project / platform | Class | Detail |
| --- | --- | --- |
| lean-regex, all | upstream | `Regex.Data.SparseSet.Bijection` fails natively on Lean 4.35.0 (`Unknown constant _inhabitedExprDummy`); the newest commit pins Lean 4.34.0-rc1. On macOS the native build also reached the guard. |
| lean-zip, win32-x64 | upstream | its dependency lean-zip-common compiles `c/io_ffi.c` (POSIX `unistd.h`, `sys/stat.h`) and fails natively on Windows. |
| lean-zip, darwin-arm64 | resource stop | the native build of its proofs exceeds the 2.80 GiB guard on the 7 GiB runner (passes on darwin-x64). |
| leancopilot (Tier C), linux-arm64 | unsupported by design | LeanCopilot's native CTranslate2 library loaded and its tactics elaborated during the Lasm build, but LeanCopilot's own initializer calls its C++ (`cuda_available`) when a program starts, so the deployment would need CTranslate2 in Wasm. Lasm stops naming `ctranslate2` and the bridge that does not compile for Wasm. Untested workaround: `meta import LeanCopilot` in a module file. |
| leancopilot (Tier C), linux-x64 | upstream | LeanCopilot's `ct2.o` failed to compile natively on the runner in this run (an earlier run compiled it, then downstream elaboration needed `LD_LIBRARY_PATH`). |
| (earlier campaign) batteries, win32-x64 | infrastructure | HTTP 502 from GitHub while downloading Lean; the rerun passed. |

Lasm bugs found and fixed during the phase (all in the candidate): skipped initializers
of `___boxed__const__` globals (null refcount writes, lean-redis and upstream
`elab/async_http_expect`), Windows Lean include prefix and SQLite's `getcwd` paths, MD4Lean's
Windows stand-in headers shadowing the Wasm C library, eager failures on package C that only
builds natively. See [LANGUAGE_COVERAGE.md](LANGUAGE_COVERAGE.md#phase-3-ecosystem-2026-10-21).
