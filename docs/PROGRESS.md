**Milestone:** Basic ordinary Lean-on-Node installation and deployment on native Linux x86-64 and ARM64. In progress.

**Estimated finish:** Not yet estimable; cold installation and ARM64 remain unverified.

**Verified:** The [clean runtime build](https://github.com/Millillion/lasm/actions/runs/36214598592) and native-versus-Node smoke comparison passed. All twelve resource guards released; no OOM or resource abort. Peak stage memory was 3.80 GiB. All 77 focused checks pass in CI. Local warm installed controls and independent deployments remain passing, qualified evidence.

**Current:** The first acceptance campaign safely stopped during combined extraction/packing at its proactive memory limit, with zero OOM events. Extraction and packing now run sequentially under unchanged independent guards; the verified runtime is reused.

**Remaining:** Both native cold-install passes on the same tarball, tested draft candidate, and measured acceptance report. No npm publication is authorized.
