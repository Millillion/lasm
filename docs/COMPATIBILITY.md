# Lean package compatibility (Phase 3)

Each package is checked by a small Lake project in
[`scripts/ecosystem/projects`](../scripts/ecosystem/projects): the project is built
and run natively with Lean 4.35.0 (the oracle), then built with an installed Lasm
candidate and its deployment run three times in Node. **pass** means every
deployment run printed exactly native's output with the same exit status (`fetch`
compares exit status, because its transport differs by design: Node's `fetch` under
Lasm, libcurl or the curl tool natively).

Candidate: RESULTS_PENDING.

## Results

RESULTS_TABLE

Status meanings: **pass**; **expected** (the build stops with the intended message);
**native-fail** (the package does not build or run natively with Lean 4.35.0 on that
platform: upstream); **lasm-build-fail** / **lasm-run-fail** (Lasm; see Failures);
**infrastructure** (a download failed with an HTTP 5xx; rerun).

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
| fetch | [Millillion/fetch](https://github.com/Millillion/fetch) `743b2dd` | 17 HTTP cases per transport against a local server, plus HTTPS (example.com) and the plain `curl` subprocess pattern |
| mathlib-subset (Tier C) | Mathlib `v4.35.0` (cache) | prime factors, primes, sorting |
| leancopilot (Tier C) | LeanCopilot `v4.35.0` | its native CTranslate2 library loads during elaboration; a trivial program |

## Failures and classification

FAILURES_PENDING
