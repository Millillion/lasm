**Six-platform Node milestone complete; robustness review complete — 2026-09-28.**
Candidate `.46` remains unchanged and accepted for the scoped installed/deployment
workflow. The new [installation review](TOOLCHAIN_ROBUSTNESS.md) separates that
compatibility evidence from installation reliability.

All 59 focused existing tests passed. Thirteen small fault scenarios reproduced
single-attempt download failures, a fixed total deadline, locale-dependent cache
rejection, abandoned staging, duplicate concurrent downloads and misleading
post-publication cleanup failure. Audit source matches the candidate. Maximum
memory was 100.8 MiB with no resource abort or OOM.

All workflows currently require manual dispatch or reusable calls; `main` has no
required checks. The report proposes automatic fault tests, repeatable packaging,
six-platform acceptance and live distribution checks. Product code and CI settings
were not changed. Hardening implementation is for discussion; ETA not yet estimable.
Windows 11 x64, full API parity and other engines remain deferred; npm unpublished.
