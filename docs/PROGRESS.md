**Installation hardening in progress — 2026-09-28.** Candidate `.46` remains
unchanged and accepted for the scoped six-platform workflow. New source changes
add locale-independent receipt verification, bounded network retries/backoff,
separate deadlines, strong-ETag range resume, HTTPS-only redirects and nested,
redacted diagnostics. All 63 focused download/archive tests passed under the
resource guard; reported peak was 52.6 MiB, with no resource abort or OOM.

Remaining: cross-process installation/recovery, explicit safe repair, storage and
proxy coverage, bundled installer dependencies, automatic native fault checks,
durable runtime inputs, new six-platform installed acceptance and scheduled
confidence checks. See [implementation details](INSTALLATION_HARDENING.md).
Completion ETA is not yet estimable until native fault checks run. README was
reviewed and distinguishes accepted `.46` from unaccepted source changes.
Windows 11 x64, broad API parity and other engines remain deferred; npm unpublished.
