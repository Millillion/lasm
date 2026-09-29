**Installation hardening in progress — 2026-09-28.** Candidate `.46` remains
unchanged and accepted for the scoped six-platform workflow. Source now includes
bounded/resumable downloads, locale-independent receipts, OS-owned installation
locks, crash recovery, leases, offline repair, storage diagnostics and a bundled,
locked installer dependency graph. All 127 fault controls passed locally under
the guard (126.2 MiB peak), including real TLS/proxy/private-CA traffic, process
kills and empty-cache offline npm installation. No resource abort or OOM.

Automatic six-platform fault CI is configured for relevant pushes/PRs; native
results are pending. Remaining: durable runtime inputs, full CLI/Lake network
checks, new six-platform installed acceptance and scheduled
confidence checks. See [implementation details](INSTALLATION_HARDENING.md).
Completion ETA is not yet estimable until native fault checks run. README was
reviewed and distinguishes accepted `.46` from unaccepted source changes.
Windows 11 x64, broad API parity and other engines remain deferred; npm unpublished.
