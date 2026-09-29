**Installation hardening in progress — 2026-09-29.** Accepted `.46` is unchanged.
Source adds bounded/resumable transfers, OS locks, crash recovery, offline repair,
storage diagnostics and locked bundled installer dependencies. The first native
fault matrix passed all six targets. Latest local controls: 133 passed, two
Windows-only skips, 132.8 MiB guard peak, no resource abort.

Two `.47` campaigns exposed CI authentication boundaries, preserved in
[the report](INSTALLATION_HARDENING.md). Draft retrieval now precedes guarded
extraction and uses a separate preparation job; test jobs remain read-only.
The final changed package, full CLI/Lake proxy/CA checks and new native Windows
file-lock/cross-volume controls still need acceptance.

Daily confidence reporting is implemented but inactive until initial acceptance.
Its gate requires three cold passes per target over at least 24 hours and two
dates. ETA is not yet estimable. README reviewed; npm unpublished. Broader API
parity, other engines and Windows 11 x64 remain deferred.
