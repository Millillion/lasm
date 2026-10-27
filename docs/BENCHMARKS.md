# Benchmarks

What you get from a Lasm build, measured the same way on every release
candidate. The numbers below are recorded automatically by
[`release-benchmarks.yml`](../.github/workflows/release-benchmarks.yml) after the
candidate pipeline retains a tested candidate, and committed with their raw data
to [`docs/benchmarks/history/`](benchmarks/history/) (one JSON file per
version). They are the baseline for optimization. Only the section between the
markers is generated (`bench/render.mjs`); the rest of this page is maintained
by hand.

<!-- benchmarks:generated:start -->
Latest: **0.1.0-experimental.40575962439** (2026-10-27), candidate SHA-256 `7c1dd2f85d2f…`, source `88317ee927`, harness `88317ee927`.

Reference runner: GitHub Actions ubuntu24 20261023.334.3, Ubuntu 24.04.5 LTS (linux-x64), AMD EPYC 7763 64-Core Processor, 4 CPUs, 16 GiB RAM, Node 26.12.1, CPU index 869 ms; server on CPUs 0-1, load generator on CPUs 2-3. Raw data: [history/0.1.0-experimental.40575962439.json](benchmarks/history/0.1.0-experimental.40575962439.json).

| Area | Metric | Median | Spread (min – max) | Same-runner comparison |
| --- | --- | ---: | --- | --- |
| Cold start | Trivial program, start to exit | 187 ms | 184 ms – 198 ms (n=10) | 6.36× node-hello |
| Cold start | Hono + Lean handler, start to first HTTP response | 255 ms | 244 ms – 266 ms (n=10) | 4.04× node-http |
| Cold start | Std.Http server, start to first HTTP response | 358 ms | 345 ms – 366 ms (n=10) | 5.66× node-http |
| Bundle size | Trivial program: dist/ | 8.2 MiB |  |  |
| Bundle size | Trivial program: program.wasm | 530 KiB |  |  |
| Bundle size | Trivial program: dist/, brotli | 1.6 MiB |  |  |
| Bundle size | Hono app: dist/ without node_modules | 8.5 MiB |  |  |
| Bundle size | Hono app: program.wasm, brotli | 166 KiB |  |  |
| Bundle size | Hono app: dist/node_modules | 1.4 MiB |  |  |
| Memory | Trivial program, peak RSS | 114 MiB | 114 MiB – 114 MiB (n=3) | 1.79× node-hello |
| Memory | Hono + Lean handler, idle RSS | 148 MiB | 148 MiB – 148 MiB (n=3) | 2.31× node-http |
| Memory | Hono + Lean handler, peak RSS under load | 327 MiB | 325 MiB – 329 MiB (n=3) | 3.80× node-http |
| Memory | Std.Http server, peak RSS under load | 491 MiB | 478 MiB – 497 MiB (n=3) | 5.73× node-http |
| HTTP | Hono + Lean handler, throughput | 9,740 req/s | 9,625 req/s – 9,808 req/s (n=3) | 0.18× node-http; 0.22× node-hono |
| HTTP | Hono + Lean handler, p99 latency | 6.9 ms | 6.9 ms – 7.1 ms (n=3) | 11.09× node-http |
| HTTP | Express + Lean handler, throughput | 6,243 req/s | 6,206 req/s – 6,269 req/s (n=3) | 0.12× node-http; 0.37× node-express |
| HTTP | Express + Lean handler, p99 latency | 9.1 ms | 9.0 ms – 9.3 ms (n=3) | 14.51× node-http |
| HTTP | Std.Http server, throughput | 623 req/s | 605 req/s – 648 req/s (n=3) | 0.01× node-http |
| HTTP | Std.Http server, p99 latency | 37 ms | 34 ms – 38 ms (n=3) | 57.58× node-http |
| HTTP | Plain Node node:http (reference) | 52,668 req/s | 52,488 req/s – 53,142 req/s (n=3) |  |
| Interop | Lean→JS call round trip, p50 | 46 µs | 45 µs – 47 µs (n=3) |  |
| Interop | Await a resolved JS promise, p50 | 49 µs | 49 µs – 69 µs (n=3) |  |
| Big numbers | 10,000-digit multiplication | 1264 µs | 1263 µs – 1264 µs (n=3) |  |
| Big numbers | 20,000 by 5,000-digit division | 2241 µs | 2239 µs – 2242 µs (n=3) |  |
| Big numbers | 10,000-digit toString | 127288 µs | 127148 µs – 127361 µs (n=3) |  |
| Build | Clean build, trivial program | 4.6 s | 4.6 s – 4.8 s (n=3) |  |
| Build | Incremental build after a one-line change, trivial program | 6.7 s | 6.7 s – 6.8 s (n=3) |  |
| Build | Clean build, Hono app | 7.2 s | 7.2 s – 33 s (n=3) |  |
| Build | Incremental build after a one-line change, Hono app | 10 s | 10 s – 10 s (n=3) |  |
| Build | Incremental dev build (--dev, lasm run), trivial program | 1.6 s | 1.6 s – 2.2 s (n=3) |  |
| Build | Incremental dev build (--dev, lasm run), Hono app | 3.1 s | 3.1 s – 3.8 s (n=3) |  |
| Bundle size | Hono app: program.wasm, dev profile | 929 KiB |  |  |
| Install | Package download (npm tarball) | 71 MiB |  |  |
| Install | Installed size | 403 MiB |  |  |
| Install | npm install, empty cache | 8.0 s | 8.0 s – 8.1 s (n=3) |  |
| Install | First build incl. one-time tool download | 27 s |  |  |
| Install | Tool cache on disk after the first build | 2504 MiB |  |  |

Ratios divide by the plain-Node reference measured in the same run (for throughput, below 1 means slower; for time, latency and memory, above 1 means more). Every metric, including the reference servers and frameworks, is in the [raw data](benchmarks/history/0.1.0-experimental.40575962439.json).

### Change from the previous release (0.1.0-experimental.40545444639)

Flagged (informational; releases are not blocked on performance yet):

| Metric | Before | After | Worse by | Compared as |
| --- | ---: | ---: | ---: | --- |
| Lean awaits a resolved JS promise (Promise.resolve(1)), p50 | 26 µs | 49 µs | 70 % | normalized by the runner CPU index |
| Lean→JS synchronous call round trip (Math.max()), p50 | 26 µs | 46 µs | 60 % | normalized by the runner CPU index |
| Lean awaits a resolved JS promise (Promise.resolve(1)), p99 | 47 µs | 84 µs | 59 % | normalized by the runner CPU index |
| Lean→JS synchronous call round trip (Math.max()), p99 | 55 µs | 88 µs | 43 % | normalized by the runner CPU index |
| npm install time, empty npm cache | 5.7 s | 8.0 s | 42 % | absolute |
| Idle RSS after start, Lean's Std.Http server | 170 MiB | 239 MiB | 37 % | ratio to node-http |
| Peak RSS under load, Lean's Std.Http server | 365 MiB | 491 MiB | 35 % | ratio to node-http |
| Start to listening, Lean's Std.Http server | 185 ms | 245 ms | 32 % | absolute |
| Start to listening, Express with a Lean handler | 241 ms | 314 ms | 31 % | absolute |
| First build on a new machine (includes one-time tool download) | 20 s | 27 s | 30 % | absolute |
| Start to listening, Hono with a Lean handler | 217 ms | 281 ms | 29 % | absolute |
| Start to first output, Trivial Lean program | 143 ms | 178 ms | 24 % | absolute |
| Idle RSS after start, Hono with a Lean handler | 120 MiB | 148 MiB | 20 % | ratio to node-http |

### Trend (reference runner, last releases)

| Metric | …40121836396 | …40131225697 | …40149908009 | …40282965569 | …40431033948 | …40494203854 | …40545444639 | …40575962439 |
| --- | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: |
| Trivial program, start to exit | 184 ms (7.94×) | 253 ms (8.15×) | 238 ms (8.38×) | 259 ms (8.19×) | 195 ms (6.34×) | 120 ms (5.89×) | 152 ms (5.88×) | 187 ms (6.36×) |
| Hono + Lean handler, start to first HTTP response | 251 ms (5.16×) | 349 ms (5.34×) | 326 ms (5.45×) | 357 ms (5.29×) | 264 ms (4.14×) | 159 ms (4.10×) | 197 ms (3.83×) | 255 ms (4.04×) |
| Std.Http server, start to first HTTP response | 281 ms (5.79×) | 393 ms (6.02×) | 368 ms (6.15×) | 395 ms (5.84×) | 368 ms (5.78×) | 218 ms (5.64×) | 271 ms (5.26×) | 358 ms (5.66×) |
| Trivial program: dist/ | 8.2 MiB | 8.2 MiB | 8.2 MiB | 8.2 MiB | 8.2 MiB | 8.2 MiB | 8.2 MiB | 8.2 MiB |
| Trivial program: program.wasm | 535 KiB | 535 KiB | 535 KiB | 535 KiB | 530 KiB | 530 KiB | 530 KiB | 530 KiB |
| Trivial program: dist/, brotli | 1.6 MiB | 1.6 MiB | 1.6 MiB | 1.6 MiB | 1.6 MiB | 1.6 MiB | 1.6 MiB | 1.6 MiB |
| Hono app: dist/ without node_modules | 8.5 MiB | 8.5 MiB | 8.5 MiB | 8.5 MiB | 8.5 MiB | 8.5 MiB | 8.5 MiB | 8.5 MiB |
| Hono app: program.wasm, brotli | 167 KiB | 167 KiB | 167 KiB | 167 KiB | 166 KiB | 166 KiB | 166 KiB | 166 KiB |
| Hono app: dist/node_modules | 1.4 MiB | 1.4 MiB | 1.4 MiB | 1.4 MiB | 1.4 MiB | 1.4 MiB | 1.4 MiB | 1.4 MiB |
| Trivial program, peak RSS | 172 MiB (2.68×) | 172 MiB (2.59×) | 172 MiB (2.81×) | 172 MiB (2.58×) | 114 MiB (1.87×) | 114 MiB (1.73×) | 96 MiB (1.58×) | 114 MiB (1.79×) |
| Hono + Lean handler, idle RSS | 212 MiB (3.30×) | 212 MiB (3.31×) | 213 MiB (3.32×) | 212 MiB (3.31×) | 150 MiB (2.33×) | 148 MiB (2.31×) | 120 MiB (1.92×) | 148 MiB (2.31×) |
| Hono + Lean handler, peak RSS under load | 390 MiB (4.55×) | 387 MiB (4.52×) | 385 MiB (4.50×) | 389 MiB (4.51×) | 326 MiB (3.81×) | 329 MiB (3.74×) | 273 MiB (3.25×) | 327 MiB (3.80×) |
| Std.Http server, peak RSS under load | 541 MiB (6.30×) | 511 MiB (5.94×) | 512 MiB (5.95×) | 483 MiB (5.61×) | 481 MiB (5.59×) | 573 MiB (6.56×) | 365 MiB (4.26×) | 491 MiB (5.73×) |
| Hono + Lean handler, throughput | 14,349 req/s (0.17×) | 9,499 req/s (0.18×) | 9,553 req/s (0.18×) | 9,550 req/s (0.18×) | 9,768 req/s (0.19×) | 24,911 req/s (0.24×) | 14,674 req/s (0.16×) | 9,740 req/s (0.18×) |
| Hono + Lean handler, p99 latency | 5.6 ms (15.52×) | 7.2 ms (11.25×) | 7.1 ms (11.41×) | 7.3 ms (11.46×) | 6.9 ms (11.27×) | 4.2 ms (13.75×) | 6.1 ms (15.49×) | 6.9 ms (11.09×) |
| Express + Lean handler, throughput | 9,723 req/s (0.11×) | 6,203 req/s (0.12×) | 6,334 req/s (0.12×) | 6,128 req/s (0.12×) | 6,305 req/s (0.12×) | 18,678 req/s (0.18×) | 9,891 req/s (0.11×) | 6,243 req/s (0.12×) |
| Express + Lean handler, p99 latency | 6.6 ms (18.61×) | 9.2 ms (14.56×) | 9.1 ms (14.24×) | 9.8 ms (15.39×) | 9.0 ms (14.13×) | 5.1 ms (16.43×) | 6.7 ms (18.25×) | 9.1 ms (14.51×) |
| Std.Http server, throughput | 966 req/s (0.01×) | 649 req/s (0.01×) | 654 req/s (0.01×) | 649 req/s (0.01×) | 662 req/s (0.01×) | 1,290 req/s (0.01×) | 915 req/s (0.01×) | 623 req/s (0.01×) |
| Std.Http server, p99 latency | 22 ms (62.95×) | 34 ms (52.77×) | 34 ms (57.13×) | 35 ms (53.19×) | 34 ms (54.69×) | 20 ms (63.18×) | 26 ms (67.83×) | 37 ms (57.58×) |
| Plain Node node:http (reference) | 85,676 req/s | 53,565 req/s | 53,629 req/s | 53,700 req/s | 52,222 req/s | 103,134 req/s | 89,705 req/s | 52,668 req/s |
| Lean→JS call round trip, p50 | 30 µs | 52 µs | 44 µs | 47 µs | 47 µs | 24 µs | 26 µs | 46 µs |
| Await a resolved JS promise, p50 | 26 µs | 50 µs | 67 µs | 52 µs | 50 µs | 22 µs | 26 µs | 49 µs |
| 10,000-digit multiplication | 976 µs | 1266 µs | 1264 µs | 1266 µs | 1265 µs | 810 µs | 958 µs | 1264 µs |
| 20,000 by 5,000-digit division | 1901 µs | 2236 µs | 2229 µs | 2235 µs | 2257 µs | 1369 µs | 1915 µs | 2241 µs |
| 10,000-digit toString | 105335 µs | 127752 µs | 127760 µs | 128283 µs | 127529 µs | 79607 µs | 105251 µs | 127288 µs |
| Clean build, trivial program | 5.0 s | 6.7 s | 6.4 s | 6.8 s | 4.7 s | 2.8 s | 3.7 s | 4.6 s |
| Incremental build after a one-line change, trivial program | 7.0 s | 9.0 s | 8.8 s | 9.2 s | 6.9 s | 4.5 s | 5.8 s | 6.7 s |
| Clean build, Hono app | 9.0 s | 9.3 s | 9.0 s | 9.4 s | 7.4 s | 4.7 s | 5.8 s | 7.2 s |
| Incremental build after a one-line change, Hono app | 10 s | 13 s | 12 s | 13 s | 10 s | 6.6 s | 8.3 s | 10 s |
| Incremental dev build (--dev, lasm run), trivial program | 4.1 s | 5.3 s | 5.1 s | 5.5 s | 1.7 s | 1.0 s | 1.3 s | 1.6 s |
| Incremental dev build (--dev, lasm run), Hono app | 6.8 s | 8.1 s | 7.8 s | 8.2 s | 3.2 s | 2.0 s | 2.5 s | 3.1 s |
| Hono app: program.wasm, dev profile | 926 KiB | 926 KiB | 926 KiB | 926 KiB | 929 KiB | 929 KiB | 929 KiB | 929 KiB |
| Package download (npm tarball) | 62 MiB | 63 MiB | 63 MiB | 63 MiB | 71 MiB | 71 MiB | 71 MiB | 71 MiB |
| Installed size | 363 MiB | 370 MiB | 370 MiB | 370 MiB | 403 MiB | 403 MiB | 403 MiB | 403 MiB |
| npm install, empty cache | 5.1 s | 7.2 s | 7.2 s | 7.3 s | 8.1 s | 4.9 s | 5.7 s | 8.0 s |
| First build incl. one-time tool download | 39 s | 23 s | 23 s | 24 s | 23 s | 19 s | 20 s | 27 s |
| Tool cache on disk after the first build | 2500 MiB | 2503 MiB | 2503 MiB | 2503 MiB | 2504 MiB | 2504 MiB | 2504 MiB | 2504 MiB |
<!-- benchmarks:generated:end -->

## The benchmark set and why

Each benchmark answers a question a user deploying Lean on Node asks, and the
set stays small enough to run on every candidate on one free runner (about
25 minutes on `ubuntu-24.04`).

| Benchmark | Question it answers | Fixture |
| --- | --- | --- |
| Cold start: process start to exit (program) and to listening and first HTTP response (servers) | How long until my program or server is useful? It decides autoscaling, serverless and CLI latency. | trivial program; Hono, Express and `Std.Http` servers |
| Bundle size: `dist/` total, `program.wasm`, gzip and brotli, with `dist/node_modules` separate | How much do I ship and store? Container and function size limits; npm dependencies are the app's own choice, so they are separate. | trivial program; Hono app (plus Express, `Std.Http`, interop) |
| Memory: peak RSS of the trivial program; idle RSS and peak RSS under load for servers | Which instance size do I need? The 512 MB recommendation comes from these. | same |
| HTTP throughput and p50/p99 latency at fixed concurrency | How much traffic does one instance serve, and how slow is the tail? Covers the recommended interop path (Hono, Express with Lean handlers) and Lean's own `Std.Http`. | GET `/` answering `{"ok":true}` |
| Interop latency: Lean→JS call round trip; awaiting a resolved promise | What does each JavaScript call cost, so bindings can be designed coarse-grained? | `Math.max()`; `Promise.resolve(1)` |
| Build time: clean (`--rebuild`) and incremental after a one-line change, release and dev profile; a one-job release build must be byte-identical | How long is the edit–build loop? | trivial program; Hono app |
| Big numbers: multiplication, division and `toString` of 10,000-digit `Nat`s | How slow is arbitrary-precision arithmetic without GMP? The runtime uses Lean's own big-number code ([below](#big-numbers-without-gmp)). | `bench/fixtures/bignum` |
| `@lasm/cli` install: download size, installed size, `npm install` time; first build including the one-time tool download, and the tool cache size | What does getting started cost? | the candidate npm archive |

Not in the set, on purpose: language-level microbenchmarks (they depend on the
program, and Lean's own compiler decides most of them), long soaks and fault
injection (covered by the robustness suites in [SERVER_MVP.md](SERVER_MVP.md)
and the 5.2 interop soak), and native-Lean comparisons (the Std.Http robustness
suite already compares against native; here the reference is plain Node, which
is what a user would otherwise write).

## Build time: where it goes, and the two profiles (current source)

A profile of `lasm build` on 2026-10-24 (source `85f864a`) found that most of the
40–70 s did not depend on the program, which is why an incremental build was no
faster than a clean one:

- tool re-verification on every build, cache hits included: SHA-256 of the whole
  Lean prefix (7–16k files, 5–12 s), the link toolchain (2 s) and the runtime
  bundle (1 s);
- initializer planning: 3 compilations at `-O2` of the generated wrapper C
  (2.5 MB for the Hono app, about 10 s each; the last round's source equals
  the final link's), 5 probe links (about 1.3 s each), and parsing the runtime
  archives (2.5 s);
- the final link: `wasm-opt -Oz` (8–14 s) on one thread (`BINARYEN_CORES=1`
  for every user), and about 3 s of JavaScript passes;
- a requirements probe link that also ran the full glue pipeline (1.4 s), only
  to read its map.

What changed. The caching and threading below left release outputs
byte-identical (`program.wasm` and `program.cjs`, both fixtures, compared by
SHA-256); the restructured initializer wrappers then changed the bytes once
([DECISIONS.md](DECISIONS.md)). Release builds stay byte-reproducible:

- tools and the runtime are re-hashed only when a file's size, permissions,
  inode or modification time differs from the machine's record of its last full
  check (`<tool cache>/verified/`); `lasm cache repair` always checks every byte;
- every generated C file (Lean modules, initializer wrappers, stubs) is cached by
  content, and so is the live set of each planning probe link (keyed by the
  bytes of its inputs, the runtime identity, the tools and the link-driver code);
  the requirements check reuses the last planning round's identical link;
- the runtime archives' initializer analysis is cached per runtime identity, and
  the Lasm.JS bindings read from unchanged module files are reused;
- the generated initializer wrappers use out-of-line helpers and are split into
  4 translation units that compile in parallel (a fixed split: the output does
  not depend on the machine);
- a newly installed or derived tool is recorded as verified when it is created,
  so its first reuse is not re-hashed either;
- `wasm-opt` uses the machine's CPUs (at most 8; `LASM_BUILD_JOBS`), which
  does not change its output (the benchmark run asserts this for both fixtures);
- the **dev profile** (`lasm Main.lean`, `npm run dev`, `lasm build --dev`)
  skips `wasm-opt -Oz`, metadce and the JavaScript dead-code passes. It is
  deterministic, labelled in `build-info.json` (`"profile"`) and on the summary
  line, about 15–20 % larger, and refused by `lasm package` without `--allow-dev`.

Measured on the maintainer host (Linux x64, inside the resource guard: base
pages and **one** Binaryen thread, so the `wasm-opt` part is the single-thread
worst case; CI's 4-vCPU runner has been about 1.6× faster on this work):

| Build | Before | After, release | After, dev |
| --- | ---: | ---: | ---: |
| Trivial program, `--rebuild` | 55 s | 21 s | 3.4 s ¹ |
| Trivial program, one-line change | 46 s | 18 s | 6.4 s |
| Hono app, `--rebuild` | 81 s | 29 s | 5.8 s ¹ |
| Hono app, one-line change | 66 s | 26 s | 9.7 s |
| Unchanged program (cache hit), Hono | about 20 s ² | 2.1 s | 2.1 s |

¹ after a release build of the same source, so the planning links were cached.
² estimated from the measured verification cost; the hit itself was 2 s once records existed.

On the free GitHub runners, all five platforms, measured with
[`build-profile.yml`](../.github/workflows/build-profile.yml)
(`scripts/ci/build-profile.mjs`: per-stage and per-tool times on the installed
candidate; one sequence per runner, so single samples on shared machines, and
the Intel Mac runner varies by 2× between runs). "First build in a new
project" includes the one-time tool download for hello only.

Candidate `0.1.0-experimental.40115736287` (round 1: caching, threads, dev
profile; run 40119882655):

| Build (seconds) | linux-x64 | linux-arm64 | win32-x64 | darwin-arm64 | darwin-x64 |
| --- | ---: | ---: | ---: | ---: | ---: |
| hello: first build in a new project | 58.3 | 44.8 | 167.3 | 63.2 | 223.4 |
| hello: --rebuild | 12.1 | 9.5 | 12.2 | 14.8 | 43.0 |
| hello: one-line edit | 10.1 | 7.3 | 12.0 | 9.5 | 32.9 |
| hello: dev, one-line edit | 4.9 | 3.9 | 4.9 | 3.4 | 13.0 |
| hono: first build in a new project | 81.2 | 63.4 | 182.1 | 85.0 | 228.7 |
| hono: --rebuild | 21.8 | 16.3 | 23.5 | 44.2 | 67.7 |
| hono: unchanged (cache hit) | 1.8 | 1.5 | 3.1 | 4.5 | 5.2 |
| hono: one-line edit | 14.7 | 10.7 | 20.3 | 19.6 | 31.6 |
| hono: dev, one-line edit | 8.1 | 6.6 | 9.9 | 10.4 | 14.6 |

Candidate `0.1.0-experimental.40121836396` (round 2: parallel initializer
wrappers, tools recorded at installation, cached binding reads; run
40122336777):

| Build (seconds) | linux-x64 | linux-arm64 | win32-x64 | darwin-arm64 | darwin-x64 |
| --- | ---: | ---: | ---: | ---: | ---: |
| hello: first build in a new project | 26.3 | 33.4 | 172.1 | 54.1 | 230.9 |
| hello: --rebuild | 4.7 | 4.4 | 15.5 | 8.7 | 31.7 |
| hello: one-line edit | 5.0 | 6.3 | 14.5 | 12.7 | 39.7 |
| hello: dev, one-line edit | 2.9 | 3.8 | 7.1 | 5.2 | 17.3 |
| hono: first build in a new project | 41.0 | 44.6 | 211.3 | 85.1 | 295.2 |
| hono: --rebuild | 7.0 | 8.4 | 33.5 | 12.5 | 46.7 |
| hono: unchanged (cache hit) | 0.5 | 0.6 | 1.9 | 0.7 | 2.7 |
| hono: one-line edit | 7.8 | 9.3 | 24.4 | 19.6 | 42.1 |
| hono: dev, one-line edit | 5.2 | 6.3 | 14.1 | 11.2 | 23.5 |

First builds (source `ea4f17e`, run 40127904162): a synchronous archive
writer that hashes as it writes (node-tar took 12.7 s for one Lean tier on the
Windows runner, this writer 3.2 s), tool archives downloaded, extracted and
hard-linked concurrently, prefix receipts reusing the verified originals'
hashes, `-O0` planning probes, and Lasm.JS shipped compiled for Lean 4.35.0.
"Hono new machine" is a new user's very first build: an empty tool cache and a
new project, with the download time reported separately:

| Build (seconds) | linux-x64 | linux-arm64 | win32-x64 | darwin-arm64 | darwin-x64 |
| --- | ---: | ---: | ---: | ---: | ---: |
| Hono new machine, download | 4.6 | 17.9 | 6.5 | 23.1 | 9.9 |
| Hono new machine, without download | 37.3 | 30.1 | 63.6 | 38.6 | 108.8 |
| hono: first build on a new machine | 41.9 | 48.1 | 70.1 | 61.8 | 118.7 |
| hello: first build in a new project | 23.8 | 28.1 | 57.6 | 29.2 | 68.9 |
| hello: --rebuild | 5.7 | 4.4 | 11.1 | 3.8 | 12.1 |
| hello: one-line edit | 7.8 | 6.3 | 14.4 | 5.3 | 15.4 |
| hello: dev, one-line edit | 4.5 | 4.5 | 7.0 | 3.0 | 8.9 |
| hono: first build in a new project | 28.6 | 32.2 | 68.4 | 33.5 | 79.4 |
| hono: --rebuild | 7.9 | 6.4 | 16.8 | 5.8 | 18.6 |
| hono: unchanged (cache hit) | 0.7 | 0.7 | 1.9 | 0.7 | 1.9 |
| hono: one-line edit | 10.9 | 9.0 | 21.6 | 10.6 | 24.0 |
| hono: dev, one-line edit | 6.4 | 6.0 | 11.3 | 6.8 | 14.4 |

Before these changes the first Hono build in a new project (tools for hello
already installed) took 41 / 45 / 211 / 85 / 295 s on the same five runners.
Since then the runtime archives' initializer analysis is shipped with the
package (2.1 s → 0.04 s on a new machine), the program-independent planning
probe runs alongside the others, and Lasm's planning objects and probe records
are kept machine-wide (`<tool cache>/objects`, self-checking entries, at most
600 entries / 768 MiB): a second new project on the same machine skips its
planning (maintainer host, one job: Hono 36 → 18 s, hello 21 → 10.5 s).

The Intel Mac runner stays at about 100 s for a new machine's first Hono
build without the download: each wasm-ld probe link takes 2.5 s there (1.1 s
on Linux) and `wasm-opt -Oz` 8 s. This is accepted for 0.1.0 as a hardware
limit; on such machines use the dev profile (`lasm Main.lean`, `npm run dev`)
for the edit loop.

The 0.1.0 source (`453ac42`, with everything above; run 40131930601):

| Build (seconds) | linux-x64 | linux-arm64 | win32-x64 | darwin-arm64 | darwin-x64 |
| --- | ---: | ---: | ---: | ---: | ---: |
| Hono new machine, download | 14.2 | 20.4 | 17.2 | 9.3 | 13.1 |
| Hono new machine, without download | 25.7 | 27.8 | 44.4 | 58.7 | 141.9 |
| hono: first build on a new machine | 39.9 | 48.2 | 61.6 | 68.0 | 154.9 |
| hello: first build in a new project | 21.7 | 28.2 | 53.9 | 19.9 | 73.8 |
| hello: --rebuild | 4.5 | 4.6 | 8.1 | 4.3 | 14.9 |
| hello: one-line edit | 6.3 | 6.5 | 11.0 | 6.5 | 18.6 |
| hello: dev, one-line edit | 3.6 | 3.9 | 5.5 | 4.0 | 11.1 |
| hono: first build in a new project | 26.6 | 29.7 | 61.0 | 32.7 | 88.8 |
| hono: --rebuild | 6.5 | 6.4 | 11.7 | 6.8 | 21.4 |
| hono: unchanged (cache hit) | 0.6 | 0.7 | 1.4 | 0.6 | 2.3 |
| hono: one-line edit | 9.1 | 9.2 | 15.8 | 11.4 | 29.5 |
| hono: dev, one-line edit | 5.4 | 6.1 | 8.7 | 7.1 | 17.7 |

Against the 0.1.0 targets (CI-class machines): a new user's first Hono build
without the download meets "about 30 s" on Linux (26–28 s) and "about 60 s"
on Windows (44 s) and Apple Silicon (59 s; 39 s in the previous run, the
3-vCPU runner varies); release rebuilds take 4–8 s on Linux and Apple
Silicon and 8–12 s on Windows; dev edits 3.6–7 s there. The Intel Mac runner
is the accepted exception (142 s new machine, 18 s Hono dev edit).

What remains, by platform:

- **Linux** (x64, arm64) meets the targets: release rebuilds 4–8 s, edits
  5–9 s, dev edits 3–6 s.
- **Windows x64** and **Intel macOS**: `wasm-opt -Oz` takes 8–11 s there
  (3–5 s on Linux with the same 4 threads), and each `wasm-ld` probe link
  1.3–4.5 s. The dev profile avoids the first.
- A first rebuild after new tools were assembled re-hashed a prefix once (5–16 s
  on Windows and macOS): hard-linking a tier changed its files' change time.
  The record now ignores the change time (after round 2).
- The Lasm.JS binding read (`lean --run`) takes 1–5 s on every edit of a
  Lasm.JS program; it now imports only `Lean.Environment` (1.2 → 0.4 s here).


## Edit loop (lasm dev)

Branch `dx` (after 0.2.0). Goal: an ordinary one-function edit rebuilt in at
most 2 s on the Linux x64 runner. A profile of a dev edit before the work
(maintainer host, one build job, Hono fixture: 8.0 s; template project 5.9 s):

| Step | Before | What changed |
| --- | ---: | --- |
| Lake adapter (`lake-module.lean`, Lake plugin) | 1.35 s | Cached by Lake configuration and import headers |
| Lake transitive imports, `.olean` list queries | 0.3 s | Cached the same way |
| Lean elaboration of the edited module (Lake `:c` query) | 0.8 s | — (the floor) |
| Lasm.JS binding read (`lean --run`) and check | 0.4 s | Runs while the program compiles and links; the check is cached by bindings and npm closure |
| clang of the edited module | 0.45 s | `-O1` in dev (0.40 s; more on large modules) |
| Planning probes (wasm-ld, 2 per edit) | 2.6 s | Seeded plan: the delivered link is the planning round; body probes reuse cached results (trivial initializers stubbed) |
| Final wasm-ld | 1.3 s | Links only the runtime members the previous link kept (0.13 s), checked by imports |
| Emscripten JS steps (symbols, glue, growableHeap) | 1.2 s | Cached by content (also in release) |
| npm copy, output hashing | 0.3 s | Copy overlaps the link |
| Tool verification walks, `lean --githash`, driver identity | 0.4 s | Once per `lasm dev` session |

Measured on the free `ubuntu-24.04` runner (4 vCPUs) with
[`build-profile.yml`](../.github/workflows/build-profile.yml) (`platforms:
linux-x64`, `edit-loop-only`), in-process as `lasm dev`'s build worker runs,
after the first dev build; "new process" is `lasm build --dev` after an edit
(as `npm run dev` in a plain project). Edits add a definition before `main`.

| Dev rebuild after a one-function edit (s) | Before (run 40127904162) | After (run 40289712451) |
| --- | ---: | ---: |
| Hono fixture (standalone `Main.lean`), steady state | 6.4 | 1.5, 1.5 (first edit after the first build 2.4) |
| Template project (`lasm init --template hono`, Lake), steady state | — | 1.8, 1.8 (first edit 4.0: Lake caches fill) |
| Hono fixture, new process | 6.4 | 2.5 |
| Template project, new process | — | 2.7 |

All five runners (run 40296021942; Windows after the map-path fix, run
40298630380), steady-state in-process dev edits / a new `lasm build --dev`
process:

| Fixture | linux-x64 | linux-arm64 | darwin-arm64 | darwin-x64 | win32-x64 |
| --- | ---: | ---: | ---: | ---: | ---: |
| Hono fixture | 1.5 / 2.5 | 1.5 / 2.3 | 2.1–2.8 / 4.9 | 4.2 / 7.0 | 4.2 / 6.2 |
| Template project | 1.8–1.9 / 2.7 | 1.8 / 2.5 | 2.9–3.2 / 5.4 | 4.5–5.4 / 7.0 | 4.0–4.1 / 6.3 |

On Windows, Lean's three processes per edit take 1.7 s (0.7 s on Linux).

End to end with `npm run dev` (`lasm dev`) on the runner, editing `App.lean`
in the template projects and timing until the restarted server listens
(`dx-dev-loop.yml`, `scripts/templates/dev-loop-check.mjs`, run 40289814978,
before the trivial-initializer stubs): Hono 2.3 s build (2.8 s to listening),
Fastify 3.3 s (3.9 s). The `lasm dev` summary line names the parts, for
example `Built in 1.9 s (Lean 1.0s · C 0.1s · link 0.6s · output 0.2s)`.

Release builds keep their bytes (the Hono fixture's `program.wasm` and
`program.cjs` compared by SHA-256 before and after) and get faster from the
cached JavaScript steps (maintainer host, one-line edit: 20.3 → 17.2 s). The
whole profile on the runner (linux-x64; before: run 40127904162, after: run
40290721986, same harness):

| Build (seconds) | Before | After |
| --- | ---: | ---: |
| Hono new machine, without download | 37.3 | 37.7 |
| hello: --rebuild / one-line edit | 5.7 / 7.8 | 4.0 / 5.9 |
| hello: dev, one-line edit | 4.5 | 1.6 |
| hono: first build in a new project | 28.6 | 30.5 |
| hono: --rebuild / one-line edit | 7.9 / 10.9 | 6.2 / 8.9 |
| hono: dev, one-line edit (first after a release build) | 6.4 | 2.6 |
Edge targets in `lasm dev` use an edge dev profile (Binaryen lowering only).

### Browser target (branch `dx-browser`)

The web template (`Lasm.UI` counter), one view expression edited, Linux x64
runner, browser.yml: before (run 40293687681, `lasm build --dev --target
browser` per save, the browser branch alone) 16.8 s. After (run 40298525152):

| | Before | After |
| --- | ---: | ---: |
| `lasm dev --target browser` (warm worker), per edit | 16.8 s (a new process per save) | 1.9 s (first edit after the first build 3.5 s) |
| A new `lasm build --dev --target browser` process | 16.8 s | 3.4 s |

With Lasm.UI merged and the edge link's nm listings, compact initializer
object and modularize wrapper reused (browser.yml 40310922142, all jobs green):
`lasm dev --target browser` 1.7, 1.6, 1.7 s per edit (first 3.0 s); `lasm dev
--target workers` 1.6 s (first 3.0 s); Vite dev (`@lasm/cli/vite`, warm worker)
1.8, 2.7, 1.7 s from save to the remounted app; a new `lasm build --dev
--target browser` process 3.6 s. The evidence gates the 2 s budget on the
`lasm dev` number and records the other two.

Where an edit's time goes after the change (maintainer host, one build job,
`lasm dev --target browser`, 2.6 s there): Lake query with elaboration 0.7 s,
clang 0.2 s, Node link (link only, live members) 0.4 s, edge link (live
members) 0.1 s, Binaryen lowering 0.2 s, Emscripten modularize 0.2 s, the
rest Lasm's own work (bindings, bundle, output). Removed from every edit: the
Node glue and host, the planning probes, a full edge link, and brotli 11 /
gzip 9 of the outputs (about 2 s alone).

## Cold start on a fraction of a CPU

Function platforms run a function with a share of a CPU: AWS Lambda gives one
vCPU at 1,769 MB, so about 0.29 vCPU at 512 MB and 0.58 at 1,024 MB, enforced
by a CFS quota. [`scripts/serverless/cold-start-cpu.mjs`](../scripts/serverless/cold-start-cpu.mjs)
starts `node dist/main.mjs` under such a quota (systemd `CPUQuota`) and times
the first answered `GET /health`, five fresh processes per cell, interleaved
(`ubuntu-24.04`, Node 26.12.1, release builds of the templates). Runtime
`1b868b43…` with fewer Lean threads at start-up (run 40336699599; previous
runtime `8b3e33e0…`, run 40289814978, in brackets):

| Template | 4 CPUs | 1 CPU | 0.58 CPU | 0.29 CPU | CPU time used |
| --- | ---: | ---: | ---: | ---: | ---: |
| Hono, 1 pre-started Worker (now the default) | 275 ms (363) | 355 ms (526) | 642 ms (885) | 1,289 ms (1,818) | 380 ms (540) |
| Express, 1 pre-started Worker | 301 ms (409) | 394 ms (537) | 705 ms (924) | 1,423 ms (1,866) | 410 ms (570) |
| Fastify, 1 pre-started Worker | 338 ms (449) | 483 ms (621) | 776 ms (1,053) | 1,615 ms (2,073) | 480 ms (610) |
| Hono, 4 pre-started Workers (the earlier default) | 288 ms (343) | 465 ms (532) | 752 ms (948) | 1,596 ms (1,909) | 460 ms (570) |
| Hono, none (`LASM_THREAD_POOL=0`) | 284 ms | 359 ms | 578 ms | 1,250 ms | 370 ms |

What this shows:

- A cold start is CPU-bound, so its time is roughly the CPU it uses divided by
  the CPU share. Hono now uses about 0.38 s of CPU (was 0.54 s), and at 0.29
  vCPU (Lambda at 512 MB) answers in about 1.3 s instead of 1.8 s.
- Every Lean thread is a Node Worker that costs 40–60 ms of CPU to start. A
  Hono start used to start six: Lean's main thread (`PROXY_TO_PTHREAD`), a
  second thread that upstream's `lean_run_main` starts for `main`, the host
  completion thread, Lasm.JS's interop thread and two task workers. Now `main`
  runs on the main thread (patch `lean-4.35.0-node-threads`), the completion
  thread starts with the first asynchronous host request, and `waitForever`
  makes `main` Lasm.JS's interop poller; three remain (main and two task workers,
  one for the "listening" callback and one for the first request). Programs
  that never call `waitForever` get a poller thread when JavaScript first calls
  them (decisions of 2026-10-26).
- With few threads needed, pre-starting Workers no longer pays even on 4 CPUs:
  `LASM_THREAD_POOL` (0–64) now defaults to 1, the Worker that runs Lean's main
  thread.
- Still not at the ≤ 300 ms CPU target for Hono on one core: about 380 ms
  remain, of which Node's main thread (Node itself, `main.mjs` and the host
  modules, Hono and undici, `program.cjs`, the Wasm compile) is 120–180 ms,
  the three Workers about 150 ms and V8's background threads about 40 ms.
  Lean's task manager starts a worker per task queued while none is idle, so
  the burst of two callbacks at start costs a second task Worker; changing that
  upstream scheduling rule is left open (decisions of 2026-10-26).
- Tried and reverted earlier: writing standard output synchronously instead of
  through the native file Worker (broke the guarantee that a full stdout pipe
  never blocks the host's event loop, `test/stdio-backpressure.test.mjs`); a V8
  code cache for `program.cjs` and Node's compile cache made no difference.

## Big numbers without GMP

Lasm's Wasm runtime is built with Lean's `-DUSE_GMP=OFF` (docs/PLAN.md decision 5,
runtime `8b3e33e0…`): Lean's own big-number code (32-bit digits, schoolbook
multiplication and division, Euclid's gcd) replaces GNU MP, so built apps contain
no LGPL code. `Nat`/`Int` values that fit in 63 bits stay unboxed and never reach
this code. Results are identical to native Lean (with GMP) on 22,849 checked
lines of edge-case and pseudo-random operations
([integration/bignum-differential.mjs](../integration/bignum-differential.mjs)).

Median time per operation, one Linux x64 machine (local, Node 26), measured with
[integration/bignum-throughput.mjs](../integration/bignum-throughput.mjs):
native Lean 4.35.0 (GMP), the previous Wasm runtime `7aa5028c…` (GMP 6.3.0
built for Wasm) and the current one. "a×a" has `digits`-digit operands; division
and remainder divide the 2×`digits` product by a `digits`/2-digit number.

| Operation | Digits | Native (GMP) | Wasm, GMP | Wasm, Lean's code | vs Wasm GMP | vs native |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| a×a | 100 | 1.0 µs | 2.6 µs | 2.4 µs | 0.9× | 2.4× |
| a×a | 1,000 | 3.1 µs | 11.3 µs | 15.4 µs | 1.4× | 4.9× |
| a×a | 10,000 | 56 µs | 250 µs | 1.28 ms | 5.1× | 23× |
| a×a | 100,000 | 1.12 ms | 5.34 ms | 125 ms | 23× | 111× |
| division | 1,000 | 2.8 µs | 11.6 µs | 38.9 µs | 3.3× | 14× |
| division | 10,000 | 87 µs | 533 µs | 3.04 ms | 5.7× | 35× |
| division | 100,000 | 2.73 ms | 14.3 ms | 308 ms | 22× | 113× |
| `Nat.gcd` | 100 | 1.3 µs | 4.2 µs | 20.1 µs | 4.8× | 15× |
| `Nat.gcd` | 300 | 3.6 µs | 6.4 µs | 87 µs | 14× | 25× |
| `Nat.gcd` | 1,000 | 25 µs | 23 µs | 704 µs | 30× | 28× |
| `Nat.gcd` | 10,000 | 257 µs | 887 µs | 53.5 ms | 60× | 208× |
| `toString` | 1,000 | 0.68 ms | 1.40 ms | 2.74 ms | 2.0× | 4.0× |
| `toString` | 10,000 | 31.8 ms | 70.9 ms | 233 ms | 3.3× | 7.3× |
| `toString` | 100,000 | 2.76 s | 6.89 s | 23.7 s | 3.4× | 8.6× |
| `String.toNat?` | 10,000 | 10.2 ms | 27.5 ms | 31.7 ms | 1.2× | 3.1× |

Up to a few hundred digits the change is within noise except for `gcd`; the
gap grows with size because GMP's subquadratic algorithms are gone. `Nat.gcd`
(and so `Rat` normalization of large values) is the weakest case: Lean's
fallback runs Euclid's algorithm with full divisions. `toString`/`String.toNat?`
are quadratic Lean code even natively. Full rows (also 20 and 300 digits, `mod`,
`String.toNat?`) are in [the evidence](evidence/bignum-no-gmp-2026-10-24.json).
The release benchmarks record multiplication, division and `toString` at
10,000 digits on every candidate.

## Method

- **Fixtures** are committed in [`bench/fixtures/`](../bench/fixtures): ordinary
  Lean programs built with the installed candidate exactly as a user would
  (`npm install -D` the archive, `npx lasm build Main.lean`). Each server answers
  `GET /` with `{"ok":true}` from Lean. npm dependencies are pinned with lock files.
- **References** run on the same machine in the same job
  ([`bench/reference/`](../bench/reference)): plain Node `node:http`, and Hono and
  Express with JavaScript handlers. Ratios divide each Lasm number by the
  reference from the same repetition, so noisy or differently sized shared
  runners stay comparable across releases. Throughput, start and memory are
  compared to `node:http` (the framework ratio is also recorded); the trivial
  program is compared to a plain Node `console.log` script.
- **Repetitions:** cold starts run 10 times per subject after one discarded run
  that warms the OS file cache (these are process start times with a warm file
  cache, not after a reboot); HTTP runs 3 repetitions per server, each a fresh
  process with 3 s warm-up and 10 s measured; builds and installs 3 times;
  interop 3 processes of 5,000 timed calls after 500 warm-up calls. Subjects are
  interleaved in rotating order so runner drift affects all of them alike. Pages
  report the **median** and the min–max spread.
- **Load generator:** [`bench/load.mjs`](../bench/load.mjs), dependency-free
  (adapted from the Phase 4 interop measurements), in its own process with two
  worker threads: 16 keep-alive connections, one request in flight per
  connection, closed loop, latency from send to last byte with microsecond
  resolution (autocannon was tried first; its latencies are whole
  milliseconds, too coarse for sub-millisecond references). On Linux with 4 or
  more CPUs the load generator is pinned to the last two CPUs and the server to
  the others (`taskset`). Any error, non-2xx answer or memory cap (2 GiB)
  invalidates that repetition and is reported.
- **Memory:** one process per application (Lean runs on worker threads). Linux
  reads `VmRSS` and the kernel high-water mark `VmHWM` from procfs; macOS samples
  `ps` every 250 ms; Windows reads the working set and its peak. Idle RSS is taken
  1 s after the first response. The trivial program's peak comes from Node's own
  `process.resourceUsage().maxRSS` at exit.
- **Interop** is timed inside Lean with `IO.monoNanosNow` around each call.
- **Builds:** the first build of the job uses an empty tool cache, so it
  includes the one-time download and extraction of Lean and the build tools
  (network speed included). Later builds reuse the tools. Clean builds use
  `--rebuild`; incremental builds add one definition line to `Main.lean`.
- **Install:** `npm install -D` of the archive into an empty project with a new
  npm cache each time.
- **Provenance:** every result records the candidate version, archive SHA-256
  and source revision, the harness commit, runner image, OS, CPU model, CPU
  count, memory, Node and npm versions, and a CPU index (a fixed single-threaded
  JavaScript workload, run before and after the suite). CPU-bound numbers
  without a same-runner reference (build time, interop) are compared across
  releases after dividing by that index.
- **Platforms:** Linux x64 (`ubuntu-24.04`, a free standard runner) is the
  reference; the Linux performance targets are scoped to it. Linux ARM64, macOS
  ARM64 and x64, and Windows x64 run only when requested (`extras`) and are shown
  separately as informational.
- **Regressions** are flagged when a metric is worse than the previous release
  by more than 5 % (sizes) or 20 % (timings, memory, throughput), compared by
  same-runner ratio where one exists. They appear in the job summary and on this
  page; they never fail a release (yet).

## Caveats

- GitHub's standard runners are shared virtual machines. Expect a few percent
  of run-to-run variation in throughput even with ratios; compare ratios, not
  absolute numbers, across releases.
- 16 connections is one point on the curve. It matches the robustness suite's
  lower level; higher concurrency mostly adds queueing for single-threaded
  servers.
- `Std.Http` under Lasm is much slower than the interop path; it is measured
  because it remains supported, and its role is decided in Phase 5.2.
- On the 4-CPU reference runner the server gets 2 CPUs (the load generator the
  other 2). Lasm servers use several threads (Node's main thread, the Lean
  thread, worker pools), so they score lower here than with more CPUs on a larger
  machine: `Std.Http` reaches about 660 req/s here against about 1,200 req/s
  with 10 CPUs on a 12-CPU workstation, and Hono with a Lean handler about 9,700
  in both. The setting is fixed, so releases stay comparable, and it resembles
  a common 2-vCPU instance.
- Incremental builds currently take as long as clean ones: Lasm relinks the
  whole application after any change. The metric is there to show when that
  improves.
- The tool cache figure is the extracted size on disk (about 2.5 GB); the
  download itself is smaller (about 250–275 MB, see the README).
- Repeatability: a second full run of the same candidate on a new runner
  ([39971807352](https://github.com/Millillion/lasm/actions/runs/39971807352))
  matched the baseline within about 4 % on every headline metric, with the
  same ratios to two decimals. Its Windows x64 result was added to the baseline
  (the first run's Windows job stopped on a tar path issue, since fixed).
- The plain-Node reference may be limited by the load generator on small
  runners (both share the machine). This understates Lasm's ratios slightly
  but equally across releases.

## Run it yourself

```sh
npm ci --prefix bench
node bench/run.mjs ./lasm-compiler-VERSION.tgz "$(mktemp -d)/bench" result.json
node bench/render.mjs record docs/benchmarks/history result.json
node bench/render.mjs render docs/benchmarks/history docs/BENCHMARKS.md
```

It needs the Node version the candidate requires, and internet access for the
first build. `BENCH_PHASES`, the repetition counts and the other settings are
documented at the top of [`bench/run.mjs`](../bench/run.mjs). Maintainers on
the shared development host run it inside the resource guard
(`scripts/full-lean/run-bounded.mjs`), one heavy workload at a time.

Dispatch by hand: Actions → *Release benchmarks* → candidate version, SHA-256
and draft release (`commit` off for a dry run, `extras` for the other platforms).
