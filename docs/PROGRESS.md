**Installation hardening in progress — 2026-09-28.** Candidate `.46` remains
unchanged and accepted for the scoped six-platform workflow. Source now includes
bounded/resumable downloads, locale-independent receipts, OS-owned installation
locks, crash recovery, leases, offline repair, storage diagnostics and a bundled,
locked installer dependency graph. All 127 fault controls passed locally under
the guard (126.2 MiB peak), including real TLS/proxy/private-CA traffic, process
kills and empty-cache offline npm installation. No resource abort or OOM.

The first automatic fault run passed on all six native targets (127 checks on
POSIX; 124 plus three inapplicable skips on Windows). Durable authenticated
runtime/candidate handoffs and full CLI/Lake proxy/CA controls are implemented;
new installed acceptance and scheduled confidence checks remain. See
[implementation details](INSTALLATION_HARDENING.md).
ETA depends on native acceptance results and the multi-day gate. README was
reviewed and distinguishes accepted `.46` from unaccepted source changes.
Windows 11 x64, broad API parity and other engines remain deferred; npm unpublished.
