**Milestone:** Basic ordinary Lean-on-Node installation and deployment on native Linux x86-64 and ARM64. In progress.

**Estimated finish:** Not yet estimable; complete x86-64 and ARM64 acceptance remain pending.

**Verified:** Clean runtime build, reproducible package, 77 focused CI checks and two cache-advice controls. Genuine isolated cold x86-64 npm installation, automatic tools, Hello World compilation, build-only deployment and native-versus-Node comparison now pass. The full attempt peaked at 4.32 GiB, with zero OOM or resource abort.

**Current:** Lake encountered a runner-specific denied system Git config include. The isolated consumer now uses empty private Git configs. A small guarded control reproduced that exact failure and verified normal managed-Git operation with the private configs; tool bytes were unchanged. The next campaign also includes three existing Git-environment tests.

**Remaining:** Complete both native workflows on one tarball, retain the tested draft candidate, and finalize acceptance documentation. No npm publication is authorized.
