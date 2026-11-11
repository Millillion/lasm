# CI tiers

Status: in place since 2026-11-07 (#142: shared setup; #144: tiers).

Lasm's CI is 85 workflow files in `.github/workflows/`. This page says
which tier each check belongs to, why it is there, and how the tiers fit together.
Every check that ran before the tiers were set up still runs in at least one
tier, and nothing that gates a release was removed. The test layers themselves
are described in [TESTING.md](TESTING.md); releasing is described in
[RELEASING.md](RELEASING.md).

The constraint behind the design is runner capacity. The repository runs on
GitHub's free standard runners, which allow 20 concurrent jobs, of which only 5
can be macOS. Before the tiers, every pull request ran about 30 jobs, six of them
on macOS, whatever it changed. A docs-only pull request ran 22 jobs, four of
them on macOS. A job waiting for a macOS runner held its whole workflow open
for an hour or more.

## The four tiers

| Tier | When | What runs | Budget |
| --- | --- | --- | --- |
| **PR** | every pull request; the same workflows again on the push to `main` (except the unit suite, which runs nightly on `main`) | Linux-first checks that must pass before merge, filtered by path. The unit suite; differential testing (regressions, three seeded program pairs and two fixed-seed feature programs, docs/TESTING.md#differential-fuzzing), host fixtures, target equivalence, Async depth and Windows recursion depth; boundary-fuzzing corpus replay; the tooling error corpus; installer faults on Linux and Windows; the example apps whose files changed; bridge verification, mutation, content, evidence and flaky-report checks when their files change; `release-checks` (`detect` only, unless the version changes). No macOS job unless the change touches macOS-specific code. | about 20 minutes of wall clock; no macOS runner for a typical change |
| **Nightly** | 01:07 to 09:17 UTC, on `main` | Everything the PR tier leaves out, plus campaigns. `ci-nightly.yml` runs the release suites, which until now ran only for a release: the unit suite, browser (with WebKit on macOS), edge and Bun/Deno on five platforms, WASI/Fastly, Lasm.UI, fullstack, the dev loop and the Lasm.JS stress test. The workflows' own schedules add: differential 60-minute campaigns (release and dev profiles, a feature program per seed) and the macOS jobs (recursion depth on macOS, the macOS C tier on three macOS runners); 10-minute fuzzing per target; tooling metamorphic builds and fault injection; mutation on every module; host-bridge schedule fuzzing on four platforms; example-app DST with random seeds; the Folio, Porter and Tandem campaigns; cold installation confidence; the upstream suite and ecosystem (`nightly.yml`); content sources; published Bun/Deno; evidence levels; the test-evidence page; the flaky report. | about 2 hours, at night |
| **Weekly** | Saturday 12:07 UTC (`ci-weekly.yml`); Saturday 06:41 UTC (`fuzz.yml`); Monday 06:17 UTC (`image-pins.yml`) | Long campaigns: a 100-minute differential campaign in each profile (core, file-system and feature programs from fresh seeds), the Lasm.JS soak (200 runs per program on four platforms), 60 minutes of fuzzing per target, and the image re-pin. | about 6 runner-hours |
| **Release** | every pull request and push to `main` whose root `version` changes (`release-checks.yml`) | Unchanged: the candidate build and five-platform installed acceptance (with installer faults, templates, js-interop, platform support and benchmarks), the npm loopback rehearsal, browser, edge, WASI, UI, fullstack, unit, dev loop and Lasm.JS stress. `release.yml` publishes only after a full `release-checks` run on the push to `main`. After publishing: `published-templates.yml` and `bun-deno-published.yml`. | as before |

**On demand.** About 35 workflows run only by `workflow_dispatch`: maintainer
tools (Lean tiers, link toolchain, library prebuilt, runtime builds), candidate
rechecks, and the native diagnosis controls kept from earlier investigations.
They are listed in the inventory below. None of them ran on a schedule or a
pull request before, so none of them is a check that was dropped.

### What moved out of the PR tier, and why that is safe

| Check | Before | Now | Why the protection is the same |
| --- | --- | --- | --- |
| `differential.yml` `macos-c-tier` (macOS 15, macOS 15 Intel, macOS 26) | every pull request and push to `main`; never nightly | nightly and on demand; on a PR or push only when macOS-specific code changes (`src/macos-tbd.mjs`, `src/managed-lean.mjs`, `src/managed-artifacts.mjs`, `scripts/lean-dist/`, the C tier's own script and fixtures, `differential.yml`) | The check is about each runner's own SDK stub (issue #73). It changes when the SDK changes, which a nightly run catches, or when that code changes, which still runs it on the PR. |
| `differential.yml` `stack-depth (macos-15)` | every pull request and push | nightly, and with the C tier's paths | Node's default stack on macOS is a property of the runner and of the generated code's frame sizes. The Linux job measures every target's depth on every PR, and the Windows job (the smallest stack) still runs on every PR. A regression that only macOS shows is caught within a day. |
| `installer-faults.yml` on `darwin-x64` and `darwin-arm64` | every pull request touching `src/`, `bin/`, `scripts/`, `test/` or `package*.json` | PRs run Linux x64, Linux arm64 and Windows; the push to `main`, the release candidate (`release-checks`) and the nightly cold-installation run keep all five | The installer's fault paths are the same JavaScript on every platform. The OS-specific parts (file locking, rename semantics) are covered by Windows on the PR and by macOS on every merge commit and every release. |
| `differential.yml`, `tooling.yml` and `fuzz.yml` on a PR that changes only docs, Markdown or the five flagship example apps | ran in full | skipped (`paths-ignore`) | They test the compiler and CLI, which such a change cannot affect. The example apps have their own path-filtered workflows. The push to `main` is not filtered, so every merge commit still runs all three. |

### What was added

- **The unit suite on pull requests** (`unit.yml`, filtered to code paths).
  Before, it ran only for a release, so a PR that broke a unit test merged
  green and the break showed up at the next release.
- **The release suites nightly** (`ci-nightly.yml`). Browser, edge, Bun/Deno,
  WASI, UI, fullstack, the dev loop and the Lasm.JS stress test ran only from
  `release-checks`, or from push triggers on integration branches (`launch`,
  `browser`, `phase-7`, `wasi`, `fullstack`, `dx`) that no longer exist. Now
  `main` is checked every night, so a release no longer finds weeks-old breakage.
- **Weekly long campaigns** (`ci-weekly.yml`): differential and Lasm.JS soak.

## Rules

1. **A new check goes in the cheapest tier that still catches its bug before
   users see it.** Before merge: fast and Linux unless the code is
   OS-specific. Nightly: anything slow, anything macOS, every campaign.
   Weekly: campaigns longer than an hour. Release: whatever a published
   package must never lack.
2. **Path filters on PRs only.** Pushes to `main` run unfiltered (or with the
   workflow's own broad filter), so every merge commit is checked once in full.
3. **The release contract does not move.** `release-checks.yml`'s job names and
   the jobs it calls are read by `scripts/release/checks-manifest.mjs`,
   `release.yml`, `test/release.test.mjs` and `scripts/evidence/platforms.json`.
   A workflow it calls must keep `workflow_call` and its job names.
4. **Concurrency groups include `${{ github.workflow }}`** in every workflow
   that `release-checks.yml` and a tier both call. In a called workflow,
   `github.workflow` is the caller's name, so a nightly call never cancels a
   release check on the same ref.
5. **No job, workflow or artifact name changes without a grep** of `scripts/`,
   `test/`, `docs/` and `.github/`. The evidence levels match job names by
   regular expression.
6. **No runs on Sunday** (below): every workflow with a `schedule:` calls the
   Sunday guard, and every other job in it needs it.

## No runs on Sunday

No scheduled run does anything on a Sunday in US Eastern time (Jordan,
2026-11-07). Two layers, both checked by `test/no-sunday-schedules.test.mjs`:

- **Cron times.** Every firing is off Sunday at both UTC-5 and UTC-4 and at
  least 12 hours before Sunday begins in New York. GitHub starts scheduled runs
  hours late (on 2026-11-08, runs due 01:07 to 03:53 UTC started 07:12 to
  10:47 UTC, Sunday morning in New York), so the Saturday-evening firings
  (day 0 in UTC, before 04:00) were dropped rather than moved: the nightly
  campaigns that ran six evenings a week now run Monday to Friday evenings,
  the 05:00 to 10:41 UTC ones still run Monday to Saturday, and the latest
  firing before Sunday is the weekly tier at Saturday 12:07 UTC. The example
  campaigns' "changed since the last run" windows cover the weekend gap
  (Folio and Porter 74 hours, Tandem 50).
- **Runtime guard.** However late a run starts, `sunday-guard.yml` decides: its
  output `skip` is `true` only when `github.event_name` is `schedule` and
  `TZ=America/New_York date +%u` is 7. Each scheduled workflow calls it as the
  job `sunday`; every other job has `sunday` in its `needs` and
  `if: needs.sunday.outputs.skip != 'true'`, or
  `needs.sunday.outputs.skip != 'true' && (<its own condition>)` with the
  original kept whole in parentheses, so an `always()` inside keeps its
  meaning and the report jobs (the issue "Nightly tier failures on main", the
  installation-confidence report) never run on a guarded Sunday. Pushes, pull
  requests, dispatches and `workflow_call` runs are never skipped; the guard
  costs a few seconds there.

A guarded run concludes `success` with every other job skipped. Readers of
past runs leave it out through `scripts/ci/sunday-guard.mjs` (a scheduled run
that started on Sunday in New York): the test-evidence page's latest runs, the
installation-confidence gate's campaigns, and `ci-nightly.yml`'s "unchanged
since the last passing run" check.

## Shared setup

Composite actions in `.github/actions/` replace steps that were copied across
many files:

| Action | Replaces | Used by |
| --- | --- | --- |
| `playwright` | `npm install playwright-core@1.63.0` plus `scripts/ci/playwright-install.sh` per browser, and the browser-build cache (same keys as before) | browser, fullstack, differential, conduit, conduit-platforms, folio, ledger, porter, tandem |
| `upstream-lean` | the pinned upstream Lean 4.35.0 archive (the differential oracle and the bridge model checker), with its digest check and cache | differential, bridge-verification |
| `install-candidate` | download the packed candidate artifact and `npm install` it into a fresh directory, as a user does | differential, tooling |
| `process-guard` | `loginctl enable-linger` plus `XDG_RUNTIME_DIR` and `DBUS_SESSION_BUS_ADDRESS` for `run-bounded.mjs` | the workflows above that use it |

The tier orchestrators (`ci-nightly.yml`, `ci-weekly.yml`) call the existing
workflows through `workflow_call` instead of copying their jobs.

## Inventory

Every workflow file, with its triggers, runners, typical wall-clock time (the
median of its last 40 completed runs; the maximum when it is more than twice
the median) and its tier. "call" means `workflow_call` (another workflow runs
it), and "dispatch" means `workflow_dispatch`.

| Workflow | Triggers | Runners | Typical time | Protects | Tier |
| --- | --- | --- | --- | --- | --- |
| `application-file-controls.yml` | dispatch | Linux, macOS, Windows | 2 min | Native filesystem controls of the application runtime (diagnosis) | On demand |
| `application-io-controls.yml` | dispatch | Linux, Windows | 7 min | Native IO regression oracles (diagnosis) | On demand |
| `application-runtime-source.yml` | dispatch | Linux | 6 min (max 69) | Cold reproducible build of the application runtime from source | On demand |
| `bridge-verification.yml` | PR (paths), push main (paths), cron 17 3 * * 2-6, dispatch | Linux + called workflows | 29 min (max 109) | Host bridge: Lean model, schedule-fuzzed Lasm.JS runs, trace conformance | PR (paths), main, nightly |
| `browser.yml` | dispatch, call, push browser-ui,dx-browser (paths) | Linux, macOS + called workflows | 32 min (max 86) | Browser target: web template, the platform suite (Lasm.JS.Web.Browser), Vite plugin, Chromium/Firefox/WebKit (+ WebKit on macOS) | Release, nightly |
| `build-profile.yml` | dispatch | Linux, macOS, Windows + called workflows | 10 min (max 35) | Per-stage build times of a candidate on five platforms | On demand |
| `bun-deno-published.yml` | dispatch, after release, cron 17 9 * * 1-6 | Linux, macOS, Windows | 19 min (max 39) | Published @lasm/cli with Bun and Deno only, five platforms | After release, nightly |
| `ci-nightly.yml` | cron 7 1 * * 2-6, dispatch | Linux + called workflows | — | Nightly tier: the release suites on main | Nightly |
| `ci-weekly.yml` | cron 7 12 * * 6, dispatch | called workflows | — | Weekly tier: long campaigns | Weekly |
| `conduit-platforms.yml` | dispatch, call, PR (paths), push main (paths) | Linux | 35 min (max 103) | examples/conduit on 15 non-Node platforms, RealWorld traffic equivalence | PR (paths), main |
| `conduit.yml` | dispatch, call, PR (paths), push main,conduit (paths) | Linux | 24 min (max 107) | examples/conduit: proofs, API on Node/Workers/Bun, RealWorld E2E in three browsers | PR (paths), main |
| `content.yml` | PR (paths), cron 23 5 * * 1-6, dispatch | Linux | 12 min (max 85) | content/ pages and runnable tutorials | PR (paths), nightly |
| `differential.yml` | PR (paths-ignore), push main, cron 47 3 * * 2-6, call, dispatch | Linux, macOS, Windows | 35 min (max 110) | Compiler output vs native Lean on every target (generated core, file-system and feature programs), host fixtures, target equivalence, recursion and Async depth, macOS C tier | PR, main, nightly (campaign), weekly (long campaign) |
| `dst-nightly.yml` | cron 23 3 * * 2-6, dispatch | Linux | — | Example-app deterministic simulation with random seeds | Nightly |
| `dx-dev-loop.yml` | dispatch, call | Linux | 7 min (max 48) | Template dev loop, editor support, cold start | Release, nightly |
| `ecosystem.yml` | dispatch | Linux, macOS | 93 min (max 586) | Lake projects of the ecosystem built on five targets | Nightly (dispatched by nightly.yml), on demand |
| `edge-runtime.yml` | dispatch, call | Linux | 10 min (max 59) | Single-threaded edge runtime build (called by workers/wasi/browser) | Called |
| `evidence-levels.yml` | cron 23 8 * * 1-6, dispatch, PR (paths) | Linux | 6 min (max 42) | README evidence levels L0-L3 from main-branch results | PR (paths), nightly |
| `evidence-page.yml` | cron 41 10 * * 1-6, dispatch, PR (paths) | Linux | new | the public test-evidence page (`content/learn/test-evidence.md`) from the repository and the latest CI results, committed to `main` | PR (paths), nightly |
| `extract-bench.yml` | dispatch | Linux, macOS, Windows | 35 min | Tier-archive extraction speed per platform | On demand |
| `flaky.yml` | cron 53 7 * * 1-6, dispatch, PR (paths) | Linux | 12 min (max 40) | Flaky-test report of the last 24 h (issue `flaky`) | PR (paths), nightly |
| `folio-nightly.yml` | cron 53 3 * * 2-6, dispatch | Linux | 41 min | Folio: CommonMark differential and 40-minute fuzzing | Nightly |
| `folio.yml` | dispatch, call, PR (paths), push main (paths) | Linux | 16 min (max 96) | examples/folio: proofs, CommonMark examples, CLI, WASI, live preview | PR (paths), main |
| `folio-platforms.yml` | dispatch, PR (paths), push main (paths) | Linux | 7 min | examples/folio: the site server on Fastly (Viceroy), Workers and Deno Deploy with KV; the 652 CommonMark examples on WASI, three browsers and the edge | PR (paths), main |
| `fullstack.yml` | dispatch, call | Linux | 27 min (max 79) | Fullstack template on Node, Workers, Bun, Deno, Fastly, wasmtime serve; npm run dev | Release, nightly |
| `fuzz.yml` | PR (paths-ignore), push main, cron 23 2 * * 2-6; 41 6 * * 6, dispatch | Linux | 8 min (max 18) | Boundary fuzzing: corpus replay; 10-minute campaigns; 60-minute campaigns | PR, main, nightly, weekly |
| `image-pins.yml` | cron 17 6 * * 1, dispatch | Linux | 0 min (max 3) | Re-pins cached CI images to upstream digests (opens a PR) | Weekly |
| `installation-confidence.yml` | dispatch, cron 17 3 * * 2-6 | Linux, macOS, Windows + called workflows | 73 min (max 417) | Repeated cold installs of the retained candidate on five platforms | Nightly |
| `installer-faults.yml` | push main (paths), PR (paths), dispatch, call | Linux, macOS, Windows | 6 min (max 69) | Installer fault injection on five platforms | PR (paths, Linux and Windows), main, release, nightly |
| `interop-soak.yml` | dispatch | Linux, macOS, Windows + called workflows | 123 min | Express/Hono apps with Lean handlers under soak | On demand |
| `io-error-decoder.yml` | dispatch | Linux, Windows | 7 min | Native Lean IO error ABI comparison (diagnosis) | On demand |
| `js-interop-examples.yml` | call, dispatch | Linux, macOS, Windows | 11 min | examples/js-crud and js-fetch on five platforms | Release (called by node-linux-acceptance) |
| `language-coverage-baseline.yml` | dispatch | Linux, macOS | 41 min | Upstream Lean test suites on five targets (launch gate shards) | Nightly (dispatched by nightly.yml), on demand |
| `language-coverage-probe.yml` | dispatch | input | 5 min (max 14) | One reviewed language-coverage probe (diagnosis) | On demand |
| `lasm-js-stress.yml` | push hang-stress, call, dispatch | Linux, macOS, Windows | 41 min (max 115) | Lasm.JS hang stress on four platforms | Release, nightly, weekly (soak), called by bridge-verification |
| `lean-tiers.yml` | dispatch | Linux, macOS, Windows | 42 min (max 160) | Repackages pinned Lean archives into tiers (maintainer) | On demand |
| `ledger-platforms.yml` | dispatch, PR (paths), push main (paths) | Linux | 47 min (max 104) | examples/ledger on Bun, Deno, Docker, Workers, WASI auditor | PR (paths), main |
| `ledger.yml` | dispatch, call, PR (paths), push main (paths) | Linux | 25 min (max 88) | examples/ledger: proofs, API, DST fixed seeds, TigerBeetle differential, E2E | PR (paths), main |
| `library-prebuilt.yml` | push prebuilt/**, dispatch | Linux | 3 min (max 16) | Regenerates library/prebuilt (maintainer) | On demand |
| `library-proofs.yml` | dispatch, call, PR (paths), push main (paths) | Linux | — | Proofs of Lasm's library: theorems match Spec.lean, standard axioms only, library/PROOFS.md current | PR (paths), main |
| `link-toolchain-fixtures.yml` | dispatch | Linux, macOS, Windows | 12 min | Link toolchain fixtures (maintainer) | On demand |
| `link-toolchain.yml` | dispatch | Linux, macOS, Windows | 11 min | Builds the link toolchain distribution (maintainer) | On demand |
| `managed-sdk.yml` | dispatch | Linux, macOS, Windows | 7 min | Managed compiler SDK provisioning | On demand |
| `managed-tools.yml` | dispatch | Linux, macOS, Windows | 4 min | Managed Lean tool provisioning | On demand |
| `mutation.yml` | cron 37 5 * * 1-6, dispatch, PR (paths) | Linux | 13 min (max 73, `dev`) | Stryker mutation scores of every `src/` module (21 modules, one job each) | PR (changed modules), nightly |
| `nightly.yml` | cron 17 7 * * 1-6, dispatch | Linux + called workflows | 3 min (max 27) | Nightly upstream suite and ecosystem runs vs baseline | Nightly |
| `node-candidate-input.yml` | call | Linux | — | Authenticated candidate input (called) | Called |
| `node-darwin-candidate-recheck.yml` | dispatch | macOS + called workflows | 28 min (max 87) | Recheck a candidate on macOS | On demand |
| `node-darwin-consumer.yml` | call | input | — | Installed candidate on macOS (called) | Called |
| `node-darwin-controls.yml` | dispatch | macOS | 1 min | macOS resource and isolation controls | On demand |
| `node-linux-acceptance.yml` | push main (paths), dispatch, call | Linux, macOS, Windows + called workflows | 142 min (max 422) | Candidate build and five-platform installed acceptance, templates, js-interop, platform support, benchmarks | Release (candidate), main (paths) |
| `node-linux-candidate-recheck.yml` | dispatch | Linux + called workflows | 20 min | Recheck a candidate on Linux | On demand |
| `node-linux-candidate-retain.yml` | dispatch | Linux, Windows | 1 min | Retain a verified candidate draft | On demand |
| `node-linux-consumer.yml` | call | input | — | Installed candidate on Linux (called) | Called |
| `node-linux-runtime.yml` | dispatch | Linux | 49 min (max 146) | Builds the pinned Node runtime inputs | On demand |
| `node-runtime-handoff-recover.yml` | dispatch | Linux | 0 min | Recovers a runtime handoff from cache | On demand |
| `node-windows-candidate-recheck.yml` | dispatch | Windows + called workflows | 44 min | Recheck a candidate on Windows | On demand |
| `node-windows-consumer.yml` | call | Windows | — | Installed candidate on Windows (called) | Called |
| `node-windows-controls.yml` | dispatch | Windows | 2 min (max 12) | Windows resource and isolation controls | On demand |
| `npm-dist.yml` | call, dispatch | Linux, macOS, Windows | 43 min | npm packages of the candidate through a loopback registry; Bun/Deno installs | Release (rehearsal) |
| `platform-support.yml` | call, dispatch, push main (paths) | Linux, macOS, Windows | 12 min (max 196) | Launch platform claims: builds, containers, Lambda, native hosts | Release (called), main (paths) |
| `porter-nightly.yml` | cron 41 3 * * 2-6, dispatch | Linux | 43 min | Porter: 40-minute endpoint fuzzing | Nightly |
| `porter-platforms.yml` | dispatch, PR (paths), push main (paths) | Linux | 32 min (max 101) | examples/porter on Bun, Deno, Docker, Workers | PR (paths), main |
| `porter.yml` | dispatch, PR (paths), push main (paths) | Linux | 18 min (max 86) | examples/porter: proofs, oracles, DST, fuzzer, E2E | PR (paths), main |
| `published-templates.yml` | dispatch, after release | Linux | 0 min (max 30) | npm create @lasm from the registry after a release | After release |
| `release-benchmarks.yml` | call, dispatch | Linux, macOS, Windows + called workflows | 58 min | Release benchmark set | Release (called), on demand |
| `release-checks.yml` | PR, push main, dispatch | Linux + called workflows | 9 min (max 208) | The single required status of a release | Release (every PR and push to main: detect) |
| `release.yml` | push main (paths), after release-checks, dispatch | Linux | 1 min (max 32) | Publishes to npm (OIDC) after release-checks | Release |
| `server-mvp-robustness.yml` | dispatch | Linux, macOS, Windows + called workflows | 49 min (max 164) | Server MVP load, faults, soak | On demand |
| `server-mvp-upstream.yml` | dispatch | Linux + called workflows | 7 min (max 27) | Server MVP upstream runtime comparisons | On demand |
| `serverless-adapters.yml` | dispatch, PR (paths), push main (paths) | Linux | 14 min (max 72) | Function-platform shims on local emulators | PR (paths), main |
| `serverless.yml` | dispatch | Linux | 23 min (max 66) | Function-platform claims with local runtimes | On demand |
| `signal-controls.yml` | dispatch | Linux | 1 min | Native signal routing controls | On demand |
| `sunday-guard.yml` | call | Linux | a few seconds | The Sunday guard: `skip=true` for a scheduled run on a Sunday in New York ([No runs on Sunday](#no-runs-on-sunday)) | Every scheduled workflow |
| `tandem-nightly.yml` | cron 17 5 * * 1-6, dispatch | Linux | 47 min | Tandem: 40-minute fuzzing, Yjs differential, simulation | Nightly |
| `tandem-platforms.yml` | dispatch, PR (paths), push main (paths) | Linux | 11 min (max 74) | examples/tandem on Bun, Deno, Docker, Workers | PR (paths), main |
| `tandem.yml` | dispatch, PR (paths), push main (paths) | Linux | 19 min (max 97) | examples/tandem: proofs, protocol, Yjs, fuzzer, DST, E2E | PR (paths), main |
| `templates.yml` | call, dispatch | Linux, macOS, Windows | 23 min | Every lasm init template on five platforms | Release (called) |
| `tooling.yml` | PR (paths-ignore), push main, cron 17 5 * * 1-6, dispatch | Linux | 17 min (max 59) | Error corpus with the error inventory check; metamorphic builds and `lasm dev` sessions, and fault injection, one job per target (node, wasi, workers, browser) | PR (corpus; all on harness changes), main, nightly |
| `ui.yml` | dispatch, call, push browser-ui (paths) | Linux | 1 min (max 19) | Lasm.UI library, proofs, diff model, DOM applier | Release, nightly |
| `unit.yml` | PR (paths-ignore), dispatch, call | Linux | 5 min (max 31) | The whole unit suite with coverage baseline | PR (paths), release, nightly |
| `upstream-native-build-time.yml` | dispatch | Linux | 2 min (max 20) | Upstream native build-time checks | On demand |
| `wasi.yml` | dispatch, call | Linux + called workflows | 13 min (max 74) | WASI, wasi-http, Fastly on wasmtime, wasmer, node:wasi, Spin, Viceroy | Release, nightly |
| `web-bindings.yml` | PR (paths), push main (paths), dispatch | Linux | new | Lasm.JS.Web, Lasm.JS.Node, Lasm.JS.Deno, Lasm.JS.Bun and Lasm.JS.Cloudflare: node.idl is the pinned Node docs' lowering, deno.idl and bun.idl the pinned Deno and Bun declarations', cloudflare.idl the pinned @cloudflare/workers-types', and the generated bindings are the generator's output; the Lasm.JS.Web conformance program on Node 26 and 24, Bun, Deno, Workers (workerd) and Chromium, the Lasm.JS.Node one on Node 26 and 24, Bun and Deno, the js-serve one (Deno.serve, Bun.serve, @hono/node-server) on Node, Bun and Deno with a served Lean handler requested end to end, and the js-cloudflare one (`cloudflare-conformance`: KV, D1, R2, a Durable Object, a queue, a cron trigger, the Cache API and a TCP echo) on Workers under `wrangler dev` with local emulation only (no Cloudflare account) | PR (paths), main |
| `fastly-bindings.yml` | PR (paths), dispatch | Linux | new | Lasm.Fastly: the generated bindings are the generator's output for the pinned witx, the binding unit tests, then `wasi.yml` (the conformance fixture and `examples/fastly` under Viceroy) | PR (paths) |
| `wasi-http-bindings.yml` | PR (paths), dispatch | Linux | new | Lasm.WASI.Http: the generated bindings and wit-bindgen's core signatures are the generator's output for the pinned WASI 0.2.12 WIT, the binding unit tests, then `wasi.yml` (the conformance fixture and `examples/wasi-http` under `wasmtime serve`) | PR (paths) |
| `windows-guard-controls.yml` | dispatch | Windows | 2 min | Windows resource guard controls | On demand |
| `windows-lean-path-controls.yml` | dispatch | Windows | 3 min | Windows Lean long-path controls | On demand |
| `windows-timezone-host.yml` | dispatch | Windows | 5 min | Windows timezone host comparisons | On demand |
| `workers.yml` | dispatch, call | Linux, macOS, Windows + called workflows | 29 min (max 90) | Edge targets (Workers, Vercel/Netlify Edge, Deno, Supabase) and Bun/Deno on five platforms | Release, nightly |

## Measurements

The PR tier was measured with the GitHub API on the final head commit of
recently merged pull requests (`gh api repos/Millillion/lasm/actions/runs?head_sha=…`,
then each run's jobs). Wall clock is from the first run's creation to the last
run's completion, so it includes queueing. Runner minutes add up each job's
`started_at` to `completed_at` and leave out skipped jobs. A pull request with
several pushes pays this once per push.

### Before (2026-11-07, `main` at 21b2884)

| PR | What it changed | Workflows | Jobs run | macOS jobs | Wall clock | Runner minutes (Linux / macOS / Windows) |
| --- | --- | --- | --- | --- | --- | --- |
| #131 | docs only | 4 | 22 | 4 | 14 min | 54 (40 / 12 / 2) |
| #139 | one `library/prebuilt` manifest | 4 | 18 | 4 | 47 min | 50 (36 / 12 / 2) |
| #137 | docs and two `src/` fixes | 6 | 28 | 6 | 32 min | 79 (58 / 17 / 3) |
| #125 | `src/`, `scripts/`, `test/`, docs | 6 | 33 | 6 | 19 min | 99 (80 / 16 / 3) |
| #122 | `src/`, `library/`, `verification/`, workflows | 7 | 33 | 6 | 17 min | 86 (66 / 16 / 3) |
| #121 | `src/`, `library/`, one example | 6 | 28 | 6 | 16 min | 63 (43 / 17 / 3) |
| #120 | scripts, workflows, docs | 5 | 27 | 6 | 93 min | 63 (43 / 17 / 3) |
| #132 | Conduit (example and workflows) | 7 | 49 | 4 | 62 min | 201 (175 / 24 / 2) |
| #133 | four example apps' DST | 13 | 79 | 6 | 110 min | 229 (211 / 15 / 3) |

A typical code PR (#121, #122, #125, #137) ran 6 to 7 workflows and about 30
jobs, six of them on macOS (16 to 17 macOS minutes). It took 16 to 32 minutes
when the runners were free, and up to 93 minutes when the macOS queue was
long. In #133, `differential (release)` waited 84 minutes for a runner.

### After (2026-11-07, `main` at 0b044e0)

| PR | What it changed | Workflows | Jobs run | macOS jobs | Wall clock | Runner minutes (Linux / macOS / Windows) |
| --- | --- | --- | --- | --- | --- | --- |
| #145 | all five flagship apps, `library/`, `test/fuzz/`, docs | 18 | 113 | 0 | 38 min | 395 (392 / 0 / 3) |
| #145, compiler suites only | the part a typical code PR runs: differential, tooling, fuzz, installer faults, unit, mutation, release-checks | 7 | 24 | 0 | 38 min | 47 (44 / 0 / 3) |

A typical code PR now runs the compiler suites and nothing on macOS: about 24
jobs and 47 runner minutes, against 28 to 33 jobs and 63 to 99 minutes before,
16 to 17 of them on macOS. That is about 30 % fewer jobs, about 40 % fewer
runner minutes and no macOS minutes at all. The unit suite (4 minutes) is new
on PRs. A docs-only PR now runs only `release-checks` and the unit suite (the
docs lints), about 5 runner minutes against 54 before. #145, which touched all
five apps, ran 113 jobs in 38 minutes. #133 was the closest before (four apps,
79 jobs), and it took 110 minutes, waiting for macOS for much of that time.
Wall clock depends mostly on the queue: `differential` (about 34 runner minutes
in 9 jobs) is now the critical path.
