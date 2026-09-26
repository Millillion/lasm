**Linux AOT accepted; macOS validation in progress — 2026-09-26.** Candidate `.35` is retained with Linux x86-64/ARM64 passes and 2.67–3.61 MB deployments. `.36` Linux regression is running. Intel Mac passed cold CLI/Hello and Lake, then its native comparison harness failed while resolving standard-library source paths. Native comparisons now invoke Lean directly, independently of Lasm discovery.

Apple Silicon's `wasm-ld` hit the old RSS threshold with 3.12 GB still available. The revised guard separates RSS (at most 40% of RAM) from continuously checked host availability. The 1.5 GiB reserve, compression stop, one worker and disk reserve remain; no kernel hard cap is claimed. Earlier aborts remain recorded.

README reviewed: exact `.35` setup/commands, runtime exclusions, Macs/Windows pending. Next: recheck unchanged `.36` on both Macs, then Windows. No npm publication. Completion ETA is not yet estimable.
