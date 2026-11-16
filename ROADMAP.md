# Lasm roadmap

**This file is the single source of truth for what is planned, in progress and
done.**
- Claude updates it whenever work starts or finishes.
- Jordan decides what goes on it.
- Status: **restructured into stages with Jordan, 2026-11-16.** The roadmap as
  it stood before is kept in [docs/history/ROADMAP_2026-11-16.md](docs/history/ROADMAP_2026-11-16.md).

Legend: `[ ]` not started, `[~]` in progress, `[x]` done. `(J)` means the item
is Jordan's to do or decide.

Details live in the linked docs. This file only says *what* and *in what
order*. [Issue #21](https://github.com/Millillion/lasm/issues/21) is Jordan's
original plan; each of its points is placed below.

## How the roadmap works (Jordan, 2026-11-16)

- **Stage:** one major item. Stages run strictly one after another. Each has a
  written definition of done, and Jordan signs it off before the next stage
  starts. Claude focuses all work, and all parallel agents, on the current
  stage.
- **Milestone:** a deliverable inside a stage, numbered by stage (0.1, 0.2, …),
  with its own done check. Milestones within a stage run in parallel.
- **Task:** a PR-sized piece of a milestone. Tasks are tracked in PRs and
  issues, not here.
- **Maintenance** may interrupt any stage: Lean upgrades, fixes for outside bug
  reports, and moving the example apps to a new release (see
  [Maintenance](#maintenance)).
- **API decisions:** before 1.0, a PR that adds or changes a public API may
  merge without waiting for Jordan, but every API decision is recorded in
  [docs/API_DECISIONS.md](docs/API_DECISIONS.md) in the same PR and needs
  Jordan's sign-off before 1.0.
- **Measurement terms, not structure:** the CI tiers (PR, nightly, weekly,
  release; [docs/CI.md](docs/CI.md)) and the platform evidence levels L0–L3
  ([docs/TESTING.md](docs/TESTING.md#evidence-levels)).
- **Retired as structure:** the old language and launch phases, the "Steps" of
  the testing order, the milestones M1–M7, "Now / Next / Later", and the
  binding "Tiers". Where each went is in [History](#history).

**The order:** Stage 0 API surface → Stage 1 initial robustness → Stage 2
direct Lean → Wasm backend → Stage 3 shrinking → Stage 4 property tests
(verification emulation) → Stage 5 remaining Lean rewrites.

**Current stage: none started.** Stage 0 starts when Jordan says go.

## Who decides what

- **Claude** owns testing, robustness, CI and platforms outright. Claude
  decides and logs each decision in [DECISIONS.md](docs/DECISIONS.md), and
  reports it.
- **Claude** also chooses, builds and tests the next example apps.
- **Jordan** owns everything a user touches that Lasm created: syntax, APIs,
  shapes, seams, the CLI, the examples' code and propositions, and all
  human-facing text. Pre-1.0 his sign-off on APIs follows the rule above.
- Claude never signs up for anything, and never creates a new repo, without
  Jordan's explicit permission (Jordan, 2026-11-02).
- Decisions Claude made that Jordan may want to revisit are in
  [docs/REVIEW.md](docs/REVIEW.md).

## Stage 0: the API surface

All bindings and every `Lasm.*` question are settled first, so every later
stage hardens, shrinks, models and proves the final surface (Jordan,
2026-11-16). Jordan signs off per milestone.

**Definition of done:** every entry of
[docs/API_DECISIONS.md](docs/API_DECISIONS.md) is decided, implemented,
released, and signed off by Jordan; the example apps and templates use only
the final APIs; no hand-written binding remains where a generated one exists.

- [ ] **0.1 Inventory.** List every public surface in `docs/API_DECISIONS.md`:
  every `Lasm.*` namespace and generated binding, the CLI's commands and
  flags, project configuration, what `lasm init` generates, and the platform
  output layout. Seeded on 2026-11-16 with the 46 questions of the
  [API shapes review](docs/api/SHAPES_REVIEW_2026-11-11.md) and the API items
  of REVIEW.md. Also inventories the API proposals in
  [Jordan's checklist](#jordans-checklist) (Ledger's, Folio's, Porter's and
  Tandem's).
- [ ] **0.2 Serving model, and `Lasm.Fetch` deleted.** `Node.serve` (in
  `Lasm.JS.Node.Serve`, shaped like `Bun.serve`); function platforms call
  `exportDefault`, and the generated platform file calls the handler directly
  (Jordan, 2026-11-11); a small entry module per target for Fastly
  (`Lasm.Fastly.*`), wasi-http (`Lasm.WASI.Http`) and WASI; the templates,
  Conduit and Folio off `Lasm.Fetch` on every target; then `Lasm.Fetch` deleted
  ([IRREDUCIBLE.md](docs/proposals/IRREDUCIBLE.md#3-ranked-removal-list),
  removal 18). Held PRs: #222 (`Node.serve` and direct function handlers) and
  #213 (fullstack template with `Lasm.RPC.dispatch` and
  `Lasm.KV.setWorkersEnv`). Questions A19–A23 and A41–A46.
- [ ] **0.3 `Lasm.JS.Web`.** The WinterTC common web APIs are generated
  (0.6.1, #172) and the browser tier replaced `Lasm.Web` (0.7.0); remaining:
  the rest of the web platform, and the generated-binding mapping rules
  (A9–A13). Tested with web-platform-tests and official vectors on every
  JavaScript target.
- [ ] **0.4 Node, Bun and Deno.** `Lasm.JS.Node` (held PR #220: `node:net`,
  `node:http`, `node:https`; then `node:worker_threads`, `node:zlib`,
  `node:util`); the rest of `Lasm.JS.Bun` and `Lasm.JS.Deno` (Unix sockets,
  WebSockets, Bun's routes). **Deno is under deliberation, leaning yes**
  (Jordan, 2026-11-16: people use it now, and nobody knows what Cloudflare's
  acquisition will mean); A1–A3, A17, A18, A24, A25.
- [ ] **0.5 Cloudflare, and the apps off hand-written bindings.**
  `Lasm.JS.Cloudflare` from Cloudflare's workers-types (KV, D1, R2, Durable
  Objects, env bindings; held PR #216); Porter and Ledger move off their
  hand-written D1 bindings, and Tandem's WebSocket client moves from
  `Lasm.Web.WebSocket` to `Lasm.JS.Web.WebSocket`; A26–A29.
- [ ] **0.6 The `Lasm.*` libraries.** Review `Lasm.UI`, `Lasm.RPC`, `Lasm.KV`
  (with the decision on its Deno and Workers backends), the `Lasm.JS` interop
  core (including its known weaknesses: no inline JavaScript, no JavaScript
  classes from Lean, the synchronous-callback limits, the per-call cost;
  [REVIEW.md](docs/REVIEW.md#high-priority-work-to-define-with-jordan)),
  `Lasm.Fastly` and `Lasm.WASI`; and where the libraries live (`@lasm/cli` or
  separate packages). A4–A8, A14–A16, A30–A40.
- [ ] **0.7 The CLI and configuration.** Commands, flags, `lasm init` output,
  the platform output layout, error text (Jordan's checklist: "Review the
  whole `lasm` CLI").

## Stage 1: initial robustness

The testing strategy's exit bar ([TESTING_STRATEGY.md §7](docs/TESTING_STRATEGY.md#7-exit-bar-rock-solid)),
measured by CI on the [evidence page](content/learn/test-evidence.md).

**Definition of done:** items 1–3 and 5–8 of the exit bar hold at the same
time on the evidence page, target equivalence covers Ledger, Porter and
Tandem, and the differential-fuzzing generator covers the remaining features
of §2's "Next gap". Item 4, the streak of clean nightly campaigns, is
observed and reported only: it never blocks this stage or anything else
(Jordan, 2026-11-16).

- [ ] **1.1 Platforms (item 1).** Every platform at L2 or higher, and Node,
  Workers and the browser at L3. The page of 2026-11-16 reads 6 of 13 at L2
  and 0 of 3 at L3, mostly "no main-branch run has this job", which 0.8.0's
  release checks on `main` may already have changed: re-measure first.
- [ ] **1.2 Propositions (item 7).** Every library candidate in
  [library/PROOFS.md](library/PROOFS.md) is a `Candidates.lean` definition with
  a `Tested by:` line, and every fuzz oracle and JavaScript property names a
  proposition, except fuzz targets checked against an outside reference
  implementation (the rule of 2026-11-16, §7).
- [ ] **1.3 Target equivalence for Ledger, Porter and Tandem.** Their recorded
  traffic compared across targets, as Conduit's is (started 2026-11-13 with
  `scripts/equivalence/traffic.mjs`; finish, and record what each covers).
- [ ] **1.4 The generator's remaining features.** The differential-fuzzing
  generator covers every feature under §2's "Next gap" (item 8 reads met on
  2026-11-16; confirm nothing listed remains).
- [ ] **1.5 Items 2, 3, 5 and 6 stay met** (mutation, coverage, flakes, apps;
  all met on 2026-11-16).
- **Observed, not required:** the campaign streak (item 4). It broke on
  2026-11-14 with a `fuzz.yml` failure, to be looked into as a bug.

## Stage 2: a direct Lean → Wasm backend

[docs/proposals/WASM_BACKEND.md](docs/proposals/WASM_BACKEND.md) has the
deliberation of 2026-11-16: an `EmitWasm` in Lean from LCNF's impure phase
(the input `EmitC` takes), verified by proof and by differential testing
against the Clang path, native Lean and several engines. It comes before
shrinking because much of the code Stages 3 and 4 would shrink and prove
exists only to drive Clang, Emscripten and Binaryen. No go/no-go gate: the
backend implements all of Lean (Jordan, 2026-11-16).

**Definition of done:**
- **Completeness:** every LCNF impure-phase construct and every runtime entry
  point is implemented; 100 % of functions across all corpora compile
  directly; Clang, Emscripten, Binaryen and `wasm-ld` are out of the user's
  build path.
- **Proof:** the emitter is proved to preserve meaning, from the LCNF semantics
  to the Wasm semantics, with Lean's standard axioms only. Until then, every
  compiled function's translation is checked automatically.
- **Semantics checked:** Lasm's executable LCNF semantics agrees with native
  Lean on every corpus; the Lean Wasm semantics passes the official spec
  tests.
- **Differential:** agreement on every corpus (Lean's upstream suite, the
  language-coverage campaign, generated programs, the five apps' outside
  oracles, the metamorphic relations) against native Lean and, while it
  exists, the Clang path; allocation traces match exactly; every engine
  agrees.
- **Performance:** within a budget Jordan sets (suggested: no slower than the
  Clang path, for speed and size).
- **Lean upgrades:** a written process for re-checking the semantics and the
  proof when LCNF changes.

Outside the proof: the C runtime (compiled once to Wasm) and the engines.

- [ ] **2.1 Foundations.** Check whether Lean's `.olean` files carry enough
  compiled form for the standard library (else CI compiles it from source with
  the backend and ships it prebuilt); the executable LCNF semantics; the
  choice of Lean Wasm semantics (Talos, the NeurIPS 2026 framework, or
  Lasm's own).
- [ ] **2.2 The harness.** Mixed linking per function with the Clang path,
  automatic bisection of a divergence to one function, allocation traces,
  the engine matrix, and the nightly metrics on the evidence page.
- [ ] **2.3 `EmitWasm`, all of Lean.** Scalars, constructors, `case`, calls,
  reference counting and reuse, closures and partial applications, thunks,
  tasks, `IO`, exports, initializers, the FFI; suspension (JSPI or selective)
  and tail calls emitted directly.
- [ ] **2.4 Linking and optimization in Lean** (decided 2026-11-16). Whole-
  program emission plus a small Lean step that merges one pre-linked C runtime
  object; optimization in the backend. `wasm-ld` and `wasm-opt` serve as
  oracles and benchmarks only.
- [ ] **2.5 The proof.** Per-function translation checks, then the emitter's
  proof.
- [ ] **2.6 Switch-over.** The Clang path leaves the user's build; the
  installer and downloads shrink to Lean plus prebuilt runtime files.

## Stage 3: shrinking

[docs/proposals/IRREDUCIBLE.md](docs/proposals/IRREDUCIBLE.md)'s removal list,
after the backend has made the toolchain code obsolete.

**Definition of done:** every remaining removal is done; an inventory of
every shipped file, with its reason to exist, is signed off by Jordan; size
metrics are recorded (shipped lines, dependencies, package size, repository
size); Stage 1's definition of done still holds.

- [ ] **3.1 The toolchain code Stage 2 made obsolete:** the C link drivers,
  the Emscripten and Python paths, the Binaryen and Asyncify glue, the
  toolchain downloads and their install code.
- [ ] **3.2 M2's rest:** the full emsdk and Python paths maintainer-only (may
  be moot after 3.1).
- [ ] **3.3 M3's rest:** `library/prebuilt` generated in CI, not committed
  (decided 2026-11-16; [REVIEW.md](docs/REVIEW.md#process) has the design);
  one Lasm.JS wire codec once the host files are bundled (two copies until
  then, JS_TO_LEAN.md §2). The `tar` target's nightly fuzzing is its exit
  check and is already running.
- [ ] **3.4 The inventory** of every shipped file and its reason to exist,
  for Jordan's sign-off, and the size metrics.

## Stage 4: property tests (verification emulation)

[TESTING_STRATEGY.md §4](docs/TESTING_STRATEGY.md#4-property-testing-convention-propositions-that-carry-over-to-proofs):
propositions that carry over to proofs.

**Definition of done:** every shipped JavaScript and C module has a Lean
model with a model differential in CI, or an exemption whose criteria Jordan
approved (2026-11-16: 19 modelled, 22 pending, 132 exempt of 173,
[verification/MODELS.md](verification/MODELS.md)); every library candidate is
a `Candidates.lean` definition with a `Tested by:` line; every proposition is
exercised by a property test or a fuzz oracle.

- [ ] **4.1 Exemption criteria** for Jordan's approval.
- [ ] **4.2 Module models** (the old M4) for every module not exempt.
- [ ] **4.3 Candidates everywhere,** and every proposition exercised.
- [ ] **4.4 Glue specified in Lean** where it can be proved
  ([JS_TO_LEAN.md](docs/proposals/JS_TO_LEAN.md); done so far: the UI patch
  encoding, the Lasm.JS value codec, the function-platform mapping).

## Stage 5: remaining Lean rewrites

**Definition of done:** written with Jordan before the stage starts.

- [ ] **5.1 Pure glue in Lean,** compiled by Lasm (the old M6;
  [M6_GLUE.md](docs/proposals/M6_GLUE.md)). Two slices are merged (#286,
  #294, #295); paused 2026-11-14. Decided here, not before: the performance
  budget, and the WASI reactor proposal (A55).
- [ ] **5.2 Toolchain validation of what remains** (the old M5). `wasm-ld`
  against its map and inputs is done (#285, `link-validation.yml`); the
  Binaryen draft (branch `m5-binaryen-draft`) is moot once Stage 2 removes
  Binaryen from the build.
- [ ] **5.3 The C runtime:** assess moving it into Lean.

## Maintenance

May interrupt any stage (Jordan, 2026-11-16).

- [ ] Lean 4.36: when 4.36.0 stable ships. The rc2 dry run is PR #287
  (held until stable); its runbook is
  [docs/LEAN_UPGRADE.md](docs/LEAN_UPGRADE.md) on that branch. The two
  StackOverflow differences compare the advice text, not Lean's exact output
  (Jordan, 2026-11-16).
- [ ] The example apps move to `@lasm/cli` 0.8.0.
- Outside bug reports are fixed as they come.
- Releases follow [docs/RELEASING.md](docs/RELEASING.md).

## Decisions for Jordan (only user-facing ones)

- [ ] (J) Issue #44 (lean-html's shared HTML model with Lasm.UI): on hold, by Jordan.
- [ ] (J) Where Lasm's educational content is published: the Lasm repo's
  `content/` directory as the source, the Millillion website as the place
  it's read (Claude's recommendation, 2026-11-02).
- [ ] (J) Deno: generate and keep `Lasm.JS.Deno` and the Deno targets
  (leaning yes; milestone 0.4).
- [ ] (J) The performance budget of Stage 2's backend.

## Jordan's checklist

His words, 2026-11-02, from issue #21. The API questions in it are inventoried
by milestone 0.1.

- [ ] (J) Hone the propositions of Lasm's own library: 30 in [library/Lasm/UI/Spec.lean](library/Lasm/UI/Spec.lean), [RPC/Spec.lean](library/Lasm/RPC/Spec.lean), [KV/Spec.lean](library/Lasm/KV/Spec.lean) and [Fetch/Spec.lean](library/Lasm/Fetch/Spec.lean) ([library/PROOFS.md](library/PROOFS.md)).
- [ ] (J) Hone the Lean code of every example, especially the propositions and the theorem structure: Conduit first (52 propositions in [Proofs/Spec.lean](examples/conduit/Proofs/Spec.lean)), then Ledger (31 propositions in [Proofs/Spec.lean](examples/ledger/Proofs/Spec.lean)).
- [ ] (J) Review the whole `lasm` CLI: its UX, and that it works.
- [ ] (J) Hone the libraries Lasm added: Lasm.UI, Lasm.JS (with the generated Lasm.JS.Web), Lasm.RPC, Lasm.KV.
- [ ] (J) Work out the whole front-end UI story.
- [ ] (J) Play with Lasm, front end to back end, and hone what comes up.
- [ ] (J) Hone the README, [TRUST.md](docs/proposals/TRUST.md) and every human-facing text, including [HOW_LASM_WORKS.md](docs/HOW_LASM_WORKS.md) and `llms.txt` (drafted 2026-11-06).
- [ ] (J) Storytelling, about 80% of the effort per issue #21: posts, videos, launch follow-ups.
- [ ] (J) GitHub Sponsors tiers and description (a manual edit; suggested text was given).
- [ ] (J) Manual testing.
- [ ] (J) Review Ledger's 31 propositions in [Proofs/Spec.lean](examples/ledger/Proofs/Spec.lean), Folio's 22, Porter's 28 and Tandem's 29 (each app's `Proofs/Spec.lean`).
- [ ] (J) Ledger's open API questions: Brotli on Workers (`encodeBody: "manual"`); a cross-request async lock that works on Workers; the CLI's `--target wasi` failure when `dist/` already holds another build.
- [ ] (J) Folio's API questions: a `Lasm.Markdown` library module from Folio's renderer (so Conduit can use it); consistent `--output` for the wasi, bun and deno targets; the name "Folio"; safe mode escaping raw HTML rather than dropping it.
- [ ] (J) Porter's API proposals: a shared Web Crypto module, since Conduit and Porter each hand-bind SHA-256, PBKDF2, random values, ECDSA, Ed25519 and JWK export; a documented way to read Workers environment variables; documentation of what `Lasm.UI` mount does with an element's existing children; Porter's `test/Axioms.lean` totality check shipped as a reusable Lasm tool.
- [ ] (J) Tandem's API proposals: a WebSocket upgrade hook for servers; a server-side WebSocket type shared by Node, Bun and Deno; Lasm's Bun entry passing `websocket` handlers to `Bun.serve`; exporting a Durable Object class from a Workers build; a selection-preserving text-area `value` in `Lasm.UI`; the name "Tandem".

## History

Finished work, in full, is in
[docs/history/ROADMAP_2026-11-16.md](docs/history/ROADMAP_2026-11-16.md) and
in the release notes ([docs/release/](docs/release/)). In short:

- **Language and launch phases** ([docs/PLAN.md](docs/PLAN.md)): language
  coverage on Node, JS/npm interop, the Node launch (0.1.0), the edge isolates
  and Bun/Deno (0.2.0), WASI, wasi-http/Spin, Fastly and browsers (0.3.0).
  Complete; Lean as a runtime library stays parked.
- **Releases** 0.3.6 to 0.8.0 (published 2026-11-14).
- **Five flagship apps:** Conduit, Ledger, Folio, Porter and Tandem, each on
  every platform it claims with its outside oracle, proofs and fuzzing.
- **Testing:** the strategy (2026-11-09), differential testing against
  upstream Lean, target equivalence, mutation testing above 80 % on every
  module, unit coverage at 98 %, fuzzing at every boundary with nightly and
  weekly campaigns, deterministic simulation of the apps, metamorphic tests of
  the tooling, fault injection, the error corpus, the flaky-test policy, the
  proposition lint, the public evidence page.
- **Bindings:** `Lasm.JS.Web` (WinterTC), the browser tier replacing
  `Lasm.Web`, `Lasm.JS.Node`'s first parts, `Deno.serve` and `Bun.serve`,
  `Lasm.Fastly` generated from witx, `Lasm.WASI.Http` from WIT.
- **Reduction:** M1 complete; M2 apart from the emsdk and Python paths; M3's
  `tar` removal (0 npm dependencies).

Where the retired structure went:

| Before | Now |
| --- | --- |
| Steps 1–2 (strategy, close the gaps) | Stage 1 |
| Step 3: M1, M2, M3 | Stage 3 (M1 done) |
| Step 4: M4, glue specified in Lean | Stage 4 |
| Step 5: M5 | 5.2 |
| Step 5: M6 | 5.1 |
| Step 5: M7 (direct backend) | Stage 2 |
| Binding tiers 1–3, host bindings, `Lasm.Fetch` removal | Stage 0 |
| "Now / Next / Later" | the stages, Maintenance, and History |
