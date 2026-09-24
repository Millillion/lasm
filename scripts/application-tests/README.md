# Managed application upstream tests

This parallel harness uses the pinned Lean 4.34 source archive and the recorded
upstream inventory. It verifies every original test/helper file and symlink
before and after execution. Run one campaign at a time through the existing
resource guard; application execution also requires the base-page wrapper for
its linker subprocesses.

Prepare a fresh campaign with:

```sh
node scripts/full-lean/run-bounded.mjs -- \
  env LASM_TOOLCHAIN_CACHE=/absolute/managed-cache \
  node scripts/application-tests/prepare.mjs \
  .work/application-campaign compiled-application node /absolute/node \
  /absolute/project/node_modules/@lasm/compiler '^compile/'

node scripts/full-lean/run-bounded.mjs -- \
  python3 scripts/full-lean/base-pages.py \
  node scripts/application-tests/run.mjs .work/application-campaign/manifest.json
```

`compiled-application` selects the registered application cases. The filter is
optional; its default includes every case in that category. `native-build-time`
selects managed native compiler checks, with no deployed-runtime pass implied.
`compiled-test-driver` selects the 202 documentation-parser inputs. Preparation
compiles their original `run_test.lean` once through the installed CLI; run this
preparation under the base-page wrapper as well. Each input then runs through
the original native shell driver and a second invocation of that same driver
whose exact `lean --run` command executes the compiled application. The shared
deployment and its build/hash evidence remain in the campaign directory.
`compiled-driver-and-native-compiler` with filter `^server_interactive/` similarly
compiles the original LSP client/driver once for its 150 inputs. Its exact
`lean --server` child command still runs the managed native compiler; that
invocation is recorded explicitly. This tests the deployed client's process,
pipe, JSON and filesystem behavior while keeping native compiler behavior
separate. The four `^server/` clients compile separately through their mapped
adapter. The `^misc_dir/server_project$` adapter compiles a byte-identical copy
of the standard-library-only client in a separate release-pinned directory,
preserving the original project's stage-directory pin. Its native Lake build
and server commands remain explicit native coverage. Select these three LSP
groups separately; unexpected child commands fail explicitly. No parser or LSP
campaign result is implied by harness support alone.
The target and engine arguments accept Node, Deno or Bun. The harness itself
requires Linux, Bash, GNU tar, CTest, Perl and diff, as used by the upstream
drivers. End-user tool provisioning is tested separately.

`integration/application-upstream-projects.mjs` handles the reviewed upstream
`path with spaces` and `def_clash` Lake projects. Run each engine/project pair
in a fresh directory:

```sh
node scripts/full-lean/run-bounded.mjs -- \
  env LASM_TOOLCHAIN_CACHE=/absolute/managed-cache \
  python3 scripts/full-lean/base-pages.py \
  node integration/application-upstream-projects.mjs \
  .work/project-comparison node /absolute/node \
  /absolute/project/node_modules/@lasm/compiler \
  /absolute/pristine-upstream-source 'path with spaces'
```

The original native shell driver runs unchanged. Independent installed builds
then test cache reuse, paths with a prefix-shadowing file, or the original
duplicate-definition error conditions. Successful applications run after
relocation with all build-source copies hidden and PATH empty. Native driver
checks and deployed comparisons are recorded separately; this adapter does not
claim to map the other mixed-project registrations.

For an application, the original native compile/interpreter driver executes
first. The parallel driver then uses the installed Lasm CLI and selected engine
with the original source, argument sidecars, before/after scripts, output
normalization and expected-output/exit assertions. Upstream's four
compile-disabled cases remain explicitly untested as deployed applications.
Unmapped additional compiler flags fail explicitly. The generated per-pile
`lean-toolchain` selects the same release as the managed native control while
preserving upstream's original stage-directory pin.

For the four compile-disabled inputs, a separate campaign can supply
`probe-compile-disabled` after its exact filter. This leaves their original
markers and driver intact, runs that driver first, then adds a native AOT control
and an installed-Lasm AOT attempt with the original assertions. Native AOT
failures are recorded in their own phase. These additional experiments do not
relabel the original upstream-disabled registrations as upstream compilation
passes.

The four extra AOT controls also record every intercepted native Lean invocation,
including the completion benchmark's actual native language-server processes.
The separately recorded [three-engine result](../../docs/evidence/upstream-compile-disabled-all-engines-2026-09-24.json)
does not change the default compilation-disabled markers.

Each case has a 900-second deadline and CTest runs with one job. The resource
report distinguishes memory/pressure aborts from behavior failures. Case reports
record the native/build/runtime phase, package build inputs and Wasm hash.
Successful large outputs and per-case compilation caches are removed to bound
disk usage; failure artifacts and all diagnostics remain. Always prepare a new
campaign directory after a repair. Source and harness hash checks accompany
every completed execution. Campaigns require 4 GiB of disk headroom and stop with
a separate resource status if free space falls below that reserve; they do not
delete failure evidence to make room.
`--minimum-free-disk-mib N` may raise (never lower) that reserve, including for
a safe preflight-refusal check without allocating disk space. For broad campaigns
disable core dumps in the bounded command with `ulimit -c 0`; the original test
assertions still run, while intentional native crashes cannot fill the disk.

The native CI workflow partitions registrations across one, two or four standard runners,
with at most two jobs running at once. Every runner still executes one CTest
job. Tool/source preparation and execution are sequential, separately guarded
phases, each preserving the same host headroom and proactive memory policy.
Preparation's download/extraction allocations do not remain in the execution
process tree. Both resource reports remain in the workflow log.

The first broad native campaign passed 1,813 of 3,497 registrations before the
proactive memory guard stopped it, with no OOM or throttling events. The
`remaining-2026-09-23` selection checks that preserved evidence against the
unchanged inventory and assigns every one of its 1,684 uncompleted cases to
exactly one shard. `all` assigns the complete category. No test, timeout, driver,
or expected output is changed by partitioning. Native compiler passes are not
deployed application passes.

The separately guarded second campaign completed all registrations: 3,495 passed
with a 2.32 GiB peak and no OOM, throttling or proactive stop. Two source symlinks
were rejected before execution because the per-case verifier compared their
contents with an absent per-registration hash. Preparation now resolves expected
content hashes through the immutable source manifest, retaining the original link
checks and target checks. `remaining-r3-2026-09-23` selects those two cases; use
two shards. The first campaign's resource-stop evidence remains intact.

That campaign also exposed lost shard settings at the resource boundary, causing
the complete category to be selected. Duplicate jobs were cancelled. Selection
and shard numbers are now mandatory command arguments, checked again against
the prepared manifest before execution. They do not depend on environment
variables surviving the guard.

The numeric and private-import Lake projects have a separate application harness:

```sh
node scripts/full-lean/run-bounded.mjs -- \
  python3 scripts/full-lean/base-pages.py \
  node integration/application-upstream-packages.mjs \
  .work/numeric-node-ofScientific node /absolute/path/to/node \
  /absolute/path/to/installed/compiler /absolute/path/to/pristine/reference \
  ofScientific
```

Select `float`, `ofScientific` or `exe_private_lean_import`, and use a fresh output
directory for each engine/case. The reference is an extracted Lean 4.34 tree
verified against all 7,669 recorded source entries. This harness runs the original shell driver in
an independent package copy, then compares the native executable with a build
through the installed Lasm CLI. An existing upstream stage-directory toolchain
pin remains unchanged in both original copies. For that case, a separate
application copy retains every other original byte and receives an ordinary
release pin, with both source inventories checked. All source copies are hidden
before the relocated deployment executes. The complete original vendored datasets are
copied as deployment assets; no input filters or changed assertions are used.
Every per-file vector count, failure count and total must match. Float timings
remain in raw logs but are excluded from the comparison. Its original program
explicitly invokes `gzip`; the runtime PATH contains only that recorded external
dependency. The other projects run with an empty PATH. The private-import case
retains the original environment-initialization assertion and additionally
compares the entire native and deployed output. The parallel
harness allows thirty minutes per phase within the same memory guard and
records timeouts separately from behavior failures. Harness availability alone
is not acceptance evidence.

`integration/application-upstream-runtime-imports.mjs` takes
`NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER PRISTINE_REFERENCE` under the same
resource guard and base-page profile. It runs the unchanged `pkg/user_attr_app`
native driver, builds its original main through the installed CLI, and compares
native and deployed runtime imports. A separate ordinary Lean fixture repeats
the original three attribute assertions at runtime. A missing-standard-data
control must fail identically in both executables. Original sources, the
supplementary fixture and copied module data are checked for changes.

Project metadata is copied as explicit runtime input; standard metadata remains
at the verified managed prefix. Both controls select those inputs with ordinary
`LEAN_SYSROOT` and `LEAN_PATH`. Source copies are hidden and PATH is empty, but
this probe does not establish automatic metadata packaging or self-contained
deployment. Its native supplementary executable uses `-rdynamic`, matching the
original Lake `supportInterpreter` setting on Linux.
