# Next steps

## Current application product plan — 2026-09-23

These items follow the [updated plan](docs/PLAN.md); the historical milestones
below retain their original, narrower scope.

- [x] Pin the latest stable acceptance baseline: Lean 4.34.1, Node 26.10.0,
  Deno 2.9.7 and stock Bun 1.4.2.
- [x] Provision and verify native Lean/Lake and the compiler SDK on the five
  platforms with upstream distributions; verify private Python on all six.
- [x] Provision and verify native Git clone/fetch, pinned revisions and HTTPS
  transport on all six platforms; SSH and full Lake integration remain open.
- [x] Build the matching full runtime and all 2,516 shipped Lean library modules.
- [x] Verify the first ordinary compiled Lean main in all three stock engines.
- [x] Inventory all 4,069 unchanged upstream test registrations and exclusions.
- [x] Classify the execution obligations of all 111 mixed shell registrations;
  their native and deployed phases still need execution evidence.
- [x] Inventory the declaration and extern surface of all 2,516 compiled latest
  standard modules; implementation and behavioral coverage remain separate work.
- [x] Connect the primary application CLI to verified runtime bundles and managed
  native tools; verify its ordinary Lean main and Lake HTTP project on Linux x64.
- [x] Verify a cold npm candidate install with only Node/npm, automatic tool
  provisioning, and a separate deployment denied access to source/build tools
  on Linux x64; the remaining native platforms are tracked below.
- [x] Build the ordinary Lean HTTP Lake example with the installed candidate and
  pass its native/deployed Vitest checks on stock Node, Deno and Bun on Linux x64.
- [x] Verify an installed candidate's pinned Lake Git dependency, custom source
  roots, symlinked main, cache reuse/invalidation, asset preservation, compatibility
  launchers and relocated deployment in all three stock engines on Linux x64.
- [x] Verify ordinary scripts outside configured Lake targets, preserving package
  compiler options and the above workflow checks in all three engines on Linux x64.
- [ ] Finish and package the primary `lasm Main.lean` / `lasm build Main.lean`
  pipeline with automatic tools, Lake dependencies and reliable cache reuse.
- [ ] Validate the HTTP and Express examples and callable JS/TypeScript bindings
  through that shipping pipeline.
- [ ] Supply and validate native Windows ARM64 Lean and compiler SDK bundles.
  The [native Lean bootstrap](docs/evidence/windows-arm64-lean-bootstrap-complete-2026-09-24.json)
  now passes compiler/Lake, interpreted-main and compiled ARM64-main checks;
  managed relocatable distribution and complete package acceptance remain open.
- [ ] Run unchanged upstream tests through their appropriate native build-time
  and compiled-application paths, including the reviewed mixed drivers.
  [The latest Node compiled-application category](docs/evidence/lean-4.34.1-upstream-applications-node-2026-09-25.json)
  now has 97 deployed passes and four original compilation-disabled cases;
  [parallel AOT controls for those four cases](docs/evidence/lean-4.34.1-compile-disabled-2026-09-25.json)
  now pass in all three engines. Remaining categories and full engine campaigns
  stay open.
- [ ] Audit and differentially test all standard APIs, including IO.FS and Std.Http.
- [ ] Complete source-free deployment and native six-platform acceptance for
  stock Node, Deno and Bun.

See [implementation evidence and open work](docs/APPLICATION_PIPELINE.md).
Passing provisioning or maintainer probes does not close the shipping gates.

## Historical experimental milestones

- [x] Integrate Lake projects, dependencies, and compiler options.
- [x] Finish release packaging: versioned target archives and Wasm sysroot,
  installation tests, package-manager support, and supported-platform checks.
- [x] Build and test browser and cloud adapters with explicit host capabilities.

Completed for the experimental Linux x64 / Lean 4.32.0 build target, Node 24.13.1,
real Chrome, and local Cloudflare workerd. npm, pnpm, and Yarn pass isolated local
package installation and execution tests. No remote, publication, or live cloud
deployment is part of this milestone.

See [developer workflow](docs/DEVELOPER_WORKFLOW.md),
[release packaging](docs/RELEASE.md), and [host adapters](docs/HOSTS.md).

## Cross-platform installation

- [x] Implement macOS/Windows tool discovery, Windows paths, and long linker commands.
- [x] Make the packaged acceptance suite portable and prepare a native OS CI matrix.
- [ ] Validate the same compiler tarball on native macOS Intel and Apple Silicon.
- [ ] Validate the same compiler tarball on native Windows x64 and ARM64.
- [ ] Validate native Linux ARM64 installation and execution.
- [ ] Confirm every matrix result before describing the package as cross-platform supported.

This checklist refers to the older cooperative-runtime package. Current managed
tool CI runs on the authorized GitHub repository, as recorded above. Wine checks,
if performed, remain separate from native Windows acceptance.

## Application development improvements

Proposed improvements, in recommended order:

- [ ] Broaden ordinary Lean standard-library support on Node, retaining the
  requirement that application source uses regular Lean APIs. Audit current
  console/filesystem/server compatibility and extend the internal host primitives
  for further standard APIs and existing Lean libraries.
- [ ] Complete the developer workflow. Add `lasm init` for Node/Lake scaffolding,
  `lasm doctor` for setup diagnostics, and a development command that rebuilds and
  restarts on changes. Provide actionable diagnostics for unsupported APIs.
- [ ] Support richer Lean–JavaScript data types. Extend generated TypeScript
  bindings to records, arrays, `Option`, and explicit success/error results,
  reducing manual JSON plumbing.
- [ ] Improve incremental build performance. Profile build stages and cache
  linking and Asyncify results when their inputs have not changed, with correct
  cache invalidation. Benchmark startup time, memory use, and request throughput.
- [ ] Provide reusable server execution support. Extract the Express example's
  queueing, cancellation, and recovery into reusable utilities. Add worker-backed
  execution for CPU-heavy Lean code, with explicit instance-state ownership and
  deadline handling.
- [ ] Broaden correctness and compatibility coverage. Expand native-Lean-versus-Wasm
  comparisons, randomized boundary tests, and long-running resource tests. Document
  a library compatibility matrix and add an example with proven Lean domain
  invariants, making the compiler/runtime trust boundary explicit.

## First integration milestone

The console/filesystem/HTTP-server milestone now has a complete ordinary Lean
application, an automatically generated main runner, and native/Wasm Vitest tests;
see [the example](examples/lean-server/README.md).

- [ ] Add scaffolding and watch/restart support around the ordinary Lean main workflow.
- [ ] Evaluate an existing Lean database library and its runtime dependencies
  before choosing the next integration; avoid introducing a Lasm-specific Lean API.
