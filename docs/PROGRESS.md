**Installation hardening in progress — 2026-09-29.** Native fault controls pass
all six targets, including Windows file locks/cross-volume recovery, private
CA/proxy transport, process interruption and offline packaging. Candidate
`0.1.0-experimental.36513318119` is packed reproducibly and retained by hash.
Accepted `.46` remains unchanged.

Linux x86-64 passed full installed/deployment acceptance. Its additional network
control hit the proactive guard due to verified-tool file pages, with zero OOM
events. The correction applies the primary suite's scoped cache advice without
changing limits or package bytes. Other native jobs continue. Every failure is
preserved in [the report](INSTALLATION_HARDENING.md).

Daily validation now selects that exact archive; activation does not claim
acceptance. Corrected controls must pass all six targets, then record three
consecutive cold passes per target across at least 24 hours and two dates.
Preparation/resource failures reset the sequence; real guard reports are tested.
ETA depends on native results; temporal
confidence remains pending. README reviewed; npm unpublished. No local heavy builds.
