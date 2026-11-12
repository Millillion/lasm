# Lasm's testing strategy

Status: **adopted, 2026-11-09.** The first draft was adopted on 2026-11-01. It
moved here from `docs/proposals/` once Jordan set the direction on 2026-11-09:
1. a practical, comprehensive strategy;
2. then reduce the code;
3. then property tests written as propositions that carry over to proofs;
4. then a rewrite assessment.

Claude owns this document. Every decision in it is logged in
[DECISIONS.md](DECISIONS.md) and listed for Jordan in [REVIEW.md](REVIEW.md).

Related documents:
- [TESTING.md](TESTING.md) describes how each layer works today.
- [CI.md](CI.md) says where each check runs.
- [proposals/IRREDUCIBLE.md](proposals/IRREDUCIBLE.md) is the reduction and verification path this strategy prepares for.

## 1. What the tests must back

Every test backs one of five claims, and names the claim it backs.

1. **Compilation is faithful.** A Lean program compiled by Lasm behaves exactly
   like the same program compiled by upstream Lean.
2. **Targets are equivalent.** The same Lasm program behaves the same on every
   supported platform. The only exceptions are differences the platform documents.
3. **Proofs carry over.** A theorem about a Lean definition describes what the
   deployed code does. This follows from claim 1 and Lean's kernel. It gets
   stronger with independent kernel checks and with less code outside the proofs.
4. **The tooling is dependable.** `npm create`, `npm install`, `lasm build` and
   `lasm dev` work on the first try on every supported OS and runtime. The same
   input gives the same bytes, and a failure prints a clear message, never a
   stack trace. This claim has the same priority as claim 1.
5. **Untrusted input can't crash or subvert a Lasm program.** Malformed HTTP
   requests, RPC messages, UI patches and project files are rejected cleanly,
   with no crash, hang or out-of-bounds effect.

Claims 1 and 2 have oracles that need no hand-written expectations:
- upstream Lean, for claim 1;
- the other targets, for claim 2.

That is why most of the effort goes into generated inputs.

## 2. Methods

Each method below says what it is, what Lasm has today, and the next gap.

| Method | What it is | Today | Next gap |
| --- | --- | --- | --- |
| **Differential testing (vs native Lean)** | The same Lean program, built natively by upstream Lean and by Lasm, must print the same and exit the same | `scripts/differential/`: generator, shrinker, regression replay; four extra oracles: `lean --run`, `-O0`/`-O2`, four engines, Bun and three browsers | Corpora: Lean's own `tests/`, Batteries' tests and book code, run through the harness, not only through the upstream suite |
| **Target equivalence** | One server or app, the same traffic, every platform; only documented normalizations | `scripts/equivalence/` (fetch template and `examples/fetch` on 5 targets); Conduit's 154 RealWorld exchanges on 18 platforms | Recorded traffic of Ledger, Porter and Tandem; browser DOM traces |
| **Differential fuzzing** | Generated inputs with a second implementation as the oracle. (a) Generated Lean programs, compiled by Lasm vs native Lean. (b) JavaScript glue vs its Lean model, run with `lean --run` | (a) The differential generator: typed expression trees, statements, tasks, files, feature programs; campaigns of 60 minutes nightly and 100 minutes weekly, coverage-guided (`scripts/differential/coverage.mjs`: a corpus of cases that reached new runtime C, a quarter of each program mutants of it). (b) `serverless-http` against `Lasm/Serverless/Proofs/Model.lean`; `ui-decode`, the Lasm.UI applier's reading against the reference decoder `Lasm/UI/Proofs/Decode.lean`; `lasm-js-wire`, the Lasm.JS value codec's JavaScript half against Lean's (`Wire` in `Lasm/JS/Core.lean`, the code Lasm programs run) | (a) Glue coverage attributed to single cases (every language feature this row listed is generated: type classes, `partial`, `ByteArray`, and since 2026-11-12 `Thunk`, `ST`, `FloatArray` and structures of up to 40 fields, [TESTING.md](TESTING.md#differential-fuzzing); coverage feedback is done: campaigns keep the cases that reach new runtime C, feature cases included, and measure Lasm glue, [TESTING.md](TESTING.md#coverage-feedback)). (b) The same for the edge copy of the Lasm.JS codec (`src/edge/edge-js.mjs`, or one copy after M3) |
| **Coverage-guided fuzzing** | Mutated inputs at every input boundary, guided by coverage; no crash, hang or garbage accepted | `test/fuzz/`: 8 targets (V8 block coverage for JavaScript; libFuzzer with ASan/UBSan for Lean's C and the WASI C host); the apps' fuzzers | The Fastly host, the edge host's request mapping, the `lasm dev` proxy, project-file parsing (`lakefile.toml`, `lakefile.lean` options, `package.json`) |
| **Property testing with transferable propositions** | A named proposition (§4), checked on generated inputs until it is proved | Lean libraries: 53 propositions in `library/Lasm/*/Spec.lean`, all proved; 12 candidates in `Candidates.lean` (Lasm.UI, Lasm.Fetch, Lasm.RPC, Lasm.Serverless), each evaluated on generated inputs (`test/ui/DiffModel.lean`, the `lean-fetch-request` and `lean-rpc` fuzz targets) or of the JavaScript (`ui-patch`, `test/serverless-shims.test.mjs`). The CLI's JavaScript ([verification/cli](../verification/cli/README.md)): 23 candidates about `opaque` stand-ins for the JavaScript functions, each cited and checked by its property test or fuzz oracle, and 6 propositions proved of Lean models of the JavaScript (`Lasm/Cli/Model/`), each model checked against its JavaScript by the model differential `test/models/cli-differential.mjs` (`cli-models.yml`). Apps: `examples/*/Proofs/Spec.lean`. The proposition lint (`scripts/propositions.mjs`, PR tier) | On 2026-11-11 every `forAll` property (31) and 7 of 8 fuzz oracles name their proposition (not `wasi-cgi`, which goes with Lasm.Fetch). Since 2026-11-11 models replace the stand-ins of `numbers`, `changedFiles`, `responseFile`, `replaceCoreModule`, `withoutComponentType`, `initializationSchedule` and `compactInitializerWrappers`. Next: models of the other stand-ins (proposals/IRREDUCIBLE.md M4) |
| **Metamorphic testing** | A relation between two runs, e.g. an incremental build equals a clean one | `scripts/tooling/metamorphic.mjs` (`lasm build`, `lasm dev`) | Compiler relations: renaming a definition, adding an unused import, or reordering independent definitions changes no output |
| **Fault injection** | Killed processes, a full disk, a dropped network, corrupt caches, platform limits | `scripts/tooling/faults.mjs`; installer faults on 5 OSes; DST faults in the apps | Memory and CPU limits of the function platforms; host-call failures inside the Lasm.JS bridge |
| **Deterministic simulation** | Seeded simulated clock, scheduler, network and storage; every failure replays from its seed | `scripts/sim/` with Tandem, Ledger and Porter; host-bridge schedule fuzzing (`scripts/bridge-fuzz/`) | Conduit and Folio's edge server; `lasm dev`'s rebuild loop |
| **Mutation testing** | Change the code, check that a test fails | Stryker on 7 JavaScript modules, with a ratchet (86–97 %); mutants reintroduced in the bridge model | The CLI argument and init modules, `src/serverless/`, `src/wasi/` JS; mutated Spec propositions (does each proposition rule something out?); hand mutants in the C hosts |
| **Formal proofs** | Lean theorems, checked by the kernel and independently | Lasm.UI, RPC, KV, Fetch, JS, Serverless (library/PROOFS.md); the five apps; the host-bridge model; `lake check --paranoid` | The candidates in library/PROOFS.md; the propositions each property test names, as they mature |
| **Translation validation** | For one compilation, check that the output is equivalent to the input, instead of verifying the compiler | Not started. The `-O0`/`-O2` and engine differentials compare outputs on tests; they validate nothing | Binaryen: check each pass Lasm uses (`wasm-opt` passes) on our programs, starting with the smallest passes (proposals/IRREDUCIBLE.md, M5) |

## 3. Method × component × tier

Components:
- **Pipeline:** Lean→C, C→Wasm (clang/LLVM), link (wasm-ld, the link driver) and Binaryen.
- **Hosts:** the runtime and host JavaScript on Node, the edge, the browser and WASI (with its C hosts).
- **Libraries:** the `Lasm.*` libraries.
- **Tooling:** the CLI, the installer, `lasm dev` and the templates.
- **Apps:** the example apps.

How to read a cell:
- **E** means it exists, **P** that it is planned.
- The tiers follow: PR, N (nightly), W (weekly), R (release).
- A dash means the method does not apply there.

| Method | Pipeline | Hosts | Libraries | Tooling | Apps |
| --- | --- | --- | --- | --- | --- |
| Differential vs native Lean | E: PR, N, W, R | E: PR, N (every target runs the same programs) | P: N (library code in generated programs) | — | E: PR (Ledger vs TigerBeetle, Folio vs commonmark.js, Porter vs openid-client, Tandem vs Yjs) |
| Target equivalence | E: PR (through the outputs) | E: PR, N | E: PR (through the apps) | P: N (`lasm build` bytes across OSes) | E: PR (Conduit, 18 platforms); P: N (the other four) |
| Differential fuzzing | E: N, W (generated programs, coverage-guided) | E: PR, N (`serverless-http` vs its Lean model; `ui-decode` vs the reference decoder; `lasm-js-wire` vs Lean's codec) | P: N (encoders vs their Lean decoders) | — | E: N (Folio, Tandem vs their references) |
| Coverage-guided fuzzing | P: W (the link driver's inputs: recipes, maps) | E: PR (replay), N, W | E: PR, N, W (Fetch, RPC) | E: PR, N (CLI arguments); P: project files | E: PR, N (Porter, Folio, Tandem) |
| Property tests, named propositions | E: PR (the link driver's, `lower-atomics`' and the WASI component's properties name `Lasm.Cli` candidates); P: N (generator properties named) | E: PR, N (`serverless-http` names 4; `ui-patch`; the serverless, initializer and static-server properties); P: `wasi-cgi` (goes with Lasm.Fetch) | E: PR (Spec files, proved); E: PR, N (Candidates: `DiffModel.lean`, native fuzz targets) | E: PR, N (the CLI's properties and the `cli-arguments` oracle name `Lasm.Cli` candidates); P: PR (error-corpus properties named) | E: PR (Spec files) |
| Metamorphic | P: N (renames, reorders) | — | — | E: N, PR (on harness change) | — |
| Fault injection | — | E: N (bridge schedules); P: host-call faults | — | E: PR (Linux, Windows), N, R (5 OSes) | E: PR, N (DST) |
| Deterministic simulation | — | E: PR, N (host bridge model and schedule fuzzing) | — | P: N (`lasm dev` loop) | E: PR (30 seeds), N (random seeds) |
| Mutation testing | E: PR, N (link driver, target links) | E: PR, N (host bridge, edge glue, UI applier) | P: W (mutated propositions) | E: PR, N (build service, notices); P: CLI modules | — |
| Formal proofs | P (proposals/IRREDUCIBLE.md: M6) | E: PR (bridge model); P: models of the remaining glue | E: PR (library-proofs.yml) | — | E: PR (each app's proofs, `--paranoid`) |
| Translation validation | P: W (Binaryen passes, then wasm-ld) | — | — | — | — |

The tiers have fixed budgets (decision 2, §6). A new check goes in the
cheapest tier that still catches its bug before a user sees it
([CI.md rule 1](CI.md#rules)).

## 4. Property-testing convention: propositions that carry over to proofs

A property test is a proposition we have not proved yet. Each one is written
so that proving it later is a mechanical step:
1. move the statement;
2. add the theorem;
3. delete the test, or keep it as a regression check.

**Where the code is Lean.**
- **Proved propositions** go in the library's or app's `Spec.lean`, as today:
  a `def name : Prop`, a plain-English doc comment, and no proof. The theorem
  `Theorems.name : Spec.name` sits beside it, and
  `node scripts/library-proofs.mjs` checks the pair. Examples:
  - [library/Lasm/KV/Spec.lean](../library/Lasm/KV/Spec.lean)
  - [library/Lasm/RPC/Spec.lean](../library/Lasm/RPC/Spec.lean)
  - [library/Lasm/UI/Spec.lean](../library/Lasm/UI/Spec.lean)
  - [library/Lasm/JS/Spec.lean](../library/Lasm/JS/Spec.lean)
  - [library/Lasm/Serverless/Spec.lean](../library/Lasm/Serverless/Spec.lean)
  - each app's `Proofs/Spec.lean`, for example [examples/ledger/Proofs/Spec.lean](../examples/ledger/Proofs/Spec.lean)
- **Tested propositions** go in a sibling file, `Candidates.lean`, in the same
  namespace and with the same form. The doc comment adds one line,
  `Tested by: <path>`, naming the test that checks it. They exist for
  Lasm.UI, Lasm.Fetch and Lasm.RPC
  ([library/Lasm/UI/Candidates.lean](../library/Lasm/UI/Candidates.lean));
  the candidates list of [library/PROOFS.md](../library/PROOFS.md#candidates-not-yet-proved)
  is generated from them. Moving one to `Spec.lean` and adding its theorem
  proves it, and `library-proofs.mjs` then requires the theorem.
- **The statement is decidable on samples.** A candidate is stated as
  `∀ x, P x`, with `P x` decidable for concrete `x` (or `Bool`-valued).
  The test then evaluates exactly the same `P` on generated `x`, by one of
  these routes:
  - a Lean test driver, through `decide` or `==`;
  - the libFuzzer harness on Lean's C output (`test/fuzz/native/LasmFuzz.lean`);
  - the differential generator.

  The test checks the proposition's own body, not a paraphrase of it. This is
  what makes the transfer mechanical.

**Where the code is JavaScript or C.**
- Until a module has a Lean model, its functions are `opaque` constants of
  the JavaScript's types, and the propositions are stated about them: for the
  CLI's JavaScript, [verification/cli/Lasm/Cli/Interface.lean](../verification/cli/Lasm/Cli/Interface.lean)
  and [Candidates.lean](../verification/cli/Lasm/Cli/Candidates.lean)
  (namespace `Lasm.Cli`). A test can check such a proposition but no theorem
  can prove it; replacing the `opaque` by a model makes the statement
  provable (unchanged, unless the model shows it wrong of the JavaScript), and
  the proved statement moves to `verification/cli/Lasm/Cli/Spec.lean`. Outside semantics a test uses as its oracle (Wasm
  validation and execution, a ZIP reader) are `opaque` too, and say so.
- A JavaScript property, or a fuzz oracle, starts with a doc comment carrying
  two lines:
  - `Proposition: Lasm.<Lib>.Spec.<name>` (or `Candidates.<name>`);
  - the Lean statement, verbatim.

  The Lean side holds a model of the JavaScript, function for function, as
  [library/Lasm/Serverless/Proofs/Model.lean](../library/Lasm/Serverless/Proofs/Model.lean)
  does for `src/serverless/`. The proposition is about the model, and is
  proved there.
- The test checks two things on every input:
  - the JavaScript and the model agree (differential fuzzing, run with
    `lean --run`, like `test/fuzz/support/serverless-model.mjs`);
  - the JavaScript's own result satisfies the proposition.
- What remains unproved is exactly "this JavaScript implements the model". That
  is stated once per module, in its `Spec.lean` reading guide. It is the step a
  Lean rewrite or a Rust verifier removes later ([proposals/IRREDUCIBLE.md](proposals/IRREDUCIBLE.md)).
- Examples:
  - [test/fuzz/targets/serverless-http.mjs](../test/fuzz/targets/serverless-http.mjs) (model differential; its 20 propositions are proved);
  - [test/models/cli-differential.mjs](../test/models/cli-differential.mjs) (model differential of the CLI's modelled functions, `verification/cli/Lasm/Cli/Model/`; their propositions are proved in `verification/cli/Lasm/Cli/Spec.lean`);
  - [test/fuzz/targets/ui-patch.mjs](../test/fuzz/targets/ui-patch.mjs) (its decoder proposition is `Lasm.UI.Spec.frames_decode`, proved about the Lean reference decoder);
  - [test/fuzz/native/](../test/fuzz/native/) (Lean code fuzzed natively).
- C (the WASI and Fastly hosts) follows the JavaScript rule. Until there is a
  model, the proposition is stated as a Lean `def … : Prop` about the bytes in
  and out.

**Rules.**
- Names are `snake_case`, like the existing Spec files. A proposition keeps
  its name from test to theorem.
- Propositions don't mention the test harness: no seeds, sizes or timeouts.
  Bounds a test needs (input length, depth) are the test's business, not the
  proposition's.
- No new property-testing library. Lasm already has the engines:
  - its own fuzz engine (`test/fuzz/input.mjs`, `mutate.mjs`);
  - libFuzzer on Lean's C;
  - the differential generator.

  Plausible and fast-check are not added (decision 9, §6).
- A lint (`node scripts/propositions.mjs`, run by
  `test/propositions.test.mjs` on every pull request) checks:
  - every `Proposition:` line names a definition that exists, and the
    statement on the comment lines after it is the definition's (whitespace
    aside);
  - every `Tested by:` path exists and cites the candidate;
  - library/PROOFS.md's candidates list is current.

  It also counts the fuzz oracles and `forAll` properties that name a
  proposition, the measure of exit bar 7 ([TESTING.md](TESTING.md#named-propositions)).

## 5. Rules of the process

- **Every bug gets a test at the lowest layer that could have caught it.** It
  also gets a note on why the layers above missed it.
- **Zero tolerance for flaky tests** (decision 4).
- **Every random test logs its seed.** A failure is reproducible from the seed alone.
- **No test only checks that a string exists in the source.** Those checks are
  lints, and are named as lints.
- **Black-box tests run against the packed or published package,** never the
  source tree.
- **Evidence levels per platform** are published in the README (decision 1).

## 6. Decisions

Decisions 1 to 7 were first decided on 2026-11-01. They are settled again here
under the 2026-11-09 direction; DECISIONS.md has one row per decision, dated
2026-11-09. Decisions 8 and 9 are new.

1. **Evidence levels.** Keep L0–L3, generated from CI, in the README's
   platform table (`scripts/evidence/levels.mjs`). L2 means the differential
   suite and target equivalence pass, and L3 means a flagship app passes its
   outside oracle, with fuzzing and simulation in CI. The names stay until
   Jordan rewords them.
2. **CI budget.**

   | Tier | Budget |
   | --- | --- |
   | PR | ≤ 20 minutes of wall clock, and no macOS unless macOS code changed |
   | Nightly | ≤ 8 hours of free runners, Monday to Saturday (US Eastern) |
   | Weekly | ≤ 8 runner-hours, on Saturday |
   | Release | at most one hour more than today's `release-checks` |

   Everything runs on free standard runners. There are no scheduled or
   automated runs on Sunday (US Eastern), and scheduled workflows carry a
   runtime guard for this.
3. **OSS-Fuzz: no.** This was Jordan's decision on 2026-11-02, and it
   stands. Fuzzing lives in this repository and runs in our CI, with corpora
   and every crash committed.
4. **Flaky tests.** A flaky test is quarantined at once, with an issue
   (`test/quarantine.json`). It is fixed or deleted within 7 days; the suite
   fails on an older entry. Retries stay off in our own suites.
5. **Public evidence page: yes.** It is generated by CI
   (`content/learn/test-evidence.md`, live on the website). It grows one
   section per method of §2, and the propositions count per library.
6. **Model checking is done in Lean**, not TLA+ or another tool. That is one
   language, and the models can become proofs. Done for the host bridge. Next
   are the dev server's rebuild loop and the lazy completion thread, each one
   only when its code changes or a bug points at it.
7. **Glue code in Lean: specify first, move last.** A JavaScript or C module is:
   1. first reduced (proposals/IRREDUCIBLE.md);
   2. then specified by a Lean model, function for function, with its
      propositions proved and a model differential in CI (§4);
   3. moved into Lean only where a Lean program already runs beside it and
      the logic is pure.

   Ranked by mutation survivors and bug history
   ([proposals/JS_TO_LEAN.md](proposals/JS_TO_LEAN.md)). This replaces "later,
   riskiest first": modelling gives most of a proof's value without a runtime
   change.
8. **The order of work** follows Jordan's 2026-11-09 direction:
   1. this strategy;
   2. close the gaps marked "Next gap" in §2 that the exit bar needs;
   3. reduce the code;
   4. transferable property tests for what remains;
   5. the rewrite assessment.

   Reduction comes before new tests for code that is about to be deleted.
9. **No new testing libraries.** Lasm already has engines for fuzzing,
   properties and simulation. New dependencies (Plausible, fast-check,
   Jazzer.js, TLA+) are not added. Plausible, for example, would put a Lean
   package dependency in every proof build. A method we lack is built in
   `scripts/` or `test/`, or comes from a tool CI already downloads (libFuzzer
   in clang).

## 7. Exit bar: "rock solid"

Lasm is rock solid, and the reduction (IRREDUCIBLE.md M1–M3) can delete code
freely, when all of these hold at once. Each item is measured by CI and shown
on the evidence page.

1. **Platforms:** every platform is at evidence level L2 or higher, and Node,
   Workers and the browser are at L3.
2. **Mutation:** every module in `scripts/mutation/` is at or above 80 %, with
   the ratchet never lowered. The CLI argument and init modules,
   `src/serverless/` and the WASI JavaScript are added and meet 80 %.
3. **Coverage:** total line coverage of the unit suite is ≥ 75 %. The baseline
   is 67.5 %. Every 0 % file is either covered by an integration workflow named
   in the baseline, or removed.
4. **Campaigns:** 30 consecutive nightly differential, equivalence, fuzzing
   and DST campaigns find nothing new. Sundays don't count and don't break the
   run.
5. **Flakes:** no flaky test is open, and none was quarantined in the last 14 days.
6. **Apps:** each example app passes its outside oracle on every platform it
   claims.
7. **Propositions:** every fuzz oracle and JavaScript property names a
   proposition that exists (the §4 lint is green). Every library candidate in
   library/PROOFS.md is a `Candidates.lean` definition with a `Tested by:`
   line.
8. **Differential fuzzing:**
   - The generator covers every feature listed under "Next gap" in §2.
   - The Lasm.JS wire codec and the UI decoder each have a model differential
     in CI.

Until the bar is met, it is the reason to add tests. Once it is met, new
tests come from bugs, new features and the propositions of §4.

### Status

The [evidence page](../content/learn/test-evidence.md) computes this from CI
and the repository every time it is regenerated (its first section, "The exit
bar"; [TESTING.md](TESTING.md#the-test-evidence-page) says how each item is
measured). Snapshot of 2026-11-10, with items 3, 5, 6 and 7 as of 2026-11-11 and item 8 as of 2026-11-12:

| # | Item | Status | What is missing |
| --- | --- | --- | --- |
| 1 | Platforms | Not met | All 13 platforms are at L2 or higher; Node.js is at L3, Workers and the browser at L2 |
| 2 | Mutation | Not met | 19 of 21 modules passed in the last nightly run; `application-sources` and `node-host` failed in setup (no score). Every threshold is 85–97 % |
| 3 | Coverage | Met | 98.05 % of lines (125 files; the baseline, raised to that nightly run on 2026-11-11, was 67.5 %). Of the three 0 % files, `packages/create-lasm/bin.mjs` is now unit-tested and `src/edge/edge-pre.js` and `src/edge/edge-library.js` (Emscripten inputs that run only inside edge builds) are named with `workers.yml` and `browser.yml` in `docs/evidence/coverage-baseline.json`; `scripts/coverage/report.mjs` fails the unit suite on a 0 % file nobody names |
| 4 | Campaigns | Not met | 0 of 30: the DST campaign failed on 2026-11-08 and 2026-11-10 (Porter #189, Tandem #190; both fixed) and again on 2026-11-11 (Porter, #206); the differential and fuzzing campaigns were clean on 2026-11-10 and 2026-11-11. The count is `campaignStreak` in `scripts/evidence/page.mjs`, recomputed from the scheduled runs and committed with the page by `evidence-page.yml` every night |
| 5 | Flakes | Met | `test/quarantine.json` is empty, and its git history shows no entry in the last 14 days (it never had one since it was created on 2026-11-03); the page reads the history every night |
| 6 | Apps | Met | 50 of 50 claimed platforms of Conduit, Porter, Tandem, Ledger and Folio pass the app's outside oracle in the newest `main` run. The claims are the rows of each README's platform tables, listed with the CI jobs that run the oracle in `scripts/evidence/apps.json`; a unit test keeps the two in step |
| 7 | Propositions | Not met | The lint is green; 35 candidates (12 in the library, 23 about the CLI's JavaScript in verification/cli, where 6 more are proved of Lean models with a model differential); every `forAll` property (31) and 7 of 8 fuzz oracles name a proposition, and `test/propositions.test.mjs` holds that; `wasi-cgi` (the WASI C host's CGI boundary, `src/wasi/lasm_fetch_wasi.c`) does not, and goes with Lasm.Fetch (removal 18); three PROOFS.md items need a model before they can be stated (JavaScript applier, hydration, KV stores) |
| 8 | Differential fuzzing | Met | Both model differentials run in CI: `ui-decode` (#188) and `lasm-js-wire` (#187). The feature programs landed with #167. Coverage feedback landed on 2026-11-11 (#226): nightly and weekly campaigns keep the cases that reach runtime C no campaign reached, run a quarter of each core program as mutants of them, and log the night's features and growth, which the evidence page records. Two consecutive 30-minute release campaigns (runs 43100578679 and 43108070920, 35 programs each, no divergence): the first reached 9,171 features; the second started from its state (256 corpus cases) and found 4,518 more (503 by mutants), 13,689 in all. The generator covers every feature §2 listed (#227): `FloatArray` and `Thunk Nat` in the operation table, and the `lazy` (`Thunk`), `st` (`runST`/`runEST`) and `wide` (8 to 40 mixed scalar and boxed fields) feature families, mutated by guided campaigns too. Two release campaigns on all 16 targets, no divergence and no harness error: run 43117871350 (40 minutes, 30 programs, 3,330 cases, 11,062 features; 201 of the 387 corpus cases are of the new families, and 66 corpus cases came from feature mutants) and run 43117883485 (feature programs only, started from its state: 11 programs, 2,200 cases, 22,985 features, 17,586 new, 28,648 in all). The evidence page computes the generated-feature part from 400 generated feature cases |
