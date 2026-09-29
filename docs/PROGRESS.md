**Installation hardening implemented — 2026-09-29.** The 144-test fault matrix and
real CLI cache-repair controls pass all six native targets. Windows additionally
passes three report-lock controls. Candidate `0.1.0-experimental.36513318119` is
reproducible and retained by hash; accepted `.46` remains unchanged.

The same candidate now passes complete installed, offline npm, deployment and
CLI/Lake private-CA/proxy gates on Linux, macOS and Windows, each on x86-64 and
ARM64. Windows ARM64 completed the sixth target. Resource limits and package bytes
stayed unchanged; original failures remain in [the report](INSTALLATION_HARDENING.md).
The remaining repeat jobs and combined-report retention are being verified.

Daily validation is active. The additional gate requires three consecutive cold
passes per target spanning 24 hours and two dates. Preparation/resource failures
reset the sequence. Temporal confidence remains pending; scheduled runs are
best-effort. README reviewed; npm unpublished.
