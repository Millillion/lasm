# Lasm's long-term testing strategy (proposal, for deliberation)

Status: **adopted for now, 2026-11-01** (Jordan accepted the recommendations below; open to revisiting). This is the multi-month roadmap.
[docs/TESTING.md](../TESTING.md) describes what is implemented today and how
each layer works. Decisions for Jordan are collected at the end.

## 1. What we have to be able to claim

Every test exists to back up one of Lasm's claims. There are four:

1. **Compilation is faithful.** A Lean program compiled by Lasm behaves exactly
   like the same program compiled by upstream Lean.
2. **Targets are equivalent.** The same Lasm program behaves the same on every
   supported platform, except where a platform documents a difference.
3. **Proofs carry over.** A theorem about a Lean definition describes what the
   deployed code does. This follows from claim 1 plus Lean's kernel. It's
   strengthened by checking proofs with independent kernels, and by keeping the
   code outside the proofs small.
4. **The tooling is dependable.** `npm create`, `npm install`, `lasm build` and
   `lasm dev` work on first try on every supported OS and runtime, give the
   same bytes for the same input, and fail with a clear message instead of a
   stack trace.

Claims 1 and 2 have **oracles that need no hand-written expectations**:
upstream Lean is the oracle for claim 1, and the other targets are the oracle
for claim 2. That's the reason they can be tested on a large scale with
generated programs. The strategy is built around them.

## 2. The five things we pound in

These get most of the effort, run all the time, and grow every month.

### 1. Differential testing against upstream Lean
- **What it is:** generated programs plus real corpora, compiled both ways and
  compared.
- **Corpora:** Lean's own test suite, Batteries' tests, executable code from
  Lean books and docs, and Advent-of-Code-style programs.
- **Second oracle:** Lean's own IR interpreter (`lean --run`). If native and
  interpreted Lean disagree, it's an upstream bug, not ours, and we report it.
- **Optimization differential:** the same program built at `-O0` and `-O2`, and
  with and without Binaryen's passes. That tests clang, LLVM and Binaryen
  without having to verify them.
- **Engine differential:** the same `.wasm` on V8, SpiderMonkey,
  JavaScriptCore and wasmtime.
- **Growth:** the generator gains one language feature at a time. Every bug
  found adds a feature or a corpus entry, and every divergence becomes a shrunk
  regression test.

### 2. Target equivalence
- **What it is:** record each HTTP or browser interaction once, replay it on
  all 14 platforms, and compare the responses. Responses are normalized only in
  ways the platform documents, like the `Date` header.
- **Inputs:** the example apps' traffic. The official RealWorld suite becomes
  the recorded traffic.

### 3. Deterministic simulation and model checking of concurrency
The host bridge (threads, Atomics, host calls) caused our worst bug, the 0.3.0
hang. It gets the strongest treatment:
- **Model checking:** a Lean model of the handshake, checked over every
  interleaving up to a bound.
- **Deterministic simulation testing**, in the style of TigerBeetle and
  FoundationDB:
  - run the bridge and the example apps with a simulated clock, scheduler,
    network and storage, all driven by one seed;
  - inject faults: delays, dropped connections, storage errors, a worker killed
    midway.
  - Any failure replays exactly from its seed.
- **Why the apps are a good fit:** Conduit's `Store` interface makes this cheap
  for the apps. A simulated store is just another implementation.

### 4. Real apps checked by outside oracles, on every platform
Each flagship app comes with a test suite or reference implementation that
someone else wrote:
- RealWorld's API and browser suites;
- CommonMark's 652 examples;
- the OpenID conformance suite;
- TigerBeetle as a reference ledger.

Each app runs on every platform, each platform with its own local tooling.
Outside oracles are the answer to "you wrote the tests yourselves".

### 5. Measuring the tests themselves
- **Mutation testing is the main score.** Coverage only shows which code ran.
  Mutation testing shows whether a test would notice a broken line.
- **Where it runs:**
  - Stryker on the critical JavaScript: the build service, linking, the host
    bridge, the DOM applier and the notices;
  - hand-made mutants on the C host;
  - mutated propositions in the proofs, which check that each Spec proposition
    is needed.
- **Targets:** each critical module has a mutation-score target, and every
  surviving mutant becomes a new test or a recorded reason it can't be killed.

## 3. Black-box methods (through what users touch)

| Method | What it catches | Applies to |
| --- | --- | --- |
| Differential testing (pillar 1) | Miscompilation, runtime and libc gaps | All Lean code |
| Target equivalence (pillar 2) | Platform shims, encoding, header and streaming differences | Servers, browser apps |
| Conformance suites (pillar 4) | Spec violations | Example apps, HTTP, WASI, wasi-http |
| Metamorphic testing | Caching and incremental-build bugs | `lasm dev` |
| Fuzzing at input boundaries | Crashes, hangs, accepting garbage | HTTP, RPC, the patch decoder, URL/JSON parsers, CLI inputs, project files |
| Fault injection | Bad errors or corruption under failure | Installer, network, full disk, killed processes, platform CPU/memory limits |
| Scenario matrix | Breakage in real setups | Template × target × OS × runtime, from the published package |
| Cold-install gates | First-run failures | Every OS, 3 clean runs back to back |
| Soak and load tests | Leaks, slowdowns, rare races | Example apps, the host bridge |
| Performance budgets | Regressions in size, cold start, latency, edit loop | Every release |

Metamorphic testing checks relations between two runs, for example:
- an incremental build behaves like a clean build;
- renaming a file changes nothing else;
- two builds give identical bytes.

Rules for black-box tests:
- they run against the packed or published package, never the source tree;
- each one names the claim it backs.

## 4. White-box methods (using knowledge of the internals)

| Method | Where |
| --- | --- |
| **Proofs** | All Lean libraries (Lasm.UI, RPC, Web, KV), the example apps, and later the glue code once it moves into Lean |
| **Independent kernel checks** | `lake check --paranoid` (already in Conduit's CI), extended to every proof package |
| **Model checking** | Host-call protocol, the lazy completion thread, the dev server's rebuild/reload state machine |
| **Coverage-guided fuzzing** | libFuzzer with ASan/UBSan on the WASI and Fastly C host; Jazzer.js or fast-check on JavaScript decoders |
| **Sanitizers** | ASan, UBSan, TSan builds of the host code natively; Emscripten ASan builds nightly |
| **Property tests** | Plausible (Lean) and fast-check (JavaScript) for anything not yet proved |
| **Mutation testing** | Pillar 5 |
| **Static analysis** | `checkJs` type checking of the JavaScript, CodeQL, ShellCheck on the scripts |
| **Assertions in debug builds** | Invariants of the host bridge and the applier checked at run time in CI builds |
| **Proof-model differential** | The proved Lean models (diff, applier, KV laws) as oracles for the JavaScript that implements them |

## 5. Rules of the process

- **Every bug gets a test at the lowest layer that could have caught it.** It
  also gets a note on why the layer above missed it, and that layer is fixed too.
- **Zero tolerance for flaky tests.** A flaky test is quarantined right away,
  with an issue, and fixed or deleted within a week. Retries stay off in our own
  suites.
- **Every random test logs its seed.** Every failure is reproducible from that
  seed alone.
- **Tests never only check that a string exists in the source.** Those become
  lints, named as lints.
- **Evidence levels per platform**, published in the README:

  | Level | Meaning |
  | --- | --- |
  | L0 | Builds |
  | L1 | Smoke tests pass |
  | L2 | Differential tests and conformance suites pass |
  | L3 | A flagship app passes its outside oracle, plus fuzzing and simulation |

  The README table shows each platform's level.
- **The CI is organized in tiers:**

  | Tier | What runs |
  | --- | --- |
  | PR | Under 20 minutes extra |
  | Nightly | Long campaigns |
  | Weekly | Full matrix, large model-checking bounds |
  | Release | Everything at reduced bounds |

  The 63 workflow files are to be consolidated into these tiers.

## 6. Roadmap

### Now (November 2026)
- Land the differential harness and target equivalence (in progress),
  `docs/TESTING.md` and the test-quality audit.
- Conduit on every platform (in progress).
- Add the second oracle (`lean --run`), the `-O0`/`-O2` differential and the
  four-engine differential to the differential harness.
- Make flaky tests visible: a nightly report of every retried or cancelled job.

### Next (December 2026 to January 2027)
- Lean model of the host-call protocol, checked to a bound, and deterministic
  simulation of the host bridge with seeded schedules.
- Mutation testing on the critical modules, with published scores and targets.
- Fuzzing campaigns nightly at every boundary in §3, corpora kept in the repo.
- The ledger app (if chosen), with TigerBeetle as its reference and
  simulation-tested from the start.
- Evidence levels in the README.
- Consolidate the CI into tiers.

### Later (first half of 2027)
- **Continuous fuzzing on OSS-Fuzz**, which is free for open source and runs
  around the clock.
- **Move the JavaScript glue code into Lean** where it's practical, so it can be
  proved instead of tested.
- **Translation validation for selected passes**, for example checking that
  Binaryen's optimized output is equivalent to its input on our programs.
  Long-term, a smaller and more verifiable path from Lean's IR to Wasm.
- **A public test-evidence page**, generated by CI: per platform its evidence
  level, and per claim the tests that back it, their latest results, the bugs
  found and the mutation scores.

## 7. Decisions

Decided 2026-11-01: Jordan accepted the recommendations, for now.

1. **Evidence levels:** yes, in the README's platform table, generated from CI.
   The names L0–L3 stand until Jordan picks others.
2. **CI time budget:** accepted. Nightly long campaigns on free runners, plus
   about an hour more on release PRs.
3. **OSS-Fuzz:** yes, once our fuzzers exist (around December). Jordan applies
   as maintainer.
4. **Flake policy:** a flaky test is quarantined at once, with an issue, and
   fixed or deleted within a week.
5. **Public evidence page:** yes, on the website, generated by CI.
6. **Model checking:** in Lean. It's done for the host bridge (PR #37).
7. **Glue code in Lean:** later, starting with what mutation testing shows is
   riskiest.

Also from the deliberation:
- **Order of the pillars:** mutation testing moves up to run alongside pillars
  1 and 2, because it is the only one that measures whether our existing tests
  are any good.
- **Beyond Lean code:** don't try to verify clang, LLVM, Emscripten or Binaryen.
  Compare their output (optimization levels, engines), check selected Binaryen
  passes by translation validation, and move glue code into Lean where it pays
  off.
- **Open:** whether "secure by default" becomes a fifth claim (Jordan).
