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
