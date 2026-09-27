**Windows pipe diagnosis verified — 2026-09-27.** Both native architectures reproduce stock Node child-pipe timeouts without traversal privilege and success with it. The CI harness now retains only that ordinary privilege and directly denies developer executables and source/cache files, including junction targets. Full online/offline controls still require verification; diagnostic success is not application acceptance. Failed runs and resource records are preserved.

The native ARM64 SDK passed relocation, managed extraction, Wasm32/64 threads/exceptions, and cache reuse; its 174.8 MB archive remains in a checksummed draft. Native Lean is still building.

README reviewed against CLI commands, prerequisites, and capability restrictions: retained `.37` remains the four-platform Linux/Mac candidate; Windows remains unsupported. Next: native controls, Windows x64 installation, ARM64 Lean distribution and acceptance. No npm publication. Completion ETA is not yet estimable.
