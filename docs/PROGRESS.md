**Installation hardening in progress — 2026-09-28.** Candidate `.46` remains
unchanged and accepted for the scoped six-platform workflow. Source now includes
bounded/resumable downloads, locale-independent receipts, OS-owned installation
locks, crash staging recovery, shared build leases, explicit offline
`lasm cache repair`, and storage diagnostics. All 116 focused installer/CLI tests
passed under the resource guard; peak was 84.6 MiB, with no resource abort or OOM.
Real child-process kills cover download, extraction, verification and publication.

Remaining: real TLS/proxy coverage, bundled installer dependencies, automatic native fault checks,
durable runtime inputs, new six-platform installed acceptance and scheduled
confidence checks. See [implementation details](INSTALLATION_HARDENING.md).
Completion ETA is not yet estimable until native fault checks run. README was
reviewed and distinguishes accepted `.46` from unaccepted source changes.
Windows 11 x64, broad API parity and other engines remain deferred; npm unpublished.
