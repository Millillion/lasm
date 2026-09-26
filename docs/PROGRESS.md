**Bundle size remains open — 2026-09-26:** Jordan clarified that multi-gigabyte deployments are unacceptable. Ordinary-app reductions remain verified, and candidate `.34` passed native Linux x86-64 and ARM64. Its exact archive is retained and checksum-verified.

The 2.39 GB fallback includes 2.21 GB of broadly copied module data. Read-only inventory found 1.36 GB of private data and 119 MB of editor/server files. The pinned loader references these serialized regions together; deleting them blindly could break behavior. The full symbol registry also retains broad compiled code.

**Next:** Separate runtime capabilities, package proven module dependencies, narrow compiled symbol retention, and enforce deployment-size budgets. Open-ended imports need an explicit deployment dependency policy. These are proposals, not implemented reductions. See [BUNDLE_SIZE.md](BUNDLE_SIZE.md). No new heavy build or npm publication.
