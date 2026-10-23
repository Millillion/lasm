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
Latest: **0.1.0-experimental.58** (2026-10-23), candidate SHA-256 `abeccf74df77…`, source `a9c5a9d3d0`, harness `5999a71eea`.

Reference runner: GitHub Actions ubuntu24 20261012.334.1, Ubuntu 24.04.5 LTS (linux-x64), AMD EPYC 7763 64-Core Processor, 4 CPUs, 16 GiB RAM, Node 26.12.1, CPU index 867 ms; server on CPUs 0-1, load generator on CPUs 2-3. Raw data: [history/0.1.0-experimental.58.json](benchmarks/history/0.1.0-experimental.58.json).

| Area | Metric | Median | Spread (min – max) | Same-runner comparison |
| --- | --- | ---: | --- | --- |
| Cold start | Trivial program, start to exit | 257 ms | 251 ms – 263 ms (n=10) | 9.02× node-hello |
| Cold start | Hono + Lean handler, start to first HTTP response | 350 ms | 344 ms – 367 ms (n=10) | 5.62× node-http |
| Cold start | Std.Http server, start to first HTTP response | 389 ms | 378 ms – 414 ms (n=10) | 6.27× node-http |
| Bundle size | Trivial program: dist/ | 4.0 MiB |  |  |
| Bundle size | Trivial program: program.wasm | 1.0 MiB |  |  |
| Bundle size | Trivial program: dist/, brotli | 775 KiB |  |  |
| Bundle size | Hono app: dist/ without node_modules | 4.4 MiB |  |  |
| Bundle size | Hono app: program.wasm, brotli | 214 KiB |  |  |
| Bundle size | Hono app: dist/node_modules | 1.4 MiB |  |  |
| Memory | Trivial program, peak RSS | 176 MiB | 176 MiB – 176 MiB (n=3) | 3.49× node-hello |
| Memory | Hono + Lean handler, idle RSS | 218 MiB | 218 MiB – 218 MiB (n=3) | 3.40× node-http |
| Memory | Hono + Lean handler, peak RSS under load | 390 MiB | 389 MiB – 390 MiB (n=3) | 4.51× node-http |
| Memory | Std.Http server, peak RSS under load | 513 MiB | 499 MiB – 518 MiB (n=3) | 5.94× node-http |
| HTTP | Hono + Lean handler, throughput | 9,772 req/s | 9,685 req/s – 9,791 req/s (n=3) | 0.18× node-http; 0.21× node-hono |
| HTTP | Hono + Lean handler, p99 latency | 6.8 ms | 6.5 ms – 6.8 ms (n=3) | 11.57× node-http |
| HTTP | Express + Lean handler, throughput | 6,413 req/s | 6,370 req/s – 6,422 req/s (n=3) | 0.12× node-http; 0.37× node-express |
| HTTP | Express + Lean handler, p99 latency | 8.8 ms | 8.5 ms – 9.0 ms (n=3) | 15.14× node-http |
| HTTP | Std.Http server, throughput | 688 req/s | 685 req/s – 693 req/s (n=3) | 0.01× node-http |
| HTTP | Std.Http server, p99 latency | 33 ms | 31 ms – 33 ms (n=3) | 55.67× node-http |
| HTTP | Plain Node node:http (reference) | 54,136 req/s | 53,885 req/s – 55,789 req/s (n=3) |  |
| Interop | Lean→JS call round trip, p50 | 45 µs | 44 µs – 56 µs (n=3) |  |
| Interop | Await a resolved JS promise, p50 | 46 µs | 45 µs – 48 µs (n=3) |  |
| Build | Clean build, trivial program | 45 s | 44 s – 45 s (n=3) |  |
| Build | Incremental build after a one-line change, trivial program | 43 s | 43 s – 44 s (n=3) |  |
| Build | Clean build, Hono app | 68 s | 68 s – 100 s (n=3) |  |
| Install | Package download (npm tarball) | 62 MiB |  |  |
| Install | Installed size | 364 MiB |  |  |
| Install | npm install, empty cache | 6.9 s | 6.9 s – 7.1 s (n=3) |  |
| Install | First build incl. one-time tool download | 67 s |  |  |
| Install | Tool cache on disk after the first build | 2498 MiB |  |  |

Ratios divide by the plain-Node reference measured in the same run (for throughput, below 1 means slower; for time, latency and memory, above 1 means more). Every metric, including the reference servers and frameworks, is in the [raw data](benchmarks/history/0.1.0-experimental.58.json).

### Change from the previous release (0.1.0-experimental.40000056579)

Flagged (informational; releases are not blocked on performance yet):

| Metric | Before | After | Worse by | Compared as |
| --- | ---: | ---: | ---: | --- |
| Lean awaits a resolved JS promise (Promise.resolve(1)), p50 | 27 µs | 46 µs | 55 % | normalized by the runner CPU index |
| Lean→JS synchronous call round trip (Math.max()), p99 | 54 µs | 91 µs | 49 % | normalized by the runner CPU index |
| Lean awaits a resolved JS promise (Promise.resolve(1)), p99 | 49 µs | 78 µs | 41 % | normalized by the runner CPU index |
| npm install time, empty npm cache | 5.1 s | 6.9 s | 35 % | absolute |
| Lean→JS synchronous call round trip (Math.max()), p50 | 31 µs | 45 µs | 32 % | normalized by the runner CPU index |
| Start to listening, Express with a Lean handler | 300 ms | 388 ms | 29 % | absolute |
| First build on a new machine (includes one-time tool download) | 53 s | 67 s | 28 % | absolute |
| Start to listening, Hono with a Lean handler | 277 ms | 351 ms | 27 % | absolute |
| Start to listening, Lean's Std.Http server | 221 ms | 278 ms | 26 % | absolute |
| Start to first output, Trivial Lean program | 195 ms | 244 ms | 25 % | absolute |

### Trend (reference runner, last releases)

| Metric | …39891445495 | …39988013618 | …40000056579 | …58 |
| --- | ---: | ---: | ---: | ---: |
| Trivial program, start to exit | 258 ms (8.80×) | 183 ms (8.23×) | 206 ms (8.41×) | 257 ms (9.02×) |
| Hono + Lean handler, start to first HTTP response | 352 ms (5.75×) | 244 ms (5.51×) | 276 ms (5.49×) | 350 ms (5.62×) |
| Std.Http server, start to first HTTP response | 396 ms (6.46×) | 279 ms (6.29×) | 309 ms (6.15×) | 389 ms (6.27×) |
| Trivial program: dist/ | 2.8 MiB | 4.0 MiB | 4.0 MiB | 4.0 MiB |
| Trivial program: program.wasm | 1.0 MiB | 1.0 MiB | 1.0 MiB | 1.0 MiB |
| Trivial program: dist/, brotli | 544 KiB | 774 KiB | 774 KiB | 775 KiB |
| Hono app: dist/ without node_modules | 3.2 MiB | 4.4 MiB | 4.4 MiB | 4.4 MiB |
| Hono app: program.wasm, brotli | 214 KiB | 214 KiB | 214 KiB | 214 KiB |
| Hono app: dist/node_modules | 1.4 MiB | 1.4 MiB | 1.4 MiB | 1.4 MiB |
| Trivial program, peak RSS | 176 MiB (3.36×) | 176 MiB (2.97×) | 176 MiB (3.41×) | 176 MiB (3.49×) |
| Hono + Lean handler, idle RSS | 217 MiB (3.39×) | 218 MiB (3.38×) | 217 MiB (3.39×) | 218 MiB (3.40×) |
| Hono + Lean handler, peak RSS under load | 394 MiB (4.54×) | 391 MiB (4.45×) | 392 MiB (4.53×) | 390 MiB (4.51×) |
| Std.Http server, peak RSS under load | 509 MiB (5.84×) | 568 MiB (6.48×) | 541 MiB (6.28×) | 513 MiB (5.94×) |
| Hono + Lean handler, throughput | 9,682 req/s (0.18×) | 22,904 req/s (0.23×) | 13,923 req/s (0.16×) | 9,772 req/s (0.18×) |
| Hono + Lean handler, p99 latency | 6.7 ms (10.88×) | 5.8 ms (15.57×) | 6.3 ms (16.57×) | 6.8 ms (11.57×) |
| Express + Lean handler, throughput | 6,349 req/s (0.12×) | 17,063 req/s (0.18×) | 9,465 req/s (0.11×) | 6,413 req/s (0.12×) |
| Express + Lean handler, p99 latency | 8.8 ms (13.88×) | 6.9 ms (18.30×) | 7.4 ms (19.13×) | 8.8 ms (15.14×) |
| Std.Http server, throughput | 663 req/s (0.01×) | 1,203 req/s (0.01×) | 932 req/s (0.01×) | 688 req/s (0.01×) |
| Std.Http server, p99 latency | 34 ms (52.59×) | 21 ms (56.65×) | 25 ms (65.80×) | 33 ms (55.67×) |
| Plain Node node:http (reference) | 53,784 req/s | 96,903 req/s | 85,272 req/s | 54,136 req/s |
| Lean→JS call round trip, p50 | 46 µs | 23 µs | 31 µs | 45 µs |
| Await a resolved JS promise, p50 | 49 µs | 24 µs | 27 µs | 46 µs |
| Clean build, trivial program | 44 s | 26 s | 34 s | 45 s |
| Incremental build after a one-line change, trivial program | 45 s | 26 s | 35 s | 43 s |
| Clean build, Hono app | 70 s | 42 s | 54 s | 68 s |
| Package download (npm tarball) | 62 MiB | 62 MiB | 62 MiB | 62 MiB |
| Installed size | 363 MiB | 364 MiB | 364 MiB | 364 MiB |
| npm install, empty cache | 7.1 s | 4.3 s | 5.1 s | 6.9 s |
| First build incl. one-time tool download | 70 s | 42 s | 53 s | 67 s |
| Tool cache on disk after the first build | 2498 MiB | 2498 MiB | 2498 MiB | 2498 MiB |

### Optional platforms (not the reference; informational)

| Metric | darwin-arm64 | darwin-x64 | linux-arm64 | win32-x64 |
| --- | ---: | ---: | ---: | ---: |
| Trivial program, start to exit | 163 ms (4.86×) | 397 ms (4.74×) | 214 ms (8.49×) | 254 ms (4.48×) |
| Hono + Lean handler, start to first HTTP response | 196 ms (3.72×) | 518 ms (3.87×) | 292 ms (5.80×) | 317 ms (3.81×) |
| Std.Http server, start to first HTTP response | 218 ms (4.12×) | 565 ms (4.22×) | 323 ms (6.42×) | 365 ms (4.37×) |
| Trivial program: dist/ | 5.2 MiB | 5.5 MiB | 4.0 MiB | 5.0 MiB |
| Trivial program: program.wasm | 1.0 MiB | 1.0 MiB | 1.0 MiB | 1.0 MiB |
| Trivial program: dist/, brotli | 1.1 MiB | 1.1 MiB | 775 KiB | 1.1 MiB |
| Hono app: dist/ without node_modules | 5.6 MiB | 6.0 MiB | 4.4 MiB | 5.4 MiB |
| Hono app: program.wasm, brotli | 214 KiB | 214 KiB | 214 KiB | 214 KiB |
| Hono app: dist/node_modules | 1.4 MiB | 1.4 MiB | 1.4 MiB | 1.4 MiB |
| Trivial program, peak RSS | 125 MiB (2.45×) | 120 MiB (3.01×) | 121 MiB (2.47×) | 120 MiB (2.84×) |
| Hono + Lean handler, idle RSS | 148 MiB (2.33×) | 144 MiB (2.84×) | 146 MiB (2.41×) | 145 MiB (2.73×) |
| Hono + Lean handler, peak RSS under load | 279 MiB (3.20×) | 271 MiB (3.93×) | 289 MiB (3.51×) | 287 MiB (4.39×) |
| Std.Http server, peak RSS under load | 403 MiB (4.61×) | 283 MiB (4.02×) | 310 MiB (3.77×) | 412 MiB (6.23×) |
| Hono + Lean handler, throughput | 15,937 req/s (0.27×) | 3,505 req/s (0.22×) | 10,559 req/s (0.26×) | 14,824 req/s (0.31×) |
| Hono + Lean handler, p99 latency | 3.2 ms (2.89×) | 13 ms (4.76×) | 5.6 ms (7.37×) | 4.1 ms (5.78×) |
| Express + Lean handler, throughput | 11,937 req/s (0.20×) | 2,813 req/s (0.18×) | 6,085 req/s (0.15×) | 10,222 req/s (0.22×) |
| Express + Lean handler, p99 latency | 4.2 ms (3.84×) | 14 ms (4.79×) | 7.2 ms (9.55×) | 4.8 ms (6.82×) |
| Std.Http server, throughput | 1,148 req/s (0.02×) | 327 req/s (0.02×) | 597 req/s (0.01×) | 1,327 req/s (0.03×) |
| Std.Http server, p99 latency | 30 ms (27.39×) | 73 ms (26.40×) | 38 ms (48.62×) | 20 ms (29.09×) |
| Plain Node node:http (reference) | 59,295 req/s | 16,117 req/s | 41,768 req/s | 46,813 req/s |
| Lean→JS call round trip, p50 | 18 µs | 168 µs | 45 µs | 46 µs |
| Await a resolved JS promise, p50 | 16 µs | 166 µs | 44 µs | 46 µs |
| Clean build, trivial program | 33 s | 91 s | 38 s | 58 s |
| Incremental build after a one-line change, trivial program | 41 s | 84 s | 39 s | 57 s |
| Clean build, Hono app | 60 s | 110 s | 61 s | 92 s |
| Package download (npm tarball) | 62 MiB | 62 MiB | 62 MiB | 62 MiB |
| Installed size | 364 MiB | 364 MiB | 364 MiB | 364 MiB |
| npm install, empty cache | 7.6 s | 30 s | 4.5 s | 8.7 s |
| First build incl. one-time tool download | 82 s | 266 s | 61 s | 107 s |
| Tool cache on disk after the first build | 2304 MiB | 2337 MiB | 2550 MiB | 2266 MiB |
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
