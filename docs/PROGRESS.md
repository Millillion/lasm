**Installation hardening in progress — 2026-09-29.** Native fault controls pass
all six targets, including Windows file locks/cross-volume recovery, private
CA/proxy transport, process interruption and offline packaging. Candidate
`0.1.0-experimental.36513318119` is packed reproducibly and retained by hash.
Accepted `.46` remains unchanged.

Apple Silicon passed full installed/network acceptance. Linux passed installed
checks before a network-control file-cache resource stop; scoped cache advice
corrects it. Windows ARM64 passed cold/Lake builds before CI report replacement
hit file contention; bounded nonblocking persistence corrects that supervisor.
Limits and package bytes are unchanged. Every failure remains in
[the report](INSTALLATION_HARDENING.md).

Daily validation now selects that exact archive; activation does not claim
acceptance. Corrected controls must pass all six targets, then record three
consecutive cold passes per target across at least 24 hours and two dates.
Preparation/resource failures reset the sequence; guard reports are tested.
Temporal confidence remains pending. README reviewed; npm unpublished. No local heavy builds.
