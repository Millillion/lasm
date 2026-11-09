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
| [Differential testing](#differential-testing) and [fuzzing](#differential-fuzzing) | Lasm-compiled programs (generated expressions, statements, and feature programs declaring classes, inductives, closures, loops, structures) behave exactly like native Lean, unoptimized builds like optimized ones, and one `.wasm` alike on V8, JavaScriptCore, SpiderMonkey and wasmtime; native Lean agrees with its interpreter ([more oracles](#more-oracles)) | `scripts/differential/` | PR, nightly, weekly ([CI.md](CI.md)) |
| [Target equivalence](#target-equivalence) | One server answers the same on every target; Conduit's RealWorld traffic equals Node's on every platform | `scripts/equivalence/`, `examples/conduit/test/equivalence.mjs` | PR, nightly |
| [Scenario matrix](#scenario-matrix) | Template × `--target` × OS × runtime from the packed/published package | `templates.yml`, `platform-support.yml`, `workers.yml`, `wasi.yml`, `npm-dist.yml`, `published-templates.yml`, `bun-deno-published.yml` | release, nightly (`ci-nightly.yml`), after publish |
| Upstream Lean suite | Lean's own tests, run through the installed package | `language-coverage-baseline.yml`, `nightly.yml` ([UPSTREAM_APPLICATION_TESTS.md](UPSTREAM_APPLICATION_TESTS.md)) | nightly, release |
| Example apps | Conduit against the official RealWorld API and Playwright suites | `conduit.yml` | PR (paths) |
| [Dependable tooling](#dependable-tooling) | Every user-triggerable error prints a clear message (error corpus); incremental, repeated, renamed and touched builds give the clean build's bytes (metamorphic); killed, offline, full-disk, read-only and corrupted runs end in success or a clear error (fault injection) | `scripts/tooling/`, `tooling.yml` | PR (corpus), nightly (all) |
| [Fuzzing at boundaries](#fuzzing-at-the-boundaries) | Parsers and decoders never crash, hang or accept garbage: the CLI's arguments, the function platforms' HTTP mapping, the Lasm.UI patch decoder, Lasm.Fetch's request parsing, Lasm.RPC's decoding, the WASI C host's CGI request | `test/fuzz/`, `fuzz.yml` | PR (replay), nightly, weekly |
| [Model checking and schedule fuzzing](#deterministic-simulation-and-schedule-fuzzing) | The host bridge has no lost wake-ups, lost or doubly served requests, or deadlocks; the code follows the model | `verification/host-bridge/`, `scripts/bridge-fuzz/`, `bridge-verification.yml`, `lasm-js-stress.yml`, `test/node-js.test.mjs` | PR (paths), nightly, release |
| [Deterministic simulation of the example apps](#deterministic-simulation-of-the-example-apps) | Tandem, Ledger and Porter keep their guarantees (no lost acknowledged edit, convergence, conservation of money, single-use codes and tokens, exact expiry) under simulated network, storage and clock faults; every failure replays from its seed | `scripts/sim/`, `examples/{tandem,ledger,porter}/Sim.lean` and `test/dst/`, `tandem.yml`, `ledger.yml`, `porter.yml`, `dst-nightly.yml` | PR (paths, 30 fixed seeds), nightly (random seeds) |
| Proofs | Lean theorems of Lasm.UI, Conduit, … (`#print axioms`) | `ui.yml`, `conduit.yml` | PR (paths), release |
| Unit tests | Functions of the CLI and host, in isolation | `test/*.test.mjs` (`unit.yml`, a subset in `installer-faults.yml`) | PR (`unit.yml`), nightly, release |
| [Flaky tests](#flaky-tests) | A flaky test is quarantined at once, then fixed or deleted within a week | `test/quarantine.json`, `scripts/test/`, `scripts/ci/flaky-report.mjs` (`flaky.yml`) | nightly report; quarantine on every unit run |
| [Coverage and mutation](#coverage-and-mutation-testing) | How much of the JavaScript the tests execute, and whether they would notice a change | `scripts/coverage/`, `scripts/mutation/` (`mutation.yml`) | PR, nightly and release (coverage); nightly and PR, changed modules only (mutation) |

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
`deno-O0`, `edge-node`, `edge-bun`, `edge-sm`) and the [Bun and browser
targets](#bun-and-browser-targets) (`bun`, `bun-O0`, `browser-chromium`,
`browser-firefox`, `browser-webkit`). File-system cases run only where a
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
# every oracle: --targets node,wasi,wasi-node,deno,interp,node-O0,wasi-O0,deno-O0,edge-node,edge-bun,edge-sm,
#   bun,bun-O0,browser-chromium,browser-firefox,browser-webkit
#   --bun PATH/bun --sm PATH/js (SpiderMonkey's js shell) --playwright DIR (holds node_modules/playwright-core)
# a campaign: --budget-min 60; dev profile: --profile dev; on a shared host,
# serialize builds: --wrap "flock LOCK node scripts/full-lean/run-bounded.mjs --memory-mib 6144 --"
```

**CI** ([differential.yml](../.github/workflows/differential.yml)): every pull
request and push to `main` packs a candidate from the commit, installs it with
npm, replays the regressions and runs three program pairs (3 × (150 + 25) cases) from a
seed derived from the commit, on the base targets, the cheap extra oracles
(`interp`, `node-O0`, `edge-node`, `edge-bun`, `edge-sm`), `bun` and
`browser-chromium`; nightly runs a 60-minute campaign from a fresh seed on every
target (also `wasi-O0`, `deno-O0`, `bun-O0`, `browser-firefox` and
`browser-webkit`). A divergence fails the job and the reproducers are in the run's
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
threads is never printed); performance; in browsers, which exit status a failing
`main` had (a page has none: only zero against non-zero is compared, see
[below](#bun-and-browser-targets)).

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

**(b) Optimization differential** (targets `node-O0`, `wasi-O0`, `deno-O0`,
and `bun-O0`). The same program built through the same installed Lasm with optimization off,
compared with native Lean like every target (the optimized builds are the base
targets, so an `-O0`-only divergence points at clang or Binaryen optimizing
something that changes behaviour, or at undefined behaviour in the generated or
runtime C). The edge targets (`deno-O0`, `bun-O0`) run it with `deep` cases
capped at 1,000 frames, since unoptimized frames overflow the edge's 1 MiB C
stack at 3,000 (see [Bugs found](#bugs-found)). The switch is a test-only
environment variable of the build, not a CLI flag:

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

### Differential fuzzing

**Property.** The same as [differential testing](#differential-testing), for
programs that declare things of their own: native Lean 4.35.0 and every Lasm
target print the same stdout and stderr and exit with the same status.

**Why.** The core generator's cases are expressions and statement lists over a
fixed preamble, so they never declare a type class, an inductive with
overlapping patterns, a function of 17 arguments or a 200,000-iteration loop.
Those exercise different parts of Lean's compiler and runtime (instance
resolution and specialization, the match compiler, `lean_apply_n`/`lean_apply_m`
and partial applications, tail calls turned into C loops, signed fixed-width
arithmetic), and so different code in clang, Binaryen and Lasm's runtime.

**Generator** ([`scripts/differential/features.mjs`](../scripts/differential/features.mjs)).
A feature case is a family and its random parameters (Csmith-style: a seeded,
size-bounded grammar); it renders as top-level declarations named after the
case, then `def cN : IO Unit` printing one line per check. Families:

| Family | What it declares and checks |
| --- | --- |
| `ext` | expressions over the core types plus the extension types: `Int8`–`Int64` (overflow, `INT_MIN / -1`, shifts past the width, conversions), `Float32` (IEEE-exact operations and its bits), `ByteArray` (UTF-8 validation of arbitrary bytes, `hash`), `Std.HashSet`, `Std.TreeMap`; with a 35 % chance, operations that panic (`xs[i]!`, `get!`, `head!`, `back!`, `toNat!`), whose message goes to stderr before the default value is used |
| `class` | a class with a default field and a default method; instances for random types whose operation is a random expression over its two arguments; instances derived for products and `Option`; polymorphic functions over the class (`mconcat`, `pow`, `combine3`, an `==` check) |
| `adt` | an expression language (`lit`, `var`, `add`, `mul`, `neg`, `ite`, de Bruijn `letE`, deriving `Repr`, `BEq`, `Hashable`), an evaluator with an environment, and a simplifier whose alternatives are a random subset of 13 nested, overlapping rules over `Int` literals plus random congruence rules; random terms with bignum literals |
| `closure` | functions of arity 1 to 18 applied fully and partially (each partial application forced through the `@[noinline]` identity `bb`, then applied in random chunks of 1 to 6 arguments), closures capturing values, arrays of closures folded, composition, functions returning closures |
| `loop` | self tail recursion up to 200,000 iterations, `Nat.fold`, mutual recursion (at most 500 frames), `partial def` with fuel, well-founded recursion (`termination_by`/`decreasing_by`: a binary search up to 2¹²⁸), `while` with `continue` and `break` in `Id.run` |
| `struct` | a structure with default fields and one that `extends` it, deriving `Repr`, `BEq`, `Hashable`, `Ord`: values with defaults left out, `compare`, sorting, `with` updates, the parent projection |
| `exc` | `ExceptT` with a custom error inductive over `StateT Nat IO`: conditional `throw`, `try`/`catch` with a `match` on the error, `try`/`finally`, `for` with `break`, early `return`, an `IO.Ref` |

Holes are expressions from the core generator's operation table (with the
extension operations enabled), drawn so that they use the variables in scope.
Everything terminates by construction (bounded counts, fuel, measures that Lean
checks) and needs no file system, sleep or environment, so a feature program
runs on **every** target, the browsers and the `-O0` edge builds included (no
recursion is deeper than 500 frames; the loops compile to C loops: no generated
function calls itself in the emitted C, and `Nat.fold` and `while` run 10⁸
iterations natively where a recursion of that depth aborts). The extension operations are appended after the
core ones and filtered out of core cases, so every core case of every seed is
unchanged (a unit test pins their hash). Each case draws from its own stream
`rng(seed, 'feat', index)`.

**Batching.** 80 feature cases per program, one program per seed: one build per
target covers them all, as for the core program.

**Reducer.** Delta debugging over the case's tree (`featureShrinks`): every
check removed, every simplifier rule or congruence rule removed, every
expression hole replaced by a same-typed child or a minimal literal, every
expression-language term replaced by `0` or a subterm in scope, every count
lowered. Every candidate type-checks (checks and rules are independent, holes
keep their type), so the harness's batched shrink rounds (up to 40 candidates
per build) never stop on a candidate that does not compile. The minimized case
is written as `r_<target>_<seed>_f<index>.lean`, a regression file in the
usual format (it carries its own declarations).

**Running it.** The same harness ([Running it](#differential-testing)):
`--feat-cases 80` (the default) adds a feature program to every seed of the
run; `--feat-seeds 1,2 --feat-random 0` replays only those seeds' feature
programs (the PR tier's fixed set). `--cases 0 --fs-cases 0 --feat-cases 200` runs feature programs only; `differential.yml` dispatched with `feature-only: true` does that for a campaign.

**Tiers** ([differential.yml](../.github/workflows/differential.yml)):

| Tier | Feature programs |
| --- | --- |
| PR and push to `main` | the fixed seeds of `DIFF_FEATURE_SEEDS_PR` (1 and 2), 80 cases each, on the PR targets |
| Nightly | one per fresh seed of the 60-minute campaigns (release and dev profile), every target |
| Weekly | one per fresh seed of the 100-minute campaigns (`ci-weekly.yml`), every target |

The job summary counts programs and cases per kind (`core`, `fs`, `feat`, …)
and the throughput.

**What it cannot catch:** the same blind spots as differential testing, less the
ones it covers (type classes, inductives and pattern matching, closures,
loops): still no `Std.Http`, sockets, processes, `Std.Time`,
universe-polymorphic code, libm results of `Float32`, or concurrency (tasks stay
in the core generator).

FEATURE_RESULTS

### Bun and browser targets

Two user-facing targets through the same harness, built as users build them
from the installed candidate (`scripts/differential/run.mjs`):

| Target | Build | Run |
| --- | --- | --- |
| `bun`, `bun-O0` | `--target bun` (`bun-O0`: `LASM_TEST_UNOPTIMIZED=1`) | `bun bun/main.mjs`, Bun 1.4.4 |
| `browser-chromium` | `--target browser --suspend jspi`, in its own subdirectory (it writes `dist/`, as `node` does) | mounted in headless Chromium (Playwright 1.63.0) by [`browser-runner.mjs`](../scripts/differential/browser-runner.mjs) |
| `browser-firefox`, `browser-webkit` | the same build | headless Firefox and WebKit, on the program without `IO.sleep` |

The browser runner serves `dist/` from `127.0.0.1` (the Wasm as
`application/wasm`), opens a blank page, imports `app.js` and calls the public
`mount(element, { stdout, stderr })` ([BROWSER.md](BROWSER.md#loader-and-mount-api-measured)),
as an embedding page does. Lean's output arrives as lines and is compared line
for line (every generated line ends with a newline). A page has no environment,
so `LEAN_BACKTRACE=0` cannot reach the program and a panic prints a JavaScript
backtrace after its message ([EDGE.md](EDGE.md#environment-variables)); a
`KNOWN` entry removes that block before the comparison (it appeared on the
first PR run, 41718617906, on two regressions and three generated cases).
`IO.Process.exit` cannot end a page either: it stops the instance with
"Lean called IO.Process.exit n; an edge isolate cannot exit", which another
`KNOWN` entry removes when native Lean exited with that n (the first campaign
found that the message was lost: see [Bugs found](#bugs-found)). A page has no exit status:
`mount` resolves when `main` returned 0 and rejects otherwise, so the harness
compares zero against non-zero (`zeroOrNot` in `run.mjs`). Firefox and WebKit
run without JSPI (Firefox's JSPI is disabled by the loader, WebKit has none), and
there a blocking wait on a host timer (`IO.sleep`) stops the instance by design
([BROWSER.md](BROWSER.md#decisions)). They therefore run a third program per
seed: the core program with every `IO.sleep` removed (`withoutSleep` in
`generate.mjs`; indices and all other statements kept), and the regressions that
do not sleep. Browsers skip the regressions that read the environment (a page
has none). Pull requests run `bun` and `browser-chromium`; campaigns run all
five. *Catches:* differences in the Bun entry (`bun/main.mjs`) and the browser
loader, bundle and host (output streams, uncaught errors, panics), and engine
behaviour of Chromium's V8, Firefox's SpiderMonkey and WebKit's JavaScriptCore
with a real web host. *Cannot catch:* the exact non-zero exit status in a
browser; `IO.sleep` in Firefox and WebKit; the DOM, events and `Lasm.Web`
(browser.yml's suites cover those).

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
error, environment variables, timers and tasks, and a run of requests over one
keep-alive connection) and the expected responses,
recorded from Node with `--record`. Lasm's own responses are therefore pinned
too: a change on Node shows up as a diff in review.

**What it catches:** request/response translation bugs in each target's host
(header handling, body encoding, streaming, status mapping, error pages),
platform differences in URL parsing. **What it cannot catch:** behaviour the
corpus does not exercise; timing; headers platforms add themselves (`date`,
`server`, framing), which are deliberately not compared. Conduit's RealWorld
traffic is compared too, with its tokens and timestamps normalized (next section).

#### Conduit's RealWorld traffic
**Property.** On every target Conduit's CI runs, the official RealWorld API
suite (the pinned hurl specs, about 150 requests) gets the same answers as on
Node: equal statuses, equal response headers (apart from a documented list) and
byte-equal bodies, once tokens and timestamps are normalized.

`node test/api.mjs --equivalence` (in `examples/conduit`) puts a recording proxy
([`test/equivalence.mjs`](../examples/conduit/test/equivalence.mjs)) between
hurl and the server and fixes the suite's `UID_VAL`, so that on an empty store
the names, slugs and ids are the same everywhere. `node test/equivalence.mjs
compare NAME` then compares the normalized traffic with Node's, committed as
[`test/equivalence/realworld.json`](../examples/conduit/test/equivalence/realworld.json).
It aligns the two sequences by method and path (a hurl file stops at its first
failed assertion, which must not shift every later comparison) and prints a
line diff of each differing header block or pretty-printed body. Every Conduit
API job runs it as its last step: Node 24 and 26, Workers and Bun in
`conduit.yml`; Deno, Docker, Lambda (.zip and image), Vercel, Netlify, Azure,
Google Cloud Functions, Deno Deploy, Vercel Edge, Netlify Edge, Fastly,
wasi-http, Spin and Supabase Edge in `conduit-platforms.yml`.

What is normalized, and why that is legitimate:

| Normalized | How | Why |
| --- | --- | --- |
| JWTs, in any header or body | `<jwt#N>`, numbered by first appearance of the token's identity (its header and claims without `iat` and `exp`); the identities, `exp - iat`, and the number of tokens a request sent before any response issued them are compared separately | The signature depends on each target's secret, `iat` and `exp` on the clock, and whether a second login returns the same token on whether a second boundary passed. The identity table checks that the same user's token maps consistently and that requests use the tokens responses issued |
| ISO 8601 timestamps (`createdAt`, `updatedAt`) | each digit becomes `0`, the shape stays | The clock differs; the format (milliseconds, `Z`) is still compared |
| Header names and order | lower-cased, sorted by name; a repeated field keeps its order | Field names are case-insensitive and the order of different fields carries no meaning (RFC 9110 5.3) |
| `date`, `connection`, `keep-alive`, `transfer-encoding`, `content-length`, `server` (`IGNORED_HEADERS`, each with its reason in the file) | not compared | The clock, hop-by-hop fields, framing (the body bytes are compared instead) and the platform's product name |
| Headers one platform's local runtime adds (`PLATFORM_HEADERS`, on that platform only) | not compared | Netlify's function bootstrap adds `x-nf-invocation-metadata` and `x-nf-start-timestamp`; `sam local start-api` gives a bodiless 204 `Content-Type: application/json`; the Supabase stack's Kong gateway adds `via`, `x-kong-*-latency` and `vary: Accept-Encoding` |
| Generated ids: a token's `sub` (users) and the `"id"` fields of response bodies (comments) | their ordinal by first appearance; a request path's `/comments/N` takes the same ordinal when `N` was issued | SQL stores number each table from 1; the key-value stores (Deno KV, Netlify Blobs, Fastly KV, memory, the PostgREST table) use one sequence for every kind of row (`Server/Kv.lean`), so user 2 is `sub` 3 there. RealWorld promises integers, not values; the order and every reference between them are still compared |
| The request's `host`, the reason phrase | not compared | The proxy's own port; the reason phrase is optional in HTTP/1.1 |

Slugs, names and emails are **not** normalized: each run starts on an empty
store with the same `UID_VAL`, so a different one is a real difference. Known differences, each with an open issue,
go in [`test/equivalence/known.json`](../examples/conduit/test/equivalence/known.json)
and are reported, not failed. `test/equivalence.mjs self-test` (in the
`pinned` job) checks the normalizer and the diff on made-up traffic.

**Why a committed golden file rather than a Node recording made in the same
run.** The targets run in two workflows (`conduit.yml`, `conduit-platforms.yml`)
whose jobs cannot depend on each other, and a same-run recording would make
every platform job wait for the Node job or rebuild Node itself (another Lean
build per job). The golden file is reviewed like code: a change in Conduit's or
Lasm's answers fails the Node jobs too and shows up as a diff in the pull
request that caused it, instead of moving the reference silently. Conduit pins
`@lasm/cli` and the suite's commit, so the recording changes only when one of
them, or Conduit, does. Re-recording is copying `test-results/realworld-node-24.json`
from the `api-node` job's artifact over the golden file.

**What it catches:** a target answering differently from Node anywhere in the
suite's traffic: a status, a header the app or the platform adapter sets, a
body byte (key order, escaping, number formatting, error bodies), which user a
token belongs to, a write a store lost. **What it cannot catch:** requests the
suite does not send; behaviour under concurrency (`test/concurrency.mjs`);
bugs that are the same on every target, Node included; timing.

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

### Dependable tooling

Claim 4 of [TESTING_STRATEGY.md](proposals/TESTING_STRATEGY.md), tested black
box: each harness installs the CLI with npm (a candidate packed from the commit,
and for the corpus also the published `@lasm/cli@latest`) and judges only what
it prints, its exit status and the files it writes. The judge of a message,
`messageProblems` in [`scripts/tooling/lib.mjs`](../scripts/tooling/lib.mjs),
rejects JavaScript stack frames, raw JavaScript errors, Node's raw
file-system text (`EACCES: …, mkdir '…'`), a bare C library message without a
path, the internal-error line, unhandled rejections and empty output.

**Error corpus** ([`error-corpus.mjs`](../scripts/tooling/error-corpus.mjs)):
about 120 errors a user can cause: bad and conflicting flags of `lasm build`,
`lasm dev`, `lasm init` and `lasm package`; missing or misnamed sources (also a
per-output source of `lasm dev --target node=A.lean,browser=B.lean`); Lean
type, syntax and UTF-8 errors (also in an imported module), cyclic imports,
missing imports, no `main`; broken `lakefile.toml`/`lakefile.lean`, a missing
Lake path dependency, unsupported or garbage `lean-toolchain`; output paths
that are files, not Lasm builds, inside `public/`, or a generated file the
user edited; a browser `index.html` without `</head>` or with its own loader;
an edge entry module the user wrote; a bad `lasm.edge.modules`; read-only
project, output and tool-cache directories, a tool cache that is a file;
packaging a dev build, a link, or a build without a target's npm package;
`lasm dev` with a Lean error in its first build and in a rebuild (it must keep
watching), a browser port already in use, a browser app whose first build
fails (it must exit, not hang); Ctrl+C during a build (then a clean rebuild);
an unreachable download, invalid `LASM_DOWNLOAD_*` and `LASM_ARTIFACT_SOURCE`
settings; Node 22. Each must exit non-zero (Ctrl+C: or by SIGINT; `lasm dev`
after Ctrl+C: 0) within its limit, say what the case names, and pass the
judge. A case fixed after the latest release carries `fixedIn`; against an
older CLI it is reported as known.

**Error inventory** ([`error-inventory.mjs`](../scripts/tooling/error-inventory.mjs)):
"every error a user can trigger" is measured, not assumed. The inventory is
every `new Error(…)` in the 20 modules a command reaches before a program
runs (arguments, commands, sources, outputs, caches, tools, downloads; 148
sites). The candidate's corpus run (`--inventory check`) counts a message as
covered when some case printed its fixed text; each other message needs a
stated reason in [`error-inventory.json`](../scripts/tooling/error-inventory.json)
(an internal invariant, generated code that runs on a platform, macOS only, a
check the CLI makes earlier, …). A new message with neither, or a reason for a
message that is gone or now covered, fails the job. Messages that are not
user errors never print a stack trace either: `reportCliError` prints a stack
only for internal errors (a `TypeError`, a failed assertion), with the bug
report line.

**Metamorphic build tests** ([`metamorphic.mjs`](../scripts/tooling/metamorphic.mjs)),
for node, wasi, workers and browser, release and dev profiles, on a small Lake
project. `lasm build`: two clean builds in different directories, and a build
with a cold tool cache, give the same bytes; edit then build equals a clean
build of the edited project, and reverting gives the original bytes; renaming a
module nothing imports changes no byte; renaming an unused definition changes
only the input fingerprints in JSON metadata (release; dev builds keep function
names, so there the program must behave the same); touching sources, or
building again, links nothing and rewrites no output file. `lasm dev` (node,
workers and the browser; it has no WASI target), one session per profile
(`--release` too), driven as an editor would: its first build equals a clean
build; an edit is rebuilt and equals a clean build of the edit; a touch
rebuilds nothing and rewrites no output file; renaming an unimported module
keeps every byte; a revert saved by renaming a new file over the old one (as
Vim, JetBrains' safe write and many formatters save) is seen and equals the
original clean build; a second edit saved that way is still seen; afterwards
`lasm build` reuses the session's build (node: without linking). Each target is
judged on its own output directory (`dist/` for node and the browser, `wasi/`,
`workers/`; the browser's dev session writes `.lake/lasm/browser-dev`; a node
session's build is copied out with `lasm build --output`). Dev rebuilds plan
initialization from the previous build's plan, so for the dev profile
"incremental equals clean" means the same behaviour, not the same bytes: where
the bytes differ, both outputs run and must print the same (node; WASI under
`node:wasi`; the Worker's own program, host and `edge-start.mjs` on Node; the
browser app in headless Chromium through the differential's browser runner).
Clean dev builds must still be byte-identical.

**Fault injection** ([`faults.mjs`](../scripts/tooling/faults.mjs)), one job
per target (node, wasi, workers, browser): SIGKILL of the process tree at every
build stage and while replacing an existing output; SIGKILL while a cold tool
cache is filled from the npm packages and over HTTPS; HTTPS downloads through
a CONNECT proxy that cuts tunnels after 4 MiB (three times: may recover;
always: must fail clearly) or stalls them, open and silent, as after a dropped
Wi-Fi link (the idle timer must end each one and the retry open a new tunnel:
twice must recover; always: must fail clearly); the tool cache on a 64 MiB and a
700 MiB ext4 loop file system, the project on one filled to 1, 4 and 12 MiB
free; an empty read-only tool cache, a filled one made read-only, a read-only
project build cache; a flipped byte and a removed file in the tool archives,
derived tools, shared objects and the project build cache. With node also:
SIGKILL of `npm install` of the CLI, `npm install` through cut connections and
onto a full 48 MiB disk (then a plain install and a build with it), and SIGKILL
of a `lasm dev` session 0.5, 2 and 4 s into the rebuild of an edit (then
`lasm build --dev` must print the edit and a new session must build). Outcome:
success with the clean build's bytes, or a clear failure followed, once the
fault is gone (after `lasm cache repair` for corruption), by a rerun with the
clean build's bytes. Found: a stalled download never reconnects (#152; it
fails clearly, so the contract holds, but one half-open connection fails the
install).

**CI** ([tooling.yml](../.github/workflows/tooling.yml)): the corpus against the
candidate (with the inventory check) and the published package on every pull
request, push to `main` and nightly; metamorphic and fault injection (one job
per target each) nightly, by hand, and on pull requests that change the
harness.
**What it cannot catch:** errors outside the corpus whose reason is wrong;
nondeterminism that two runs on one machine share (same OS, CPU, locale);
the black-box harnesses on macOS and Windows (Linux runners only; the
unit-level installer controls in `installer-faults.yml` run on all five
platforms); `lasm dev` with several outputs at once.

### Fuzzing at the boundaries

Coverage-guided fuzzers for every input boundary that had none, in
[`test/fuzz/`](../test/fuzz/) (`node test/fuzz/run.mjs list`). The example
apps' own fuzzers (Porter's and Folio's endpoint fuzzers, Tandem's protocol
fuzzer, `examples/*/test/fuzz.mjs`) and the bridge's schedule fuzzer stay
where they are; these cover the libraries and hosts every app shares.

| Target | Boundary | Engine | Oracle (besides no crash and no hang) |
| --- | --- | --- | --- |
| `cli-arguments` | `src/cli-arguments.mjs` and the `init`, `dev`, `package` parsers | JavaScript | a parse names only targets, templates and deploy targets Lasm has (own keys, never `constructor`); every refusal is a plain `Error` with a readable message |
| `serverless-http` | `src/serverless/lasm-lambda.mjs` (API Gateway REST and HTTP API, function URLs, ALB, CloudFront events) and `lasm-server.mjs`'s helpers (`outgoingHeaders`, cookies, `isTextual`, `azureReply`, `webReply`) | JavaScript | every well-formed event is answered; the forwarded target is one http.request accepts and starts with `/`, one Cookie and one plain Host header, query values as the platform gave them, the body round-trips byte for byte, each Set-Cookie once; and the request, the response, the Azure and Netlify replies and the parsed cookies are exactly what the Lean model says (`library/Lasm/Serverless/Proofs/Model.lean`, whose theorems are in [library/PROOFS.md](../library/PROOFS.md); run with `lean --run` by `test/fuzz/support/serverless-model.mjs`, required in CI) |
| `ui-patch` | the Lasm.UI patch decoder (`src/lasm-modules/ui-dom.mjs`) on happy-dom, with hydration | JavaScript | a frame applies, or fails with a `Lasm.UI: …` error or a `DOMException`; never a `TypeError`, a hang, or an attribute from a reference past the name table |
| `lean-fetch-request` | `Lasm.Fetch`'s request parsing as Node's host builds requests (`nodeRequestUrl`, `path`, `segments`, `query`, `queryParams`, `header?`, `percentDecode`, `joinCookies`, `splitCookieCommas`) | libFuzzer, ASan | the path starts with `/` and holds no `?`, `#`, `\`; the Host header never moves the path; the target alone has the same path; resolving again changes nothing; no dot segments; one Cookie header |
| `lean-rpc` | `Lasm.RPC`'s `decodeRequest` and `decodeResponse` for an endpoint with strings, Booleans, arrays, `Nat` and `Option` | libFuzzer, ASan | accepted only when `validate` passes, otherwise refused as invalid (400); request and response round trips; Lean's JSON printer's output parses and prints the same |
| `wasi-cgi` | the WASI C host's CGI request and response (`src/wasi/lasm_fetch_wasi.c`), compiled natively | libFuzzer, ASan, UBSan | strings handed to Lean are valid UTF-8; the method is `REQUEST_METHOD`; the Host or `SERVER_NAME` never moves the path; the response head is one line per header, no CR, LF or NUL inside a line |

**Engines.** The JavaScript targets run in a worker under V8's block coverage
(`node:inspector` `Profiler.takePreciseCoverage`, read after each run): an
input that reaches a new block, or a block a new number of times (libFuzzer's
count buckets), joins the corpus. The mutations are libFuzzer's (bits, bytes,
interesting values, insertions, deletions, copies, splices, dictionary tokens)
plus whole 0x00-separated fields replaced or dropped, since the targets read
their inputs as fields (`test/fuzz/input.mjs`). The main thread mirrors each
input in shared memory and saves it when a run does not finish in 10 s.
Between runs the worker lets the event loop turn, so the timers a run queued
(the patch decoder's deferred sweep of removed nodes) fire as they would in a
page; when they never fired, each unmounted UI stayed reachable from its timer
and the ui-patch worker ran out of memory after about 50,000 runs (issue #160).
Progress lines print the worker's heap. Jazzer.js
was not used: it instruments CommonJS through Babel hooks and does not
instrument ES modules, which all of Lasm's JavaScript is; fast-check is a
property tester without coverage feedback. The Lean targets are
`test/fuzz/native/LasmFuzz.lean` compiled to C by the managed Lean 4.35.0 and
linked with the C of the Lasm modules it imports, Lasm's native C glue and
Lean's runtime, under libFuzzer (`test/fuzz/native/build.mjs`); a Lean panic
fails the run (`lean_set_exit_on_panic`). This is coverage-guided fuzzing of
the compiled Lean code itself, where Plausible would be random property
testing; the Wasm build shares the same C.

**Inputs.** `test/fuzz/corpus/<target>/` holds the seeds and the inputs past
campaigns found interesting; `test/fuzz/regressions/<target>/` holds every
input that ever failed, named after the bug. A campaign writes new corpus
entries to `.work/fuzz/<target>/corpus/` (native targets also a minimized
`merged/`, ready to replace the committed corpus) and failing inputs to
`.work/fuzz/<target>/crashes/`. A failure found becomes a regression input and
a fix, or an issue.

**Running it.**

    node test/fuzz/run.mjs replay                       # every committed input, once (seconds)
    node test/fuzz/run.mjs fuzz --seconds 30 ui-patch   # a campaign; --seed N replays one
    node test/fuzz/native/build.mjs                     # Linux, clang: the native targets
    node test/fuzz/support/serverless-model.mjs         # serverless-http's Lean model (used when prepared)

**CI** ([fuzz.yml](../.github/workflows/fuzz.yml)): every pull request and push
to `main` replays the committed corpus and regressions of the JavaScript
targets, and of the native targets when `library/`, `src/wasi/`, the Lean
provisioning or `test/fuzz/` change (also `test/fuzz-replay.test.mjs` in the
unit suite); nightly (02:23 UTC) a 10-minute campaign per target; weekly
(Saturday 06:41 UTC) a 60-minute campaign per target. A campaign fails on any
failing input and uploads its new corpus entries and failing inputs (artifact
`fuzz-<target>`, 30 days).

**Found so far** (the regressions directory has each input):

- the patch decoder looped forever on a frame that ends inside a varint, and
  threw `TypeError` for attribute ops on a text node: it now fails with
  `Lasm.UI: truncated patch` and `Lasm.UI: node N is not an element`;
- `lasm init --template constructor`, `--deploy __proto__` and `lasm package
  --target constructor` were accepted (inherited keys), and `--target
  constructor`'s hint printed `function Object() { [native code] }`;
- an ALB request with a malformed escape (`?q=%E0`) threw `URIError` in the
  Lambda handler (a 502 for any client): ALB query values are now forwarded
  as the client sent them;
- `Lasm.Fetch` took a URL with `://` in its path (`/go/https://example.com`)
  for an absolute URL, and Node's host built the request URL from any Host
  header (`Host: x/admin#` turned `GET /public` into `/admin`); the WASI CGI
  host did the same with `HTTP_HOST` and `SERVER_NAME`. Only a scheme makes a
  URL absolute now, and a Host that is not a plain `host[:port]` is replaced
  by `localhost` (`Lasm.Fetch.nodeRequestUrl`);
- a 90-byte RPC request (`"priority":3E26191701`) hung the server: Lean's
  JSON parser computes `10 ^ exponent`. `Lasm.RPC.parseJson` refuses
  exponents of more than four digits, and `decodeRequest` and
  `decodeResponse` use it;
- Lean prints a zero with more than ten decimal places (`0e-11`) as `0.e-N`,
  which is not JSON: an upstream bug, tracked in [#135](https://github.com/Millillion/lasm/issues/135) with the example apps that still call `Json.parse` on request bodies, and excused by the
  RPC target's property.
- checked against its Lean model, the function-platform shim (src/serverless/)
  disagreed in five places, each a shim bug: a decoded path or unencoded
  query with a space, a non-ASCII character, `?` or `#` made http.request
  throw (a 502) or moved part of the path into the query (now
  percent-encoded: `requestTarget`); a forged Host (`x/admin#`) reached the
  server, which may build its URL from it (now replaced:
  `outgoingHeaders`); empty Cookie fields were forwarded; a Latin-1 text
  body lost its accented letters (text only when valid UTF-8); and a reply
  field named `__proto__` or `constructor` was dropped or threw a
  `TypeError` (header maps without a prototype).

**Cannot catch:** logic errors that produce well-formed wrong answers (the
differential and equivalence oracles are for that); the Wasm builds'
resource limits (stack depth, memory) differ from the native ones the Lean
targets run with; the Node host's own HTTP parsing is Node's (llhttp), and
the edge, Bun and Deno hosts build `Request.url` with their own URL parsers.

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
  `lasmFullServeSync`, work other threads proxy to the main thread), host
  calls made by work proxied to the callback thread while it waits in one (its
  next-depth slot, linked from the first and served inline too), callbacks
  that wait for a JavaScript promise (the request fails at once), and callbacks
  that wait for a Lean task (`sync_wait`), which the main thread asks to stop
  when every other Lean thread waits too (`stuckWait`), and not when the task
  finishes by itself. Waits
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
runs every configuration (CI: about 1.5 s; with `--large` about 15 s):

| Configuration | Bound | States | Result |
| --- | --- | ---: | --- |
| Synchronous callbacks, no timeouts, no spurious wake-ups | callbacks with 1, 0, 2 host calls | 9,952 | ok: every host call is served by a notification alone |
| … with spurious wake-ups and timeouts | 2 callbacks × 2 host calls; (large) 3, 0, 3, 2, 1, 3 | 17,277; 103,208 | ok |
| … 4 and (large) 10 callbacks | 1 host call each | 18,756; 98,890 | ok |
| Work proxied to the main thread inside callbacks | 1 + 1; (large) 5 callbacks, 8 host calls | 8,796; 54,756 | ok (it runs when the wait's 10 ms timeout expires) |
| A callback waits for a promise, then host calls | 1 + 1 | 11,949 | ok (the wait fails at once) |
| Host calls made by work proxied to the callback thread | 2 callbacks; (large) 5 callbacks mixing awaits, nested calls and proxied work | 209,000; 3,837,965 | ok (served when the wait times out) |
| A generic Lean thread's slot, replies now or in a later task | 3; (large) 30 host calls | 280; 3,196 | ok |
| Poller and completion thread | 5 scripts (callbacks with and without `waitForever`, awaits, async requests, timer races); (large) 4 calls, 2 awaits, 2 async requests | 84–1,588; up to 34,678 | ok |

Each **mutation** reintroduces a bug and must be found, which tests the checker
(and fails CI if it is not found): the 0.3.0 order (read after posting: a
deadlock without timeouts), 0.3.0 as released (also no serve on timeout: a fair
non-progress cycle), the wait before this change (proxied work never run: a
non-progress cycle), host calls without the doorbell (deadlock), a host that
forgets `slot.sequence` (a request served twice), `claim_poller` without
compare-and-swap (two pollers), completions dropped before the first poll and
no poller requested for queued events (deadlocks), a callback that waits for a
promise only the event loop settles, and inline serving that ignores the
next-depth slot (both fair non-progress cycles; both were the shipped code
before 2026-11-03).

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
(`slot sync` for the synchronous-callback thread, with its next-depth slot as
`seq1`/`ready1`, `slot generic` for every other Lean thread and nesting depth; roles from the diagnostics globals
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
runtime, Emscripten's internals beyond the proxied call, nesting deeper than
the callback thread's second slot; which Lean threads are listed as waiting
inside a synchronous callback, which the model takes as given and
test/fixtures/js-sync-waits checks end to end); behaviour
beyond the bounds;
memory-model effects (the model is sequentially consistent, as JavaScript's
`Atomics` are); the Lean thread's Wasm-side steps are checked only through
their effects in a trace. The model assumes each slot is used by one thread at a
time and that the event loop eventually runs every queued task.

### Deterministic simulation of the example apps

The apps' distributed behaviour (several browsers and a sync server, clients
racing over one ledger, relying parties and an identity provider) is tested by
running their own compiled Lean in a simulated world: the clock, the network,
the storage and the users are simulated, every decision is drawn from one
seed, and so a failing run replays exactly from its seed alone, as in
FoundationDB's simulation and TigerBeetle's VOPR.

**The harness** ([`scripts/sim/index.mjs`](../scripts/sim/index.mjs), no
dependencies; its own tests are [`test/sim.test.mjs`](../test/sim.test.mjs)):

- `Rng`: a seeded PRNG (xoshiro128\*\*, seeded by splitmix32) with independent
  named streams (`fork`), so that one component drawing more numbers does not
  change what the others draw;
- `Scheduler`: simulated time, a priority queue of events by (time, order);
  nothing in a simulation reads the real clock, and runs take seconds for
  minutes of simulated time;
- `Clock`: a node's clock, with skew, drift and jumps;
- `Network`: messages between named nodes with latency, latency spikes,
  reordering (or FIFO per channel, for a socket), drops, duplication and
  partitions (pairwise or a node isolated; a message in flight when a link is
  cut is lost); `HttpSim` puts HTTP on it: a lost request or answer is a network
  error after a timeout, a server that crashed resets the connections it held;
- `Kv` (localStorage, Workers KV): write failures, and a crash that loses
  writes not yet flushed;
- `SqlStore`: SQLite in memory (`node:sqlite`) behind the `Sql` record the
  apps' servers already use (`all`, `run`, `batch`), as SQLite or as D1: failed
  reads, failed commits, commits whose outcome is unknown (committed, then an
  error), outages, and crash-restarts that keep exactly what was committed;
- `faultProfile`: each seed draws which faults are on and how often (swarm
  testing), so the seeds cover calm runs, single kinds of fault and storms;
  `--faults none|normal|heavy` scales them;
- `Trace`: the last events of a run, shown with a failure (and the events
  before its first violation), and a hash of every event, which
  `--check-determinism` compares across two runs of each seed;
- `SeedLoop`: one seed (`--seed N`), a fixed range (`--seeds N`, `--first N`),
  or random seeds for a time budget (`--minutes M`); each failing seed is
  printed with a one-line repro command, and as a GitHub error annotation.

**How an app uses it.** Each app has a small Lean driver, `Sim.lean`, built
for Node like the app (`npm run build:sim`), that runs the app's own code:
the server's HTTP handler or its request pipeline on the simulated `Sql`, and
for Tandem the browser editor's `update` too (a `Lasm.UI` command is data, so
the driver performs each one in the world: timers, HTTP requests, storage,
random bytes). The driver asks the world (`test/dst/world.mjs`, loaded with
Lasm.JS's `require`) for the next event, runs the code it reaches, and hands
back what that code asked for. Everything else (users, relying parties,
network, database faults, crashes) is JavaScript in the world, which also
checks the invariants. `node test/dst.mjs` starts it.

| App | What is simulated | Invariants |
| --- | --- | --- |
| Tandem | 2 to 5 tabs running `Tandem.Ui.update` (replica, syncs, retries, WebSocket and long-poll, the state saved in `localStorage`), users typing, pasting and deleting; the server's `handler`; WebSockets, or none (as on Workers, so tabs long-poll); lost requests and answers, duplicated requests, broken sockets, tabs cut off and back, page reloads, server crashes (also after a commit, before the answer), database faults | an operation that leaves a tab's `pending` is in the server's log (`Spec.ack_stored`, for the whole browser state machine); the log only grows, each operation once (`acked_never_lost`, `log_no_duplicates`); everything appended is pushed, by its request or a later one; an edit yields the typed text (`edit_yields_text`); the CRDT laws on the real log in a random order with duplicates, one at a time and in bulk (`converge`, `ops_commute`, `ops_idempotent`, `apply_many`, `no_duplicates`); after the heal, every tab is online, has nothing pending, and holds the server's document, cursor and text |
| Ledger | a funding account and 4 to 10 customers; writers sending batches (single-phase, pending, posts and voids, linked chains, transfers that must fail, earlier transfers again) and resending a batch with the same ids when its answer is lost; readers; requests served one at a time (the writers' permit) or racing (all read before any commits, each at its own instance's skewed clock, then commit in a random order with the version check); crashes, database faults, the clock jumping | every read and the database after every commit: debits = credits, posted and pending, no customer below zero, money neither created nor destroyed; the auditor (`Audit.verify`) at checkpoints; an id answered `created` or `exists` is stored as sent, one never answered so is not, and no id is `created` twice; linked chains all or nothing; every batch answered after the heal |
| Porter | 1 to 4 agents (a browser with cookies and a relying party, one of each kind of client) signing in with the code flow and PKCE, calling userinfo, refreshing, signing in again with the session, logging out, and attacking (a code redeemed twice, a rotated refresh token reused); racing requests; instances' clocks skewed and the server's clock jumping by seconds to hours, past every lifetime; crashes and database faults | a code yields tokens once, before it expires, and redeeming it again revokes what it issued; a refresh token rotates once, and reusing a rotated one revokes its family; an access token works exactly while its lifetime lasts on the clock of the instance answering and its family is not revoked; every ID token's claims (iss, aud, sub, nonce, iat, exp) and its signature against `/jwks`; no password asked during a live session; after the heal, every agent signs in |

**CI.** Each app's workflow (`tandem.yml`, `ledger.yml`, `porter.yml`, on
changes to the app or to `scripts/sim`) runs 30 fixed seeds, each twice to
check that it replays exactly (`--seeds 30 --check-determinism`), then 10
fixed seeds with heavy faults.
[`dst-nightly.yml`](../.github/workflows/dst-nightly.yml) runs random seeds
for 20 minutes per app, then 10 minutes with heavy faults. A failure prints:

```
  seed 4: FAILED (4 tabs, ws, 2308 ops, …)
    - tab2 stopped treating 7 operation(s) as pending that the server does not have, …
  the events before the first violation: …
  repro: cd examples/tandem && npm run build:sim && node test/dst.mjs --seed 4
```

**What it found.** In Tandem, three bugs, now fixed: the editor sent a second
sync while one was in flight (after a WebSocket push that did not continue its
log), and the first reply then dropped from `pending` operations the second
carried, so an edit was lost if that sync failed; a failed catch-up sync was
never retried, leaving the editor "Offline" with nothing pending and behind
the log; and a commit that succeeded and then reported an error appended
operations that were never pushed, so tabs that were not typing never heard of
them (until someone else typed). In Porter, one bug, now fixed (#138): a token
request whose commit succeeded and then reported an error was run again, found
its own code used (or its refresh token rotated) and revoked the family it
had just issued; each commit now inserts a commit receipt, which a failed
commit looks up, and the simulation fails if a fresh code or a live refresh
token is refused after an ambiguous commit (except when the receipt itself
could not be read, the documented case, in which nothing is revoked). In Ledger,
nothing: every seed kept every invariant, racing commits at skewed clocks
included. See [Bugs found](#bugs-found).

**What it cannot catch.** Concurrency inside one Lean program (the world runs
one event at a time, so interleavings come only from the world's choices:
racing requests read and commit in a chosen order, but no two run in
parallel); the platforms' real network stacks, browsers and databases (their
behaviour is modelled; the e2e and platform tests cover the real ones); the
DOM (Tandem's text area is the model's text); timing-dependent code that reads
the real clock (`Std.Async.sleep` in Tandem's commit retry, Tandem's long-poll
loop, which the world replaces by answering a poll when the log grows or after
20 simulated seconds); and anything the invariants do not state.

### Coverage and mutation testing

`unit.yml` runs the unit suite with `NODE_V8_COVERAGE` set, so V8 records the
coverage of every Node process the tests start (the CLI, build workers, hosts),
and [`scripts/coverage/report.mjs`](../scripts/coverage/report.mjs) turns it into
a summary with c8, counting files that never loaded as 0 %.
The [baseline](#coverage-baseline) is published below. Coverage says which lines
ran, not that their results were checked; [mutation testing](#mutation-testing)
says whether the tests would notice a change.

## CI tiers

[CI.md](CI.md) is the reference: the four tiers, the inventory of every
workflow with its triggers, runners, time and tier, what moved out of the PR
tier and why that is safe, and the PR-tier measurements. In short:

| Tier | When | What this page's layers add there |
| --- | --- | --- |
| PR | every pull request (path-filtered), then the push to `main` unfiltered | the unit suite; boundary fuzzing: the committed corpus and regressions replayed (seconds; native targets when their sources change); host bridge: the model (about 1 s), 20 schedule-fuzzed runs per stress program on Linux and their traces' conformance; differential: regressions + three seeded program pairs (525 cases) and the two fixed-seed [feature programs](#differential-fuzzing) (160 cases) on node, wasi, node:wasi, edge, plus the interpreter, `node-O0` and the edge `.wasm` on Node, Bun and SpiderMonkey; target equivalence of the fetch template and `examples/fetch` on node, deno, bun, wasi-http, workers; recursion depth on Linux and Windows. macOS only when macOS-specific code changes. Skipped for a change to docs or the flagship apps only (they have their own workflows) |
| Nightly | 01:07 to 09:17 UTC | the release suites (`ci-nightly.yml`: unit, browser, edge and Bun/Deno, WASI, UI, fullstack, dev loop, Lasm.JS stress); boundary fuzzing: 10 minutes per target (`fuzz.yml`); host bridge: 200 schedule-fuzzed runs per stress program on four platforms; differential: 60-minute campaigns for the release and the dev profile, every oracle, a feature program per seed, and the macOS jobs (recursion depth, the C tier on three macOS runners); tooling metamorphic and fault runs; mutation on every module; the example apps' DST with random seeds and campaigns; the nightly upstream suite (`nightly.yml`) |
| Weekly | Saturday 06:41 and 12:07 UTC | differential: 100-minute campaigns in both profiles (a feature program per seed), and the Lasm.JS soak (200 runs per program on four platforms) (`ci-weekly.yml`); boundary fuzzing: 60 minutes per target (`fuzz.yml`) |
| Release | a version bump (`release-checks`) | every launch workflow, Lasm.JS stress, unit suite, npm rehearsal (unchanged) |

No scheduled run does anything on a Sunday in US Eastern time: cron times stay
off Sunday with a 12-hour margin, and every scheduled workflow's jobs wait on
the Sunday guard (`sunday-guard.yml`), which skips them when a late run starts
on Sunday in New York ([CI.md](CI.md#no-runs-on-sunday);
`test/no-sunday-schedules.test.mjs` requires both). The campaigns that fired
before 04:00 UTC run Monday to Friday evenings, New York time; the rest Monday
to Saturday.

## Evidence levels

Each platform in the README's table has an evidence level. The levels are those
of [TESTING_STRATEGY.md](proposals/TESTING_STRATEGY.md#5-rules-of-the-process),
and CI results decide them:

| Level | Meaning |
| --- | --- |
| L0 | Builds |
| L1 | Smoke tests pass |
| L2 | Differential tests and conformance suites pass |
| L3 | A flagship app passes its outside oracle, plus fuzzing and simulation |

[`scripts/evidence/platforms.json`](../scripts/evidence/platforms.json) names
the CI jobs that back each level of each platform, as a workflow file and a
job-name pattern. [`scripts/evidence/levels.mjs`](../scripts/evidence/levels.mjs)
reads the GitHub API. For each requirement it takes the newest completed run
of that workflow on `main` (or on a `release-*` branch: release PRs merge into
`main` and are where `release-checks.yml` runs its full set) that has a
non-skipped matching job. The requirement holds when every such job succeeded
and the run is at most 30 days old. A platform's level is the highest one
whose requirements, and all lower levels', hold. `null` means no CI job gives
that kind of evidence for the platform yet.
- A platform counts the differential results of the build it runs (node, edge
  or wasi, or its own target: `bun` and the `browser-*` targets, see
  [Bun and browser targets](#bun-and-browser-targets)), since differential
  tests compare the compiled program. Browsers have no conformance suite, so
  their L2 is the differential job alone.
- Conformance is the platform's own run of an outside suite: the official
  RealWorld API suite, through Conduit.

The script rewrites only the region of README.md between the
`evidence-levels` markers: the table's How well tested column and the legend under it.
Every other cell stays as written. [`evidence-levels.yml`](../.github/workflows/evidence-levels.yml)
runs it Monday to Saturday (08:23 UTC). When a level moved, it opens a pull request
with that change, as `image-pins.yml` does for image digests. Its artifact
`evidence-levels.json` lists every requirement: the run behind it, and whether
it failed, was missing or was stale.

At the first run (2026-11-03) every server platform was at L2 and the browser
at L1: the browser has no differential tests yet (a ROADMAP item). Node was one
requirement short of L3: the Porter nightly fuzzer had found a failing request.
No platform but Node has fuzzing or simulation in CI yet, so no other platform
can reach L3.

## The test-evidence page

[`content/learn/test-evidence.md`](../content/learn/test-evidence.md) is the
public summary of this page's layers, published on the Millillion website at
https://millillion.org/learn/lasm/test-evidence/. [`scripts/evidence/page.mjs`](../scripts/evidence/page.mjs)
generates it, and [`evidence-page.yml`](../.github/workflows/evidence-page.yml)
runs it at 10:41 UTC, Monday to Saturday (no runs on a Sunday, US Eastern time), after the nightly tier, and commits the result
to `main`. Each section keeps two kinds of fact apart:

- **Measured by CI**, read from the GitHub API when the page is generated, with
  the date and a link to each run: the platform levels (computed as
  [Evidence levels](#evidence-levels) computes them), the latest run of each CI
  tier's main workflows, and the latest scheduled mutation, fuzzing, DST and
  differential runs. Job logs supply the numbers: each module's score and
  mutants, each fuzz target's runs and seed, each app's seeds and failing seeds,
  each campaign's programs, cases and divergences. The equivalence jobs and
  Conduit's RealWorld jobs come from the latest merge to `main`.
- **Recorded in the repository** and checked by CI on every change: the
  mutation baseline and thresholds, the proposition and theorem counts that
  each PROOFS.md states (its proof check fails when the page is stale), the
  fuzz targets and DST apps (the workflows' matrices), the equivalence targets
  and the latest benchmark table ([BENCHMARKS.md](BENCHMARKS.md)).

The same facts are in [`docs/evidence/test-evidence.json`](evidence/test-evidence.json).
A workflow with no scheduled run yet shows as "no run yet". `node
scripts/evidence/page.mjs --offline` renders the page without the API.

## Flaky tests

A flaky test is one that both passes and fails on the same code. It costs
everyone time (re-runs, ignored red builds) and teaches people to distrust
failures, so the policy is strict:

1. **Quarantine at once.** When a test is seen to be flaky (a nightly report
   entry, a re-run that passed, a local repeat), open an issue and add an entry
   to [`test/quarantine.json`](../test/quarantine.json) in the same change:
   ```json
   { "file": "test/x.test.mjs", "name": "the test's own name", "issue": "https://github.com/Millillion/lasm/issues/N",
     "since": "YYYY-MM-DD", "reason": "what fails, how often" }
   ```
   The unit suite (`scripts/ci/unit-tests.mjs`, `unit.yml`) and `npm test`
   (through [`scripts/test/node-test.mjs`](../scripts/test/node-test.mjs), a
   `node --test` wrapper usable for any test file) skip a quarantined test with
   `--test-skip-pattern` (the name anchored and escaped) and print a notice
   (`::notice` on GitHub Actions) for each one. Other suites run through
   `node scripts/test/node-test.mjs …` in place of `node --test …` to get the
   same.
2. **Fix or delete within a week.** An entry older than 7 days fails the unit
   suite (and `node-test.mjs`) with an error naming the test and its issue. The
   way out is to fix the cause and remove the entry, or to delete the test. The
   deadline is not extended: a test that can't be made deterministic in a week
   is replaced by one that can.
3. **No retries.** The runners never retry a test inside a job (`node --test`
   has no retries; every Playwright config sets `retries: 0`), so a flake shows
   up as a failure, never as a silent second try.

**The nightly report** ([`flaky.yml`](../.github/workflows/flaky.yml), 07:53
UTC, [`scripts/ci/flaky-report.mjs`](../scripts/ci/flaky-report.mjs)) reads
every workflow run of the last 24 hours through the GitHub API and lists:
- jobs that **passed only on retry**: failed in one attempt and passed in a
  re-run, with the tests that failed first (from that attempt's log);
- re-run workflow runs;
- timed-out jobs, and cancelled jobs that a newer run did not supersede (the
  usual `cancel-in-progress` cancellations are only counted);
- the quarantine list with each entry's age, flagging those past the week.

It uploads `flaky-report.json` and `.md` as an artifact and replaces the body
of the one open issue labelled `flaky` (opening it, and the label, if needed).
Entries in the report are triaged into quarantine entries or closed as
infrastructure (a runner lost, a registry outage).

## Test-quality audit

An HN commenter mocked "tests that assert certain strings exist in the
codebase". An audit of `test/`, `integration/` and the CI check scripts on
2026-10-31 found 13 tests whose assertions read repository files as text, and 29 test files that CI never runs. All
`integration/` harnesses and `scripts/**/check*.mjs` check things they build or
run, except the static mode of `check-tutorials.mjs` (below). Verdicts:

| Test | What it read | Verdict |
| --- | --- | --- |
| `application-output.test.mjs`: host support files exist with their dependencies | regex import scan of `src/` | **Replaced**: the shipped host files are copied alone into an empty directory and imported by Node's loader in a fresh process (`test/helpers/isolated-import.mjs`); a missing dependency fails to resolve; the test also checks that removing one is noticed |
| `wasmtime-artifact.test.mjs`: standalone deployment carries every local dependency | regex import scan | **Replaced** the same way (a `new URL('./x')` asset that is not imported is still not covered) |
| `candidate-readme.test.mjs`: a packed README installs its own archive | the real README's headings (failed after the README was reworded, PR #22) | **Replaced**: the transformation is tested on a fixed README; the real README is only required to pack (one install line, no unpinned links) |
| `application-output.test.mjs`: retained callable and frozen outputs include transitive dependencies | file lists regex-parsed out of `src/build.mjs`, `src/main.mjs`, two scripts | **Retired** (2026-11-03): all four lists belong to the retired Lean 4.32 library pipeline (`src/build.mjs`, `src/main.mjs`, `scripts/full-lean/freeze-build.mjs`, `derive-host-files.mjs`), which the published CLI refuses and CI cannot run; the shipped list, `applicationHostFiles`, is import-tested above |
| `browser.test.mjs`: builtin modules use web-standard JavaScript only | `node:`/`process`/`Buffer` in `src/lasm-modules/*.mjs` | **Keep as a lint**: a grep finds uses inside functions that loading never runs; the behaviour is covered by `workers.yml` (workerd), Deno and the browser |
| `release.test.mjs`: release.yml is the trusted publisher | regexes over four workflow files | **Replaced** (2026-11-03): the release-checks verdict and manifest moved from inline `node -e` into `scripts/release/checks-manifest.mjs`, tested on job results (every gate failing, cancelled or skipped, a reused candidate, an overlay) and through `manifestProblems`; the workflow check is now a cross-reference (the job's `needs`, its env and the workflow's jobs equal the module's `checksJobs`; every called workflow declares `workflow_call`). **Kept as a lint**: OIDC, no stored tokens, serialized publishing, and npm-dist's `LASM_PUBLISHED_REQUIRE`, since only a real release runs them |
| `nightly.test.mjs`: nightly.yml is scheduled, serialized, never a release dependency | regexes over workflows | **Kept as a lint, widened** (2026-11-03): triggers and concurrency are configuration only GitHub runs (the deferral logic is tested through `nextStep`); "never a release dependency" now covers every workflow a release calls, transitively, ignoring comments |
| `notices.test.mjs`: the edge runtime archive carries the MIT text and its change list | the packager's source | **Replaced** (2026-11-03): `scripts/edge/package-edge-runtime.mjs` runs on a stand-in edge runtime and its `THIRD_PARTY_NOTICES.txt` is read back (the Lasm MIT text, the shared patches plus `edge` and never `node-threads`, the Node notices appended); a patch without notice text is refused |
| `notices.test.mjs` (3 lines of the Apache 4(b) test; the rest is behavioural) | patch names regex-parsed from `build-application-runtime.mjs` | **Keep as a cross-reference lint** until the patch table moves into an importable module (the build script runs when imported) |
| `notices.test.mjs`: Lasm's licence copy, Wasmtime licence copies, MIT everywhere, MIT-0 texts | file equality and headers; the MIT-0 test also checks eight phrases of the `LICENSE-MIT-0` grant | **Keep**: consistency guards; licence text is what must be shipped, and a change to the grant's scope should be deliberate |
| 29 unit files (`compiler`, `conformance`, `io`, `runtime`, the `node-*` host files …, listed in `needsTools` in `scripts/ci/unit-tests.mjs`) | not static, but they build with the retired Lean 4.32 library pipeline (system `lean` 4.32 and Zig), so CI never ran them (their failures were reported, not fatal) | **Ported or retired** (2026-11-03). **Ported**: the ordinary-Lean fixtures of 24 files (conformance, finalizers, console buffering, cwd, permissions, environment and path bytes, getLine, platform, process cwd/exit/NUL/lifetime/spawn, realPath, system directories, temporary files, truncate, runtime metadata, standard IO and the forms of `main`, TCP, wall clock) run as 31 cases of `integration/host-fixtures.mjs`, a `differential.yml` job on pull requests and main: built with the installed candidate for Node and compared with upstream Lean 4.35.0's `lean --run` (it found the unsearchable-cwd worker bug fixed with it). **Kept in the unit suite**, without their Lean parts: the Node-host tests in `node-process`, `node-temporary-files`, `node-platform`, `node-environment-bytes` and `platform`. **Retired**: `compiler`, `io`, `lake` and `runtime` test the `lasm.json` library pipeline (`src/build.mjs`), which the published CLI refuses; the earlier runtime's platform emulation, its embedded `index.mjs` API and its wall-clock fault hook; `expr-conformance` became a check that the build is refused with the runtime-kernel diagnostic; `needsTools` is empty |
| `browser.test.mjs`: every `lasm:web`/`lasm:app` binding names an export | `@[js …]` attributes in `library/Lasm/Web` cross-checked against real exports | **Keep**: a cheap cross-reference lint; a full behavioural check would link a program using every binding |
| `scripts/content/check-tutorials.mjs --static` (found 2026-11-03) | tutorial pages against their `steps.json` and project files | **Keep as a doc lint**: the page must show what the tutorial runs; the non-static mode runs those steps against a packed CLI |

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
contributed nothing (they are now ported or retired). `unit.yml` (a release gate) fails when the total line
coverage falls more than one point below this baseline; raise the baseline file
when coverage improves.

## Mutation testing

Stryker 10.0.0 changes one thing in the code at a time (a `<` becomes `<=`, a
call is removed, a string emptied, …) and runs the tests against each such
*mutant*. A mutant the tests notice is *killed*; one they do not notice
*survives*. The **score** is killed (and timed-out) mutants over all mutants
that ran, including those no test executes. Coverage says a line ran; the
score says a test would notice if it were wrong.

**How it runs** ([`scripts/mutation/run.mjs`](../scripts/mutation/run.mjs)).
Each module of [`scripts/mutation/modules.json`](../scripts/mutation/modules.json)
is mutated on its own, and only that module's `node:test` files run, through
Stryker's tap runner: one process per test file, and per mutant only the files
that executed it. None of these tests needs the managed Lean or the native
helpers, so a fresh checkout after `npm ci` runs them. Each test process gets
a capped heap and a watchdog thread ([`watchdog.mjs`](../scripts/mutation/watchdog.mjs))
that ends it above 1 GiB or once its runner is gone: a mutant that makes a loop
endless otherwise left processes spinning until the machine ran out of memory.

```sh
node scripts/mutation/run.mjs ui-dom                 # one module (all: no name)
node scripts/mutation/run.mjs --check docs/evidence/mutation-baseline.json
node scripts/mutation/run.mjs ui-dom --update docs/evidence/mutation-baseline.json   # record a higher score
# reports: .work/mutation/<module>/report.html, survivors.json (file, line, mutator, replacement)
```

**CI** (`mutation.yml`): every module nightly and on demand, one job each; on a
pull request, only the modules whose sources or tests changed. A module whose
score is below its **threshold** in
[evidence/mutation-baseline.json](evidence/mutation-baseline.json) fails the
job. The threshold is a ratchet: the module's recorded score rounded down to a
whole percent, never below 80 % and never lowered. When tests improve, record
the new score with `--update` (CI's run is the measurement), which raises the
threshold with it; `--check` names a module whose score has passed its next
whole percent.

### Scores

Measured 2026-11-03 (mutation.yml run 41749603692, Node 26, Linux x64). *Initial*: with the tests that existed before
mutation testing; *now*: with the tests written to kill survivors (CI's
measurement on Node 26 is the recorded floor).

| Module | Files | Initial | Now | Threshold |
| --- | --- | ---: | ---: | ---: |
| `host-bridge` | `node-js.mjs` | 56.5 % | **96 %** | 96 % |
| `ui-dom` | `lasm-modules/ui-dom.mjs` | 55.1 % | **92.8 %** | 92 % |
| `build-service` | `dev-build-service.mjs`, `application-build-client.mjs`, `application-files.mjs`, `cache-lifecycle.mjs` | 52.4 % | **94.3 %** | 94 % |
| `link-driver` | `link-driver/link.mjs`, `link-driver/glue.mjs`, `link-driver/wasm.mjs`, `link-driver/metadata.mjs`, `link-driver/settings.mjs`, `link-driver/compile.mjs` | 53.9 % | **93 %** | 93 % |
| `target-link` | `application-link.mjs`, `edge/edge-link.mjs`, `wasi/wasi-link.mjs` | 5.9 % | **86.8 %** | 86 % |
| `edge-glue` | `edge/edge-host.mjs`, `edge/edge-js.mjs`, `edge/edge-runtime.mjs`, `edge/edge-start.mjs` | 15.2 % | **97.3 %** | 97 % |
| `notices` | `notices.mjs` | 62.5 % | **91.5 %** | 91 % |

Every module is above 80 %; each threshold is its score rounded down. The link driver and the target links
are tested with stand-in toolchains: `test/link-driver-pipeline.test.mjs`
drives `linkWithNode` through every recipe step with a stand-in `execute`, and
`test/application-link-plan.test.mjs`, `test/application-link-node.test.mjs`,
`test/edge-link-plan.test.mjs` and `test/wasi-link-plan.test.mjs` run
`linkApplication`, `linkEdgeProgram` and `linkWasiProgram` against stand-in
compilers, `llvm-nm`, linkers and Binaryen (`test/fixtures/link-stand-ins/`: a
tiny C-to-relocatable-Wasm compiler, ar archives and a garbage-collecting linker
with `--wrap`, `-Map` and `--why-extract`), run in-process so that a module's
run takes minutes. The stand-ins need a POSIX shell, so those tests are skipped
on Windows; the pure-function tests run everywhere.

Mutants whose test file had to be stopped (more than 1 GiB, or alive after its
runner) are *runtime errors*: Stryker leaves them out of the score
(16 in `ui-dom`).

### Survivors that cannot be killed (equivalent mutants)

A mutant is *equivalent* when no input can tell it from the original. These
stay, with the reason; they are not chased with tests that look at the code.

| Module | Mutant | Why it is equivalent |
| --- | --- | --- |
| ui-dom | `str()`'s ASCII fast path: `n < 24` → `true`/`false`/`<=`/`>=`, the block emptied, `c > 127` → `true`/`>=` | The fast path and `TextDecoder` return the same string; only speed differs |
| ui-dom, host bridge, edge glue | `new Array(n)` → `new Array()` (event fields, paths, decoded arrays) | Every slot is assigned before use; preallocation only |
| ui-dom | `if (n.firstChild) forgetLater(n)` → always | Forgetting a leaf again deletes an id already deleted |
| ui-dom | `listening.has(type)` → `false`, `listening.add` removed | `addEventListener` ignores a second identical listener |
| ui-dom | `n !== root`, `!chain.length` in `onEvent` | The listener is on the root, so every target is inside it; an empty chain reaches no handler either way |
| ui-dom | `{ stop: () => {} }` → `{}` | An unknown subscription throws before the object is stored |
| host bridge, edge | `'data'` → `''` as a conversion mode | Only `'reference'` is tested for; any other string is data |
| host bridge | `Buffer.write(s, offset, 'utf8')` → `''` | Node's default encoding is UTF-8 |
| host bridge | the doorbell and slot indices of the first reads and of the wait (`channel / 4 + 1` → `- 1`, `slot / 4` → `* 4` before posting) | The wait returns at once on a word that differs, so the loop spins instead of sleeping, and a stale sequence only causes one extra serve (the host serves each request once); only CPU use differs |
| host bridge | `memory.buffer !== buffer` → `true`, `reserve`'s `<=` → `<` | The views are rebuilt every turn; the buffer grows one write early |
| host bridge | `error?.code` → `error.code` and the `ERR_MODULE_NOT_FOUND` case for `lasm:` modules; `'reference'` → `''` for a Lean function | `require` of an existing builtin module never fails; a function is a reference in either mode |
| build service | `replaceAll('\\', '/')` → `replaceAll('\\', '')` in the inventory | Paths contain no backslash on Linux and macOS (the Windows jobs of `unit.yml` cover it) |
| build service | the staging and previous-output name prefixes (`.lasm-`, `.previous-`) | Any unique sibling name works |
| notices | the descriptions in `leanRuntimeChanges` | Text, not logic: a change of wording is not a defect, and a test that repeats each sentence would only read the source |
| notices | `withEdgeChanges`' `start < 0` and `targetNotices`' `at < 0` → `<= 0` | Both texts start with the Node header, so neither marker is ever at offset 0 |
| notices | the `^` of the patch-line pattern; `?? []` → `['Stryker was here']` for the libraries and the exclusions | Every line read starts with `  - `; the made-up name matches no library and no project directory |
| notices | `isFile`'s `return false` → nothing, `'utf8'` → `''` before a regular expression or a template | `undefined` is as false; a Buffer converts to the same text |
| notices | `.sort()` of a package's licence files removed; `customSections`' `at < bytes.length` → `<=` | libuv returns directory entries sorted on Linux and macOS (the Windows unit job runs the test too); a read at the end finds no section |
| build service | `if (moved) rm(previous, …)` → always, `force: true` → `false` there | `rm` with `force` of a path that does not exist does nothing; when it exists, force does not matter |
| link driver | the memo keys of `WasmModule` (`'sections'`, `'types'`, …) and `metadata.mjs`' `'passiveSegmentOffsets'` → `''` | A cache key only has to differ from the others, and one emptied key still does |
| link driver | `wasm.mjs`: `bytes.length < 8` → `false`, `section.type !== CUSTOM` → `false`, the `target_features` name check | A short buffer fails the header comparison with the same error; a non-custom section has no name and reaches the same error; the section is found by that name |
| link driver | `glue.mjs`: `close < 0` → `true`/`<= 0`, `body.length > 1` → `>= 1`/`true`, `'__em_lib_deps'` → `''` | `parenthesesMatch` is only called with `close = -1`; a one-character body cannot open and close with different brackets; the prefix test matches the name anyway |
| link driver | `compile.mjs`' `?? ''` fallbacks → another string; the type preloads in `metadata.mjs` removed | The fallback fails the same validation; `extractMetadata` has already read the types |
| link driver | `program === 'node'` in `linkWithNode`'s `run` | `scriptPrefix()` is empty under Node; it differs only under Deno |
| link driver (not equivalent) | the JS-step and JS-symbol caches inside `linkWithNode`, the Windows temp-directory paths | They run only with the real tools (`execute === execFileSync`) or on Windows; `jsStepCache` itself is tested directly |
| target links | cache-key inputs whose form does not change equality (`probeKey` labels and separators, `'hex'` digests, the link-driver source identity, store file suffixes) | The keys change only when Lasm's own sources change, which no test can do |
| target links | `'utf8'` → `''` before `JSON.parse` or a regular expression; `timeout`, `windowsHide`, `maxBuffer` and stdio entries of tools with small output; `'inherit'` stdout of tools that write nothing there | A Buffer parses and matches the same; no observable effect on POSIX with small outputs |
| target links | performance-only branches (serial or parallel compiles, concurrent probes, shared-store bookkeeping), the 64 MiB map bound, `force: true` on files that exist, the 512 and 16 entry bounds of in-memory caches | Same result, different speed or memory |
| target links | conditions that hold whenever reached (`linkDriver === 'node'` under the dev profile, the seeded "delivered" checks, `imports` always readable, requirements of body probes never read, `'@'` argument forms) and guards inside `try`/`catch` | The other branch cannot be reached with valid options, or the catch takes it |
| target links | anchors on names Lasm itself produces (`lib/lib*.a`, `initializers-N.o`, `*.c`); `relabelPreJs`' `$` | Those names always have that form; `.` never matches a newline |
| target links (not equivalent) | full (not link-only) Node-driver builds, the edge dev fast link's acceptance, shared globals left after eight planning rounds, the WASI Windows response file on POSIX | They need Emscripten's complete glue pipeline, eight real planning rounds, or Windows (the platform workflows run them) |
| edge glue | `encodeError`'s `err?.` → `err.`; `fileError`'s `{ errno }` → `{}`; `IO.Process.exit`'s `{ exit: n }` → `{}` | Every error that reaches it is an `Error`; the errno falls back to the same table; nothing reads `exit` after `request` encodes the error |
| edge glue | timers: `t.promise && !t.done` → `true`/`\|\|`, `'finished'` → `''`, `delay > 2_147_483_647n` → `>=` | Resolving a settled or dropped promise does nothing; the phase is only compared with `'running'` and `'initial'`; the same delay |
| edge glue | the random-bytes loops' `i < n` → `<=`; op 94's check flag read big-endian; its rejection handler; `result?.then`; the sort of `operationCounts` | An empty last chunk, a write past the end is ignored; the flag is only compared with zero; `request` never returns a rejecting promise; `dispatch` always returns a value; `Object.fromEntries` orders integer keys anyway |
| edge glue | `Writer.reserve`'s `<=` → `<`; `error?.leanUserError` when encoding a settled value; `'reference'` → `''` for `globalThis` and for Lean functions | The buffer grows one write early; encoding only throws `Error`s; Node's global object is not a plain object, and a function is a reference in either mode |
| edge glue | `'utf8'` → `''` before `JSON.parse`; `startLean`'s `if (disposed) return` → never | A Buffer parses the same; a second disposal finds no cleanups left |

Delivery's failure paths in `src/application-files.mjs` (a failing copy,
`rename` or `rm`, an output that cannot be inspected) are tested by fault
injection into `node:fs/promises` (`test/application-files-faults.test.mjs`).

## Bugs found

| Found by | Bug | Status |
| --- | --- | --- |
| Differential testing, seed 1 (`wasi-node`) | **WASI:** libc's environment lost every variable after the third: `__wasi_environ_get` in `src/wasi/lasm_wasi_libc.c` widened the 32-bit WASI pointers in place with typed loads and stores that alias, which clang `-O2` may reorder. The Lean runtime's `LEAN_BACKTRACE` and `LEAN_ABORT_ON_PANIC` (and any libc `getenv`) were ignored unless among the first three variables; `IO.getEnv` was unaffected | Fixed in #25 (char-typed copies); regression `r_wasi_env_backtrace` |
| Differential testing, regression replay (`deno`) | **Edge profile:** the C runtime's `getenv` sees none of the host's variables, so `LEAN_BACKTRACE=0` and `LEAN_ABORT_ON_PANIC` have no effect on the edge targets, Bun, Deno and the browser | Fixed ([#26](https://github.com/Millillion/lasm/issues/26)): the embedder's string variables are copied into Emscripten's `ENV` before libc reads it (`src/edge/edge-library.js`, `src/edge/edge-start.mjs`); regression `r_edge_env_backtrace`; [EDGE.md](EDGE.md#environment-variables) |
| Target equivalence (fetch template, `examples/fetch`) | `GET /hello/../hello/Ada`: Node, Deno and wasi-http route the raw dot segments (404); Bun and Workers remove them first (200). Same handler, different routing per platform, and `..` reaches handlers on Node | [#27](https://github.com/Millillion/lasm/issues/27) (proposal: `remove_dot_segments` in `Request.path`), listed as `known` |
| Differential testing, `deep` and `ending` cases | wasmtime turns an exit status of 126–255 into exit 1 with an error (docs/WASI.md says modulo 256); edge and WASI recursion stops just below 10,000 frames of a small function (docs/EDGE.md says 10,000 pass) | Documented ([#30](https://github.com/Millillion/lasm/issues/30)): measured bounds in [WASI.md](WASI.md) and [EDGE.md](EDGE.md); wasmtime's status limit stays in `KNOWN` (a host limit); generator bound 5,000 |
| Target equivalence, first CI run | Bun answered some requests with "socket hang up", among them `/hello/a%2Fb` (the only one in the template's run, 41233271298): the harness sent `Connection: close` through Node's pooled keep-alive agent, which then reused the socket Bun had closed as asked. Not Bun and not Lasm: every run since answers `Hello, a/b` on Bun (e.g. 41650866547) | Harness fix (fresh connections, b88e671); a `keepAlive` corpus case now sends `/hello/a%2Fb` three times among five requests on one persistent connection, on every target |
| Conduit traffic equivalence, first CI run (42329506498) | Vercel Functions answered five bodiless `POST`s (favorite, follow) with 500 "invalid transfer-encoding header" from Vercel's launcher: the recording proxy forwarded hurl's bodiless `POST` (no `Content-Length`) with Node's default `Transfer-Encoding: chunked`. The harness's, not Vercel's or Lasm's: hurl sends no framing there and passes on Vercel directly | Harness fix: the proxy keeps the client's framing (a length when it sent a body or a length, none otherwise) |
| Dev-profile campaign 41241443151 | **`lasm build --dev` followed by `lasm build --target wasi --dev` in the same project failed** (also in 0.3.5): the WASI link took the seeded dev link's Node archive members (`*.lasm-member.o`) and `reachability.o` along with the edge runtime's archives, so every host symbol was defined twice. The edge link already dropped them | Fixed in `src/wasi/wasi-link.mjs` (#34); the PR tier now replays the regressions in the dev profile |
| Dev-profile campaign 41241443151 | `Float.pow` differed in the 17th digit between native (glibc) and Wasm (musl's libm): expected, libm functions are not correctly rounded | Generator: libm results go through `approx` (9 significant digits) |
| Nightly-style campaign 41241440598 (9,450 cases) | Two "divergences" on every Wasm target were the harness's own: it decoded each pipe chunk of the oracle's output separately, so a UTF-8 character split by native Lean's 4,096-byte writes became U+FFFD (the Wasm targets wrote it whole). `scripts/ci/lasm-js-stress.mjs` had the same pattern | Harness fix (#33) |
| Browser differential, first campaign (41718626550, `IO.Process.exit 7` ending, all three browsers) | **`IO.Process.exit` in an isolate stopped the instance with "unreachable"** (Firefox: "unreachable executed", WebKit: "Unreachable code should not be executed") instead of the host's refusal: the runtime traps right after the exit call (`runtime/node-io.cpp`), and the trap, not the refusal, became the stop cause. Affects the browser and every edge isolate (Workers and the other edge platforms); Bun and Deno exit | Fixed in `src/edge/edge-host.mjs` (the refusal is kept as `exitRequested`) and `src/edge/edge-start.mjs` (it is the stop cause and the rejection); regressions in `test/edge-host.test.mjs` and `test/edge-runtime.test.mjs`. The page still cannot exit: a `KNOWN` entry in `run.mjs` (a documented host limit) |
| Browser differential, first PR run (41718617906) | A panic in a page prints a JavaScript backtrace: a page has no environment, so `LEAN_BACKTRACE=0` cannot be set. Documented behaviour ([EDGE.md](EDGE.md#environment-variables)), not a bug | `KNOWN` entry in `run.mjs` |
| Nightly campaigns since 2026-11-02 (`deno-O0`), the first `bun-O0` campaign (41729836793) | `deep` cases of 3,000 frames stopped the unoptimized edge builds with "memory access out of bounds" (Bun: "Out of bounds memory access"), cutting off every later case: clang `-O0` keeps every local on the edge link's 1 MiB C stack (`src/edge/edge-link.mjs`), which those frames overflow. A capacity limit of unoptimized code, not an optimizer difference. The optimized edge builds pass 5,000 | Harness: the edge `-O0` targets run the core program with `deep` cases of at most 1,000 frames (`withDeepAtMost`, program `shallow`). Fixed: the instance stops with "Stack overflow detected: Lean exhausted the edge profile's 1 MiB C stack (WebAssembly linear memory)" when the C stack pointer is at or past the end of the stack after a trap (`src/edge/edge-pre.js` keeps it, `src/edge/edge-start.mjs` names it); regressions in `test/edge-js.test.mjs`, `test/edge-runtime.test.mjs` and `scripts/ci/stack-depth.mjs` (`edge-O0`, `edge-O0-node`, `edge-O0-bun`: three recursions just past their `-O0` limits; V8 runs out of its engine stack first for small frames, Bun of the C stack) |
| Test-quality audit | `candidate-readme.test.mjs` broke on `main` when the README's headings changed (PR #22), failing `installer-faults.yml` on every PR | Fixed in #25 |
| Host bridge model (proxied work in a synchronous callback) | **A synchronous Lasm.JS callback that made the program's first asynchronous runtime request (a timer, socket, DNS lookup) hung for good.** The request starts the completion thread; `pthread_create` on a Lean thread is proxied synchronously to Node's main thread, which waited in `syncFunction` on the doorbell and never ran proxied work. Found while modelling the lazy completion thread, then reproduced (0.3.5) | Fixed: the wait runs the main thread's mailbox (`serveMailbox`, Emscripten's `_emscripten_check_mailbox`) whenever it times out, every 10 ms; regression in `test/node-js.test.mjs` and part 4 of `test/fixtures/js-callbacks`; the model's mutation keeps the old wait |
| Host bridge model (host calls of work proxied to the synchronous-callback thread) | **A host call made by work proxied to the synchronous-callback thread while it waited in a host call hung the callback**: it uses the thread's next-depth slot, which Node's main thread (waiting in the callback) neither served nor knew, since that slot's registration message waits for the event loop. Found by extending the model; no real program is known to trigger it (the work is Emscripten's dynamic-library synchronization) | Fixed: each slot links the next depth's, and inline serving follows the links; regression in `test/full-host-rpc-channel.test.mjs`; the model's mutation keeps the old serving |
| Host bridge (roadmap) | **Waiting for a JavaScript promise inside a synchronous callback hung for good** (`Value.await`, `callAwait` in `IO`): the promise settles only after the callback returns. `Async.block` there still hangs (the computation runs on another Lean thread, whose host calls wait for the event loop) | Fixed: the request fails at once with the reason; regressions in `test/node-js-bridge.test.mjs`, part 5 of `test/fixtures/js-callbacks`, and the edge profile's controller in `test/edge-js.test.mjs` |
| Host bridge (approved 2026-11-04) | **Waiting inside a synchronous callback for a Lean task that needs Node hung for good**: a task that makes host calls (`Async` run with `.block`), or a timer, DNS lookup or socket read started in the callback. Node's main thread waits for the callback, and the task's thread (or the completion) waits for the main thread | Fixed: the callback's task waits poll (`sync_wait`, through `--wrap` of `lean_task_get` and `lean_io_wait_any_core`), every other thread's indefinite wait is listed (`--wrap` of `emscripten_futex_wait`, `lasm_js_host_wait`), and the main thread stops a wait once every other Lean thread has waited for 50 ms with nothing changed; regressions in `test/fixtures/js-sync-waits` (each part alone, then all), `test/node-js-bridge.test.mjs`, and the model's `taskWaits`, `pureWaits` and mutants |
| Mutation testing (`build-service`, first run) | **`createBuildService({ unref: true })` did not let the process exit** (the Vite plugin's build worker): the worker's stdout and stderr were piped, and a worker stdio stream waiting for data refs the worker; `unref()` also came before the `'message'` listener, which refs it again | Fixed ([#49](https://github.com/Millillion/lasm/issues/49)): Node forwards the worker's output itself, and `unref()` comes last; regression in `test/dev-build-service.test.mjs` |
| Mutation testing (`host-bridge`, `edge-glue`) | **Lasm.JS failures wrapped twice**: a settled value that could not be converted, or an awaited promise rejected with a Lasm.JS failure, reached Lean as `Error: TypeError: …`, on Node and the edge | Fixed ([#51](https://github.com/Millillion/lasm/issues/51)) in `src/node-js.mjs` and `src/edge/edge-js.mjs`; regressions in `test/node-js-bridge.test.mjs` and `test/edge-js.test.mjs` |
| Deterministic simulation of Tandem (first CI run: 12 of 30 seeds) | **The editor could drop an unsent edit from `pending`:** a WebSocket push that did not continue the replica's log sent a second sync while one was in flight, without marking it in flight, so two replies came back and the first one's count (`onReply sent`) dropped operations the second carried. The edit was lost if that second sync failed | Fixed: a push that arrives while a sync is in flight marks the editor behind, and it syncs again when the reply returns (`Frontend/Ui.lean`) |
| Deterministic simulation of Tandem (first CI run) | A failed catch-up sync (nothing pending) was never retried: the retry ran only while edits were pending, so the editor showed "Offline: 0 edits waiting" and stayed behind the log until someone else typed | Fixed: the retry always syncs |
| Deterministic simulation of Tandem (third CI run, most seeds with an ambiguous commit) | A commit that succeeded and then reported an error (D1's lost reply, a timeout after `COMMIT`): `syncOnce` ran the sync again, found the operations known and appended and pushed nothing, so tabs that were not typing never heard of them | Fixed: a failed commit checks whether the log holds exactly its operations at its position, and if so answers and pushes them; and a sync whose operations were all in the log already pushes its reply, which holds them (`Server/App.lean`; the second part was found by the heavy-fault seeds, when that check could not read the log) |
| Deterministic simulation of Porter (4 of 30 seeds) | A token request whose commit succeeded and then reported an error is run again by `runRequest`, finds its own code used or its refresh token rotated, answers `invalid_grant` and revokes the family it just issued: one transient database error signs a user out | Fixed (#138, Jordan's choice of a commit receipt): each commit inserts a row keyed by an id from the request's random values (the same on a rerun), and a failed commit whose receipt is there keeps its reply (`Server/App.lean`, `Spec.landed_commit_stands`); the simulation no longer tolerates the refusal |
