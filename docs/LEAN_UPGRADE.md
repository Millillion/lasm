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
allow-lists. It prints every file that still names the old release: per-release
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
natively. The release PR publishes (`publish=true`) and adds the `tiers` block
to `src/toolchains.json`. Until then the branch uses the full upstream archives
(about 600 MB per platform), which also carry Lasm's library.

## 7. Edge runtime

```sh
gh workflow run edge-runtime.yml --ref lean-<version>
```

After the Node runtime is pinned (it reuses its standard-library archives). Pin
the packaged archive in `src/edge-runtimes.json` (new tag
`lean-<version>-edge-v1`; then `draft-release=true` uploads it).

## 8. Upstream suite and Lasm's suites

1. Language-coverage inventory (native Lean against the pristine source; after item 2):
   `gh workflow run language-coverage-baseline.yml --ref lean-<version> -f harness=inventory -f lean=<version>`;
   commit `docs/evidence/lean-<version>-language-coverage-inventory.json` and
   write the adapter review: `node scripts/language-coverage/make-adapter-review.mjs <version>`.
2. Application inventory and source manifest, from the patched tree of step 3
   configured (not built) as the runtime build configures it:
   `node scripts/lean-upgrade/upstream-inventory.mjs <version> .work/lean-upgrade`
   → `docs/evidence/lean-<version>-upstream-*.json` (a few minutes, local).
   It must precede item 1 (the language-coverage inventory reads it).
   Then carry the hash-bound reviews forward:
   `node scripts/lean-upgrade/carry-reviews.mjs <old> <new>` keeps every
   reviewed test whose source and sidecars are byte-identical and lists the
   changed ones for a fresh review (Server MVP adapter, L2/L3 adapter and
   eval-io reviews); regenerate the mixed-driver classification
   (`scripts/application-tests/classify-mixed.mjs`).
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
