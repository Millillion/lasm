**Native AOT Linux x86-64 and ARM64 passed — 2026-09-26.** Candidate `.35` is retained and independently checksum-verified; its eight deployments are 2.67–3.61 MB with no large fallback. Candidate `.36` packed reproducibly and Linux regression is running.

Native macOS resource and basic filesystem/network isolation controls passed on both architectures. The first installed Apple Silicon test exposed a harness omission: macOS `/bin/sh` executes `/bin/bash`, which the profile denied. The profile now permits both stock OS shells, and the control verifies this launch path. Package bytes are unchanged. A separate native macOS recheck can reuse the authenticated archive without repeating Linux builds.

README reviewed: exact `.35` setup, all CLI commands, runtime exclusions, macOS/Windows still pending. Next: rerun macOS installed acceptance for `.36`, preserve resource/failure evidence, then implement Windows after both Macs pass. No npm publication. Completion ETA is not yet estimable.
