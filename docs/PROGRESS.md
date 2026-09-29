**Installation hardening in progress — 2026-09-29.** Accepted `.46` is unchanged.
Source includes resilient downloads, locks, crash recovery, offline repair,
storage diagnostics and locked bundled installer dependencies. Earlier native
fault controls passed all six targets; latest Linux/macOS controls also passed.

The new Windows sharing-violation test exposed excessive recursive cleanup
retries and fixture cleanup ordering; README generation exposed CRLF handling.
These are corrected, with bounded local regression tests passing. Native
revalidation remains. Failures and guard measurements are preserved in
[the report](INSTALLATION_HARDENING.md); no OOM occurred.

Authenticated draft retrieval and the budgeted handoff to read-only CI jobs
passed. Full candidate installation, CLI/Lake proxy/CA acceptance and actual
multi-day repetitions remain. Workflow queues preserve pending campaigns and
separate standalone faults from candidate faults. Daily reporting is inactive until
initial acceptance; its gate requires three cold passes per target over 24 hours
and two dates. ETA not yet estimable. README reviewed; npm unpublished.
