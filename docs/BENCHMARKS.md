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
No release has been benchmarked yet.
<!-- benchmarks:generated:end -->

## The benchmark set and why

Each benchmark answers a question a user deploying Lean on Node asks, and the
set stays small enough to run on every candidate on one free runner (about
30–45 minutes).

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
  ARM64 and Windows x64 run only when requested (`extras`) and are shown
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
