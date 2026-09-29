**Installation hardening in progress — 2026-09-29.** The 144-test fault matrix and
real CLI cache-repair controls pass all six native targets. Windows additionally
passes three report-lock controls. Candidate `0.1.0-experimental.36513318119` is
reproducible and retained by hash; accepted `.46` remains unchanged.

The same candidate now passes complete installed, offline npm, deployment and
CLI/Lake private-CA/proxy gates on both Linux/Mac architectures and Windows x86-64.
Windows ARM64 remains running after its original CI report-write failure.
The corrected Linux network test peaked at 1.26 GiB with zero memory events.
Resource limits and package bytes stayed unchanged; all failures remain in
[the report](INSTALLATION_HARDENING.md).

Daily validation is active. The additional gate requires three consecutive cold
passes per target spanning 24 hours and two dates. Preparation/resource failures
reset the sequence. Temporal confidence remains pending; ETA depends on native
results. README reviewed; npm unpublished.
