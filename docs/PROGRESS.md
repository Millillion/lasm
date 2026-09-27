**Native Windows long paths passed — 2026-09-27.** Run `36291957364` passed standalone Lean, Lake configuration variants, interpreter adapters, and local-import C generation with a 289-character original module path. The unchanged upstream-path control still fails as expected. The short physical bin layout fixes the previously recorded child-compiler failure; its native guard peaked at 2.12 GiB with over 10 GiB host memory available.

Read-only streamed audits verified the ARM64 SDK and leantar archives, including named compiler licenses. Local audit peaks stayed below 65 MiB. Candidate `.42` installed checks and the ARM64 Lean build are still running. See [Windows evidence](WINDOWS_TOOLCHAINS.md).

README reviewed against the CLI and verified support contract. Retained `.37` remains accepted; Windows remains unsupported until complete installed checks pass. Next: resolve remaining native acceptance and ARM64 distribution gates. No npm publication. Completion ETA is not yet estimable.
