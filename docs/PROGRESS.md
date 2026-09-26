**Linux AOT accepted; macOS validation in progress — 2026-09-26.** Candidate `.35` is retained with verified Linux x86-64/ARM64 passes and 2.67–3.61 MB deployments. Candidate `.36` is reproducibly packed; its Linux regression and Intel Mac suite are running.

Apple Silicon passed installation/sandbox controls but its cold build reached the proactive 1.29 GB RSS threshold. The monitor terminated all descendants cleanly while 3.10 GB host memory remained available; no OOM occurred. This is a resource abort, not a Lean assertion failure. Before adjusting limits, the next run will preserve live compiler logs and process names to identify the expensive step. Previous evidence is preserved; package bytes remain unchanged.

README reviewed: exact setup and commands, runtime exclusions, Mac/Windows still unverified. Next: diagnose the guarded ARM build, finish both macOS acceptances, then Windows. No npm publication. Completion ETA is not yet estimable.
