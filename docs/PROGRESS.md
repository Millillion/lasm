**Five-platform candidate retained — 2026-09-28.** The exact `.44` archive passed
native installed/deployment checks on Linux and macOS x64/ARM64 plus Windows x64.
Run `36398226921` retained it with a combined acceptance receipt; GitHub's stored
digest matches the tested hash. README and support documentation now use `.44`,
with complete commands, exact platform boundaries and runtime exclusions.

Windows ARM64's first native compiler build passed with a 2.53-GiB peak, but
archive retention failed. Retention now checks draft storage before building and
saves distributions independently before compiler caches. The storage and revised
archive-preservation controls passed natively in `36397277364`; its guarded
compiler rebuild is running.

Remaining gates: retain/audit/distribute native ARM64 Lean, connect its catalog,
and accept one exact candidate on all six targets. ARM64 remains unsupported;
broader API parity is deferred. No npm publication. Completion ETA is not yet estimable.
