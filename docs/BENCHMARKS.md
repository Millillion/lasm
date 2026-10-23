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
Latest: **0.1.0-experimental.40000056579** (2026-10-23), candidate SHA-256 `2bb87c44bbf6…`, source `0b99c143ce`, harness `0b99c143ce`.

Reference runner: GitHub Actions ubuntu24 20261012.334.1, Ubuntu 24.04.5 LTS (linux-x64), AMD EPYC 7763 64-Core Processor, 4 CPUs, 16 GiB RAM, Node 26.12.1, CPU index 867 ms; server on CPUs 0-1, load generator on CPUs 2-3. Raw data: [history/0.1.0-experimental.40000056579.json](benchmarks/history/0.1.0-experimental.40000056579.json).

| Area | Metric | Median | Spread (min – max) | Same-runner comparison |
| --- | --- | ---: | --- | --- |
| Cold start | Trivial program, start to exit | 250 ms | 239 ms – 260 ms (n=10) | 8.75× node-hello |
| Cold start | Hono + Lean handler, start to first HTTP response | 344 ms | 336 ms – 356 ms (n=10) | 5.86× node-http |
| Cold start | Std.Http server, start to first HTTP response | 381 ms | 369 ms – 390 ms (n=10) | 6.49× node-http |
| Bundle size | Trivial program: dist/ | 4.0 MiB |  |  |
| Bundle size | Trivial program: program.wasm | 1.0 MiB |  |  |
| Bundle size | Trivial program: dist/, brotli | 774 KiB |  |  |
| Bundle size | Hono app: dist/ without node_modules | 4.4 MiB |  |  |
| Bundle size | Hono app: program.wasm, brotli | 214 KiB |  |  |
| Bundle size | Hono app: dist/node_modules | 1.4 MiB |  |  |
| Memory | Trivial program, peak RSS | 176 MiB | 176 MiB – 176 MiB (n=3) | 3.09× node-hello |
| Memory | Hono + Lean handler, idle RSS | 218 MiB | 217 MiB – 219 MiB (n=3) | 3.39× node-http |
| Memory | Hono + Lean handler, peak RSS under load | 391 MiB | 390 MiB – 396 MiB (n=3) | 4.54× node-http |
| Memory | Std.Http server, peak RSS under load | 512 MiB | 512 MiB – 515 MiB (n=3) | 5.91× node-http |
| HTTP | Hono + Lean handler, throughput | 10,053 req/s | 9,988 req/s – 10,078 req/s (n=3) | 0.18× node-http; 0.22× node-hono |
| HTTP | Hono + Lean handler, p99 latency | 6.0 ms | 6.0 ms – 6.2 ms (n=3) | 10.66× node-http |
| HTTP | Express + Lean handler, throughput | 6,626 req/s | 6,535 req/s – 6,648 req/s (n=3) | 0.12× node-http; 0.37× node-express |
| HTTP | Express + Lean handler, p99 latency | 7.8 ms | 7.8 ms – 7.9 ms (n=3) | 13.89× node-http |
| HTTP | Std.Http server, throughput | 704 req/s | 697 req/s – 704 req/s (n=3) | 0.01× node-http |
| HTTP | Std.Http server, p99 latency | 32 ms | 31 ms – 32 ms (n=3) | 55.81× node-http |
| HTTP | Plain Node node:http (reference) | 55,685 req/s | 54,840 req/s – 56,113 req/s (n=3) |  |
| Interop | Lean→JS call round trip, p50 | 49 µs | 44 µs – 57 µs (n=3) |  |
| Interop | Await a resolved JS promise, p50 | 47 µs | 47 µs – 49 µs (n=3) |  |
| Build | Clean build, trivial program | 44 s | 44 s – 44 s (n=3) |  |
| Build | Incremental build after a one-line change, trivial program | 43 s | 43 s – 43 s (n=3) |  |
| Build | Clean build, Hono app | 67 s | 67 s – 109 s (n=3) |  |
| Install | Package download (npm tarball) | 62 MiB |  |  |
| Install | Installed size | 364 MiB |  |  |
| Install | npm install, empty cache | 7.0 s | 6.9 s – 7.2 s (n=3) |  |
| Install | First build incl. one-time tool download | 77 s |  |  |
| Install | Tool cache on disk after the first build | 2498 MiB |  |  |

Ratios divide by the plain-Node reference measured in the same run (for throughput, below 1 means slower; for time, latency and memory, above 1 means more). Every metric, including the reference servers and frameworks, is in the [raw data](benchmarks/history/0.1.0-experimental.40000056579.json).

### Change from the previous release (0.1.0-experimental.39988013618)

Flagged (informational; releases are not blocked on performance yet):

| Metric | Before | After | Worse by | Compared as |
| --- | ---: | ---: | ---: | --- |
| First build on a new machine (includes one-time tool download) | 42 s | 77 s | 85 % | absolute |
| npm install time, empty npm cache | 4.3 s | 7.0 s | 63 % | absolute |
| Latency p50, Express with a Lean handler | 0.8 ms | 2.3 ms | 62 % | ratio to node-http |
| Lean→JS synchronous call round trip (Math.max()), p50 | 23 µs | 49 µs | 60 % | normalized by the runner CPU index |
| Lean→JS synchronous call round trip (Math.max()), p99 | 45 µs | 91 µs | 51 % | normalized by the runner CPU index |
| Lean awaits a resolved JS promise (Promise.resolve(1)), p99 | 39 µs | 78 µs | 51 % | normalized by the runner CPU index |
| Throughput, Express with a Lean handler | 17,063 req/s | 6,626 req/s | 49 % | ratio to node-http |
| Lean awaits a resolved JS promise (Promise.resolve(1)), p50 | 24 µs | 47 µs | 46 % | normalized by the runner CPU index |
| Latency p50, Hono with a Lean handler | 0.6 ms | 1.5 ms | 42 % | ratio to node-http |
| Start to listening, Hono with a Lean handler | 243 ms | 343 ms | 41 % | absolute |
| Start to first output, Trivial Lean program | 171 ms | 237 ms | 38 % | absolute |
| Start to listening, Lean's Std.Http server | 198 ms | 270 ms | 36 % | absolute |
| Start to listening, Express with a Lean handler | 273 ms | 369 ms | 35 % | absolute |
| Throughput, Hono with a Lean handler | 22,904 req/s | 10,053 req/s | 31 % | ratio to node-http |
| Clean build (--rebuild), hello | 26 s | 44 s | 27 % | normalized by the runner CPU index |
| Clean build, express | 41 s | 70 s | 26 % | normalized by the runner CPU index |
| Incremental build after a one-line change, hello | 26 s | 43 s | 24 % | normalized by the runner CPU index |
| Clean build, std-http | 45 s | 75 s | 23 % | normalized by the runner CPU index |
| Incremental build after a one-line change, hono | 41 s | 68 s | 23 % | normalized by the runner CPU index |

### Trend (reference runner, last releases)

| Metric | …39891445495 | …39988013618 | …40000056579 |
| --- | ---: | ---: | ---: |
| Trivial program, start to exit | 258 ms (8.80×) | 183 ms (8.23×) | 250 ms (8.75×) |
| Hono + Lean handler, start to first HTTP response | 352 ms (5.75×) | 244 ms (5.51×) | 344 ms (5.86×) |
| Std.Http server, start to first HTTP response | 396 ms (6.46×) | 279 ms (6.29×) | 381 ms (6.49×) |
| Trivial program: dist/ | 2.8 MiB | 4.0 MiB | 4.0 MiB |
| Trivial program: program.wasm | 1.0 MiB | 1.0 MiB | 1.0 MiB |
| Trivial program: dist/, brotli | 544 KiB | 774 KiB | 774 KiB |
| Hono app: dist/ without node_modules | 3.2 MiB | 4.4 MiB | 4.4 MiB |
| Hono app: program.wasm, brotli | 214 KiB | 214 KiB | 214 KiB |
| Hono app: dist/node_modules | 1.4 MiB | 1.4 MiB | 1.4 MiB |
| Trivial program, peak RSS | 176 MiB (3.36×) | 176 MiB (2.97×) | 176 MiB (3.09×) |
| Hono + Lean handler, idle RSS | 217 MiB (3.39×) | 218 MiB (3.38×) | 218 MiB (3.39×) |
| Hono + Lean handler, peak RSS under load | 394 MiB (4.54×) | 391 MiB (4.45×) | 391 MiB (4.54×) |
| Std.Http server, peak RSS under load | 509 MiB (5.84×) | 568 MiB (6.48×) | 512 MiB (5.91×) |
| Hono + Lean handler, throughput | 9,682 req/s (0.18×) | 22,904 req/s (0.23×) | 10,053 req/s (0.18×) |
| Hono + Lean handler, p99 latency | 6.7 ms (10.88×) | 5.8 ms (15.57×) | 6.0 ms (10.66×) |
| Express + Lean handler, throughput | 6,349 req/s (0.12×) | 17,063 req/s (0.18×) | 6,626 req/s (0.12×) |
| Express + Lean handler, p99 latency | 8.8 ms (13.88×) | 6.9 ms (18.30×) | 7.8 ms (13.89×) |
| Std.Http server, throughput | 663 req/s (0.01×) | 1,203 req/s (0.01×) | 704 req/s (0.01×) |
| Std.Http server, p99 latency | 34 ms (52.59×) | 21 ms (56.65×) | 32 ms (55.81×) |
| Plain Node node:http (reference) | 53,784 req/s | 96,903 req/s | 55,685 req/s |
| Lean→JS call round trip, p50 | 46 µs | 23 µs | 49 µs |
| Await a resolved JS promise, p50 | 49 µs | 24 µs | 47 µs |
| Clean build, trivial program | 44 s | 26 s | 44 s |
| Incremental build after a one-line change, trivial program | 45 s | 26 s | 43 s |
| Clean build, Hono app | 70 s | 42 s | 67 s |
| Package download (npm tarball) | 62 MiB | 62 MiB | 62 MiB |
| Installed size | 363 MiB | 364 MiB | 364 MiB |
| npm install, empty cache | 7.1 s | 4.3 s | 7.0 s |
| First build incl. one-time tool download | 70 s | 42 s | 77 s |
| Tool cache on disk after the first build | 2498 MiB | 2498 MiB | 2498 MiB |
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
| Build time: clean (`--rebuild`) and incremental after a one-line change | How long is the edit–build loop? | trivial program; Hono app |
| `@lasm/cli` install: download size, installed size, `npm install` time; first build including the one-time tool download, and the tool cache size | What does getting started cost? | the candidate npm archive |

Not in the set, on purpose: language-level microbenchmarks (they depend on the
program, and Lean's own compiler decides most of them), long soaks and fault
injection (covered by the robustness suites in [SERVER_MVP.md](SERVER_MVP.md)
and the 5.2 interop soak), and native-Lean comparisons (the Std.Http robustness
suite already compares against native; here the reference is plain Node, which
is what a user would otherwise write).

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
