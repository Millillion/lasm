**Windows implementation progressing — 2026-09-26.** Retained `.37` remains accepted on both Linux and both Mac architectures. Native Windows ARM64 SDK and Lean 4.34.1 builds are running; validated ARM64 leantar is retained.

Windows deployment packaging now keeps only its matching native adapter and license, with no POSIX helper dependency. Thirteen focused bundle/support tests passed under a 512-MiB guard (31.2-MiB peak).

The first native isolation campaign failed before Node startup: Windows rejects the reserved LPAC token-information query. Both original reports are preserved. Revised controls verify AppContainer membership and prove reduced access using the same sentinel file in ordinary and less-privileged containers. Native reruns are required; no Windows application pass is claimed.

README reviewed: retained `.37` quick start, CLI examples, Linux/Mac support and exact Lean restrictions still match the released code; Windows remains pending. Next: finish native isolation and toolchain builds. No npm publication. Completion ETA is not yet estimable.
