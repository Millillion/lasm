**Windows validation resumed — 2026-09-28.** The ARM64 Lean build reached its
deadline during DLL linking, at a 1.91-GiB peak; it did not finish distribution
validation. The retry uses two bounded jobs and retains completed compiler-cache
objects between fresh builds. Five archive controls passed locally, including
recipe and corruption rejection, at a 31.7-MiB peak. Native cache reuse is checked
before the expensive build. Memory limits remain unchanged.

The user-paused `.42` and queued `.43` runs are cancelled, not compatibility
results. Node 26.10.0 and Lean 4.34.1 remain current. README reviewed: retained
`.37` is accepted on both Linux and macOS architectures; Windows remains
unsupported. Next gates are installed `.43`, a validated ARM64 tool distribution,
and the complete native matrix. Evidence: [Windows implementation](WINDOWS_TOOLCHAINS.md).
No npm publication. Completion ETA is not yet estimable.
