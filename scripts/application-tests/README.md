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
The target and engine arguments accept Node, Deno or Bun. The harness itself
requires Linux, Bash, GNU tar, CTest, Perl and diff, as used by the upstream
drivers. End-user tool provisioning is tested separately.

For an application, the original native compile/interpreter driver executes
first. The parallel driver then uses the installed Lasm CLI and selected engine
with the original source, argument sidecars, before/after scripts, output
normalization and expected-output/exit assertions. Upstream's four
compile-disabled cases remain explicitly untested as deployed applications.
Unmapped additional compiler flags fail explicitly. The generated per-pile
`lean-toolchain` selects the same release as the managed native control while
preserving upstream's original stage-directory pin.

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
