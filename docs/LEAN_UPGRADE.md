# Upgrading to a new Lean release

Lasm supports exactly one Lean release at a time (user decision 2026-10-24;
see "Two Lean versions at once?" below). A new release reaches users as a
Lasm release that pins it everywhere: the native compiler and its tiered
archives, Lasm's Wasm runtime built from that release's sources with Lasm's
patches, the edge runtime, Lasm's prebuilt Lean library, the initializer list
and the upstream-suite reviews. This runbook is the procedure, scripted where
the work is mechanical. It was first run for **Lean 4.36.0-rc1** on branch
`lean-4.36` (October 2026); that run's results are at the end.

Work on a branch named `lean-<version>` (for a release candidate too, e.g.
`lean-4.36` for 4.36.0-rc1 and then 4.36.0). Workflows that publish drafts or
build runtimes accept `main` and `lean-<version>` branches (`scripts/ci/trusted-ref.mjs`, the workflow gates of the runtime, tiers, candidate, acceptance and upstream-suite workflows). Nothing is published:
runtimes, tiers and edge archives are drafts or workflow artifacts until the
release PR.

## 1. Catalog the release

```sh
node scripts/lean-upgrade/add-release.mjs 4.36.0-rc1
```

Adds the release's commit and five native archives (sizes and SHA-256 from
GitHub's asset digests) to `src/toolchains.json`, and its source archive (by
commit, measured once) to `scripts/full-lean/lean-sources.json`. On the
upgrade branch, make it the only release in `src/toolchains.json`
(`defaultLean` too) and set `lean` in `scripts/ci/acceptance-versions.json`;
`check-acceptance-versions.mjs` accepts a pinned release candidate (it must be
that published prerelease).

## 2. Move the version references

```sh
node scripts/lean-upgrade/bump.mjs 4.35.0 4.36.0-rc1
```

Rewrites `lean-toolchain` pins, `leanprover/lean4:v…` strings, runtime archive
names and catalog lookups in workflows and scripts, workflow input defaults,
script default versions, and appends the new release to reviewed version
allow-lists. Read its diff of `test/`: a test that pins the old release on
purpose (e.g. "this release is rejected") must be rewritten against the
catalog's release rather than renamed. It prints every file that still names the old release: per-release
data, handled below, and comments. Review the allow-list additions: each one
claims that a reviewed property still holds (e.g. `src/lean-io-errors.mjs`:
`Init/System/IOError.lean` and the error mapping of `runtime/io.cpp` unchanged;
diff them in the two source trees before keeping the entry).

## 3. Port Lasm's patches

```sh
node scripts/lean-upgrade/check-patches.mjs 4.36.0-rc1 .work/lean-upgrade --draft
```

Applies every patch (`scripts/full-lean/lean-patches.mjs` lists them and the
release each starts from) in build order to fresh source trees for the Node and
edge profiles and classifies each as clean, offset, fuzz or rejected. Offsets are
fine. For fuzz or rejects, `--draft` writes
`scripts/full-lean/patches/lean-<version>-<name>.patch.draft` from what applied,
with the rejected hunks in `.rej`. For each rejected hunk decide: upstream made
the change (drop it) or port it by hand. Rename the reviewed draft to
`lean-<version>-<name>.patch`; the build then uses it for this release and
later ones, and older releases keep their files. Rerun until every patch is
clean or offset.

Then audit what Lasm replaces in Lean's runtime (`runtime/node-*.cpp` override
upstream definitions of the same name, `scripts/full-lean/configure-host.mjs`):

```sh
# New or removed @[extern] primitives; any new lean_io_*/lean_uv_* needs a
# host-bridge implementation, or programs that call it crash in Wasm.
git -C OLD grep -ho '@\[extern "lean_[a-z0-9_]*"' -- src/Init src/Std src/Lean src/lake | sort -u > old.txt
git -C NEW grep -ho '@\[extern "lean_[a-z0-9_]*"' -- src/Init src/Std src/Lean src/lake | sort -u > new.txt
diff old.txt new.txt
diff OLD/src/runtime/io.cpp NEW/src/runtime/io.cpp   # error mapping (src/lean-io-errors.mjs)
diff OLD/src/runtime/uv/tcp.h NEW/src/runtime/uv/tcp.h
```

Also compare the source lists in `src/runtime/CMakeLists.txt` (new runtime
objects need a decision, e.g. 4.36's `cadical.cpp`), the pinned dependencies in
`CMakeLists.txt`/`src/CMakeLists.txt` (libuv, mimalloc, CaDiCaL: the tier
notices name their versions) and the binaries in the release archive (the tier
builder's program list).

## 4. Build the Node runtime (CI, about 2 hours)

```sh
gh workflow run node-linux-runtime.yml --ref lean-<version>     # reuse-standard-libraries=false
```

A full build: the standard-library archives depend on the release. The
handoff is a draft release `node-runtime-inputs-<run>`. Pin it:

- `scripts/ci/node-runtime-source.json`: release, asset SHA-256, runtime
  manifest SHA-256, source revision, `runtimeName`, `lean`;
- `src/application-runtimes.json`: the release's runtime name and manifest
  SHA-256 (replace the old release's entry);
- `src/application-reachability.mjs` `canSpecializeInitialization`: add the
  identity only after reviewing that Lean's `init.cpp`/`init_module.cpp`
  initialization path is unchanged (diff them); until then builds keep every
  initializer (correct, slower to link).

## 5. Initializer list and prebuilt library

```sh
lean --run scripts/initialization/InitTargets.lean > src/lean-init-targets-<version>.json   # the release's native lean
node scripts/build-library-prebuilt.mjs                                                     # library/prebuilt/lean-<version>/
```

Remove the old release's files. `build-library-prebuilt.mjs` compiles all of
`library/` with the new Lean: a failure here is a Lasm library port. Set
`libraryLeanVersions` in `src/lasm-library.mjs`. Check Lasm.UI's proofs and
examples: `node scripts/ui/lean-tests.mjs`.

## 6. Tiers and C tier (CI, about an hour per platform, in parallel)

Add the release to `scripts/lean-dist/c-tier-sources.json` (clang resource
headers from the LLVM release matching the release's bundled clang:
`bin/clang --version`; libc packages usually unchanged), then

```sh
gh workflow run lean-tiers.yml --ref lean-<version> -f version=<version> -f catalog=src/toolchains.json \
  -f tag=lean-<version>-tiers-v1 -f scope=all -f publish=false
```

Without publishing it proves the archives are reproducible and checks them
natively. For a stable release, publish them here (`publish=true`) and add the
`tiers` block to `src/toolchains.json` before step 8: without tiers the branch
uses the full upstream archives (about 600 MB per platform, about 2.5 GB
extracted), which also carry Lasm's library but whose page cache pushes the
heavier CI builds past the resource guard's proactive stop (4.36.0-rc1: the
Workers build and the fullstack `npm run dev` job, about 1 GB more than with
tiers). The npm tool-package tests skip while the release has no tiers; a
release candidate's archives are never published to npm (their package versions,
e.g. `4.36.0-rc1-lasm.1`, would sort above the stable release's).

## 7. Edge runtime

```sh
gh workflow run edge-runtime.yml --ref lean-<version>
```

After the Node runtime is pinned (it reuses its standard-library archives). Pin
the packaged archive in `src/edge-runtimes.json` (new tag
`lean-<version>-edge-v1`; then `draft-release=true` uploads it).

## 8. Upstream suite and Lasm's suites

1. Application inventory and source manifest, from the patched tree of step 3
   configured (not built) as the runtime build configures it:
   `node scripts/lean-upgrade/upstream-inventory.mjs <version> .work/lean-upgrade`
   → `docs/evidence/lean-<version>-upstream-*.json` (a few minutes, local).
   It must come first: the language-coverage inventory reads it and the carried reviews.
   Then carry the hash-bound reviews forward:
   `node scripts/lean-upgrade/carry-reviews.mjs <old> <new>` keeps every
   reviewed test whose source and sidecars are byte-identical and lists the
   changed ones for a fresh review (Server MVP adapter, L2/L3 adapter and
   eval-io reviews); regenerate the mixed-driver classification
   (`scripts/application-tests/classify-mixed.mjs`).
2. Language-coverage inventory (native Lean against the pristine source; after item 1,
   since it labels the reviewed eval-io tests from the carried review):
   `gh workflow run language-coverage-baseline.yml --ref lean-<version> -f harness=inventory -f lean=<version>`;
   commit `docs/evidence/lean-<version>-language-coverage-inventory.json` and
   write the adapter review: `node scripts/language-coverage/make-adapter-review.mjs <version>`.
3. A candidate from the branch (`node-linux-acceptance.yml`, scope `linux`
   while iterating), then the harnesses of `scripts/nightly/layout.json` on it,
   compared with the previous release's Phase 3 baseline
   (`scripts/nightly/compare.mjs`; regressions are failures, new upstream tests
   are new coverage).
4. Lasm's own suites on the branch: `unit.yml`, `browser.yml`, `ui.yml`,
   `wasi.yml`, `workers.yml`, `fullstack.yml`, `dx-dev-loop.yml`, then the
   full five-platform acceptance and the cold-installation gate in the release
   PR (CI test policy: a toolchain upgrade runs the full gate).

## 9. Release

A version-bump release PR (docs/RELEASING.md) with the published tiers, the
runtime handoff, the edge archive and the evidence. Record the upgrade in
docs/PLAN.md and docs/DECISIONS.md.

## Two Lean versions at once?

Question: should Lasm accept the latest and the previous Lean release, chosen by
the project's `lean-toolchain`?

What a second version costs:

- **Package size.** Each Lean release brings a Wasm runtime bundle (348 MB
  unpacked; 62 MB compressed handoff) and a prebuilt Lasm library (37 MB). Both
  ship inside `@lasm/cli` today (429 MB unpacked for 0.3.0), so a second release
  in the CLI would almost double it. Moved to an on-demand tool package per
  release (as the edge runtime and the Lean tiers are), it costs nothing until
  a project pins that release; then about 60 MB to download once. The native
  tiers are already per release and on demand (bin 31–41 MB per platform; core
  168 MB and extended 257 MB, shared; C tier 39–52 MB).
- **CI.** Everything release-specific doubles while both are supported: the
  runtime and edge builds (about 2 h and 30 min per release, only on change),
  tiers (one run per release), and above all the gates that run the language:
  five-platform acceptance (2–3 h), the upstream suite (hours per target) and
  the edge/browser/WASI suites. Free-runner concurrency is the real limit.
- **Code.** Small today: patches are already selected per release
  (`lean-patches.mjs`), catalogs are keyed by release, and per-release data
  (reviews, initializer lists, prebuilt libraries) is in files named by
  release. The costs are Lasm's own library compiling under both releases
  (4.35 → 4.36 needed no change; a later Lean can break it) and the host bridge
  serving both runtime ABIs (4.36 added one primitive; adding an operation is
  backward compatible).

**Decided (2026-10-27): one Lean release per Lasm release, no two-version support.**
The recommendation below was accepted without the optional overlap.

**Recommendation: no standing two-version support; a short overlap instead.**
Keep "one Lean release per Lasm release", and make upgrades fast with this
runbook (a release within days of Lean's). For users who cannot move at once,
the previous Lasm release keeps working: Lasm's npm releases pin their Lean,
so `npx @lasm/cli@<previous>` builds the previous Lean. If an overlap is still
wanted, limit it to the release after an upgrade: the previous release's
runtime and library go into an on-demand package
(`@lasm/lean-runtime-<version>`, a new npm name to approve first), the CLI
carries only the latest, and CI runs the full gate on the latest and only
acceptance on Linux x64 plus the templates for the previous one. Its cost then
is one more runtime build per Lasm release that changes the runtime and about
an hour of CI per release PR.

## Lean 4.36.0-rc1 (first run, branch `lean-4.36`)

What porting took (see docs/DECISIONS.md, 2026-10-27, for the run IDs):

- **Patches.** `wasm-build`: one hunk dropped; 4.36's interpreter now throws for
  an unreachable IR body itself (the change Lasm made). `sdk-mimalloc`:
  re-cut, the runtime's source list moved (`cadical.cpp` added). Every other
  patch applies with offsets.
- **Host bridge.** New primitive `Std.Internal.UV.TCP.Socket.waitAcceptable`
  (`lean_uv_tcp_wait_acceptable`): implemented in `runtime/node-async.cpp`
  (host operation 66, `src/node-network.mjs`, test/tcp-wait-acceptable.test.mjs).
  The `lean_io_prim_handle_is_eof` runtime function was removed upstream (no
  Lean declaration used it; Lasm never replaced it).
  `runtime/io.cpp` now maps EINTR/ENOENT without a file name to an empty name
  instead of asserting; `IOError.lean` is unchanged.
- **CaDiCaL.** 4.36 links CaDiCaL 2.1.2 into the native `libleanshared` and
  compiles `runtime/cadical.cpp`. The Wasm runtime builds it without
  `CADICAL_INCLUDE_DIR` (the stub that answers "no solver"), so applications
  carry no CaDiCaL; the native tiers carry Lean's `LICENSES`, which covers it.
  The release archive also adds `cadical`, `con-leche`, `con-ron`,
  `leanchecker-paranoid`, `lean4lean` and `nanoda_bin` to `bin/`; the tiers keep
  only the programs Lasm runs.
- **Toolchain.** Lean's clang is 23.1.1 (was 23.1.0): new C-tier resource
  headers. mimalloc stays v3.4.5, libuv v1.48.0.
- **Lasm's library** (all of `library/`, Lasm.UI included) compiles unchanged;
  Lasm.UI's proofs, examples and template elaborate with only the standard
  axioms.
- **Initializers.** 6 new `initialize` targets in Lean's libraries, none removed.

CI on branch `lean-4.36` (runs, all against 4.36.0-rc1):

| Step | Run | Result |
| --- | --- | --- |
| Node runtime (full build) | 40446052241 | runtime `4c0ef41a…`, draft handoff `node-runtime-inputs-40446052241` |
| Edge runtime | 40456857716, draft 40457974714 | `lean-4.36.0-rc1-wasm64-edge.tar.zst` `591084a3…`, draft release `lean-4.36.0-rc1-edge-v1` |
| Node runtime re-pin (uv semantics, CaDiCaL message; reused standard libraries) | 40472316997 | runtime `b9fde4b1…` |
| Node runtime re-pin (UDP receive startup, receive size 0) | 40491677407 | runtime `8103c016…` |
| Edge runtime re-pin | 40474907202, then 40494486462 | `63f9be82…` (`lean-4.36.0-rc1-edge-v2`), then `a32a443e…` (`lean-4.36.0-rc1-edge-v3`, draft) |
| Tiers and C tier, five platforms | 40445440886 | built twice, reproducible, checked natively; not published |
| Language-coverage inventory | 40461379892 | 4561 registrations (4.35: 4219); L1 adapter review 582 tests (525) |
| Unit | 40458648352 | pass (npm tool-package checks skip without tiers) |
| UI, WASI, dev loop | 40458014838, 40458017420, 40458026156 | pass |
| Linux acceptance (x64, arm64, JS interop) | 40465566277 | pass |
| Upstream suite, Linux x64 and arm64 (runtime adapter, compiled applications, eval-io) | 40460043775, 40460058645, 40460066282, 40460073165, 40466615512 | 0 regressions against the 4.35.0 Phase 3 baseline; 1 changed test awaits review (`elab/async_http_expect.lean`) |
| Re-pinned (runtime `8103c016…`, edge `a32a443e…`): Linux acceptance | 40496635223 | pass (candidate `0.1.0-experimental.44600000008`) |
| Re-pinned: upstream suite, Linux x64 and arm64 | 40499335353, 40499347567, 40499360755, 40499373080, 40499385326 | 0 regressions, 0 missing; all 9 uv tests and `elab/async_http_expect` pass; `elab/cadical`, `elab/cadical_signature` and `elab/versoSyntaxView` (`import Lean`, ahead-of-time policy) unsupported by design; arm64 `elab/646` prints a timing (`timeit`) whose two native runs happened to agree, so it shows as `lasm-bug` (it was `native-output-varies` in the previous run) |
| Browser, Workers (Bun/Deno compiler job), fullstack `npm run dev` | 40459821345, 40459824146, 40459827094 | stopped by the resource guard (full archive page cache, step 6); the Workers build itself passes |

New upstream tests that fail on Lasm (new coverage, not regressions; work for
4.36.0 support):

- host bridge semantics: `elab/uv_tcp_parallel_accept` (a second concurrent
  accept must be rejected), `elab/uv_socket_argument_ranges` (accept on a
  socket that is not listening must fail), `elab/uv_udp_truncated_datagram` (a
  truncated datagram must fail), `elab/uv_loop_alive_idle` (the loop is alive
  while a timer runs), `elab/signal_selector_keeps_listening` (a signal sent
  between two selects is lost), `elab/uv_system_long_strings` (ENOBUFS for long
  system strings), `compile/uv_loop_configure` (`lean_uv_event_loop_configure`
  unsupported), `compile/uv_stop_reentrancy` (timeout), and
  `compile/uv_cancel_releases_outside_lock` (output differs). Fixed on branch
  `uv-semantics` for `main` (0.3.x, where 4.35 has the same behaviour) and
  merged here; see docs/DECISIONS.md (2026-10-27);
- CaDiCaL: `elab/cadical`, `elab/cadical_signature`: unsupported by design
  (decided 2026-10-27). The Wasm runtime does not compile CaDiCaL;
  `Solver.new` stops the program with "CaDiCaL (the SAT solver behind
  bv_decide) is not available in Lasm applications" (runtime/node-system.cpp)
  and the signature is empty. The README lists it under the unavailable Lean
  capabilities; scripts/language-coverage/assemble.mjs classifies both tests
  `unsupported-by-design`.
- `elab/versoSyntaxView`: an adapter difference, not a Lasm result. The upstream
  driver and the adapter's native steps pass `-Dlinter.all=false`; `lasm build`
  takes no Lean options, so a deprecation warning
  (`Lean.Parser.InputContext.input`) entered a `#guard_msgs` that stays a
  command. The parallel copy now sets `set_option linter.all false` itself
  (scripts/application-tests/runtime-adapter-source.mjs).
- `elab/async_http_expect`: reviewed afresh for eval-io (4.36 adds one
  `assertContains r " GMT\r\n"`; same 5 actions).

## Lean 4.36.0-rc2 (second run, branch `lean-4.36-rc2`, PR #287, not merged)

The second run of this runbook, on `main`'s tooling. It stopped partway on
purpose (2026-11-14): the Lean side is done and the upstream suite has
partial results. What is left is in "Switch to stable" below.

What porting took (rc1 → rc2 changes no runtime C++):

- **Catalog and references.** `add-release.mjs`/`bump.mjs` (ffa21d6b). No tiers:
  the branch uses the full upstream archives (step 6). The examples and content
  tutorials stay on 4.35.0 until a Lasm release ships 4.36.
- **Patches.** All clean or offset (lean-upgrade-inventory.yml 43568579178).
- **Initialization.** `init.cpp`/`init_module.cpp` are byte-identical to rc1's,
  so the rc1 review carries and `canSpecializeInitialization` accepts the
  runtime.
- **Lasm's library** compiles unchanged (library-prebuilt.yml 43568304776).
- **Upstream inventory.** 4565 registrations (rc1: 4561; the new ones are
  `grind_forall_refuted_ematch`, `grind_forall_true_imp`,
  `versoDocModuleScoped` and the `pkg/lean-beam` package test); 581 L1
  adapter candidates. 150 mixed drivers (rc1: 149). The one new driver is
  `pkg/lean-beam`, classified native build time: it skips unless Lean's
  release CI built the Beam tools, the same as the external kernel checkers.
  Fresh reviews: `elab/10078`, `elab/json` and `elab/leanExportParse` (runtime
  adapter). `elab/async_http_expect` (eval-io) keeps its rc1 review: its
  source is byte-identical in rc2.

Problems the run found, all fixed on the branch. The first four would also
hit a stable upgrade:

- The unit tests, the `init` toolchain pattern, the UI applier differential
  and the error corpus named 4.35.0 or accepted only a stable version. They
  now read the pinned release, and the error corpus reads the Lean of the CLI
  under test (68b8e835, 1b202790, 1a123edf).
- Packing the candidate peaked at 1.61 GiB, past the resource guard's 80%
  stop under the 2 GiB cap (4.35: 1.45 GiB). The runtime is now hard-linked
  into staging instead of copied: 1.17–1.25 GiB (e9cb0eba).
- `classify-mixed.mjs` had been removed as unreferenced, so every
  language-coverage shard stopped on a missing
  `lean-<version>-mixed-driver-classification.json`. It is restored, and
  `lean-upgrade-inventory.yml` now writes that file (e7aa3aa0, 8140dbcb).
- The resource guard now prints why it stopped and the memory breakdown
  (a38f4597). Every stop listed below was page cache (`inactive_file`), not heap.
- Problems that show only without tiers: the editor check expected the C-tier
  note, and the Linux acceptance isolation control looked for `bin/lean` under
  `artifacts/` instead of the assembled `derived/` prefix (0871c71e, 354e4efc).

CI on branch `lean-4.36-rc2` (all against 4.36.0-rc2):

| Step | Run | Result |
| --- | --- | --- |
| Node runtime (full build) | 43570664322 | runtime manifest `e59893b5…`, handoff `node-runtime-inputs-43570664322` (draft) |
| Edge runtime | 43580020210 | `lean-4.36.0-rc2-wasm64-edge.tar.zst` `7ace5438…`, draft release `lean-4.36.0-rc2-edge-v1` |
| Tiers and C tier, five platforms | 43570763123 | success; not published |
| Language-coverage inventory | 43570728704 | 4565 registrations |
| Inventory, patches, reviews; mixed-driver classification | 43568579178, 43600945265 | see above |
| Unit | 43585783596, 43609570111 | pass |
| UI | 43582348302 | pass |
| Dev loop (pack, editor, cold start, templates) | 43590016162 | pass |
| Linux acceptance (x64, arm64, JS interop, templates) | 43609434994 | pass |
| Upstream suite candidate | 43585787180 | `0.1.0-experimental.20261114110`, release `node-package-43585787180`, sha256 `f74365e3…` (packed from e9cb0eba; later commits change only scripts, tests and evidence) |
| Upstream suite, Linux x64: runtime adapter, eval-io, compiled applications, projects, docparse, lsp, lsp-server | 43607066936, 43607069454, 43607073138, 43607077491, 43620960610, 43622436712, 43622441999 | 1054 compared with the 4.35.0 Phase 3 baseline: 3 regressions, 0 missing, 0 resource stops (below) |
| Superseded shards (dispatched before the mixed-driver classification existed) | 43594416837, 43594419251, 43594423135, 43594427827, 43604749451 | failed at start on the missing evidence file; not results |

The three regressions against the baseline:

- `compile/StackOverflow.lean` and `compile/StackOverflowTask.lean` (compiled
  applications): the deployed program prints Lean's own `Stack overflow
  detected. Aborting.` and exits as native Lean does (134). Lasm then adds
  its advice about `LASM_VM_STACK_MB`, which the byte-exact `.out.expected`
  rejects. This is not a 4.36 change. The advice is from #66 (6507b9eb,
  2026-11-02), which landed after the 4.35.0 baseline was recorded
  (2026-10-22), so `main`'s upstream suite should show it too. It needs a decision: write the
  advice where the comparison ignores it, or have the compiled-application
  comparison accept it.
- `tests/lake/tests/query/test.sh` (projects): the test pipes
  `lake query +A:setup --json | lake env lean --run pretty.lean`. That
  pipeline runs two language-coverage `lake` shims at once, and one read the
  other's half-written `state.json`. This is a harness bug: the shim now writes
  its state atomically. Not re-run: the run paused before the shards were
  dispatched again.

**Stopped by the resource guard without tiers** (page cache of the full
upstream archive, about 3.5 GiB `inactive_file`, as on rc1): Browser build
43586880249, Workers compiler on arm64 and the `workers` job 43586882310
(every other Workers job passes, including pack), WASI 43586884581,
Fullstack `npm run dev` (1 and 2 workers) 43586887028, the error-corpus
candidate leg of the first tooling run (43585783661), and Fastly bindings on
one of two runs (43609570259; 43585783738 passed). These are expected to pass
once tiers are published (step 6).

**Failing because the edge archive is a draft:** an anonymous download of a
draft release's asset returns HTTP 404. Affected: Standard bindings
conformance 43609570172, Differential (release, equivalence, async depth)
43609570196, Dependable tooling fault injection, metamorphic and the error
corpus 43609570130. The suite workflows themselves pass `LASM_EDGE_RUNTIME`
from the edge artifact, so they are not affected. All of these pass once the
edge release is published.

Not run (paused 2026-11-14): the remaining upstream shards (lsp-project,
the four arm64 harnesses), the ecosystem (six runners plus no-system-c), the
five-platform acceptance and the cold-installation gate.

### Switch to stable (4.36.0)

Mechanical, on a branch `lean-4.36` from `main` (or this branch after
merging `main`):

1. `node scripts/lean-upgrade/add-release.mjs 4.36.0`; make it the only release in
   `src/toolchains.json` and set `lean` in `scripts/ci/acceptance-versions.json`.
2. `node scripts/lean-upgrade/bump.mjs 4.36.0-rc2 4.36.0`, then read its `test/` diff.
   Examples, content tutorials and the `porter`/`tandem` checker comments move
   to 4.36.0 only in the release PR.
3. `check-patches.mjs 4.36.0`. Diff `init.cpp`/`init_module.cpp` and the
   `@[extern]` lists against rc2, and look for anything new in `runtime/` or
   `CMakeLists.txt`.
4. Dispatch `lean-upgrade-inventory.yml` (`from=4.36.0-rc2`): initializer list,
   upstream inventory, carried reviews, mixed-driver classification. Commit
   them, and review whatever `carry-reviews` lists and any new mixed driver
   (`classify-mixed.mjs` names them).
5. `library-prebuilt.yml`; `language-coverage-baseline.yml -f harness=inventory`
   and `make-adapter-review.mjs 4.36.0`.
6. `node-linux-runtime.yml` (full build) → pin it (step 4). Then
   `edge-runtime.yml` → pin it, and **publish** the edge release.
7. Run `lean-tiers.yml` with `publish=true` and add the `tiers` block (with
   `c`) to `src/toolchains.json` **before** the suites. That clears the
   resource-guard stops above.
8. Linux acceptance → candidate. Then dispatch the Linux harnesses and the
   ecosystem runs of `scripts/nightly/layout.json` for that candidate
   (`scripts/nightly/driver.mjs` `plannedRuns`), and compare with the 4.35.0
   Phase 3 baseline (`scripts/nightly/compare.mjs`). Re-run
   `tests/lake/tests/query` and settle the two `StackOverflow` tests (above). Bump any ecosystem project that fails to its
   `v4.36.0` tag.
9. Lasm's suites (unit, browser, ui, wasi, workers, fullstack, dx-dev-loop),
   then the release PR with the full five-platform acceptance and the
   cold-installation gate (step 9; docs/RELEASING.md).
