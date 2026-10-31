# How Lasm is tested

Status: **methodology, 2026-10-31.** Differential testing, target equivalence and
the test-quality audit below are implemented and run in CI; the other layers
are marked as existing (with their workflow) or planned. The plan is issue #21
(testing and verification half).

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
| [Differential testing](#differential-testing) | Lasm-compiled programs behave exactly like native Lean | `scripts/differential/` | PR, nightly |
| [Target equivalence](#target-equivalence) | One server answers the same on every target | `scripts/equivalence/` | PR, nightly |
| [Scenario matrix](#scenario-matrix) | Template × `--target` × OS × runtime from the packed/published package | `templates.yml`, `platform-support.yml`, `workers.yml`, `wasi.yml`, `npm-dist.yml`, `published-templates.yml`, `bun-deno-published.yml` | release, after publish, daily |
| Upstream Lean suite | Lean's own tests, run through the installed package | `language-coverage-baseline.yml`, `nightly.yml` ([UPSTREAM_APPLICATION_TESTS.md](UPSTREAM_APPLICATION_TESTS.md)) | nightly, release |
| Example apps | Conduit against the official RealWorld API and Playwright suites | `conduit.yml` | PR (paths) |
| [Fuzzing at boundaries](#fuzzing-at-the-boundaries) | Parsers and decoders never crash, hang or accept garbage | planned | nightly |
| [Schedule fuzzing](#deterministic-simulation-and-schedule-fuzzing) | The host bridge has no lost wake-ups or deadlocks | `lasm-js-stress.yml`, `test/node-js.test.mjs`; simulation planned | release |
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
by every edge platform, Bun, Deno and the browser, run by Deno 2.9.6). File-system
cases run only where a file system exists (node, WASI). The program's
environment always contains several variables before the ones Lean reads (that
is how the [WASI `getenv` bug](#bugs-found) was found).

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
# a campaign: --budget-min 60; dev profile: --profile dev; on a shared host,
# serialize builds: --wrap "flock LOCK node scripts/full-lean/run-bounded.mjs --memory-mib 6144 --"
```

**CI** ([differential.yml](../.github/workflows/differential.yml)): every pull
request and push to `main` packs a candidate from the commit, installs it with
npm, replays the regressions and runs three program pairs (3 × (150 + 25) cases) from a
seed derived from the commit; nightly runs a 60-minute campaign from a fresh
seed. A divergence fails the job and the reproducers are in the run's artifact.
Known divergences with an open issue are listed in `KNOWN` in `run.mjs`,
applied before the comparison and counted in the summary.

**What it catches:** miscompilation anywhere in Lasm's pipeline (Lean's C
through clang/Emscripten, Binaryen's optimizer, Lasm's linking, the runtime
patches), runtime and host-bridge differences (bignums on 32-bit memory,
strings, hashing, panics, uncaught errors, exit codes, tasks, refs, files),
differences between targets.
**What it cannot catch:** bugs that native Lean has too (it is the oracle);
anything outside the generator's grammar (today: no `Std.Http`, sockets,
processes, `Std.Time`, typeclass-heavy or universe-polymorphic code, very deep
recursion or large heaps); nondeterministic behaviour (output order across
threads is never printed); performance; the browser (planned: the same programs
under Playwright).

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
call made at once counted as served. Today `test/node-js.test.mjs` makes that
interleaving deterministic, and `lasm-js-stress.yml` runs the Lasm.JS programs
hundreds of times per platform with a short timeout and keeps diagnostics of
any hang (a release gate). Planned: (1) a model of the host-call protocol
(sequence numbers, doorbell, poller claim, completion thread) checked over all
interleavings up to a bound; (2) schedule fuzzing: random delays and yields
injected at every `Atomics.wait`/`notify` and host-call boundary under a seed,
then the stress programs, so a hang reproduces from its seed. **Cannot catch:**
races outside the modelled protocol, memory-model effects the JavaScript engine
never exhibits on the tested CPUs.

### Coverage and mutation testing

`node scripts/coverage/run.mjs` runs the unit suite under c8 (V8's own coverage,
including child processes such as the CLI) and writes the summary to
[`docs/evidence/coverage-baseline.json`](evidence/coverage-baseline.json).
The [baseline](#coverage-baseline) is published below. Coverage says which lines
ran, not that their results were checked; mutation testing (Stryker on the dev
build service, link driver, notices and DOM applier; planned, nightly, rotating
modules) says whether the tests would notice a change.

## CI tiers

| Tier | When | Adds (beyond existing checks) | Budget |
| --- | --- | --- | --- |
| PR | every pull request and push to `main` | differential: regressions + three seeded program pairs (525 cases) on node, wasi, node:wasi, edge; target equivalence of the fetch template and `examples/fetch` on node, deno, bun, wasi-http, workers (one candidate pack, then two parallel jobs) | measured: pack 1.5 min, differential about 5 min (one pair took 2.7 min, run 41232604865) |
| Nightly | 04:41 UTC | differential: 60-minute campaign; the nightly upstream suite (`nightly.yml`) | about 1.5 h |
| Release | release PR (`release-checks`) | every launch workflow, Lasm.JS stress, unit suite, npm rehearsal (unchanged) | as today |

## Test-quality audit

An HN commenter mocked "tests that assert certain strings exist in the
codebase". An audit of `test/`, `integration/` and the CI check scripts on
2026-10-31 found 13 tests whose assertions read repository files as text. All
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
| `notices.test.mjs` (3 lines of the Apache 4(b) test) | patch names regex-parsed from a build script | **To replace**: import the patch table |
| `notices.test.mjs`: Lasm's licence copy, Wasmtime licence copies, MIT everywhere, MIT-0 texts | file equality and headers | **Keep**: consistency guards; licence text is what must be shipped |
| `browser.test.mjs`: every `lasm:web`/`lasm:app` binding names an export | `@[js …]` attributes in `library/Lasm/Web` cross-checked against real exports | **Keep**: a cheap cross-reference lint; a full behavioural check would link a program using every binding |

## Coverage baseline

(Filled by `scripts/coverage/run.mjs`; see the evidence file for per-file numbers.)

## Bugs found

| Found by | Bug | Status |
| --- | --- | --- |
| Differential testing, seed 1 (`wasi-node`) | **WASI:** libc's environment lost every variable after the third: `__wasi_environ_get` in `src/wasi/lasm_wasi_libc.c` widened the 32-bit WASI pointers in place with typed loads and stores that alias, which clang `-O2` may reorder. The Lean runtime's `LEAN_BACKTRACE` and `LEAN_ABORT_ON_PANIC` (and any libc `getenv`) were ignored unless among the first three variables; `IO.getEnv` was unaffected | Fixed in #25 (char-typed copies); regression `r_wasi_env_backtrace` |
| Differential testing, regression replay (`deno`) | **Edge profile:** the C runtime's `getenv` sees none of the host's variables, so `LEAN_BACKTRACE=0` and `LEAN_ABORT_ON_PANIC` have no effect on the edge targets, Bun, Deno and the browser | [#26](https://github.com/Millillion/lasm/issues/26), listed in `KNOWN` |
| Test-quality audit | `candidate-readme.test.mjs` broke on `main` when the README's headings changed (PR #22), failing `installer-faults.yml` on every PR | Fixed in #25 |
