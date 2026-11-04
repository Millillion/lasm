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

## Who decides what (2026-11-02)
- **Claude** owns testing, robustness, CI and platforms outright. Claude decides and logs each decision in [DECISIONS.md](docs/DECISIONS.md), and reports it; nothing here waits on Jordan.
- **Claude** also chooses, builds and tests the next example apps.
- **Jordan** owns everything a user touches that Lasm created: syntax, APIs, shapes, seams, the CLI, the examples' code and propositions, and all human-facing text.
- Public API changes that come out of testing are proposals for Jordan, unless he has already approved them (#27 was approved on 2026-11-02).

## Decisions for Jordan (only user-facing ones)
- [x] (J) Agree to this roadmap, and to keeping it as the single source of truth (2026-11-01).
- [x] (J) Issue #27: resolve dot segments in `Request.path` on every platform, as browsers do (approved 2026-11-02; ships in 0.3.9).
- [x] (J) OSS-Fuzz: not doing it (2026-11-02). Fuzzing is built in this repo and runs on our own CI.
- [ ] (J) `Lasm.Fetch`: keep it, narrow it, or remove it, compared with JS bindings. Deferred by Jordan.
- [ ] (J) Issue #44 (lean-html's shared HTML model with Lasm.UI): on hold, by Jordan.
- [x] (J) Conduit's headline count: "50 proved propositions (294 theorems)" (2026-11-02).
- [x] (J) Conduit's two recorded gaps: fixed and proved (2026-11-02): an empty-text link shows its target (SPEC L6), and the delete and remove icons are buttons (SPEC L7).
- [ ] (J) Where Lasm's educational content is published: the Lasm repo's `content/` directory as the source, the Millillion website as the place it's read (Claude's recommendation, 2026-11-02).

Rule (Jordan, 2026-11-02): Claude never signs up for anything, and never creates a new repo, without Jordan's explicit permission.

Decided by Claude on 2026-11-02, under the new ownership (details in DECISIONS.md):
- Evidence levels keep the names L0–L3, each with a one-line meaning. Jordan may reword them in the README.
- "Untrusted input can't crash or subvert a Lasm program" becomes the fifth claim of the testing strategy.
- Claim 4, dependable tooling, gets the same priority as claim 1.
- The exit bar for the robustness phase is in [TESTING_STRATEGY.md §8](docs/proposals/TESTING_STRATEGY.md#8-exit-bar-for-the-robustness-phase).
- The next example apps: **Ledger** (landed 2026-11-02), then the **Markdown site generator** (building now), following [NEXT_EXAMPLE_APPS.md](docs/proposals/NEXT_EXAMPLE_APPS.md)'s build plan. Ledger follows TigerBeetle's data model and result codes, so TigerBeetle can serve as its differential oracle.

## Jordan's checklist (his words, 2026-11-02; from issue #21)
- [ ] (J) Hone the Lean code of every example, especially the propositions and the theorem structure: Conduit first (52 propositions in [Proofs/Spec.lean](examples/conduit/Proofs/Spec.lean)), then Ledger (31 propositions in [Proofs/Spec.lean](examples/ledger/Proofs/Spec.lean)).
- [ ] (J) Review the whole `lasm` CLI: its UX, and that it works.
- [ ] (J) Hone the libraries Lasm added: Lasm.Fetch, Lasm.UI, Lasm.JS, Lasm.RPC, Lasm.Web, Lasm.KV.
- [ ] (J) Work out the whole front-end UI story.
- [ ] (J) Play with Lasm, front end to back end, and hone what comes up.
- [ ] (J) Hone the README, [TRUST.md](docs/proposals/TRUST.md) and every human-facing text.
- [ ] (J) Storytelling, about 80% of the effort per issue #21: posts, videos, launch follow-ups.
- [ ] (J) GitHub Sponsors tiers and description (a manual edit; suggested text was given).
- [ ] (J) Manual testing.
- [ ] (J) Hone Ledger's 31 propositions in [Proofs/Spec.lean](examples/ledger/Proofs/Spec.lean).
- [ ] (J) Ledger's open API questions: `Lasm.Fetch` Brotli on Workers (`encodeBody: "manual"`); a cross-request async lock that works on Workers; the CLI's `--target wasi` failure when `dist/` already holds another build.
- [ ] (J) Review Folio's 22 propositions in [Proofs/Spec.lean](examples/folio/Proofs/Spec.lean).
- [ ] (J) Folio's API questions: a `Lasm.Markdown` library module from Folio's renderer (so Conduit can use it); consistent `--output` for the wasi, bun and deno targets; the name "Folio"; safe mode escaping raw HTML rather than dropping it.
- [ ] (J) Review Porter's 27 propositions in [Proofs/Spec.lean](examples/porter/Proofs/Spec.lean).
- [ ] (J) Porter's API proposals: a shared Web Crypto module (e.g. `Lasm.Web.Crypto`), since Conduit and Porter each hand-bind SHA-256, PBKDF2, random values, ECDSA, Ed25519 and JWK export; a documented way to read Workers environment variables; documentation of what `Lasm.UI` mount does with an element's existing children; Porter's `test/Axioms.lean` totality check (no `partial`, `unsafe`, `opaque` or panicking definition reachable) shipped as a reusable Lasm tool.
- [ ] (J) Review the propositions: Tandem's 29 propositions (the CRDT, the edits, the wire format, the sync server, the replica) in [Proofs/Spec.lean](examples/tandem/Proofs/Spec.lean).
- [ ] (J) Tandem's API proposals: an upgrade (WebSocket) hook in `Lasm.Fetch.serve`, so apps need not run their own `node:http` server; a server-side WebSocket type in `Lasm.Web` shared by Node, Bun and Deno; Lasm's Bun entry passing `websocket` handlers to `Bun.serve` (Tandem uses `server.reload`); exporting a Durable Object class from a Workers build, so Workers can hold WebSockets; a selection-preserving text-area `value` in `Lasm.UI`; the name "Tandem".

## Now (November 2026)

- [x] Conduit: requests isolated on node:sqlite and bun:sqlite (issue #59; reads saw other requests' writes half done).

### Releases
- [x] 0.3.6: two Vercel Edge fixes.
- [x] 0.3.7: version bumped on main (PR #40), **not published**. Its release check failed on a timing-dependent stress fixture (fixed in PR #42), and the fixed commit doesn't change the version, so it can't release (as with 0.3.3).
- [x] 0.3.8 (published 2026-11-02): everything in 0.3.7 (the WASI dev-build fix #34, and the fix for a hang when a synchronous JS callback makes the program's first async runtime request, #37), plus #26 and the #30 docs (PR #36).
- [x] 0.3.9 (published 2026-11-03, PR #81): #27, browser-style dot-segment resolution in `Request.path` on every platform, with a proof that `segments` never contains `.` or `..`; also #76 (a `://` in the query), #66 (Node recursion depth), #80 and #82 (cookies and redirects on function platforms), #49 (dev build service `unref`) and #51 (Lasm.JS errors wrapped twice).
- [ ] Next release: retry downloads cut short before Content-Length arrives (PR #91), the macOS C-tier fix (#73, PR #85), the editor fix (#72, PR #86), and Lasm.UI handlers deciding `preventDefault`/`stopPropagation` per event, a breaking change (#71; [next-notes.md](docs/release/next-notes.md)).
- [x] Move the Node pins to 26.13.0 and 24.22.2 (deferred in 0.3.6 and 0.3.7): every workflow, container image, acceptance pin and doc version list; the deferral is removed. Both are still the newest 26 and 24 releases (2026-11-03).
- [x] Investigate: in one js-callbacks stress run the callback printed at 345 ms, but the main thread read its flag as unset at ≥ 400 ms: a stalled thread, not a visibility bug (the flag is a multi-threaded `IO.Ref`, accessed with sequentially consistent atomics; the printed time precedes a host call the thread waits for); the polling fixture already removed the timing assumption ([DECISIONS.md](docs/DECISIONS.md)).

### Testing ([TESTING.md](docs/TESTING.md), [TESTING_STRATEGY.md](docs/proposals/TESTING_STRATEGY.md))
- [x] Differential testing against upstream Lean: generator, shrinker, PR and nightly CI.
- [x] Target equivalence on Node, Deno, Bun, wasi-http and Workers.
- [x] Coverage baseline (67.5% of lines), with a CI gate on drops.
- [x] Test-quality audit (13 tests that only read files as text).
- [x] Three more oracles for differential testing: Lean's interpreter, `-O0` vs `-O2`, and three JS engines (PR #36).
- [x] Fix #26 (edge environment variables) and #30 (two docs that overstate limits) (PR #36).
- [x] Host bridge: a Lean model checked over every interleaving (8 reintroduced bugs, including the 0.3.0 hang, all caught), seeded schedule fuzzing, and checking traces from the real code against the model (#37).
- [x] Replace the remaining tests that only read files as text, and port or retire the 29 Lean 4.32 test files: the release-checks verdict is a tested module, the edge notices are read from a real packager run, workflow lints are cross-references (#110); the 29 files are ported to 31 host-fixture cases against Lean 4.35.0 in `differential.yml` or retired, and the port found a bug: no Lean thread or child process could start in a cwd without search permission (fixed) (#111).
- [x] Host bridge: awaiting a JavaScript promise inside a synchronous JS callback fails at once with the reason (it hung); in the model (its mutant is caught), with regressions on Node (unit, js-callbacks part 5) and the edge profile (already clear there). Support is impossible (a promise settles only after the callback returns). Remaining: waiting there for a Lean task that uses the host (including `Async.block`) or for a timer or socket started in the callback still never finishes (needs a runtime hook; options in PR #101).
- [x] Host bridge: model host calls made by tasks proxied to the synchronous-callback thread. The model found a hang (the next-depth slot was never served inline); fixed, in the model and the trace checking (`seq1`/`ready1`), with a regression test.
- [ ] Browser and Bun targets in differential testing.
- [x] Mutation testing (Stryker) on the critical JavaScript, with published scores (moved up from Next): seven modules, nightly and PR CI, host bridge 56→96 %, UI applier 55→93 %, build service 52→92 %, edge glue 15→79 %, notices 63→75 % (#53; bugs #49, #51).
- [x] Mutation scores to 80 % for every module: link driver 54→93 %, target links 6→87 % (unit tests of the link plans with a stand-in toolchain), edge glue 79→97 %, notices 75→92 %, build service 92→95 % (fault injection into output delivery); no new bugs found.
- [ ] Raise the mutation targets above 80 % now that every module passes them.
- [x] Platform evidence levels L0–L3, generated from CI results, in the README's platform table: `scripts/evidence/levels.mjs` and `platforms.json`, refreshed nightly by `evidence-levels.yml` (a PR when a level moves). First result: every server platform L2, the browser L1 (no browser differential yet); Node is one requirement short of L3 (a Porter nightly fuzz failure, 2026-11-03). Only Node has fuzzing and simulation in CI ([TESTING.md](docs/TESTING.md#evidence-levels)).
- [x] Flaky tests: a nightly report of retried or cancelled jobs, and the policy (quarantine at once, fix or delete within a week): `flaky.yml` (07:53 UTC) reports re-runs, jobs that passed only on retry with the tests that failed first, timed-out and unsuperseded cancelled jobs, as an artifact and in the one issue labelled `flaky`; `test/quarantine.json` is skipped with a notice by the unit suite and `npm test`, and an entry older than 7 days fails the suite ([TESTING.md](docs/TESTING.md#flaky-tests)).
- [~] Claim 4, dependable tooling: metamorphic tests of `lasm dev` (an incremental build equals a clean one; the same input gives the same bytes; a rename changes nothing else).
- [~] Claim 4: fault injection in the installer and the build (a dropped network, a full disk, a killed process, a read-only cache).
- [~] Claim 4: every error a user can trigger prints a clear message, never a stack trace (an error corpus run against the published CLI).
- [x] Claim 4, dependable tooling: metamorphic tests of `lasm build` and `lasm dev` (`scripts/tooling/metamorphic.mjs`, nightly in `tooling.yml`): node, wasi, workers and browser, release and dev; determinism across directories and a cold tool cache, incremental = clean, rename of an unimported module or unused definition, touch, and `lasm dev`'s rebuilt state. Found: dev edge and browser glue carried absolute work-directory and install paths (two clean dev builds differed), and every browser, edge and WASI rebuild rewrote its whole output even when nothing changed; both fixed (#103). Dev incremental builds are behaviour-equal, not byte-equal, by design (seeded initialization plan).
- [x] Claim 4: fault injection in the installer and the build (`scripts/tooling/faults.mjs`, nightly): builds killed at each of 15 stages, killed installs (npm and HTTPS) and a killed `npm install`, downloads cut by a proxy, full disks on loop file systems (tool cache and project), read-only caches, corrupted tool archives, derived tools, shared objects and project caches. 43 of 43 scenarios end in success with a clean build's bytes or a clear error then a clean rerun; found a pathless `ENOSPC … write` message (fixed, #103).
- [x] Claim 4: every error a user can trigger prints a clear message, never a stack trace: a 60-case corpus (`scripts/tooling/error-corpus.mjs`) against the packed candidate and `@lasm/cli@latest` on every PR (`tooling.yml`). Found and fixed: raw Node file-system errors, a lock error with no path, `lasm init` onto a file, an unnamed file `--output`, and a misleading message for a program without `main` (#100).
- [x] Bun gives no response to an encoded slash, `/hello/a%2Fb` (found by target equivalence; investigate): neither Bun nor Lasm. The harness's first run (2026-10-31) sent `Connection: close` through Node's pooled keep-alive agent and reused the socket Bun had closed; fixed that day, and Bun has answered `Hello, a/b` in every run since. A new `keepAlive` corpus case checks the encoded slash over one persistent connection on every target.

### Example apps
- [x] Conduit: fix the two recorded gaps (empty Markdown link labels; keyboard access to the delete and remove icons), and change the headline to "50 proved propositions (294 theorems)" (fixed and proved 2026-11-02, SPEC L6 and L7).
- [x] Specification map, 50 reviewable propositions, frontend and layout proofs, five independent proof checkers.
- [x] Conduit on all 18 platforms, each tested in CI with its own local tooling and both official RealWorld suites (PRs #24, #29, #39).
- [x] Ledger (example app 2), following TigerBeetle's model: proofs of conservation, idempotency and two-phase transfers; TigerBeetle as a differential oracle; a bank workload; then every platform with a strongly consistent store.
- [x] Conduit: one end-to-end test failed once on the Lambda container image under SAM (73/74), and couldn't be reproduced. Result: a Lasm.UI bug, not SAM. A link clicked while an HTTP response's frame was still waiting changed the address one animation frame before the page (run 41236311299, `articles.spec.ts` "should view article from home feed", strict `h1` matched the feed's 4). `lasm:ui-dom` now renders a waiting frame with discrete input; regression test in test/ui-dom-applier.test.mjs.

### Ledger ([examples/ledger](examples/ledger), the second flagship app)
- [x] 1. Pure core in TigerBeetle's data model and result codes (0.17.9 subset), the model, and the proofs: 27 propositions (31 with the page) in [Proofs/Spec.lean](examples/ledger/Proofs/Spec.lean), a requirements map ([SPEC.md](examples/ledger/SPEC.md)), `proofs:paranoid`.
- [x] 2. Node server (`node:sqlite`), the differential test against a pinned TigerBeetle release, and the Jepsen-style bank workload.
- [x] 3. Bun, Deno, Workers (D1), Docker, the Node function platforms (Lambda .zip and image, Vercel, Netlify, Azure, GCF), and the WASI auditor `ledger verify journal.ndjson` on wasmtime, wasmer and `node:wasi`. No Fastly build (its KV is eventually consistent).
- [x] 4. The `Lasm.UI` page (accounts and journal, a ledger filter), four propositions about it, and its end-to-end tests on Chromium, Firefox and WebKit.
- [ ] (J) Review and hone the 31 propositions in [Proofs/Spec.lean](examples/ledger/Proofs/Spec.lean).

### Folio ([examples/folio](examples/folio), the third flagship app: a Markdown site generator)
- [x] 1. Pure core: a CommonMark 0.31.2 renderer (a port of commonmark.js) and a site generator (front matter, layouts, the page index, an RSS feed); all 652 specification examples pass, a differential test against commonmark.js; 21 propositions in [Proofs/Spec.lean](examples/folio/Proofs/Spec.lean) (escaping: no Markdown can inject HTML unless raw HTML is enabled; totality; the output tree; slugs; index links), `proofs:paranoid`.
- [x] 2. The `folio` command on Node (`folio build`, `folio render`) and on WASI (wasmtime, wasmer, `node:wasi`), each checked on an example site with a draft and a hostile page; every engine writes the same bytes as Node.
- [x] 3. The live preview (`Lasm.UI`, the renderer running in the page), served on Node, Bun and Deno, with Playwright tests (hostile Markdown runs nothing) and `preview_safe` (22 propositions in all).
- [x] 4. Fuzzing: cmark's pathological inputs and a crash and timeout fuzzer on every PR, a nightly job (40 minutes of fuzzing, twenty differential seeds against commonmark.js). Found and fixed a stack overflow on WebAssembly and seven quadratic cases.

### Porter ([examples/porter](examples/porter), the fourth flagship app: an OpenID Connect provider)
- [x] 1. Pure core (authorization code flow with PKCE S256, discovery, JWKS, token, userinfo, ES256 and EdDSA ID tokens, refresh-token rotation with reuse detection, sessions, consent, logout), the model, and the proofs: 26 propositions in [Proofs/Spec.lean](examples/porter/Proofs/Spec.lean) (codes redeemed at most once and bound to client, redirect URI and verifier; exact redirect URIs; reuse revokes the family; claims match session and client; errors reveal nothing; totality), a requirements map ([SPEC.md](examples/porter/SPEC.md)), `proofs:paranoid`.
- [x] 2. Node server (Web Crypto, `node:sqlite`), openid-client 6.8.8, oauth4webapi 3.8.8 and jose 6.2.12 as oracles (13 checks), the adversarial suite (31 attacks from RFC 6749/6819/9700 and OpenID Connect Core), the endpoint fuzzer (three minutes per PR). Found #76 (`Lasm.Fetch` paths with `://` in the query).
- [x] 3. Bun, Deno, Workers (D1), Docker, the Node function platforms (Lambda .zip and image, Vercel, Netlify, Azure, GCF), each with the oracle tests and the adversarial suite in CI. No Fastly or WASI (no Web Crypto).
- [x] 4. The `Lasm.UI` sign-in and consent pages (a plain-form fallback without JavaScript) with Playwright tests on Chromium, Firefox and WebKit, and a nightly job (40 minutes of fuzzing).
- [x] 5. On `@lasm/cli` 0.3.9, without the workarounds for #76 (Porter's own path segments), #80 (joining `Cookie` headers, one `Set-Cookie` per reply) and #82 (a text body on redirects).
- [x] 6. Bound `state` (2048 bytes; a longer one is a 400 page): the nightly fuzzer's `Header overflow` (run 41634567003), a ~16 KB `state` reflected into an error redirect's `Location`. New proposition `redirect_state_bounded`; the fuzzer replays a regression corpus (`test/fuzz-corpus/`) and flags any `Location` over 8 KiB. Merged 2026-11-03 (PR #105); the 40-minute nightly fuzzer passed on the branch.
- [ ] (J) Review the 27 propositions in [Proofs/Spec.lean](examples/porter/Proofs/Spec.lean).

### Tandem ([examples/tandem](examples/tandem), the fifth flagship app: a collaborative text editor on a CRDT)
- [x] 1. Pure core: Fugue's sequence CRDT with the state as a canonical set of operations, local edits (insertion, deletion, typed runs, `edit` for a text area's change), the wire format and the sync server's logic, and the proofs: 25 propositions in [Proofs/Spec.lean](examples/tandem/Proofs/Spec.lean) (strong eventual consistency, commutativity, idempotence, intent preservation, non-interleaving of concurrent typing, the explicit-stack traversal equals the paper's, the server never loses an acknowledged operation, bounded total parsers), a requirements map ([SPEC.md](examples/tandem/SPEC.md)), `proofs:paranoid`.
- [x] 2. Node sync server (HTTP sync, WebSockets through `ws`, long-poll, `node:sqlite`), the differential test against Yjs 13.6.33 (partitions, reordering, duplication, out-of-causal-order delivery; Yjs interleaves in about 40 % of two-device backward sessions, Tandem in none), the live simulation (replicas in Lean over an unreliable network, the server SIGKILLed mid-run), and the protocol fuzzer (three minutes per PR). 29 propositions in all (bulk application, the replica's sync).
- [x] 3. Bun (WebSockets through `server.reload`), Deno (`Deno.upgradeWebSocket`), Workers (D1, long-poll), Docker (read-only, 512 MB), each with the protocol tests, the live simulation and a minute of fuzzing in CI. No function platforms, Fastly or WASI (no shared store or long-lived connections).
- [ ] Bun and Deno: an `Async` loop of a few thousand awaited host calls overflows the JavaScript stack, which Node does not (#90, found by Tandem; worked around there).
- [x] 4. The `Lasm.UI` editor (offline, saved in `localStorage`, merges on reconnect, the caret kept beside its text), Playwright tests on Chromium, Firefox and WebKit, and Chromium against Workers (long-poll): two browsers editing concurrently, offline then reconnect, a closed page while offline; and a nightly job (40 minutes of fuzzing, 20,000 differential histories, ten simulation rounds).
- [ ] (J) Review the propositions in [Proofs/Spec.lean](examples/tandem/Proofs/Spec.lean).

## Next (December 2026 to January 2027)
- [ ] Nightly fuzzing at every input boundary: HTTP, RPC, the patch decoder, the parsers, the CLI.
- [ ] Deterministic simulation testing of the example apps: simulated clock, network and storage, with faults.
- [ ] Target equivalence for Conduit's RealWorld traffic, with token and timestamp normalization.
- [ ] Consolidate the 63 CI workflows into PR, nightly, weekly and release tiers.
- [ ] Example app 3: the Markdown site generator, held to CommonMark's 652 examples, on WASI, Fastly, the edge and the browser.
- [ ] Organize the proofs of Lasm's own libraries (Lasm.UI, RPC, KV) like Conduit's Spec.lean, for human review (issue #21).
- [ ] Lean 4.36: resume when 4.36.0 stable ships, around mid-November. It becomes Lasm 0.4.0.

## Later (first half of 2027)
- [~] Example apps 4 and 5: the identity provider (Porter, done) and the collaborative editor (Tandem, in progress).
- [ ] Continuous fuzzing in our own CI: nightly and weekly campaigns on every boundary, corpora and crashes kept in the repo, coverage-guided (libFuzzer for the C host, Jazzer.js or fast-check for JavaScript, Plausible for Lean).
- [ ] Move JavaScript glue code into Lean where it can be proved, starting with what mutation testing shows is riskiest (issue #21).
- [ ] Translation validation for selected Binaryen passes. Assess verifying or replacing parts of the toolchain: Clang, LLVM, Emscripten, Binaryen (issue #21).
- [ ] Simplify the codebase toward its irreducible state, once the tests are strong enough to allow it (issue #21).
- [ ] Public test-evidence page on the website, generated by CI.
- [ ] An organized `llms.txt`, and a "How Lasm works" document (issue #21; Jordan hones the text).
