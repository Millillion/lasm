**Installation hardening in progress — 2026-09-29.** Accepted `.46` is unchanged.
The corrected 137-control fault matrix passed all six native targets, including
real Windows deny-delete handles and cross-volume NTFS copies. Windows cleanup
now exhausts one bounded retry budget; CRLF README generation is fixed. Failures
remain in [the report](INSTALLATION_HARDENING.md); no OOM occurred.

Source now also preserves managed Lean/Git path precedence and strips conflicting
Windows environment aliases. Focused checks passed (51 MiB peak); full installed
acceptance adds an offline Lake profile with unrelated developer settings.

Durable authenticated candidate retrieval and read-only handoff passed. Final
candidate installation, CLI/Lake private-CA/proxy acceptance and observed multi-day
repetitions remain. Daily reporting stays inactive until initial acceptance, then
requires three cold passes per target across 24 hours and two dates. ETA not yet
estimable. README reviewed; npm unpublished. Broader API parity remains deferred.
