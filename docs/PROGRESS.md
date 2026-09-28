**Windows ARM64 cold build and Lake pass — 2026-09-28.** Candidate `.46` built and
ran ordinary Lean in Unicode paths using the repaired SDK. Its cold and local
Lake phases passed in run `36429228696`; first build took 719 seconds.

The later native reference compiler failed because CI omitted OpenSSL import
libraries. Peak memory was 1.51 GiB with no resource abort. The CI-only dependency
and an early presence check are now added; the package bytes remain unchanged.
Linux x64 and Apple Silicon already passed this exact archive. Other jobs continue.

Remaining: retry ARM64 with the complete reference toolchain, finish all six
native installed/deployment targets, retain their combined evidence, and update
support docs. README still identifies `.44` as the accepted five-target archive.
No npm publication. A previous Windows x64 suite took 45 minutes; full ARM64
timing is not yet known, so completion ETA is not yet estimable.
