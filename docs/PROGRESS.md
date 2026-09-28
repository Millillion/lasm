**Windows prerequisite traversal corrected — 2026-09-28.** Candidate `.43` failed
before installed execution: the isolation harness hit its parent deadline while
resolving nearly 19,000 CodeQL directories. Discovery now uses cached directory
metadata and resolves roots and reparse entries only. Full traversal, junction
handling and file denials remain required. Two local controls passed for deep
Unicode paths, tool discovery, aliases and cycles, using 9.7 MiB; native junction
and isolation checks will run against the unchanged archive.

Linux and macOS rechecks remain in progress. ARM64's real compiler-cache control
passed and its bounded Lean build is running. The verified source/notices archive
is retained as an unpublished draft.

README reviewed: `.37` remains accepted on Linux/macOS; Windows is unsupported.
Remaining gates: native installed results, ARM64 distribution and complete matrix.
No npm publication. Completion ETA is not yet estimable.
