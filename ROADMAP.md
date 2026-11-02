# Lasm roadmap

**This file is the single source of truth for what is planned, in progress and
done.**
- Claude updates it whenever work starts or finishes.
- Jordan decides what goes on it.
- Status: **agreed with Jordan, 2026-11-01.** It replaces NEXT_STEPS.md, ROBUSTNESS_PLAN.md and TESTING_PROGRAM.md.

Legend: `[ ]` not started, `[~]` in progress, `[x]` done. `(J)` means the item
is Jordan's to do or decide.

Details live in the linked docs. This file only says *what* and *in what order*.
- [issue #21](https://github.com/Millillion/lasm/issues/21) is Jordan's original plan. Each of its points is placed below.
- NEXT_STEPS.md is historical.

## Decisions waiting on Jordan
- [x] (J) Agree to this roadmap, and to keeping it as the single source of truth (2026-11-01).
- [x] (J) Testing strategy: Claude's recommendations adopted for now (2026-11-01; see [TESTING_STRATEGY.md §7](docs/proposals/TESTING_STRATEGY.md#7-decisions)). Open to revisiting.
- [ ] (J) Names for the platform evidence levels (L0–L3 for now).
- [ ] (J) Apply to OSS-Fuzz as maintainer, once the fuzzers exist (around December).
- [ ] (J) Whether "secure by default" becomes a fifth claim of the testing strategy.
- [ ] (J) `Lasm.Fetch`: keep it, narrow it, or remove it, compared with JS bindings. Deferred by Jordan.
- [ ] (J) Issue #27: remove dot segments from `Request.path` on every platform (an API change).
- [ ] (J) The next example apps: choose from [NEXT_EXAMPLE_APPS.md](docs/proposals/NEXT_EXAMPLE_APPS.md) (proposed: Ledger, Markdown site generator, OIDC provider, CRDT editor).
- [x] (J) Conduit's headline count: "N proved propositions (M theorems)", both checked by `npm run proofs` (Jordan, 2026-11-02).
- [x] (J) Conduit's two recorded gaps: fixed and proved (Jordan, 2026-11-02): an empty-text link shows its target (SPEC L6), and the delete and remove icons are buttons (SPEC L7).

## Jordan's own work (from issue #21)
- [ ] (J) Hone the README and every human-facing text.
- [ ] (J) Review the public APIs: the Lean libraries and the CLI.
- [ ] (J) Review Conduit's 52 propositions in [Proofs/Spec.lean](examples/conduit/Proofs/Spec.lean).
- [ ] (J) Hone [TRUST.md](docs/proposals/TRUST.md): what Lean, Lasm and the toolchain guarantee.
- [ ] (J) Storytelling, about 80% of the effort per issue #21: posts, videos, launch follow-ups.
- [ ] (J) GitHub Sponsors tiers and description (a manual edit; suggested text was given).
- [ ] (J) Manual testing.
- [ ] (J) Hone Ledger's 31 propositions in [Proofs/Spec.lean](examples/ledger/Proofs/Spec.lean).
- [ ] (J) Ledger's open API questions: `Lasm.Fetch` Brotli on Workers (`encodeBody: "manual"`); a cross-request async lock that works on Workers; the CLI's `--target wasi` failure when `dist/` already holds another build.
- [ ] (J) Review Folio's 21 propositions in [Proofs/Spec.lean](examples/folio/Proofs/Spec.lean).

## Now (November 2026)

### Releases
- [x] 0.3.6: two Vercel Edge fixes.
- [x] 0.3.7: version bumped on main (PR #40), **not published**. Its release check failed on a timing-dependent stress fixture (fixed in PR #42), and the fixed commit doesn't change the version, so it can't release (as with 0.3.3).
- [ ] 0.3.8 (in progress, PR "Release 0.3.8"): everything in 0.3.7 (the WASI dev-build fix #34, the synchronous-callback hang fix #37), plus #26 (edge environment variables) and the #30 docs from PR #36.
- [ ] Move the Node pins to 26.13.0 and 24.22.2 (deferred in 0.3.6 and 0.3.7).
- [ ] Investigate: in one js-callbacks stress run the callback printed at 345 ms, but the main thread read its flag as unset at ≥ 400 ms (a stalled thread, or a visibility bug?).

### Testing ([TESTING.md](docs/TESTING.md), [TESTING_STRATEGY.md](docs/proposals/TESTING_STRATEGY.md))
- [x] Differential testing against upstream Lean: generator, shrinker, PR and nightly CI.
- [x] Target equivalence on Node, Deno, Bun, wasi-http and Workers.
- [x] Coverage baseline (67.5% of lines), with a CI gate on drops.
- [x] Test-quality audit (13 tests that only read files as text).
- [~] Three more oracles for differential testing: Lean's interpreter, `-O0` vs `-O2`, and four Wasm engines.
- [~] Fix #26 (edge environment variables) and #30 (two docs that overstate limits).
- [x] Host bridge: a Lean model checked over every interleaving (8 reintroduced bugs, including the 0.3.0 hang, all caught), seeded schedule fuzzing, and checking traces from the real code against the model (#37).
- [ ] Host bridge: awaiting an async operation inside a synchronous JS callback still hangs. Make it fail clearly, as `docs/JS_BINDINGS.md` says it does, or support it.
- [ ] Host bridge: model host calls made by tasks proxied to the synchronous-callback thread.
- [ ] Replace the remaining tests that only read files as text, and port or retire the 29 Lean 4.32 test files.
- [ ] Browser and Bun targets in differential testing.
- [x] Mutation testing (Stryker) on the critical JavaScript, with published scores (moved up from Next): seven modules, nightly and PR CI, host bridge 56→96 %, UI applier 55→93 %, build service 52→92 %, edge glue 15→79 %, notices 63→75 % (#53; bugs #49, #51).
- [ ] Mutation scores to 80 % for the link driver (54 %) and the target links (6 %: unit tests of the link plans with a stand-in toolchain), notices and edge glue; then raise the targets.
- [ ] Flaky tests: a nightly report of retried or cancelled jobs, and the policy (quarantine at once, fix or delete within a week).
- [ ] Platform evidence levels L0–L3, generated from CI results, in the README's platform table.

### Conduit
- [x] Specification map, 50 reviewable propositions, frontend and layout proofs, five independent proof checkers.
- [x] Conduit on all 18 platforms, each tested in CI with its own local tooling and both official RealWorld suites (PRs #24, #29, #39).
- [ ] Conduit: one end-to-end test failed once on the Lambda container image under SAM (73/74), and couldn't be reproduced.

### Ledger ([examples/ledger](examples/ledger), the second flagship app)
- [x] 1. Pure core in TigerBeetle's data model and result codes (0.17.9 subset), the model, and the proofs: 27 propositions (31 with the page) in [Proofs/Spec.lean](examples/ledger/Proofs/Spec.lean), a requirements map ([SPEC.md](examples/ledger/SPEC.md)), `proofs:paranoid`.
- [x] 2. Node server (`node:sqlite`), the differential test against a pinned TigerBeetle release, and the Jepsen-style bank workload.
- [x] 3. Bun, Deno, Workers (D1), Docker, the Node function platforms (Lambda .zip and image, Vercel, Netlify, Azure, GCF), and the WASI auditor `ledger verify journal.ndjson` on wasmtime, wasmer and `node:wasi`. No Fastly build (its KV is eventually consistent).
- [x] 4. The `Lasm.UI` page (accounts and journal, a ledger filter), four propositions about it, and its end-to-end tests on Chromium, Firefox and WebKit.
- [ ] (J) Review and hone the 31 propositions in [Proofs/Spec.lean](examples/ledger/Proofs/Spec.lean).

### Folio ([examples/folio](examples/folio), the third flagship app: a Markdown site generator)
- [x] 1. Pure core: a CommonMark 0.31.2 renderer (a port of commonmark.js) and a site generator (front matter, layouts, the page index, an RSS feed); all 652 specification examples pass, a differential test against commonmark.js; 21 propositions in [Proofs/Spec.lean](examples/folio/Proofs/Spec.lean) (escaping: no Markdown can inject HTML unless raw HTML is enabled; totality; the output tree; slugs; index links), `proofs:paranoid`.
- [x] 2. The `folio` command on Node (`folio build`, `folio render`) and on WASI (wasmtime, wasmer, `node:wasi`), each checked on an example site with a draft and a hostile page; every engine writes the same bytes as Node.
- [ ] 3. A live preview with `Lasm.UI` in the browser, on Bun and Deno, with Playwright tests.
- [ ] 4. Fuzzing: a nightly differential job against commonmark.js, and a crash and timeout fuzzer for pathological input (deep nesting, the CommonMark pathological tests).

## Next (December 2026 to January 2027)
- [ ] Nightly fuzzing at every input boundary: HTTP, RPC, the patch decoder, the parsers, the CLI.
- [ ] Deterministic simulation testing of the example apps: simulated clock, network and storage, with faults.
- [ ] Target equivalence for Conduit's RealWorld traffic, with token and timestamp normalization.
- [ ] Consolidate the 63 CI workflows into PR, nightly, weekly and release tiers.
- [ ] Example app 2, once Jordan has chosen.
- [ ] Organize the proofs of Lasm's own libraries (Lasm.UI, RPC, KV) like Conduit's Spec.lean, for human review (issue #21).
- [ ] Lean 4.36: resume when 4.36.0 stable ships, around mid-November. It becomes Lasm 0.4.0.

## Later (first half of 2027)
- [ ] Example apps 3 to 5.
- [ ] Continuous fuzzing on OSS-Fuzz, after Jordan applies.
- [ ] Move JavaScript glue code into Lean where it can be proved, starting with what mutation testing shows is riskiest (issue #21).
- [ ] Translation validation for selected Binaryen passes. Assess verifying or replacing parts of the toolchain: Clang, LLVM, Emscripten, Binaryen (issue #21).
- [ ] Simplify the codebase toward its irreducible state, once the tests are strong enough to allow it (issue #21).
- [ ] Public test-evidence page on the website, generated by CI.
- [ ] An organized `llms.txt`, and a "How Lasm works" document (issue #21; Jordan hones the text).
