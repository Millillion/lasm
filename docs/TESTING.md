# How Lasm is tested

Status: **methodology, 2026-10-31.** Differential testing (with its three
extra oracles: Lean's interpreter, the optimization differential and the engine
differential), target equivalence and the test-quality audit below are
implemented and run in CI; the other layers are marked as existing (with their
workflow) or planned. The plan is issue #21 (testing and verification half);
the long-term strategy (evidence levels, tier consolidation, corpora) is the
proposal [proposals/TESTING_STRATEGY.md](proposals/TESTING_STRATEGY.md).

## Principles

1. **Black box first.** The strongest evidence comes from testing Lasm only
   through what users touch: the packed or published `@lasm/cli`, `lasm init`
   templates, the examples, and the observable behaviour of the outputs (stdout,
   stderr and exit status of programs, HTTP responses of servers, the DOM of
   browser apps). A black-box test survives refactoring and cannot be satisfied
   by the implementation's own assumptions.
2. **An oracle instead of hand-written expectations wherever one exists.** For
   compiled Lean, the oracle is upstream Lean itself: the same program built
   natively must behave identically. For servers, the oracle is the same app on
   another target.
3. **Generated inputs beat chosen ones**, and every failure is shrunk and kept
   as a regression test.
4. **Say what each layer cannot catch.** Each layer below lists its blind spots.
5. **Static checks are named as such.** A test that reads source text is a lint
   or a consistency guard, never evidence of behaviour (see the
   [audit](#test-quality-audit)).

## The layers

| Layer | What it checks | Where | CI tier |
| --- | --- | --- | --- |
| [Differential testing](#differential-testing) | Lasm-compiled programs behave exactly like native Lean, unoptimized builds like optimized ones, and one `.wasm` alike on V8, JavaScriptCore, SpiderMonkey and wasmtime; native Lean agrees with its interpreter ([more oracles](#more-oracles)) | `scripts/differential/` | PR, nightly |
| [Target equivalence](#target-equivalence) | One server answers the same on every target | `scripts/equivalence/` | PR, nightly |
| [Scenario matrix](#scenario-matrix) | Template × `--target` × OS × runtime from the packed/published package | `templates.yml`, `platform-support.yml`, `workers.yml`, `wasi.yml`, `npm-dist.yml`, `published-templates.yml`, `bun-deno-published.yml` | release, after publish, daily |
| Upstream Lean suite | Lean's own tests, run through the installed package | `language-coverage-baseline.yml`, `nightly.yml` ([UPSTREAM_APPLICATION_TESTS.md](UPSTREAM_APPLICATION_TESTS.md)) | nightly, release |
| Example apps | Conduit against the official RealWorld API and Playwright suites | `conduit.yml` | PR (paths) |
| [Fuzzing at boundaries](#fuzzing-at-the-boundaries) | Parsers and decoders never crash, hang or accept garbage | planned | nightly |
| [Model checking and schedule fuzzing](#deterministic-simulation-and-schedule-fuzzing) | The host bridge has no lost wake-ups, lost or doubly served requests, or deadlocks; the code follows the model | `verification/host-bridge/`, `scripts/bridge-fuzz/`, `bridge-verification.yml`, `lasm-js-stress.yml`, `test/node-js.test.mjs` | PR (paths), nightly, release |
| Proofs | Lean theorems of Lasm.UI, Conduit, … (`#print axioms`) | `ui.yml`, `conduit.yml` | PR (paths), release |
| Unit tests | Functions of the CLI and host, in isolation | `test/*.test.mjs` (`unit.yml`, a subset in `installer-faults.yml`) | PR (subset), release |
| [Coverage and mutation](#coverage-and-mutation-testing) | How much of the JavaScript the tests execute, and whether they would notice a change | `scripts/coverage/` | release; nightly planned |

### Differential testing

**Property.** For a generated Lean program *P*: native Lean 4.35.0's build of
*P* and Lasm's build of *P* for each target produce the same stdout, the same
stderr and the same exit status.

**Generator** ([`scripts/differential/generate.mjs`](../scripts/differential/generate.mjs)).
Typed expression trees over `Nat`/`Int` (bignums, with literals at the 2³¹, 2³²,
2⁶³ and 2⁶⁴ boundaries), `UInt8`–`UInt64`, `Float` (results of IEEE-exact operations
may be printed as bits; libm functions such as `sin` only as text), `String`/`Char`
(combining marks, astral code points, U+10FFFF, invalid byte positions),
`List`, `Array`, `HashMap`, `Option`, a derived inductive (`Tree`: `Repr`,
`BEq`, `Hashable`) and a structure, lambdas, structural, well-founded, mutual and
fuelled recursion; and statement cases: `StateT`/`ExceptT` in `do`-notation with
`try`/`catch` and loops, `IO.Ref`s, user errors, `IO.sleep`, tasks
(`Task.spawn`, `IO.asTask`, `Task.map`, promises, shared refs), and files.
Termination and size are guaranteed by construction (bounded exponents, shifts,
lengths, depth). Literals are randomly wrapped in a `@[noinline]` identity so the
compiler cannot fold them away. Each case draws from its own stream
`(seed, index)`, so a case is reproducible on its own forever.

**Oracle.** The upstream release archive `lean-4.35.0-linux.tar.zst`
(SHA-256 pinned in `scripts/lean-dist/lean-4.35.0-upstream.json`): `lean -c`
then `leanc`. Lasm ships Lean itself, but its build is what is under test, so the
oracle is the untouched upstream toolchain.

**Targets.** `node` (the full profile, `dist/main.mjs`), `wasi` (wasmtime 49.0.4),
`wasi-node` (the same module under `node:wasi`) and `deno` (the edge runtime used
by every edge platform, Bun, Deno and the browser, run by Deno 2.9.6), plus the
targets of the [extra oracles](#more-oracles) (`interp`, `node-O0`, `wasi-O0`,
`deno-O0`, `edge-node`, `edge-bun`, `edge-sm`). File-system cases run only where a
file system exists (node, WASI, the interpreter). The program's
environment always contains several variables before the ones Lean reads (that
is how the [WASI `getenv` bug](#bugs-found) was found), and `LEAN_BACKTRACE=0`
on every target (how the [edge `getenv` bug](#bugs-found) was found).

**Comparison.** Every output line starts with its case's id and every case is
preceded by an `@id` marker on stderr, so a divergence names its case. A
divergence is re-run alone, then **shrunk**: each round builds one program with
up to 40 smaller variants of the case (subexpressions replaced by a child of the
same type or a minimal literal, statements removed or flattened) and keeps the
smallest that still diverges. The result is written to `WORK/repros/<name>/`:
the minimal program, the case as JSON, both outputs, and `<name>.lean` in the
format of [`test/differential/regressions/`](../test/differential/regressions/),
which every run replays first.

**Running it.**

```sh
npm install @lasm/cli                         # or a packed candidate
node scripts/differential/run.mjs --lasm node_modules/@lasm/cli/bin/lasm.mjs \
  --lean-bin ~/.elan/toolchains/leanprover--lean4---v4.35.0/bin --work /tmp/dt \
  --seed 1 --programs 1 --targets node,wasi,wasi-node,deno \
  --regressions test/differential/regressions
# every oracle: --targets node,wasi,wasi-node,deno,interp,node-O0,wasi-O0,deno-O0,edge-node,edge-bun,edge-sm
#   --bun PATH/bun --sm PATH/js (SpiderMonkey's js shell)
# a campaign: --budget-min 60; dev profile: --profile dev; on a shared host,
# serialize builds: --wrap "flock LOCK node scripts/full-lean/run-bounded.mjs --memory-mib 6144 --"
```

**CI** ([differential.yml](../.github/workflows/differential.yml)): every pull
request and push to `main` packs a candidate from the commit, installs it with
npm, replays the regressions and runs three program pairs (3 × (150 + 25) cases) from a
seed derived from the commit, on the base targets and the cheap extra oracles
(`interp`, `node-O0`, `edge-node`, `edge-bun`, `edge-sm`); nightly runs a
60-minute campaign from a fresh seed on every target (also `wasi-O0` and
`deno-O0`). A divergence fails the job and the reproducers are in the run's
artifact; upstream suspects are listed in the job summary and never fail it.
Known divergences (an open issue or a documented host limit) are listed in
`KNOWN` in `run.mjs`, applied before the comparison and counted in the summary.

**What it catches:** miscompilation anywhere in Lasm's pipeline (Lean's C
through clang/Emscripten, Binaryen's optimizer, Lasm's linking, the runtime
patches), runtime and host-bridge differences (bignums on 32-bit memory,
strings, hashing, panics, uncaught errors, exit codes, tasks, refs, files),
differences between targets.
**What it cannot catch:** bugs that native Lean has too (it is the oracle);
anything outside the generator's grammar (today: no `Std.Http`, sockets,
processes, `Std.Time`, typeclass-heavy or universe-polymorphic code, deep
recursion beyond a few thousand frames, which is a documented limit of the edge and
WASI targets: the engine's Wasm stack, [EDGE.md](EDGE.md), [WASI.md](WASI.md);
the generator's `deep` cases stay at or below 5,000 frames, because the measured
bound of a small function is 8,177 frames (wasmtime 30) to 10,910 (wasmtime 49),
about 8,500 on Bun and just under 9,700 on Deno and `node:wasi` (issue #30),
while native Lean and Node's full profile go far deeper; large
heaps); nondeterministic behaviour (output order across
threads is never printed); performance; the browser (planned: the same programs
under Playwright).

### More oracles

Three more comparisons from [TESTING_STRATEGY.md](proposals/TESTING_STRATEGY.md)
pillar 1, implemented as targets of the same harness, so every generated case,
the shrinker and the regression replay cover them.

**(a) Second oracle: Lean's interpreter** (target `interp`). The same
`Main.lean` run by `lean --root=DIR --run Main.lean` from the same pinned upstream
toolchain. The property is that native Lean and its interpreter agree. When they
do not, upstream Lean is suspect, not Lasm: the case is shrunk like a
divergence, written to `WORK/repros/`, listed under `upstreamSuspects` in the
summary and the job summary, and never fails the run. *Catches:* differences
between Lean's compiler (IR → C) and its IR interpreter, which would otherwise
be inherited silently by the oracle. *Cannot catch:* bugs in the shared front
end and runtime (both use them).

**(b) Optimization differential** (targets `node-O0`, `wasi-O0`, `deno-O0`).
The same program built through the same installed Lasm with optimization off,
compared with native Lean like every target (the optimized builds are the base
targets, so an `-O0`-only divergence points at clang or Binaryen optimizing
something that changes behaviour, or at undefined behaviour in the generated or
runtime C). The switch is a test-only environment variable of the build, not a
CLI flag:

| Variable | Effect | Used by |
| --- | --- | --- |
| `LASM_TEST_UNOPTIMIZED=1` | The program's own C at clang `-O0`; the Node link without Binaryen's optimization passes (the unoptimized link, as `LASM_LINK_DEBUG`); the edge link as in the dev profile (only the passes the program needs: memory64 lowering, JSPI/Asyncify); WASI's `wasm-opt` at `-O0` (lowering passes only). The precompiled runtime archives are unchanged. Part of the build's cache identity ([`src/test-switches.mjs`](../src/test-switches.mjs)) | `scripts/differential/run.mjs` (`*-O0` targets) |

It is deliberately absent from the user documentation. *Catches:* optimizer
bugs in clang/LLVM and Binaryen on Lasm's code paths, and UB that the optimizer
exploits. *Cannot catch:* optimizer bugs inside the precompiled runtime
archives (built once at `-O2`; their behaviour is covered by the base targets).

**(c) Engine differential** (targets `edge-node`, `edge-bun`, `edge-sm`, with
`deno`, `wasi` and `wasi-node`). One `.wasm` on several engines:

| Output | Engines |
| --- | --- |
| `--target deno` (the edge runtime, JSPI) | Deno 2.9.6 (V8, `deno`), Node (V8, `edge-node`: `deno/main.mjs` is portable), Bun 1.4.4 (JavaScriptCore, `edge-bun`), SpiderMonkey 158.0.1 (`edge-sm`, the js shell through [`sm-runner.mjs`](../scripts/differential/sm-runner.mjs)) |
| `--target wasi` | wasmtime 49.0.4 (Cranelift, `wasi`), Node's `node:wasi` (V8, `wasi-node`) |

The js shell is not a web runtime: the runner provides the few web APIs the edge
host needs and the shell lacks (`TextEncoder`/`TextDecoder`, `queueMicrotask`,
`atob`/`btoa`, `crypto.getRandomValues` from `Math.random`, `console.error`);
the shell's `quit` takes 0–127, so the runner also writes the exit status to a
file the harness reads; standard error goes out line by line. CI downloads the
official binaries pinned by SHA-256 (Bun's GitHub release, Mozilla's release
archive). A JavaScriptCore shell (jsvu) is not used: Bun is JavaScriptCore with
a real host. wasmtime cannot run the edge `.wasm` (it imports Emscripten's
JavaScript glue), and SpiderMonkey and Bun do not run the WASI module (no WASI
host in the shell; Bun's `node:wasi` was not evaluated). *Catches:* engine bugs
and engine-dependent behaviour on Lasm's outputs (JSPI, Wasm exceptions, the
lowered memory64, number formatting in the glue). *Cannot catch:* differences
in engine stacks and limits beyond the generator's bounds (the recursion bounds
differ per engine: [EDGE.md](EDGE.md)), and anything only browsers do.

**First run** (2026-10-31, seed 11, one program pair, every target, `@lasm/cli`
0.3.5 with this branch's sources): 175 cases, no divergence on any target; the
interpreter matched native Lean on every case once its module name was fixed
(without `--root`, `lean --run` names the module `_stdin` in panic messages).

### Target equivalence

**Property.** The same app, built for every server target, answers every
request of a recorded corpus with the same status, the same app-set headers
(`content-type`, `location`, `set-cookie`, the app's own) and the same body bytes.

[`scripts/equivalence/run.mjs`](../scripts/equivalence/run.mjs) creates the
`fetch` template with `lasm init` (black box) or copies `examples/fetch`, builds
it for `node`, `deno`, `bun`, `wasi-http` (wasmtime serve) and, in CI, `workers`
(wrangler dev, local workerd), serves each on a free port and replays
[`test/equivalence/<app>.json`](../test/equivalence/). The corpus holds the
requests (Unicode and percent-encoded paths, `%2F`, dot segments, query
encodings, text, binary, empty and 256 KiB bodies, streamed bodies, redirects,
custom statuses, repeated headers, unknown routes and methods, `HEAD`, a thrown
error, environment variables, timers and tasks) and the expected responses,
recorded from Node with `--record`. Lasm's own responses are therefore pinned
too: a change on Node shows up as a diff in review.

**What it catches:** request/response translation bugs in each target's host
(header handling, body encoding, streaming, status mapping, error pages),
platform differences in URL parsing. **What it cannot catch:** behaviour the
corpus does not exercise; timing; headers platforms add themselves (`date`,
`server`, framing), which are deliberately not compared. Conduit already runs
the official RealWorld API suite on Node, Workers and Bun (`conduit.yml`); its
responses carry tokens and timestamps, so it is compared by that suite's
assertions rather than byte for byte.

### Scenario matrix

Template × `--target` × OS × runtime, always from a packed candidate or the
published package, never the source checkout: `templates.yml` (every template
on five OSes, Docker images), `platform-support.yml` (Node versions, serverless
emulators), `workers.yml` (edge targets, Bun and Deno on five OSes),
`wasi.yml`, `browser.yml`, `fullstack.yml`, `npm-dist.yml` (a loopback registry
rehearsal of the exact packages, installed by npm, Bun and Deno),
`published-templates.yml` and `bun-deno-published.yml` (the public registry
after each release and daily). **Cannot catch:** real cloud platforms (no
accounts, by policy), OS versions and configurations outside the runners.

### Fuzzing at the boundaries

Planned, nightly, each with an oracle: HTTP requests against the targets
(malformed, huge, slow, chunked edge cases: no crash or hang, a 4xx, bounded
memory, targets agree); Lasm.RPC (always 400 or a valid response); the
`lasm:ui-dom` patch decoder (a clean error, never a corrupted DOM); URL, query
and JSON parsers (no panic, round trips); the WASI and Fastly C hosts under
libFuzzer with ASan/UBSan; CLI inputs and project files (paths with spaces and
Unicode, odd lakefiles: a clear error, never a stack trace). **Cannot catch:**
logic errors that produce well-formed wrong answers (that is what the
differential and equivalence oracles are for).

### Deterministic simulation and schedule fuzzing

The 0.3.0 hang was a lost wake-up in `src/node-js.mjs` `syncFunction`: the main
thread read the Lean thread's host-call sequence after posting a call, so a
call made at once counted as served. `test/node-js.test.mjs` makes that
interleaving deterministic, and `lasm-js-stress.yml` runs the Lasm.JS programs
hundreds of times per platform with a short timeout and keeps diagnostics of
any hang (a release gate). Three layers now cover the protocol itself
([bridge-verification.yml](../.github/workflows/bridge-verification.yml)).

**1. A Lean model, checked over every interleaving**
([`verification/host-bridge/`](../verification/host-bridge/), a self-contained
Lake package, no dependencies). Two models, step for step as implemented, each
step one access to a shared word:

- `HostBridge/SyncCallback.lean`: one Lean thread's host-call slot (`seq`,
  `ready`, the request and reply fields: `$lasmFullRPC.exchange` in
  `host-library.js`), the host's asynchronous server of it (`lasmFullServe`,
  `slot.sequence`, `Atomics.waitAsync`), the synchronous-callback channel
  (`state`, the doorbell; `sync_main` and `post` in `library/c/lasm_js.c`), and
  Node's main thread inside a synchronous callback (`syncFunction`,
  `lasmFullServeSync`, work other threads proxy to the main thread). Waits
  follow `Atomics.wait`/futex semantics; a blocked wait may also wake
  spuriously and a timed wait may time out (each optional per configuration).
- `HostBridge/Poller.lean`: the interop poller (`claim_poller`'s
  compare-and-swap, `start_poller` from awaits and from the host's
  `spawnPoller`, `lasm_js_park` for `waitForever`), the host's event queue,
  waiter, `polled` flag and re-armed spawn timer, and the lazy completion thread
  (`ensure_completion_thread`, op 94, the op 95 long poll, completions queued
  before its first poll).

`HostBridge/Checker.lean` is an explicit-state checker: breadth-first search
over every reachable state, then **safety** (no request served twice, every
reply and result belongs to its request or callback, at most one poller, no
event or completion delivered twice), **deadlock freedom** (every non-final
state has a successor) and **liveness under weak fairness** (no reachable
cycle of non-final states in which every continuously enabled thread or
event-loop task keeps stepping: Tarjan's strongly connected components;
spurious wake-ups are allowed only finitely often). Counterexamples are
shortest paths, printed step by step. `lake exe host-bridge check --large`
runs every configuration (CI: about 1 s):

| Configuration | Bound | States | Result |
| --- | --- | ---: | --- |
| Synchronous callbacks, no timeouts, no spurious wake-ups | callbacks with 1, 0, 2 host calls | 9,952 | ok: every host call is served by a notification alone |
| … with spurious wake-ups and timeouts | 2 callbacks × 2 host calls; (large) 3, 0, 3, 2, 1, 3 | 17,277; 103,208 | ok |
| … 4 and (large) 10 callbacks | 1 host call each | 18,756; 98,890 | ok |
| Work proxied to the main thread inside callbacks | 1 + 1; (large) 5 callbacks, 8 host calls | 8,796; 54,756 | ok (it runs when the wait's 10 ms timeout expires) |
| A generic Lean thread's slot, replies now or in a later task | 3; (large) 30 host calls | 280; 3,196 | ok |
| Poller and completion thread | 5 scripts (callbacks with and without `waitForever`, awaits, async requests, timer races); (large) 4 calls, 2 awaits, 2 async requests | 84–1,588; up to 34,678 | ok |

Each **mutation** reintroduces a bug and must be found, which tests the checker
(and fails CI if it is not found): the 0.3.0 order (read after posting: a
deadlock without timeouts), 0.3.0 as released (also no serve on timeout: a fair
non-progress cycle), the wait before this change (proxied work never run: a
non-progress cycle), host calls without the doorbell (deadlock), a host that
forgets `slot.sequence` (a request served twice), `claim_poller` without
compare-and-swap (two pollers), completions dropped before the first poll and
no poller requested for queued events (deadlocks).

**2. Schedule fuzzing of the real JavaScript**
([`scripts/bridge-fuzz/schedule.cjs`](../scripts/bridge-fuzz/schedule.cjs)).
A test-only preload, loaded explicitly with `NODE_OPTIONS=--require=…`, so
published builds contain no hook at all (it is not packed); Node loads it in
the main thread and in every Lean thread's worker. With `LASM_BRIDGE_SEED` it
wraps `Atomics.load/store/add/notify/wait/waitAsync` on the Wasm memory: before
and after each operation it may spin or sleep (a yield at every handshake step
and host-call boundary), a blocking wait may return early (`ok`, or `timed-out`
as if its time had passed) and a `waitAsync` may resolve late. Every decision
comes from a generator seeded by (seed, thread), so a run's perturbations
repeat from its seed. `scripts/ci/lasm-js-stress.mjs --seed S` runs the stress
programs (js-interop, js-callbacks, the Hono server) with seed S + i for run i;
a run passes with no timeout and the same output as the expected output or the
first run (timings masked). A failure prints its seed and the command that
replays it, and is replayed `--replays` times from the seed alone (real threads
still schedule themselves, so the replay count is reported, not assumed).
Locally: `node scripts/ci/lasm-js-stress.mjs - WORK RESULT.json --lasm
node_modules/@lasm/cli/bin/lasm.mjs --only js-interop,js-callbacks --runs 20 --seed 1`.

**3. Model-to-code conformance.** With `LASM_BRIDGE_TRACE=DIR` the preload
also records every such operation in one global order (a lock around each, the
comparison of a wait included) and at exit writes one trace per host-call slot
(`slot sync` for the synchronous-callback thread, `slot generic` for every
other Lean thread and nesting depth; roles from the diagnostics globals
`lasm.js.sync` and `lasm.full.slots`). `host-bridge trace FILE…` checks each
against the model's transition relation: every event must be a visible step,
with any number of hidden steps (the Lean thread's Wasm futex waits and its C
code, which the preload cannot see) in between. The fuzzed runs trace every
fifth (PR) or twentieth (nightly) run. A local fuzzed run of js-interop and
js-callbacks recorded 80 traces (up to 20,400 events each), all conforming.
The self-test in `host-bridge check` accepts three real traces
(`verification/host-bridge/traces/conforming/`) and must reject three drifted
ones (`traces/drifted/`: the 0.3.0 order, a reply the host never stored, a
request served twice).

**CI.** Pull requests that touch the bridge (`src/node-js.mjs`,
`src/node-host.mjs`, `host-pre.js`, `host-library.js`, `lasm_js.c`, the model,
the fuzzer, the stress programs): the model, then 20 fuzzed runs per program on
Linux and the conformance check of their traces. Nightly (03:17 UTC): 200
fuzzed runs per program on Linux, macOS (Intel and Arm) and Windows. The
release's unfuzzed stress gate is unchanged.

**What it catches:** lost wake-ups, lost, duplicated or mismatched requests,
replies and events, deadlocks and livelocks in the modelled protocol at the
bounds above; a change to the code's sequence of shared-memory operations that
the model does not allow; hangs and wrong output under perturbed schedules.
**What it cannot catch:** races outside the modelled protocol (Lean's own
runtime, Emscripten's internals beyond the proxied call, a host call made by a
task proxied to the synchronous-callback thread while it waits, which uses the
next depth's slot and is not served inline); behaviour beyond the bounds;
memory-model effects (the model is sequentially consistent, as JavaScript's
`Atomics` are); the Lean thread's Wasm-side steps are checked only through
their effects in a trace. The model assumes each slot is used by one thread at a
time and that the event loop eventually runs every queued task.

### Coverage and mutation testing

`unit.yml` runs the unit suite with `NODE_V8_COVERAGE` set, so V8 records the
coverage of every Node process the tests start (the CLI, build workers, hosts),
and [`scripts/coverage/report.mjs`](../scripts/coverage/report.mjs) turns it into
a summary with c8, counting files that never loaded as 0 %.
The [baseline](#coverage-baseline) is published below. Coverage says which lines
ran, not that their results were checked; mutation testing (Stryker on the dev
build service, link driver, notices and DOM applier; planned, nightly, rotating
modules) says whether the tests would notice a change.

## CI tiers

| Tier | When | Adds (beyond existing checks) | Budget |
| --- | --- | --- | --- |
| PR | every pull request and push to `main` (bridge model and fuzzing: when the bridge changes) | host bridge: the model (about 1 s), 20 schedule-fuzzed runs per stress program on Linux and their traces' conformance; differential: regressions + three seeded program pairs (525 cases) on node, wasi, node:wasi, edge, plus the interpreter, `node-O0` and the edge `.wasm` on Node, Bun and SpiderMonkey; target equivalence of the fetch template and `examples/fetch` on node, deno, bun, wasi-http, workers (one candidate pack, then two parallel jobs) | measured: pack 1.5 min, differential about 5 min (one pair took 2.7 min, run 41232604865) |
| Nightly | 03:17, 04:41 UTC | host bridge: 200 schedule-fuzzed runs per stress program on four platforms, conformance of their traces; differential: 60-minute campaigns for the release and the dev profile (two jobs), every oracle including `wasi-O0` and `deno-O0`; the nightly upstream suite (`nightly.yml`) | about 1.5 h |
| Release | release PR (`release-checks`) | every launch workflow, Lasm.JS stress, unit suite, npm rehearsal (unchanged) | as today |

## Test-quality audit

An HN commenter mocked "tests that assert certain strings exist in the
codebase". An audit of `test/`, `integration/` and the CI check scripts on
2026-10-31 found 13 tests whose assertions read repository files as text, and 29 test files that CI never runs. All
`integration/` harnesses and `scripts/**/check*.mjs` check things they build or
run. Verdicts:

| Test | What it read | Verdict |
| --- | --- | --- |
| `application-output.test.mjs`: host support files exist with their dependencies | regex import scan of `src/` | **Replaced**: the shipped host files are copied alone into an empty directory and imported by Node's loader in a fresh process (`test/helpers/isolated-import.mjs`); a missing dependency fails to resolve; the test also checks that removing one is noticed |
| `wasmtime-artifact.test.mjs`: standalone deployment carries every local dependency | regex import scan | **Replaced** the same way (a `new URL('./x')` asset that is not imported is still not covered) |
| `candidate-readme.test.mjs`: a packed README installs its own archive | the real README's headings (failed after the README was reworded, PR #22) | **Replaced**: the transformation is tested on a fixed README; the real README is only required to pack (one install line, no unpinned links) |
| `application-output.test.mjs`: retained callable and frozen outputs include transitive dependencies | file lists regex-parsed out of `src/build.mjs`, `src/main.mjs`, two scripts | **To replace**: export the lists as data and import-test them like the host files |
| `browser.test.mjs`: builtin modules use web-standard JavaScript only | `node:`/`process`/`Buffer` in `src/lasm-modules/*.mjs` | **Keep as a lint**: a grep finds uses inside functions that loading never runs; the behaviour is covered by `workers.yml` (workerd), Deno and the browser |
| `release.test.mjs`: release.yml is the trusted publisher | regexes over four workflow files | **Keep the no-secrets lint; to replace the rest**: parse the YAML and test the `needs` graph; move the inline gate list into a tested module |
| `nightly.test.mjs`: nightly.yml is scheduled, serialized, never a release dependency | regexes over workflows | **To replace** with structural YAML checks (the deferral logic is already tested through `nextStep`) |
| `notices.test.mjs`: the edge runtime archive carries the MIT text and its change list | the packager's source | **To replace**: call the notice builder on a manifest (built outputs are already checked by `scripts/license/check-outputs.mjs`) |
| `notices.test.mjs` (3 lines of the Apache 4(b) test; the rest is behavioural) | patch names regex-parsed from `build-application-runtime.mjs` | **Keep as a cross-reference lint** until the patch table moves into an importable module (the build script runs when imported) |
| `notices.test.mjs`: Lasm's licence copy, Wasmtime licence copies, MIT everywhere, MIT-0 texts | file equality and headers | **Keep**: consistency guards; licence text is what must be shipped |
| 29 unit files (`compiler`, `conformance`, `io`, `runtime`, the `node-*` host files …, listed in `needsTools` in `scripts/ci/unit-tests.mjs`) | not static, but they build with the retired Lean 4.32 library pipeline (system `lean` 4.32 and Zig), so CI never runs them (their failures are reported, not fatal) | **To port or retire**: the behaviours they cover (host IO, processes, cwd, signals) are partly covered by the installed-package acceptance and the differential tester's IO and file cases; each file should be ported to the current pipeline or deleted |
| `browser.test.mjs`: every `lasm:web`/`lasm:app` binding names an export | `@[js …]` attributes in `library/Lasm/Web` cross-checked against real exports | **Keep**: a cheap cross-reference lint; a full behavioural check would link a program using every binding |

## Coverage baseline

Measured by `unit.yml` run [41234188450](https://github.com/Millillion/lasm/actions/runs/41234188450)
(commit `b2768b5`, Node 26.12.1, Linux x64), 148 JavaScript files under `src/`,
`bin/` and `packages/`; per-file numbers in
[evidence/coverage-baseline.json](evidence/coverage-baseline.json).

| Scope | Lines | Branches | Functions |
| --- | ---: | ---: | ---: |
| **Total** | **67.5 %** (14,151 / 20,968) | 78.5 % | 70.3 % |
| `src/` (CLI, build, Node host) | 69.3 % | | |
| `src/link-driver` | 82.3 % | | |
| `src/lasm-modules` (builtin `lasm:` modules) | 91.1 % | | |
| `src/wasi` | 70.6 % | | |
| `src/edge` | 48.2 % | | |
| `src/browser` | 53.3 % | | |
| `src/serverless` | 13.3 % | | |
| `src/vite` | 0 % | | |

The host bridge is well covered (`src/node-js.mjs` 91.5 %, `src/node-host.mjs`
95.0 %); `src/dev.mjs` (`lasm dev`) is at 43 %. The 0 % files fall in two
groups. Some run only inside built outputs (`src/edge/edge-pre.js`,
`src/browser/loader.mjs`, `src/wasmtime-runtime.mjs`, `src/serverless/lasm-*.mjs`):
they are copied into `dist/` and executed there by the integration workflows, and
this measurement only counts files at their `src/` path. The others are simply
not unit-tested (`src/vite/index.mjs`, `src/application-binding-check.mjs`,
`src/application-build.mjs`). The 29 legacy files of the [audit](#test-quality-audit)
contribute nothing. `unit.yml` (a release gate) fails when the total line
coverage falls more than one point below this baseline; raise the baseline file
when coverage improves.

## Bugs found

| Found by | Bug | Status |
| --- | --- | --- |
| Differential testing, seed 1 (`wasi-node`) | **WASI:** libc's environment lost every variable after the third: `__wasi_environ_get` in `src/wasi/lasm_wasi_libc.c` widened the 32-bit WASI pointers in place with typed loads and stores that alias, which clang `-O2` may reorder. The Lean runtime's `LEAN_BACKTRACE` and `LEAN_ABORT_ON_PANIC` (and any libc `getenv`) were ignored unless among the first three variables; `IO.getEnv` was unaffected | Fixed in #25 (char-typed copies); regression `r_wasi_env_backtrace` |
| Differential testing, regression replay (`deno`) | **Edge profile:** the C runtime's `getenv` sees none of the host's variables, so `LEAN_BACKTRACE=0` and `LEAN_ABORT_ON_PANIC` have no effect on the edge targets, Bun, Deno and the browser | Fixed ([#26](https://github.com/Millillion/lasm/issues/26)): the embedder's string variables are copied into Emscripten's `ENV` before libc reads it (`src/edge/edge-library.js`, `src/edge/edge-start.mjs`); regression `r_edge_env_backtrace`; [EDGE.md](EDGE.md#environment-variables) |
| Target equivalence (fetch template, `examples/fetch`) | `GET /hello/../hello/Ada`: Node, Deno and wasi-http route the raw dot segments (404); Bun and Workers remove them first (200). Same handler, different routing per platform, and `..` reaches handlers on Node | [#27](https://github.com/Millillion/lasm/issues/27) (proposal: `remove_dot_segments` in `Request.path`), listed as `known` |
| Differential testing, `deep` and `ending` cases | wasmtime turns an exit status of 126–255 into exit 1 with an error (docs/WASI.md says modulo 256); edge and WASI recursion stops just below 10,000 frames of a small function (docs/EDGE.md says 10,000 pass) | Documented ([#30](https://github.com/Millillion/lasm/issues/30)): measured bounds in [WASI.md](WASI.md) and [EDGE.md](EDGE.md); wasmtime's status limit stays in `KNOWN` (a host limit); generator bound 5,000 |
| Target equivalence, first CI run | Bun answered some requests with "socket hang up": the harness's pooled keep-alive sockets, not Lasm (fresh connections per request fixed it) | Harness fix |
| Dev-profile campaign 41241443151 | **`lasm build --dev` followed by `lasm build --target wasi --dev` in the same project failed** (also in 0.3.5): the WASI link took the seeded dev link's Node archive members (`*.lasm-member.o`) and `reachability.o` along with the edge runtime's archives, so every host symbol was defined twice. The edge link already dropped them | Fixed in `src/wasi/wasi-link.mjs` (#34); the PR tier now replays the regressions in the dev profile |
| Dev-profile campaign 41241443151 | `Float.pow` differed in the 17th digit between native (glibc) and Wasm (musl's libm): expected, libm functions are not correctly rounded | Generator: libm results go through `approx` (9 significant digits) |
| Nightly-style campaign 41241440598 (9,450 cases) | Two "divergences" on every Wasm target were the harness's own: it decoded each pipe chunk of the oracle's output separately, so a UTF-8 character split by native Lean's 4,096-byte writes became U+FFFD (the Wasm targets wrote it whole). `scripts/ci/lasm-js-stress.mjs` had the same pattern | Harness fix (#33) |
| Test-quality audit | `candidate-readme.test.mjs` broke on `main` when the README's headings changed (PR #22), failing `installer-faults.yml` on every PR | Fixed in #25 |
| Host bridge model (proxied work in a synchronous callback) | **A synchronous Lasm.JS callback that made the program's first asynchronous runtime request (a timer, socket, DNS lookup) hung for good.** The request starts the completion thread; `pthread_create` on a Lean thread is proxied synchronously to Node's main thread, which waited in `syncFunction` on the doorbell and never ran proxied work. Found while modelling the lazy completion thread, then reproduced (0.3.5) | Fixed: the wait runs the main thread's mailbox (`serveMailbox`, Emscripten's `_emscripten_check_mailbox`) whenever it times out, every 10 ms; regression in `test/node-js.test.mjs` and part 4 of `test/fixtures/js-callbacks`; the model's mutation keeps the old wait |
