**Installation hardening in progress — 2026-09-29.** The final 139-control matrix
passed all six native targets: 136 applicable passes and three platform-specific
skips each, no resource stops. Real Windows locked-file/cross-volume recovery,
Unicode/locale handling, inherited tool settings, network faults and offline npm
packing passed. Accepted `.46` remains unchanged.

Candidate `0.1.0-experimental.36513318119` is packed reproducibly and retained by
hash; its Node/npm-only installed/deployment and full CLI/Lake private-CA/proxy
campaign is running. Earlier failures remain in [the report](INSTALLATION_HARDENING.md).

The confidence collector rejects real failed campaigns, duplicate trials and
single green retries after failure. Daily reporting stays inactive until initial
acceptance, then requires three consecutive cold passes per target across at
least 24 hours and two dates. Those observations remain pending. ETA depends on
native results; the temporal gate cannot be completed today. README reviewed;
npm unpublished. Interrupted draft uploads now recover without replacing valid
assets or evidence; controls and read-only reuse passed. No OOM.
