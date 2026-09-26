**Milestone:** Basic ordinary Lean-on-Node installation and deployment on native Linux x86-64 and ARM64. In progress.

**Estimated finish:** Not yet estimable; native cold acceptance remains pending.

**Verified:** Clean runtime build and native-versus-Node smoke comparison; 77 focused CI tests; reproducible candidate packing. Separating extraction from packing lowered peak packing memory to 1.01 GiB under the unchanged cap. Local warm installed controls and copied deployments pass.

**Current:** Cold x86-64 stopped proactively at 5.12 GiB, including 4.60 GiB of inactive file cache and only 326 MiB of process memory. No OOM occurred. A CI-only sidecar now advises completed tool pages as disposable under the same guard; two small guarded controls preserve file contents and verify lifecycle. Consumer isolation remains unchanged.

**Remaining:** Both native cold-install passes on one tarball, tested draft candidate, and measured acceptance report. No npm publication is authorized.
