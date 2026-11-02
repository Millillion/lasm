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
- [ ] (J) Conduit's headline count: "294 theorems" (current) or "50 proved propositions".
- [ ] (J) Conduit's two recorded gaps: empty Markdown link labels, and the delete and remove icons that aren't reachable by keyboard. Fix them? Both change what pages show.

## Jordan's own work (from issue #21)
- [ ] (J) Hone the README and every human-facing text.
- [ ] (J) Review the public APIs: the Lean libraries and the CLI.
- [ ] (J) Review Conduit's 50 propositions in [Proofs/Spec.lean](examples/conduit/Proofs/Spec.lean).
- [ ] (J) Hone [TRUST.md](docs/proposals/TRUST.md): what Lean, Lasm and the toolchain guarantee.
- [ ] (J) Storytelling, about 80% of the effort per issue #21: posts, videos, launch follow-ups.
- [ ] (J) GitHub Sponsors tiers and description (a manual edit; suggested text was given).
- [ ] (J) Manual testing.

## Now (November 2026)

### Releases
- [x] 0.3.6: two Vercel Edge fixes.
- [x] 0.3.7: version bumped on main (PR #40), **not published**. Its release check failed on a timing-dependent stress fixture (fixed in PR #42), and the fixed commit doesn't change the version, so it can't release (as with 0.3.3).
- [ ] 0.3.8, first thing Monday: everything in 0.3.7 (the WASI dev-build fix #34, and the fix for a hang when a synchronous JS callback makes the program's first async runtime request, #37), plus #26 if it's ready.
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
- [ ] Mutation testing (Stryker) on the critical JavaScript, with published scores (moved up from Next).
- [ ] Flaky tests: a nightly report of retried or cancelled jobs, and the policy (quarantine at once, fix or delete within a week).
- [ ] Platform evidence levels L0–L3, generated from CI results, in the README's platform table.

### Conduit
- [x] Specification map, 50 reviewable propositions, frontend and layout proofs, five independent proof checkers.
- [x] Conduit on all 18 platforms, each tested in CI with its own local tooling and both official RealWorld suites (PRs #24, #29, #39).
- [ ] Conduit: one end-to-end test failed once on the Lambda container image under SAM (73/74), and couldn't be reproduced.

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
