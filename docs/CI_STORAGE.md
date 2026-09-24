# Included CI checkpoint storage

The product plan permits CI artifacts and caches only within included allowances.
[GitHub's billing rules](https://docs.github.com/en/billing/concepts/product-billing/github-actions),
rechecked on 2026-09-24, distinguish the repository's **10 GiB cache allowance**
from the account's shared Actions artifact/GitHub Packages allowance. The repository
cache-usage API reported zero active caches before this control was prepared.
No paid runner, storage-limit increase, billing setting or npm publication is used.

`scripts/ci/cache-budget.mjs` verifies the repository is public and reads both the
cache-usage metric and paginated cache inventory immediately before upload. It
uses the larger byte total and reserves extra tar/compression overhead. Uploads
are refused if they could cross an **8 GiB repository ceiling**. Each upload must
be a single prebuilt regular file of at most **2 GiB**, under `.work/`.
Missing API data, invalid byte counts or unknown repository eligibility fail the
check before authorizing an upload.

Every workflow which writes a Lasm cache must use the repository-wide
`lasm-cache-writer` concurrency group with cancellation disabled. Upload only the
measured payload after its budget check. Cache keys must be specific to the
verified build inputs; compiled checkpoints must retain checksums and provenance.
Do not include credentials or unrelated workspace files. A completed restore
must be verified before cached tools or build products are used.

The separate `cache-control.yml` workflow tests a tiny payload on the standard
native Windows ARM64 runner: budget check, save, local removal, exact-key restore,
hash/length comparison, and deletion of that disposable cache. It uploads no
Actions artifacts. Local budget-boundary controls pass without large allocations;
the hosted control also passed on native Windows ARM64. Its 119-byte payload
produced a 296-byte cache, restored with the expected checksum, and was deleted.
A fresh repository API check confirmed zero active caches afterward. See the
[control evidence](evidence/ci-cache-control-2026-09-24.json). This control does
not establish that a full compiler checkpoint or end-user distribution is ready.

The next [native compiler-cache control](evidence/compiler-cache-control-2026-09-24.json)
also passes on Windows ARM64. It compiles and executes an ARM64 C program,
checks a cache hit, packages only completed ccache entries, then deletes the
local cache and restores it through Actions. Archive, identity and individual
file checksums are verified before reuse. Recompilation produces another cache
hit and the identical object; the executable again prints `42`. The 10,371-byte
archive occupied 7,552 bytes in Actions and was deleted after verification.
The live cache inventory was empty afterward; the usage metric briefly retained
the old entry, which the budget check handles conservatively. This establishes
small native-object reuse, not completion or restoration of a full Lean build.

The Windows guard's optional deadline has also passed on native x64 and ARM64:
it stops both parent and child before checkpoint collection, with a separate
time-limit status. It does not change the existing memory limits. See the
[deadline controls](evidence/windows-guard-deadline-2026-09-24.json).

The Lean ARM64 bootstrap now uses these controls for bounded resumptions. Its
compiler phase stops after 260 minutes, leaving time inside the 330-minute job
for ccache cleanup, hashing and upload. A fresh source/build tree is created on
every runner. Only completed compiler-cache entries are carried forward; no
interrupted object, olean or CMake build tree is restored. The recipe identity
includes source commit, build/patch scripts, tool/package versions and workspace
path. Ccache checks compiler content and is capped at 1 GiB. Checkpoint archives
also retain the 1.5 GiB expanded-data and 2 GiB upload limits.

Restoration selects the newest exact recipe on `main`, verifies its archive hash,
recipe and every file, then allows compilation. After a verified save, pruning
keeps that checkpoint and one fallback, touching only this workflow's recognized
keys on `main`. Other caches remain part of the repository-wide budget check.
Selection/pruning controls pass locally. The full resumable bootstrap still needs
native CI evidence; saving a checkpoint never counts as completing Lean.
