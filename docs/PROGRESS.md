**Installation hardening implemented — 2026-09-29.** The 152-test fault matrix and
real CLI cache-repair controls pass all six native targets. Windows additionally
passes three report-lock controls. Candidate `0.1.0-experimental.36513318119` is
reproducible and retained by hash; accepted `.46` remains unchanged.

The same candidate now passes complete installed, offline npm, deployment and
CLI/Lake private-CA/proxy gates on Linux, macOS and Windows, each on x86-64 and
ARM64. A subsequent Intel Mac repetition stopped when CI's process accounting
timed out. Paused accounting recovery now passes native regression on both Mac
architectures. A fresh full repetition is running in `36520825246`. Package bytes
and resource limits stayed unchanged. Original failures and the retained pending
confidence report remain in [the report](INSTALLATION_HARDENING.md).

Daily validation is active as monitoring. The additional gate requires three
consecutive cold passes per target; campaigns may run back to back (the 24-hour,
two-date requirement was removed on 2026-10-16). Preparation/resource failures
reset the sequence. The gate passed on 2026-10-16; scheduled runs are best-effort. README reviewed; npm unpublished.
