# Lean 4 packages ranked by adoption, with Lasm Phase 3 ("ecosystem") targets

**Measured:** 2026-10-21. Reservoir index snapshot: `leanprover/reservoir-index` master, last commit 2026-10-18 19:00 UTC. It holds 898 packages.
**Method:** read-only. I cloned the index and ran a script over every package's `metadata.json`, `versions.json` and `builds.json`. I shallow-cloned about 90 candidate repos and grepped them statically, and pulled stars, forks and last commit with `gh api`. GitHub code search gave lower-bound usage counts, and I reviewed one curated list. I built nothing.

## 0. Key findings (read this first)

1. **Mathlib dominates adoption.** 544 of the 898 Reservoir packages require Mathlib directly, and 2,976 public `lakefile.lean` files reference its URL. Requiring Mathlib also puts Batteries, Aesop, Qq, ProofWidgets4, Plausible, import-graph, LeanSearchClient and **Cli** into the manifest. These are the "FRO core 9". Each of them appears in about 520–655 Reservoir manifests, mostly transitively.
2. **The FRO core 9 contain no C code.** Batteries, Cli, Aesop, Qq, Plausible, ProofWidgets, import-graph and LeanSearchClient have no `extern_lib`, no `precompileModules`, no bundled C and no `moreLinkArgs`. Mathlib has none either (checked via its lakefile; I did not grep the full tree). Getting them to work is purely a matter of Lean elaboration and compilation. ProofWidgets is the exception: it needs an npm/JS widget build at `lake build` time, which Lasm can skip or prebuild.
3. **Most runtime programs use few packages.** Among non-Mathlib packages, the most-required runtime libraries are:
   - **Batteries:** 74 direct Reservoir dependents.
   - **Cli:** 30.
   - **LSpec:** 19.
   - **Plausible:** 11.
   - **leansqlite:** 5.
   - **UnicodeBasic:** 4.
   - **lean4-parser** and **MD4Lean:** 3 each.

   Every other runtime library has 0–1 indexed dependents.
4. **Core Lean 4.35 already ships most of the server stack.** These modules are in the `v4.35.0` tag of `leanprover/lean4`:
   - `Std.Http`: a sans-I/O HTTP/1.1 server with keep-alive and chunked encoding.
   - `Std.Async`: TCP, UDP, DNS, Timer, Process, Signal and Select.
   - `Std.Sync`: Mutex, Channel, Semaphore and others.
   - `Std.Time`: dates, time zones and formatting.
   - `Std.Data`: HashMap, TreeMap and iterators.
   - `Std.Internal.Parsec`.
   - `Lean.Data.Json`, which lives in `Lean`, not `Std`.

   The 2026 wave of web libraries is built directly on `Std.Http` and `Std.Async`: leanio, lean-redis, paulbutcher's lean-routing and lean-middleware, and theoriclabs' leanapi. **If Lasm's Std.Async/Std.Http support is solid, these pure-Lean libraries mostly come for free.**
5. **Native C splits into two groups.**
   - **(a) Bundled C sources** that can be compiled with Emscripten: leansqlite (sqlite3 amalgamation), UnicodeBasic (C tables), MD4Lean (md4c), lean-zip (small helper C files), SciLean helpers, and lean-libcrypto's shim.
   - **(b) Prebuilt or system libraries** that need replacements: libcurl (leanCurl, paulbutcher/leancurl, theoriclabs/leanhttp), OpenSSL (lean-grpc, theoriclabs/leancrypto, hale, OpenSSL.lean), libpq (leanpostgres, lean-pq, lean-postgres, lean-linq), hiredis (redis-lean), BLAS (SciLean), CTranslate2/OpenBLAS (LeanCopilot), cvc5 binaries (lean-cvc5 → lean-smt), and Rust crates (Blake3.lean, lithe, L4YAML).
6. **Using `Lean.Json` means using `import Lean`.** It is the de facto JSON library: leanio, LeanSerde, lean4-json-schema, lean-tea, doc-gen4 and others use it. Only paulbutcher/lean-json (0 stars, created 2026-08) avoids it. So partial Lean-as-a-library support in Lasm directly limits JSON-using servers. **Making the `Lean.Data.Json` module closure compile to Wasm is likely the single highest-leverage item outside the package manager itself.**

## 1. Data sources (cited)

- **Reservoir index:** https://github.com/leanprover/reservoir-index. It has per-package `metadata.json` (stars, updatedAt), `versions.json` (toolchain plus resolved lake-manifest dependencies) and `builds.json` (Reservoir CI build results per toolchain).
- **Reservoir site:** https://reservoir.lean-lang.org. I used the index rather than an API; I did not find a `/api/v1` endpoint, but I did not search for one exhaustively.
- **GitHub REST:** `gh api repos/OWNER/REPO` and `repos/OWNER/REPO/commits/<default-branch>`, fetched 2026-10-21.
- **GitHub code search:** run 2026-10-21 using `q="\"github.com/OWNER/REPO\" filename:lakefile.lean"` and `filename:lake-manifest.json`.
- **Lean core modules:** https://github.com/leanprover/lean4/tree/v4.35.0/src/Std, plus `src/Lean/Data/Json`.
- **Curated list:** https://github.com/saviorand/awesome-lean-programming (12 stars, created 2026-09-27). It is the only programming-focused "awesome" list I found. `tomhoule/awesome-lean4` is stale (2023) and `leanprover-community/awesome-lean4` does not exist.
- **Web search:** about Lean JSON and HTTP libraries. It surfaced https://reservoir.lean-lang.org/@hargup/http-client, https://reservoir.lean-lang.org/@JoshuaPurtell/lithe, https://github.com/axiomed/http and https://blog.codeminer42.com/overcoming-challenges-and-crafting-in-the-uncharted-territory-of-lean4/.
- **Zulip archive** (leanprover-community.github.io/archive): **not systematically searched (UNVERIFIED).** Community recommendations below come from the curated list and dependency data, not from Zulip threads.

## 2. Adoption score (transparent)

`score = 3·log2(1 + Reservoir direct dependents) + 2·log2(1 + code-search lakefile.lean hits) + log2(1 + GitHub stars) + recency`

- **Recency:** +2 if the last push was ≤ 90 days ago, +1 if ≤ 365 days, otherwise 0.
- **Reservoir direct dependents:** the number of indexed packages whose *latest* version lists the package as a non-transitive dependency. URLs were normalized and old URL aliases mapped: std4→batteries, mhuisi/lean4-cli→Cli, gebner/quote4→Qq, JLimperg/aesop→aesop, EdAyers/ProofWidgets4, lurk-lab/LSpec→argumentcomputer/LSpec, kim-em/leansqlite→leanprover/leansqlite.
- **Code-search hits:** GitHub's approximate `total_count` for lakefile.lean files containing `github.com/OWNER/REPO`.
  - It is a **lower bound** for direct usage. It misses `lakefile.toml` users who `require` by scope or name.
  - Matching `name = "X"` in lakefile.toml was too noisy to use, because it also matches `lean_lib` names. Raw values were Mathlib 8,144, Batteries 257, Cli 81, doc-gen4 293, Verso 170 and REPL 139.
  - Code search was only run for the top 19. Everything else scores 0 for this term.
- **Manifest counts** (`filename:lake-manifest.json`) are dominated by Mathlib's transitive set. Mathlib got 12,080 and Batteries, Cli, Aesop, Qq, ProofWidgets and import-graph each got about 11.6k. That only shows they are always present alongside Mathlib, so I did not use these counts in the score.

## 3. Ranked table (top 40 of 62 scored candidates)

Column notes:

- **Res dep:** Reservoir direct dependents.
- **CS:** lakefile.lean code-search hits ("–" means not queried).
- **Last commit:** the GitHub `pushed_at` date.
- **TC:** the latest `lean-toolchain` (Reservoir's latest version, or the repo's file when the package is not indexed).
- **4.35 built:** whether Reservoir CI built the package on any v4.35.x toolchain. Reservoir also retries older revisions on newer toolchains, so "no" usually means the package is pinned to an older toolchain, not that it is broken. "n/i" means not indexed or no record.
- **Category labels:**
  - RT = runtime library.
  - CT = compile-time tactics or metaprogramming.
  - BT = build tooling or documentation.
  - M = math or formalization.

| # | Package (repo) | Score | Res dep | CS | ★ | Forks | Last commit | TC | 4.35 built | Cat | Native code | Runtime `import Lean` / elab / process |
|---|---|---|---|---|---|---|---|---|---|---|---|---|
| 1 | leanprover-community/mathlib4 | 64.4 | 544 | 2976 | 4332 | 1783 | 2026-10-21 | v4.36.0-rc1 | yes | M (+CT) | none | Tactics everywhere. Most "runtime" defs are noncomputable. Programs rarely import it for code. |
| 2 | leanprover/doc-gen4 | 43.5 | 63 | 259 | 174 | 74 | 2026-10-14 | v4.36.0-rc1 | yes | BT | via leansqlite (bundled sqlite3.c), MD4Lean, UnicodeBasic | importModules (tool exe) |
| 3 | leanprover-community/batteries | 42.9 | 74 | 106 | 422 | 168 | 2026-10-21 | v4.36.0-rc1 | yes | RT + CT | none | `Batteries/Data` has only 2 of 99 files importing Lean (Heartbeats, NameMap). Tactic files import Lean. |
| 4 | leanprover-community/aesop | 36.5 | 25 | 57 | 409 | 60 | 2026-10-19 | v4.36.0-rc1 | yes | CT | none (`precompileModules = false`) | elab-time only |
| 5 | leanprover/verso | 35.5 | 13 | 103 | 397 | 127 | 2026-10-20 | v4.36.0-rc1 | yes | BT (docs) | via MD4Lean (bundled md4c) | Heavy: 126 files import Lean, 19 use IO.Process |
| 6 | leanprover/lean4-cli (Cli) | 35.2 | 30 | 50 | 124 | 30 | 2026-10-14 | v4.36.0-rc1 | yes | RT (CLI args) | none | no `import Lean`. Pure. Also used by Lake. |
| 7 | leanprover-community/ProofWidgets4 | 33.2 | 15 | 51 | 229 | 49 | 2026-10-21 | v4.36.0-rc1 | yes | editor widgets | none (npm JS build step) | Lean.Json, RPC (editor-only) |
| 8 | argumentcomputer/LSpec | 30.7 | 19 | 24 | 86 | 18 | 2026-10-07 | v4.34.1 | yes | RT (testing) | none | 1 file imports `Lean.Elab.Tactic` (`#lspec` command). Depends on Plausible. |
| 9 | leanprover-community/quote4 (Qq) | 30.6 | 16 | 26 | 111 | 28 | 2026-10-14 | v4.36.0-rc1 | yes | CT | none | elab-time only |
| 10 | leanprover/cslib | 30.0 | 11 | 13 | 773 | 216 | 2026-10-21 | v4.36.0-rc1 | yes | M/CS formalization | none | mostly proofs (4 files import Lean) |
| 11 | leanprover-community/plausible | 29.8 | 11 | 33 | 118 | 31 | 2026-10-14 | v4.36.0-rc1 | yes | RT/CT (property tests) | none | Gen/Random are pure. Deriving/tactic use Lean (elab-time). |
| 12 | ufmg-smite/lean-smt | 27.8 | 7 | 18 | 314 | 50 | 2026-10-20 | v4.34.0 | no | CT | via lean-cvc5 (downloads prebuilt cvc5) | import Lean |
| 13 | fgdorais/lean4-parser | 23.9 | 3 | 25 | 89 | 9 | 2026-10-16 | v4.36.0-rc1 | yes | RT (parser combinators) | none (depends on UnicodeBasic, which has C) | none |
| 14 | leanprover-community/lean-auto | 23.4 | 3 | 14 | 193 | 34 | 2026-09-28 | v4.34.1 | no | CT | `precompileModules := true`; spawns external ATPs | import Lean, IO.Process |
| 15 | leanprover/leansqlite | 23.3 | 5 | 14 | 53 | 4 | 2026-10-14 | v4.36.0-rc1 | yes | RT (DB) | **extern_lib: bundled sqlite3.c amalgamation, shathree.c and leansqlite.c shim; precompileModules** | minor |
| 16 | leanprover-community/repl | 22.5 | 2 | 14 | 235 | 72 | 2026-10-16 | v4.36.0-rc1 | yes | tooling | `@[extern "lake_environment_add"]` (binds into the Lean/Lake runtime) | Runs the Lean frontend at runtime. Not a Lasm target. |
| 17 | PatrickMassot/checkdecls | 20.7 | 81 | – | 2 | 6 | 2025-04-02 | v4.18.0 | n/i | BT (blueprint) | none | importModules |
| 18 | fgdorais/lean4-unicode-basic | 19.1 | 4 | 7 | 16 | 14 | 2026-10-20 | v4.36.0-rc1 | yes | RT (Unicode) | **extern_lib: bundled C tables (UnicodeCLib); precompileModules** | none |
| 19 | acmepjz/md4lean | 19.0 | 3 | 16 | 13 | 8 | 2026-06-22 | v4.29.0-rc1 | yes | RT (Markdown) | **bundled md4c C and wrapper.c; precompileModules** | none |
| 20 | pandaman64/lean-regex | 17.4 | 1 | 6 (toml-name 26, noisy) | 111 | 15 | 2026-10-20 | v4.34.0-rc1 (in `regex/` subdir) | no (subdir layout) | RT (regex) | none | 4 files import Lean (`re!` syntax, elab-time) |
| 21 | lean-dojo/LeanCopilot | 17.1 | 2 | – | 1335 | 129 | 2026-10-13 | v4.35.0 | no | CT (AI) | **CTranslate2 C++ plus OpenBLAS, downloaded and built; extern_lib; `--load-dynlib`** | import Lean |
| 22 | Seasawher/mdgen | 16.2 | 8 | – | 25 | 4 | 2026-10-08 | v4.35.0-rc4 | yes | BT | none | IO only |
| 23 | JOSHCLUNE/LeanHammer | 15.6 | 4 | – | 101 | 11 | 2026-10-13 | v4.34.0 | no | CT | precompileModules; external provers | import Lean |
| 24 | leanprover/comparator | 14.7 | 2 | – | 245 | 42 | 2026-10-14 (archived) | v4.35.0 | yes | tooling | none | import Lean |
| 25 | leanprover/subverso | 14.2 | 7 | – | 8 | 15 | 2026-10-14 | v4.29.0-rc7 | yes | BT | none | import Lean |
| 26 | leanprover/lean4export | 13.6 | 3 | – | 46 | 27 | 2026-10-14 | v4.36.0-rc1 | yes | tooling | none | import Lean |
| 27 | leanprover-community/import-graph | 12.9 | 3 | – | 28 | 18 | 2026-10-20 | v4.36.0-rc1 | yes | BT | none | importModules, IO.Process (tool exe) |
| 28 | tydeu/lean4-alloy | 12.4 | 3 | – | 85 | 21 | 2025-07-13 | v4.21.0 | no | FFI tooling | generates inline C | import Lean (elab) |
| 29 | leanprover-community/LeanSearchClient | 12.0 | 2 | – | 37 | 14 | 2026-10-14 | v4.36.0-rc1 | yes | editor tooling | none | IO.Process (`curl`) at elab time |
| 30 | nomeata/loogle | 11.3 | 1 | – | 157 | 29 | 2026-07-09 | v4.30.0-rc1 | yes | tooling (search server) | extern_lib | import Lean |
| 31 | lecopivo/SciLean | 10.1 | 0 | – | 539 | 47 | 2026-02-18 | v4.28.0-rc1 | no | RT (numerics) | **bundled C (math/bytearray/floatarray) and system BLAS (`-lblas`)** | heavy import Lean (61 files) |
| 32 | abdoo8080/lean-cvc5 | 9.8 | 1 | – | 27 | 14 | 2026-09-16 | v4.34.0 | yes | solver FFI | **downloads prebuilt cvc5 and a C++ ffi** | partial |
| 33 | bergmannjg/regex | 9.4 | 1 | – | 20 | 1 | 2026-10-16 | v4.35.0 | no | RT (PCRE2-compatible regex) | none | 3 files import Lean (syntax) |
| 34 | kim-em/lean-zip | 9.1 | n/i | – | 133 | 16 | 2026-10-03 | v4.35.0-rc2 | n/i | RT (DEFLATE/zlib, pure Lean with proofs) | **extern_lib: 4 small bundled C helpers** (copy_within, inflate_fast and similar) | none |
| 35 | argumentcomputer/Blake3.lean | 8.3 | 1 | – | 9 | 3 | 2026-10-19 | v4.34.1 | yes | RT (hashing) | **C ffi and a Rust crate (`blake3`)** | none |
| 36 | bergmannjg/leanCurl | 8.0 | 1 | – | 15 | 2 | 2026-02-03 | v4.27.0 | yes | RT (HTTP client) | **system libcurl shared lib (found via `ldd $(which curl)`) and a C++ shim** | none |
| 37 | oOo0oOo/LeanSerde | 8.0 | 1 | – | 7 | 0 | 2026-10-09 | v4.25.0 | n/i | RT (serialization) | none | import Lean (deriving), Lean.Json |
| 38 | RileyBetts/lean-grpc | 7.8 | 1 | – | 6 | 0 | 2026-08-12 | v4.32.1 | n/i | RT (gRPC, HTTP/2 on Std.Async) | **system OpenSSL (`-lssl -lcrypto`), a C TLS bridge and Rust interop** | minor |
| 39 | theoriclabs/LeanDB | 7.0 | n/i | – | 32 | 5 | 2026-10-16 | v4.33.0 | n/i | RT (typed SQL over SQLite) | via leansqlite; precompileModules | import Lean (13 files, DSL) |
| 40 | palladin/lean-linq | 6.8 | 0 | – | 27 | 1 | 2026-10-13 | v4.35.0 | yes (older rev) | RT (SQL DSL) | **system libsqlite3, libpq, freetds and mysqlclient shims** | minor |

Ranks 41–62 all score ≤ 6. Each has 0 Reservoir dependents and ≤ 53 stars. The list below gives stars and last commit for each.

- **Lean-zh/protobuf:** 14★, 2026-09-01. Pure Lean with a protoc plugin; import Lean.
- **predictable-machines/lean4-json-schema:** 29★, 2026-07. Lean.Json.
- **joehendrix/lean-crypto:** 53★, 2024-09, stale. 314 bundled C files.
- **nasa-jpl/L4YAML:** 12★, 2026-10-21. YAML 1.2.2. Optional C and Rust shims, and its lakefile references LeanCopilot link args.
- **ecyrbe/leanio:** 11★, 2026-08. Router on Std.Http; Lean.Json.
- **typednotes/lean-pq:** 11★. System libpq.
- **theoriclabs/leanhttp:** 11★. libcurl.
- **Verilean/lean-tea:** 10★. Bundled C; heavy import Lean.
- **typednotes/hale:** 9★, archived. OpenSSL and libpq.
- **JoshuaPurtell/lithe:** 17★, 2026-01. C, Rust and leansqlite.
- **argumentcomputer/Megaparsec.lean:** 37★, 2024-01, stale, toolchain v4.0.0.
- **JamesGallicchio/LeanColls:** 32★, 2025-05, stale. Needs Mathlib.
- **hargoniX/socket.lean:** 23★, 2025-07. Alloy inline C. Superseded by Std.Async TCP.
- **paulbutcher/leanpostgres:** 4★. libpq.
- **T-Brick/DateTime:** 17★, 2024, stale. C++ shim. Superseded by Std.Time.
- **ecyrbe/lean-redis:** 7★. Pure Lean on Std TCP.
- **ammkrn/timelib:** 15★, 2025-04.
- **predictable-machines/lean4-base64:** 3★. Pure.
- **paulbutcher/lean-json, leancurl, leancrypto:** 0★ each, created 2026-08.
- **theoriclabs/leancrypto:** 0★. Static `libcrypto.a`.

The full JSON is in the scratchpad as `ranked.json` and `analysis.json`.

**Reading the ranking:** 15 of the top 30 are compile-time or tooling packages. Runtime-library adoption is thin and long-tailed. **Batteries, Cli, LSpec, Plausible, leansqlite, lean4-parser, UnicodeBasic and MD4Lean are the only runtime libraries with ≥ 3 indexed dependents.**

## 4. Category coverage map (server / CLI / data-processing needs)

| Need | De facto choice (evidence) | Alternatives | Native? |
|---|---|---|---|
| JSON | **`Lean.Data.Json`** (core, in the `Lean` package; used by leanio, LeanSerde, json-schema, lean-tea, doc-gen4 and others) | paulbutcher/lean-json (pure, RFC 8259 proofs, 0★, new); LeanSerde (deriving) | no, but needs `import Lean.Data.Json` closure |
| CLI args | **leanprover/lean4-cli** (30 Res dep, 50+ lakefile hits; used by Lake) | jonaprieto/lean-argus, matthunz/clean (≈0★) | no |
| Parsing | **`Std.Internal.Parsec`** (core) and **fgdorais/lean4-parser** (89★, 3 dep) | lean4-parseit (same author), prim-parser (23★), Megaparsec.lean (stale) | parser→UnicodeBasic (bundled C) |
| Testing | **LSpec** (19 dep) and **Plausible** (property-based, FRO-adjacent); core `#guard` / `lake test` | LeanTest, LTest, nest (stale) | no |
| Collections | **core `Std.Data`** (HashMap, TreeMap, HashSet and others) and **Batteries** (BinaryHeap, RBMap, UnionFind and others) | LeanColls (stale), hashbrown4lean | no |
| Time / date | **core `Std.Time`** (time zones, formatting) | DateTime (stale, C++), timelib (stale), bergmannjg/time | Std.Time reads the tz database from the filesystem *(UNVERIFIED detail; check zoneinfo access in Node)* |
| Regex | **pandaman64/lean-regex** (111★, proofs) | bergmannjg/regex (PCRE2-compatible, 20★) | no |
| Crypto / hashing | **none established.** Core has only non-crypto `hash`/`mixHash`. | paulbutcher/leancrypto (pure SHA-2, HMAC, RSA-verify), theoriclabs/leancrypto (OpenSSL), Blake3.lean (C+Rust), lean-libcrypto (OpenSSL EVP), lean-jose (JWT) | most are OpenSSL; pure ones are brand new |
| DB | **leanprover/leansqlite** (FRO; 5 dep incl. doc-gen4) | Postgres: leanpostgres, lean-pq, FWuermse/lean-postgres (libpq), pg-lean (pure wire protocol); Redis: lean-redis (pure), redis-lean (hiredis); lean-linq; LeanDB | sqlite bundled C; libpq/hiredis are system libs |
| HTTP server | **core `Std.Http`** (HTTP/1.1, new in 2025–26) on `Std.Async` | routers/frameworks: leanio, lean-routing, lean-middleware, leanapi, lithe, lean-tea | core uses libuv (Std.Async) |
| HTTP client | **none established in core** (`Std.Http` has Server only at v4.35.0) | leanCurl, paulbutcher/leancurl, theoriclabs/leanhttp, hargup/http-client: all libcurl | libcurl → needs a Node `fetch` replacement |
| Templating / HTML | **none established** | paulbutcher/lean-html (typed HTML5), lean-htmx; Verso (docs, not web templates) | no |
| Markdown | **MD4Lean** (via doc-gen4/Verso) | paulbutcher/lean-markdown (pure CommonMark/GFM), lean4-markdown | md4c bundled C |
| Logging | **none established** | lean-telemetry / otel-lean (OpenTelemetry; new, tiny); zlogLean (via redis-lean) | — |
| Async / concurrency | **core `Std.Async` / `Std.Sync` / `Task`** | lean4-flow (reactive streams), Straume | libuv |
| Serialization | `Lean.Json` and `ToJson`/`FromJson` deriving (core) | LeanSerde, protobuf (Lean-zh), ln-messagepack, binary (Lean-zh) | no |
| YAML / TOML | YAML: **none established** (L4YAML, NASA-JPL, 12★, very active). TOML: Lake's internal `Lake.Toml` parser, otherwise none | totem (TOML, ≈0★) | L4YAML has optional C/Rust shims |
| UUID | **none** (vsinha/uuid, 0★) | — | — |
| Base64 | **none established** | lean4-base64 (pure), rfc4648; (core `ByteArray` has no base64 *(UNVERIFIED)*) | no |
| Compression | **kim-em/lean-zip** (133★, pure DEFLATE with proofs; Lean FRO author) | lean-zlib (system zlib), lean-zstd, lean-archive | small bundled C helpers |
| LLM / API clients | **none established** (kim-em/llm archived) | paulbutcher/lean-llmclient (libcurl), LeanSearchClient (curl process) | libcurl |
| Unicode | **UnicodeBasic** | — | bundled C tables |

## 5. Recommended Phase 3 target set

### Tier A: must work (covers almost all real dependency graphs)

| Package | Reason | Native C |
|---|---|---|
| **Batteries** | Most-required runtime library (74 direct, ~650 transitive). Pure Lean. | none |
| **Cli (lean4-cli)** | De facto CLI parser. In every Mathlib manifest. | none |
| **Plausible** | FRO property testing. Mathlib and LSpec depend on it. Runtime Gen/Random must compile. | none |
| **LSpec** | Most-used test framework for programs (19 dependents, mostly programming projects). | none |
| **Aesop, Qq** | Compile-time only. They must *elaborate* under Lasm's native build when user code imports them, and their modules must be excluded from the Wasm link when they are not runtime-reachable. | none |
| **ProofWidgets4, import-graph, LeanSearchClient** | No runtime value, but they are always in Mathlib manifests. `lake` must resolve and fetch them without breaking. ProofWidgets' npm build must be skipped or cached. | none (ProofWidgets: JS build) |
| **Core `Lean.Data.Json` closure** (not a package) | The de facto JSON library for every server-side package. Treat it as Tier A even though it is not a Reservoir package. | none |
| **Core `Std.Http` / `Std.Async` / `Std.Time`** (not packages) | The base layer of the 2026 web ecosystem. Std.Time needs tz database access. | libuv (already Lasm's concern) |

### Tier B: valuable runtime libraries

| Package | Reason | Native C (kind) |
|---|---|---|
| **leansqlite** | FRO-maintained DB binding (doc-gen4 and LeanDB use it). The flagship "C package compiled with Emscripten" test. | **bundled** sqlite3 amalgamation and shim (emcc-compilable; needs Node FS/VFS) |
| **UnicodeBasic** | Dependency of lean4-parser, doc-gen4, BibtexQuery and markdown. | **bundled** C tables (easy) |
| **lean4-parser** | Main parser-combinator package. | none (via UnicodeBasic) |
| **MD4Lean** | Markdown (doc-gen4, Verso). | **bundled** md4c (easy) |
| **lean-regex** (pandaman64) | Most-starred regex library (111★). Pure. Non-standard subdir layout (`regex/`), which tests Lake `require … with subDir`. | none |
| **bergmannjg/regex** | PCRE2 semantics. On v4.35.0 already. | none |
| **lean-zip** | Compression with high stars (133). Pure plus small C helpers. | **bundled** small C |
| **leanio and lean-redis** (ecyrbe) | Representative pure-Lean libraries on Std.Http/Std.Async. They validate the web stack end to end. | none |
| **paulbutcher web stack** (lean-routing, lean-middleware, lean-html, lean-json, lean-jose, leancrypto) | Newest and most complete pure-Lean server toolkit, all on v4.35.0. Zero adoption yet, so these are bets rather than proven picks. | none (leancurl and leanpostgres are system libs) |
| **LeanSerde / protobuf (Lean-zh)** | Serialization beyond JSON. | none |

### Tier C: stretch / measured experiments

| Package | Reason | Native |
|---|---|---|
| **Mathlib** (import a computable subset, e.g. `Mathlib.Data.Nat`, `Mathlib.Order`) | Measure native build time, `.olean` volume and Wasm size when a program imports small slices of Mathlib. Its sheer adoption (544 deps) makes it the canonical stress test. | none |
| **doc-gen4 / Verso** | Large `import Lean` programs. They test Lean-as-a-library in Wasm (the frontend at runtime). Likely out of scope for "runs on Node" except as a measurement. | via leansqlite, MD4Lean |
| **libcurl replacements** (leanCurl, paulbutcher/leancurl, theoriclabs/leanhttp) | Provide a Node `fetch`-backed shim exposing the same `@[extern]` symbols, or a Lasm HTTP-client package. | **system libcurl → replace** |
| **libpq / hiredis / OpenSSL users** (leanpostgres, lean-pq, redis-lean, lean-grpc, theoriclabs/leancrypto) | Replace with JS shims (Node `crypto`, `pg`, `net`), or prefer the pure-Lean alternatives (pg-lean, lean-redis, paulbutcher/leancrypto). | **system libs → replace** |
| **Blake3.lean** | Mixed C plus Rust. Tests Rust→wasm64. | C and Rust |
| **SciLean** | Numerics with BLAS (would need an Emscripten BLAS). Heavy import Lean. Stale toolchain (v4.28). | bundled C and system BLAS |
| **lean-smt / LeanCopilot / LeanHammer / lean-auto** | Compile-time only, but their native solver or model binaries must be loadable by *native* Lean during the Lasm build. Verify that Lasm doesn't break `precompileModules` / `--load-dynlib` at build time. | prebuilt cvc5, CTranslate2, external ATPs |

**C classification summary:**

- **Bundled C, compile with emcc:** leansqlite, UnicodeBasic, MD4Lean, lean-zip, lean-libcrypto shim, SciLean helpers, lean-tea.
- **System or prebuilt, needs a replacement:** libcurl, OpenSSL (libssl and libcrypto), libpq, hiredis, freetds and mysqlclient, BLAS, cvc5, CTranslate2.
- **Rust:** Blake3.lean, lithe, L4YAML (optional), lean-grpc interop.
- **Alloy (inline C generated at elab):** socket.lean (obsolete given Std.Async).

## 6. Gaps (server-side needs with no established Lean library)

1. **HTTP client.** Core `Std.Http` is server-only at v4.35.0, and every client binds libcurl. A Lasm-native client (Node `fetch` or `undici` behind `@[extern]`, or a pure-Lean HTTP/1.1 client on Std.Async TCP plus TLS) would be immediately useful. TLS client support is the hard part.
2. **TLS and crypto primitives** (SHA-256/512, HMAC, random bytes, AES-GCM, Ed25519, password hashing). The only pure options are a few weeks old, and the rest wrap OpenSSL. A Node `crypto` shim would be a quick win for JWT, sessions and webhooks.
3. **Postgres / MySQL drivers.** These are libpq-bound. pg-lean (pure wire protocol) exists but has 1★. A Std.Async-based pure driver would fit Lasm well.
4. **Logging / structured logging.** No library is established.
5. **UUID, base64 and hex in core.** Only tiny or unadopted packages exist.
6. **YAML, TOML and CSV.** L4YAML is promising but very new. TOML lives only inside Lake. For CSV, xubaiw/csv is stale and nathanial/tabular has ≈0★.
7. **Templating.** Typed HTML exists (lean-html), but there is no Mustache or Jinja-style engine.
8. **LLM / API SDKs and OpenAPI clients.** JamesGallicchio/lean-openapi appears in Reservoir as a dependent of Batteries; I did not inspect it.
9. **A JSON library free of `import Lean`** with real adoption. paulbutcher/lean-json is the only candidate. For Lasm, either make `Lean.Data.Json` compile cleanly or bless a pure alternative.

## 7. Caveats and unverified items

- **Reservoir coverage is incomplete.** It covers 898 packages, and many 2026 web libraries (paulbutcher/*, theoriclabs/*, kim-em/lean-zip) are not indexed. Their adoption is therefore under-measured and their score relies on stars and recency.
- **Code-search counts are approximate GitHub totals.** They are lower bounds that only cover `lakefile.lean` URL references, and they include forks and course repos. They were not run for ranks below about 20.
- **Reservoir `stars` and `updatedAt` are snapshot values.** I used live `gh api` stars and last-push dates instead. `updatedAt` reflects GitHub repo metadata, not commits.
- **Native-code detection is static grep only:** `extern_lib`, `precompileModules`, `moreLinkArgs`, `.c`/`.cpp`/`.rs` files, `@[extern`, and `import Lean` per file. Runtime `import Lean` was counted per file, not via reachability from runtime entry points. **No package was built under Lasm.** Mathlib was not cloned; its lakefile facts are from memory plus manifest data **(UNVERIFIED: no native code in Mathlib)**.
- **The "4.35 built" column comes from Reservoir CI.** It is not a Lasm build, and it reflects Reservoir's practice of retrying older revisions against newer toolchains.
- **Zulip archive recommendations were not mined (UNVERIFIED).** Std.Time timezone-data access and the absence of base64 in core are also unverified.
- **Unlisted packages are deliberately excluded.** `ulfjack/ryu` (1,355★) is indexed but is the C ryu library, not a Lean package. Large formalization repos (FLT, PFR, equational_theories, NavierStokes) have high stars but no dependents and are not libraries.
