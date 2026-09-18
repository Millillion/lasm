# Next steps

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

The CI workflow is prepared locally and has not run. It requires a future
authorized remote and manual dispatch. Wine checks, if performed, are separate
compatibility evidence and do not check off native Windows acceptance.

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
