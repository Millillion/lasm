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
