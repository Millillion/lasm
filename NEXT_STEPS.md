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
